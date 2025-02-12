void __fastcall QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  Il2CppObject *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_Dictionary_int__object__o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4BC482A & 1) == 0 )
  {
    sub_1C1ABD4(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v4);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v5);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v7);
    sub_1C1ABD4(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v8);
    byte_4BC482A = 1;
  }
  v9 = (Il2CppObject *)sub_1C1AE20(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v9;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (Il2CppObject *)sub_1C1AE20(BlankEarthQuestAfterAction_TypeInfo);
  System_Object___ctor(v16, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v16;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int64_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v23,
    (const MethodInfo_32D1F14 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v23;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.commandTypeIds, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v30;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.svtVoices, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_387ACC0 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
}


void __fastcall QuestAfterAction__CallEndAct(QuestAfterAction_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_endAct; // x0
  System_Action_o *endAct; // t1

  endAct = this->fields.endAct;
  p_endAct = (PartyOrganizationUtility_o *)&this->fields.endAct;
  p_endAct->klass = 0LL;
  sub_1C1AB78(p_endAct, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endAct, 0LL);
}


bool __fastcall QuestAfterAction__CheckChangeBlankEarth(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  bool result; // w0
  __int64 v12; // x1
  Il2CppObject *Instance; // x19
  __int64 v14; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t v16; // w22
  _QWORD *p_image; // x21
  Il2CppObject *v18; // x21
  int32_t v19; // w22
  TerminalPramsManager_c *v20; // x0
  int32_t v21; // w20
  __int64 v22; // x8
  unsigned int *v23; // x19
  __int64 v24; // x23
  unsigned __int64 v25; // x24
  __int64 v26; // x25
  int i; // w26
  int64_t v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BC4810 & 1) == 0 )
  {
    sub_1C1ABD4(&QuestAfterAction_Command___TypeInfo, method);
    sub_1C1ABD4(&QuestAfterAction_Command_TypeInfo, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_1266/*"1"*/, v10);
    byte_4BC4810 = 1;
  }
  entity = 0LL;
  if ( this->fields.BlankEarthTargetWarId > 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC484B )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
    byte_4BC484B = 1;
  }
  v14 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v14 + 184) + 102LL) )
  {
    if ( !Instance )
      goto LABEL_76;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC27F4 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
      byte_4BC27F4 = 1;
    }
    v14 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v16 = *(_DWORD *)(*(_QWORD *)(v14 + 184) + 20LL);
    if ( !byte_4BC27F3 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4BC27F3 = 1;
    }
    if ( !*(_DWORD *)(v14 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_76;
    p_image = QuestPhaseDetailAddMaster__GetAfterAction(
                (QuestPhaseDetailAddMaster_o *)MasterData_object,
                v16,
                *(_DWORD *)(*(_QWORD *)(v14 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_60;
    v18 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC27F4 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
      byte_4BC27F4 = 1;
    }
    v14 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v19 = *(_DWORD *)(*(_QWORD *)(v14 + 184) + 20LL);
    if ( !byte_4BC27F3 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4BC27F3 = 1;
    }
    if ( !*(_DWORD *)(v14 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v18 )
      goto LABEL_76;
    p_image = QuestPhaseDetailMaster__GetAfterAction(
                (QuestPhaseDetailMaster_o *)v18,
                v19,
                *(_DWORD *)(*(_QWORD *)(v14 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_60;
    v14 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v14 + 224) )
    j_il2cpp_runtime_class_init_0(v14);
  if ( !byte_4BC484E )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
    byte_4BC484E = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  if ( !v20->static_fields->_IsQuestClear_k__BackingField )
    return 0;
  if ( !v20->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v20);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
    byte_4BC27F4 = 1;
  }
  v14 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance
    || (v21 = *(_DWORD *)(*(_QWORD *)(v14 + 184) + 20LL),
        (v14 = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_76:
    sub_1C1AE30(v14, v12);
  }
  v14 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
          &entity,
          v21,
          (const MethodInfo_32486C4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (v14 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_76;
  p_image = &entity[6].klass->_1.image;
  if ( !p_image )
    return 0;
LABEL_60:
  v22 = p_image[3];
  result = 0;
  if ( (int)v22 < 2 || (v22 & 1) != 0 )
    return result;
  v14 = sub_1C1AC7C(QuestAfterAction_Command___TypeInfo, (unsigned int)v22 >> 1);
  if ( !v14 )
    goto LABEL_76;
  v23 = (unsigned int *)v14;
  if ( *(int *)(v14 + 24) < 1 )
    return 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = v14 + 32;
  for ( i = 1; ; i += 2 )
  {
    v28 = sub_1C1AE20(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v28, 0LL);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_75;
    v14 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0LL);
    if ( !v28 )
      goto LABEL_76;
    *(_DWORD *)(v28 + 16) = v14;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_75:
      sub_1C1AE38(v14, v12);
    v35 = p_image[i + 4];
    *(_QWORD *)(v28 + 24) = v35;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 24), v35, v29, v30, v31, v32, v33, v34);
    if ( *(_DWORD *)(v28 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v28 + 24), (System_String_o *)StringLiteral_1266/*"1"*/, 0LL) )
    {
      break;
    }
    v14 = sub_1C1AD10(v28, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
    if ( !v14 )
    {
      v42 = sub_1C1AE54();
      sub_1C1ACFC(v42, 0LL);
    }
    if ( v25 >= v23[6] )
      goto LABEL_75;
    *(_QWORD *)(v26 + 8 * v25) = v28;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + v24), v28, v36, v37, v38, v39, v40, v41);
    ++v25;
    v24 += 8LL;
    if ( (__int64)v25 >= (int)v23[6] )
      return 0;
  }
  return 1;
}


void __fastcall QuestAfterAction__Clear(QuestAfterAction_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  QuestAfterAction__DeleteContinueData((const MethodInfo *)this);
  this->fields.commandBuf = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.commandBuf, 0LL, v3, v4, v5, v6, v7, v8);
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
  QuestAfterAction_o *v4; // x20
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
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  TerminalPramsManager_c *v37; // x0
  int32_t QuestId_k__BackingField; // w22
  System_String_array *afterActionVals; // x23
  __int64 v40; // x1
  Il2CppObject *Instance; // x22
  int64_t MasterData_object; // x0
  __int64 v43; // x8
  __int64 v44; // x8
  __int64 v45; // x8
  int32_t v46; // w24
  __int64 v47; // x8
  __int64 v48; // x8
  int32_t v49; // w25
  __int64 v50; // x8
  __int64 v51; // x8
  int32_t v52; // w24
  __int64 v53; // x8
  __int64 v54; // x8
  int32_t v55; // w19
  TerminalPramsManager_c *v56; // x0
  TerminalSceneComponent_c *v57; // x0
  TerminalPramsManager_c *v58; // x0
  int64_t v59; // x23
  int32_t v60; // w24
  int32_t v61; // w24
  System_String_o *v62; // x24
  bool v63; // w24
  bool v64; // w23
  Il2CppObject *v65; // x23
  WarEntity_o *QuestId; // x0
  WarEntity_o *v67; // x23
  BalanceConfig_c *v68; // x0
  __int64 v69; // x1
  bool v70; // w8
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v72; // x0
  TerminalPramsManager_c *v73; // x0
  int32_t id; // w19
  __int64 v75; // x1
  bool v76; // w23
  TerminalPramsManager_c *v77; // x0
  Il2CppObject *Master_object; // x23
  WarReleaseEntity_o *OpenEntity; // x24
  __int64 *v80; // x19
  Il2CppObject *v81; // x23
  bool QuestEntity; // w0
  __int64 v83; // x1
  TerminalPramsManager_c *v84; // x0
  Il2CppObject *v85; // x23
  int32_t v86; // w24
  Il2CppObject *v87; // x22
  int32_t v88; // w23
  TerminalPramsManager_c *v89; // x0
  Il2CppObject *v90; // x22
  int32_t v91; // w24
  bool IsOverwriteCommandNone; // w0
  __int64 v93; // x8
  int64_t v94; // x0
  unsigned int **p_commandBuf; // x21
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int *commandBuf; // x8
  unsigned __int64 v103; // x22
  il2cpp_array_size_t v104; // w29
  int64_t v105; // x24
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  __int64 v112; // x8
  int64_t v113; // x1
  System_String_o **v114; // x25
  const MethodInfo *v115; // x2
  int v116; // w8
  int v117; // w8
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  int32_t v119; // w21
  int64_t v120; // x28
  __int64 v121; // x27
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  int v128; // w8
  System_String_c *v129; // x8
  int64_t v130; // x26
  int32_t v131; // w26
  BalanceConfig_c *v132; // x8
  int v133; // w27
  unsigned int v134; // w8
  System_Collections_Generic_List_int__o *Item; // x26
  const MethodInfo *v136; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v138; // x9
  __int64 size; // x10
  QuestAfterAction_o *v140; // x0
  const MethodInfo *v141; // x2
  System_String_c *v142; // x8
  int64_t v143; // x25
  unsigned __int64 v144; // x26
  System_String_Fields v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  unsigned int *v148; // x25
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  unsigned int *v155; // x0
  TerminalPramsManager_c *v156; // x0
  TerminalPramsManager_c *v157; // x0
  int32_t BeforeQuestStartWarId_k__BackingField; // w19
  TerminalSceneComponent_c *v159; // x0
  Il2CppObject *v160; // x21
  TerminalPramsManager_c *v161; // x0
  TerminalPramsManager_c *v162; // x0
  Il2CppObject *v163; // x20
  TerminalPramsManager_c *v164; // x0
  BalanceConfig_c *v165; // x8
  int32_t WarId_k__BackingField; // w19
  int32_t klass; // w19
  TerminalPramsManager_c *v168; // x0
  TerminalPramsManager_c *v169; // x0
  TerminalPramsManager_c *v170; // x0
  BalanceConfig_c *v171; // x8
  int32_t v172; // w20
  TerminalPramsManager_c *v173; // x0
  __int64 v174; // x0
  char v175; // [xsp+Ch] [xbp-94h]
  int32_t svtId; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v177; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v179; // [xsp+30h] [xbp-70h] BYREF
  QuestEntity_o *v180; // [xsp+38h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4BC480F & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_1C1ABD4(&bool_TypeInfo, v5);
    sub_1C1ABD4(&QuestAfterAction_Command___TypeInfo, v6);
    sub_1C1ABD4(&QuestAfterAction_Command_TypeInfo, v7);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, v9);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v10);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v11);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarMaster___, v12);
    sub_1C1ABD4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v13);
    sub_1C1ABD4(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v14);
    sub_1C1ABD4(&Method_DataManager_GetMaster_QuestMaster___, v15);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ShopMaster___, v16);
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarMaster___, v17);
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarReleaseMaster___, v18);
    sub_1C1ABD4(&DataManager_TypeInfo, v19);
    sub_1C1ABD4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_1C1ABD4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v21);
    sub_1C1ABD4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v22);
    sub_1C1ABD4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v23);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v24);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v25);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v26);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Contains_int___, v27);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v30);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v31);
    sub_1C1ABD4(&QuestAfterAction_VoiceInfo_TypeInfo, v32);
    sub_1C1ABD4(&StringLiteral_16979/*"afterActionBk"*/, v33);
    this = (QuestAfterAction_o *)sub_1C1ABD4(&StringLiteral_866/*","*/, v34);
    byte_4BC480F = 1;
  }
  v179 = 0LL;
  v180 = 0LL;
  v177 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_2FA9C38 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v35);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC27F4 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v35);
      byte_4BC27F4 = 1;
    }
    v37 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v37 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v37->static_fields->_QuestId_k__BackingField;
    if ( !byte_4BC27F3 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v35);
      v37 = TerminalPramsManager_TypeInfo;
      byte_4BC27F3 = 1;
    }
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = TerminalPramsManager_TypeInfo;
    }
    afterActionVals = QuestAfterAction__GetBeforeAction(
                        QuestId_k__BackingField,
                        v37->static_fields->_PhaseCnt_k__BackingField + 1,
                        v36);
    goto LABEL_232;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v40);
    byte_4BC2713 = 1;
  }
  MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v43 = **(_QWORD **)(MasterData_object + 184);
  if ( !v43 )
    goto LABEL_334;
  if ( !*(_QWORD *)(v43 + 464) )
    goto LABEL_80;
  if ( !*(_DWORD *)(MasterData_object + 224) )
    j_il2cpp_runtime_class_init_0(MasterData_object);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v40);
    byte_4BC2713 = 1;
  }
  MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v44 = **(_QWORD **)(MasterData_object + 184);
  if ( !v44 )
    goto LABEL_334;
  v45 = *(_QWORD *)(v44 + 464);
  if ( !v45 )
    goto LABEL_334;
  v46 = *(_DWORD *)(v45 + 20);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v40);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    byte_4BC2713 = 1;
  }
  if ( !*(_DWORD *)(MasterData_object + 224) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v47 = **(_QWORD **)(MasterData_object + 184);
  if ( !v47 )
    goto LABEL_334;
  v48 = *(_QWORD *)(v47 + 464);
  if ( !v48 )
    goto LABEL_334;
  v49 = *(_DWORD *)(v48 + 16);
  if ( v49 >= 1 )
  {
    if ( !*(_DWORD *)(MasterData_object + 224) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4BC2713 )
    {
      sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v40);
      byte_4BC2713 = 1;
    }
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    }
    v50 = **(_QWORD **)(MasterData_object + 184);
    if ( !v50 )
      goto LABEL_334;
    v51 = *(_QWORD *)(v50 + 464);
    if ( !v51 )
      goto LABEL_334;
    if ( !Instance )
      goto LABEL_334;
    afterActionVals = *(System_String_array **)(v51 + 32);
    MasterData_object = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_334;
    MasterData_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                   v49,
                                   (const MethodInfo_3248678 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_334;
    v52 = *(_DWORD *)(MasterData_object + 28);
    MasterData_object = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_334;
    goto LABEL_67;
  }
  if ( v46 >= 1 )
  {
    if ( !*(_DWORD *)(MasterData_object + 224) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4BC2713 )
    {
      sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v40);
      byte_4BC2713 = 1;
    }
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    }
    v53 = **(_QWORD **)(MasterData_object + 184);
    if ( !v53 )
      goto LABEL_334;
    v54 = *(_QWORD *)(v53 + 464);
    if ( !v54 )
      goto LABEL_334;
    afterActionVals = *(System_String_array **)(v54 + 32);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    MasterData_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_334;
    MasterData_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                   v46,
                                   (const MethodInfo_3248678 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_334;
    v52 = *(_DWORD *)(MasterData_object + 24);
    MasterData_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_334;
LABEL_67:
    MasterData_object = (int64_t)WarMaster__getByEventId((WarMaster_o *)MasterData_object, v52, 0LL);
    if ( !MasterData_object )
      goto LABEL_334;
    v55 = *(_DWORD *)(MasterData_object + 16);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC4611 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      byte_4BC4611 = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    v56->static_fields->_WarId_k__BackingField = v55;
    if ( !byte_4BC2713 )
    {
      sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v40);
      byte_4BC2713 = 1;
    }
    v57 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v57 = TerminalSceneComponent_TypeInfo;
    }
    MasterData_object = (int64_t)v57->static_fields->mInstance;
    if ( !MasterData_object )
      goto LABEL_334;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
    if ( afterActionVals )
      goto LABEL_232;
  }
LABEL_80:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC484B )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
    byte_4BC484B = 1;
  }
  v58 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
  }
  if ( !v58->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16979/*"afterActionBk"*/, 0LL) )
  {
    MasterData_object = (int64_t)UnityEngine_PlayerPrefs__GetString_70752688(
                                   (System_String_o *)StringLiteral_16979/*"afterActionBk"*/,
                                   0LL);
    if ( !MasterData_object )
      goto LABEL_334;
    MasterData_object = (int64_t)System_String__Split((System_String_o *)MasterData_object, 0x2Cu, 0, 0LL);
    if ( !MasterData_object )
      goto LABEL_334;
    v59 = MasterData_object;
    if ( !*(_DWORD *)(MasterData_object + 24) )
      goto LABEL_474;
    v60 = System_Int32__Parse(*(System_String_o **)(MasterData_object + 32), 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC460B )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      byte_4BC460B = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL) = v60;
    if ( *(_DWORD *)(v59 + 24) <= 1u )
      goto LABEL_474;
    v61 = System_Int32__Parse(*(System_String_o **)(v59 + 40), 0LL);
    if ( !byte_4BC460F )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      byte_4BC460F = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) = v61;
    if ( *(_DWORD *)(v59 + 24) <= 2u )
      goto LABEL_474;
    v62 = *(System_String_o **)(v59 + 48);
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v63 = System_Boolean__Parse(v62, 0LL);
    if ( !byte_4BC484C )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      byte_4BC484C = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 101LL) = v63;
    if ( *(_DWORD *)(v59 + 24) <= 3u )
      goto LABEL_474;
    v64 = System_Boolean__Parse(*(System_String_o **)(v59 + 56), 0LL);
    if ( !byte_4BC484D )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      byte_4BC484D = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 102LL) = v64;
    if ( !byte_4BC484E )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      byte_4BC484E = 1;
    }
    if ( !*(_DWORD *)(MasterData_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 101LL) )
    {
      if ( !Instance )
        goto LABEL_334;
      v65 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BC27F4 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        byte_4BC27F4 = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v65 )
        goto LABEL_334;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)v65,
                  *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL),
                  0LL);
      if ( QuestId )
      {
        v67 = QuestId;
        v68 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v68 = BalanceConfig_TypeInfo;
        }
        v70 = System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v68->static_fields->MainInterludeMapReturnWarIds,
                v67->fields.id,
                (const MethodInfo_2FB748C *)Method_System_Linq_Enumerable_Contains_int___);
        cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
        if ( v70 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BC484F )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v69);
            byte_4BC484F = 1;
          }
          v72 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v72 = TerminalPramsManager_TypeInfo;
          }
          v72->static_fields->_IsWarClear_k__BackingField = 0;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BC484F )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v69);
            byte_4BC484F = 1;
          }
          v73 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v73 = TerminalPramsManager_TypeInfo;
          }
          v73->static_fields->_IsWarClear_k__BackingField = 1;
          id = v67->fields.id;
          if ( !byte_4BC4611 )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v69);
            v73 = TerminalPramsManager_TypeInfo;
            byte_4BC4611 = 1;
          }
          if ( !v73->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v73);
            v73 = TerminalPramsManager_TypeInfo;
          }
          v73->static_fields->_WarId_k__BackingField = id;
          v76 = TerminalPramsManager__CheckIsOrdealCallWarClear(v67, 0LL);
          if ( !byte_4BC4850 )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v75);
            byte_4BC4850 = 1;
          }
          v77 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v77 = TerminalPramsManager_TypeInfo;
          }
          v77->static_fields->_IsOrdealCallWarClear_k__BackingField = v76;
        }
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC460A )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
    byte_4BC460A = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_334;
  OpenEntity = WarReleaseMaster__GetOpenEntity(
                 (WarReleaseMaster_o *)Master_object,
                 *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 4LL),
                 0LL);
  if ( !byte_4BC4851 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
    byte_4BC4851 = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  v80 = &qword_4BC2000;
  if ( *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 91LL) )
  {
    if ( !*(_DWORD *)(MasterData_object + 224) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4BC4526 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      byte_4BC4526 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    v80 = &qword_4BC2000;
    if ( !*(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 92LL) )
      goto LABEL_231;
  }
  if ( !Instance )
    goto LABEL_334;
  v81 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !*((_BYTE *)v80 + 2036) )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
    *((_BYTE *)v80 + 2036) = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !v81 )
    goto LABEL_334;
  QuestEntity = QuestMaster__TryGetQuestEntity(
                  (QuestMaster_o *)v81,
                  &entity,
                  *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL),
                  0LL);
  afterActionVals = 0LL;
  if ( !QuestEntity )
    goto LABEL_232;
  MasterData_object = (int64_t)entity;
  if ( !entity )
    goto LABEL_334;
  if ( QuestEntity__IsOpenByTime(entity, 0, 0LL) )
  {
LABEL_187:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC484B )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v83);
      byte_4BC484B = 1;
    }
    v84 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v84 = TerminalPramsManager_TypeInfo;
    }
    if ( v84->static_fields->_IsPhaseClear_k__BackingField )
    {
      v85 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !*((_BYTE *)v80 + 2036) )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        *((_BYTE *)v80 + 2036) = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      v86 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL);
      if ( !byte_4BC27F3 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
        byte_4BC27F3 = 1;
      }
      if ( !*(_DWORD *)(MasterData_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v85 )
        goto LABEL_334;
      afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                          (QuestPhaseDetailAddMaster_o *)v85,
                          v86,
                          *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_232;
      v87 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !*((_BYTE *)v80 + 2036) )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        *((_BYTE *)v80 + 2036) = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      v88 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL);
      if ( !byte_4BC27F3 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
        byte_4BC27F3 = 1;
      }
      if ( !*(_DWORD *)(MasterData_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v87 )
        goto LABEL_334;
      afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                          (QuestPhaseDetailMaster_o *)v87,
                          v88,
                          *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_232;
      v84 = TerminalPramsManager_TypeInfo;
    }
    if ( !v84->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v84);
    if ( !byte_4BC484E )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v83);
      byte_4BC484E = 1;
    }
    v89 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v89 = TerminalPramsManager_TypeInfo;
    }
    if ( v89->static_fields->_IsQuestClear_k__BackingField )
    {
      if ( !v89->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v89);
      MasterData_object = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
      afterActionVals = 0LL;
      if ( (MasterData_object & 1) == 0 )
      {
        if ( !entity )
          goto LABEL_334;
        afterActionVals = entity->fields.afterActionVals;
      }
      goto LABEL_232;
    }
    goto LABEL_231;
  }
  if ( !OpenEntity )
  {
LABEL_231:
    afterActionVals = 0LL;
    goto LABEL_232;
  }
  afterActionVals = 0LL;
  if ( WarReleaseEntity__IsOpen(OpenEntity, 0LL) )
    goto LABEL_187;
LABEL_232:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v90 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
    byte_4BC27F4 = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  v91 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL);
  if ( !byte_4BC27F3 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    byte_4BC27F3 = 1;
  }
  if ( !*(_DWORD *)(MasterData_object + 224) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !v90 )
    goto LABEL_334;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v90,
         v91,
         *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) + 1,
         7,
         0LL)
    || (IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(afterActionVals, (const MethodInfo *)v40),
        !afterActionVals)
    || IsOverwriteCommandNone
    || (v93 = *(_QWORD *)&afterActionVals->max_length, (int)v93 < 2)
    || (v93 & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC4852 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      byte_4BC4852 = 1;
    }
    v156 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v156 = TerminalPramsManager_TypeInfo;
    }
    if ( v156->static_fields->_BeforeQuestStartWarId_k__BackingField >= 1 )
    {
      if ( !v156->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v156);
      if ( !byte_4BC28F4 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        byte_4BC28F4 = 1;
      }
      v157 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v157 = TerminalPramsManager_TypeInfo;
      }
      v157->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4BC460D )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        v157 = TerminalPramsManager_TypeInfo;
        byte_4BC460D = 1;
      }
      if ( !v157->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v157);
        v157 = TerminalPramsManager_TypeInfo;
      }
      v157->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4BC4852 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        v157 = TerminalPramsManager_TypeInfo;
        byte_4BC4852 = 1;
      }
      if ( !v157->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v157);
        v157 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v157->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4BC4611 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        v157 = TerminalPramsManager_TypeInfo;
        byte_4BC4611 = 1;
      }
      if ( !v157->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v157);
        v157 = TerminalPramsManager_TypeInfo;
      }
      v157->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BC2713 )
      {
        sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v40);
        byte_4BC2713 = 1;
      }
      v159 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v159 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (int64_t)v159->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_334;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v160 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4BC460A )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        byte_4BC460A = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v160 )
        goto LABEL_334;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v160,
             &v177,
             *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 4LL),
             (const MethodInfo_32486C4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (int64_t)v177;
        if ( !v177 )
          goto LABEL_334;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v177, 0LL);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BC4853 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        byte_4BC4853 = 1;
      }
      v161 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v161 = TerminalPramsManager_TypeInfo;
      }
      v161->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16979/*"afterActionBk"*/, 0LL);
    return;
  }
  v94 = sub_1C1AC7C(QuestAfterAction_Command___TypeInfo, (unsigned int)v93 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v94;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v4->fields.commandBuf, v94, v96, v97, v98, v99, v100, v101);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_334;
  v175 = 0;
  v103 = 0LL;
  v104 = 0;
  while ( (__int64)v103 < commandBuf[6] )
  {
    v105 = sub_1C1AE20(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v105, 0LL);
    if ( v104 >= afterActionVals->max_length )
      goto LABEL_474;
    MasterData_object = System_Int32__Parse(afterActionVals->m_Items[v104], 0LL);
    if ( !v105 )
      goto LABEL_334;
    *(_DWORD *)(v105 + 16) = MasterData_object;
    v112 = (int)v104 | 1LL;
    if ( (unsigned int)v112 >= afterActionVals->max_length )
      goto LABEL_474;
    v113 = (int64_t)afterActionVals->m_Items[v112];
    *(_QWORD *)(v105 + 24) = v113;
    v114 = (System_String_o **)(v105 + 24);
    sub_1C1AB78((PartyOrganizationUtility_o *)(v105 + 24), v113, v106, v107, v108, v109, v110, v111);
    if ( !v4->fields.hasFadeCommand )
    {
      v116 = *(_DWORD *)(v105 + 16);
      if ( v116 == 520 || v116 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v104 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v105 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v105 + 16) == 350 )
    {
      MasterData_object = (int64_t)*v114;
      if ( !*v114 )
        goto LABEL_334;
      MasterData_object = (int64_t)System_String__Split((System_String_o *)MasterData_object, 0x2Cu, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_334;
      if ( *(int *)(MasterData_object + 24) >= 4 )
      {
        MasterData_object = System_Int32__Parse(*(System_String_o **)(MasterData_object + 56), 0LL);
        v4->fields.MapMoveBeforeFocusSpotId = MasterData_object;
      }
    }
    v117 = *(_DWORD *)(v105 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v117 != 700 )
    {
      if ( v117 == 800 )
      {
        MasterData_object = (int64_t)QuestAfterAction_Command__GetAvailableRandomVoice(
                                       (QuestAfterAction_Command_o *)v105,
                                       &svtId,
                                       v115);
        if ( MasterData_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v119 = svtId;
          v120 = MasterData_object;
          v121 = sub_1C1AE20(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v121, 0LL);
          *(_DWORD *)(v121 + 16) = v119;
          *(_QWORD *)(v121 + 24) = v120;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v121 + 24), v120, v122, v123, v124, v125, v126, v127);
          if ( !svtVoices )
            goto LABEL_334;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v103,
            (Il2CppObject *)v121,
            (const MethodInfo_32A22FC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
          p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v128 = *(_DWORD *)(v105 + 16);
    if ( v128 == 702 )
    {
      MasterData_object = (int64_t)*v114;
      if ( !*v114 )
        goto LABEL_334;
      MasterData_object = (int64_t)System_String__Split_63065460(
                                     (System_String_o *)MasterData_object,
                                     (System_String_o *)StringLiteral_866/*","*/,
                                     0,
                                     0LL);
      if ( !MasterData_object )
        goto LABEL_334;
      v129 = *(System_String_c **)(MasterData_object + 24);
      v130 = MasterData_object;
      if ( v129 )
      {
        if ( !(_DWORD)v129 )
          goto LABEL_474;
        MasterData_object = System_Int32__Parse(*(System_String_o **)(MasterData_object + 32), 0LL);
        if ( (int)MasterData_object >= 1 )
        {
          if ( *(int *)(v130 + 24) < 2 )
            v131 = 0;
          else
            v131 = System_Int32__Parse(*(System_String_o **)(v130 + 40), 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__SetAutoResumeForFolder(v131, 0LL);
          if ( !byte_4BC460A )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
            byte_4BC460A = 1;
          }
          MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
          }
          v132 = BalanceConfig_TypeInfo;
          v133 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 4LL);
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v132 = BalanceConfig_TypeInfo;
          }
          p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
          if ( v133 == v132->static_fields->OrdealCallWarId )
          {
            v4->fields.BlankEarthTargetWarId = v131;
            v175 = 1;
          }
        }
      }
      v128 = *(_DWORD *)(v105 + 16);
    }
    if ( v128 <= 205 )
    {
      if ( (unsigned int)(v128 - 100) < 0xF && ((0x7C1Fu >> (v128 - 100)) & 1) != 0 )
      {
        v40 = 0LL;
      }
      else
      {
        if ( (unsigned int)(v128 - 200) > 5 )
          goto LABEL_317;
        v40 = 1LL;
      }
    }
    else if ( v128 <= 550 )
    {
      if ( (unsigned int)(v128 - 400) < 0xD )
      {
        v40 = 2LL;
      }
      else
      {
        if ( v128 != 550 )
          goto LABEL_317;
        v40 = 3LL;
      }
    }
    else
    {
      v134 = v128 - 1000;
      if ( v134 >= 0xD || ((0x1C07u >> v134) & 1) == 0 )
        goto LABEL_317;
      v40 = 4LL;
    }
    MasterData_object = (int64_t)v4->fields.commandTypeIds;
    if ( !MasterData_object )
      goto LABEL_334;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                       v40,
                                                       (const MethodInfo_32D2848 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    MasterData_object = QuestAfterAction__ExtractCommandTargetId((QuestAfterAction_Command_o *)v105, v136);
    if ( !Item )
      goto LABEL_334;
    items = Item->fields._items;
    v138 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_334;
    size = Item->fields._size;
    v40 = (unsigned int)MasterData_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        MasterData_object,
        *(const MethodInfo_361F86C **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = MasterData_object;
    }
LABEL_317:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v105, v115);
    if ( *(_DWORD *)(v105 + 16) == 102 )
    {
      v140 = (QuestAfterAction_o *)System_Int32__Parse(*v114, 0LL);
      MasterData_object = (int64_t)QuestAfterAction__GetMapGimmickId(v140, (int32_t)v140, v141);
      if ( !MasterData_object )
        goto LABEL_334;
      v142 = *(System_String_c **)(MasterData_object + 24);
      v143 = MasterData_object;
      if ( (int)v142 >= 1 )
      {
        v144 = 0LL;
        while ( v144 < (unsigned int)v142 )
        {
          MasterData_object = (int64_t)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_334;
          v40 = *(unsigned int *)(v143 + 32 + 4 * v144);
          v145 = *(System_String_Fields *)(MasterData_object + 16);
          v146 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(MasterData_object + 28);
          if ( !*(_QWORD *)&v145 )
            goto LABEL_334;
          v147 = *(int *)(MasterData_object + 24);
          if ( (unsigned int)v147 >= *(_DWORD *)(*(_QWORD *)&v145 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v40,
              *(const MethodInfo_361F86C **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
          }
          else
          {
            *(_DWORD *)(MasterData_object + 24) = v147 + 1;
            *(_DWORD *)(*(_QWORD *)&v145 + 4 * v147 + 32) = v40;
          }
          LODWORD(v142) = *(_DWORD *)(v143 + 24);
          if ( (__int64)++v144 >= (int)v142 )
            goto LABEL_330;
        }
LABEL_474:
        sub_1C1AE38(MasterData_object, v40);
      }
    }
LABEL_330:
    v148 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_334;
    MasterData_object = sub_1C1AD10(v105, *(_QWORD *)(*(_QWORD *)v148 + 64LL));
    if ( !MasterData_object )
    {
      v174 = sub_1C1AE54();
      sub_1C1ACFC(v174, 0LL);
    }
    if ( v103 >= v148[6] )
      goto LABEL_474;
    v155 = &v148[2 * v103];
    *((_QWORD *)v155 + 4) = v105;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v155 + 8), v105, v149, v150, v151, v152, v153, v154);
    commandBuf = (int *)*p_commandBuf;
    v104 += 2;
    ++v103;
    if ( !*p_commandBuf )
      goto LABEL_334;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC484B )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
    byte_4BC484B = 1;
  }
  v162 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v162 = TerminalPramsManager_TypeInfo;
  }
  if ( v162->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v163 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC27F4 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      byte_4BC27F4 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( !v163 )
      goto LABEL_334;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v163,
           &v180,
           *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL),
           0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BC460A )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        byte_4BC460A = 1;
      }
      v164 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v164 = TerminalPramsManager_TypeInfo;
      }
      v165 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v164->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v165 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v165->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        MasterData_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v180 && MasterData_object )
        {
          MasterData_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                &v179,
                                v180->fields.spotId,
                                (const MethodInfo_32486C4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( (MasterData_object & 1) == 0 )
            goto LABEL_424;
          if ( v179 )
          {
            klass = (int32_t)v179[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BC4854 )
            {
              sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
              byte_4BC4854 = 1;
            }
            v168 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v168 = TerminalPramsManager_TypeInfo;
            }
            v168->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = klass;
            goto LABEL_424;
          }
        }
LABEL_334:
        sub_1C1AE30(MasterData_object, v40);
      }
    }
  }
LABEL_424:
  v169 = TerminalPramsManager_TypeInfo;
  if ( (v175 & 1) == 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC28F4 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      byte_4BC28F4 = 1;
    }
    v170 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v170 = TerminalPramsManager_TypeInfo;
    }
    v170->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4BC460D )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      v170 = TerminalPramsManager_TypeInfo;
      byte_4BC460D = 1;
    }
    if ( !v170->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v170);
      v170 = TerminalPramsManager_TypeInfo;
    }
    v170->static_fields->_DispState_k__BackingField = 2;
    if ( !byte_4BC460A )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      v170 = TerminalPramsManager_TypeInfo;
      byte_4BC460A = 1;
    }
    if ( !v170->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v170);
      v170 = TerminalPramsManager_TypeInfo;
    }
    v171 = BalanceConfig_TypeInfo;
    v172 = v170->static_fields->_WarId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v171 = BalanceConfig_TypeInfo;
    }
    v169 = TerminalPramsManager_TypeInfo;
    if ( v172 == v171->static_fields->OrdealCallWarId )
      goto LABEL_478;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC4526 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
      byte_4BC4526 = 1;
    }
    v169 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v169 = TerminalPramsManager_TypeInfo;
    }
    if ( v169->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
LABEL_478:
      if ( !v169->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v169);
      if ( !byte_4BC4527 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        byte_4BC4527 = 1;
      }
      v169 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v169 = TerminalPramsManager_TypeInfo;
      }
      v169->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !byte_4BC4526 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
        v169 = TerminalPramsManager_TypeInfo;
        byte_4BC4526 = 1;
      }
      if ( !v169->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v169);
        v169 = TerminalPramsManager_TypeInfo;
      }
      if ( !v169->static_fields->_IsOrdealCallWarClear_k__BackingField )
      {
        if ( !v169->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v169);
        if ( !byte_4BC460D )
        {
          sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
          byte_4BC460D = 1;
        }
        v169 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v169 = TerminalPramsManager_TypeInfo;
        }
        v169->static_fields->_DispState_k__BackingField = 3;
      }
    }
  }
  if ( !v169->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v169);
  if ( !byte_4BC4610 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v40);
    byte_4BC4610 = 1;
  }
  v173 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v173 = TerminalPramsManager_TypeInfo;
  }
  v173->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BC480D & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_16979/*"afterActionBk"*/, v1);
    byte_4BC480D = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16979/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8

  v2 = command;
  if ( (byte_4BC4811 & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1C1ABD4(&StringLiteral_866/*","*/, method);
    byte_4BC4811 = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_866/*","*/,
                                            0LL);
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0LL);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v2->fields.param, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_11:
    sub_1C1AE30(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1C1AE38(command, method);
  param = command[1].klass;
  return System_Int32__Parse((System_String_o *)param, 0LL);
}


System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved(
        QuestAfterAction_o *this,
        System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BC481E & 1) == 0 )
  {
    sub_1C1ABD4(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo, commandEnumerable);
    byte_4BC481E = 1;
  }
  v5 = sub_1C1AE20(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 56) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v5 + 56), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)commandEnumerable, v12, v13, v14, v15, v16, v17);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v5;
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 IsNullOrEmpty; // x0
  __int64 v6; // x1
  long double inited; // q0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  QuestAfterAction_Command_array *v12; // x20
  __int64 v13; // x22
  unsigned __int64 v14; // x23
  __int64 v15; // x24
  il2cpp_array_size_t v16; // w25
  int64_t v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_o *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v32; // x0

  if ( (byte_4BC4812 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_1C1ABD4(&QuestAfterAction_Command___TypeInfo, v3);
    sub_1C1ABD4(&QuestAfterAction_Command_TypeInfo, v4);
    byte_4BC4812 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v8 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v9 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v9 )
    {
      sub_1C6CB0C(Method_System_Array_Empty_QuestAfterAction_Command___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C6CAB0(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C6CAB0(inited);
    return **(QuestAfterAction_Command_array ***)(v11 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1C1AC7C(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1C1AE30(IsNullOrEmpty, v6);
    }
    v12 = (QuestAfterAction_Command_array *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v13 = 0LL;
      v14 = 0LL;
      v15 = IsNullOrEmpty + 32;
      v16 = 1;
      do
      {
        v17 = sub_1C1AE20(QuestAfterAction_Command_TypeInfo);
        System_Object___ctor((Il2CppObject *)v17, 0LL);
        if ( v16 - 1 >= actionVals->max_length )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v16 - 1], 0LL);
        if ( !v17 )
          goto LABEL_25;
        *(_DWORD *)(v17 + 16) = IsNullOrEmpty;
        if ( v16 >= actionVals->max_length )
          goto LABEL_24;
        v24 = actionVals->m_Items[v16];
        *(_QWORD *)(v17 + 24) = v24;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)v24, v18, v19, v20, v21, v22, v23);
        IsNullOrEmpty = sub_1C1AD10(v17, v12->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v32 = sub_1C1AE54();
          sub_1C1ACFC(v32, 0LL);
        }
        if ( v14 >= v12->max_length )
LABEL_24:
          sub_1C1AE38(IsNullOrEmpty, v6);
        *(_QWORD *)(v15 + 8 * v14) = v17;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v15 + v13), v17, v25, v26, v27, v28, v29, v30);
        ++v14;
        v16 += 2;
        v13 += 8LL;
      }
      while ( (__int64)v14 < (int)v12->max_length );
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
  Il2CppObject *MasterData_object; // x22
  int32_t v14; // w23
  System_String_array *v15; // x22
  const MethodInfo *v16; // x1
  bool IsOverwriteCommandNone; // w8
  System_String_array *result; // x0
  Il2CppObject *v19; // x20
  System_String_array *v20; // x19

  if ( (byte_4BC4829 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v10);
    byte_4BC4829 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
    byte_4BC27F4 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4BC27F3 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4BC27F3 = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_33;
  v15 = QuestPhaseDetailAddMaster__GetAfterAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v14,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v15, v16);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v15;
  if ( v15 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
    byte_4BC27F4 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1C1AE30(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_3248678 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v20->m_Items[8];
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
  Il2CppObject *MasterData_object; // x22
  int32_t v14; // w23
  System_String_array *v15; // x22
  const MethodInfo *v16; // x1
  bool IsOverwriteCommandNone; // w8
  System_String_array *result; // x0
  Il2CppObject *v19; // x20
  System_String_array *v20; // x19

  if ( (byte_4BC4828 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v10);
    byte_4BC4828 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
    byte_4BC27F4 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4BC27F3 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4BC27F3 = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_33;
  v15 = QuestPhaseDetailAddMaster__GetBeforeAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v14,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v15, v16);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v15;
  if ( v15 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
    byte_4BC27F4 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1C1AE30(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_3248678 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v20->m_Items[7];
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
        return dword_C345CC[commandId - 1000];
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


SrcSpotBasePrefab_o *__fastcall QuestAfterAction__GetLastDispSpot(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.lastDispSpot;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall QuestAfterAction__GetMapComponent_object_(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo_3031414 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    if ( !method->rgctx_data )
      sub_1C6CB0C();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !MapGameObject )
    sub_1C1AE30(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_2FEFBC0 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  UnityEngine_Transform_o *v12; // x23
  const MethodInfo *v13; // x3

  v8 = this;
  if ( (byte_4BC4824 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    this = (QuestAfterAction_o *)sub_1C1ABD4(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_4BC4824 = 1;
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
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (QuestAfterAction_o *)srcLineSprite__GetGobjName(id, 0LL);
      if ( !transform )
        goto LABEL_45;
    }
    else
    {
      if ( comType )
      {
        v10 = 0LL;
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
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      this = (QuestAfterAction_o *)SrcSpotBasePrefab__GetGobjName(id, 0LL);
      if ( !transform )
LABEL_45:
        sub_1C1AE30(this, *(_QWORD *)&comType);
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
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, 0LL);
    if ( !transform )
      goto LABEL_45;
LABEL_34:
    v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0LL);
    goto LABEL_35;
  }
  this = (QuestAfterAction_o *)v8->fields.mGimmickRoot;
  if ( !this )
    goto LABEL_45;
  v12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, 0LL);
  if ( !v12 )
    goto LABEL_45;
  v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v12, (System_String_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v10, 0LL, 0LL) )
  {
    this = (QuestAfterAction_o *)v8->fields.mUIGimmickRoot;
    if ( !this )
      goto LABEL_45;
    goto LABEL_30;
  }
LABEL_35:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( !state )
      goto LABEL_45;
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
      goto LABEL_45;
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
  Il2CppObject *Instance; // x0
  __int64 name_low; // x1
  Il2CppObject *v13; // x21
  __int64 v14; // x0
  int monitor; // w8
  Il2CppObject *v16; // x21
  unsigned int v17; // w23
  Il2CppClass **v18; // x8
  Il2CppClass *v19; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10

  if ( (byte_4BC4813 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_1C1ABD4(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys_MapGimmickEntity___, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC4813 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  v13 = Instance;
  v14 = sub_1C1AD08(Instance->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys_MapGimmickEntity___
                                            + 40)
                                          + 1].methodPtr);
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v14 + 8))(v13, v14);
  if ( !Instance )
    goto LABEL_19;
  monitor = (int)Instance[1].monitor;
  v16 = Instance;
  if ( monitor >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= monitor )
        sub_1C1AE38(Instance, name_low);
      v18 = &v16->klass + (int)v17;
      v19 = v18[4];
      if ( !v19 )
        break;
      Instance = (Il2CppObject *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v18[4], 0LL);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v10 )
          break;
        name_low = LODWORD(v19->_1.name);
        items = v10->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            name_low,
            *(const MethodInfo_361F86C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size + 1] = name_low;
        }
      }
      monitor = (int)v16[1].monitor;
      if ( (int)++v17 >= monitor )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C1AE30(Instance, name_low);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4BC4822 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4BC4822 = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    return fsm->fields.m_state;
  else
    return 0;
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
  CStateManager_T__o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v26; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0
  __int64 v28; // x1
  CStateManager_T__o *v29; // x21
  Il2CppObject *v30; // x22
  CStateManager_T__o *v31; // x21
  Il2CppObject *v32; // x22
  CStateManager_T__o *v33; // x20
  Il2CppObject *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int32_t v41; // w20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v42; // x21
  int v43; // w8
  System_Collections_Generic_List_int__o *v44; // x22
  Il2CppObject *Component_object; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_List_int__o *v58; // x20
  struct System_Collections_Generic_List_int__o **p_invalidMapGimmickIdList; // x19
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7

  if ( (byte_4BC480E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_1C1ABD4(&Method_CStateManager_QuestAfterAction__add__, v4);
    sub_1C1ABD4(&CStateManager_QuestAfterAction__TypeInfo, v5);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v8);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1C1ABD4(&QuestAfterAction_StateAdditional_TypeInfo, v13);
    sub_1C1ABD4(&QuestAfterAction_StateInstant_TypeInfo, v14);
    sub_1C1ABD4(&QuestAfterAction_StateMain_TypeInfo, v15);
    sub_1C1ABD4(&QuestAfterAction_StateNone_TypeInfo, v16);
    byte_4BC480E = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_T__o *)sub_1C1AE20(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_31D32D0 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v18;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v18, v19, v20, v21, v22, v23, v24);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v26 = (Il2CppObject *)sub_1C1AE20(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v26,
      (const MethodInfo_31D3378 *)Method_CStateManager_QuestAfterAction__add__);
    v29 = (CStateManager_T__o *)*p_fsm;
    v30 = (Il2CppObject *)sub_1C1AE20(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_21;
    CStateManager_object___add(
      v29,
      1,
      (IState_T__o *)v30,
      (const MethodInfo_31D3378 *)Method_CStateManager_QuestAfterAction__add__);
    v31 = (CStateManager_T__o *)*p_fsm;
    v32 = (Il2CppObject *)sub_1C1AE20(QuestAfterAction_StateAdditional_TypeInfo);
    System_Object___ctor(v32, 0LL);
    if ( !v31 )
      goto LABEL_21;
    CStateManager_object___add(
      v31,
      2,
      (IState_T__o *)v32,
      (const MethodInfo_31D3378 *)Method_CStateManager_QuestAfterAction__add__);
    v33 = (CStateManager_T__o *)*p_fsm;
    v34 = (Il2CppObject *)sub_1C1AE20(QuestAfterAction_StateInstant_TypeInfo);
    System_Object___ctor(v34, 0LL);
    if ( !v33 )
      goto LABEL_21;
    CStateManager_object___add(
      v33,
      3,
      (IState_T__o *)v34,
      (const MethodInfo_31D3378 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.commandBuf, 0LL, v35, v36, v37, v38, v39, v40);
  v41 = 0;
  this->fields.commandIdx = 0;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                commandTypeIds,
                                                                                v41,
                                                                                (const MethodInfo_32D2ADC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v42 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v42 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v41,
                                                                                  (const MethodInfo_32D2848 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v43 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v43;
    }
    else
    {
      v44 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v44,
        (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v42 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v42,
        v41,
        (Il2CppObject *)v44,
        (const MethodInfo_32D28D4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v41;
  }
  while ( v41 != 5 );
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
  if ( !commandTypeIds
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)commandTypeIds,
                             (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&this->fields.screenCollider,
          (int64_t)Component_object,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_1C1AE30(commandTypeIds, v28);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.lastDispSpot, 0LL, v52, v53, v54, v55, v56, v57);
  v58 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v58,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v58;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_invalidMapGimmickIdList, (int64_t)v58, v60, v61, v62, v63, v64, v65);
  *((_WORD *)p_invalidMapGimmickIdList + 80) = 0;
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0

  if ( (byte_4BC4816 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_4BC4816 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_32D2ADC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_32D2848 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_361FBE4 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1C1AE30(commandTypeIds, *(_QWORD *)&commandType);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestAfterAction__IsExistSpotReveal(QuestAfterAction_o *this, int32_t spotId, const MethodInfo *method)
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
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandBuf->max_length;
    v8 = (int)v6 < max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C1AE38(this, *(_QWORD *)&spotId);
    v9 = commandBuf->m_Items[v6];
    if ( v9 )
    {
      id = v9->fields.id;
      if ( id == 112 || id == 102 )
      {
        this = (QuestAfterAction_o *)System_Int32__Parse(v9->fields.param, 0LL);
        if ( (_DWORD)this == spotId )
          return v8;
        commandBuf = v4->fields.commandBuf;
      }
      ++v6;
      if ( commandBuf )
        continue;
    }
    sub_1C1AE30(this, *(_QWORD *)&spotId);
  }
  return v8;
}


bool __fastcall QuestAfterAction__IsExistTerminalTransition(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int max_length; // w8
  __int64 v4; // x9
  QuestAfterAction_Command_o **m_Items; // x10
  QuestAfterAction_Command_o *v6; // x11
  unsigned int v7; // w11

  commandBuf = this->fields.commandBuf;
  if ( commandBuf && (max_length = commandBuf->max_length, max_length >= 1) )
  {
    v4 = 0LL;
    m_Items = commandBuf->m_Items;
    do
    {
      if ( (unsigned int)v4 >= max_length )
        sub_1C1AE38(this, method);
      v6 = m_Items[v4];
      if ( !v6 )
        sub_1C1AE30(this, method);
      ++v4;
      v7 = v6->fields.id - 701;
      this = (QuestAfterAction_o *)(v7 < 2);
    }
    while ( (int)v4 < max_length && v7 > 1 );
  }
  else
  {
    LOBYTE(this) = 0;
  }
  return (char)this;
}


bool __fastcall QuestAfterAction__IsGimmickDispCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFD) == 401;
}


bool __fastcall QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4BC4827 & 1) == 0 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
    byte_4BC4827 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
    byte_4BC2713 = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1C1AE30(v2, method);
  return ScrTerminalMap__IsMapChangeable(v2, 0LL);
}


bool __fastcall QuestAfterAction__IsNoWaitCommand(int32_t cmd, const MethodInfo *method)
{
  unsigned int v2; // w8

  if ( cmd <= 205 )
  {
    if ( (unsigned int)(cmd - 110) >= 5 )
    {
      v2 = cmd - 203;
      return v2 < 3;
    }
    return 1;
  }
  if ( (cmd & 0xFFFFFFFE) == 402 )
    return 1;
  v2 = cmd - 1010;
  return v2 < 3;
}


bool __fastcall QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFE) == 1010;
}


bool __fastcall QuestAfterAction__IsOtherObjHideCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 1000 || cmd == 1010;
}


bool __fastcall QuestAfterAction__IsOverwriteCommandNone(System_String_array *actionCommand, const MethodInfo *method)
{
  __int64 v2; // x8

  if ( actionCommand )
  {
    v2 = *(_QWORD *)&actionCommand->max_length;
    if ( v2 )
    {
      if ( !(_DWORD)v2 )
        sub_1C1AE38(actionCommand, method);
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
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4BC4822 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4BC4822 = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool __fastcall QuestAfterAction__IsSpotChangeDispQuicklyCommand(int32_t cmd, const MethodInfo *method)
{
  return (unsigned int)(cmd - 110) < 3;
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
  TerminalTransitionInfo_o *v22; // x20
  char *Master_object; // x0
  TerminalSceneComponent_o *v24; // x19
  DataManager_o *v25; // x22
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v27; // x23
  EventMissionActionInfo_o *v28; // x21
  Il2CppObject *Entity; // x0
  Il2CppObject *v30; // x21
  Il2CppObject *v31; // x0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  int64_t klass; // x1
  __int64 v45; // x0
  __int64 v46; // x1
  struct TerminalTransitionInfo_o *v47; // x8
  EventMissionActionEntity_o *v48; // x0
  EventMissionActionEntity_o *v49; // x23
  Il2CppObject *v50; // x0
  Il2CppObject *v51; // x23
  __int64 v52; // x1
  TerminalPramsManager_c *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t vals; // x1
  struct TerminalTransitionInfo_o *v61; // x8
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC481A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1C1ABD4(&DataManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1C1ABD4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_1C1ABD4(&EventMissionActionInfo_TypeInfo, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v18);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v19);
    byte_4BC481A = 1;
  }
  memset(&v63, 0, sizeof(v63));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0LL);
  if ( !TerminalTransitionInfoData )
    return;
  v22 = TerminalTransitionInfoData;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v21);
    byte_4BC2713 = 1;
  }
  Master_object = (char *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (char *)TerminalSceneComponent_TypeInfo;
  }
  v24 = (TerminalSceneComponent_o *)**((_QWORD **)Master_object + 23);
  if ( !v24 )
    goto LABEL_67;
  if ( v24->fields._TransitionInfo_k__BackingField )
    return;
  if ( v22->fields.missionId < 1 )
  {
    if ( v22->fields.shopId >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v22->fields.shopId,
                 (const MethodInfo_3248678 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v30 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v31 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v30[1].monitor,
                (const MethodInfo_3248678 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v31 || !EventEntity__IsEventPeriod((EventEntity_o *)v31, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_object )
          goto LABEL_67;
        Master_object = (char *)ShopActionMaster__GetEntityList(
                                  (ShopActionMaster_o *)Master_object,
                                  (int32_t)v30[1].klass,
                                  0LL);
        if ( !Master_object )
          goto LABEL_67;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v62,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v63 = v62;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v63,
                  (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v32 )
            break;
          current = v63.fields._current;
          if ( !v63.fields._current )
            sub_1C1AE30(v32, v33);
          if ( LODWORD(v63.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BC4855 )
            {
              sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v33);
              byte_4BC4855 = 1;
            }
            v35 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v35 = TerminalPramsManager_TypeInfo;
            }
            v35->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v24, v22, 0LL);
            TransitionInfo_k__BackingField = v24->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_1C1AE30(0LL, v36);
            klass = (int64_t)current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              klass,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
            v47 = v24->fields._TransitionInfo_k__BackingField;
            if ( !v47 )
              sub_1C1AE30(v45, v46);
            v47->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v63,
          (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v25 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_object )
      goto LABEL_67;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_object,
                                              v22->fields.missionId,
                                              5,
                                              4,
                                              0LL);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v27 = EntityFromIdProgressTypeAndActionType;
      v28 = (EventMissionActionInfo_o *)sub_1C1AE20(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_43327896(v28, v27, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_object )
        goto LABEL_67;
      v48 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_object,
              v22->fields.missionId,
              5,
              4,
              0LL);
      if ( !v48 )
        return;
      v49 = v48;
      v28 = (EventMissionActionInfo_o *)sub_1C1AE20(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v28, v49, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v25,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v50 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v22->fields.missionId,
            (const MethodInfo_3248678 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v50 )
    {
      v51 = v50;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v51[1].monitor),
                                (const MethodInfo_3248678 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BC4855 )
        {
          sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v52);
          byte_4BC4855 = 1;
        }
        v53 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v53 = TerminalPramsManager_TypeInfo;
        }
        v53->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v24, v22, 0LL);
        if ( v28 )
        {
          Master_object = (char *)v24->fields._TransitionInfo_k__BackingField;
          if ( Master_object )
          {
            vals = (int64_t)v28->fields.vals;
            *((_QWORD *)Master_object + 4) = vals;
            sub_1C1AB78((PartyOrganizationUtility_o *)(Master_object + 32), vals, v54, v55, v56, v57, v58, v59);
            v61 = v24->fields._TransitionInfo_k__BackingField;
            if ( v61 )
            {
              v61->fields.optionId = v28->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1C1AE30(Master_object, v21);
      }
LABEL_66:
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
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v9; // x22
  const MethodInfo *v10; // x3

  if ( (byte_4BC4817 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_4BC4817 = 1;
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
      sub_1C1AE30(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_32A210C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v9 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_56869252(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_363C184 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_34866172(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v9,
      endAct,
      v10);
  }
}


void __fastcall QuestAfterAction__LoadVoice_34866172(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  CommonUI_o **v23; // x28
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Action_o **v30; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_String_o *VoiceAssetName_41071744; // x19
  Il2CppObject *v38; // x20
  System_Action_o *v39; // x22

  v5 = svtVInfos;
  while ( 1 )
  {
    if ( (byte_4BC4818 & 1) == 0 )
    {
      sub_1C1ABD4(&System_Action_TypeInfo, svtVInfos);
      sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v7);
      sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v8);
      sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v9);
      sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
      sub_1C1ABD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
      sub_1C1ABD4(&Method_QuestAfterAction___c__DisplayClass74_0__LoadVoice_b__0__, v12);
      sub_1C1ABD4(&QuestAfterAction___c__DisplayClass74_0_TypeInfo, v13);
      byte_4BC4818 = 1;
    }
    v14 = sub_1C1AE20(QuestAfterAction___c__DisplayClass74_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( !v14 )
      goto LABEL_18;
    *(_QWORD *)(v14 + 16) = v5;
    v23 = (CommonUI_o **)(v14 + 16);
    sub_1C1AB78((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)v5, v17, v18, v19, v20, v21, v22);
    *(_QWORD *)(v14 + 24) = this;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v24, v25, v26, v27, v28, v29);
    *(_QWORD *)(v14 + 32) = endAct;
    v30 = (System_Action_o **)(v14 + 32);
    sub_1C1AB78((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)endAct, v31, v32, v33, v34, v35, v36);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16),
            (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v30, 0LL);
        return;
      }
LABEL_18:
      sub_1C1AE30(Instance, v16);
    }
    Instance = *v23;
    if ( !*v23 )
      goto LABEL_18;
    Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Instance,
                               0,
                               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
    if ( !Instance )
      goto LABEL_18;
    if ( Instance->fields.m_CachedPtr )
      break;
    Instance = *v23;
    if ( !*v23 )
      goto LABEL_18;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_363E064 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)*v23;
    endAct = *v30;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  Instance = *v23;
  if ( !*v23 )
    goto LABEL_18;
  Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             0,
                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_18;
  VoiceAssetName_41071744 = ServantVoiceEntity__getVoiceAssetName_41071744(Instance->fields.m_CachedPtr, 0LL);
  v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v39 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)v14, Method_QuestAfterAction___c__DisplayClass74_0__LoadVoice_b__0__, 0LL);
  if ( !v38 )
    goto LABEL_18;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v38, VoiceAssetName_41071744, v39, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_4BC4826 & 1) == 0 )
  {
    sub_1C1ABD4(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v6);
    byte_4BC4826 = 1;
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
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    return SrcSpotBasePrefab__GetGobjName(id, 0LL);
  }
}


void __fastcall QuestAfterAction__OnEnd(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Action_o *endAct; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Collider_o *screenCollider; // x0
  struct System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x8
  int v7; // w9

  if ( (byte_4BC4820 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_4BC4820 = 1;
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
    sub_1C1AE30(screenCollider, v4);
  }
  v7 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v7;
  QuestAfterAction__Init(this, v4);
  this->fields.isKeepingMainStateButFinished = 0;
}


void __fastcall QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Action_o *v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2

  if ( (byte_4BC481C & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, endAct);
    sub_1C1ABD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1C1ABD4(&Method_QuestAfterAction___c__DisplayClass78_0__Play_b__0__, v6);
    sub_1C1ABD4(&QuestAfterAction___c__DisplayClass78_0_TypeInfo, v7);
    byte_4BC481C = 1;
  }
  v8 = sub_1C1AE20(QuestAfterAction___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = endAct,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)endAct, v11, v12, v13, v14, v15, v16),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1C1AE30(Instance, v10);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v17 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v8, Method_QuestAfterAction___c__DisplayClass78_0__Play_b__0__, 0LL);
  this->fields.endAct = v17;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v24);
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
  __int64 v11; // x20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Action_o *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Action_o *v41; // x21
  const MethodInfo *v42; // x2
  System_Collections_IEnumerator_o *v43; // x1

  if ( (byte_4BC481D & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, actionVals);
    sub_1C1ABD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1C1ABD4(&Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__0__, v8);
    sub_1C1ABD4(&Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__1__, v9);
    sub_1C1ABD4(&QuestAfterAction___c__DisplayClass79_0_TypeInfo, v10);
    byte_4BC481D = 1;
  }
  v11 = sub_1C1AE20(QuestAfterAction___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)finishCallback, v20, v21, v22, v23, v24, v25);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v26);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.temporaryCommandBuf,
    (int64_t)CommandBuf,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1C1AE30(Instance, v13);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v34 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v34;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__1__,
    0LL);
  v43 = QuestAfterAction__WaitWhileMainStateFinished(this, v41, v42);
  UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, v43, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Action_o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_4BC481F & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, commandArray);
    sub_1C1ABD4(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__82_0__, v5);
    byte_4BC481F = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.temporaryCommandBuf,
      (int64_t)commandArray,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v12 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__82_0__,
      0LL);
    this->fields.endAct = v12;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)v12, v13, v14, v15, v16, v17, v18);
    QuestAfterAction__SetState(this, 3, v19);
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

  if ( (byte_4BC4825 & 1) == 0 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v7);
    byte_4BC4825 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC28F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v8);
    byte_4BC28F4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v8);
    byte_4BC2713 = 1;
  }
  v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.subRootGimmickP->klass;
  if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1C1AE30(v10, v8);
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
  int32_t id; // w8
  int v8; // w8
  unsigned int v9; // w8
  unsigned int v10; // w8
  int m_CancellationTokenSource; // w8
  System_String_o *TitleInfoCtrlCallback_k__BackingField; // x0
  int32_t SpotId; // w0
  Il2CppObject *MasterData_object; // x0
  System_String_o *param; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20

  v4 = this;
  if ( (byte_4BC4815 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, com);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    this = (QuestAfterAction_o *)sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BC4815 = 1;
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
            this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
            if ( this )
            {
              m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
              if ( m_CancellationTokenSource >= 2 )
              {
                TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields._TitleInfoCtrlCallback_k__BackingField;
LABEL_29:
                SpotId = System_Int32__Parse(TitleInfoCtrlCallback_k__BackingField, 0LL);
LABEL_30:
                v4->fields.ActionMapTargetId = SpotId;
                return;
              }
LABEL_27:
              if ( !m_CancellationTokenSource )
                sub_1C1AE38(this, com);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1C1AE30(this, com);
        }
        if ( id == 550 )
        {
          v8 = 3;
LABEL_23:
          v4->fields.ActionMapTargetType = v8;
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v16 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v16,
                                             (int32_t)this,
                                             (const MethodInfo_3248678 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              if ( this )
              {
                SpotId = QuestEntity__getSpotId((QuestEntity_o *)this, 0LL);
                goto LABEL_30;
              }
            }
          }
          goto LABEL_42;
        }
        goto LABEL_41;
      }
LABEL_18:
      v8 = 2;
      goto LABEL_23;
    }
    if ( id <= 113 )
    {
      v10 = id - 100;
      if ( v10 > 0xD || ((1 << v10) & 0x3C1F) == 0 )
        goto LABEL_41;
    }
    else
    {
      if ( (unsigned int)(id - 200) < 6 )
        goto LABEL_22;
      v9 = id - 300;
      if ( v9 > 7 )
        goto LABEL_41;
      if ( ((1 << v9) & 0x21) == 0 )
      {
        if ( ((1 << v9) & 0x42) == 0 )
        {
          if ( ((1 << v9) & 0x84) == 0 )
            goto LABEL_41;
          goto LABEL_18;
        }
LABEL_22:
        v8 = 1;
        goto LABEL_23;
      }
    }
    v4->fields.ActionMapTargetType = 0;
LABEL_24:
    this = (QuestAfterAction_o *)com->fields.param;
    if ( this )
    {
      this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
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
void __fastcall QuestAfterAction__SetState(QuestAfterAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4BC4823 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_4BC4823 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C1AE30(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_31D3404 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4BC481B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_4BC481B = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_31D33E0 *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *__fastcall QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BC4821 & 1) == 0 )
  {
    sub_1C1ABD4(&QuestAfterAction__WaitWhileMainStateFinished_d__85_TypeInfo, action);
    byte_4BC4821 = 1;
  }
  v5 = sub_1C1AE20(QuestAfterAction__WaitWhileMainStateFinished_d__85_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)action, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestAfterAction___PlaySpecifiedActionInstantly_b__82_0(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  this->fields.endAct = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.endAct, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.temporaryCommandBuf, 0LL, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4BC4814 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_4BC4814 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1C1AE30(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_String_o *VoiceAssetName_41071744; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BC4819 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_1C1ABD4(&SoundManager_TypeInfo, v10);
    byte_4BC4819 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_32A210C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_56869252(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_363C184 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v13 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v13,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1C1AE30(v14, v15);
    VoiceAssetName_41071744 = ServantVoiceEntity__getVoiceAssetName_41071744((int32_t)v17.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_41071744, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1C1AE30(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_32A2484 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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
  void *param; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x22
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v17; // x21
  System_Random_o *v18; // x22
  __int64 size; // x1
  int32_t v20; // w24
  int v21; // w8
  void *v22; // x25
  Il2CppObject *Item; // x25
  __int64 v24; // x8
  __int64 v25; // x8
  int32_t v26; // w1
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int v29; // w8
  void *v30; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BC482B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor___77505136, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1C1ABD4(&System_Random_TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v12);
    sub_1C1ABD4(&StringLiteral_16388/*"_"*/, v13);
    byte_4BC482B = 1;
  }
  *svtId = 0;
  if ( this->fields.id != 800 )
    return 0LL;
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x2Cu, 0, 0LL);
  if ( !param )
    goto LABEL_41;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)param;
  if ( *((int *)param + 6) > 1 )
  {
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v17 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_56869252(
        v17,
        v15,
        (const MethodInfo_363C184 *)Method_System_Collections_Generic_List_string___ctor___77505136);
      result = 0;
      v18 = (System_Random_o *)sub_1C1AE20(System_Random_TypeInfo);
      System_Random___ctor(v18, 0LL);
      if ( v17 )
      {
        if ( v18 )
        {
          size = (unsigned int)v17->fields._size;
          while ( 1 )
          {
            v20 = ((__int64 (__fastcall *)(System_Random_o *, __int64, Il2CppMethodPointer))v18->klass->vtable._7_Next.method)(
                    v18,
                    size,
                    v18->klass->vtable._8_NextDouble.methodPtr);
            result = 0;
            param = System_Collections_Generic_List_object___get_Item(
                      v17,
                      v20,
                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
            if ( !param )
              break;
            param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
            if ( !param )
              break;
            v21 = *((_DWORD *)param + 6);
            v22 = param;
            if ( v21 == 3 )
            {
              v27 = System_Int32__TryParse(*((System_String_o **)param + 4), &result, 0LL);
              if ( *((_DWORD *)v22 + 6) < 3u )
                goto LABEL_42;
              param = System_String__Concat_63051628(
                        *((System_String_o **)v22 + 5),
                        (System_String_o *)StringLiteral_16388/*"_"*/,
                        *((System_String_o **)v22 + 6),
                        0LL);
              if ( !MasterData_object )
                break;
              v26 = result;
              Item = (Il2CppObject *)param;
            }
            else
            {
              if ( v21 != 2 )
                goto LABEL_29;
              result = 0;
              Item = System_Collections_Generic_List_object___get_Item(
                       v17,
                       v20,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4BC2713 )
              {
                sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, svtId);
                byte_4BC2713 = 1;
              }
              param = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                param = TerminalSceneComponent_TypeInfo;
              }
              v24 = **((_QWORD **)param + 23);
              if ( !v24 )
                break;
              v25 = *(_QWORD *)(v24 + 464);
              if ( !v25 )
                break;
              param = (void *)ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v25 + 40), 0LL);
              if ( !MasterData_object )
                break;
              v26 = (int)param;
            }
            if ( VoicePlayCondMaster__isVoicePlay(
                   (VoicePlayCondMaster_o *)MasterData_object,
                   v26,
                   (System_String_o *)Item,
                   0LL,
                   -1LL,
                   -1,
                   0LL,
                   0LL,
                   0LL) )
            {
              *svtId = result;
              return (System_String_o *)Item;
            }
LABEL_29:
            System_Collections_Generic_List_object___RemoveAt(
              v17,
              v20,
              (const MethodInfo_363E064 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v17->fields._size;
            if ( !(_DWORD)size )
            {
              Item = 0LL;
              *svtId = 0;
              return (System_String_o *)Item;
            }
          }
        }
      }
    }
LABEL_41:
    sub_1C1AE30(param, svtId);
  }
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
  if ( !param )
    goto LABEL_41;
  v29 = *((_DWORD *)param + 6);
  v30 = param;
  if ( v29 != 3 )
  {
    if ( v29 == 2 )
      return this->fields.param;
    return 0LL;
  }
  v27 = System_Int32__TryParse(*((System_String_o **)param + 4), svtId, 0LL);
  if ( *((_DWORD *)v30 + 6) < 3u )
LABEL_42:
    sub_1C1AE38(v27, v28);
  return System_String__Concat_63051628(
           *((System_String_o **)v30 + 5),
           (System_String_o *)StringLiteral_16388/*"_"*/,
           *((System_String_o **)v30 + 6),
           0LL);
}


System_String_o *__fastcall QuestAfterAction_Command__GetBgmName(
        QuestAfterAction_Command_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  bool v6; // w8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4BC482D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC482D = 1;
  }
  result = 0;
  entity = 0LL;
  v5 = 0LL;
  if ( this->fields.id == 851 )
  {
    v6 = System_Int32__TryParse(this->fields.param, &result, 0LL);
    v5 = 0LL;
    if ( v6 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_32486C4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1C1AE30(Instance, v8);
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
  System_String_o **v3; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( this->fields.id != 800 )
    return 0;
  v3 = (System_String_o **)str;
  if ( !str || (v3 = (System_String_o **)System_String__Split(str, 0x5Fu, 0, 0LL)) == 0LL )
    sub_1C1AE30(v3, str);
  if ( *((_DWORD *)v3 + 6) != 3 )
    return 0;
  result = 0;
  if ( System_Int32__TryParse(v3[4], &result, 0LL) )
    return result;
  else
    return 0;
}


System_String_o *__fastcall QuestAfterAction_Command__GetVoiceId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  QuestAfterAction_Command_o *v4; // x20
  int param; // w8

  v3 = str;
  v4 = this;
  if ( (byte_4BC482C & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1C1ABD4(&StringLiteral_16388/*"_"*/, str);
    byte_4BC482C = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1C1AE30(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_63051628(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16388/*"_"*/,
               *(System_String_o **)&this[1].fields.id,
               0LL);
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
    sub_1C1AE30(this, method);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  PartyOrganizationUtility_o *p_monitor; // x0
  System_Action_o *monitor; // t1

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
    sub_1C1AE30(screenCollider, v5);
  }
  monitor = (System_Action_o *)screenCollider[7].monitor;
  p_monitor = (PartyOrganizationUtility_o *)&screenCollider[7].monitor;
  p_monitor->klass = 0LL;
  sub_1C1AB78(p_monitor, 0LL, v7, v8, v9, v10, v11, v12);
  ActionExtensions__Call(monitor, 0LL);
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
  int32_t id; // w8
  unsigned int v4; // w8

  if ( !cmd )
    sub_1C1AE30(this, 0LL);
  id = cmd->fields.id;
  if ( id <= 205 )
  {
    if ( (unsigned int)(id - 110) >= 5 )
    {
      v4 = id - 203;
      return v4 < 3;
    }
    return 1;
  }
  if ( (id & 0xFFFFFFFE) == 402 )
    return 1;
  v4 = id - 1010;
  return v4 < 3;
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
    sub_1C1AE30(0LL, v7);
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
    sub_1C1AE30(0LL, v7);
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
  struct QuestAfterAction_o *that; // x8
  __int64 v8; // x8
  QuestAfterAction_StateMain_o *v9; // x20
  unsigned __int64 v10; // x22
  struct QuestAfterAction_o *v11; // x8
  int32_t v12; // w21
  Il2CppObject *MapComponent_object; // x21
  Il2CppClass *klass; // x8

  v2 = this;
  if ( (byte_4BC4832 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    this = (QuestAfterAction_StateMain_o *)sub_1C1ABD4(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_4BC4832 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_22;
  v8 = *(_QWORD *)&this->fields.IsAnimDoing;
  v9 = this;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v8 )
        sub_1C1AE38(this, method);
      v11 = v2->fields.that;
      if ( !v11 )
        break;
      this = (QuestAfterAction_StateMain_o *)v11->fields.invalidMapGimmickIdList;
      if ( !this )
        break;
      v12 = *((_DWORD *)&v9->fields.waitTime + v10);
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)this,
        v12,
        (const MethodInfo_3620D68 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v12,
                              v2,
                              (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_35161012(
                                                 (QuestTree_o *)this,
                                                 (MapControl_MapGimmickInfo_o *)MapComponent_object[7].klass,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = MapComponent_object[7].klass;
          if ( !klass )
            break;
          LODWORD(klass->_1.name) = 1;
          MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)MapComponent_object, 1, 0LL);
        }
      }
      LODWORD(v8) = *(_DWORD *)&v9->fields.IsAnimDoing;
      if ( (__int64)++v10 >= (int)v8 )
        return;
    }
LABEL_22:
    sub_1C1AE30(this, method);
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
  int64_t v94; // x22
  __int64 updated; // x0
  QuestAfterAction_o *v96; // x1
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  __int64 *v103; // x20
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v111; // x21
  QuestAfterAction_Command_o *v112; // x21
  BlankEarthQuestAfterAction_o *v113; // x23
  System_Action_o *v114; // x24
  const MethodInfo *v115; // x5
  int id; // w8
  float v117; // s0
  __int64 v118; // x1
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v120; // x0
  TerminalSceneComponent_c *v121; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v123; // x20
  TerminalSceneComponent_o *v124; // x0
  float v125; // s0
  System_Action_o *v126; // x1
  System_String_o *v127; // x19
  System_String_o *v128; // x20
  System_String_o *v129; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v131; // x23
  __int64 v132; // x8
  __int64 v133; // x23
  float v134; // s0
  System_String_o *param; // x21
  _QWORD *v136; // x0
  System_Reflection_MethodBase_o *v137; // x0
  __int64 v138; // x20
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  __int64 v145; // x23
  __int64 v146; // x8
  __int64 v147; // x22
  int32_t v148; // w21
  bool v149; // w24
  bool v150; // w26
  __int64 v151; // x23
  int32_t v152; // w21
  int32_t v153; // w22
  int32_t v154; // w23
  __int64 v155; // x20
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  __int64 v162; // x8
  QuestAfterAction_o *v163; // x22
  Il2CppObject *v164; // x0
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  UnityEngine_Object_o *v171; // x19
  SrcSpotBasePrefab_o *v172; // x19
  System_Action_o *v173; // x21
  int32_t v174; // w1
  __int64 v175; // x23
  float v176; // s0
  float v177; // s9
  float v178; // s0
  float v179; // s10
  float v180; // s0
  float v181; // s11
  float v182; // s0
  float v183; // s8
  int32_t v184; // w19
  __int64 v185; // x8
  float v186; // s8
  const MethodInfo_375CF8C *v187; // x2
  float v188; // s0
  float v189; // s1
  float v190; // s2
  float v191; // s10
  float v192; // s9
  float v193; // s11
  MapCamera_o *v194; // x20
  System_Action_o *v195; // x21
  MapCamera_o *v196; // x0
  float v197; // s0
  float v198; // s1
  float v199; // s2
  float v200; // s3
  int32_t v201; // w1
  __int64 v202; // x20
  int64_t v203; // x2
  int32_t v204; // w3
  System_String_o *v205; // x4
  BattleSetupInfo_o *v206; // x5
  FollowerInfo_o *v207; // x6
  PartyListViewItem_o *v208; // x7
  __int64 v209; // x8
  QuestAfterAction_o *v210; // x22
  Il2CppObject *v211; // x0
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  UnityEngine_Object_o *v218; // x19
  ModelLineComponent_o *v219; // x19
  System_Action_o *v220; // x21
  const MethodInfo *v221; // x3
  int32_t v222; // w1
  __int64 v223; // x1
  TerminalPramsManager_c *v224; // x0
  __int64 v225; // x8
  const MethodInfo *v226; // x2
  __int64 v227; // x8
  QuestAfterAction_TitleInfoControlCallback_o *v228; // x21
  __int64 v229; // x20
  int64_t v230; // x2
  int32_t v231; // w3
  System_String_o *v232; // x4
  BattleSetupInfo_o *v233; // x5
  FollowerInfo_o *v234; // x6
  PartyListViewItem_o *v235; // x7
  __int64 v236; // x23
  int32_t v237; // w21
  Il2CppObject *v238; // x0
  __int64 *v239; // x24
  int64_t v240; // x2
  int32_t v241; // w3
  System_String_o *v242; // x4
  BattleSetupInfo_o *v243; // x5
  FollowerInfo_o *v244; // x6
  PartyListViewItem_o *v245; // x7
  const MethodInfo *v246; // x2
  __int64 v247; // x22
  int v248; // w21
  __int64 v249; // x8
  NetworkManager_ResultCallbackFunc_o *v250; // x21
  Il2CppObject *Request_object; // x20
  int32_t v252; // w21
  TerminalSceneComponent_c *v253; // x0
  TerminalSceneComponent_o *v254; // x22
  __int64 v255; // x8
  PlayMakerFSM_o *v256; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v258; // x8
  __int64 v259; // x8
  QuestBoardListViewManager_o *v260; // x21
  System_Action_o *v261; // x22
  __int64 v262; // x22
  int v263; // w23
  float v264; // s8
  int32_t v265; // w21
  __int64 v266; // x8
  __int64 v267; // x21
  int32_t v268; // w20
  __int64 v269; // x8
  __int64 v270; // x8
  __int64 v271; // x8
  __int64 v272; // x8
  System_String_o *v273; // x20
  System_String_o *v274; // x21
  SeManager_c *v275; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v277; // x21
  int32_t v278; // w20
  int32_t v279; // w22
  TerminalPramsManager_c *v280; // x0
  __int64 v281; // x8
  __int64 v282; // x1
  const MethodInfo *v283; // x2
  TerminalPramsManager_c *v284; // x0
  System_String_o *v285; // x23
  int64_t v286; // x2
  int32_t v287; // w3
  System_String_o *v288; // x4
  BattleSetupInfo_o *v289; // x5
  FollowerInfo_o *v290; // x6
  PartyListViewItem_o *v291; // x7
  System_String_array *v292; // x20
  int64_t v293; // x1
  int v294; // w8
  System_String_o *v295; // x19
  System_String_o *v296; // x20
  System_String_o *v297; // x19
  System_String_o *v298; // x20
  System_String_o *v299; // x20
  Il2CppObject *v300; // x21
  System_Action_o *v301; // x23
  int *v302; // x10
  System_String_o *v303; // x23
  int64_t v304; // x2
  int32_t v305; // w3
  System_String_o *v306; // x4
  BattleSetupInfo_o *v307; // x5
  FollowerInfo_o *v308; // x6
  PartyListViewItem_o *v309; // x7
  System_String_array *v310; // x20
  int64_t v311; // x1
  int v312; // w8
  System_String_o *v313; // x19
  System_String_o *v314; // x20
  System_String_o *v315; // x20
  Il2CppObject *v316; // x21
  System_Action_o *v317; // x23
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v319; // x20
  __int64 v320; // x8
  ScrTerminalMap_o *v321; // x23
  __int64 v322; // x8
  ScrTerminalMap_o *v323; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v325; // x23
  __int64 v326; // x8
  float v327; // s0
  __int64 v328; // x8
  float v329; // s0
  __int64 v330; // x23
  float v331; // s0
  float v332; // s8
  int32_t v333; // w22
  __int64 v334; // x8
  ScrTerminalMap_o *v335; // x24
  float v336; // s0
  float v337; // s9
  float v338; // s0
  const MethodInfo_375CF8C *v339; // x2
  int v340; // w8
  float v341; // s10
  float v342; // s9
  float v343; // s11
  MapCamera_o *v344; // x20
  __int64 v345; // x21
  int32_t v346; // w0
  int32_t v347; // w20
  float v348; // s8
  int32_t v349; // w19
  __int64 v350; // x20
  int64_t v351; // x2
  int32_t v352; // w3
  System_String_o *v353; // x4
  BattleSetupInfo_o *v354; // x5
  FollowerInfo_o *v355; // x6
  PartyListViewItem_o *v356; // x7
  __int64 v357; // x8
  QuestAfterAction_o *v358; // x22
  Il2CppObject *v359; // x0
  int64_t v360; // x2
  int32_t v361; // w3
  System_String_o *v362; // x4
  BattleSetupInfo_o *v363; // x5
  FollowerInfo_o *v364; // x6
  PartyListViewItem_o *v365; // x7
  UnityEngine_Object_o *v366; // x19
  __int64 v367; // x23
  int64_t v368; // x2
  int32_t v369; // w3
  System_String_o *v370; // x4
  BattleSetupInfo_o *v371; // x5
  FollowerInfo_o *v372; // x6
  PartyListViewItem_o *v373; // x7
  __int64 v374; // x20
  QuestAfterAction_o *v375; // x22
  Il2CppObject *v376; // x0
  int64_t *v377; // x19
  int64_t v378; // x2
  int32_t v379; // w3
  System_String_o *v380; // x4
  BattleSetupInfo_o *v381; // x5
  FollowerInfo_o *v382; // x6
  PartyListViewItem_o *v383; // x7
  UnityEngine_Object_o *v384; // x21
  SrcSpotBasePrefab_o *v385; // x21
  System_Action_o *v386; // x22
  int64_t v387; // x2
  int32_t v388; // w3
  System_String_o *v389; // x4
  BattleSetupInfo_o *v390; // x5
  FollowerInfo_o *v391; // x6
  PartyListViewItem_o *v392; // x7
  int64_t v393; // x1
  PartyOrganizationUtility_o *v394; // x0
  __int64 v395; // x22
  QuestAfterAction_o *v396; // x21
  Il2CppObject *v397; // x21
  System_Action_o *v398; // x22
  QuestAfterAction_o *v399; // x22
  Il2CppObject *v400; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v402; // x0
  int32_t v403; // w1
  QuestAfterAction_o *v404; // x22
  Il2CppObject *v405; // x21
  _DWORD *v406; // x8
  QuestAfterAction_o *v407; // x22
  _DWORD *v408; // x8
  __int64 v409; // x21
  QuestAfterAction_o *v410; // x22
  Il2CppObject *v411; // x22
  SceneJumpInfo_o *v412; // x21
  __int64 v413; // x1
  TerminalPramsManager_c *v414; // x0
  TerminalPramsManager_c *v415; // x0
  __int64 v416; // x1
  int32_t v417; // w21
  TerminalPramsManager_c *v418; // x0
  QuestAfterAction_o *v419; // x20
  Il2CppObject *v420; // x20
  __int64 v421; // x1
  TerminalPramsManager_c *v422; // x0
  MapCamera_o *v423; // x20
  float v424; // s0
  System_Action_o *v425; // x21
  MapCamera_o *v426; // x0
  float v427; // s0
  int32_t v428; // w4
  int v429; // w23
  __int64 v430; // x21
  float v431; // s0
  float v432; // s8
  float v433; // s0
  MapCamera_o *v434; // x19
  float v435; // s0
  float v436; // s9
  int32_t v437; // w20
  __int64 v438; // x20
  int64_t v439; // x2
  int32_t v440; // w3
  System_String_o *v441; // x4
  BattleSetupInfo_o *v442; // x5
  FollowerInfo_o *v443; // x6
  PartyListViewItem_o *v444; // x7
  __int64 v445; // x8
  QuestAfterAction_o *v446; // x22
  Il2CppObject *v447; // x0
  int64_t v448; // x2
  int32_t v449; // w3
  System_String_o *v450; // x4
  BattleSetupInfo_o *v451; // x5
  FollowerInfo_o *v452; // x6
  PartyListViewItem_o *v453; // x7
  UnityEngine_Object_o *v454; // x19
  __int64 v455; // x20
  int64_t v456; // x2
  int32_t v457; // w3
  System_String_o *v458; // x4
  BattleSetupInfo_o *v459; // x5
  FollowerInfo_o *v460; // x6
  PartyListViewItem_o *v461; // x7
  __int64 v462; // x8
  QuestAfterAction_o *v463; // x22
  Il2CppObject *v464; // x0
  int64_t v465; // x2
  int32_t v466; // w3
  System_String_o *v467; // x4
  BattleSetupInfo_o *v468; // x5
  FollowerInfo_o *v469; // x6
  PartyListViewItem_o *v470; // x7
  UnityEngine_Object_o *v471; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v473; // x22
  UnityEngine_Object_o *v474; // x21
  const MethodInfo *v475; // x2
  _DWORD *v476; // x8
  _BOOL4 v477; // w23
  QuestAfterAction_o *v478; // x22
  UnityEngine_Object_o *v479; // x21
  const MethodInfo *v480; // x2
  const MethodInfo *v481; // x2
  _DWORD *v482; // x8
  _BOOL4 v483; // w23
  QuestAfterAction_o *v484; // x22
  UnityEngine_Object_o *v485; // x21
  const MethodInfo *v486; // x2
  const MethodInfo *v487; // x2
  System_Action_o *v488; // x20
  const MethodInfo *v489; // x2
  Il2CppObject *v490; // x21
  System_Action_o *v491; // x23
  float v492; // s0
  float v493; // s0
  float v494; // s0
  QuestAfterAction_o *v495; // x24
  const MethodInfo *v496; // x4
  UnityEngine_Object_o *v497; // x24
  float v498; // s10
  float v499; // s8
  float v500; // s9
  __int64 v501; // x8
  const MethodInfo_375CF8C *v502; // x2
  System_String_o *v503; // x24
  QuestAfterAction_o *v504; // x24
  const MethodInfo *v505; // x4
  UnityEngine_Object_o *v506; // x24
  float v507; // s8
  float v508; // s9
  float v509; // s10
  __int64 v510; // x8
  float v511; // s0
  float v512; // s1
  float v513; // s2
  QuestAfterAction_o *v514; // x24
  const MethodInfo *v515; // x4
  UnityEngine_Object_o *v516; // x24
  __int64 v517; // x8
  int v518; // w8
  __int64 v519; // x8
  MapCamera_o *v520; // x20
  MapCamera_o *v521; // x0
  float v522; // s0
  float v523; // s1
  float v524; // s2
  __int64 v525; // x23
  int64_t v526; // x2
  int32_t v527; // w3
  System_String_o *v528; // x4
  BattleSetupInfo_o *v529; // x5
  FollowerInfo_o *v530; // x6
  PartyListViewItem_o *v531; // x7
  __int64 v532; // x20
  __int64 v533; // x8
  __int64 v534; // x21
  int32_t v535; // w22
  bool v536; // w26
  bool v537; // w27
  __int64 v538; // x8
  __int64 v539; // x22
  int32_t v540; // w21
  bool v541; // w22
  __int64 v542; // x8
  __int64 v543; // x22
  int32_t v544; // w21
  bool v545; // w22
  __int64 v546; // x21
  float v547; // s0
  QuestAfterAction_o *v548; // x20
  float v549; // s8
  Il2CppObject *v550; // x20
  _BOOL4 v551; // w23
  __int64 v552; // x20
  int64_t v553; // x2
  int32_t v554; // w3
  System_String_o *v555; // x4
  BattleSetupInfo_o *v556; // x5
  FollowerInfo_o *v557; // x6
  PartyListViewItem_o *v558; // x7
  __int64 v559; // x8
  QuestAfterAction_o *v560; // x22
  Il2CppObject *v561; // x0
  int64_t v562; // x2
  int32_t v563; // w3
  System_String_o *v564; // x4
  BattleSetupInfo_o *v565; // x5
  FollowerInfo_o *v566; // x6
  PartyListViewItem_o *v567; // x7
  UnityEngine_Object_o *v568; // x19
  MapGimmickComponent_o *v569; // x19
  System_Action_o *v570; // x21
  TerminalSceneComponent_o *v571; // x19
  __int64 v572; // x20
  int64_t v573; // x2
  int32_t v574; // w3
  System_String_o *v575; // x4
  BattleSetupInfo_o *v576; // x5
  FollowerInfo_o *v577; // x6
  PartyListViewItem_o *v578; // x7
  System_String_array *v579; // x0
  __int64 *v580; // x21
  int64_t v581; // x2
  int32_t v582; // w3
  System_String_o *v583; // x4
  BattleSetupInfo_o *v584; // x5
  FollowerInfo_o *v585; // x6
  PartyListViewItem_o *v586; // x7
  __int64 v587; // x8
  __int64 v588; // x9
  QuestAfterAction_o *v589; // x21
  Il2CppObject *v590; // x0
  int64_t v591; // x2
  int32_t v592; // w3
  System_String_o *v593; // x4
  BattleSetupInfo_o *v594; // x5
  FollowerInfo_o *v595; // x6
  PartyListViewItem_o *v596; // x7
  UnityEngine_Object_o *v597; // x19
  MapGimmickComponent_o *v598; // x19
  System_Action_o *v599; // x0
  __int64 *v600; // x8
  System_Action_o *v601; // x21
  __int64 v602; // x21
  QuestAfterAction_o *v603; // x20
  Il2CppObject *v604; // x20
  UIWidget_o *v605; // x20
  int64_t v606; // x2
  int32_t v607; // w3
  System_String_o *v608; // x4
  BattleSetupInfo_o *v609; // x5
  FollowerInfo_o *v610; // x6
  PartyListViewItem_o *v611; // x7
  __int64 v612; // x8
  QuestAfterAction_o *v613; // x22
  Il2CppObject *v614; // x0
  __int64 v615; // x19
  int64_t v616; // x2
  int32_t v617; // w3
  System_String_o *v618; // x4
  BattleSetupInfo_o *v619; // x5
  FollowerInfo_o *v620; // x6
  PartyListViewItem_o *v621; // x7
  UnityEngine_Object_o *v622; // x21
  bool v623; // w0
  bool v624; // w22
  int32_t v625; // w1
  __int64 v626; // x8
  __int64 v627; // x22
  int32_t v628; // w21
  bool v629; // w22
  __int64 v630; // x22
  QuestAfterAction_o *v631; // x21
  Il2CppObject *v632; // x21
  QuestAfterAction_o *v633; // x23
  const MethodInfo *v634; // x4
  int32_t v635; // w2
  QuestAfterAction_o *v636; // x0
  int32_t v637; // w1
  QuestAfterAction_o *v638; // x21
  QuestAfterAction_o *v639; // x23
  const MethodInfo *v640; // x4
  UnityEngine_Object_o *MapGameObject; // x23
  float v642; // s0
  float v643; // s1
  float v644; // s2
  float x; // s9
  float y; // s8
  float z; // s10
  QuestAfterAction_o *v648; // x21
  QuestAfterAction_o *v649; // x23
  UnityEngine_Object_o *v650; // x23
  __int64 v651; // x8
  float v652; // s0
  float v653; // s11
  int32_t v654; // w23
  System_String_o *v655; // x20
  __int64 v656; // x20
  int64_t v657; // x2
  int32_t v658; // w3
  System_String_o *v659; // x4
  BattleSetupInfo_o *v660; // x5
  FollowerInfo_o *v661; // x6
  PartyListViewItem_o *v662; // x7
  __int64 v663; // x8
  QuestAfterAction_o *v664; // x22
  Il2CppObject *v665; // x0
  int64_t v666; // x2
  int32_t v667; // w3
  System_String_o *v668; // x4
  BattleSetupInfo_o *v669; // x5
  FollowerInfo_o *v670; // x6
  PartyListViewItem_o *v671; // x7
  UnityEngine_Object_o *v672; // x19
  srcLineSprite_o *v673; // x19
  System_Action_o *v674; // x21
  int32_t v675; // w1
  __int64 v676; // x20
  int64_t v677; // x2
  int32_t v678; // w3
  System_String_o *v679; // x4
  BattleSetupInfo_o *v680; // x5
  FollowerInfo_o *v681; // x6
  PartyListViewItem_o *v682; // x7
  __int64 v683; // x8
  QuestAfterAction_o *v684; // x22
  Il2CppObject *v685; // x0
  int64_t v686; // x2
  int32_t v687; // w3
  System_String_o *v688; // x4
  BattleSetupInfo_o *v689; // x5
  FollowerInfo_o *v690; // x6
  PartyListViewItem_o *v691; // x7
  UnityEngine_Object_o *v692; // x19
  __int64 v693; // x20
  int64_t v694; // x2
  int32_t v695; // w3
  System_String_o *v696; // x4
  BattleSetupInfo_o *v697; // x5
  FollowerInfo_o *v698; // x6
  PartyListViewItem_o *v699; // x7
  __int64 v700; // x8
  QuestAfterAction_o *v701; // x22
  Il2CppObject *v702; // x0
  int64_t v703; // x2
  int32_t v704; // w3
  System_String_o *v705; // x4
  BattleSetupInfo_o *v706; // x5
  FollowerInfo_o *v707; // x6
  PartyListViewItem_o *v708; // x7
  UnityEngine_Object_o *v709; // x19
  UnityEngine_Object_o *v710; // x21
  UnityEngine_Object_o *v711; // x21
  int v712; // w9
  UnityEngine_Object_o *v713; // x21
  Il2CppObject *v714; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int64_t v716; // x2
  int32_t v717; // w3
  System_String_o *v718; // x4
  BattleSetupInfo_o *v719; // x5
  FollowerInfo_o *v720; // x6
  PartyListViewItem_o *v721; // x7
  TerminalSceneComponent_c *v722; // x0
  System_Action_o *v723; // x21
  float v724; // s10
  float v725; // s9
  float v726; // s8
  System_String_o *v727; // x24
  Il2CppObject *v728; // x0
  int64_t v729; // x2
  int32_t v730; // w3
  System_String_o *v731; // x4
  BattleSetupInfo_o *v732; // x5
  FollowerInfo_o *v733; // x6
  PartyListViewItem_o *v734; // x7
  UnityEngine_Object_o *v735; // x22
  MapGimmickComponent_o *v736; // x21
  System_Action_o *v737; // x0
  System_Action_o *v738; // x22
  MapGimmickComponent_o *v739; // x0
  System_Action_o *v740; // x2
  Il2CppObject *v741; // x0
  MapGimmickComponent_o **v742; // x22
  int64_t v743; // x2
  int32_t v744; // w3
  System_String_o *v745; // x4
  BattleSetupInfo_o *v746; // x5
  FollowerInfo_o *v747; // x6
  PartyListViewItem_o *v748; // x7
  UnityEngine_Object_o *v749; // x24
  MapGimmickComponent_o *v750; // x24
  System_Action_o *v751; // x0
  Il2CppObject *v752; // x21
  Il2CppObject *v753; // x21
  Il2CppClass *v754; // x8
  Il2CppObject *v755; // x21
  Il2CppClass *v756; // x8
  QuestAfterAction_StateMain_c *v757; // x8
  int v758; // w0
  __int64 v759; // x8
  ScrTerminalMap_o *v760; // x21
  System_Action_o *v761; // x23
  MapCamera_o *v762; // x20
  MapCamera_o *v763; // x20
  int v764; // w8
  MapCamera_o *v765; // x20
  float v766; // s0
  float v767; // s1
  float v768; // s2
  float v769; // s0
  float v770; // s1
  float v771; // s2
  __int64 v772; // x8
  float v773; // s3
  System_Action_o *v774; // x20
  MapGimmickComponent_o *v775; // x0
  float v776; // s0
  float v777; // s1
  float v778; // s2
  float v779; // s3
  int32_t v780; // w1
  System_Action_o *v781; // x2
  __int64 v782; // x8
  __int64 v783; // x8
  float v784; // s0
  float v785; // s0
  MapCamera_o *v786; // x0
  float v787; // s0
  __int64 v788; // x8
  ScrTerminalMap_o *v789; // x22
  float v790; // s0
  float v791; // s9
  float v792; // s0
  float v793; // s0
  float v794; // s1
  float v795; // s2
  float v796; // s10
  float v797; // s9
  float v798; // s11
  float v799; // s8
  int32_t v800; // w21
  System_Action_o *v801; // x22
  float v802; // s0
  float v803; // s0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  float sec; // [xsp+3Ch] [xbp-B4h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v807; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v813; // 0:x0.8
  System_Nullable_float__o v814; // 0:x0.8
  System_Nullable_float__o v815; // 0:x0.8
  System_Nullable_float__o v816; // 0:x0.8
  System_Nullable_float__o v817; // 0:x3.8
  System_Nullable_float__o v818; // 0:x3.8
  System_Nullable_Vector3__o v819; // 0:x0.16
  System_Nullable_Vector3__o v820; // 0:x0.16
  System_Nullable_Vector3__o v821; // 0:x0.16
  System_Nullable_Vector3__o v822; // 0:x0.16
  System_Nullable_Vector3__o v823; // 0:x0.16
  System_Nullable_Vector3__o v824; // 0:x1.16
  System_Nullable_Vector3__o v825; // 0:x1.16
  UnityEngine_Vector3_o v826; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v827; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v828; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v829; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v830; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v832; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v833; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v834; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v835; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v837; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v838; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v839; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v840; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v841; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v842; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC4830 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, that);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1C1ABD4(&DataManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v11);
    sub_1C1ABD4(&FSUtility_TypeInfo, v12);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v13);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v14);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v15);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___, v16);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v17);
    sub_1C1ABD4(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_1C1ABD4(&Method_System_Nullable_float___ctor__, v19);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v20);
    sub_1C1ABD4(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v21);
    sub_1C1ABD4(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v22);
    sub_1C1ABD4(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v23);
    sub_1C1ABD4(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v24);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v25);
    sub_1C1ABD4(&SceneJumpInfo_TypeInfo, v26);
    sub_1C1ABD4(&SeManager_TypeInfo, v27);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v28);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v29);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v31);
    sub_1C1ABD4(&Method_SingletonTemplate_QuestTree__get_Instance__, v32);
    sub_1C1ABD4(&SoundManager_TypeInfo, v33);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain_UpdateAnim__, v34);
    sub_1C1ABD4(&string___TypeInfo, v35);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v36);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v37);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, v38);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v39);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v40);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v41);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__, v42);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__, v43);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__, v44);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__, v45);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v46);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__, v47);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v48);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v49);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__, v50);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__, v51);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v52);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__, v53);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__, v54);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v55);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__, v56);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v57);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__, v58);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v59);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__, v60);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__, v61);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v62);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__, v63);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo, v64);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v65);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v66);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v67);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v68);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v69);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v70);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v71);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v72);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v73);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v74);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v75);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v76);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v77);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v78);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v79);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v80);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v81);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v82);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c_TypeInfo, v83);
    sub_1C1ABD4(&StringLiteral_89/*"\r\n"*/, v84);
    sub_1C1ABD4(&StringLiteral_1478/*"30101"*/, v85);
    sub_1C1ABD4(&StringLiteral_11023/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v86);
    sub_1C1ABD4(&StringLiteral_1479/*"30102"*/, v87);
    sub_1C1ABD4(&StringLiteral_1403/*"10703"*/, v88);
    sub_1C1ABD4(&StringLiteral_866/*","*/, v89);
    sub_1C1ABD4(&StringLiteral_3447/*"CAPTER WAIT"*/, v90);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v91);
    sub_1C1ABD4(&StringLiteral_20148/*"gevINFOBAR_BACK"*/, v92);
    sub_1C1ABD4(&StringLiteral_1212/*"0"*/, v93);
    byte_4BC4830 = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v94 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v94, 0LL);
  if ( !v94 )
    goto LABEL_1012;
  *(_QWORD *)(v94 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v94 + 16), (int64_t)this, v97, v98, v99, v100, v101, v102);
  *(_QWORD *)(v94 + 24) = that;
  v103 = (__int64 *)(v94 + 24);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v94 + 24), (int64_t)that, v104, v105, v106, v107, v108, v109);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v103 )
    goto LABEL_1012;
  if ( *(_BYTE *)(*v103 + 169) )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v103 )
    {
      *(_BYTE *)(*v103 + 169) = 0;
      return;
    }
LABEL_1012:
    sub_1C1AE30(updated, v96);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v111 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v111 )
    goto LABEL_1012;
  if ( (unsigned int)updated >= *(_DWORD *)(v111 + 24) )
    goto LABEL_1013;
  v112 = *(QuestAfterAction_Command_o **)(v111 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v112,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_839;
  if ( !*v103 )
    goto LABEL_1012;
  v113 = *(BlankEarthQuestAfterAction_o **)(*v103 + 48);
  v114 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v114, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !v113 )
    goto LABEL_1012;
  updated = BlankEarthQuestAfterAction__UpdateAnim(v113, v96, v112, v114, &isQuickUpdate, v115);
  if ( (updated & 1) != 0 )
  {
    if ( isQuickUpdate )
    {
LABEL_18:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
        this,
        this->klass->vtable._15_onEnd.methodPtr);
LABEL_19:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, __int64, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
        this,
        *v103,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v112 )
    goto LABEL_1012;
  id = v112->fields.id;
  if ( id <= 520 )
  {
    if ( id > 350 )
    {
      if ( id > 500 )
      {
        if ( id == 501 )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BC2713 )
          {
            sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
            byte_4BC2713 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v255 = **(_QWORD **)(updated + 184);
          if ( !v255 )
            goto LABEL_1012;
          updated = *(_QWORD *)(v255 + 256);
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v256 = (PlayMakerFSM_o *)updated;
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
          if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3447/*"CAPTER WAIT"*/, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BC2713 )
            {
              sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
              byte_4BC2713 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v258 = **(_QWORD **)(updated + 184);
            if ( !v258 )
              goto LABEL_1012;
            v259 = *(_QWORD *)(v258 + 256);
            if ( !v259 )
              goto LABEL_1012;
            v260 = *(QuestBoardListViewManager_o **)(v259 + 296);
            updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            }
            v261 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
            if ( !v261 )
            {
              if ( !*(_DWORD *)(updated + 224) )
              {
                j_il2cpp_runtime_class_init_0(updated);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v714 = **(Il2CppObject ***)(updated + 184);
              v261 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
              System_Action___ctor(v261, v714, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0LL);
              static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              static_fields->__9__16_22 = v261;
              sub_1C1AB78(
                (PartyOrganizationUtility_o *)&static_fields->__9__16_22,
                (int64_t)v261,
                v716,
                v717,
                v718,
                v719,
                v720,
                v721);
            }
            if ( !v260 )
              goto LABEL_1012;
            QuestBoardListViewManager__SetMode(v260, 4, v261, 0, 0, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BC2713 )
            {
              sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
              byte_4BC2713 = 1;
            }
            v722 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v722 = TerminalSceneComponent_TypeInfo;
            }
            updated = (__int64)v722->static_fields->mInstance;
            if ( !updated )
              goto LABEL_1012;
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
            PlayMakerFSM__SendEvent(v256, (System_String_o *)StringLiteral_20148/*"gevINFOBAR_BACK"*/, 0LL);
          }
          goto LABEL_839;
        }
        if ( id != 510 )
        {
          if ( id == 520 )
          {
            DEFAULT_FADE_TIME = System_Single__Parse(v112->fields.param, 0LL);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v120 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v120 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v120->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BC2713 )
            {
              sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v118);
              byte_4BC2713 = 1;
            }
            v121 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v121 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v121->static_fields->mInstance;
            v123 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            System_Action___ctor(
              v123,
              (Il2CppObject *)v94,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
              0LL);
            if ( !mInstance )
              goto LABEL_1012;
            v124 = mInstance;
            v125 = DEFAULT_FADE_TIME;
            v126 = v123;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v124, v125, v126, 0LL);
          }
          return;
        }
        updated = (__int64)v112->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v262 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v263 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          v264 = 0.5;
          if ( *(int *)(v262 + 24) >= 2 )
          {
            v265 = System_Int32__Parse(*(System_String_o **)(v262 + 40), 0LL);
            if ( *(int *)(v262 + 24) >= 3 )
              v264 = System_Single__Parse(*(System_String_o **)(v262 + 48), 0LL);
          }
          else
          {
            v265 = v263;
            v263 = -1;
          }
          updated = *v103;
          if ( !*v103 )
            goto LABEL_1012;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v265,
                                  this,
                                  (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
          {
            if ( v263 >= 1 )
            {
              updated = *v103;
              if ( !*v103 )
                goto LABEL_1012;
              v319 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v263,
                       this,
                       (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v319, 0LL, 0LL) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4BC2713 )
                {
                  sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
                  byte_4BC2713 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v320 = **(_QWORD **)(updated + 184);
                if ( !v320 )
                  goto LABEL_1012;
                if ( !v319 )
                  goto LABEL_1012;
                v321 = *(ScrTerminalMap_o **)(v320 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v319, 0LL);
                if ( !v321 )
                  goto LABEL_1012;
                ScrTerminalMap__SetPlayerIcon(v321, (UnityEngine_GameObject_o *)updated, 0LL);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BC2713 )
            {
              sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
              byte_4BC2713 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v322 = **(_QWORD **)(updated + 184);
            if ( !v322 )
              goto LABEL_1012;
            if ( !MapComponent_object )
              goto LABEL_1012;
            v323 = *(ScrTerminalMap_o **)(v322 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
            v325 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            System_Action___ctor(v325, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v323 )
              goto LABEL_1012;
            ScrTerminalMap__MovePlayerIcon(v323, gameObject, v265, v325, v264, 0LL);
          }
          return;
        }
        goto LABEL_1013;
      }
      if ( (unsigned int)(id - 351) >= 2 )
      {
        switch ( id )
        {
          case 400:
            v138 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            System_Object___ctor((Il2CppObject *)v138, 0LL);
            if ( !v138 )
              goto LABEL_1012;
            *(_QWORD *)(v138 + 24) = v94;
            v145 = v138 + 24;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v138 + 24), v94, v139, v140, v141, v142, v143, v144);
            updated = (__int64)v112->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v146 = *(_QWORD *)(updated + 24);
            v147 = updated;
            if ( v146 )
            {
              if ( !(_DWORD)v146 )
                goto LABEL_1013;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v148 = updated;
              if ( *(int *)(v147 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v147 + 40), 0LL);
                v149 = (int)updated < 1;
                if ( *(int *)(v147 + 24) < 3 )
                {
                  v150 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v147 + 48), 0LL);
                  v150 = (int)updated > 0;
                }
                goto LABEL_852;
              }
            }
            else
            {
              v148 = 0;
            }
            v150 = 0;
            v149 = 1;
LABEL_852:
            if ( !*(_QWORD *)v145 )
              goto LABEL_1012;
            updated = *(_QWORD *)(*(_QWORD *)v145 + 24LL);
            if ( !updated )
              goto LABEL_1012;
            v728 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v148,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v138 + 16) = v728;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v138 + 16), (int64_t)v728, v729, v730, v731, v732, v733, v734);
            v735 = *(UnityEngine_Object_o **)(v138 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v735, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v736 = *(MapGimmickComponent_o **)(v138 + 16);
            if ( !v736 )
              goto LABEL_1012;
            v736->fields.isForceNotActive = v150;
            v737 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            v738 = v737;
            if ( v149 )
            {
              System_Action___ctor(
                v737,
                (Il2CppObject *)v138,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
                0LL);
              v625 = 2;
              v739 = v736;
              v740 = v738;
LABEL_961:
              MapGimmickComponent__SetState(v739, v625, v740, 0LL);
              return;
            }
            System_Action___ctor(
              v737,
              (Il2CppObject *)v138,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
              0LL);
            MapGimmickComponent__SetState(v736, 2, v738, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v782 = *(_QWORD *)(v138 + 24);
            if ( !v782 )
              goto LABEL_1012;
            goto LABEL_966;
          case 401:
            v525 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            System_Object___ctor((Il2CppObject *)v525, 0LL);
            if ( !v525 )
              goto LABEL_1012;
            *(_QWORD *)(v525 + 24) = v94;
            v532 = v525 + 24;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v525 + 24), v94, v526, v527, v528, v529, v530, v531);
            updated = (__int64)v112->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v533 = *(_QWORD *)(updated + 24);
            v534 = updated;
            if ( v533 )
            {
              if ( !(_DWORD)v533 )
                goto LABEL_1013;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v535 = updated;
              if ( *(int *)(v534 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v534 + 40), 0LL);
                v536 = (int)updated < 1;
                if ( *(int *)(v534 + 24) < 3 )
                {
                  v537 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v534 + 48), 0LL);
                  v537 = (int)updated > 0;
                }
                goto LABEL_862;
              }
            }
            else
            {
              v535 = 0;
            }
            v537 = 0;
            v536 = 1;
LABEL_862:
            if ( !*(_QWORD *)v532 )
              goto LABEL_1012;
            updated = *(_QWORD *)(*(_QWORD *)v532 + 24LL);
            if ( !updated )
              goto LABEL_1012;
            v741 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v535,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v525 + 16) = v741;
            v742 = (MapGimmickComponent_o **)(v525 + 16);
            sub_1C1AB78((PartyOrganizationUtility_o *)(v525 + 16), (int64_t)v741, v743, v744, v745, v746, v747, v748);
            v749 = *(UnityEngine_Object_o **)(v525 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v749, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v750 = *v742;
            if ( !*v742 )
              goto LABEL_1012;
            v750->fields.isForceLoop = v537;
            v750->fields.isForceNotActive = 0;
            if ( *(int *)(v534 + 24) >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v534 + 56), 0LL);
              if ( !*v742 )
                goto LABEL_1012;
              MapGimmickComponent__SetUseAnimNum(*v742, updated, 1, 0LL);
              v750 = *v742;
            }
            v751 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            v601 = v751;
            if ( v536 )
            {
              System_Action___ctor(
                v751,
                (Il2CppObject *)v525,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
                0LL);
              if ( !v750 )
                goto LABEL_1012;
              v625 = 3;
              v739 = v750;
LABEL_960:
              v740 = v601;
              goto LABEL_961;
            }
            System_Action___ctor(
              v751,
              (Il2CppObject *)v525,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
              0LL);
            if ( !v750 )
              goto LABEL_1012;
            MapGimmickComponent__SetState(v750, 3, v601, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v782 = *(_QWORD *)v532;
            if ( !*(_QWORD *)v532 )
              goto LABEL_1012;
LABEL_966:
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
              this,
              *(_QWORD *)(v782 + 24),
              this->klass->vtable._14_EndAnim.methodPtr);
            return;
          case 402:
            updated = (__int64)v112->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v538 = *(_QWORD *)(updated + 24);
            v539 = updated;
            if ( v538 )
            {
              if ( !(_DWORD)v538 )
                goto LABEL_1013;
              v540 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v539 + 24) >= 2 )
              {
                v541 = System_Int32__Parse(*(System_String_o **)(v539 + 40), 0LL) > 0;
                goto LABEL_876;
              }
            }
            else
            {
              v540 = 0;
            }
            v541 = 0;
LABEL_876:
            updated = *v103;
            if ( !*v103 )
              goto LABEL_1012;
            v752 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v540,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v752, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v752 )
                goto LABEL_1012;
              BYTE1(v752[6].monitor) = v541;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v752, 0, 0LL);
              v476 = v752[7].klass;
              if ( !v476 )
                goto LABEL_1012;
LABEL_882:
              v476[4] = 0;
              goto LABEL_18;
            }
            return;
          case 403:
            updated = (__int64)v112->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v542 = *(_QWORD *)(updated + 24);
            v543 = updated;
            if ( v542 )
            {
              if ( !(_DWORD)v542 )
                goto LABEL_1013;
              v544 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v543 + 24) >= 2 )
              {
                v545 = System_Int32__Parse(*(System_String_o **)(v543 + 40), 0LL) > 0;
                goto LABEL_885;
              }
            }
            else
            {
              v544 = 0;
            }
            v545 = 0;
LABEL_885:
            updated = *v103;
            if ( !*v103 )
              goto LABEL_1012;
            v753 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v544,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v753, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v753 )
                goto LABEL_1012;
              LOBYTE(v753[6].monitor) = v545;
              BYTE1(v753[6].monitor) = 0;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v753, 1, 0LL);
              v754 = v753[7].klass;
              if ( !v754 )
                goto LABEL_1012;
              LODWORD(v754->_1.name) = 1;
              goto LABEL_18;
            }
            return;
          case 404:
            updated = (__int64)v112->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v546 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_839;
            v547 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
            if ( !*(_DWORD *)(v546 + 24) )
              goto LABEL_1013;
            v548 = (QuestAfterAction_o *)*v103;
            v549 = v547;
            updated = System_Int32__Parse(*(System_String_o **)(v546 + 32), 0LL);
            if ( !v548 )
              goto LABEL_1012;
            v550 = QuestAfterAction__GetMapComponent_object_(
                     v548,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v550, 0LL, 0LL) )
              return;
            v551 = *(int *)(v546 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v546 + 72), 0LL) > 0;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BC2713 )
            {
              sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
              byte_4BC2713 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v788 = **(_QWORD **)(updated + 184);
            if ( !v788 )
              goto LABEL_1012;
            if ( *(_DWORD *)(v546 + 24) <= 1u )
              goto LABEL_1013;
            v789 = *(ScrTerminalMap_o **)(v788 + 264);
            v790 = System_Single__Parse(*(System_String_o **)(v546 + 40), 0LL);
            if ( *(_DWORD *)(v546 + 24) <= 2u )
              goto LABEL_1013;
            v791 = v790;
            v792 = System_Single__Parse(*(System_String_o **)(v546 + 48), 0LL);
            if ( !v789 )
              goto LABEL_1012;
            *(UnityEngine_Vector3_o *)&v793 = ScrTerminalMap__LocalPosFromCoord(v789, v791, v792, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v546 + 24) <= 4u )
              goto LABEL_1013;
            v796 = v793;
            v797 = v794;
            v798 = v795;
            v799 = v549 * 0.001;
            updated = System_Int32__Parse(*(System_String_o **)(v546 + 64), 0LL);
            v800 = updated;
            if ( v551 )
            {
              if ( !v550 )
                goto LABEL_1012;
              v840.fields.x = v796;
              v840.fields.y = v797;
              v840.fields.z = v798;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v550, v840, v799, updated, 0LL, 0LL);
              goto LABEL_839;
            }
            v801 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            System_Action___ctor(v801, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v550 )
              goto LABEL_1012;
            v775 = (MapGimmickComponent_o *)v550;
            v776 = v796;
            v777 = v797;
            v778 = v798;
            v779 = v799;
            v780 = v800;
            v781 = v801;
LABEL_1003:
            MapGimmickComponent__SetMoveAnim(v775, *(UnityEngine_Vector3_o *)&v776, v779, v780, v781, 0LL);
            return;
          case 405:
            v552 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            System_Object___ctor((Il2CppObject *)v552, 0LL);
            if ( !v552 )
              goto LABEL_1012;
            *(_QWORD *)(v552 + 24) = v94;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v552 + 24), v94, v553, v554, v555, v556, v557, v558);
            v559 = *(_QWORD *)(v552 + 24);
            if ( !v559 )
              goto LABEL_1012;
            v560 = *(QuestAfterAction_o **)(v559 + 24);
            updated = System_Int32__Parse(v112->fields.param, 0LL);
            if ( !v560 )
              goto LABEL_1012;
            v561 = QuestAfterAction__GetMapComponent_object_(
                     v560,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v552 + 16) = v561;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v552 + 16), (int64_t)v561, v562, v563, v564, v565, v566, v567);
            v568 = *(UnityEngine_Object_o **)(v552 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v568, 0LL, 0LL) )
              return;
            v569 = *(MapGimmickComponent_o **)(v552 + 16);
            v570 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            System_Action___ctor(
              v570,
              (Il2CppObject *)v552,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
              0LL);
            if ( !v569 )
              goto LABEL_1012;
            MapGimmickComponent__SetState(v569, 3, v570, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BC2713 )
            {
              sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
              byte_4BC2713 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v571 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v571 )
              goto LABEL_1012;
            v124 = v571;
            v126 = 0LL;
            v125 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_46;
          case 406:
            v572 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            System_Object___ctor((Il2CppObject *)v572, 0LL);
            if ( !v572 )
              goto LABEL_1012;
            *(_QWORD *)(v572 + 32) = v94;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v572 + 32), v94, v573, v574, v575, v576, v577, v578);
            updated = (__int64)v112->fields.param;
            if ( !updated )
              goto LABEL_1012;
            v579 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            *(_QWORD *)(v572 + 24) = v579;
            v580 = (__int64 *)(v572 + 24);
            sub_1C1AB78((PartyOrganizationUtility_o *)(v572 + 24), (int64_t)v579, v581, v582, v583, v584, v585, v586);
            v587 = *(_QWORD *)(v572 + 32);
            if ( !v587 )
              goto LABEL_1012;
            v588 = *v580;
            if ( !*v580 )
              goto LABEL_1012;
            if ( !*(_DWORD *)(v588 + 24) )
              goto LABEL_1013;
            v589 = *(QuestAfterAction_o **)(v587 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v588 + 32), 0LL);
            if ( !v589 )
              goto LABEL_1012;
            v590 = QuestAfterAction__GetMapComponent_object_(
                     v589,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v572 + 16) = v590;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v572 + 16), (int64_t)v590, v591, v592, v593, v594, v595, v596);
            v597 = *(UnityEngine_Object_o **)(v572 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v597, 0LL, 0LL) )
              return;
            v598 = *(MapGimmickComponent_o **)(v572 + 16);
            v599 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            v600 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
            v601 = v599;
            goto LABEL_716;
          case 407:
            updated = (__int64)v112->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v602 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1013;
            v603 = (QuestAfterAction_o *)*v103;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v603 )
              goto LABEL_1012;
            v604 = QuestAfterAction__GetMapComponent_object_(
                     v603,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v604, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( !v604 )
              goto LABEL_1012;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v604, 0LL);
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_2FEFE24 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v602 + 24) <= 1u )
              goto LABEL_1013;
            v605 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v602 + 40), &color, 0LL);
            if ( !v605 )
              goto LABEL_1012;
            UIWidget__set_color(v605, color, 0LL);
            goto LABEL_839;
          case 408:
            v572 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            System_Object___ctor((Il2CppObject *)v572, 0LL);
            if ( !v572 )
              goto LABEL_1012;
            *(_QWORD *)(v572 + 24) = v94;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v572 + 24), v94, v606, v607, v608, v609, v610, v611);
            v612 = *(_QWORD *)(v572 + 24);
            if ( !v612 )
              goto LABEL_1012;
            v613 = *(QuestAfterAction_o **)(v612 + 24);
            updated = System_Int32__Parse(v112->fields.param, 0LL);
            if ( !v613 )
              goto LABEL_1012;
            v614 = QuestAfterAction__GetMapComponent_object_(
                     v613,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v572 + 16) = v614;
            v615 = v572 + 16;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v572 + 16), (int64_t)v614, v616, v617, v618, v619, v620, v621);
            v622 = *(UnityEngine_Object_o **)(v572 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v622, 0LL, 0LL) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v615 || !updated )
              goto LABEL_1012;
            v623 = QuestTree__CheckMapGimmickCond_35161012(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v615 + 112LL),
                     0LL);
            v598 = *(MapGimmickComponent_o **)v615;
            v624 = v623;
            v599 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            v601 = v599;
            if ( v624 )
            {
              v600 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_716:
              System_Action___ctor(v599, (Il2CppObject *)v572, *v600, 0LL);
              if ( !v598 )
                goto LABEL_1012;
              v625 = 3;
            }
            else
            {
              System_Action___ctor(
                v599,
                (Il2CppObject *)v572,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
                0LL);
              if ( !v598 )
                goto LABEL_1012;
              v625 = 2;
            }
            v739 = v598;
            goto LABEL_960;
          case 409:
            updated = (__int64)v112->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v626 = *(_QWORD *)(updated + 24);
            v627 = updated;
            if ( v626 )
            {
              if ( !(_DWORD)v626 )
                goto LABEL_1013;
              v628 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v627 + 24) >= 2 )
              {
                v629 = System_Int32__Parse(*(System_String_o **)(v627 + 40), 0LL) > 0;
                goto LABEL_894;
              }
            }
            else
            {
              v628 = 0;
            }
            v629 = 0;
LABEL_894:
            updated = *v103;
            if ( !*v103 )
              goto LABEL_1012;
            v755 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v628,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v755, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v755 )
                goto LABEL_1012;
              LOBYTE(v755[6].monitor) = v629;
              BYTE1(v755[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v755, 1, 0LL);
              v756 = v755[7].klass;
              if ( !v756 )
                goto LABEL_1012;
              LODWORD(v756->_1.name) = 1;
              v757 = this->klass;
              this->fields.IsAnimDoing = 0;
              v758 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v757->vtable._11_get_CommandIndex.method)(
                       this,
                       v757->vtable._12_set_CommandIndex.methodPtr);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                this,
                (unsigned int)(v758 + 1),
                this->klass->vtable._13_UpdateAnim.methodPtr);
              goto LABEL_19;
            }
            return;
          case 410:
            updated = (__int64)v112->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v630 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_839;
            v631 = (QuestAfterAction_o *)*v103;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v631 )
              goto LABEL_1012;
            v632 = QuestAfterAction__GetMapComponent_object_(
                     v631,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v632, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v630 + 24) <= 1u )
              goto LABEL_1013;
            v633 = (QuestAfterAction_o *)*v103;
            updated = System_Int32__Parse(*(System_String_o **)(v630 + 40), 0LL);
            if ( !v633 )
              goto LABEL_1012;
            v635 = updated;
            v636 = v633;
            v637 = 0;
            goto LABEL_758;
          case 411:
            updated = (__int64)v112->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v630 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_839;
            v638 = (QuestAfterAction_o *)*v103;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v638 )
              goto LABEL_1012;
            v632 = QuestAfterAction__GetMapComponent_object_(
                     v638,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v632, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v630 + 24) <= 1u )
              goto LABEL_1013;
            v639 = (QuestAfterAction_o *)*v103;
            updated = System_Int32__Parse(*(System_String_o **)(v630 + 40), 0LL);
            if ( !v639 )
              goto LABEL_1012;
            MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v639, 2, updated, this, v640);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
              return;
            *(UnityEngine_Vector3_o *)&v642 = GameObjectExtensions__GetLocalPosition(
                                                (UnityEngine_GameObject_o *)MapGameObject,
                                                0LL);
            if ( *(_DWORD *)(v630 + 24) <= 2u )
              goto LABEL_1013;
            x = v642;
            y = v643;
            z = v644;
            goto LABEL_772;
          case 412:
            updated = (__int64)v112->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v630 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_839;
            v648 = (QuestAfterAction_o *)*v103;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v648 )
              goto LABEL_1012;
            v632 = QuestAfterAction__GetMapComponent_object_(
                     v648,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v632, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v630 + 24) <= 1u )
              goto LABEL_1013;
            v649 = (QuestAfterAction_o *)*v103;
            updated = System_Int32__Parse(*(System_String_o **)(v630 + 40), 0LL);
            if ( !v649 )
              goto LABEL_1012;
            v635 = updated;
            v637 = 1;
            v636 = v649;
LABEL_758:
            v650 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v636, v637, v635, this, v634);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v650, 0LL, 0LL) )
              return;
            LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v650, 0LL);
            x = LocalPosition.fields.x;
            y = LocalPosition.fields.y;
            z = LocalPosition.fields.z;
            if ( !this->fields.IsMapModel )
              goto LABEL_771;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BC2713 )
            {
              sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
              byte_4BC2713 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v651 = **(_QWORD **)(updated + 184);
            if ( !v651 )
              goto LABEL_1012;
            updated = *(_QWORD *)(v651 + 264);
            if ( !updated )
              goto LABEL_1012;
            v837.fields.x = x;
            v837.fields.y = y;
            v837.fields.z = z;
            v838 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v837, 0LL);
            x = v838.fields.x;
            y = v838.fields.y;
            z = v838.fields.z;
LABEL_771:
            if ( *(_DWORD *)(v630 + 24) <= 2u )
              goto LABEL_1013;
LABEL_772:
            v652 = System_Single__Parse(*(System_String_o **)(v630 + 48), 0LL) * 0.001;
            if ( v652 >= 0.0 )
              v653 = v652;
            else
              v653 = 0.5;
            if ( *(_DWORD *)(v630 + 24) <= 3u )
              goto LABEL_1013;
            v654 = System_Int32__Parse(*(System_String_o **)(v630 + 56), 0LL);
            if ( *(int *)(v630 + 24) >= 5 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v630 + 64), 0LL);
              if ( (int)updated >= 1 )
              {
                if ( !v632 )
                  goto LABEL_1012;
                v839.fields.x = x;
                v839.fields.y = y;
                v839.fields.z = z;
                MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v632, v839, v653, v654, 0LL, 0LL);
                goto LABEL_18;
              }
            }
            v774 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            System_Action___ctor(v774, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v632 )
              goto LABEL_1012;
            v775 = (MapGimmickComponent_o *)v632;
            v776 = x;
            v777 = y;
            v778 = z;
            v779 = v653;
            v780 = v654;
            v781 = v774;
            goto LABEL_1003;
          default:
            if ( id != 500 )
              return;
            v417 = System_Int32__Parse(v112->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BC4857 )
            {
              sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v416);
              byte_4BC4857 = 1;
            }
            v418 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v418 = TerminalPramsManager_TypeInfo;
            }
            v418->static_fields->_AfterActionFocusQuestId_k__BackingField = v417;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_1012;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    &entity,
                    v417,
                    (const MethodInfo_32486C4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_839;
            updated = (__int64)entity;
            if ( !entity )
              goto LABEL_1012;
            v419 = (QuestAfterAction_o *)*v103;
            updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v419 )
              goto LABEL_1012;
            v420 = QuestAfterAction__GetMapComponent_object_(
                     v419,
                     0,
                     updated,
                     this,
                     (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v420, 0LL, 0LL);
            if ( (updated & 1) == 0 )
              goto LABEL_839;
            if ( !v420 )
              goto LABEL_1012;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v420, 0, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BC4858 )
            {
              sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v421);
              byte_4BC4858 = 1;
            }
            v422 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v422 = TerminalPramsManager_TypeInfo;
            }
            v422->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
            goto LABEL_839;
        }
      }
      updated = (__int64)v112->fields.param;
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_1012;
      v175 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_839;
      v176 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(_DWORD *)(v175 + 24) <= 1u )
        goto LABEL_1013;
      v177 = v176;
      v178 = System_Single__Parse(*(System_String_o **)(v175 + 40), 0LL);
      if ( *(_DWORD *)(v175 + 24) <= 2u )
        goto LABEL_1013;
      v179 = v178;
      v180 = System_Single__Parse(*(System_String_o **)(v175 + 48), 0LL);
      if ( *(_DWORD *)(v175 + 24) <= 3u )
        goto LABEL_1013;
      v181 = v180;
      v182 = System_Single__Parse(*(System_String_o **)(v175 + 56), 0LL);
      if ( *(_DWORD *)(v175 + 24) <= 4u )
        goto LABEL_1013;
      v183 = v182;
      v184 = System_Int32__Parse(*(System_String_o **)(v175 + 64), 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BC2713 )
      {
        sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
        byte_4BC2713 = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v185 = **(_QWORD **)(updated + 184);
      if ( !v185 )
        goto LABEL_1012;
      updated = *(_QWORD *)(v185 + 264);
      if ( !updated )
        goto LABEL_1012;
      v826.fields.y = v179;
      v826.fields.z = v181;
      v186 = v183 * 0.001;
      v826.fields.x = v177;
      *(UnityEngine_Vector3_o *)&v188 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                          (ScrTerminalMap_o *)updated,
                                          v826,
                                          0LL);
      v191 = v188;
      v192 = v189;
      v193 = v190;
      if ( v112->fields.id != 352 || *(int *)(v175 + 24) < 6 )
      {
        if ( !*v103 )
          goto LABEL_1012;
        v194 = *(MapCamera_o **)(*v103 + 152);
        v195 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
        System_Action___ctor(
          v195,
          (Il2CppObject *)v94,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
          0LL);
        if ( !v194 )
          goto LABEL_1012;
        v196 = v194;
        v197 = v191;
        v198 = v192;
        v199 = v193;
        v200 = v186;
        v201 = v184;
        goto LABEL_944;
      }
      if ( !*v103 )
        goto LABEL_1012;
      v423 = *(MapCamera_o **)(*v103 + 152);
      *(_QWORD *)&v819.fields.hasValue = &v807;
      *(_QWORD *)&v819.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v807.fields.hasValue = 0LL;
      *(_QWORD *)&v807.fields.value.fields.y = 0LL;
      System_Nullable_Vector3____ctor(v819, *(UnityEngine_Vector3_o *)&v188, v187);
      if ( *(_DWORD *)(v175 + 24) <= 5u )
        goto LABEL_1013;
      v424 = System_Single__Parse(*(System_String_o **)(v175 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v424, (const MethodInfo_375AF28 *)Method_System_Nullable_float___ctor__);
      v425 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v425,
        (Il2CppObject *)v94,
        Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
        0LL);
      if ( !v423 )
        goto LABEL_1012;
      v824 = v807;
      v817 = size;
      v426 = v423;
      v427 = v186;
      v428 = v184;
LABEL_985:
      MapCamera__StartAutoWork(v426, v427, v824, v817, v428, v425, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v155 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v155, 0LL);
          if ( !v155 )
            goto LABEL_1012;
          *(_QWORD *)(v155 + 24) = v94;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v155 + 24), v94, v156, v157, v158, v159, v160, v161);
          v162 = *(_QWORD *)(v155 + 24);
          if ( !v162 )
            goto LABEL_1012;
          v163 = *(QuestAfterAction_o **)(v162 + 24);
          updated = System_Int32__Parse(v112->fields.param, 0LL);
          if ( !v163 )
            goto LABEL_1012;
          v164 = QuestAfterAction__GetMapComponent_object_(
                   v163,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v155 + 16) = v164;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v155 + 16), (int64_t)v164, v165, v166, v167, v168, v169, v170);
          v171 = *(UnityEngine_Object_o **)(v155 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v171, 0LL, 0LL) )
            return;
          v172 = *(SrcSpotBasePrefab_o **)(v155 + 16);
          v173 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(
            v173,
            (Il2CppObject *)v155,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v172 )
            goto LABEL_1012;
          v174 = 2;
          goto LABEL_397;
        case 'e':
          v350 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          System_Object___ctor((Il2CppObject *)v350, 0LL);
          if ( !v350 )
            goto LABEL_1012;
          *(_QWORD *)(v350 + 24) = v94;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v350 + 24), v94, v351, v352, v353, v354, v355, v356);
          v357 = *(_QWORD *)(v350 + 24);
          if ( !v357 )
            goto LABEL_1012;
          v358 = *(QuestAfterAction_o **)(v357 + 24);
          updated = System_Int32__Parse(v112->fields.param, 0LL);
          if ( !v358 )
            goto LABEL_1012;
          v359 = QuestAfterAction__GetMapComponent_object_(
                   v358,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v350 + 16) = v359;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v350 + 16), (int64_t)v359, v360, v361, v362, v363, v364, v365);
          v366 = *(UnityEngine_Object_o **)(v350 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v366, 0LL, 0LL) )
            return;
          v172 = *(SrcSpotBasePrefab_o **)(v350 + 16);
          v173 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(
            v173,
            (Il2CppObject *)v350,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v172 )
            goto LABEL_1012;
          v174 = 3;
LABEL_397:
          SrcSpotBasePrefab__SetState(v172, v174, v173, 0LL);
          return;
        case 'f':
          v367 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v367, 0LL);
          if ( !v367 )
            goto LABEL_1012;
          *(_QWORD *)(v367 + 24) = v94;
          v374 = v367 + 24;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v367 + 24), v94, v368, v369, v370, v371, v372, v373);
          if ( !*(_QWORD *)(v367 + 24) )
            goto LABEL_1012;
          v375 = *(QuestAfterAction_o **)(*(_QWORD *)(v367 + 24) + 24LL);
          updated = System_Int32__Parse(v112->fields.param, 0LL);
          if ( !v375 )
            goto LABEL_1012;
          v376 = QuestAfterAction__GetMapComponent_object_(
                   v375,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v367 + 16) = v376;
          v377 = (int64_t *)(v367 + 16);
          sub_1C1AB78((PartyOrganizationUtility_o *)(v367 + 16), (int64_t)v376, v378, v379, v380, v381, v382, v383);
          v384 = *(UnityEngine_Object_o **)(v367 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v384, 0LL, 0LL) )
            return;
          v385 = *(SrcSpotBasePrefab_o **)(v367 + 16);
          v386 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(
            v386,
            (Il2CppObject *)v367,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v385 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetState(v385, 4, v386, 0LL);
          if ( !*(_QWORD *)v374 )
            goto LABEL_1012;
          updated = *(_QWORD *)(*(_QWORD *)v374 + 24LL);
          if ( !updated )
            goto LABEL_1012;
          v393 = *v377;
          *(_QWORD *)(updated + 184) = *v377;
          v394 = (PartyOrganizationUtility_o *)(updated + 184);
          goto LABEL_419;
        case 'g':
          updated = (__int64)v112->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v395 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_839;
          v396 = (QuestAfterAction_o *)*v103;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v396 )
            goto LABEL_1012;
          v397 = QuestAfterAction__GetMapComponent_object_(
                   v396,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v397, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v395 + 24) <= 1u )
            goto LABEL_1013;
          updated = System_Int32__Parse(*(System_String_o **)(v395 + 40), 0LL);
          if ( !v397 )
            goto LABEL_1012;
          LODWORD(v397[14].klass) = updated;
          v398 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(v398, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v397, 5, v398, 0LL);
          updated = *v103;
          if ( !*v103 )
            goto LABEL_1012;
          *(_QWORD *)(updated + 184) = v397;
          v394 = (PartyOrganizationUtility_o *)(updated + 184);
          v393 = (int64_t)v397;
LABEL_419:
          sub_1C1AB78(v394, v393, v387, v388, v389, v390, v391, v392);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v399 = (QuestAfterAction_o *)*v103;
          updated = System_Int32__Parse(v112->fields.param, 0LL);
          if ( !v399 )
            goto LABEL_1012;
          v400 = QuestAfterAction__GetMapComponent_object_(
                   v399,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v400, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v400 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v400, 0, 0LL);
          monitor = v400[14].monitor;
          if ( !monitor )
            goto LABEL_1012;
          monitor[5] = 0;
          v402 = (SrcSpotBasePrefab_o *)v400;
          v403 = 0;
          goto LABEL_442;
        case 'o':
          v404 = (QuestAfterAction_o *)*v103;
          updated = System_Int32__Parse(v112->fields.param, 0LL);
          if ( !v404 )
            goto LABEL_1012;
          v405 = QuestAfterAction__GetMapComponent_object_(
                   v404,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v405, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v405 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v405, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v405, 0, 0LL);
          v406 = v405[14].monitor;
          if ( !v406 )
            goto LABEL_1012;
          v406[5] = 2;
          goto LABEL_441;
        case 'p':
          v407 = (QuestAfterAction_o *)*v103;
          updated = System_Int32__Parse(v112->fields.param, 0LL);
          if ( !v407 )
            goto LABEL_1012;
          v405 = QuestAfterAction__GetMapComponent_object_(
                   v407,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v405, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v405 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v405, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v405, 1, 0LL);
          v408 = v405[14].monitor;
          if ( !v408 )
            goto LABEL_1012;
          v408[5] = 1;
LABEL_441:
          v403 = 1;
          v402 = (SrcSpotBasePrefab_o *)v405;
LABEL_442:
          SrcSpotBasePrefab__SetTouchType(v402, v403, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v112->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v409 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_839;
          v410 = (QuestAfterAction_o *)*v103;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v410 )
            goto LABEL_1012;
          v411 = QuestAfterAction__GetMapComponent_object_(
                   v410,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v411, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v409 + 24) <= 1u )
            goto LABEL_1013;
          updated = System_Int32__Parse(*(System_String_o **)(v409 + 40), 0LL);
          if ( !v411 )
            goto LABEL_1012;
          LODWORD(v411[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v411, 1, 0LL);
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
        updated = (__int64)v112->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v132 = *(_QWORD *)(updated + 24);
        v133 = updated;
        if ( (int)v132 <= 0 )
          goto LABEL_839;
        if ( (int)v132 > 2 )
        {
          v492 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v132 = *(_QWORD *)(v133 + 24);
          v134 = v492 * 0.001;
        }
        else
        {
          v134 = 0.5;
        }
        sec = v134;
        if ( (int)v132 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v133 + 40), 0LL);
          v132 = *(_QWORD *)(v133 + 24);
          v333 = updated;
        }
        else
        {
          v333 = 15;
        }
        if ( !(_DWORD)v132 )
          goto LABEL_1013;
        v495 = (QuestAfterAction_o *)*v103;
        updated = System_Int32__Parse(*(System_String_o **)(v133 + 32), 0LL);
        if ( !v495 )
          goto LABEL_1012;
        v497 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v495, 0, updated, this, v496);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v497, 0LL, 0LL) )
          return;
        v828 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v497, 0LL);
        v498 = v828.fields.x;
        v499 = v828.fields.y;
        v500 = v828.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_591;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BC2713 )
        {
          sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
          byte_4BC2713 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v501 = **(_QWORD **)(updated + 184);
        if ( !v501 )
          goto LABEL_1012;
        updated = *(_QWORD *)(v501 + 264);
        if ( !updated )
          goto LABEL_1012;
        v829.fields.x = v498;
        v829.fields.y = v499;
        v829.fields.z = v500;
        v830 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v829, 0LL);
        v498 = v830.fields.x;
        v499 = v830.fields.y;
        v500 = v830.fields.z;
LABEL_591:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_919;
        if ( !*(_DWORD *)(v133 + 24) )
          goto LABEL_1013;
        v503 = *(System_String_o **)(v133 + 32);
        updated = System_String__op_Equality(v503, (System_String_o *)StringLiteral_1403/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v499 = v499 + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v503, (System_String_o *)StringLiteral_1478/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            v499 = v499 + -50.0;
        }
LABEL_919:
        v518 = *(_DWORD *)(v133 + 24);
        if ( v112->fields.id == 305 )
        {
LABEL_920:
          if ( v518 < 4 )
            goto LABEL_921;
          if ( v518 == 4 )
          {
            if ( !*v103 )
              goto LABEL_1012;
            v763 = *(MapCamera_o **)(*v103 + 152);
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v133 + 64), 0LL);
            if ( !*v103 )
              goto LABEL_1012;
            v763 = *(MapCamera_o **)(*v103 + 152);
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v820.fields.hasValue = &v807;
              v766 = v498;
              v767 = v499;
              *(_QWORD *)&v820.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v768 = v500;
              v807 = (System_Nullable_Vector3__o)0LL;
LABEL_976:
              System_Nullable_Vector3____ctor(v820, *(UnityEngine_Vector3_o *)&v766, v502);
              if ( *(_DWORD *)(v133 + 24) <= 3u )
                goto LABEL_1013;
              v784 = System_Single__Parse(*(System_String_o **)(v133 + 56), 0LL);
              v813 = (System_Nullable_float__o)&size;
              size = 0LL;
              System_Nullable_float____ctor(
                v813,
                v784,
                (const MethodInfo_375AF28 *)Method_System_Nullable_float___ctor__);
              if ( !v763 )
                goto LABEL_1012;
              v825 = v807;
              v818 = size;
              v785 = sec;
              v786 = v763;
              goto LABEL_979;
            }
          }
          *(_QWORD *)&v821.fields.hasValue = &v807;
          v769 = v498;
          v770 = v499;
          *(_QWORD *)&v821.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v771 = v500;
          v807 = (System_Nullable_Vector3__o)0LL;
LABEL_981:
          System_Nullable_Vector3____ctor(v821, *(UnityEngine_Vector3_o *)&v769, v502);
          if ( *(_DWORD *)(v133 + 24) <= 3u )
            goto LABEL_1013;
          v787 = System_Single__Parse(*(System_String_o **)(v133 + 56), 0LL);
          v814 = (System_Nullable_float__o)&size;
          size = 0LL;
          System_Nullable_float____ctor(v814, v787, (const MethodInfo_375AF28 *)Method_System_Nullable_float___ctor__);
          v425 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(v425, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v763 )
            goto LABEL_1012;
          v824 = v807;
          v817 = size;
          v427 = sec;
          v426 = v763;
          goto LABEL_984;
        }
LABEL_632:
        if ( v518 < 4 )
        {
LABEL_921:
          if ( !*v103 )
            goto LABEL_1012;
          v520 = *(MapCamera_o **)(*v103 + 152);
          goto LABEL_923;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v133 + 56), 0LL);
        v519 = *v103;
        if ( !*v103 )
          goto LABEL_1012;
        v520 = *(MapCamera_o **)(v519 + 152);
        if ( (int)updated < 1 )
        {
LABEL_923:
          v195 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(v195, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v520 )
            goto LABEL_1012;
          v196 = v520;
          v197 = v498;
          v198 = v499;
          v199 = v500;
LABEL_942:
          v200 = sec;
LABEL_943:
          v201 = v333;
LABEL_944:
          MapCamera__StartAutoMove(v196, *(UnityEngine_Vector3_o *)&v197, v200, v201, v195, 0LL);
          return;
        }
        if ( !v520 )
          goto LABEL_1012;
        v521 = *(MapCamera_o **)(v519 + 152);
        v522 = v498;
        v523 = v499;
        v524 = v500;
        goto LABEL_953;
      case 301:
      case 306:
        updated = (__int64)v112->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v326 = *(_QWORD *)(updated + 24);
        v133 = updated;
        if ( (int)v326 <= 0 )
          goto LABEL_839;
        if ( (int)v326 > 2 )
        {
          v493 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v326 = *(_QWORD *)(v133 + 24);
          v327 = v493 * 0.001;
        }
        else
        {
          v327 = 0.5;
        }
        sec = v327;
        if ( (int)v326 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v133 + 40), 0LL);
          v326 = *(_QWORD *)(v133 + 24);
          v333 = updated;
        }
        else
        {
          v333 = 15;
        }
        if ( !(_DWORD)v326 )
          goto LABEL_1013;
        v504 = (QuestAfterAction_o *)*v103;
        updated = System_Int32__Parse(*(System_String_o **)(v133 + 32), 0LL);
        if ( !v504 )
          goto LABEL_1012;
        v506 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v504, 1, updated, this, v505);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v506, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v506 )
            goto LABEL_1012;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v506,
                               (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1012;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v507 = Position.fields.x;
          v508 = Position.fields.y;
          v509 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BC2713 )
          {
            sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
            byte_4BC2713 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v510 = **(_QWORD **)(updated + 184);
          if ( !v510 )
            goto LABEL_1012;
          updated = *(_QWORD *)(v510 + 264);
          if ( !updated )
            goto LABEL_1012;
          v832.fields.x = v507;
          v832.fields.y = v508;
          v832.fields.z = v509;
          *(UnityEngine_Vector3_o *)&v511 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v832,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v511 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v506,
                                              0LL);
        }
        v724 = v511;
        v725 = v512;
        v726 = v513;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_931;
        if ( !*(_DWORD *)(v133 + 24) )
          goto LABEL_1013;
        v727 = *(System_String_o **)(v133 + 32);
        updated = System_String__op_Equality(v727, (System_String_o *)StringLiteral_1403/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v725 = v725 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v727, (System_String_o *)StringLiteral_1479/*"30102"*/, 0LL);
          if ( (updated & 1) != 0 )
            v725 = v725 + 45.0;
        }
LABEL_931:
        v764 = *(_DWORD *)(v133 + 24);
        if ( v112->fields.id == 306 )
        {
          if ( v764 >= 4 )
          {
            if ( v764 == 4 )
            {
              if ( !*v103 )
                goto LABEL_1012;
              v763 = *(MapCamera_o **)(*v103 + 152);
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v133 + 64), 0LL);
              if ( !*v103 )
                goto LABEL_1012;
              v763 = *(MapCamera_o **)(*v103 + 152);
              if ( (int)updated >= 1 )
              {
                v807 = (System_Nullable_Vector3__o)0LL;
                *(_QWORD *)&v820.fields.hasValue = &v807;
                v766 = v724;
                *(_QWORD *)&v820.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v767 = v725;
                v768 = v726;
                goto LABEL_976;
              }
            }
            v807 = (System_Nullable_Vector3__o)0LL;
            *(_QWORD *)&v821.fields.hasValue = &v807;
            v769 = v724;
            *(_QWORD *)&v821.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v770 = v725;
            v771 = v726;
            goto LABEL_981;
          }
          goto LABEL_938;
        }
        if ( v764 < 4 )
        {
LABEL_938:
          if ( !*v103 )
            goto LABEL_1012;
          v765 = *(MapCamera_o **)(*v103 + 152);
LABEL_940:
          v195 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(v195, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v765 )
            goto LABEL_1012;
          v196 = v765;
          v197 = v724;
          v198 = v725;
          v199 = v726;
          goto LABEL_942;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v133 + 56), 0LL);
        v772 = *v103;
        if ( !*v103 )
          goto LABEL_1012;
        v765 = *(MapCamera_o **)(v772 + 152);
        if ( (int)updated < 1 )
          goto LABEL_940;
        if ( !v765 )
          goto LABEL_1012;
        v521 = *(MapCamera_o **)(v772 + 152);
        v522 = v724;
        v523 = v725;
        v524 = v726;
LABEL_953:
        v773 = sec;
        goto LABEL_954;
      case 302:
      case 307:
        updated = (__int64)v112->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v328 = *(_QWORD *)(updated + 24);
        v133 = updated;
        if ( (int)v328 <= 0 )
          goto LABEL_839;
        if ( (int)v328 > 2 )
        {
          v494 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v328 = *(_QWORD *)(v133 + 24);
          v329 = v494 * 0.001;
        }
        else
        {
          v329 = 0.5;
        }
        sec = v329;
        if ( (int)v328 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v133 + 40), 0LL);
          v328 = *(_QWORD *)(v133 + 24);
          v333 = updated;
        }
        else
        {
          v333 = 15;
        }
        if ( !(_DWORD)v328 )
          goto LABEL_1013;
        v514 = (QuestAfterAction_o *)*v103;
        updated = System_Int32__Parse(*(System_String_o **)(v133 + 32), 0LL);
        if ( !v514 )
          goto LABEL_1012;
        v516 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v514, 2, updated, this, v515);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v516, 0LL, 0LL) )
          return;
        v833 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v516, 0LL);
        v498 = v833.fields.x;
        v499 = v833.fields.y;
        v500 = v833.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_631;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BC2713 )
        {
          sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
          byte_4BC2713 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v517 = **(_QWORD **)(updated + 184);
        if ( !v517 )
          goto LABEL_1012;
        updated = *(_QWORD *)(v517 + 264);
        if ( !updated )
          goto LABEL_1012;
        v834.fields.x = v498;
        v834.fields.y = v499;
        v834.fields.z = v500;
        v835 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v834, 0LL);
        v498 = v835.fields.x;
        v499 = v835.fields.y;
        v500 = v835.fields.z;
LABEL_631:
        v518 = *(_DWORD *)(v133 + 24);
        if ( v112->fields.id != 307 )
          goto LABEL_632;
        goto LABEL_920;
      case 303:
      case 308:
        updated = (__int64)v112->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v330 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_839;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BC4856 )
        {
          sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v96);
          byte_4BC4856 = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          goto LABEL_839;
        if ( *(_DWORD *)(v330 + 24) <= 2u )
          goto LABEL_1013;
        v331 = System_Single__Parse(*(System_String_o **)(v330 + 48), 0LL) * 0.001;
        v332 = v331 >= 0.0 ? v331 : 0.5;
        if ( *(_DWORD *)(v330 + 24) <= 3u )
          goto LABEL_1013;
        v333 = System_Int32__Parse(*(System_String_o **)(v330 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BC2713 )
        {
          sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
          byte_4BC2713 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v334 = **(_QWORD **)(updated + 184);
        if ( !v334 )
          goto LABEL_1012;
        if ( !*(_DWORD *)(v330 + 24) )
          goto LABEL_1013;
        v335 = *(ScrTerminalMap_o **)(v334 + 264);
        v336 = System_Single__Parse(*(System_String_o **)(v330 + 32), 0LL);
        if ( *(_DWORD *)(v330 + 24) <= 1u )
          goto LABEL_1013;
        v337 = v336;
        v338 = System_Single__Parse(*(System_String_o **)(v330 + 40), 0LL);
        if ( !v335 )
          goto LABEL_1012;
        v827 = ScrTerminalMap__LocalPosFromCoord(v335, v337, v338, 0.0, 0.0, 0LL);
        v340 = *(_DWORD *)(v330 + 24);
        v341 = v827.fields.x;
        v342 = v827.fields.y;
        v343 = v827.fields.z;
        if ( v112->fields.id == 308 )
        {
          if ( v340 >= 5 )
          {
            if ( v340 == 5 )
            {
              if ( !*v103 )
                goto LABEL_1012;
              v344 = *(MapCamera_o **)(*v103 + 152);
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v330 + 72), 0LL);
              if ( !*v103 )
                goto LABEL_1012;
              v344 = *(MapCamera_o **)(*v103 + 152);
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v822.fields.hasValue = &v807;
                v841.fields.x = v341;
                v841.fields.y = v342;
                *(_QWORD *)&v822.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v841.fields.z = v343;
                v807 = (System_Nullable_Vector3__o)0LL;
                System_Nullable_Vector3____ctor(v822, v841, v339);
                if ( *(_DWORD *)(v330 + 24) <= 4u )
                  goto LABEL_1013;
                v802 = System_Single__Parse(*(System_String_o **)(v330 + 64), 0LL);
                v815 = (System_Nullable_float__o)&size;
                size = 0LL;
                System_Nullable_float____ctor(
                  v815,
                  v802,
                  (const MethodInfo_375AF28 *)Method_System_Nullable_float___ctor__);
                if ( !v344 )
                  goto LABEL_1012;
                v825 = v807;
                v818 = size;
                v786 = v344;
                v785 = v332;
LABEL_979:
                MapCamera__StartAutoWork(v786, v785, v825, v818, v333, 0LL, 0LL);
                goto LABEL_839;
              }
            }
            *(_QWORD *)&v823.fields.hasValue = &v807;
            v842.fields.x = v341;
            v842.fields.y = v342;
            *(_QWORD *)&v823.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v842.fields.z = v343;
            v807 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v823, v842, v339);
            if ( *(_DWORD *)(v330 + 24) <= 4u )
              goto LABEL_1013;
            v803 = System_Single__Parse(*(System_String_o **)(v330 + 64), 0LL);
            v816 = (System_Nullable_float__o)&size;
            size = 0LL;
            System_Nullable_float____ctor(v816, v803, (const MethodInfo_375AF28 *)Method_System_Nullable_float___ctor__);
            v425 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            System_Action___ctor(v425, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v344 )
              goto LABEL_1012;
            v824 = v807;
            v817 = size;
            v426 = v344;
            v427 = v332;
LABEL_984:
            v428 = v333;
            goto LABEL_985;
          }
        }
        else if ( v340 >= 5 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v330 + 64), 0LL);
          v783 = *v103;
          if ( !*v103 )
            goto LABEL_1012;
          v762 = *(MapCamera_o **)(v783 + 152);
          if ( (int)updated >= 1 )
          {
            if ( !v762 )
              goto LABEL_1012;
            v521 = *(MapCamera_o **)(v783 + 152);
            v522 = v341;
            v523 = v342;
            v524 = v343;
            v773 = v332;
LABEL_954:
            MapCamera__StartAutoMove(v521, *(UnityEngine_Vector3_o *)&v522, v773, v333, 0LL, 0LL);
            goto LABEL_839;
          }
LABEL_915:
          v195 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(v195, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v762 )
            goto LABEL_1012;
          v196 = v762;
          v197 = v341;
          v198 = v342;
          v199 = v343;
          v200 = v332;
          goto LABEL_943;
        }
        if ( !*v103 )
          goto LABEL_1012;
        v762 = *(MapCamera_o **)(*v103 + 152);
        goto LABEL_915;
      case 304:
        updated = (__int64)v112->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v429 = *(_DWORD *)(updated + 24);
        v430 = updated;
        if ( v429 <= 1 )
          goto LABEL_839;
        v431 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v430 + 24) <= 1u )
          goto LABEL_1013;
        v432 = v431;
        v433 = System_Single__Parse(*(System_String_o **)(v430 + 40), 0LL);
        if ( !*v103 )
          goto LABEL_1012;
        v434 = *(MapCamera_o **)(*v103 + 152);
        v435 = v433 * 0.001;
        if ( v435 >= 0.0 )
          v436 = v435;
        else
          v436 = 0.5;
        if ( v429 < 3 )
        {
          v437 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v430 + 24) <= 2u )
            goto LABEL_1013;
          v437 = System_Int32__Parse(*(System_String_o **)(v430 + 48), 0LL);
        }
        v723 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
        System_Action___ctor(
          v723,
          (Il2CppObject *)v94,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0LL);
        if ( !v434 )
          goto LABEL_1012;
        MapCamera__StartAutoZoom(v434, v432, v436, v437, v723, 0LL);
        return;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v202 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              System_Object___ctor((Il2CppObject *)v202, 0LL);
              if ( !v202 )
                goto LABEL_1012;
              *(_QWORD *)(v202 + 24) = v94;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v202 + 24), v94, v203, v204, v205, v206, v207, v208);
              v209 = *(_QWORD *)(v202 + 24);
              if ( !v209 )
                goto LABEL_1012;
              v210 = *(QuestAfterAction_o **)(v209 + 24);
              updated = System_Int32__Parse(v112->fields.param, 0LL);
              if ( !v210 )
                goto LABEL_1012;
              v211 = QuestAfterAction__GetMapComponent_object_(
                       v210,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v202 + 16) = v211;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v202 + 16), (int64_t)v211, v212, v213, v214, v215, v216, v217);
              v218 = *(UnityEngine_Object_o **)(v202 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v218, 0LL, 0LL) )
              {
                v219 = *(ModelLineComponent_o **)(v202 + 16);
                v220 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
                System_Action___ctor(
                  v220,
                  (Il2CppObject *)v202,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v219 )
                  goto LABEL_1012;
                v222 = 2;
                goto LABEL_530;
              }
            }
            else
            {
              v656 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              System_Object___ctor((Il2CppObject *)v656, 0LL);
              if ( !v656 )
                goto LABEL_1012;
              *(_QWORD *)(v656 + 24) = v94;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v656 + 24), v94, v657, v658, v659, v660, v661, v662);
              v663 = *(_QWORD *)(v656 + 24);
              if ( !v663 )
                goto LABEL_1012;
              v664 = *(QuestAfterAction_o **)(v663 + 24);
              updated = System_Int32__Parse(v112->fields.param, 0LL);
              if ( !v664 )
                goto LABEL_1012;
              v665 = QuestAfterAction__GetMapComponent_object_(
                       v664,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v656 + 16) = v665;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v656 + 16), (int64_t)v665, v666, v667, v668, v669, v670, v671);
              v672 = *(UnityEngine_Object_o **)(v656 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v672, 0LL, 0LL) )
              {
                v673 = *(srcLineSprite_o **)(v656 + 16);
                v674 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
                System_Action___ctor(
                  v674,
                  (Il2CppObject *)v656,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v673 )
                  goto LABEL_1012;
                v675 = 2;
                goto LABEL_808;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v438 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              System_Object___ctor((Il2CppObject *)v438, 0LL);
              if ( !v438 )
                goto LABEL_1012;
              *(_QWORD *)(v438 + 24) = v94;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v438 + 24), v94, v439, v440, v441, v442, v443, v444);
              v445 = *(_QWORD *)(v438 + 24);
              if ( !v445 )
                goto LABEL_1012;
              v446 = *(QuestAfterAction_o **)(v445 + 24);
              updated = System_Int32__Parse(v112->fields.param, 0LL);
              if ( !v446 )
                goto LABEL_1012;
              v447 = QuestAfterAction__GetMapComponent_object_(
                       v446,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v438 + 16) = v447;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v438 + 16), (int64_t)v447, v448, v449, v450, v451, v452, v453);
              v454 = *(UnityEngine_Object_o **)(v438 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v454, 0LL, 0LL) )
              {
                v219 = *(ModelLineComponent_o **)(v438 + 16);
                v220 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
                System_Action___ctor(
                  v220,
                  (Il2CppObject *)v438,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v219 )
                  goto LABEL_1012;
                v222 = 3;
                goto LABEL_530;
              }
            }
            else
            {
              v676 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              System_Object___ctor((Il2CppObject *)v676, 0LL);
              if ( !v676 )
                goto LABEL_1012;
              *(_QWORD *)(v676 + 24) = v94;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v676 + 24), v94, v677, v678, v679, v680, v681, v682);
              v683 = *(_QWORD *)(v676 + 24);
              if ( !v683 )
                goto LABEL_1012;
              v684 = *(QuestAfterAction_o **)(v683 + 24);
              updated = System_Int32__Parse(v112->fields.param, 0LL);
              if ( !v684 )
                goto LABEL_1012;
              v685 = QuestAfterAction__GetMapComponent_object_(
                       v684,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v676 + 16) = v685;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v676 + 16), (int64_t)v685, v686, v687, v688, v689, v690, v691);
              v692 = *(UnityEngine_Object_o **)(v676 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v692, 0LL, 0LL) )
              {
                v673 = *(srcLineSprite_o **)(v676 + 16);
                v674 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
                System_Action___ctor(
                  v674,
                  (Il2CppObject *)v676,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v673 )
                  goto LABEL_1012;
                v675 = 3;
                goto LABEL_808;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v455 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              System_Object___ctor((Il2CppObject *)v455, 0LL);
              if ( !v455 )
                goto LABEL_1012;
              *(_QWORD *)(v455 + 24) = v94;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v455 + 24), v94, v456, v457, v458, v459, v460, v461);
              v462 = *(_QWORD *)(v455 + 24);
              if ( !v462 )
                goto LABEL_1012;
              v463 = *(QuestAfterAction_o **)(v462 + 24);
              updated = System_Int32__Parse(v112->fields.param, 0LL);
              if ( !v463 )
                goto LABEL_1012;
              v464 = QuestAfterAction__GetMapComponent_object_(
                       v463,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v455 + 16) = v464;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v455 + 16), (int64_t)v464, v465, v466, v467, v468, v469, v470);
              v471 = *(UnityEngine_Object_o **)(v455 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v471, 0LL, 0LL) )
              {
                v219 = *(ModelLineComponent_o **)(v455 + 16);
                v220 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
                System_Action___ctor(
                  v220,
                  (Il2CppObject *)v455,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v219 )
                  goto LABEL_1012;
                v222 = 4;
LABEL_530:
                ModelLineComponent__SetState(v219, v222, v220, v221);
              }
            }
            else
            {
              v693 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              System_Object___ctor((Il2CppObject *)v693, 0LL);
              if ( !v693 )
                goto LABEL_1012;
              *(_QWORD *)(v693 + 24) = v94;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v693 + 24), v94, v694, v695, v696, v697, v698, v699);
              v700 = *(_QWORD *)(v693 + 24);
              if ( !v700 )
                goto LABEL_1012;
              v701 = *(QuestAfterAction_o **)(v700 + 24);
              updated = System_Int32__Parse(v112->fields.param, 0LL);
              if ( !v701 )
                goto LABEL_1012;
              v702 = QuestAfterAction__GetMapComponent_object_(
                       v701,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v693 + 16) = v702;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v693 + 16), (int64_t)v702, v703, v704, v705, v706, v707, v708);
              v709 = *(UnityEngine_Object_o **)(v693 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v709, 0LL, 0LL) )
              {
                v673 = *(srcLineSprite_o **)(v693 + 16);
                v674 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
                System_Action___ctor(
                  v674,
                  (Il2CppObject *)v693,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v673 )
                  goto LABEL_1012;
                v675 = 4;
LABEL_808:
                srcLineSprite__SetState(v673, v675, v674, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v473 = (QuestAfterAction_o *)*v103;
            updated = System_Int32__Parse(v112->fields.param, 0LL);
            if ( !v473 )
              goto LABEL_1012;
            if ( IsMapModel )
            {
              v474 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v473,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v474, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v474 )
                goto LABEL_1012;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34847056((ModelLineComponent_o *)v474, 0, 0.0, v475);
              v476 = v474[3].klass;
              if ( !v476 )
                goto LABEL_1012;
            }
            else
            {
              v710 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v473,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v710, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v710 )
                goto LABEL_1012;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v710, 0, 0LL);
              v476 = v710[5].monitor;
              if ( !v476 )
                goto LABEL_1012;
            }
            goto LABEL_882;
          case 204:
            v477 = this->fields.IsMapModel;
            v478 = (QuestAfterAction_o *)*v103;
            updated = System_Int32__Parse(v112->fields.param, 0LL);
            if ( !v478 )
              goto LABEL_1012;
            if ( v477 )
            {
              v479 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v478,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v479, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v479 )
                goto LABEL_1012;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34847056((ModelLineComponent_o *)v479, 1, 0.0, v480);
              ModelLineComponent__SetQuestAfterActionColorAnim_34847532((ModelLineComponent_o *)v479, 0, 0.0, v481);
              v482 = v479[3].klass;
              if ( !v482 )
                goto LABEL_1012;
            }
            else
            {
              v711 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v478,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v711, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v711 )
                goto LABEL_1012;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v711, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v711, 0, 0LL);
              v482 = v711[5].monitor;
              if ( !v482 )
                goto LABEL_1012;
            }
            v712 = 2;
            goto LABEL_827;
          case 205:
            v483 = this->fields.IsMapModel;
            v484 = (QuestAfterAction_o *)*v103;
            updated = System_Int32__Parse(v112->fields.param, 0LL);
            if ( !v484 )
              goto LABEL_1012;
            if ( v483 )
            {
              v485 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v484,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v485, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v485 )
                goto LABEL_1012;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34847056((ModelLineComponent_o *)v485, 1, 0.0, v486);
              ModelLineComponent__SetQuestAfterActionColorAnim_34847532((ModelLineComponent_o *)v485, 1, 0.0, v487);
              v482 = v485[3].klass;
              if ( !v482 )
                goto LABEL_1012;
            }
            else
            {
              v713 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v484,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3031414 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v713, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v713 )
                goto LABEL_1012;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v713, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v713, 1, 0LL);
              v482 = v713[5].monitor;
              if ( !v482 )
                goto LABEL_1012;
            }
            v712 = 1;
LABEL_827:
            v482[4] = v712;
            goto LABEL_18;
          default:
            if ( id != 350 )
              return;
            updated = (__int64)v112->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v345 = updated;
            if ( *(int *)(updated + 24) <= 0 )
              goto LABEL_839;
            v346 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v346 < 1 )
              goto LABEL_839;
            v347 = v346;
            v348 = 0.5;
            if ( *(int *)(v345 + 24) > 1 )
            {
              v349 = System_Int32__Parse(*(System_String_o **)(v345 + 40), 0LL);
              if ( *(int *)(v345 + 24) >= 3 )
                v348 = System_Single__Parse(*(System_String_o **)(v345 + 48), 0LL) * 0.001;
            }
            else
            {
              v349 = 15;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BC2713 )
            {
              sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
              byte_4BC2713 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v759 = **(_QWORD **)(updated + 184);
            if ( !v759 )
              goto LABEL_1012;
            v760 = *(ScrTerminalMap_o **)(v759 + 264);
            v761 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
            System_Action___ctor(
              v761,
              (Il2CppObject *)v94,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
              0LL);
            if ( !v760 )
              goto LABEL_1012;
            ScrTerminalMap__RequestMapMove_35606560(v760, v347, v348, v349, v761, 0LL);
            return;
        }
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
          v128 = System_String__Concat_63040368((System_String_o *)StringLiteral_11023/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v112->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v129 = LocalizationManager__Get(v128, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v131 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(
            v131,
            (Il2CppObject *)v94,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
            0LL);
          if ( !Instance )
            goto LABEL_1012;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v127,
            v129,
            v131,
            210,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0LL,
            0.0,
            0LL);
          return;
        case 601:
          v285 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1C1AC7C(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1012;
          v292 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1013;
          v293 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1C1AB78((PartyOrganizationUtility_o *)(updated + 32), v293, v286, v287, v288, v289, v290, v291);
          updated = (__int64)v112->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split_63066600((System_String_o *)updated, v292, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v294 = *(_DWORD *)(updated + 24);
          if ( v294 <= 0 )
            goto LABEL_839;
          v295 = *(System_String_o **)(updated + 32);
          if ( v294 == 1 )
          {
            v296 = *(System_String_o **)(updated + 32);
            v295 = v285;
          }
          else
          {
            v296 = *(System_String_o **)(updated + 40);
          }
          v490 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v491 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(
            v491,
            (Il2CppObject *)v94,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
            0LL);
          if ( !v490 )
            goto LABEL_1012;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)v490,
            v295,
            v296,
            v491,
            210,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            0LL,
            0.0,
            0LL);
          return;
        case 602:
          v297 = (System_String_o *)StringLiteral_1/*""*/;
          v298 = System_String__Concat_63040368((System_String_o *)StringLiteral_11023/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v112->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v299 = LocalizationManager__Get(v298, 0LL);
          v300 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v301 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(
            v301,
            (Il2CppObject *)v94,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
            0LL);
          if ( !v300 )
            goto LABEL_1012;
          v302 = &dword_C33000;
          onClickOkSeKind = 0;
          goto LABEL_565;
        case 603:
          v303 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1C1AC7C(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1012;
          v310 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1013;
          v311 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1C1AB78((PartyOrganizationUtility_o *)(updated + 32), v311, v304, v305, v306, v307, v308, v309);
          updated = (__int64)v112->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split_63066600((System_String_o *)updated, v310, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v312 = *(_DWORD *)(updated + 24);
          if ( v312 <= 0 )
            goto LABEL_839;
          v297 = *(System_String_o **)(updated + 32);
          if ( v312 == 1 )
          {
            v299 = *(System_String_o **)(updated + 32);
            v297 = v303;
          }
          else
          {
            v299 = *(System_String_o **)(updated + 40);
          }
          v300 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v301 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(
            v301,
            (Il2CppObject *)v94,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( !v300 )
            goto LABEL_1012;
          v302 = &dword_C33000;
          onClickOkSeKind = 1;
LABEL_565:
          CommonUI__OpenNotificationDialog_31100088(
            (CommonUI_o *)v300,
            v297,
            v299,
            v301,
            40.0,
            *((float *)v302 + 137),
            210,
            0,
            0,
            0,
            1,
            28,
            onClickOkSeKind,
            0,
            1,
            0LL,
            0LL);
          return;
        case 604:
          v313 = (System_String_o *)StringLiteral_1/*""*/;
          v314 = System_String__Concat_63040368((System_String_o *)StringLiteral_11023/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v112->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v315 = LocalizationManager__Get(v314, 0LL);
          v316 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v317 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(
            v317,
            (Il2CppObject *)v94,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
            0LL);
          if ( !v316 )
            goto LABEL_1012;
          CommonUI__OpenNotificationDialog_31100088(
            (CommonUI_o *)v316,
            v313,
            v315,
            v317,
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
            0LL,
            0LL);
          return;
        default:
          if ( id == 550 )
            goto LABEL_18;
          if ( id != 560 )
            return;
          updated = (__int64)v112->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v225 = *(_QWORD *)(updated + 24);
          if ( v225 )
          {
            if ( !(_DWORD)v225 )
              goto LABEL_1013;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            v227 = *v103;
            if ( !*v103 )
              goto LABEL_1012;
            v228 = *(QuestAfterAction_TitleInfoControlCallback_o **)(v227 + 40);
            if ( (int)updated >= 1 )
            {
              if ( !v228 )
                goto LABEL_1012;
              QuestAfterAction_TitleInfoControlCallback__Start(
                *(QuestAfterAction_TitleInfoControlCallback_o **)(v227 + 40),
                0LL,
                v226);
              goto LABEL_18;
            }
          }
          else
          {
            if ( !*v103 )
              goto LABEL_1012;
            v228 = *(QuestAfterAction_TitleInfoControlCallback_o **)(*v103 + 40);
          }
          v488 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(v488, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v228 )
            goto LABEL_1012;
          QuestAfterAction_TitleInfoControlCallback__Start(v228, v488, v489);
          return;
      }
    }
    if ( id == 530 )
    {
      v229 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
      System_Object___ctor((Il2CppObject *)v229, 0LL);
      if ( !v229 )
        goto LABEL_1012;
      *(_QWORD *)(v229 + 24) = v94;
      v236 = v229 + 24;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v229 + 24), v94, v230, v231, v232, v233, v234, v235);
      v237 = System_Int32__Parse(v112->fields.param, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_1012;
      v238 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v237,
               (const MethodInfo_3248678 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      *(_QWORD *)(v229 + 16) = v238;
      v239 = (__int64 *)(v229 + 16);
      sub_1C1AB78((PartyOrganizationUtility_o *)(v229 + 16), (int64_t)v238, v240, v241, v242, v243, v244, v245);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)updated, v237, 0LL);
      if ( !updated )
        goto LABEL_1012;
      v247 = updated;
      if ( *(_DWORD *)(updated + 32) == 1 )
      {
        updated = *v239;
        if ( !*v239 )
          goto LABEL_1012;
        if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2LL, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BC460B )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v96);
            byte_4BC460B = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v237;
          v248 = *(_DWORD *)(v247 + 44);
          if ( !byte_4BC460F )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v96);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4BC460F = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v248;
          if ( !*(_QWORD *)v236 )
            goto LABEL_1012;
          v249 = *(_QWORD *)(*(_QWORD *)v236 + 24LL);
          if ( !v249 )
            goto LABEL_1012;
          *(_BYTE *)(v249 + 195) = 1;
          v250 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v250,
            (Il2CppObject *)v229,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Request_object = NetworkManager__getRequest_object_(
                             v250,
                             (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
          if ( !byte_4BC27F4 )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v96);
            byte_4BC27F4 = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          v252 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
          if ( !byte_4BC27F3 )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v96);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4BC27F3 = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          if ( !Request_object )
            goto LABEL_1012;
          BattleSetupScenarioRequest__beginRequest(
            (BattleSetupScenarioRequest_o *)Request_object,
            v252,
            *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
            0LL);
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v246);
      }
      return;
    }
    if ( id != 540 )
      return;
    updated = (__int64)v112->fields.param;
    if ( !updated )
      goto LABEL_1012;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
    if ( !updated )
      goto LABEL_1012;
    v151 = updated;
    if ( !*(_DWORD *)(updated + 24) )
LABEL_1013:
      sub_1C1AE38(updated, v96);
    v152 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
    if ( *(int *)(v151 + 24) < 2 )
    {
      v153 = -1;
    }
    else
    {
      v153 = System_Int32__Parse(*(System_String_o **)(v151 + 40), 0LL);
      if ( *(int *)(v151 + 24) >= 3 )
      {
        v154 = System_Int32__Parse(*(System_String_o **)(v151 + 48), 0LL);
LABEL_261:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BC28F4 )
        {
          sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v96);
          byte_4BC28F4 = 1;
        }
        v280 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v280 = TerminalPramsManager_TypeInfo;
        }
        v280->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BC2713 )
        {
          sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
          byte_4BC2713 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v281 = **(_QWORD **)(updated + 184);
        if ( !v281 )
          goto LABEL_1012;
        updated = *(_QWORD *)(v281 + 264);
        if ( !updated )
          goto LABEL_1012;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v152, v153, v154, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BC28F4 )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v282);
            byte_4BC28F4 = 1;
          }
          v284 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v284 = TerminalPramsManager_TypeInfo;
          }
          v284->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_18;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        updated = *v103;
        if ( !*v103 )
          goto LABEL_1012;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v283);
        return;
      }
    }
    v154 = -1;
    goto LABEL_261;
  }
  if ( id <= 801 )
  {
    if ( id <= 701 )
    {
      if ( id != 700 )
      {
        if ( id != 701 )
          return;
        if ( !System_String__op_Equality(v112->fields.param, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL) )
          goto LABEL_18;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BC4859 )
        {
          sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v223);
          byte_4BC4859 = 1;
        }
        v224 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v224 = TerminalPramsManager_TypeInfo;
        }
        v224->static_fields->_IsTransOrdealCall_k__BackingField = 1;
        goto LABEL_471;
      }
      updated = (__int64)v112->fields.param;
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_1012;
      v277 = updated;
      if ( *(_DWORD *)(updated + 24) )
      {
        v278 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(int *)(v277 + 24) >= 2 )
          v279 = System_Int32__Parse(*(System_String_o **)(v277 + 40), 0LL) + 1;
        else
          v279 = 0;
        v412 = (SceneJumpInfo_o *)sub_1C1AE20(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39871980(v412, (System_String_o *)StringLiteral_1/*""*/, v278, v279, 0LL);
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1012;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v412, 0LL);
        goto LABEL_839;
      }
    }
    else
    {
      if ( id != 702 )
      {
        if ( id != 800 )
        {
          if ( id == 801 )
          {
            param = v112->fields.param;
            v136 = Method_QuestAfterAction_StateMain_UpdateAnim__;
            if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
              v136 = (_QWORD *)sub_1C1ABEC(Method_QuestAfterAction_StateMain_UpdateAnim__);
            v137 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v136, v136[4]);
            OverwriteAssetSoundName__PlaySe(v137, param, 0, 0LL);
            goto LABEL_18;
          }
          return;
        }
        v269 = *v103;
        if ( !*v103 )
          goto LABEL_1012;
        updated = *(_QWORD *)(v269 + 88);
        if ( !updated )
          goto LABEL_1012;
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               (System_Collections_Generic_Dictionary_int__object__o *)updated,
               *(_DWORD *)(v269 + 64),
               &value,
               (const MethodInfo_32A3A88 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
        {
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
          if ( !updated )
            goto LABEL_1012;
          AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BC2713 )
          {
            sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
            byte_4BC2713 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v270 = **(_QWORD **)(updated + 184);
          if ( !v270 )
            goto LABEL_1012;
          if ( !*(_QWORD *)(v270 + 464) )
            goto LABEL_245;
          if ( !*(_DWORD *)(updated + 224) )
            j_il2cpp_runtime_class_init_0(updated);
          if ( !byte_4BC2713 )
          {
            sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
            byte_4BC2713 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v271 = **(_QWORD **)(updated + 184);
          if ( !v271 )
            goto LABEL_1012;
          v272 = *(_QWORD *)(v271 + 464);
          if ( !v272 )
            goto LABEL_1012;
          updated = *(unsigned int *)(v272 + 48);
          if ( !(_DWORD)updated )
          {
LABEL_245:
            if ( !value )
              goto LABEL_1012;
            updated = LODWORD(value[1].klass);
          }
          if ( (int)updated < 1 )
          {
            if ( !value )
              goto LABEL_1012;
            v655 = (System_String_o *)value[1].monitor;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice(v655, 0, 0LL);
          }
          else
          {
            updated = (__int64)ServantVoiceEntity__getVoiceAssetName_41071744(updated, 0LL);
            if ( !value )
              goto LABEL_1012;
            v273 = (System_String_o *)updated;
            v274 = (System_String_o *)value[1].monitor;
            v275 = SeManager_TypeInfo;
            if ( !SeManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              v275 = SeManager_TypeInfo;
            }
            DEFAULT_VOLUME = v275->static_fields->DEFAULT_VOLUME;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice_39911060(v273, v274, DEFAULT_VOLUME, 0LL, 0, 0LL);
          }
        }
LABEL_839:
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        return;
      }
      updated = (__int64)v112->fields.param;
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)System_String__Split_63065460(
                           (System_String_o *)updated,
                           (System_String_o *)StringLiteral_866/*","*/,
                           0,
                           0LL);
      if ( !updated )
        goto LABEL_1012;
      v266 = *(_QWORD *)(updated + 24);
      v267 = updated;
      if ( !v266 )
        goto LABEL_456;
      if ( (_DWORD)v266 )
      {
        if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL) > 0 )
          goto LABEL_18;
        if ( *(int *)(v267 + 24) >= 2 )
        {
          v268 = System_Int32__Parse(*(System_String_o **)(v267 + 40), 0LL);
LABEL_457:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__SetAutoResumeForFolder(v268, 0LL);
          if ( !byte_4BC47E6 )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v413);
            byte_4BC47E6 = 1;
          }
          v414 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v414 = TerminalPramsManager_TypeInfo;
          }
          if ( v414->static_fields->_DispState_k__BackingField == 3 )
          {
            if ( !v414->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v414);
            if ( !byte_4BC485A )
            {
              sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v413);
              byte_4BC485A = 1;
            }
            v415 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v415 = TerminalPramsManager_TypeInfo;
            }
            v415->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
          }
LABEL_471:
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !updated )
            goto LABEL_1012;
          AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0LL, 0, 0LL);
          goto LABEL_839;
        }
LABEL_456:
        v268 = 0;
        goto LABEL_457;
      }
    }
    goto LABEL_1013;
  }
  switch ( id )
  {
    case 850:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__stopBgm(0LL);
      if ( !*v103 )
        goto LABEL_1012;
      *(_BYTE *)(*v103 + 193) = 1;
      goto LABEL_18;
    case 851:
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BC2713 )
      {
        sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v96);
        byte_4BC2713 = 1;
      }
      v253 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v253 = TerminalSceneComponent_TypeInfo;
      }
      v254 = v253->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v112, (const MethodInfo *)v96);
      if ( !v254 )
        goto LABEL_1012;
      TerminalSceneComponent__playBgm(v254, (System_String_o *)updated, 0LL);
      if ( !*v103 )
        goto LABEL_1012;
      *(_BYTE *)(*v103 + 193) = 0;
      goto LABEL_18;
    case 900:
      v117 = (float)System_Int32__Parse(v112->fields.param, 0LL) / 1000.0;
      if ( v117 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v117;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalSceneComponent_c *screenCollider; // x0
  __int64 v11; // x1
  struct QuestAfterAction_o *v12; // x8
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4BC482F & 1) == 0 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, that);
    byte_4BC482F = 1;
  }
  this->fields.that = that;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)that, (int64_t)method, v3, v4, v5, v6, v7);
  v12 = this->fields.that;
  if ( !v12 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v12->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v11);
    byte_4BC2713 = 1;
  }
  screenCollider = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    screenCollider = TerminalSceneComponent_TypeInfo;
  }
  mInstance = screenCollider->static_fields->mInstance;
  if ( !mInstance || (screenCollider = (TerminalSceneComponent_c *)mInstance->fields.mTerminalMap) == 0LL )
LABEL_14:
    sub_1C1AE30(screenCollider, v11);
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
    sub_1C1AE30(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C1AE30(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4BC482E & 1) == 0 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
    byte_4BC482E = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
    byte_4BC2713 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1C1AE30(v2, method);
  return mTerminalMap->fields.subRootGimmickP;
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

  if ( (byte_4BC4831 & 1) == 0 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_1C1ABD4(&StringLiteral_16979/*"afterActionBk"*/, v5);
    byte_4BC4831 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16979/*"afterActionBk"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_4BC2713 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
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
    sub_1C1AE30(mInstance, deleteKey);
  }
  QuestAfterAction__OnEnd((QuestAfterAction_o *)mInstance, (const MethodInfo *)deleteKey);
}


void __fastcall QuestAfterAction_StateMain__set_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C1AE30(this, value);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC4833 & 1) == 0 )
  {
    sub_1C1ABD4(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_4BC4833 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall QuestAfterAction_StateMain___c___ctor(QuestAfterAction_StateMain___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_22(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_26(
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
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__16_27; // x21
  Il2CppObject *v12; // x22
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BC4834 & 1) == 0 )
  {
    sub_1C1ABD4(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&ScriptManager_TypeInfo, v2);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, v4);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c_TypeInfo, v5);
    byte_4BC4834 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC460A )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
    byte_4BC460A = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BC27F4 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BC27F3 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BC27F3 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v9 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v6->static_fields->_PhaseCnt_k__BackingField;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v9 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_27 = v9->static_fields->__9__16_27;
  if ( !_9__16_27 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1C1AE20(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v12, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_27,
      (int64_t)_9__16_27,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__16_27,
    0,
    0LL,
    -1,
    0,
    0,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_27(
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
  NetworkManager_ResultCallbackFunc_o *_9__16_28; // x19
  Il2CppObject *v11; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v21; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v25; // x1

  if ( (byte_4BC4835 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v3);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1C1ABD4(&ScriptManager_TypeInfo, v5);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__, v7);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_4BC4835 = 1;
  }
  v9 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v9 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_28 = v9->static_fields->__9__16_28;
  if ( !_9__16_28 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v11,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_28,
      (int64_t)_9__16_28,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v19);
    byte_4BC27F4 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v21->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BC27F3 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v19);
    v21 = TerminalPramsManager_TypeInfo;
    byte_4BC27F3 = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v21->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_object )
    sub_1C1AE30(SelectRouteArray, v25);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0LL);
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_28(
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
  __int64 v11; // x1
  Il2CppObject *v12; // x19
  System_Object_array *v13; // x19
  __int64 v14; // x1
  TerminalPramsManager_c *v15; // x0
  Il2CppObject *Instance; // x0
  __int64 v17; // x1

  if ( (byte_4BC4836 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_1C1ABD4(&JsonManager_TypeInfo, v4);
    sub_1C1ABD4(&ScriptManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v7);
    sub_1C1ABD4(&StringLiteral_16979/*"afterActionBk"*/, v8);
    sub_1C1ABD4(&StringLiteral_16075/*"["*/, v9);
    sub_1C1ABD4(&StringLiteral_16334/*"]"*/, v10);
    sub_1C1ABD4(&StringLiteral_13867/*"TerminalTransitionInfoMissionId"*/, v11);
    byte_4BC4836 = 1;
  }
  v12 = (Il2CppObject *)System_String__Concat_63051628(
                          (System_String_o *)StringLiteral_16075/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16334/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v13 = JsonManager__DeserializeArray_object_(
          v12,
          (const MethodInfo_3006E90 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16979/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13867/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v13, 1, 0LL);
  if ( !byte_4BC28F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v14);
    byte_4BC28F4 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v17);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
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
    sub_1C1AE30(0LL, method);
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
    sub_1C1AE30(0LL, method);
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
    sub_1C1AE30(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__23(
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
    sub_1C1AE30(_4__this, method);
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, struct QuestAfterAction_o *, Il2CppMethodPointer))_4__this->klass->vtable._13_UpdateAnim.method)(
    _4__this,
    this->fields.that,
    _4__this->klass->vtable._14_EndAnim.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__25(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ScrTerminalMap_o *_4__this; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v8; // x8
  UnityEngine_GameObject_c *v9; // x8
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  int32_t QuestId_k__BackingField; // w21
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  bool HasFlag; // w0
  __int64 v16; // x1
  TerminalPramsManager_c *v17; // x8
  TerminalPramsManager_c *v18; // x0
  __int64 v19; // x1
  int32_t SpotId; // w21
  UnityEngine_GameObject_c *v21; // x8
  bool Effect; // w21
  TerminalPramsManager_c *v23; // x0
  TerminalPramsManager_c *v24; // x0
  int32_t WarId_k__BackingField; // w19
  UnityEngine_GameObject_c *v26; // x8
  ScrTerminalListTop_o *v27; // x19
  int32_t v28; // w21

  if ( (byte_4BC4837 & 1) == 0 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_16979/*"afterActionBk"*/, v4);
    sub_1C1ABD4(&StringLiteral_13867/*"TerminalTransitionInfoMissionId"*/, v5);
    byte_4BC4837 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
    byte_4BC2713 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = _4__this->fields.subRootGimmickP->klass;
  if ( !klass )
    goto LABEL_97;
  _4__this = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
  if ( !_4__this )
    goto LABEL_97;
  if ( !ScrTerminalMap__IsAllMaskActive(_4__this, 0LL) )
    goto LABEL_21;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
    byte_4BC2713 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = _4__this->fields.subRootGimmickP->klass;
  if ( !v8 || (_4__this = *(ScrTerminalMap_o **)&v8->_2.thread_static_fields_offset) == 0LL )
LABEL_97:
    sub_1C1AE30(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0LL);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
    byte_4BC2713 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v9 = _4__this->fields.subRootGimmickP->klass;
  if ( !v9 )
    goto LABEL_97;
  _4__this = *(ScrTerminalMap_o **)&v9->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_97;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)_4__this, 0, 0LL, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v10);
    byte_4BC27F4 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v11->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BC485B )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4BC485B = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4BC27F4 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v11->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v13);
    byte_4BC27F4 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v14->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0LL);
  v17 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC27F4 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v16);
      byte_4BC27F4 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v18->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_4BC485C )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v19);
      byte_4BC485C = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v17->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  if ( !v17->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v17);
  TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  TerminalPramsManager__Save_SaveData(0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16979/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13867/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
    byte_4BC2713 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v21 = _4__this->fields.subRootGimmickP->klass;
  if ( !v21 )
    goto LABEL_97;
  _4__this = *(ScrTerminalMap_o **)&v21->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_97;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)_4__this, 0LL);
  if ( !byte_4BC485D )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
    byte_4BC485D = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_IsPlayGetEffect_k__BackingField = Effect;
  _4__this = (ScrTerminalMap_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_97;
  ((void (__fastcall *)(ScrTerminalMap_o *, Il2CppRuntimeInterfaceOffsetPair *))_4__this->klass[1]._1.implementedInterfaces)(
    _4__this,
    _4__this->klass[1]._1.interfaceOffsets);
  if ( !byte_4BC460A )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
    byte_4BC460A = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v24->static_fields->_WarId_k__BackingField;
  if ( !byte_4BC4853 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4BC4853 = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
    byte_4BC2713 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v26 = _4__this->fields.subRootGimmickP->klass;
  if ( !v26 )
    goto LABEL_97;
  v27 = *(ScrTerminalListTop_o **)&v26->_2.static_fields_size;
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
    byte_4BC27F4 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  v28 = *((_DWORD *)&_4__this->fields.subRootGimmickP->fields + 1);
  if ( !byte_4BC27F3 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4BC27F3 = 1;
  }
  if ( !LODWORD(_4__this->fields.pfbBaseP) )
  {
    j_il2cpp_runtime_class_init_0(_4__this);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v27 )
    goto LABEL_97;
  ScrTerminalListTop__RequestBattleSecnario(v27, v28, LODWORD(_4__this->fields.subRootGimmickP[1].klass) + 1, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__29(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C1AE30(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__30(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C1AE30(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__31(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C1AE30(0LL, method);
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
  if ( !_4__this )
    sub_1C1AE30(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__33(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C1AE30(0LL, method);
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
    sub_1C1AE30(0LL, method);
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
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals1; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 0,
        SrcSpotBasePrefab__SetTouchType(spot, 0, 0LL),
        (CS___8__locals1 = this->fields.CS___8__locals1) == 0LL)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals1->fields.__4__this) == 0LL )
  {
    sub_1C1AE30(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppRuntimeInterfaceOffsetPair *))spot->klass[1]._1.implementedInterfaces)(
    spot,
    spot->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__13(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL )
    sub_1C1AE30(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__14(
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
    sub_1C1AE30(this, method);
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


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__15(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL )
    sub_1C1AE30(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__16(
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
    sub_1C1AE30(this, method);
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


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_12___UpdateAnim_b__17(
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
    sub_1C1AE30(this, method);
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


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_13___UpdateAnim_b__18(
        QuestAfterAction_StateMain___c__DisplayClass16_13_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UnityEngine_Component_o *v16; // x22
  Il2CppObject *v17; // x0
  UnityEngine_Color_o **v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v26; // x8
  UnityEngine_Color_o *v27; // x20
  float v28; // s0
  UITweener_o *v29; // x20
  EventDelegate_Callback_o *v30; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4BC4838 & 1) == 0 )
  {
    sub_1C1ABD4(&EventDelegate_Callback_TypeInfo, method);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v3);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v4);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__, v5);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v6);
    byte_4BC4838 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v7 = sub_1C1AE20(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)this, v10, v11, v12, v13, v14, v15);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_2FEFE24 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v16 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v17 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_2FEFAD8 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v7 + 16) = v17;
  v18 = (UnityEngine_Color_o **)(v7 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)v17, v19, v20, v21, v22, v23, v24);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( paramsStr->max_length <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                            paramsStr->m_Items[1],
                                            &color,
                                            0LL);
  if ( !*v18
    || ((*v18)[8] = *(UnityEngine_Color_o *)((char *)&v16[6].klass + 4), !*v18)
    || ((*v18)[9] = color, (v26 = this->fields.paramsStr) == 0LL) )
  {
LABEL_18:
    sub_1C1AE30(mapGimmick, v9);
  }
  if ( v26->max_length <= 2 )
LABEL_19:
    sub_1C1AE38(mapGimmick, v9);
  v27 = *v18;
  v28 = System_Single__Parse(v26->m_Items[2], 0LL);
  if ( !v27 )
    goto LABEL_18;
  v27[3].fields.b = v28;
  mapGimmick = (UnityEngine_Component_o *)*v18;
  if ( !*v18 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0LL);
  v29 = *(UITweener_o **)(v7 + 16);
  v30 = (EventDelegate_Callback_o *)sub_1C1AE20(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v30,
    (Il2CppObject *)v7,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__,
    0LL);
  if ( !v29 )
    goto LABEL_18;
  UITweener__SetOnFinished(v29, v30, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_14___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_14___UpdateAnim_b__19(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tween; // x20
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  __int64 v5; // x1
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_4BC4839 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC4839 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70794412(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1C1AE30(_4__this, v5);
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


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__20(
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
    sub_1C1AE30(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__21(
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
    sub_1C1AE30(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_16___UpdateAnim_b__24(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  QuestEntity_o *questEntity; // x0
  void *image; // x8
  ScrTerminalListTop_o *v12; // x20
  int32_t name_high; // w21
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals16; // x22
  int namespaze; // w24
  System_Action_o *_9__25; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  clsQuestCheck_o *v23; // x19
  QuestAfterAction_StateMain___c_c *v24; // x8
  System_Action_o *_9__16_26; // x20
  Il2CppObject *v26; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4BC483A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, result);
    sub_1C1ABD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v5);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v6);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, v7);
    sub_1C1ABD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__, v8);
    sub_1C1ABD4(&QuestAfterAction_StateMain___c_TypeInfo, v9);
    byte_4BC483A = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_35;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BC2713 )
    {
      sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, result);
      byte_4BC2713 = 1;
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
      v12 = (ScrTerminalListTop_o *)*((_QWORD *)image + 32);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BC27F4 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, result);
        byte_4BC27F4 = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_4BC27F3 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, result);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4BC27F3 = 1;
      }
      if ( !questEntity[1].fields.type )
      {
        j_il2cpp_runtime_class_init_0(questEntity);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      CS___8__locals16 = this->fields.CS___8__locals16;
      if ( CS___8__locals16 )
      {
        namespaze = (int)questEntity[1].klass->_1.namespaze;
        _9__25 = CS___8__locals16->fields.__9__25;
        if ( !_9__25 )
        {
          _9__25 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(
            _9__25,
            (Il2CppObject *)CS___8__locals16,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
            0LL);
          CS___8__locals16->fields.__9__25 = _9__25;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&CS___8__locals16->fields.__9__25,
            (int64_t)_9__25,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
        }
        if ( v12 )
        {
          ScrTerminalListTop__StartWindowMessage_35451088(v12, name_high, namespaze + 1, 2, _9__25, 1, 0LL);
          return;
        }
      }
    }
LABEL_35:
    sub_1C1AE30(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v23 = (clsQuestCheck_o *)questEntity;
  v24 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v24 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_26 = v24->static_fields->__9__16_26;
  if ( !_9__16_26 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__16_26 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v26, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_26,
      (int64_t)_9__16_26,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v23 )
    goto LABEL_35;
  clsQuestCheck__PlayQuestStartAction(v23, _9__16_26, 0LL);
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
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals2; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 2,
        SrcSpotBasePrefab__SetTouchType(spot, 1, 0LL),
        (CS___8__locals2 = this->fields.CS___8__locals2) == 0LL)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals2->fields.__4__this) == 0LL )
  {
    sub_1C1AE30(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppRuntimeInterfaceOffsetPair *))spot->klass[1]._1.implementedInterfaces)(
    spot,
    spot->klass[1]._1.interfaceOffsets);
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
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals3; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 1,
        SrcSpotBasePrefab__SetTouchType(spot, 1, 0LL),
        (CS___8__locals3 = this->fields.CS___8__locals3) == 0LL)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals3->fields.__4__this) == 0LL )
  {
    sub_1C1AE30(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppRuntimeInterfaceOffsetPair *))spot->klass[1]._1.implementedInterfaces)(
    spot,
    spot->klass[1]._1.interfaceOffsets);
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
    sub_1C1AE30(this, method);
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
    sub_1C1AE30(this, method);
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
    sub_1C1AE30(this, method);
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
    sub_1C1AE30(this, method);
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
    sub_1C1AE30(this, method);
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
    sub_1C1AE30(this, method);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *end; // x8
  PartyOrganizationUtility_o *p_end; // x19

  p_end = (PartyOrganizationUtility_o *)&this->fields.end;
  end = this->fields.end;
  if ( end )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))end->fields.m_target)(
      end->fields.original_method_info,
      *(_QWORD *)&end->fields.extra_arg);
  p_end->klass = 0LL;
  sub_1C1AB78(p_end, 0LL, v2, v3, v4, v5, v6, v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.start = startCallback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)startCallback, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall QuestAfterAction_TitleInfoControlCallback__Start(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *end; // x8
  struct System_Action_o **p_end; // x20
  const MethodInfo *v12; // x1
  struct System_Action_o *start; // x8

  p_end = &this->fields.end;
  end = this->fields.end;
  if ( end )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))end->fields.m_target)(
      end->fields.original_method_info,
      *(_QWORD *)&end->fields.extra_arg,
      method);
  this->fields.end = endCallback;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_end, (int64_t)endCallback, (int64_t)method, v3, v4, v5, v6, v7);
  start = this->fields.start;
  if ( start )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))start->fields.m_target)(
      start->fields.original_method_info,
      *(_QWORD *)&start->fields.extra_arg);
  else
    QuestAfterAction_TitleInfoControlCallback__End(this, v12);
}


void __fastcall QuestAfterAction_VoiceInfo___ctor(
        QuestAfterAction_VoiceInfo_o *this,
        int32_t sId,
        System_String_o *vName,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v6 = (PartyOrganizationUtility_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._normalFollowerInfo = (struct FollowerInfo_o *)vName;
  v6 = (PartyOrganizationUtility_o *)((char *)v6 + 24);
  *(_DWORD *)&v6[-1].fields._IsQuestStartMenuMode_k__BackingField = sId;
  sub_1C1AB78(v6, (int64_t)vName, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *v2; // x21
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x19
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v25; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  QuestAfterAction_Command_o *v30; // x0
  const MethodInfo *v31; // x1
  int64_t v32; // x20
  int id; // w8
  unsigned int v34; // w8
  int32_t v35; // w21
  int32_t CommandTargetId; // w2
  const MethodInfo *v37; // x3
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *v51; // [xsp+18h] [xbp-48h]

  v2 = this;
  v51 = this;
  if ( (byte_4BC483E & 1) == 0 )
  {
    sub_1C1ABD4(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, method);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo, v3);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)sub_1C1ABD4(
                                                                                    &System_Collections_IEnumerator_TypeInfo,
                                                                                    v4);
    byte_4BC483E = 1;
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
      sub_1C1AE30(this, method);
    klass = commandEnumerable->klass;
    v9 = *(unsigned __int16 *)(&commandEnumerable->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&commandEnumerable->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C6CBB4(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v12 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v51->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v12;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v51->fields.__7__wrap1, v12, v13, v14, v15, v16, v17, v18);
    v2 = v51;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_46:
    sub_1C1AE30(this, method);
  while ( 1 )
  {
    v20 = _7__wrap1->klass;
    v21 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_18;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_18:
      v23 = sub_1C6CBB4(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v23)(
            _7__wrap1,
            *(_QWORD *)(v23 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81____m__Finally1(v51, v24);
      v51->fields.__7__wrap1 = 0LL;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v51->fields.__7__wrap1, 0LL, v44, v45, v46, v47, v48, v49);
      return 0;
    }
    v25 = v51->fields.__7__wrap1;
    if ( !v25 )
      sub_1C1AE30(v51, v24);
    v26 = v25->klass;
    v27 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v28 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_26;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_26:
      v29 = sub_1C6CBB4(
              v51->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v30 = (QuestAfterAction_Command_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v29)(
                                          v25,
                                          *(_QWORD *)(v29 + 8));
    v32 = (int64_t)v30;
    if ( !v30 )
      sub_1C1AE30(0LL, v31);
    if ( !_4__this )
      sub_1C1AE30(v30, v31);
    id = v30->fields.id;
    if ( id <= 205 )
    {
      if ( (unsigned int)(id - 100) >= 0xF || ((0x7C1Fu >> (id - 100)) & 1) == 0 )
      {
        if ( (unsigned int)(id - 200) <= 5 )
        {
          v35 = 1;
          goto LABEL_44;
        }
        goto LABEL_41;
      }
      v35 = 0;
    }
    else
    {
      if ( id > 550 )
      {
        v34 = id - 1000;
        if ( v34 < 0xD )
        {
          v35 = dword_C345CC[v34];
          goto LABEL_44;
        }
LABEL_41:
        v35 = -1;
        goto LABEL_44;
      }
      if ( (unsigned int)(id - 400) >= 0xD )
      {
        if ( id == 550 )
        {
          v35 = 3;
          goto LABEL_44;
        }
        goto LABEL_41;
      }
      v35 = 2;
    }
LABEL_44:
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v30, v31);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    v35,
                                                                                    CommandTargetId,
                                                                                    v37);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v51->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_46;
  }
  v51->fields.__2__current = (struct QuestAfterAction_Command_o *)v32;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v51->fields.__2__current, v32, v38, v39, v40, v41, v42, v43);
  result = 1;
  v51->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *v10; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_4BC4840 & 1) == 0 )
  {
    sub_1C1ABD4(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo, method);
    byte_4BC4840 = 1;
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
    v10 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)sub_1C1AE20(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v10->fields.__4__this, (int64_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v10->fields.commandEnumerable = _3__commandEnumerable;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&v10->fields.commandEnumerable,
    (int64_t)_3__commandEnumerable,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
}


QuestAfterAction_Command_o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81____m__Finally1(this, method);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4BC483F & 1) == 0 )
  {
    sub_1C1ABD4(&System_IDisposable_TypeInfo, method);
    byte_4BC483F = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C6CBB4(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__85___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__85_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__85__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__85_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct QuestAfterAction_o *_4__this; // x8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( this->fields.__1__state < 2u )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C1AE30(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__85__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__85_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__85__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__85_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__85_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__85__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__85_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__85__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__85_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction___c__DisplayClass74_0___ctor(
        QuestAfterAction___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass74_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *svtVInfos; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4BC483B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_4BC483B = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_363E064 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1C1AE30(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_34866172((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, v4);
}


void __fastcall QuestAfterAction___c__DisplayClass78_0___ctor(
        QuestAfterAction___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass78_0___Play_b__0(
        QuestAfterAction___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC483C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4BC483C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass79_0___ctor(
        QuestAfterAction___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass79_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  char *_4__this; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_4BC483D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4BC483D = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)(_4__this + 176), 0LL, v2, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1C1AB78((PartyOrganizationUtility_o *)(_4__this + 72), 0LL, v10, v11, v12, v13, v14, v15),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1C1AE30(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, v16);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass79_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C1AE30(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, v2);
}