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

  if ( (byte_4BB1470 & 1) == 0 )
  {
    sub_1C13D24(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v4);
    sub_1C13D24(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v5);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v7);
    sub_1C13D24(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v8);
    byte_4BB1470 = 1;
  }
  v9 = (Il2CppObject *)sub_1C13F70(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v9;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (Il2CppObject *)sub_1C13F70(BlankEarthQuestAfterAction_TypeInfo);
  System_Object___ctor(v16, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v16;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int64_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v23,
    (const MethodInfo_32C1BD4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v23;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.commandTypeIds, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v30;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtVoices, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3869FF0 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_1C13CC8(p_endAct, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endAct, 0LL);
}


bool __fastcall QuestAfterAction__CheckChangeBlankEarth(QuestAfterAction_o *this, const MethodInfo *method)
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
  Il2CppObject *Instance; // x20
  __int64 v12; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t v14; // w22
  _QWORD *p_image; // x21
  Il2CppObject *v16; // x21
  int32_t v17; // w22
  TerminalPramsManager_c *v18; // x0
  int32_t v19; // w19
  __int64 v20; // x8
  bool result; // w0
  unsigned int *v22; // x19
  __int64 v23; // x23
  unsigned __int64 v24; // x24
  __int64 v25; // x25
  int i; // w26
  int64_t v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BB1456 & 1) == 0 )
  {
    sub_1C13D24(&QuestAfterAction_Command___TypeInfo, method);
    sub_1C13D24(&QuestAfterAction_Command_TypeInfo, v2);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v5);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_1265/*"0x{0:X}"*/, v9);
    byte_4BB1456 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1497 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BB1497 = 1;
  }
  v12 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v12 + 184) + 102LL) )
  {
    if ( !Instance )
      goto LABEL_74;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
      byte_4BAF44D = 1;
    }
    v12 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v14 = *(_DWORD *)(*(_QWORD *)(v12 + 184) + 20LL);
    if ( !byte_4BAF44C )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
      v12 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4BAF44C = 1;
    }
    if ( !*(_DWORD *)(v12 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_74;
    p_image = QuestPhaseDetailAddMaster__GetAfterAction(
                (QuestPhaseDetailAddMaster_o *)MasterData_object,
                v14,
                *(_DWORD *)(*(_QWORD *)(v12 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_57;
    v16 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
      byte_4BAF44D = 1;
    }
    v12 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v17 = *(_DWORD *)(*(_QWORD *)(v12 + 184) + 20LL);
    if ( !byte_4BAF44C )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
      v12 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4BAF44C = 1;
    }
    if ( !*(_DWORD *)(v12 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v16 )
      goto LABEL_74;
    p_image = QuestPhaseDetailMaster__GetAfterAction(
                (QuestPhaseDetailMaster_o *)v16,
                v17,
                *(_DWORD *)(*(_QWORD *)(v12 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_57;
    v12 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v12 + 224) )
    j_il2cpp_runtime_class_init_0(v12);
  if ( !byte_4BB149A )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BB149A = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  if ( !v18->static_fields->_IsQuestClear_k__BackingField )
    return 0;
  if ( !v18->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v18);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BAF44D = 1;
  }
  v12 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance
    || (v19 = *(_DWORD *)(*(_QWORD *)(v12 + 184) + 20LL),
        (v12 = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_74:
    sub_1C13F80(v12, v10);
  }
  v12 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
          &entity,
          v19,
          (const MethodInfo_3238670 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (v12 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_74;
  p_image = &entity[6].klass->_1.image;
  if ( !p_image )
    return 0;
LABEL_57:
  v20 = p_image[3];
  result = 0;
  if ( (int)v20 < 2 || (v20 & 1) != 0 )
    return result;
  v12 = sub_1C13DCC(QuestAfterAction_Command___TypeInfo, (unsigned int)v20 >> 1);
  if ( !v12 )
    goto LABEL_74;
  v22 = (unsigned int *)v12;
  if ( *(int *)(v12 + 24) < 1 )
    return 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = v12 + 32;
  for ( i = 1; ; i += 2 )
  {
    v27 = sub_1C13F70(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_73;
    v12 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0LL);
    if ( !v27 )
      goto LABEL_74;
    *(_DWORD *)(v27 + 16) = v12;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_73:
      sub_1C13F88(v12, v10);
    v34 = p_image[i + 4];
    *(_QWORD *)(v27 + 24) = v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v27 + 24), v34, v28, v29, v30, v31, v32, v33);
    if ( *(_DWORD *)(v27 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v27 + 24), (System_String_o *)StringLiteral_1265/*"0x{0:X}"*/, 0LL) )
    {
      break;
    }
    v12 = sub_1C13E60(v27, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
    if ( !v12 )
    {
      v41 = sub_1C13FA4();
      sub_1C13E4C(v41, 0LL);
    }
    if ( v24 >= v22[6] )
      goto LABEL_73;
    *(_QWORD *)(v25 + 8 * v24) = v27;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v25 + v23), v27, v35, v36, v37, v38, v39, v40);
    ++v24;
    v23 += 8LL;
    if ( (__int64)v24 >= (int)v22[6] )
      return 0;
  }
  return 1;
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
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  TerminalPramsManager_c *v35; // x0
  int32_t QuestId_k__BackingField; // w22
  System_String_array *afterActionVals; // x23
  __int64 v38; // x1
  Il2CppObject *Instance; // x22
  int64_t MasterData_object; // x0
  __int64 v41; // x8
  __int64 v42; // x8
  __int64 v43; // x8
  int32_t v44; // w24
  __int64 v45; // x8
  __int64 v46; // x8
  int32_t v47; // w25
  __int64 v48; // x8
  __int64 v49; // x8
  int32_t v50; // w24
  __int64 v51; // x8
  __int64 v52; // x8
  int32_t v53; // w19
  TerminalPramsManager_c *v54; // x0
  TerminalSceneComponent_c *v55; // x0
  TerminalPramsManager_c *v56; // x0
  int64_t v57; // x23
  int32_t v58; // w24
  int32_t v59; // w24
  System_String_o *v60; // x24
  bool v61; // w24
  bool v62; // w23
  Il2CppObject *v63; // x23
  WarEntity_o *QuestId; // x0
  __int64 v65; // x1
  WarEntity_o *v66; // x23
  TerminalPramsManager_c *v67; // x0
  int32_t id; // w19
  __int64 v69; // x1
  bool v70; // w23
  TerminalPramsManager_c *v71; // x0
  Il2CppObject *Master_object; // x23
  WarReleaseEntity_o *OpenEntity; // x24
  Il2CppObject *v74; // x23
  bool QuestEntity; // w0
  __int64 v76; // x1
  TerminalPramsManager_c *v77; // x0
  Il2CppObject *v78; // x23
  int32_t v79; // w24
  Il2CppObject *v80; // x22
  int32_t v81; // w23
  TerminalPramsManager_c *v82; // x0
  Il2CppObject *v83; // x22
  int32_t v84; // w24
  TerminalPramsManager_c *v85; // x0
  TerminalPramsManager_c *v86; // x0
  int32_t BeforeQuestStartWarId_k__BackingField; // w19
  TerminalSceneComponent_c *v88; // x0
  Il2CppObject *v89; // x21
  TerminalPramsManager_c *v90; // x0
  bool IsOverwriteCommandNone; // w0
  __int64 v92; // x8
  int64_t v93; // x0
  unsigned int **p_commandBuf; // x21
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int *commandBuf; // x8
  unsigned __int64 v102; // x22
  il2cpp_array_size_t v103; // w29
  int64_t v104; // x24
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  __int64 v111; // x8
  int64_t v112; // x1
  System_String_o **v113; // x25
  const MethodInfo *v114; // x2
  int v115; // w8
  int v116; // w8
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  int64_t v118; // x28
  __int64 v119; // x27
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  int v126; // w8
  unsigned int v127; // w8
  System_Collections_Generic_List_int__o *Item; // x26
  const MethodInfo *v129; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v131; // x9
  __int64 size; // x10
  QuestAfterAction_o *v133; // x0
  const MethodInfo *v134; // x2
  System_String_c *v135; // x8
  int64_t v136; // x25
  unsigned __int64 v137; // x26
  System_String_Fields v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  unsigned int *v141; // x25
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  unsigned int *v148; // x0
  TerminalPramsManager_c *v149; // x0
  Il2CppObject *v150; // x20
  TerminalPramsManager_c *v151; // x0
  BalanceConfig_c *v152; // x8
  int32_t WarId_k__BackingField; // w19
  int32_t klass; // w19
  TerminalPramsManager_c *v155; // x0
  TerminalPramsManager_c *v156; // x0
  BalanceConfig_c *v157; // x8
  int32_t v158; // w20
  TerminalPramsManager_c *v159; // x0
  TerminalPramsManager_c *v160; // x0
  __int64 v161; // x0
  int32_t v162; // [xsp+8h] [xbp-88h]
  int32_t svtId; // [xsp+Ch] [xbp-84h] BYREF
  Il2CppObject *v164; // [xsp+10h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v166; // [xsp+20h] [xbp-70h] BYREF
  QuestEntity_o *v167; // [xsp+28h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4BB1455 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_1C13D24(&bool_TypeInfo, v5);
    sub_1C13D24(&QuestAfterAction_Command___TypeInfo, v6);
    sub_1C13D24(&QuestAfterAction_Command_TypeInfo, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v13);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v14);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestMaster___, v15);
    sub_1C13D24(&Method_DataManager_GetMaster_ShopMaster___, v16);
    sub_1C13D24(&Method_DataManager_GetMaster_WarMaster___, v17);
    sub_1C13D24(&Method_DataManager_GetMaster_WarReleaseMaster___, v18);
    sub_1C13D24(&DataManager_TypeInfo, v19);
    sub_1C13D24(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_1C13D24(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v21);
    sub_1C13D24(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v22);
    sub_1C13D24(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v24);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v25);
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v26);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v27);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v29);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v30);
    sub_1C13D24(&QuestAfterAction_VoiceInfo_TypeInfo, v31);
    this = (QuestAfterAction_o *)sub_1C13D24(&StringLiteral_16965/*"advPrepare"*/, v32);
    byte_4BB1455 = 1;
  }
  v166 = 0LL;
  v167 = 0LL;
  v164 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_2F99C14 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v33);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v33);
      byte_4BAF44D = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v35 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v35->static_fields->_QuestId_k__BackingField;
    if ( !byte_4BAF44C )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v33);
      v35 = TerminalPramsManager_TypeInfo;
      byte_4BAF44C = 1;
    }
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = TerminalPramsManager_TypeInfo;
    }
    afterActionVals = QuestAfterAction__GetBeforeAction(
                        QuestId_k__BackingField,
                        v35->static_fields->_PhaseCnt_k__BackingField + 1,
                        v34);
    goto LABEL_222;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v38);
    byte_4BAF374 = 1;
  }
  MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v41 = **(_QWORD **)(MasterData_object + 184);
  if ( !v41 )
    goto LABEL_354;
  if ( !*(_QWORD *)(v41 + 464) )
    goto LABEL_80;
  if ( !*(_DWORD *)(MasterData_object + 224) )
    j_il2cpp_runtime_class_init_0(MasterData_object);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v38);
    byte_4BAF374 = 1;
  }
  MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v42 = **(_QWORD **)(MasterData_object + 184);
  if ( !v42 )
    goto LABEL_354;
  v43 = *(_QWORD *)(v42 + 464);
  if ( !v43 )
    goto LABEL_354;
  v44 = *(_DWORD *)(v43 + 20);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v38);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    byte_4BAF374 = 1;
  }
  if ( !*(_DWORD *)(MasterData_object + 224) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v45 = **(_QWORD **)(MasterData_object + 184);
  if ( !v45 )
    goto LABEL_354;
  v46 = *(_QWORD *)(v45 + 464);
  if ( !v46 )
    goto LABEL_354;
  v47 = *(_DWORD *)(v46 + 16);
  if ( v47 >= 1 )
  {
    if ( !*(_DWORD *)(MasterData_object + 224) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v38);
      byte_4BAF374 = 1;
    }
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    }
    v48 = **(_QWORD **)(MasterData_object + 184);
    if ( !v48 )
      goto LABEL_354;
    v49 = *(_QWORD *)(v48 + 464);
    if ( !v49 )
      goto LABEL_354;
    if ( !Instance )
      goto LABEL_354;
    afterActionVals = *(System_String_array **)(v49 + 32);
    MasterData_object = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_354;
    MasterData_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                   v47,
                                   (const MethodInfo_3238624 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_354;
    v50 = *(_DWORD *)(MasterData_object + 28);
    MasterData_object = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_354;
    goto LABEL_67;
  }
  if ( v44 >= 1 )
  {
    if ( !*(_DWORD *)(MasterData_object + 224) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v38);
      byte_4BAF374 = 1;
    }
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    }
    v51 = **(_QWORD **)(MasterData_object + 184);
    if ( !v51 )
      goto LABEL_354;
    v52 = *(_QWORD *)(v51 + 464);
    if ( !v52 )
      goto LABEL_354;
    afterActionVals = *(System_String_array **)(v52 + 32);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    MasterData_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_354;
    MasterData_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                   v44,
                                   (const MethodInfo_3238624 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_354;
    v50 = *(_DWORD *)(MasterData_object + 24);
    MasterData_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_354;
LABEL_67:
    MasterData_object = (int64_t)WarMaster__getByEventId((WarMaster_o *)MasterData_object, v50, 0LL);
    if ( !MasterData_object )
      goto LABEL_354;
    v53 = *(_DWORD *)(MasterData_object + 16);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1257 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
      byte_4BB1257 = 1;
    }
    v54 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v54 = TerminalPramsManager_TypeInfo;
    }
    v54->static_fields->_WarId_k__BackingField = v53;
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v38);
      byte_4BAF374 = 1;
    }
    v55 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v55 = TerminalSceneComponent_TypeInfo;
    }
    MasterData_object = (int64_t)v55->static_fields->mInstance;
    if ( !MasterData_object )
      goto LABEL_354;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
    if ( afterActionVals )
      goto LABEL_222;
  }
LABEL_80:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1497 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
    byte_4BB1497 = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  if ( !v56->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16965/*"advPrepare"*/, 0LL) )
  {
    MasterData_object = (int64_t)UnityEngine_PlayerPrefs__GetString_70680264(
                                   (System_String_o *)StringLiteral_16965/*"advPrepare"*/,
                                   0LL);
    if ( !MasterData_object )
      goto LABEL_354;
    MasterData_object = (int64_t)System_String__Split((System_String_o *)MasterData_object, 0x2Cu, 0, 0LL);
    if ( !MasterData_object )
      goto LABEL_354;
    v57 = MasterData_object;
    if ( !*(_DWORD *)(MasterData_object + 24) )
      goto LABEL_443;
    v58 = System_Int32__Parse(*(System_String_o **)(MasterData_object + 32), 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1251 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
      byte_4BB1251 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL) = v58;
    if ( *(_DWORD *)(v57 + 24) <= 1u )
      goto LABEL_443;
    v59 = System_Int32__Parse(*(System_String_o **)(v57 + 40), 0LL);
    if ( !byte_4BB1255 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
      byte_4BB1255 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) = v59;
    if ( *(_DWORD *)(v57 + 24) <= 2u )
      goto LABEL_443;
    v60 = *(System_String_o **)(v57 + 48);
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v61 = System_Boolean__Parse(v60, 0LL);
    if ( !byte_4BB1498 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
      byte_4BB1498 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 101LL) = v61;
    if ( *(_DWORD *)(v57 + 24) <= 3u )
      goto LABEL_443;
    v62 = System_Boolean__Parse(*(System_String_o **)(v57 + 56), 0LL);
    if ( !byte_4BB1499 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
      byte_4BB1499 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 102LL) = v62;
    if ( !byte_4BB149A )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      byte_4BB149A = 1;
    }
    if ( !*(_DWORD *)(MasterData_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 101LL) )
    {
      if ( !Instance )
        goto LABEL_354;
      v63 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BAF44D )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        byte_4BAF44D = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v63 )
        goto LABEL_354;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)v63,
                  *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL),
                  0LL);
      if ( QuestId )
      {
        v66 = QuestId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB149B )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v65);
          byte_4BB149B = 1;
        }
        v67 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v67 = TerminalPramsManager_TypeInfo;
        }
        v67->static_fields->_IsWarClear_k__BackingField = 1;
        id = v66->fields.id;
        if ( !byte_4BB1257 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v65);
          v67 = TerminalPramsManager_TypeInfo;
          byte_4BB1257 = 1;
        }
        if ( !v67->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v67);
          v67 = TerminalPramsManager_TypeInfo;
        }
        v67->static_fields->_WarId_k__BackingField = id;
        v70 = TerminalPramsManager__CheckIsOrdealCallWarClear(v66, 0LL);
        if ( !byte_4BB149C )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v69);
          byte_4BB149C = 1;
        }
        v71 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v71 = TerminalPramsManager_TypeInfo;
        }
        v71->static_fields->_IsOrdealCallWarClear_k__BackingField = v70;
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1250 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
    byte_4BB1250 = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_354;
  OpenEntity = WarReleaseMaster__GetOpenEntity(
                 (WarReleaseMaster_o *)Master_object,
                 *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 4LL),
                 0LL);
  if ( !byte_4BB149D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
    byte_4BB149D = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 91LL) )
  {
    if ( !*(_DWORD *)(MasterData_object + 224) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4BB116C )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
      byte_4BB116C = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 92LL) )
      goto LABEL_221;
  }
  if ( !Instance )
    goto LABEL_354;
  v74 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
    byte_4BAF44D = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !v74 )
    goto LABEL_354;
  QuestEntity = QuestMaster__TryGetQuestEntity(
                  (QuestMaster_o *)v74,
                  &entity,
                  *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL),
                  0LL);
  afterActionVals = 0LL;
  if ( !QuestEntity )
    goto LABEL_222;
  MasterData_object = (int64_t)entity;
  if ( !entity )
    goto LABEL_354;
  if ( QuestEntity__IsOpenByTime(entity, 0, 0LL) )
  {
LABEL_177:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1497 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v76);
      byte_4BB1497 = 1;
    }
    v77 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v77 = TerminalPramsManager_TypeInfo;
    }
    if ( v77->static_fields->_IsPhaseClear_k__BackingField )
    {
      v78 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BAF44D )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        byte_4BAF44D = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      v79 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL);
      if ( !byte_4BAF44C )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
        byte_4BAF44C = 1;
      }
      if ( !*(_DWORD *)(MasterData_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v78 )
        goto LABEL_354;
      afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                          (QuestPhaseDetailAddMaster_o *)v78,
                          v79,
                          *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_222;
      v80 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BAF44D )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        byte_4BAF44D = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      v81 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL);
      if ( !byte_4BAF44C )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
        byte_4BAF44C = 1;
      }
      if ( !*(_DWORD *)(MasterData_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v80 )
        goto LABEL_354;
      afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                          (QuestPhaseDetailMaster_o *)v80,
                          v81,
                          *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_222;
      v77 = TerminalPramsManager_TypeInfo;
    }
    if ( !v77->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v77);
    if ( !byte_4BB149A )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v76);
      byte_4BB149A = 1;
    }
    v82 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v82 = TerminalPramsManager_TypeInfo;
    }
    if ( v82->static_fields->_IsQuestClear_k__BackingField )
    {
      if ( !v82->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v82);
      MasterData_object = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
      afterActionVals = 0LL;
      if ( (MasterData_object & 1) == 0 )
      {
        if ( !entity )
          goto LABEL_354;
        afterActionVals = entity->fields.afterActionVals;
      }
      goto LABEL_222;
    }
    goto LABEL_221;
  }
  if ( !OpenEntity )
  {
LABEL_221:
    afterActionVals = 0LL;
    goto LABEL_222;
  }
  afterActionVals = 0LL;
  if ( WarReleaseEntity__IsOpen(OpenEntity, 0LL) )
    goto LABEL_177;
LABEL_222:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v83 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
    byte_4BAF44D = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  v84 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL);
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    byte_4BAF44C = 1;
  }
  if ( !*(_DWORD *)(MasterData_object + 224) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !v83 )
    goto LABEL_354;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v83,
         v84,
         *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) + 1,
         7,
         0LL)
    || (IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(afterActionVals, (const MethodInfo *)v38),
        !afterActionVals)
    || IsOverwriteCommandNone
    || (v92 = *(_QWORD *)&afterActionVals->max_length, (int)v92 < 2)
    || (v92 & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB149E )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
      byte_4BB149E = 1;
    }
    v85 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v85 = TerminalPramsManager_TypeInfo;
    }
    if ( v85->static_fields->_BeforeQuestStartWarId_k__BackingField >= 1 )
    {
      if ( !v85->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v85);
      if ( !byte_4BAF54B )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        byte_4BAF54B = 1;
      }
      v86 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v86 = TerminalPramsManager_TypeInfo;
      }
      v86->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4BB1253 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        v86 = TerminalPramsManager_TypeInfo;
        byte_4BB1253 = 1;
      }
      if ( !v86->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v86);
        v86 = TerminalPramsManager_TypeInfo;
      }
      v86->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4BB149E )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        v86 = TerminalPramsManager_TypeInfo;
        byte_4BB149E = 1;
      }
      if ( !v86->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v86);
        v86 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v86->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4BB1257 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        v86 = TerminalPramsManager_TypeInfo;
        byte_4BB1257 = 1;
      }
      if ( !v86->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v86);
        v86 = TerminalPramsManager_TypeInfo;
      }
      v86->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BAF374 )
      {
        sub_1C13D24(&TerminalSceneComponent_TypeInfo, v38);
        byte_4BAF374 = 1;
      }
      v88 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v88 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (int64_t)v88->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_354;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v89 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4BB1250 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        byte_4BB1250 = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v89 )
        goto LABEL_354;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v89,
             &v164,
             *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 4LL),
             (const MethodInfo_3238670 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (int64_t)v164;
        if ( !v164 )
          goto LABEL_354;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v164, 0LL);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB149F )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        byte_4BB149F = 1;
      }
      v90 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v90 = TerminalPramsManager_TypeInfo;
      }
      v90->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16965/*"advPrepare"*/, 0LL);
    return;
  }
  v93 = sub_1C13DCC(QuestAfterAction_Command___TypeInfo, (unsigned int)v92 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v93;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.commandBuf, v93, v95, v96, v97, v98, v99, v100);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_354;
  v102 = 0LL;
  v103 = 0;
  while ( (__int64)v102 < commandBuf[6] )
  {
    v104 = sub_1C13F70(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v104, 0LL);
    if ( v103 >= afterActionVals->max_length )
      goto LABEL_443;
    MasterData_object = System_Int32__Parse(afterActionVals->m_Items[v103], 0LL);
    if ( !v104 )
      goto LABEL_354;
    *(_DWORD *)(v104 + 16) = MasterData_object;
    v111 = (int)v103 | 1LL;
    if ( (unsigned int)v111 >= afterActionVals->max_length )
      goto LABEL_443;
    v112 = (int64_t)afterActionVals->m_Items[v111];
    *(_QWORD *)(v104 + 24) = v112;
    v113 = (System_String_o **)(v104 + 24);
    sub_1C13CC8((PartyOrganizationUtility_o *)(v104 + 24), v112, v105, v106, v107, v108, v109, v110);
    if ( !v4->fields.hasFadeCommand )
    {
      v115 = *(_DWORD *)(v104 + 16);
      if ( v115 == 520 || v115 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v103 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v104 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v104 + 16) == 350 )
    {
      MasterData_object = (int64_t)*v113;
      if ( !*v113 )
        goto LABEL_354;
      MasterData_object = (int64_t)System_String__Split((System_String_o *)MasterData_object, 0x2Cu, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_354;
      if ( *(int *)(MasterData_object + 24) >= 4 )
      {
        MasterData_object = System_Int32__Parse(*(System_String_o **)(MasterData_object + 56), 0LL);
        v4->fields.MapMoveBeforeFocusSpotId = MasterData_object;
      }
    }
    v116 = *(_DWORD *)(v104 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v116 != 700 )
    {
      if ( v116 == 800 )
      {
        MasterData_object = (int64_t)QuestAfterAction_Command__GetAvailableRandomVoice(
                                       (QuestAfterAction_Command_o *)v104,
                                       &svtId,
                                       v114);
        if ( MasterData_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v118 = MasterData_object;
          v162 = svtId;
          v119 = sub_1C13F70(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v119, 0LL);
          *(_DWORD *)(v119 + 16) = v162;
          *(_QWORD *)(v119 + 24) = v118;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v119 + 24), v118, v120, v121, v122, v123, v124, v125);
          if ( !svtVoices )
            goto LABEL_354;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v102,
            (Il2CppObject *)v119,
            (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v126 = *(_DWORD *)(v104 + 16);
    if ( v126 <= 205 )
    {
      if ( (unsigned int)(v126 - 100) < 0xF && ((0x7C1Fu >> (v126 - 100)) & 1) != 0 )
      {
        v38 = 0LL;
      }
      else
      {
        if ( (unsigned int)(v126 - 200) > 5 )
          goto LABEL_337;
        v38 = 1LL;
      }
    }
    else if ( v126 <= 550 )
    {
      if ( (unsigned int)(v126 - 400) < 0xD )
      {
        v38 = 2LL;
      }
      else
      {
        if ( v126 != 550 )
          goto LABEL_337;
        v38 = 3LL;
      }
    }
    else
    {
      v127 = v126 - 1000;
      if ( v127 >= 0xD || ((0x1C07u >> v127) & 1) == 0 )
        goto LABEL_337;
      v38 = 4LL;
    }
    MasterData_object = (int64_t)v4->fields.commandTypeIds;
    if ( !MasterData_object )
      goto LABEL_354;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                       v38,
                                                       (const MethodInfo_32C2508 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    MasterData_object = QuestAfterAction__ExtractCommandTargetId((QuestAfterAction_Command_o *)v104, v129);
    if ( !Item )
      goto LABEL_354;
    items = Item->fields._items;
    v131 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_354;
    size = Item->fields._size;
    v38 = (unsigned int)MasterData_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        MasterData_object,
        *(const MethodInfo_36101A8 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = MasterData_object;
    }
LABEL_337:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v104, v114);
    if ( *(_DWORD *)(v104 + 16) == 102 )
    {
      v133 = (QuestAfterAction_o *)System_Int32__Parse(*v113, 0LL);
      MasterData_object = (int64_t)QuestAfterAction__GetMapGimmickId(v133, (int32_t)v133, v134);
      if ( !MasterData_object )
        goto LABEL_354;
      v135 = *(System_String_c **)(MasterData_object + 24);
      v136 = MasterData_object;
      if ( (int)v135 >= 1 )
      {
        v137 = 0LL;
        while ( v137 < (unsigned int)v135 )
        {
          MasterData_object = (int64_t)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_354;
          v38 = *(unsigned int *)(v136 + 32 + 4 * v137);
          v138 = *(System_String_Fields *)(MasterData_object + 16);
          v139 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(MasterData_object + 28);
          if ( !*(_QWORD *)&v138 )
            goto LABEL_354;
          v140 = *(int *)(MasterData_object + 24);
          if ( (unsigned int)v140 >= *(_DWORD *)(*(_QWORD *)&v138 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v38,
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
          }
          else
          {
            *(_DWORD *)(MasterData_object + 24) = v140 + 1;
            *(_DWORD *)(*(_QWORD *)&v138 + 4 * v140 + 32) = v38;
          }
          LODWORD(v135) = *(_DWORD *)(v136 + 24);
          if ( (__int64)++v137 >= (int)v135 )
            goto LABEL_350;
        }
LABEL_443:
        sub_1C13F88(MasterData_object, v38);
      }
    }
LABEL_350:
    v141 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_354;
    MasterData_object = sub_1C13E60(v104, *(_QWORD *)(*(_QWORD *)v141 + 64LL));
    if ( !MasterData_object )
    {
      v161 = sub_1C13FA4();
      sub_1C13E4C(v161, 0LL);
    }
    if ( v102 >= v141[6] )
      goto LABEL_443;
    v148 = &v141[2 * v102];
    *((_QWORD *)v148 + 4) = v104;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v148 + 8), v104, v142, v143, v144, v145, v146, v147);
    commandBuf = (int *)*p_commandBuf;
    v103 += 2;
    ++v102;
    if ( !*p_commandBuf )
      goto LABEL_354;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1497 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
    byte_4BB1497 = 1;
  }
  v149 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v149 = TerminalPramsManager_TypeInfo;
  }
  if ( v149->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v150 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
      byte_4BAF44D = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( !v150 )
      goto LABEL_354;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v150,
           &v167,
           *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL),
           0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB1250 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        byte_4BB1250 = 1;
      }
      v151 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v151 = TerminalPramsManager_TypeInfo;
      }
      v152 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v151->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v152 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v152->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        MasterData_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v167 && MasterData_object )
        {
          MasterData_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                &v166,
                                v167->fields.spotId,
                                (const MethodInfo_3238670 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( (MasterData_object & 1) == 0 )
            goto LABEL_394;
          if ( v166 )
          {
            klass = (int32_t)v166[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BB14A0 )
            {
              sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
              byte_4BB14A0 = 1;
            }
            v155 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v155 = TerminalPramsManager_TypeInfo;
            }
            v155->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = klass;
            goto LABEL_394;
          }
        }
LABEL_354:
        sub_1C13F80(MasterData_object, v38);
      }
    }
  }
LABEL_394:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF54B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
    byte_4BAF54B = 1;
  }
  v156 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v156 = TerminalPramsManager_TypeInfo;
  }
  v156->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4BB1253 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
    v156 = TerminalPramsManager_TypeInfo;
    byte_4BB1253 = 1;
  }
  if ( !v156->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v156);
    v156 = TerminalPramsManager_TypeInfo;
  }
  v156->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_4BB1250 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
    v156 = TerminalPramsManager_TypeInfo;
    byte_4BB1250 = 1;
  }
  if ( !v156->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v156);
    v156 = TerminalPramsManager_TypeInfo;
  }
  v157 = BalanceConfig_TypeInfo;
  v158 = v156->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v157 = BalanceConfig_TypeInfo;
  }
  v159 = TerminalPramsManager_TypeInfo;
  if ( v158 == v157->static_fields->OrdealCallWarId )
    goto LABEL_447;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB116C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
    byte_4BB116C = 1;
  }
  v159 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v159 = TerminalPramsManager_TypeInfo;
  }
  if ( v159->static_fields->_IsOrdealCallWarClear_k__BackingField )
  {
LABEL_447:
    if ( !v159->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v159);
    if ( !byte_4BB116D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
      byte_4BB116D = 1;
    }
    v159 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v159 = TerminalPramsManager_TypeInfo;
    }
    v159->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_4BB116C )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
      v159 = TerminalPramsManager_TypeInfo;
      byte_4BB116C = 1;
    }
    if ( !v159->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v159);
      v159 = TerminalPramsManager_TypeInfo;
    }
    if ( !v159->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      if ( !v159->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v159);
      if ( !byte_4BB1253 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
        byte_4BB1253 = 1;
      }
      v159 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v159 = TerminalPramsManager_TypeInfo;
      }
      v159->static_fields->_DispState_k__BackingField = 3;
    }
  }
  if ( !v159->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v159);
  if ( !byte_4BB1256 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v38);
    byte_4BB1256 = 1;
  }
  v160 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v160 = TerminalPramsManager_TypeInfo;
  }
  v160->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB1453 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_16965/*"advPrepare"*/, v1);
    byte_4BB1453 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16965/*"advPrepare"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8

  v2 = command;
  if ( (byte_4BB1457 & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1C13D24(&StringLiteral_866/*","*/, method);
    byte_4BB1457 = 1;
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
    sub_1C13F80(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1C13F88(command, method);
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

  if ( (byte_4BB1464 & 1) == 0 )
  {
    sub_1C13D24(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo, commandEnumerable);
    byte_4BB1464 = 1;
  }
  v5 = sub_1C13F70(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 56) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 56), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)commandEnumerable, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4BB1458 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_1C13D24(&QuestAfterAction_Command___TypeInfo, v3);
    sub_1C13D24(&QuestAfterAction_Command_TypeInfo, v4);
    byte_4BB1458 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v8 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v9 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v9 )
    {
      sub_1C65C5C(Method_System_Array_Empty_QuestAfterAction_Command___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C65C00(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C65C00(inited);
    return **(QuestAfterAction_Command_array ***)(v11 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1C13DCC(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1C13F80(IsNullOrEmpty, v6);
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
        v17 = sub_1C13F70(QuestAfterAction_Command_TypeInfo);
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
        sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)v24, v18, v19, v20, v21, v22, v23);
        IsNullOrEmpty = sub_1C13E60(v17, v12->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v32 = sub_1C13FA4();
          sub_1C13E4C(v32, 0LL);
        }
        if ( v14 >= v12->max_length )
LABEL_24:
          sub_1C13F88(IsNullOrEmpty, v6);
        *(_QWORD *)(v15 + 8 * v14) = v17;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v15 + v13), v17, v25, v26, v27, v28, v29, v30);
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

  if ( (byte_4BB146F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BB146F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v12);
    byte_4BAF44D = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4BAF44C = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v12);
    byte_4BAF44D = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1C13F80(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_3238624 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_string___) )
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

  if ( (byte_4BB146E & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BB146E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v12);
    byte_4BAF44D = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4BAF44C = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v12);
    byte_4BAF44D = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1C13F80(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_3238624 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_string___) )
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
        return dword_C30940[commandId - 1000];
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
        const MethodInfo_3021250 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    if ( !method->rgctx_data )
      sub_1C65C5C();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !MapGameObject )
    sub_1C13F80(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_2FDF9FC *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_4BB146A & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    this = (QuestAfterAction_o *)sub_1C13D24(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_4BB146A = 1;
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
        sub_1C13F80(this, *(_QWORD *)&comType);
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

  if ( (byte_4BB1459 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_1C13D24(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys_MapGimmickEntity___, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BB1459 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  v13 = Instance;
  v14 = sub_1C13E58(Instance->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys_MapGimmickEntity___
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
        sub_1C13F88(Instance, name_low);
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
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
    sub_1C13F80(Instance, name_low);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4BB1468 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4BB1468 = 1;
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

  if ( (byte_4BB1454 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_1C13D24(&Method_CStateManager_QuestAfterAction__add__, v4);
    sub_1C13D24(&CStateManager_QuestAfterAction__TypeInfo, v5);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v8);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1C13D24(&QuestAfterAction_StateAdditional_TypeInfo, v13);
    sub_1C13D24(&QuestAfterAction_StateInstant_TypeInfo, v14);
    sub_1C13D24(&QuestAfterAction_StateMain_TypeInfo, v15);
    sub_1C13D24(&QuestAfterAction_StateNone_TypeInfo, v16);
    byte_4BB1454 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_T__o *)sub_1C13F70(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_31C327C *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v18;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v18, v19, v20, v21, v22, v23, v24);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v26 = (Il2CppObject *)sub_1C13F70(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v26,
      (const MethodInfo_31C3324 *)Method_CStateManager_QuestAfterAction__add__);
    v29 = (CStateManager_T__o *)*p_fsm;
    v30 = (Il2CppObject *)sub_1C13F70(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_21;
    CStateManager_object___add(
      v29,
      1,
      (IState_T__o *)v30,
      (const MethodInfo_31C3324 *)Method_CStateManager_QuestAfterAction__add__);
    v31 = (CStateManager_T__o *)*p_fsm;
    v32 = (Il2CppObject *)sub_1C13F70(QuestAfterAction_StateAdditional_TypeInfo);
    System_Object___ctor(v32, 0LL);
    if ( !v31 )
      goto LABEL_21;
    CStateManager_object___add(
      v31,
      2,
      (IState_T__o *)v32,
      (const MethodInfo_31C3324 *)Method_CStateManager_QuestAfterAction__add__);
    v33 = (CStateManager_T__o *)*p_fsm;
    v34 = (Il2CppObject *)sub_1C13F70(QuestAfterAction_StateInstant_TypeInfo);
    System_Object___ctor(v34, 0LL);
    if ( !v33 )
      goto LABEL_21;
    CStateManager_object___add(
      v33,
      3,
      (IState_T__o *)v34,
      (const MethodInfo_31C3324 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.commandBuf, 0LL, v35, v36, v37, v38, v39, v40);
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
                                                                                (const MethodInfo_32C279C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v42 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v42 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v41,
                                                                                  (const MethodInfo_32C2508 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v43 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v43;
    }
    else
    {
      v44 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v44,
        (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v42 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v42,
        v41,
        (Il2CppObject *)v44,
        (const MethodInfo_32C2594 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
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
                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1C13CC8(
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
    sub_1C13F80(commandTypeIds, v28);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.lastDispSpot, 0LL, v52, v53, v54, v55, v56, v57);
  v58 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v58,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v58;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_invalidMapGimmickIdList, (int64_t)v58, v60, v61, v62, v63, v64, v65);
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

  if ( (byte_4BB145C & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_4BB145C = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_32C279C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_32C2508 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1C13F80(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_1C13F88(this, *(_QWORD *)&spotId);
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
    sub_1C13F80(this, *(_QWORD *)&spotId);
  }
  return v8;
}


bool __fastcall QuestAfterAction__IsGimmickDispCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFD) == 401;
}


bool __fastcall QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4BB146D & 1) == 0 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BB146D = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BAF374 = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1C13F80(v2, method);
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


bool __fastcall QuestAfterAction__IsOtherObjDispCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 1011;
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
        sub_1C13F88(actionCommand, method);
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

  if ( (byte_4BB1468 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4BB1468 = 1;
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

  if ( (byte_4BB1460 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1C13D24(&DataManager_TypeInfo, v8);
    sub_1C13D24(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1C13D24(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_1C13D24(&EventMissionActionInfo_TypeInfo, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v18);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v19);
    byte_4BB1460 = 1;
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
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v21);
    byte_4BAF374 = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v22->fields.shopId,
                 (const MethodInfo_3238624 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v30 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v31 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v30[1].monitor,
                (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v31 || !EventEntity__IsEventPeriod((EventEntity_o *)v31, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ShopActionMaster___);
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
          (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v63 = v62;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v63,
                  (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v32 )
            break;
          current = v63.fields._current;
          if ( !v63.fields._current )
            sub_1C13F80(v32, v33);
          if ( LODWORD(v63.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BB14A1 )
            {
              sub_1C13D24(&TerminalPramsManager_TypeInfo, v33);
              byte_4BB14A1 = 1;
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
              sub_1C13F80(0LL, v36);
            klass = (int64_t)current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1C13CC8(
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
              sub_1C13F80(v45, v46);
            v47->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v63,
          (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v25 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1C13F70(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_43269212(v28, v27, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1C13F70(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v28, v49, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v25,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v50 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v22->fields.missionId,
            (const MethodInfo_3238624 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v50 )
    {
      v51 = v50;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v51[1].monitor),
                                (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB14A1 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v52);
          byte_4BB14A1 = 1;
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
            sub_1C13CC8((PartyOrganizationUtility_o *)(Master_object + 32), vals, v54, v55, v56, v57, v58, v59);
            v61 = v24->fields._TransitionInfo_k__BackingField;
            if ( v61 )
            {
              v61->fields.optionId = v28->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1C13F80(Master_object, v21);
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

  if ( (byte_4BB145D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_1C13D24(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_4BB145D = 1;
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
      sub_1C13F80(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_32920B8 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v9 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_56806080(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_362CAC0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_34821204(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v9,
      endAct,
      v10);
  }
}


void __fastcall QuestAfterAction__LoadVoice_34821204(
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
  System_String_o *VoiceAssetName_41015788; // x19
  Il2CppObject *v38; // x20
  System_Action_o *v39; // x22

  v5 = svtVInfos;
  while ( 1 )
  {
    if ( (byte_4BB145E & 1) == 0 )
    {
      sub_1C13D24(&System_Action_TypeInfo, svtVInfos);
      sub_1C13D24(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v7);
      sub_1C13D24(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v8);
      sub_1C13D24(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v9);
      sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
      sub_1C13D24(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
      sub_1C13D24(&Method_QuestAfterAction___c__DisplayClass74_0__LoadVoice_b__0__, v12);
      sub_1C13D24(&QuestAfterAction___c__DisplayClass74_0_TypeInfo, v13);
      byte_4BB145E = 1;
    }
    v14 = sub_1C13F70(QuestAfterAction___c__DisplayClass74_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( !v14 )
      goto LABEL_18;
    *(_QWORD *)(v14 + 16) = v5;
    v23 = (CommonUI_o **)(v14 + 16);
    sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)v5, v17, v18, v19, v20, v21, v22);
    *(_QWORD *)(v14 + 24) = this;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v24, v25, v26, v27, v28, v29);
    *(_QWORD *)(v14 + 32) = endAct;
    v30 = (System_Action_o **)(v14 + 32);
    sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)endAct, v31, v32, v33, v34, v35, v36);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16),
            (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v30, 0LL);
        return;
      }
LABEL_18:
      sub_1C13F80(Instance, v16);
    }
    Instance = *v23;
    if ( !*v23 )
      goto LABEL_18;
    Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Instance,
                               0,
                               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
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
      (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)*v23;
    endAct = *v30;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  Instance = *v23;
  if ( !*v23 )
    goto LABEL_18;
  Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             0,
                             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_18;
  VoiceAssetName_41015788 = ServantVoiceEntity__getVoiceAssetName_41015788(Instance->fields.m_CachedPtr, 0LL);
  v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v39 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)v14, Method_QuestAfterAction___c__DisplayClass74_0__LoadVoice_b__0__, 0LL);
  if ( !v38 )
    goto LABEL_18;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v38, VoiceAssetName_41015788, v39, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_4BB146C & 1) == 0 )
  {
    sub_1C13D24(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_1C13D24(&StringLiteral_1/*""*/, v6);
    byte_4BB146C = 1;
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

  if ( (byte_4BB1466 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_4BB1466 = 1;
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
    sub_1C13F80(screenCollider, v4);
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

  if ( (byte_4BB1462 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, endAct);
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1C13D24(&Method_QuestAfterAction___c__DisplayClass78_0__Play_b__0__, v6);
    sub_1C13D24(&QuestAfterAction___c__DisplayClass78_0_TypeInfo, v7);
    byte_4BB1462 = 1;
  }
  v8 = sub_1C13F70(QuestAfterAction___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = endAct,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)endAct, v11, v12, v13, v14, v15, v16),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1C13F80(Instance, v10);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v17 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v8, Method_QuestAfterAction___c__DisplayClass78_0__Play_b__0__, 0LL);
  this->fields.endAct = v17;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)v17, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_4BB1463 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, actionVals);
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1C13D24(&Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__0__, v8);
    sub_1C13D24(&Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__1__, v9);
    sub_1C13D24(&QuestAfterAction___c__DisplayClass79_0_TypeInfo, v10);
    byte_4BB1463 = 1;
  }
  v11 = sub_1C13F70(QuestAfterAction___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)finishCallback, v20, v21, v22, v23, v24, v25);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v26);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.temporaryCommandBuf,
    (int64_t)CommandBuf,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1C13F80(Instance, v13);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v34 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v34;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__1__,
    0LL);
  v43 = QuestAfterAction__WaitWhileMainStateFinished(this, v41, v42);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v43, 0LL);
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

  if ( (byte_4BB1465 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, commandArray);
    sub_1C13D24(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__82_0__, v5);
    byte_4BB1465 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.temporaryCommandBuf,
      (int64_t)commandArray,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v12 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__82_0__,
      0LL);
    this->fields.endAct = v12;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4BB146B & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v7);
    byte_4BB146B = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF54B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v8);
    byte_4BAF54B = 1;
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
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
    byte_4BAF374 = 1;
  }
  v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.subRootGimmickP->klass;
  if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1C13F80(v10, v8);
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
  if ( (byte_4BB145B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, com);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    this = (QuestAfterAction_o *)sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BB145B = 1;
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
                sub_1C13F88(this, com);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1C13F80(this, com);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v16 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v16,
                                             (int32_t)this,
                                             (const MethodInfo_3238624 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_4BB1469 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_4BB1469 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C13F80(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_31C33B0 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4BB1461 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_4BB1461 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_31C338C *)Method_CStateManager_QuestAfterAction__update__);
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

  if ( (byte_4BB1467 & 1) == 0 )
  {
    sub_1C13D24(&QuestAfterAction__WaitWhileMainStateFinished_d__85_TypeInfo, action);
    byte_4BB1467 = 1;
  }
  v5 = sub_1C13F70(QuestAfterAction__WaitWhileMainStateFinished_d__85_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)action, v12, v13, v14, v15, v16, v17);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.endAct, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.temporaryCommandBuf, 0LL, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4BB145A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_4BB145A = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1C13F80(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_String_o *VoiceAssetName_41015788; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BB145F & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_1C13D24(&SoundManager_TypeInfo, v10);
    byte_4BB145F = 1;
  }
  memset(&v17, 0, sizeof(v17));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_32920B8 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_56806080(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_362CAC0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v13 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v13,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1C13F80(v14, v15);
    VoiceAssetName_41015788 = ServantVoiceEntity__getVoiceAssetName_41015788((int32_t)v17.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_41015788, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1C13F80(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_3292430 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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

  if ( (byte_4BB1471 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor___77428384, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1C13D24(&System_Random_TypeInfo, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v12);
    sub_1C13D24(&StringLiteral_16374/*"^c"*/, v13);
    byte_4BB1471 = 1;
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
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v17 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_56806080(
        v17,
        v15,
        (const MethodInfo_362CAC0 *)Method_System_Collections_Generic_List_string___ctor___77428384);
      result = 0;
      v18 = (System_Random_o *)sub_1C13F70(System_Random_TypeInfo);
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
                      (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
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
              param = System_String__Concat_62979204(
                        *((System_String_o **)v22 + 5),
                        (System_String_o *)StringLiteral_16374/*"^c"*/,
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
                       (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4BAF374 )
              {
                sub_1C13D24(&TerminalSceneComponent_TypeInfo, svtId);
                byte_4BAF374 = 1;
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
              (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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
    sub_1C13F80(param, svtId);
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
    sub_1C13F88(v27, v28);
  return System_String__Concat_62979204(
           *((System_String_o **)v30 + 5),
           (System_String_o *)StringLiteral_16374/*"^c"*/,
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

  if ( (byte_4BB1473 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BB1473 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_3238670 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1C13F80(Instance, v8);
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
    sub_1C13F80(v3, str);
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
  if ( (byte_4BB1472 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1C13D24(&StringLiteral_16374/*"^c"*/, str);
    byte_4BB1472 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1C13F80(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_62979204(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16374/*"^c"*/,
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(screenCollider, v5);
  }
  monitor = (System_Action_o *)screenCollider[7].monitor;
  p_monitor = (PartyOrganizationUtility_o *)&screenCollider[7].monitor;
  p_monitor->klass = 0LL;
  sub_1C13CC8(p_monitor, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(0LL, v7);
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
    sub_1C13F80(0LL, v7);
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
  if ( (byte_4BB1478 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    this = (QuestAfterAction_StateMain_o *)sub_1C13D24(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_4BB1478 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1C13F88(this, method);
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
        (const MethodInfo_36116A4 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v12,
                              v2,
                              (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_35115208(
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
    sub_1C13F80(this, method);
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
  int64_t v93; // x22
  __int64 updated; // x0
  QuestAfterAction_o *v95; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  __int64 *v102; // x20
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v110; // x21
  QuestAfterAction_Command_o *v111; // x21
  BlankEarthQuestAfterAction_o *v112; // x23
  System_Action_o *v113; // x24
  const MethodInfo *v114; // x5
  int id; // w8
  float v116; // s0
  __int64 v117; // x1
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v119; // x0
  TerminalSceneComponent_c *v120; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v122; // x20
  TerminalSceneComponent_o *v123; // x0
  float v124; // s0
  System_Action_o *v125; // x1
  System_String_o *v126; // x19
  System_String_o *v127; // x20
  System_String_o *v128; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v130; // x23
  __int64 v131; // x8
  __int64 v132; // x23
  float v133; // s0
  System_String_o *param; // x21
  _QWORD *v135; // x0
  System_Reflection_MethodBase_o *v136; // x0
  __int64 v137; // x20
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  __int64 v144; // x23
  __int64 v145; // x8
  __int64 v146; // x22
  int32_t v147; // w21
  bool v148; // w24
  bool v149; // w26
  __int64 v150; // x20
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  __int64 v157; // x8
  QuestAfterAction_o *v158; // x22
  Il2CppObject *v159; // x0
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  UnityEngine_Object_o *v166; // x19
  SrcSpotBasePrefab_o *v167; // x19
  System_Action_o *v168; // x21
  int32_t v169; // w1
  __int64 v170; // x23
  float v171; // s0
  float v172; // s9
  float v173; // s0
  float v174; // s10
  float v175; // s0
  float v176; // s11
  float v177; // s0
  float v178; // s8
  int32_t v179; // w19
  __int64 v180; // x8
  float v181; // s8
  const MethodInfo_374D684 *v182; // x2
  float v183; // s0
  float v184; // s1
  float v185; // s2
  float v186; // s10
  float v187; // s9
  float v188; // s11
  MapCamera_o *v189; // x20
  System_Action_o *v190; // x21
  MapCamera_o *v191; // x0
  float v192; // s0
  float v193; // s1
  float v194; // s2
  float v195; // s3
  int32_t v196; // w1
  __int64 v197; // x20
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  __int64 v204; // x8
  QuestAfterAction_o *v205; // x22
  Il2CppObject *v206; // x0
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  UnityEngine_Object_o *v213; // x19
  ModelLineComponent_o *v214; // x19
  System_Action_o *v215; // x21
  const MethodInfo *v216; // x3
  int32_t v217; // w1
  __int64 v218; // x21
  int32_t v219; // w20
  int32_t v220; // w22
  TerminalSceneComponent_c *v221; // x0
  TerminalSceneComponent_o *v222; // x22
  __int64 v223; // x8
  PlayMakerFSM_o *v224; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v226; // x8
  __int64 v227; // x8
  QuestBoardListViewManager_o *v228; // x21
  System_Action_o *v229; // x22
  __int64 v230; // x22
  int v231; // w23
  float v232; // s8
  int32_t v233; // w21
  __int64 v234; // x1
  TerminalPramsManager_c *v235; // x0
  __int64 v236; // x8
  __int64 v237; // x8
  __int64 v238; // x8
  __int64 v239; // x8
  System_String_o *v240; // x20
  System_String_o *v241; // x21
  SeManager_c *v242; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v244; // x20
  int64_t v245; // x2
  int32_t v246; // w3
  System_String_o *v247; // x4
  BattleSetupInfo_o *v248; // x5
  FollowerInfo_o *v249; // x6
  PartyListViewItem_o *v250; // x7
  __int64 v251; // x23
  int32_t v252; // w21
  Il2CppObject *v253; // x0
  __int64 *v254; // x24
  int64_t v255; // x2
  int32_t v256; // w3
  System_String_o *v257; // x4
  BattleSetupInfo_o *v258; // x5
  FollowerInfo_o *v259; // x6
  PartyListViewItem_o *v260; // x7
  const MethodInfo *v261; // x2
  __int64 v262; // x22
  int v263; // w21
  __int64 v264; // x8
  NetworkManager_ResultCallbackFunc_o *v265; // x21
  Il2CppObject *Request_object; // x20
  int32_t v267; // w21
  __int64 v268; // x23
  int32_t v269; // w21
  int32_t v270; // w22
  int32_t v271; // w23
  System_String_o *v272; // x23
  int64_t v273; // x2
  int32_t v274; // w3
  System_String_o *v275; // x4
  BattleSetupInfo_o *v276; // x5
  FollowerInfo_o *v277; // x6
  PartyListViewItem_o *v278; // x7
  System_String_array *v279; // x20
  int64_t v280; // x1
  int v281; // w8
  System_String_o *v282; // x19
  System_String_o *v283; // x20
  System_String_o *v284; // x19
  System_String_o *v285; // x20
  System_String_o *v286; // x20
  Il2CppObject *v287; // x21
  System_Action_o *v288; // x23
  char *v289; // x10
  System_String_o *v290; // x23
  int64_t v291; // x2
  int32_t v292; // w3
  System_String_o *v293; // x4
  BattleSetupInfo_o *v294; // x5
  FollowerInfo_o *v295; // x6
  PartyListViewItem_o *v296; // x7
  System_String_array *v297; // x20
  int64_t v298; // x1
  int v299; // w8
  System_String_o *v300; // x19
  System_String_o *v301; // x20
  System_String_o *v302; // x20
  Il2CppObject *v303; // x21
  System_Action_o *v304; // x23
  __int64 v305; // x8
  const MethodInfo *v306; // x2
  __int64 v307; // x8
  QuestAfterAction_TitleInfoControlCallback_o *v308; // x21
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v310; // x20
  __int64 v311; // x8
  ScrTerminalMap_o *v312; // x23
  __int64 v313; // x8
  ScrTerminalMap_o *v314; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v316; // x23
  TerminalPramsManager_c *v317; // x0
  __int64 v318; // x8
  __int64 v319; // x1
  const MethodInfo *v320; // x2
  TerminalPramsManager_c *v321; // x0
  __int64 v322; // x8
  float v323; // s0
  __int64 v324; // x8
  float v325; // s0
  __int64 v326; // x23
  float v327; // s0
  float v328; // s8
  int32_t v329; // w22
  __int64 v330; // x8
  ScrTerminalMap_o *v331; // x24
  float v332; // s0
  float v333; // s9
  float v334; // s0
  const MethodInfo_374D684 *v335; // x2
  int v336; // w8
  float v337; // s10
  float v338; // s9
  float v339; // s11
  MapCamera_o *v340; // x20
  __int64 v341; // x21
  int32_t v342; // w0
  int32_t v343; // w20
  float v344; // s8
  int32_t v345; // w19
  __int64 v346; // x20
  int64_t v347; // x2
  int32_t v348; // w3
  System_String_o *v349; // x4
  BattleSetupInfo_o *v350; // x5
  FollowerInfo_o *v351; // x6
  PartyListViewItem_o *v352; // x7
  __int64 v353; // x8
  QuestAfterAction_o *v354; // x22
  Il2CppObject *v355; // x0
  int64_t v356; // x2
  int32_t v357; // w3
  System_String_o *v358; // x4
  BattleSetupInfo_o *v359; // x5
  FollowerInfo_o *v360; // x6
  PartyListViewItem_o *v361; // x7
  UnityEngine_Object_o *v362; // x19
  __int64 v363; // x23
  int64_t v364; // x2
  int32_t v365; // w3
  System_String_o *v366; // x4
  BattleSetupInfo_o *v367; // x5
  FollowerInfo_o *v368; // x6
  PartyListViewItem_o *v369; // x7
  __int64 v370; // x20
  QuestAfterAction_o *v371; // x22
  Il2CppObject *v372; // x0
  int64_t *v373; // x19
  int64_t v374; // x2
  int32_t v375; // w3
  System_String_o *v376; // x4
  BattleSetupInfo_o *v377; // x5
  FollowerInfo_o *v378; // x6
  PartyListViewItem_o *v379; // x7
  UnityEngine_Object_o *v380; // x21
  SrcSpotBasePrefab_o *v381; // x21
  System_Action_o *v382; // x22
  int64_t v383; // x2
  int32_t v384; // w3
  System_String_o *v385; // x4
  BattleSetupInfo_o *v386; // x5
  FollowerInfo_o *v387; // x6
  PartyListViewItem_o *v388; // x7
  int64_t v389; // x1
  PartyOrganizationUtility_o *v390; // x0
  __int64 v391; // x22
  QuestAfterAction_o *v392; // x21
  Il2CppObject *v393; // x21
  System_Action_o *v394; // x22
  QuestAfterAction_o *v395; // x22
  Il2CppObject *v396; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v398; // x0
  int32_t v399; // w1
  QuestAfterAction_o *v400; // x22
  Il2CppObject *v401; // x21
  _DWORD *v402; // x8
  QuestAfterAction_o *v403; // x22
  _DWORD *v404; // x8
  __int64 v405; // x21
  QuestAfterAction_o *v406; // x22
  Il2CppObject *v407; // x22
  __int64 v408; // x1
  int32_t v409; // w21
  TerminalPramsManager_c *v410; // x0
  QuestAfterAction_o *v411; // x20
  Il2CppObject *v412; // x20
  __int64 v413; // x1
  TerminalPramsManager_c *v414; // x0
  SceneJumpInfo_o *v415; // x21
  MapCamera_o *v416; // x20
  float v417; // s0
  System_Action_o *v418; // x21
  MapCamera_o *v419; // x0
  float v420; // s0
  int32_t v421; // w4
  int v422; // w23
  __int64 v423; // x21
  float v424; // s0
  float v425; // s8
  float v426; // s0
  MapCamera_o *v427; // x19
  float v428; // s0
  float v429; // s9
  int32_t v430; // w20
  __int64 v431; // x20
  int64_t v432; // x2
  int32_t v433; // w3
  System_String_o *v434; // x4
  BattleSetupInfo_o *v435; // x5
  FollowerInfo_o *v436; // x6
  PartyListViewItem_o *v437; // x7
  __int64 v438; // x8
  QuestAfterAction_o *v439; // x22
  Il2CppObject *v440; // x0
  int64_t v441; // x2
  int32_t v442; // w3
  System_String_o *v443; // x4
  BattleSetupInfo_o *v444; // x5
  FollowerInfo_o *v445; // x6
  PartyListViewItem_o *v446; // x7
  UnityEngine_Object_o *v447; // x19
  __int64 v448; // x20
  int64_t v449; // x2
  int32_t v450; // w3
  System_String_o *v451; // x4
  BattleSetupInfo_o *v452; // x5
  FollowerInfo_o *v453; // x6
  PartyListViewItem_o *v454; // x7
  __int64 v455; // x8
  QuestAfterAction_o *v456; // x22
  Il2CppObject *v457; // x0
  int64_t v458; // x2
  int32_t v459; // w3
  System_String_o *v460; // x4
  BattleSetupInfo_o *v461; // x5
  FollowerInfo_o *v462; // x6
  PartyListViewItem_o *v463; // x7
  UnityEngine_Object_o *v464; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v466; // x22
  UnityEngine_Object_o *v467; // x21
  const MethodInfo *v468; // x2
  _DWORD *v469; // x8
  _BOOL4 v470; // w23
  QuestAfterAction_o *v471; // x22
  UnityEngine_Object_o *v472; // x21
  const MethodInfo *v473; // x2
  const MethodInfo *v474; // x2
  _DWORD *v475; // x8
  _BOOL4 v476; // w23
  QuestAfterAction_o *v477; // x22
  UnityEngine_Object_o *v478; // x21
  const MethodInfo *v479; // x2
  const MethodInfo *v480; // x2
  System_Action_o *v481; // x20
  const MethodInfo *v482; // x2
  System_String_o *v483; // x20
  Il2CppObject *v484; // x21
  System_Action_o *v485; // x23
  float v486; // s0
  float v487; // s0
  float v488; // s0
  QuestAfterAction_o *v489; // x24
  const MethodInfo *v490; // x4
  UnityEngine_Object_o *v491; // x24
  float v492; // s10
  float v493; // s8
  float v494; // s9
  __int64 v495; // x8
  const MethodInfo_374D684 *v496; // x2
  System_String_o *v497; // x24
  QuestAfterAction_o *v498; // x24
  const MethodInfo *v499; // x4
  UnityEngine_Object_o *v500; // x24
  float v501; // s8
  float v502; // s9
  float v503; // s10
  __int64 v504; // x8
  float v505; // s0
  float v506; // s1
  float v507; // s2
  QuestAfterAction_o *v508; // x24
  const MethodInfo *v509; // x4
  UnityEngine_Object_o *v510; // x24
  __int64 v511; // x8
  int v512; // w8
  __int64 v513; // x8
  MapCamera_o *v514; // x20
  MapCamera_o *v515; // x0
  float v516; // s0
  float v517; // s1
  float v518; // s2
  __int64 v519; // x23
  int64_t v520; // x2
  int32_t v521; // w3
  System_String_o *v522; // x4
  BattleSetupInfo_o *v523; // x5
  FollowerInfo_o *v524; // x6
  PartyListViewItem_o *v525; // x7
  __int64 v526; // x20
  __int64 v527; // x8
  __int64 v528; // x21
  int32_t v529; // w22
  bool v530; // w26
  bool v531; // w27
  __int64 v532; // x8
  __int64 v533; // x22
  int32_t v534; // w21
  bool v535; // w22
  __int64 v536; // x8
  __int64 v537; // x22
  int32_t v538; // w21
  bool v539; // w22
  __int64 v540; // x21
  float v541; // s0
  QuestAfterAction_o *v542; // x20
  float v543; // s8
  Il2CppObject *v544; // x20
  _BOOL4 v545; // w23
  __int64 v546; // x20
  int64_t v547; // x2
  int32_t v548; // w3
  System_String_o *v549; // x4
  BattleSetupInfo_o *v550; // x5
  FollowerInfo_o *v551; // x6
  PartyListViewItem_o *v552; // x7
  __int64 v553; // x8
  QuestAfterAction_o *v554; // x22
  Il2CppObject *v555; // x0
  int64_t v556; // x2
  int32_t v557; // w3
  System_String_o *v558; // x4
  BattleSetupInfo_o *v559; // x5
  FollowerInfo_o *v560; // x6
  PartyListViewItem_o *v561; // x7
  UnityEngine_Object_o *v562; // x19
  MapGimmickComponent_o *v563; // x19
  System_Action_o *v564; // x21
  TerminalSceneComponent_o *v565; // x19
  __int64 v566; // x20
  int64_t v567; // x2
  int32_t v568; // w3
  System_String_o *v569; // x4
  BattleSetupInfo_o *v570; // x5
  FollowerInfo_o *v571; // x6
  PartyListViewItem_o *v572; // x7
  System_String_array *v573; // x0
  __int64 *v574; // x21
  int64_t v575; // x2
  int32_t v576; // w3
  System_String_o *v577; // x4
  BattleSetupInfo_o *v578; // x5
  FollowerInfo_o *v579; // x6
  PartyListViewItem_o *v580; // x7
  __int64 v581; // x8
  __int64 v582; // x9
  QuestAfterAction_o *v583; // x21
  Il2CppObject *v584; // x0
  int64_t v585; // x2
  int32_t v586; // w3
  System_String_o *v587; // x4
  BattleSetupInfo_o *v588; // x5
  FollowerInfo_o *v589; // x6
  PartyListViewItem_o *v590; // x7
  UnityEngine_Object_o *v591; // x19
  MapGimmickComponent_o *v592; // x19
  System_Action_o *v593; // x0
  __int64 *v594; // x8
  System_Action_o *v595; // x21
  __int64 v596; // x21
  QuestAfterAction_o *v597; // x20
  Il2CppObject *v598; // x20
  UIWidget_o *v599; // x20
  int64_t v600; // x2
  int32_t v601; // w3
  System_String_o *v602; // x4
  BattleSetupInfo_o *v603; // x5
  FollowerInfo_o *v604; // x6
  PartyListViewItem_o *v605; // x7
  __int64 v606; // x8
  QuestAfterAction_o *v607; // x22
  Il2CppObject *v608; // x0
  __int64 v609; // x19
  int64_t v610; // x2
  int32_t v611; // w3
  System_String_o *v612; // x4
  BattleSetupInfo_o *v613; // x5
  FollowerInfo_o *v614; // x6
  PartyListViewItem_o *v615; // x7
  UnityEngine_Object_o *v616; // x21
  bool v617; // w0
  bool v618; // w22
  int32_t v619; // w1
  __int64 v620; // x8
  __int64 v621; // x22
  int32_t v622; // w21
  bool v623; // w22
  __int64 v624; // x22
  QuestAfterAction_o *v625; // x21
  Il2CppObject *v626; // x21
  QuestAfterAction_o *v627; // x23
  const MethodInfo *v628; // x4
  int32_t v629; // w2
  QuestAfterAction_o *v630; // x0
  int32_t v631; // w1
  QuestAfterAction_o *v632; // x21
  QuestAfterAction_o *v633; // x23
  const MethodInfo *v634; // x4
  UnityEngine_Object_o *MapGameObject; // x23
  float v636; // s0
  float v637; // s1
  float v638; // s2
  float x; // s9
  float y; // s8
  float z; // s10
  QuestAfterAction_o *v642; // x21
  QuestAfterAction_o *v643; // x23
  UnityEngine_Object_o *v644; // x23
  __int64 v645; // x8
  float v646; // s0
  float v647; // s11
  int32_t v648; // w23
  __int64 v649; // x20
  int64_t v650; // x2
  int32_t v651; // w3
  System_String_o *v652; // x4
  BattleSetupInfo_o *v653; // x5
  FollowerInfo_o *v654; // x6
  PartyListViewItem_o *v655; // x7
  __int64 v656; // x8
  QuestAfterAction_o *v657; // x22
  Il2CppObject *v658; // x0
  int64_t v659; // x2
  int32_t v660; // w3
  System_String_o *v661; // x4
  BattleSetupInfo_o *v662; // x5
  FollowerInfo_o *v663; // x6
  PartyListViewItem_o *v664; // x7
  UnityEngine_Object_o *v665; // x19
  srcLineSprite_o *v666; // x19
  System_Action_o *v667; // x21
  int32_t v668; // w1
  __int64 v669; // x20
  int64_t v670; // x2
  int32_t v671; // w3
  System_String_o *v672; // x4
  BattleSetupInfo_o *v673; // x5
  FollowerInfo_o *v674; // x6
  PartyListViewItem_o *v675; // x7
  __int64 v676; // x8
  QuestAfterAction_o *v677; // x22
  Il2CppObject *v678; // x0
  int64_t v679; // x2
  int32_t v680; // w3
  System_String_o *v681; // x4
  BattleSetupInfo_o *v682; // x5
  FollowerInfo_o *v683; // x6
  PartyListViewItem_o *v684; // x7
  UnityEngine_Object_o *v685; // x19
  __int64 v686; // x20
  int64_t v687; // x2
  int32_t v688; // w3
  System_String_o *v689; // x4
  BattleSetupInfo_o *v690; // x5
  FollowerInfo_o *v691; // x6
  PartyListViewItem_o *v692; // x7
  __int64 v693; // x8
  QuestAfterAction_o *v694; // x22
  Il2CppObject *v695; // x0
  int64_t v696; // x2
  int32_t v697; // w3
  System_String_o *v698; // x4
  BattleSetupInfo_o *v699; // x5
  FollowerInfo_o *v700; // x6
  PartyListViewItem_o *v701; // x7
  UnityEngine_Object_o *v702; // x19
  UnityEngine_Object_o *v703; // x21
  UnityEngine_Object_o *v704; // x21
  int v705; // w9
  UnityEngine_Object_o *v706; // x21
  Il2CppObject *v707; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int64_t v709; // x2
  int32_t v710; // w3
  System_String_o *v711; // x4
  BattleSetupInfo_o *v712; // x5
  FollowerInfo_o *v713; // x6
  PartyListViewItem_o *v714; // x7
  TerminalSceneComponent_c *v715; // x0
  System_Action_o *v716; // x21
  float v717; // s10
  float v718; // s9
  float v719; // s8
  System_String_o *v720; // x24
  Il2CppObject *v721; // x0
  int64_t v722; // x2
  int32_t v723; // w3
  System_String_o *v724; // x4
  BattleSetupInfo_o *v725; // x5
  FollowerInfo_o *v726; // x6
  PartyListViewItem_o *v727; // x7
  UnityEngine_Object_o *v728; // x22
  MapGimmickComponent_o *v729; // x21
  System_Action_o *v730; // x0
  System_Action_o *v731; // x22
  MapGimmickComponent_o *v732; // x0
  System_Action_o *v733; // x2
  Il2CppObject *v734; // x0
  MapGimmickComponent_o **v735; // x22
  int64_t v736; // x2
  int32_t v737; // w3
  System_String_o *v738; // x4
  BattleSetupInfo_o *v739; // x5
  FollowerInfo_o *v740; // x6
  PartyListViewItem_o *v741; // x7
  UnityEngine_Object_o *v742; // x24
  MapGimmickComponent_o *v743; // x24
  System_Action_o *v744; // x0
  Il2CppObject *v745; // x21
  Il2CppObject *v746; // x21
  Il2CppClass *v747; // x8
  Il2CppObject *v748; // x21
  Il2CppClass *v749; // x8
  QuestAfterAction_StateMain_c *v750; // x8
  int v751; // w0
  __int64 v752; // x8
  ScrTerminalMap_o *v753; // x21
  System_Action_o *v754; // x23
  MapCamera_o *v755; // x20
  MapCamera_o *v756; // x20
  int v757; // w8
  MapCamera_o *v758; // x20
  float v759; // s0
  float v760; // s1
  float v761; // s2
  float v762; // s0
  float v763; // s1
  float v764; // s2
  __int64 v765; // x8
  float v766; // s3
  System_Action_o *v767; // x20
  MapGimmickComponent_o *v768; // x0
  float v769; // s0
  float v770; // s1
  float v771; // s2
  float v772; // s3
  int32_t v773; // w1
  System_Action_o *v774; // x2
  __int64 v775; // x8
  __int64 v776; // x8
  float v777; // s0
  float v778; // s0
  MapCamera_o *v779; // x0
  float v780; // s0
  __int64 v781; // x8
  ScrTerminalMap_o *v782; // x22
  float v783; // s0
  float v784; // s9
  float v785; // s0
  float v786; // s0
  float v787; // s1
  float v788; // s2
  float v789; // s10
  float v790; // s9
  float v791; // s11
  float v792; // s8
  int32_t v793; // w21
  System_Action_o *v794; // x22
  float v795; // s0
  float v796; // s0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  float sec; // [xsp+3Ch] [xbp-B4h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v800; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v806; // 0:x0.8
  System_Nullable_float__o v807; // 0:x0.8
  System_Nullable_float__o v808; // 0:x0.8
  System_Nullable_float__o v809; // 0:x0.8
  System_Nullable_float__o v810; // 0:x3.8
  System_Nullable_float__o v811; // 0:x3.8
  System_Nullable_Vector3__o v812; // 0:x0.16
  System_Nullable_Vector3__o v813; // 0:x0.16
  System_Nullable_Vector3__o v814; // 0:x0.16
  System_Nullable_Vector3__o v815; // 0:x0.16
  System_Nullable_Vector3__o v816; // 0:x0.16
  System_Nullable_Vector3__o v817; // 0:x1.16
  System_Nullable_Vector3__o v818; // 0:x1.16
  UnityEngine_Vector3_o v819; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v820; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v821; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v822; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v823; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v825; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v826; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v827; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v828; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v830; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v831; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v832; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v833; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v834; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v835; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB1476 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, that);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1C13D24(&DataManager_TypeInfo, v8);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v11);
    sub_1C13D24(&FSUtility_TypeInfo, v12);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v13);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v14);
    sub_1C13D24(&LocalizationManager_TypeInfo, v15);
    sub_1C13D24(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___, v16);
    sub_1C13D24(&NetworkManager_TypeInfo, v17);
    sub_1C13D24(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_1C13D24(&Method_System_Nullable_float___ctor__, v19);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v20);
    sub_1C13D24(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v21);
    sub_1C13D24(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v22);
    sub_1C13D24(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v23);
    sub_1C13D24(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v24);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v25);
    sub_1C13D24(&SceneJumpInfo_TypeInfo, v26);
    sub_1C13D24(&SeManager_TypeInfo, v27);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v28);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v29);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v31);
    sub_1C13D24(&Method_SingletonTemplate_QuestTree__get_Instance__, v32);
    sub_1C13D24(&SoundManager_TypeInfo, v33);
    sub_1C13D24(&Method_QuestAfterAction_StateMain_UpdateAnim__, v34);
    sub_1C13D24(&string___TypeInfo, v35);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v36);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v37);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, v38);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v39);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v40);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v41);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__, v42);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__, v43);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__, v44);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__, v45);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v46);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__, v47);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v48);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v49);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__, v50);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__, v51);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v52);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__, v53);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__, v54);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v55);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__, v56);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v57);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__, v58);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v59);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__, v60);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__, v61);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v62);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__, v63);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo, v64);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v65);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v66);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v67);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v68);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v69);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v70);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v71);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v72);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v73);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v74);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v75);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v76);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v77);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v78);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v79);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v80);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v81);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v82);
    sub_1C13D24(&QuestAfterAction_StateMain___c_TypeInfo, v83);
    sub_1C13D24(&StringLiteral_89/*"\r\n"*/, v84);
    sub_1C13D24(&StringLiteral_1477/*"3.7.8"*/, v85);
    sub_1C13D24(&StringLiteral_11014/*"QMap_Cap{0:D4}_{1:D4}_Atlas"*/, v86);
    sub_1C13D24(&StringLiteral_1478/*"30101"*/, v87);
    sub_1C13D24(&StringLiteral_1402/*"1053912:100:0"*/, v88);
    sub_1C13D24(&StringLiteral_3444/*"CAN_SELECT_SVT_MATERIAL_FLAG"*/, v89);
    sub_1C13D24(&StringLiteral_1/*""*/, v90);
    sub_1C13D24(&StringLiteral_20134/*"getTotalPss"*/, v91);
    sub_1C13D24(&StringLiteral_1212/*"0"*/, v92);
    byte_4BB1476 = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v93 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v93, 0LL);
  if ( !v93 )
    goto LABEL_988;
  *(_QWORD *)(v93 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v93 + 16), (int64_t)this, v96, v97, v98, v99, v100, v101);
  *(_QWORD *)(v93 + 24) = that;
  v102 = (__int64 *)(v93 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v93 + 24), (int64_t)that, v103, v104, v105, v106, v107, v108);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v102 )
    goto LABEL_988;
  if ( *(_BYTE *)(*v102 + 169) )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v102 )
    {
      *(_BYTE *)(*v102 + 169) = 0;
      return;
    }
LABEL_988:
    sub_1C13F80(updated, v95);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v110 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v110 )
    goto LABEL_988;
  if ( (unsigned int)updated >= *(_DWORD *)(v110 + 24) )
    goto LABEL_989;
  v111 = *(QuestAfterAction_Command_o **)(v110 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v111,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_815;
  if ( !*v102 )
    goto LABEL_988;
  v112 = *(BlankEarthQuestAfterAction_o **)(*v102 + 48);
  v113 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v113, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !v112 )
    goto LABEL_988;
  updated = BlankEarthQuestAfterAction__UpdateAnim(v112, v95, v111, v113, &isQuickUpdate, v114);
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
        *v102,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v111 )
    goto LABEL_988;
  id = v111->fields.id;
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
          if ( !byte_4BAF374 )
          {
            sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
            byte_4BAF374 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v223 = **(_QWORD **)(updated + 184);
          if ( !v223 )
            goto LABEL_988;
          updated = *(_QWORD *)(v223 + 256);
          if ( !updated )
            goto LABEL_988;
          updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
          if ( !updated )
            goto LABEL_988;
          v224 = (PlayMakerFSM_o *)updated;
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
          if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3444/*"CAN_SELECT_SVT_MATERIAL_FLAG"*/, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BAF374 )
            {
              sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
              byte_4BAF374 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v226 = **(_QWORD **)(updated + 184);
            if ( !v226 )
              goto LABEL_988;
            v227 = *(_QWORD *)(v226 + 256);
            if ( !v227 )
              goto LABEL_988;
            v228 = *(QuestBoardListViewManager_o **)(v227 + 296);
            updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            }
            v229 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
            if ( !v229 )
            {
              if ( !*(_DWORD *)(updated + 224) )
              {
                j_il2cpp_runtime_class_init_0(updated);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v707 = **(Il2CppObject ***)(updated + 184);
              v229 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
              System_Action___ctor(v229, v707, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0LL);
              static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              static_fields->__9__16_22 = v229;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&static_fields->__9__16_22,
                (int64_t)v229,
                v709,
                v710,
                v711,
                v712,
                v713,
                v714);
            }
            if ( !v228 )
              goto LABEL_988;
            QuestBoardListViewManager__SetMode(v228, 4, v229, 0, 0, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BAF374 )
            {
              sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
              byte_4BAF374 = 1;
            }
            v715 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v715 = TerminalSceneComponent_TypeInfo;
            }
            updated = (__int64)v715->static_fields->mInstance;
            if ( !updated )
              goto LABEL_988;
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
            PlayMakerFSM__SendEvent(v224, (System_String_o *)StringLiteral_20134/*"getTotalPss"*/, 0LL);
          }
          goto LABEL_815;
        }
        if ( id != 510 )
        {
          if ( id == 520 )
          {
            DEFAULT_FADE_TIME = System_Single__Parse(v111->fields.param, 0LL);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v119 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v119 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v119->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BAF374 )
            {
              sub_1C13D24(&TerminalSceneComponent_TypeInfo, v117);
              byte_4BAF374 = 1;
            }
            v120 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v120 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v120->static_fields->mInstance;
            v122 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            System_Action___ctor(
              v122,
              (Il2CppObject *)v93,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
              0LL);
            if ( !mInstance )
              goto LABEL_988;
            v123 = mInstance;
            v124 = DEFAULT_FADE_TIME;
            v125 = v122;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v123, v124, v125, 0LL);
          }
          return;
        }
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_988;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_988;
        v230 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v231 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          v232 = 0.5;
          if ( *(int *)(v230 + 24) >= 2 )
          {
            v233 = System_Int32__Parse(*(System_String_o **)(v230 + 40), 0LL);
            if ( *(int *)(v230 + 24) >= 3 )
              v232 = System_Single__Parse(*(System_String_o **)(v230 + 48), 0LL);
          }
          else
          {
            v233 = v231;
            v231 = -1;
          }
          updated = *v102;
          if ( !*v102 )
            goto LABEL_988;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v233,
                                  this,
                                  (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
          {
            if ( v231 >= 1 )
            {
              updated = *v102;
              if ( !*v102 )
                goto LABEL_988;
              v310 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v231,
                       this,
                       (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v310, 0LL, 0LL) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4BAF374 )
                {
                  sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
                  byte_4BAF374 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v311 = **(_QWORD **)(updated + 184);
                if ( !v311 )
                  goto LABEL_988;
                if ( !v310 )
                  goto LABEL_988;
                v312 = *(ScrTerminalMap_o **)(v311 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v310, 0LL);
                if ( !v312 )
                  goto LABEL_988;
                ScrTerminalMap__SetPlayerIcon(v312, (UnityEngine_GameObject_o *)updated, 0LL);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BAF374 )
            {
              sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
              byte_4BAF374 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v313 = **(_QWORD **)(updated + 184);
            if ( !v313 )
              goto LABEL_988;
            if ( !MapComponent_object )
              goto LABEL_988;
            v314 = *(ScrTerminalMap_o **)(v313 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
            v316 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            System_Action___ctor(v316, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v314 )
              goto LABEL_988;
            ScrTerminalMap__MovePlayerIcon(v314, gameObject, v233, v316, v232, 0LL);
          }
          return;
        }
        goto LABEL_989;
      }
      if ( (unsigned int)(id - 351) >= 2 )
      {
        switch ( id )
        {
          case 400:
            v137 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            System_Object___ctor((Il2CppObject *)v137, 0LL);
            if ( !v137 )
              goto LABEL_988;
            *(_QWORD *)(v137 + 24) = v93;
            v144 = v137 + 24;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v137 + 24), v93, v138, v139, v140, v141, v142, v143);
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_988;
            v145 = *(_QWORD *)(updated + 24);
            v146 = updated;
            if ( v145 )
            {
              if ( !(_DWORD)v145 )
                goto LABEL_989;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v147 = updated;
              if ( *(int *)(v146 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v146 + 40), 0LL);
                v148 = (int)updated < 1;
                if ( *(int *)(v146 + 24) < 3 )
                {
                  v149 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v146 + 48), 0LL);
                  v149 = (int)updated > 0;
                }
                goto LABEL_828;
              }
            }
            else
            {
              v147 = 0;
            }
            v149 = 0;
            v148 = 1;
LABEL_828:
            if ( !*(_QWORD *)v144 )
              goto LABEL_988;
            updated = *(_QWORD *)(*(_QWORD *)v144 + 24LL);
            if ( !updated )
              goto LABEL_988;
            v721 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v147,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v137 + 16) = v721;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v137 + 16), (int64_t)v721, v722, v723, v724, v725, v726, v727);
            v728 = *(UnityEngine_Object_o **)(v137 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v728, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v729 = *(MapGimmickComponent_o **)(v137 + 16);
            if ( !v729 )
              goto LABEL_988;
            v729->fields.isForceNotActive = v149;
            v730 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            v731 = v730;
            if ( v148 )
            {
              System_Action___ctor(
                v730,
                (Il2CppObject *)v137,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
                0LL);
              v619 = 2;
              v732 = v729;
              v733 = v731;
LABEL_937:
              MapGimmickComponent__SetState(v732, v619, v733, 0LL);
              return;
            }
            System_Action___ctor(
              v730,
              (Il2CppObject *)v137,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
              0LL);
            MapGimmickComponent__SetState(v729, 2, v731, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v775 = *(_QWORD *)(v137 + 24);
            if ( !v775 )
              goto LABEL_988;
            goto LABEL_942;
          case 401:
            v519 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            System_Object___ctor((Il2CppObject *)v519, 0LL);
            if ( !v519 )
              goto LABEL_988;
            *(_QWORD *)(v519 + 24) = v93;
            v526 = v519 + 24;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v519 + 24), v93, v520, v521, v522, v523, v524, v525);
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_988;
            v527 = *(_QWORD *)(updated + 24);
            v528 = updated;
            if ( v527 )
            {
              if ( !(_DWORD)v527 )
                goto LABEL_989;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v529 = updated;
              if ( *(int *)(v528 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v528 + 40), 0LL);
                v530 = (int)updated < 1;
                if ( *(int *)(v528 + 24) < 3 )
                {
                  v531 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v528 + 48), 0LL);
                  v531 = (int)updated > 0;
                }
                goto LABEL_838;
              }
            }
            else
            {
              v529 = 0;
            }
            v531 = 0;
            v530 = 1;
LABEL_838:
            if ( !*(_QWORD *)v526 )
              goto LABEL_988;
            updated = *(_QWORD *)(*(_QWORD *)v526 + 24LL);
            if ( !updated )
              goto LABEL_988;
            v734 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v529,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v519 + 16) = v734;
            v735 = (MapGimmickComponent_o **)(v519 + 16);
            sub_1C13CC8((PartyOrganizationUtility_o *)(v519 + 16), (int64_t)v734, v736, v737, v738, v739, v740, v741);
            v742 = *(UnityEngine_Object_o **)(v519 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v742, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v743 = *v735;
            if ( !*v735 )
              goto LABEL_988;
            v743->fields.isForceLoop = v531;
            v743->fields.isForceNotActive = 0;
            if ( *(int *)(v528 + 24) >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v528 + 56), 0LL);
              if ( !*v735 )
                goto LABEL_988;
              MapGimmickComponent__SetUseAnimNum(*v735, updated, 1, 0LL);
              v743 = *v735;
            }
            v744 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            v595 = v744;
            if ( v530 )
            {
              System_Action___ctor(
                v744,
                (Il2CppObject *)v519,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
                0LL);
              if ( !v743 )
                goto LABEL_988;
              v619 = 3;
              v732 = v743;
LABEL_936:
              v733 = v595;
              goto LABEL_937;
            }
            System_Action___ctor(
              v744,
              (Il2CppObject *)v519,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
              0LL);
            if ( !v743 )
              goto LABEL_988;
            MapGimmickComponent__SetState(v743, 3, v595, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v775 = *(_QWORD *)v526;
            if ( !*(_QWORD *)v526 )
              goto LABEL_988;
LABEL_942:
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
              this,
              *(_QWORD *)(v775 + 24),
              this->klass->vtable._14_EndAnim.methodPtr);
            return;
          case 402:
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_988;
            v532 = *(_QWORD *)(updated + 24);
            v533 = updated;
            if ( v532 )
            {
              if ( !(_DWORD)v532 )
                goto LABEL_989;
              v534 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v533 + 24) >= 2 )
              {
                v535 = System_Int32__Parse(*(System_String_o **)(v533 + 40), 0LL) > 0;
                goto LABEL_852;
              }
            }
            else
            {
              v534 = 0;
            }
            v535 = 0;
LABEL_852:
            updated = *v102;
            if ( !*v102 )
              goto LABEL_988;
            v745 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v534,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v745, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v745 )
                goto LABEL_988;
              BYTE1(v745[6].monitor) = v535;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v745, 0, 0LL);
              v469 = v745[7].klass;
              if ( !v469 )
                goto LABEL_988;
LABEL_858:
              v469[4] = 0;
              goto LABEL_18;
            }
            return;
          case 403:
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_988;
            v536 = *(_QWORD *)(updated + 24);
            v537 = updated;
            if ( v536 )
            {
              if ( !(_DWORD)v536 )
                goto LABEL_989;
              v538 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v537 + 24) >= 2 )
              {
                v539 = System_Int32__Parse(*(System_String_o **)(v537 + 40), 0LL) > 0;
                goto LABEL_861;
              }
            }
            else
            {
              v538 = 0;
            }
            v539 = 0;
LABEL_861:
            updated = *v102;
            if ( !*v102 )
              goto LABEL_988;
            v746 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v538,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v746, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v746 )
                goto LABEL_988;
              LOBYTE(v746[6].monitor) = v539;
              BYTE1(v746[6].monitor) = 0;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v746, 1, 0LL);
              v747 = v746[7].klass;
              if ( !v747 )
                goto LABEL_988;
              LODWORD(v747->_1.name) = 1;
              goto LABEL_18;
            }
            return;
          case 404:
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_988;
            v540 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_815;
            v541 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
            if ( !*(_DWORD *)(v540 + 24) )
              goto LABEL_989;
            v542 = (QuestAfterAction_o *)*v102;
            v543 = v541;
            updated = System_Int32__Parse(*(System_String_o **)(v540 + 32), 0LL);
            if ( !v542 )
              goto LABEL_988;
            v544 = QuestAfterAction__GetMapComponent_object_(
                     v542,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v544, 0LL, 0LL) )
              return;
            v545 = *(int *)(v540 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v540 + 72), 0LL) > 0;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BAF374 )
            {
              sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
              byte_4BAF374 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v781 = **(_QWORD **)(updated + 184);
            if ( !v781 )
              goto LABEL_988;
            if ( *(_DWORD *)(v540 + 24) <= 1u )
              goto LABEL_989;
            v782 = *(ScrTerminalMap_o **)(v781 + 264);
            v783 = System_Single__Parse(*(System_String_o **)(v540 + 40), 0LL);
            if ( *(_DWORD *)(v540 + 24) <= 2u )
              goto LABEL_989;
            v784 = v783;
            v785 = System_Single__Parse(*(System_String_o **)(v540 + 48), 0LL);
            if ( !v782 )
              goto LABEL_988;
            *(UnityEngine_Vector3_o *)&v786 = ScrTerminalMap__LocalPosFromCoord(v782, v784, v785, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v540 + 24) <= 4u )
              goto LABEL_989;
            v789 = v786;
            v790 = v787;
            v791 = v788;
            v792 = v543 * 0.001;
            updated = System_Int32__Parse(*(System_String_o **)(v540 + 64), 0LL);
            v793 = updated;
            if ( v545 )
            {
              if ( !v544 )
                goto LABEL_988;
              v833.fields.x = v789;
              v833.fields.y = v790;
              v833.fields.z = v791;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v544, v833, v792, updated, 0LL, 0LL);
              goto LABEL_815;
            }
            v794 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            System_Action___ctor(v794, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v544 )
              goto LABEL_988;
            v768 = (MapGimmickComponent_o *)v544;
            v769 = v789;
            v770 = v790;
            v771 = v791;
            v772 = v792;
            v773 = v793;
            v774 = v794;
LABEL_979:
            MapGimmickComponent__SetMoveAnim(v768, *(UnityEngine_Vector3_o *)&v769, v772, v773, v774, 0LL);
            return;
          case 405:
            v546 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            System_Object___ctor((Il2CppObject *)v546, 0LL);
            if ( !v546 )
              goto LABEL_988;
            *(_QWORD *)(v546 + 24) = v93;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v546 + 24), v93, v547, v548, v549, v550, v551, v552);
            v553 = *(_QWORD *)(v546 + 24);
            if ( !v553 )
              goto LABEL_988;
            v554 = *(QuestAfterAction_o **)(v553 + 24);
            updated = System_Int32__Parse(v111->fields.param, 0LL);
            if ( !v554 )
              goto LABEL_988;
            v555 = QuestAfterAction__GetMapComponent_object_(
                     v554,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v546 + 16) = v555;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v546 + 16), (int64_t)v555, v556, v557, v558, v559, v560, v561);
            v562 = *(UnityEngine_Object_o **)(v546 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v562, 0LL, 0LL) )
              return;
            v563 = *(MapGimmickComponent_o **)(v546 + 16);
            v564 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            System_Action___ctor(
              v564,
              (Il2CppObject *)v546,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
              0LL);
            if ( !v563 )
              goto LABEL_988;
            MapGimmickComponent__SetState(v563, 3, v564, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BAF374 )
            {
              sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
              byte_4BAF374 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v565 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v565 )
              goto LABEL_988;
            v123 = v565;
            v125 = 0LL;
            v124 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_46;
          case 406:
            v566 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            System_Object___ctor((Il2CppObject *)v566, 0LL);
            if ( !v566 )
              goto LABEL_988;
            *(_QWORD *)(v566 + 32) = v93;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v566 + 32), v93, v567, v568, v569, v570, v571, v572);
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            v573 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            *(_QWORD *)(v566 + 24) = v573;
            v574 = (__int64 *)(v566 + 24);
            sub_1C13CC8((PartyOrganizationUtility_o *)(v566 + 24), (int64_t)v573, v575, v576, v577, v578, v579, v580);
            v581 = *(_QWORD *)(v566 + 32);
            if ( !v581 )
              goto LABEL_988;
            v582 = *v574;
            if ( !*v574 )
              goto LABEL_988;
            if ( !*(_DWORD *)(v582 + 24) )
              goto LABEL_989;
            v583 = *(QuestAfterAction_o **)(v581 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v582 + 32), 0LL);
            if ( !v583 )
              goto LABEL_988;
            v584 = QuestAfterAction__GetMapComponent_object_(
                     v583,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v566 + 16) = v584;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v566 + 16), (int64_t)v584, v585, v586, v587, v588, v589, v590);
            v591 = *(UnityEngine_Object_o **)(v566 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v591, 0LL, 0LL) )
              return;
            v592 = *(MapGimmickComponent_o **)(v566 + 16);
            v593 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            v594 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
            v595 = v593;
            goto LABEL_696;
          case 407:
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_988;
            v596 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_989;
            v597 = (QuestAfterAction_o *)*v102;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v597 )
              goto LABEL_988;
            v598 = QuestAfterAction__GetMapComponent_object_(
                     v597,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v598, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( !v598 )
              goto LABEL_988;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v598, 0LL);
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_2FDFC60 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v596 + 24) <= 1u )
              goto LABEL_989;
            v599 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v596 + 40), &color, 0LL);
            if ( !v599 )
              goto LABEL_988;
            UIWidget__set_color(v599, color, 0LL);
            goto LABEL_815;
          case 408:
            v566 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            System_Object___ctor((Il2CppObject *)v566, 0LL);
            if ( !v566 )
              goto LABEL_988;
            *(_QWORD *)(v566 + 24) = v93;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v566 + 24), v93, v600, v601, v602, v603, v604, v605);
            v606 = *(_QWORD *)(v566 + 24);
            if ( !v606 )
              goto LABEL_988;
            v607 = *(QuestAfterAction_o **)(v606 + 24);
            updated = System_Int32__Parse(v111->fields.param, 0LL);
            if ( !v607 )
              goto LABEL_988;
            v608 = QuestAfterAction__GetMapComponent_object_(
                     v607,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v566 + 16) = v608;
            v609 = v566 + 16;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v566 + 16), (int64_t)v608, v610, v611, v612, v613, v614, v615);
            v616 = *(UnityEngine_Object_o **)(v566 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v616, 0LL, 0LL) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v609 || !updated )
              goto LABEL_988;
            v617 = QuestTree__CheckMapGimmickCond_35115208(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v609 + 112LL),
                     0LL);
            v592 = *(MapGimmickComponent_o **)v609;
            v618 = v617;
            v593 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            v595 = v593;
            if ( v618 )
            {
              v594 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_696:
              System_Action___ctor(v593, (Il2CppObject *)v566, *v594, 0LL);
              if ( !v592 )
                goto LABEL_988;
              v619 = 3;
            }
            else
            {
              System_Action___ctor(
                v593,
                (Il2CppObject *)v566,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
                0LL);
              if ( !v592 )
                goto LABEL_988;
              v619 = 2;
            }
            v732 = v592;
            goto LABEL_936;
          case 409:
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_988;
            v620 = *(_QWORD *)(updated + 24);
            v621 = updated;
            if ( v620 )
            {
              if ( !(_DWORD)v620 )
                goto LABEL_989;
              v622 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v621 + 24) >= 2 )
              {
                v623 = System_Int32__Parse(*(System_String_o **)(v621 + 40), 0LL) > 0;
                goto LABEL_870;
              }
            }
            else
            {
              v622 = 0;
            }
            v623 = 0;
LABEL_870:
            updated = *v102;
            if ( !*v102 )
              goto LABEL_988;
            v748 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v622,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v748, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v748 )
                goto LABEL_988;
              LOBYTE(v748[6].monitor) = v623;
              BYTE1(v748[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v748, 1, 0LL);
              v749 = v748[7].klass;
              if ( !v749 )
                goto LABEL_988;
              LODWORD(v749->_1.name) = 1;
              v750 = this->klass;
              this->fields.IsAnimDoing = 0;
              v751 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v750->vtable._11_get_CommandIndex.method)(
                       this,
                       v750->vtable._12_set_CommandIndex.methodPtr);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                this,
                (unsigned int)(v751 + 1),
                this->klass->vtable._13_UpdateAnim.methodPtr);
              goto LABEL_19;
            }
            return;
          case 410:
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_988;
            v624 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_815;
            v625 = (QuestAfterAction_o *)*v102;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v625 )
              goto LABEL_988;
            v626 = QuestAfterAction__GetMapComponent_object_(
                     v625,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v626, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v624 + 24) <= 1u )
              goto LABEL_989;
            v627 = (QuestAfterAction_o *)*v102;
            updated = System_Int32__Parse(*(System_String_o **)(v624 + 40), 0LL);
            if ( !v627 )
              goto LABEL_988;
            v629 = updated;
            v630 = v627;
            v631 = 0;
            goto LABEL_738;
          case 411:
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_988;
            v624 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_815;
            v632 = (QuestAfterAction_o *)*v102;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v632 )
              goto LABEL_988;
            v626 = QuestAfterAction__GetMapComponent_object_(
                     v632,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v626, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v624 + 24) <= 1u )
              goto LABEL_989;
            v633 = (QuestAfterAction_o *)*v102;
            updated = System_Int32__Parse(*(System_String_o **)(v624 + 40), 0LL);
            if ( !v633 )
              goto LABEL_988;
            MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v633, 2, updated, this, v634);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
              return;
            *(UnityEngine_Vector3_o *)&v636 = GameObjectExtensions__GetLocalPosition(
                                                (UnityEngine_GameObject_o *)MapGameObject,
                                                0LL);
            if ( *(_DWORD *)(v624 + 24) <= 2u )
              goto LABEL_989;
            x = v636;
            y = v637;
            z = v638;
            goto LABEL_752;
          case 412:
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_988;
            v624 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_815;
            v642 = (QuestAfterAction_o *)*v102;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v642 )
              goto LABEL_988;
            v626 = QuestAfterAction__GetMapComponent_object_(
                     v642,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v626, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v624 + 24) <= 1u )
              goto LABEL_989;
            v643 = (QuestAfterAction_o *)*v102;
            updated = System_Int32__Parse(*(System_String_o **)(v624 + 40), 0LL);
            if ( !v643 )
              goto LABEL_988;
            v629 = updated;
            v631 = 1;
            v630 = v643;
LABEL_738:
            v644 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v630, v631, v629, this, v628);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v644, 0LL, 0LL) )
              return;
            LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v644, 0LL);
            x = LocalPosition.fields.x;
            y = LocalPosition.fields.y;
            z = LocalPosition.fields.z;
            if ( !this->fields.IsMapModel )
              goto LABEL_751;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BAF374 )
            {
              sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
              byte_4BAF374 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v645 = **(_QWORD **)(updated + 184);
            if ( !v645 )
              goto LABEL_988;
            updated = *(_QWORD *)(v645 + 264);
            if ( !updated )
              goto LABEL_988;
            v830.fields.x = x;
            v830.fields.y = y;
            v830.fields.z = z;
            v831 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v830, 0LL);
            x = v831.fields.x;
            y = v831.fields.y;
            z = v831.fields.z;
LABEL_751:
            if ( *(_DWORD *)(v624 + 24) <= 2u )
              goto LABEL_989;
LABEL_752:
            v646 = System_Single__Parse(*(System_String_o **)(v624 + 48), 0LL) * 0.001;
            if ( v646 >= 0.0 )
              v647 = v646;
            else
              v647 = 0.5;
            if ( *(_DWORD *)(v624 + 24) <= 3u )
              goto LABEL_989;
            v648 = System_Int32__Parse(*(System_String_o **)(v624 + 56), 0LL);
            if ( *(int *)(v624 + 24) >= 5 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v624 + 64), 0LL);
              if ( (int)updated >= 1 )
              {
                if ( !v626 )
                  goto LABEL_988;
                v832.fields.x = x;
                v832.fields.y = y;
                v832.fields.z = z;
                MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v626, v832, v647, v648, 0LL, 0LL);
                goto LABEL_18;
              }
            }
            v767 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            System_Action___ctor(v767, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v626 )
              goto LABEL_988;
            v768 = (MapGimmickComponent_o *)v626;
            v769 = x;
            v770 = y;
            v771 = z;
            v772 = v647;
            v773 = v648;
            v774 = v767;
            goto LABEL_979;
          default:
            if ( id != 500 )
              return;
            v409 = System_Int32__Parse(v111->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BB14A3 )
            {
              sub_1C13D24(&TerminalPramsManager_TypeInfo, v408);
              byte_4BB14A3 = 1;
            }
            v410 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v410 = TerminalPramsManager_TypeInfo;
            }
            v410->static_fields->_AfterActionFocusQuestId_k__BackingField = v409;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_988;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    &entity,
                    v409,
                    (const MethodInfo_3238670 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_815;
            updated = (__int64)entity;
            if ( !entity )
              goto LABEL_988;
            v411 = (QuestAfterAction_o *)*v102;
            updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v411 )
              goto LABEL_988;
            v412 = QuestAfterAction__GetMapComponent_object_(
                     v411,
                     0,
                     updated,
                     this,
                     (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v412, 0LL, 0LL);
            if ( (updated & 1) == 0 )
              goto LABEL_815;
            if ( !v412 )
              goto LABEL_988;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v412, 0, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BB14A4 )
            {
              sub_1C13D24(&TerminalPramsManager_TypeInfo, v413);
              byte_4BB14A4 = 1;
            }
            v414 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v414 = TerminalPramsManager_TypeInfo;
            }
            v414->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
            goto LABEL_815;
        }
      }
      updated = (__int64)v111->fields.param;
      if ( !updated )
        goto LABEL_988;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_988;
      v170 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_815;
      v171 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(_DWORD *)(v170 + 24) <= 1u )
        goto LABEL_989;
      v172 = v171;
      v173 = System_Single__Parse(*(System_String_o **)(v170 + 40), 0LL);
      if ( *(_DWORD *)(v170 + 24) <= 2u )
        goto LABEL_989;
      v174 = v173;
      v175 = System_Single__Parse(*(System_String_o **)(v170 + 48), 0LL);
      if ( *(_DWORD *)(v170 + 24) <= 3u )
        goto LABEL_989;
      v176 = v175;
      v177 = System_Single__Parse(*(System_String_o **)(v170 + 56), 0LL);
      if ( *(_DWORD *)(v170 + 24) <= 4u )
        goto LABEL_989;
      v178 = v177;
      v179 = System_Int32__Parse(*(System_String_o **)(v170 + 64), 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BAF374 )
      {
        sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
        byte_4BAF374 = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v180 = **(_QWORD **)(updated + 184);
      if ( !v180 )
        goto LABEL_988;
      updated = *(_QWORD *)(v180 + 264);
      if ( !updated )
        goto LABEL_988;
      v819.fields.y = v174;
      v819.fields.z = v176;
      v181 = v178 * 0.001;
      v819.fields.x = v172;
      *(UnityEngine_Vector3_o *)&v183 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                          (ScrTerminalMap_o *)updated,
                                          v819,
                                          0LL);
      v186 = v183;
      v187 = v184;
      v188 = v185;
      if ( v111->fields.id != 352 || *(int *)(v170 + 24) < 6 )
      {
        if ( !*v102 )
          goto LABEL_988;
        v189 = *(MapCamera_o **)(*v102 + 152);
        v190 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(
          v190,
          (Il2CppObject *)v93,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
          0LL);
        if ( !v189 )
          goto LABEL_988;
        v191 = v189;
        v192 = v186;
        v193 = v187;
        v194 = v188;
        v195 = v181;
        v196 = v179;
        goto LABEL_920;
      }
      if ( !*v102 )
        goto LABEL_988;
      v416 = *(MapCamera_o **)(*v102 + 152);
      *(_QWORD *)&v812.fields.hasValue = &v800;
      *(_QWORD *)&v812.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v800.fields.hasValue = 0LL;
      *(_QWORD *)&v800.fields.value.fields.y = 0LL;
      System_Nullable_Vector3____ctor(v812, *(UnityEngine_Vector3_o *)&v183, v182);
      if ( *(_DWORD *)(v170 + 24) <= 5u )
        goto LABEL_989;
      v417 = System_Single__Parse(*(System_String_o **)(v170 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v417, (const MethodInfo_374B620 *)Method_System_Nullable_float___ctor__);
      v418 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        v418,
        (Il2CppObject *)v93,
        Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
        0LL);
      if ( !v416 )
        goto LABEL_988;
      v817 = v800;
      v810 = size;
      v419 = v416;
      v420 = v181;
      v421 = v179;
LABEL_961:
      MapCamera__StartAutoWork(v419, v420, v817, v810, v421, v418, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v150 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v150, 0LL);
          if ( !v150 )
            goto LABEL_988;
          *(_QWORD *)(v150 + 24) = v93;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v150 + 24), v93, v151, v152, v153, v154, v155, v156);
          v157 = *(_QWORD *)(v150 + 24);
          if ( !v157 )
            goto LABEL_988;
          v158 = *(QuestAfterAction_o **)(v157 + 24);
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v158 )
            goto LABEL_988;
          v159 = QuestAfterAction__GetMapComponent_object_(
                   v158,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v150 + 16) = v159;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v150 + 16), (int64_t)v159, v160, v161, v162, v163, v164, v165);
          v166 = *(UnityEngine_Object_o **)(v150 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v166, 0LL, 0LL) )
            return;
          v167 = *(SrcSpotBasePrefab_o **)(v150 + 16);
          v168 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v168,
            (Il2CppObject *)v150,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v167 )
            goto LABEL_988;
          v169 = 2;
          goto LABEL_390;
        case 'e':
          v346 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          System_Object___ctor((Il2CppObject *)v346, 0LL);
          if ( !v346 )
            goto LABEL_988;
          *(_QWORD *)(v346 + 24) = v93;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v346 + 24), v93, v347, v348, v349, v350, v351, v352);
          v353 = *(_QWORD *)(v346 + 24);
          if ( !v353 )
            goto LABEL_988;
          v354 = *(QuestAfterAction_o **)(v353 + 24);
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v354 )
            goto LABEL_988;
          v355 = QuestAfterAction__GetMapComponent_object_(
                   v354,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v346 + 16) = v355;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v346 + 16), (int64_t)v355, v356, v357, v358, v359, v360, v361);
          v362 = *(UnityEngine_Object_o **)(v346 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v362, 0LL, 0LL) )
            return;
          v167 = *(SrcSpotBasePrefab_o **)(v346 + 16);
          v168 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v168,
            (Il2CppObject *)v346,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v167 )
            goto LABEL_988;
          v169 = 3;
LABEL_390:
          SrcSpotBasePrefab__SetState(v167, v169, v168, 0LL);
          return;
        case 'f':
          v363 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v363, 0LL);
          if ( !v363 )
            goto LABEL_988;
          *(_QWORD *)(v363 + 24) = v93;
          v370 = v363 + 24;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v363 + 24), v93, v364, v365, v366, v367, v368, v369);
          if ( !*(_QWORD *)(v363 + 24) )
            goto LABEL_988;
          v371 = *(QuestAfterAction_o **)(*(_QWORD *)(v363 + 24) + 24LL);
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v371 )
            goto LABEL_988;
          v372 = QuestAfterAction__GetMapComponent_object_(
                   v371,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v363 + 16) = v372;
          v373 = (int64_t *)(v363 + 16);
          sub_1C13CC8((PartyOrganizationUtility_o *)(v363 + 16), (int64_t)v372, v374, v375, v376, v377, v378, v379);
          v380 = *(UnityEngine_Object_o **)(v363 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v380, 0LL, 0LL) )
            return;
          v381 = *(SrcSpotBasePrefab_o **)(v363 + 16);
          v382 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v382,
            (Il2CppObject *)v363,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v381 )
            goto LABEL_988;
          SrcSpotBasePrefab__SetState(v381, 4, v382, 0LL);
          if ( !*(_QWORD *)v370 )
            goto LABEL_988;
          updated = *(_QWORD *)(*(_QWORD *)v370 + 24LL);
          if ( !updated )
            goto LABEL_988;
          v389 = *v373;
          *(_QWORD *)(updated + 184) = *v373;
          v390 = (PartyOrganizationUtility_o *)(updated + 184);
          goto LABEL_412;
        case 'g':
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_988;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_988;
          v391 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_815;
          v392 = (QuestAfterAction_o *)*v102;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v392 )
            goto LABEL_988;
          v393 = QuestAfterAction__GetMapComponent_object_(
                   v392,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v393, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v391 + 24) <= 1u )
            goto LABEL_989;
          updated = System_Int32__Parse(*(System_String_o **)(v391 + 40), 0LL);
          if ( !v393 )
            goto LABEL_988;
          LODWORD(v393[14].klass) = updated;
          v394 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(v394, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v393, 5, v394, 0LL);
          updated = *v102;
          if ( !*v102 )
            goto LABEL_988;
          *(_QWORD *)(updated + 184) = v393;
          v390 = (PartyOrganizationUtility_o *)(updated + 184);
          v389 = (int64_t)v393;
LABEL_412:
          sub_1C13CC8(v390, v389, v383, v384, v385, v386, v387, v388);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v395 = (QuestAfterAction_o *)*v102;
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v395 )
            goto LABEL_988;
          v396 = QuestAfterAction__GetMapComponent_object_(
                   v395,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v396, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v396 )
            goto LABEL_988;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v396, 0, 0LL);
          monitor = v396[14].monitor;
          if ( !monitor )
            goto LABEL_988;
          monitor[5] = 0;
          v398 = (SrcSpotBasePrefab_o *)v396;
          v399 = 0;
          goto LABEL_435;
        case 'o':
          v400 = (QuestAfterAction_o *)*v102;
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v400 )
            goto LABEL_988;
          v401 = QuestAfterAction__GetMapComponent_object_(
                   v400,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v401, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v401 )
            goto LABEL_988;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v401, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v401, 0, 0LL);
          v402 = v401[14].monitor;
          if ( !v402 )
            goto LABEL_988;
          v402[5] = 2;
          goto LABEL_434;
        case 'p':
          v403 = (QuestAfterAction_o *)*v102;
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v403 )
            goto LABEL_988;
          v401 = QuestAfterAction__GetMapComponent_object_(
                   v403,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v401, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v401 )
            goto LABEL_988;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v401, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v401, 1, 0LL);
          v404 = v401[14].monitor;
          if ( !v404 )
            goto LABEL_988;
          v404[5] = 1;
LABEL_434:
          v399 = 1;
          v398 = (SrcSpotBasePrefab_o *)v401;
LABEL_435:
          SrcSpotBasePrefab__SetTouchType(v398, v399, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_988;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_988;
          v405 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_815;
          v406 = (QuestAfterAction_o *)*v102;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v406 )
            goto LABEL_988;
          v407 = QuestAfterAction__GetMapComponent_object_(
                   v406,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v407, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v405 + 24) <= 1u )
            goto LABEL_989;
          updated = System_Int32__Parse(*(System_String_o **)(v405 + 40), 0LL);
          if ( !v407 )
            goto LABEL_988;
          LODWORD(v407[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v407, 1, 0LL);
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
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_988;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_988;
        v131 = *(_QWORD *)(updated + 24);
        v132 = updated;
        if ( (int)v131 <= 0 )
          goto LABEL_815;
        if ( (int)v131 > 2 )
        {
          v486 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v131 = *(_QWORD *)(v132 + 24);
          v133 = v486 * 0.001;
        }
        else
        {
          v133 = 0.5;
        }
        sec = v133;
        if ( (int)v131 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v132 + 40), 0LL);
          v131 = *(_QWORD *)(v132 + 24);
          v329 = updated;
        }
        else
        {
          v329 = 15;
        }
        if ( !(_DWORD)v131 )
          goto LABEL_989;
        v489 = (QuestAfterAction_o *)*v102;
        updated = System_Int32__Parse(*(System_String_o **)(v132 + 32), 0LL);
        if ( !v489 )
          goto LABEL_988;
        v491 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v489, 0, updated, this, v490);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v491, 0LL, 0LL) )
          return;
        v821 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v491, 0LL);
        v492 = v821.fields.x;
        v493 = v821.fields.y;
        v494 = v821.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_571;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BAF374 )
        {
          sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
          byte_4BAF374 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v495 = **(_QWORD **)(updated + 184);
        if ( !v495 )
          goto LABEL_988;
        updated = *(_QWORD *)(v495 + 264);
        if ( !updated )
          goto LABEL_988;
        v822.fields.x = v492;
        v822.fields.y = v493;
        v822.fields.z = v494;
        v823 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v822, 0LL);
        v492 = v823.fields.x;
        v493 = v823.fields.y;
        v494 = v823.fields.z;
LABEL_571:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_895;
        if ( !*(_DWORD *)(v132 + 24) )
          goto LABEL_989;
        v497 = *(System_String_o **)(v132 + 32);
        updated = System_String__op_Equality(v497, (System_String_o *)StringLiteral_1402/*"1053912:100:0"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v493 = v493 + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v497, (System_String_o *)StringLiteral_1477/*"3.7.8"*/, 0LL);
          if ( (updated & 1) != 0 )
            v493 = v493 + -50.0;
        }
LABEL_895:
        v512 = *(_DWORD *)(v132 + 24);
        if ( v111->fields.id == 305 )
        {
LABEL_896:
          if ( v512 < 4 )
            goto LABEL_897;
          if ( v512 == 4 )
          {
            if ( !*v102 )
              goto LABEL_988;
            v756 = *(MapCamera_o **)(*v102 + 152);
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v132 + 64), 0LL);
            if ( !*v102 )
              goto LABEL_988;
            v756 = *(MapCamera_o **)(*v102 + 152);
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v813.fields.hasValue = &v800;
              v759 = v492;
              v760 = v493;
              *(_QWORD *)&v813.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v761 = v494;
              v800 = (System_Nullable_Vector3__o)0LL;
LABEL_952:
              System_Nullable_Vector3____ctor(v813, *(UnityEngine_Vector3_o *)&v759, v496);
              if ( *(_DWORD *)(v132 + 24) <= 3u )
                goto LABEL_989;
              v777 = System_Single__Parse(*(System_String_o **)(v132 + 56), 0LL);
              v806 = (System_Nullable_float__o)&size;
              size = 0LL;
              System_Nullable_float____ctor(
                v806,
                v777,
                (const MethodInfo_374B620 *)Method_System_Nullable_float___ctor__);
              if ( !v756 )
                goto LABEL_988;
              v818 = v800;
              v811 = size;
              v778 = sec;
              v779 = v756;
              goto LABEL_955;
            }
          }
          *(_QWORD *)&v814.fields.hasValue = &v800;
          v762 = v492;
          v763 = v493;
          *(_QWORD *)&v814.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v764 = v494;
          v800 = (System_Nullable_Vector3__o)0LL;
LABEL_957:
          System_Nullable_Vector3____ctor(v814, *(UnityEngine_Vector3_o *)&v762, v496);
          if ( *(_DWORD *)(v132 + 24) <= 3u )
            goto LABEL_989;
          v780 = System_Single__Parse(*(System_String_o **)(v132 + 56), 0LL);
          v807 = (System_Nullable_float__o)&size;
          size = 0LL;
          System_Nullable_float____ctor(v807, v780, (const MethodInfo_374B620 *)Method_System_Nullable_float___ctor__);
          v418 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(v418, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v756 )
            goto LABEL_988;
          v817 = v800;
          v810 = size;
          v420 = sec;
          v419 = v756;
          goto LABEL_960;
        }
LABEL_612:
        if ( v512 < 4 )
        {
LABEL_897:
          if ( !*v102 )
            goto LABEL_988;
          v514 = *(MapCamera_o **)(*v102 + 152);
          goto LABEL_899;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v132 + 56), 0LL);
        v513 = *v102;
        if ( !*v102 )
          goto LABEL_988;
        v514 = *(MapCamera_o **)(v513 + 152);
        if ( (int)updated < 1 )
        {
LABEL_899:
          v190 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(v190, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v514 )
            goto LABEL_988;
          v191 = v514;
          v192 = v492;
          v193 = v493;
          v194 = v494;
LABEL_918:
          v195 = sec;
LABEL_919:
          v196 = v329;
LABEL_920:
          MapCamera__StartAutoMove(v191, *(UnityEngine_Vector3_o *)&v192, v195, v196, v190, 0LL);
          return;
        }
        if ( !v514 )
          goto LABEL_988;
        v515 = *(MapCamera_o **)(v513 + 152);
        v516 = v492;
        v517 = v493;
        v518 = v494;
        goto LABEL_929;
      case 301:
      case 306:
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_988;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_988;
        v322 = *(_QWORD *)(updated + 24);
        v132 = updated;
        if ( (int)v322 <= 0 )
          goto LABEL_815;
        if ( (int)v322 > 2 )
        {
          v487 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v322 = *(_QWORD *)(v132 + 24);
          v323 = v487 * 0.001;
        }
        else
        {
          v323 = 0.5;
        }
        sec = v323;
        if ( (int)v322 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v132 + 40), 0LL);
          v322 = *(_QWORD *)(v132 + 24);
          v329 = updated;
        }
        else
        {
          v329 = 15;
        }
        if ( !(_DWORD)v322 )
          goto LABEL_989;
        v498 = (QuestAfterAction_o *)*v102;
        updated = System_Int32__Parse(*(System_String_o **)(v132 + 32), 0LL);
        if ( !v498 )
          goto LABEL_988;
        v500 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v498, 1, updated, this, v499);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v500, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v500 )
            goto LABEL_988;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v500,
                               (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_988;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v501 = Position.fields.x;
          v502 = Position.fields.y;
          v503 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BAF374 )
          {
            sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
            byte_4BAF374 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v504 = **(_QWORD **)(updated + 184);
          if ( !v504 )
            goto LABEL_988;
          updated = *(_QWORD *)(v504 + 264);
          if ( !updated )
            goto LABEL_988;
          v825.fields.x = v501;
          v825.fields.y = v502;
          v825.fields.z = v503;
          *(UnityEngine_Vector3_o *)&v505 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v825,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v505 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v500,
                                              0LL);
        }
        v717 = v505;
        v718 = v506;
        v719 = v507;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_907;
        if ( !*(_DWORD *)(v132 + 24) )
          goto LABEL_989;
        v720 = *(System_String_o **)(v132 + 32);
        updated = System_String__op_Equality(v720, (System_String_o *)StringLiteral_1402/*"1053912:100:0"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v718 = v718 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v720, (System_String_o *)StringLiteral_1478/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            v718 = v718 + 45.0;
        }
LABEL_907:
        v757 = *(_DWORD *)(v132 + 24);
        if ( v111->fields.id == 306 )
        {
          if ( v757 >= 4 )
          {
            if ( v757 == 4 )
            {
              if ( !*v102 )
                goto LABEL_988;
              v756 = *(MapCamera_o **)(*v102 + 152);
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v132 + 64), 0LL);
              if ( !*v102 )
                goto LABEL_988;
              v756 = *(MapCamera_o **)(*v102 + 152);
              if ( (int)updated >= 1 )
              {
                v800 = (System_Nullable_Vector3__o)0LL;
                *(_QWORD *)&v813.fields.hasValue = &v800;
                v759 = v717;
                *(_QWORD *)&v813.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v760 = v718;
                v761 = v719;
                goto LABEL_952;
              }
            }
            v800 = (System_Nullable_Vector3__o)0LL;
            *(_QWORD *)&v814.fields.hasValue = &v800;
            v762 = v717;
            *(_QWORD *)&v814.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v763 = v718;
            v764 = v719;
            goto LABEL_957;
          }
          goto LABEL_914;
        }
        if ( v757 < 4 )
        {
LABEL_914:
          if ( !*v102 )
            goto LABEL_988;
          v758 = *(MapCamera_o **)(*v102 + 152);
LABEL_916:
          v190 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(v190, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v758 )
            goto LABEL_988;
          v191 = v758;
          v192 = v717;
          v193 = v718;
          v194 = v719;
          goto LABEL_918;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v132 + 56), 0LL);
        v765 = *v102;
        if ( !*v102 )
          goto LABEL_988;
        v758 = *(MapCamera_o **)(v765 + 152);
        if ( (int)updated < 1 )
          goto LABEL_916;
        if ( !v758 )
          goto LABEL_988;
        v515 = *(MapCamera_o **)(v765 + 152);
        v516 = v717;
        v517 = v718;
        v518 = v719;
LABEL_929:
        v766 = sec;
        goto LABEL_930;
      case 302:
      case 307:
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_988;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_988;
        v324 = *(_QWORD *)(updated + 24);
        v132 = updated;
        if ( (int)v324 <= 0 )
          goto LABEL_815;
        if ( (int)v324 > 2 )
        {
          v488 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v324 = *(_QWORD *)(v132 + 24);
          v325 = v488 * 0.001;
        }
        else
        {
          v325 = 0.5;
        }
        sec = v325;
        if ( (int)v324 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v132 + 40), 0LL);
          v324 = *(_QWORD *)(v132 + 24);
          v329 = updated;
        }
        else
        {
          v329 = 15;
        }
        if ( !(_DWORD)v324 )
          goto LABEL_989;
        v508 = (QuestAfterAction_o *)*v102;
        updated = System_Int32__Parse(*(System_String_o **)(v132 + 32), 0LL);
        if ( !v508 )
          goto LABEL_988;
        v510 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v508, 2, updated, this, v509);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v510, 0LL, 0LL) )
          return;
        v826 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v510, 0LL);
        v492 = v826.fields.x;
        v493 = v826.fields.y;
        v494 = v826.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_611;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BAF374 )
        {
          sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
          byte_4BAF374 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v511 = **(_QWORD **)(updated + 184);
        if ( !v511 )
          goto LABEL_988;
        updated = *(_QWORD *)(v511 + 264);
        if ( !updated )
          goto LABEL_988;
        v827.fields.x = v492;
        v827.fields.y = v493;
        v827.fields.z = v494;
        v828 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v827, 0LL);
        v492 = v828.fields.x;
        v493 = v828.fields.y;
        v494 = v828.fields.z;
LABEL_611:
        v512 = *(_DWORD *)(v132 + 24);
        if ( v111->fields.id != 307 )
          goto LABEL_612;
        goto LABEL_896;
      case 303:
      case 308:
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_988;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_988;
        v326 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_815;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB14A2 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v95);
          byte_4BB14A2 = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          goto LABEL_815;
        if ( *(_DWORD *)(v326 + 24) <= 2u )
          goto LABEL_989;
        v327 = System_Single__Parse(*(System_String_o **)(v326 + 48), 0LL) * 0.001;
        v328 = v327 >= 0.0 ? v327 : 0.5;
        if ( *(_DWORD *)(v326 + 24) <= 3u )
          goto LABEL_989;
        v329 = System_Int32__Parse(*(System_String_o **)(v326 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BAF374 )
        {
          sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
          byte_4BAF374 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v330 = **(_QWORD **)(updated + 184);
        if ( !v330 )
          goto LABEL_988;
        if ( !*(_DWORD *)(v326 + 24) )
          goto LABEL_989;
        v331 = *(ScrTerminalMap_o **)(v330 + 264);
        v332 = System_Single__Parse(*(System_String_o **)(v326 + 32), 0LL);
        if ( *(_DWORD *)(v326 + 24) <= 1u )
          goto LABEL_989;
        v333 = v332;
        v334 = System_Single__Parse(*(System_String_o **)(v326 + 40), 0LL);
        if ( !v331 )
          goto LABEL_988;
        v820 = ScrTerminalMap__LocalPosFromCoord(v331, v333, v334, 0.0, 0.0, 0LL);
        v336 = *(_DWORD *)(v326 + 24);
        v337 = v820.fields.x;
        v338 = v820.fields.y;
        v339 = v820.fields.z;
        if ( v111->fields.id == 308 )
        {
          if ( v336 >= 5 )
          {
            if ( v336 == 5 )
            {
              if ( !*v102 )
                goto LABEL_988;
              v340 = *(MapCamera_o **)(*v102 + 152);
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v326 + 72), 0LL);
              if ( !*v102 )
                goto LABEL_988;
              v340 = *(MapCamera_o **)(*v102 + 152);
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v815.fields.hasValue = &v800;
                v834.fields.x = v337;
                v834.fields.y = v338;
                *(_QWORD *)&v815.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v834.fields.z = v339;
                v800 = (System_Nullable_Vector3__o)0LL;
                System_Nullable_Vector3____ctor(v815, v834, v335);
                if ( *(_DWORD *)(v326 + 24) <= 4u )
                  goto LABEL_989;
                v795 = System_Single__Parse(*(System_String_o **)(v326 + 64), 0LL);
                v808 = (System_Nullable_float__o)&size;
                size = 0LL;
                System_Nullable_float____ctor(
                  v808,
                  v795,
                  (const MethodInfo_374B620 *)Method_System_Nullable_float___ctor__);
                if ( !v340 )
                  goto LABEL_988;
                v818 = v800;
                v811 = size;
                v779 = v340;
                v778 = v328;
LABEL_955:
                MapCamera__StartAutoWork(v779, v778, v818, v811, v329, 0LL, 0LL);
                goto LABEL_815;
              }
            }
            *(_QWORD *)&v816.fields.hasValue = &v800;
            v835.fields.x = v337;
            v835.fields.y = v338;
            *(_QWORD *)&v816.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v835.fields.z = v339;
            v800 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v816, v835, v335);
            if ( *(_DWORD *)(v326 + 24) <= 4u )
              goto LABEL_989;
            v796 = System_Single__Parse(*(System_String_o **)(v326 + 64), 0LL);
            v809 = (System_Nullable_float__o)&size;
            size = 0LL;
            System_Nullable_float____ctor(v809, v796, (const MethodInfo_374B620 *)Method_System_Nullable_float___ctor__);
            v418 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            System_Action___ctor(v418, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v340 )
              goto LABEL_988;
            v817 = v800;
            v810 = size;
            v419 = v340;
            v420 = v328;
LABEL_960:
            v421 = v329;
            goto LABEL_961;
          }
        }
        else if ( v336 >= 5 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v326 + 64), 0LL);
          v776 = *v102;
          if ( !*v102 )
            goto LABEL_988;
          v755 = *(MapCamera_o **)(v776 + 152);
          if ( (int)updated >= 1 )
          {
            if ( !v755 )
              goto LABEL_988;
            v515 = *(MapCamera_o **)(v776 + 152);
            v516 = v337;
            v517 = v338;
            v518 = v339;
            v766 = v328;
LABEL_930:
            MapCamera__StartAutoMove(v515, *(UnityEngine_Vector3_o *)&v516, v766, v329, 0LL, 0LL);
            goto LABEL_815;
          }
LABEL_891:
          v190 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(v190, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v755 )
            goto LABEL_988;
          v191 = v755;
          v192 = v337;
          v193 = v338;
          v194 = v339;
          v195 = v328;
          goto LABEL_919;
        }
        if ( !*v102 )
          goto LABEL_988;
        v755 = *(MapCamera_o **)(*v102 + 152);
        goto LABEL_891;
      case 304:
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_988;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_988;
        v422 = *(_DWORD *)(updated + 24);
        v423 = updated;
        if ( v422 <= 1 )
          goto LABEL_815;
        v424 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v423 + 24) <= 1u )
          goto LABEL_989;
        v425 = v424;
        v426 = System_Single__Parse(*(System_String_o **)(v423 + 40), 0LL);
        if ( !*v102 )
          goto LABEL_988;
        v427 = *(MapCamera_o **)(*v102 + 152);
        v428 = v426 * 0.001;
        if ( v428 >= 0.0 )
          v429 = v428;
        else
          v429 = 0.5;
        if ( v422 < 3 )
        {
          v430 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v423 + 24) <= 2u )
            goto LABEL_989;
          v430 = System_Int32__Parse(*(System_String_o **)(v423 + 48), 0LL);
        }
        v716 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(
          v716,
          (Il2CppObject *)v93,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0LL);
        if ( !v427 )
          goto LABEL_988;
        MapCamera__StartAutoZoom(v427, v425, v429, v430, v716, 0LL);
        return;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v197 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              System_Object___ctor((Il2CppObject *)v197, 0LL);
              if ( !v197 )
                goto LABEL_988;
              *(_QWORD *)(v197 + 24) = v93;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v197 + 24), v93, v198, v199, v200, v201, v202, v203);
              v204 = *(_QWORD *)(v197 + 24);
              if ( !v204 )
                goto LABEL_988;
              v205 = *(QuestAfterAction_o **)(v204 + 24);
              updated = System_Int32__Parse(v111->fields.param, 0LL);
              if ( !v205 )
                goto LABEL_988;
              v206 = QuestAfterAction__GetMapComponent_object_(
                       v205,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v197 + 16) = v206;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v197 + 16), (int64_t)v206, v207, v208, v209, v210, v211, v212);
              v213 = *(UnityEngine_Object_o **)(v197 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v213, 0LL, 0LL) )
              {
                v214 = *(ModelLineComponent_o **)(v197 + 16);
                v215 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                System_Action___ctor(
                  v215,
                  (Il2CppObject *)v197,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v214 )
                  goto LABEL_988;
                v217 = 2;
                goto LABEL_506;
              }
            }
            else
            {
              v649 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              System_Object___ctor((Il2CppObject *)v649, 0LL);
              if ( !v649 )
                goto LABEL_988;
              *(_QWORD *)(v649 + 24) = v93;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v649 + 24), v93, v650, v651, v652, v653, v654, v655);
              v656 = *(_QWORD *)(v649 + 24);
              if ( !v656 )
                goto LABEL_988;
              v657 = *(QuestAfterAction_o **)(v656 + 24);
              updated = System_Int32__Parse(v111->fields.param, 0LL);
              if ( !v657 )
                goto LABEL_988;
              v658 = QuestAfterAction__GetMapComponent_object_(
                       v657,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v649 + 16) = v658;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v649 + 16), (int64_t)v658, v659, v660, v661, v662, v663, v664);
              v665 = *(UnityEngine_Object_o **)(v649 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v665, 0LL, 0LL) )
              {
                v666 = *(srcLineSprite_o **)(v649 + 16);
                v667 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                System_Action___ctor(
                  v667,
                  (Il2CppObject *)v649,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v666 )
                  goto LABEL_988;
                v668 = 2;
                goto LABEL_784;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v431 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              System_Object___ctor((Il2CppObject *)v431, 0LL);
              if ( !v431 )
                goto LABEL_988;
              *(_QWORD *)(v431 + 24) = v93;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v431 + 24), v93, v432, v433, v434, v435, v436, v437);
              v438 = *(_QWORD *)(v431 + 24);
              if ( !v438 )
                goto LABEL_988;
              v439 = *(QuestAfterAction_o **)(v438 + 24);
              updated = System_Int32__Parse(v111->fields.param, 0LL);
              if ( !v439 )
                goto LABEL_988;
              v440 = QuestAfterAction__GetMapComponent_object_(
                       v439,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v431 + 16) = v440;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v431 + 16), (int64_t)v440, v441, v442, v443, v444, v445, v446);
              v447 = *(UnityEngine_Object_o **)(v431 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v447, 0LL, 0LL) )
              {
                v214 = *(ModelLineComponent_o **)(v431 + 16);
                v215 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                System_Action___ctor(
                  v215,
                  (Il2CppObject *)v431,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v214 )
                  goto LABEL_988;
                v217 = 3;
                goto LABEL_506;
              }
            }
            else
            {
              v669 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              System_Object___ctor((Il2CppObject *)v669, 0LL);
              if ( !v669 )
                goto LABEL_988;
              *(_QWORD *)(v669 + 24) = v93;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v669 + 24), v93, v670, v671, v672, v673, v674, v675);
              v676 = *(_QWORD *)(v669 + 24);
              if ( !v676 )
                goto LABEL_988;
              v677 = *(QuestAfterAction_o **)(v676 + 24);
              updated = System_Int32__Parse(v111->fields.param, 0LL);
              if ( !v677 )
                goto LABEL_988;
              v678 = QuestAfterAction__GetMapComponent_object_(
                       v677,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v669 + 16) = v678;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v669 + 16), (int64_t)v678, v679, v680, v681, v682, v683, v684);
              v685 = *(UnityEngine_Object_o **)(v669 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v685, 0LL, 0LL) )
              {
                v666 = *(srcLineSprite_o **)(v669 + 16);
                v667 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                System_Action___ctor(
                  v667,
                  (Il2CppObject *)v669,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v666 )
                  goto LABEL_988;
                v668 = 3;
                goto LABEL_784;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v448 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              System_Object___ctor((Il2CppObject *)v448, 0LL);
              if ( !v448 )
                goto LABEL_988;
              *(_QWORD *)(v448 + 24) = v93;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v448 + 24), v93, v449, v450, v451, v452, v453, v454);
              v455 = *(_QWORD *)(v448 + 24);
              if ( !v455 )
                goto LABEL_988;
              v456 = *(QuestAfterAction_o **)(v455 + 24);
              updated = System_Int32__Parse(v111->fields.param, 0LL);
              if ( !v456 )
                goto LABEL_988;
              v457 = QuestAfterAction__GetMapComponent_object_(
                       v456,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v448 + 16) = v457;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v448 + 16), (int64_t)v457, v458, v459, v460, v461, v462, v463);
              v464 = *(UnityEngine_Object_o **)(v448 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v464, 0LL, 0LL) )
              {
                v214 = *(ModelLineComponent_o **)(v448 + 16);
                v215 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                System_Action___ctor(
                  v215,
                  (Il2CppObject *)v448,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v214 )
                  goto LABEL_988;
                v217 = 4;
LABEL_506:
                ModelLineComponent__SetState(v214, v217, v215, v216);
              }
            }
            else
            {
              v686 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              System_Object___ctor((Il2CppObject *)v686, 0LL);
              if ( !v686 )
                goto LABEL_988;
              *(_QWORD *)(v686 + 24) = v93;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v686 + 24), v93, v687, v688, v689, v690, v691, v692);
              v693 = *(_QWORD *)(v686 + 24);
              if ( !v693 )
                goto LABEL_988;
              v694 = *(QuestAfterAction_o **)(v693 + 24);
              updated = System_Int32__Parse(v111->fields.param, 0LL);
              if ( !v694 )
                goto LABEL_988;
              v695 = QuestAfterAction__GetMapComponent_object_(
                       v694,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v686 + 16) = v695;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v686 + 16), (int64_t)v695, v696, v697, v698, v699, v700, v701);
              v702 = *(UnityEngine_Object_o **)(v686 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v702, 0LL, 0LL) )
              {
                v666 = *(srcLineSprite_o **)(v686 + 16);
                v667 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                System_Action___ctor(
                  v667,
                  (Il2CppObject *)v686,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v666 )
                  goto LABEL_988;
                v668 = 4;
LABEL_784:
                srcLineSprite__SetState(v666, v668, v667, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v466 = (QuestAfterAction_o *)*v102;
            updated = System_Int32__Parse(v111->fields.param, 0LL);
            if ( !v466 )
              goto LABEL_988;
            if ( IsMapModel )
            {
              v467 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v466,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v467, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v467 )
                goto LABEL_988;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34802532((ModelLineComponent_o *)v467, 0, 0.0, v468);
              v469 = v467[3].klass;
              if ( !v469 )
                goto LABEL_988;
            }
            else
            {
              v703 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v466,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v703, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v703 )
                goto LABEL_988;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v703, 0, 0LL);
              v469 = v703[5].monitor;
              if ( !v469 )
                goto LABEL_988;
            }
            goto LABEL_858;
          case 204:
            v470 = this->fields.IsMapModel;
            v471 = (QuestAfterAction_o *)*v102;
            updated = System_Int32__Parse(v111->fields.param, 0LL);
            if ( !v471 )
              goto LABEL_988;
            if ( v470 )
            {
              v472 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v471,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v472, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v472 )
                goto LABEL_988;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34802532((ModelLineComponent_o *)v472, 1, 0.0, v473);
              ModelLineComponent__SetQuestAfterActionColorAnim_34803008((ModelLineComponent_o *)v472, 0, 0.0, v474);
              v475 = v472[3].klass;
              if ( !v475 )
                goto LABEL_988;
            }
            else
            {
              v704 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v471,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v704, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v704 )
                goto LABEL_988;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v704, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v704, 0, 0LL);
              v475 = v704[5].monitor;
              if ( !v475 )
                goto LABEL_988;
            }
            v705 = 2;
            goto LABEL_803;
          case 205:
            v476 = this->fields.IsMapModel;
            v477 = (QuestAfterAction_o *)*v102;
            updated = System_Int32__Parse(v111->fields.param, 0LL);
            if ( !v477 )
              goto LABEL_988;
            if ( v476 )
            {
              v478 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v477,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v478, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v478 )
                goto LABEL_988;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34802532((ModelLineComponent_o *)v478, 1, 0.0, v479);
              ModelLineComponent__SetQuestAfterActionColorAnim_34803008((ModelLineComponent_o *)v478, 1, 0.0, v480);
              v475 = v478[3].klass;
              if ( !v475 )
                goto LABEL_988;
            }
            else
            {
              v706 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v477,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3021250 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v706, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v706 )
                goto LABEL_988;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v706, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v706, 1, 0LL);
              v475 = v706[5].monitor;
              if ( !v475 )
                goto LABEL_988;
            }
            v705 = 1;
LABEL_803:
            v475[4] = v705;
            goto LABEL_18;
          default:
            if ( id != 350 )
              return;
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_988;
            v341 = updated;
            if ( *(int *)(updated + 24) <= 0 )
              goto LABEL_815;
            v342 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v342 < 1 )
              goto LABEL_815;
            v343 = v342;
            v344 = 0.5;
            if ( *(int *)(v341 + 24) > 1 )
            {
              v345 = System_Int32__Parse(*(System_String_o **)(v341 + 40), 0LL);
              if ( *(int *)(v341 + 24) >= 3 )
                v344 = System_Single__Parse(*(System_String_o **)(v341 + 48), 0LL) * 0.001;
            }
            else
            {
              v345 = 15;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BAF374 )
            {
              sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
              byte_4BAF374 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v752 = **(_QWORD **)(updated + 184);
            if ( !v752 )
              goto LABEL_988;
            v753 = *(ScrTerminalMap_o **)(v752 + 264);
            v754 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            System_Action___ctor(
              v754,
              (Il2CppObject *)v93,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
              0LL);
            if ( !v753 )
              goto LABEL_988;
            ScrTerminalMap__RequestMapMove_35559588(v753, v343, v344, v345, v754, 0LL);
            return;
        }
    }
  }
  if ( id <= 700 )
  {
    if ( id > 550 )
    {
      switch ( id )
      {
        case 600:
          v126 = (System_String_o *)StringLiteral_1/*""*/;
          v127 = System_String__Concat_62967944((System_String_o *)StringLiteral_11014/*"QMap_Cap{0:D4}_{1:D4}_Atlas"*/, v111->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v128 = LocalizationManager__Get(v127, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v130 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v130,
            (Il2CppObject *)v93,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
            0LL);
          if ( !Instance )
            goto LABEL_988;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v126,
            v128,
            v130,
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
          v272 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1C13DCC(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_988;
          v279 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v280 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1C13CC8((PartyOrganizationUtility_o *)(updated + 32), v280, v273, v274, v275, v276, v277, v278);
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_988;
          updated = (__int64)System_String__Split_62994176((System_String_o *)updated, v279, 0, 0LL);
          if ( !updated )
            goto LABEL_988;
          v281 = *(_DWORD *)(updated + 24);
          if ( v281 <= 0 )
            goto LABEL_815;
          v282 = *(System_String_o **)(updated + 32);
          if ( v281 == 1 )
          {
            v283 = *(System_String_o **)(updated + 32);
            v282 = v272;
          }
          else
          {
            v283 = *(System_String_o **)(updated + 40);
          }
          v484 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v485 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v485,
            (Il2CppObject *)v93,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
            0LL);
          if ( !v484 )
            goto LABEL_988;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)v484,
            v282,
            v283,
            v485,
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
          v284 = (System_String_o *)StringLiteral_1/*""*/;
          v285 = System_String__Concat_62967944((System_String_o *)StringLiteral_11014/*"QMap_Cap{0:D4}_{1:D4}_Atlas"*/, v111->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v286 = LocalizationManager__Get(v285, 0LL);
          v287 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v288 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v288,
            (Il2CppObject *)v93,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
            0LL);
          if ( !v287 )
            goto LABEL_988;
          v289 = "/Applications/Unity/Hub/Editor/2022.3.28f1/Unity.app/Contents/il2cpp/libil2cpp/icalls/mscorlib/System.R"
                 "untime.Remoting.Proxies/RealProxy.cpp(27) : Unsupported internal call for IL2CPP:RealProxy::InternalGet"
                 "ProxyType - System.Runtime.Remoting is not supported."
               + 231;
          onClickOkSeKind = 0;
          goto LABEL_545;
        case 603:
          v290 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1C13DCC(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_988;
          v297 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v298 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1C13CC8((PartyOrganizationUtility_o *)(updated + 32), v298, v291, v292, v293, v294, v295, v296);
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_988;
          updated = (__int64)System_String__Split_62994176((System_String_o *)updated, v297, 0, 0LL);
          if ( !updated )
            goto LABEL_988;
          v299 = *(_DWORD *)(updated + 24);
          if ( v299 <= 0 )
            goto LABEL_815;
          v284 = *(System_String_o **)(updated + 32);
          if ( v299 == 1 )
          {
            v286 = *(System_String_o **)(updated + 32);
            v284 = v290;
          }
          else
          {
            v286 = *(System_String_o **)(updated + 40);
          }
          v287 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v288 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v288,
            (Il2CppObject *)v93,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( !v287 )
            goto LABEL_988;
          v289 = "e.Remoting is not supported.";
          onClickOkSeKind = 1;
LABEL_545:
          CommonUI__OpenNotificationDialog_31071784(
            (CommonUI_o *)v287,
            v284,
            v286,
            v288,
            40.0,
            *((float *)v289 + 357),
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
          v300 = (System_String_o *)StringLiteral_1/*""*/;
          v301 = System_String__Concat_62967944((System_String_o *)StringLiteral_11014/*"QMap_Cap{0:D4}_{1:D4}_Atlas"*/, v111->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v302 = LocalizationManager__Get(v301, 0LL);
          v303 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v304 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v304,
            (Il2CppObject *)v93,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
            0LL);
          if ( !v303 )
            goto LABEL_988;
          CommonUI__OpenNotificationDialog_31071784(
            (CommonUI_o *)v303,
            v300,
            v302,
            v304,
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
          if ( id == 560 )
          {
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_988;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_988;
            v305 = *(_QWORD *)(updated + 24);
            if ( v305 )
            {
              if ( !(_DWORD)v305 )
                break;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v307 = *v102;
              if ( !*v102 )
                goto LABEL_988;
              v308 = *(QuestAfterAction_TitleInfoControlCallback_o **)(v307 + 40);
              if ( (int)updated >= 1 )
              {
                if ( !v308 )
                  goto LABEL_988;
                QuestAfterAction_TitleInfoControlCallback__Start(
                  *(QuestAfterAction_TitleInfoControlCallback_o **)(v307 + 40),
                  0LL,
                  v306);
                goto LABEL_18;
              }
            }
            else
            {
              if ( !*v102 )
                goto LABEL_988;
              v308 = *(QuestAfterAction_TitleInfoControlCallback_o **)(*v102 + 40);
            }
            v481 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            System_Action___ctor(v481, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v308 )
              goto LABEL_988;
            QuestAfterAction_TitleInfoControlCallback__Start(v308, v481, v482);
            return;
          }
          if ( id != 700 )
            return;
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_988;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_988;
          v218 = updated;
          if ( *(_DWORD *)(updated + 24) )
          {
            v219 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( *(int *)(v218 + 24) >= 2 )
              v220 = System_Int32__Parse(*(System_String_o **)(v218 + 40), 0LL) + 1;
            else
              v220 = 0;
            v415 = (SceneJumpInfo_o *)sub_1C13F70(SceneJumpInfo_TypeInfo);
            SceneJumpInfo___ctor_39818088(v415, (System_String_o *)StringLiteral_1/*""*/, v219, v220, 0LL);
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !updated )
              goto LABEL_988;
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v415, 0LL);
            goto LABEL_815;
          }
          break;
      }
LABEL_989:
      sub_1C13F88(updated, v95);
    }
    if ( id == 530 )
    {
      v244 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
      System_Object___ctor((Il2CppObject *)v244, 0LL);
      if ( !v244 )
        goto LABEL_988;
      *(_QWORD *)(v244 + 24) = v93;
      v251 = v244 + 24;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v244 + 24), v93, v245, v246, v247, v248, v249, v250);
      v252 = System_Int32__Parse(v111->fields.param, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_988;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_988;
      v253 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v252,
               (const MethodInfo_3238624 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      *(_QWORD *)(v244 + 16) = v253;
      v254 = (__int64 *)(v244 + 16);
      sub_1C13CC8((PartyOrganizationUtility_o *)(v244 + 16), (int64_t)v253, v255, v256, v257, v258, v259, v260);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_988;
      updated = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)updated, v252, 0LL);
      if ( !updated )
        goto LABEL_988;
      v262 = updated;
      if ( *(_DWORD *)(updated + 32) == 1 )
      {
        updated = *v254;
        if ( !*v254 )
          goto LABEL_988;
        if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2LL, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BB1251 )
          {
            sub_1C13D24(&TerminalPramsManager_TypeInfo, v95);
            byte_4BB1251 = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v252;
          v263 = *(_DWORD *)(v262 + 44);
          if ( !byte_4BB1255 )
          {
            sub_1C13D24(&TerminalPramsManager_TypeInfo, v95);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4BB1255 = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v263;
          if ( !*(_QWORD *)v251 )
            goto LABEL_988;
          v264 = *(_QWORD *)(*(_QWORD *)v251 + 24LL);
          if ( !v264 )
            goto LABEL_988;
          *(_BYTE *)(v264 + 195) = 1;
          v265 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v265,
            (Il2CppObject *)v244,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Request_object = NetworkManager__getRequest_object_(
                             v265,
                             (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
          if ( !byte_4BAF44D )
          {
            sub_1C13D24(&TerminalPramsManager_TypeInfo, v95);
            byte_4BAF44D = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          v267 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
          if ( !byte_4BAF44C )
          {
            sub_1C13D24(&TerminalPramsManager_TypeInfo, v95);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4BAF44C = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          if ( !Request_object )
            goto LABEL_988;
          BattleSetupScenarioRequest__beginRequest(
            (BattleSetupScenarioRequest_o *)Request_object,
            v267,
            *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
            0LL);
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v261);
      }
      return;
    }
    if ( id != 540 )
    {
      if ( id == 550 )
        goto LABEL_18;
      return;
    }
    updated = (__int64)v111->fields.param;
    if ( !updated )
      goto LABEL_988;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
    if ( !updated )
      goto LABEL_988;
    v268 = updated;
    if ( !*(_DWORD *)(updated + 24) )
      goto LABEL_989;
    v269 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
    if ( *(int *)(v268 + 24) < 2 )
    {
      v270 = -1;
    }
    else
    {
      v270 = System_Int32__Parse(*(System_String_o **)(v268 + 40), 0LL);
      if ( *(int *)(v268 + 24) >= 3 )
      {
        v271 = System_Int32__Parse(*(System_String_o **)(v268 + 48), 0LL);
LABEL_309:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BAF54B )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v95);
          byte_4BAF54B = 1;
        }
        v317 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v317 = TerminalPramsManager_TypeInfo;
        }
        v317->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BAF374 )
        {
          sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
          byte_4BAF374 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v318 = **(_QWORD **)(updated + 184);
        if ( !v318 )
          goto LABEL_988;
        updated = *(_QWORD *)(v318 + 264);
        if ( !updated )
          goto LABEL_988;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v269, v270, v271, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BAF54B )
          {
            sub_1C13D24(&TerminalPramsManager_TypeInfo, v319);
            byte_4BAF54B = 1;
          }
          v321 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v321 = TerminalPramsManager_TypeInfo;
          }
          v321->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_18;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        updated = *v102;
        if ( !*v102 )
          goto LABEL_988;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v320);
        return;
      }
    }
    v271 = -1;
    goto LABEL_309;
  }
  if ( id <= 801 )
  {
    switch ( id )
    {
      case 701:
        if ( !System_String__op_Equality(v111->fields.param, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL) )
          goto LABEL_18;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BB14A5 )
        {
          sub_1C13D24(&TerminalPramsManager_TypeInfo, v234);
          byte_4BB14A5 = 1;
        }
        v235 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v235 = TerminalPramsManager_TypeInfo;
        }
        v235->static_fields->_IsTransOrdealCall_k__BackingField = 1;
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_988;
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0LL, 0, 0LL);
        break;
      case 800:
        v236 = *v102;
        if ( !*v102 )
          goto LABEL_988;
        updated = *(_QWORD *)(v236 + 88);
        if ( !updated )
          goto LABEL_988;
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               (System_Collections_Generic_Dictionary_int__object__o *)updated,
               *(_DWORD *)(v236 + 64),
               &value,
               (const MethodInfo_3293A34 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
        {
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
          if ( !updated )
            goto LABEL_988;
          AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BAF374 )
          {
            sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
            byte_4BAF374 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v237 = **(_QWORD **)(updated + 184);
          if ( !v237 )
            goto LABEL_988;
          if ( !*(_QWORD *)(v237 + 464) )
            goto LABEL_197;
          if ( !*(_DWORD *)(updated + 224) )
            j_il2cpp_runtime_class_init_0(updated);
          if ( !byte_4BAF374 )
          {
            sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
            byte_4BAF374 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v238 = **(_QWORD **)(updated + 184);
          if ( !v238 )
            goto LABEL_988;
          v239 = *(_QWORD *)(v238 + 464);
          if ( !v239 )
            goto LABEL_988;
          updated = *(unsigned int *)(v239 + 48);
          if ( !(_DWORD)updated )
          {
LABEL_197:
            if ( !value )
              goto LABEL_988;
            updated = LODWORD(value[1].klass);
          }
          if ( (int)updated < 1 )
          {
            if ( !value )
              goto LABEL_988;
            v483 = (System_String_o *)value[1].monitor;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice(v483, 0, 0LL);
          }
          else
          {
            updated = (__int64)ServantVoiceEntity__getVoiceAssetName_41015788(updated, 0LL);
            if ( !value )
              goto LABEL_988;
            v240 = (System_String_o *)updated;
            v241 = (System_String_o *)value[1].monitor;
            v242 = SeManager_TypeInfo;
            if ( !SeManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              v242 = SeManager_TypeInfo;
            }
            DEFAULT_VOLUME = v242->static_fields->DEFAULT_VOLUME;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice_39857168(v240, v241, DEFAULT_VOLUME, 0LL, 0, 0LL);
          }
        }
        break;
      case 801:
        param = v111->fields.param;
        v135 = Method_QuestAfterAction_StateMain_UpdateAnim__;
        if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
          v135 = (_QWORD *)sub_1C13D3C(Method_QuestAfterAction_StateMain_UpdateAnim__);
        v136 = (System_Reflection_MethodBase_o *)sub_1C13D08(v135, v135[4]);
        OverwriteAssetSoundName__PlaySe(v136, param, 0, 0LL);
        goto LABEL_18;
      default:
        return;
    }
LABEL_815:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
      this,
      this->klass->vtable._15_onEnd.methodPtr);
    return;
  }
  switch ( id )
  {
    case 850:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__stopBgm(0LL);
      if ( !*v102 )
        goto LABEL_988;
      *(_BYTE *)(*v102 + 193) = 1;
      goto LABEL_18;
    case 851:
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BAF374 )
      {
        sub_1C13D24(&TerminalSceneComponent_TypeInfo, v95);
        byte_4BAF374 = 1;
      }
      v221 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v221 = TerminalSceneComponent_TypeInfo;
      }
      v222 = v221->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v111, (const MethodInfo *)v95);
      if ( !v222 )
        goto LABEL_988;
      TerminalSceneComponent__playBgm(v222, (System_String_o *)updated, 0LL);
      if ( !*v102 )
        goto LABEL_988;
      *(_BYTE *)(*v102 + 193) = 0;
      goto LABEL_18;
    case 900:
      v116 = (float)System_Int32__Parse(v111->fields.param, 0LL) / 1000.0;
      if ( v116 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v116;
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

  if ( (byte_4BB1475 & 1) == 0 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, that);
    byte_4BB1475 = 1;
  }
  this->fields.that = that;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)that, (int64_t)method, v3, v4, v5, v6, v7);
  v12 = this->fields.that;
  if ( !v12 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v12->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v11);
    byte_4BAF374 = 1;
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
    sub_1C13F80(screenCollider, v11);
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
    sub_1C13F80(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C13F80(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4BB1474 & 1) == 0 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BB1474 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BAF374 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1C13F80(v2, method);
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

  if ( (byte_4BB1477 & 1) == 0 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_1C13D24(&StringLiteral_16965/*"advPrepare"*/, v5);
    byte_4BB1477 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16965/*"advPrepare"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_4BAF374 = 1;
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
    sub_1C13F80(mInstance, deleteKey);
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
    sub_1C13F80(this, value);
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

  if ( (byte_4BB1479 & 1) == 0 )
  {
    sub_1C13D24(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_4BB1479 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v2;
  sub_1C13CC8(
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

  if ( (byte_4BB147A & 1) == 0 )
  {
    sub_1C13D24(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&ScriptManager_TypeInfo, v2);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, v4);
    sub_1C13D24(&QuestAfterAction_StateMain___c_TypeInfo, v5);
    byte_4BB147A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1250 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1250 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BAF44D = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BAF44C = 1;
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
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1C13F70(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v12, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1C13CC8(
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

  if ( (byte_4BB147B & 1) == 0 )
  {
    sub_1C13D24(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_1C13D24(&NetworkManager_TypeInfo, v3);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1C13D24(&ScriptManager_TypeInfo, v5);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__, v7);
    sub_1C13D24(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_4BB147B = 1;
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
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v11,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1C13CC8(
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
                     (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v19);
    byte_4BAF44D = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v21->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v19);
    v21 = TerminalPramsManager_TypeInfo;
    byte_4BAF44C = 1;
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
    sub_1C13F80(SelectRouteArray, v25);
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

  if ( (byte_4BB147C & 1) == 0 )
  {
    sub_1C13D24(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_1C13D24(&JsonManager_TypeInfo, v4);
    sub_1C13D24(&ScriptManager_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_16965/*"advPrepare"*/, v8);
    sub_1C13D24(&StringLiteral_16061/*"You must call the Bind method before performing this operation."*/, v9);
    sub_1C13D24(&StringLiteral_16320/*"\\p{_xmlI}"*/, v10);
    sub_1C13D24(&StringLiteral_13855/*"TerminalLastPlayedQuestId"*/, v11);
    byte_4BB147C = 1;
  }
  v12 = (Il2CppObject *)System_String__Concat_62979204(
                          (System_String_o *)StringLiteral_16061/*"You must call the Bind method before performing this operation."*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16320/*"\\p{_xmlI}"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v13 = JsonManager__DeserializeArray_object_(
          v12,
          (const MethodInfo_2FF6CCC *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16965/*"advPrepare"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13855/*"TerminalLastPlayedQuestId"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v13, 1, 0LL);
  if ( !byte_4BAF54B )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v14);
    byte_4BAF54B = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v17);
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(_4__this, method);
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

  if ( (byte_4BB147D & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_16965/*"advPrepare"*/, v4);
    sub_1C13D24(&StringLiteral_13855/*"TerminalLastPlayedQuestId"*/, v5);
    byte_4BB147D = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BAF374 = 1;
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
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BAF374 = 1;
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
    sub_1C13F80(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0LL);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BAF374 = 1;
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
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BAF44D = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v11->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BB14A6 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4BB14A6 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4BAF44D = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v11->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v13);
    byte_4BAF44D = 1;
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
    if ( !byte_4BAF44D )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v16);
      byte_4BAF44D = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v18->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_4BB14A7 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v19);
      byte_4BB14A7 = 1;
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16965/*"advPrepare"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13855/*"TerminalLastPlayedQuestId"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BAF374 = 1;
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
  if ( !byte_4BB14A8 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB14A8 = 1;
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
  if ( !byte_4BB1250 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1250 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v24->static_fields->_WarId_k__BackingField;
  if ( !byte_4BB149F )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v24 = TerminalPramsManager_TypeInfo;
    byte_4BB149F = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BAF374 = 1;
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
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BAF44D = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  v28 = *((_DWORD *)&_4__this->fields.subRootGimmickP->fields + 1);
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4BAF44C = 1;
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(spot, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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

  if ( (byte_4BB147E & 1) == 0 )
  {
    sub_1C13D24(&EventDelegate_Callback_TypeInfo, method);
    sub_1C13D24(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v3);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v4);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__, v5);
    sub_1C13D24(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v6);
    byte_4BB147E = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v7 = sub_1C13F70(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)this, v10, v11, v12, v13, v14, v15);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_2FDFC60 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v16 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v17 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_2FDF914 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v7 + 16) = v17;
  v18 = (UnityEngine_Color_o **)(v7 + 16);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)v17, v19, v20, v21, v22, v23, v24);
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
    sub_1C13F80(mapGimmick, v9);
  }
  if ( v26->max_length <= 2 )
LABEL_19:
    sub_1C13F88(mapGimmick, v9);
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
  v30 = (EventDelegate_Callback_o *)sub_1C13F70(EventDelegate_Callback_TypeInfo);
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

  if ( (byte_4BB147F & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB147F = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70721988(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1C13F80(_4__this, v5);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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

  if ( (byte_4BB1480 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, result);
    sub_1C13D24(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v6);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, v7);
    sub_1C13D24(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__, v8);
    sub_1C13D24(&QuestAfterAction_StateMain___c_TypeInfo, v9);
    byte_4BB1480 = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_35;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, result);
      byte_4BAF374 = 1;
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
      if ( !byte_4BAF44D )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, result);
        byte_4BAF44D = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_4BAF44C )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, result);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4BAF44C = 1;
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
          _9__25 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            _9__25,
            (Il2CppObject *)CS___8__locals16,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
            0LL);
          CS___8__locals16->fields.__9__25 = _9__25;
          sub_1C13CC8(
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
          ScrTerminalListTop__StartWindowMessage_35404540(v12, name_high, namespaze + 1, 2, _9__25, 1, 0LL);
          return;
        }
      }
    }
LABEL_35:
    sub_1C13F80(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    _9__16_26 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v26, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1C13CC8(
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
    sub_1C13F80(spot, method);
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
    sub_1C13F80(spot, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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
  sub_1C13CC8(p_end, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)startCallback, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)p_end, (int64_t)endCallback, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1C13CC8(v6, (int64_t)vName, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_4BB1484 & 1) == 0 )
  {
    sub_1C13D24(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, method);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo, v3);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)sub_1C13D24(
                                                                                    &System_Collections_IEnumerator_TypeInfo,
                                                                                    v4);
    byte_4BB1484 = 1;
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
      sub_1C13F80(this, method);
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
      p_method = sub_1C65D04(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v12 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v51->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v12;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v51->fields.__7__wrap1, v12, v13, v14, v15, v16, v17, v18);
    v2 = v51;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_46:
    sub_1C13F80(this, method);
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
      v23 = sub_1C65D04(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v23)(
            _7__wrap1,
            *(_QWORD *)(v23 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81____m__Finally1(v51, v24);
      v51->fields.__7__wrap1 = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v51->fields.__7__wrap1, 0LL, v44, v45, v46, v47, v48, v49);
      return 0;
    }
    v25 = v51->fields.__7__wrap1;
    if ( !v25 )
      sub_1C13F80(v51, v24);
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
      v29 = sub_1C65D04(
              v51->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v30 = (QuestAfterAction_Command_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v29)(
                                          v25,
                                          *(_QWORD *)(v29 + 8));
    v32 = (int64_t)v30;
    if ( !v30 )
      sub_1C13F80(0LL, v31);
    if ( !_4__this )
      sub_1C13F80(v30, v31);
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
          v35 = dword_C30940[v34];
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&v51->fields.__2__current, v32, v38, v39, v40, v41, v42, v43);
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

  if ( (byte_4BB1486 & 1) == 0 )
  {
    sub_1C13D24(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo, method);
    byte_4BB1486 = 1;
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
    v10 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)sub_1C13F70(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v10->fields.__4__this, (int64_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v10->fields.commandEnumerable = _3__commandEnumerable;
  sub_1C13CC8(
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

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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

  if ( (byte_4BB1485 & 1) == 0 )
  {
    sub_1C13D24(&System_IDisposable_TypeInfo, method);
    byte_4BB1485 = 1;
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
      p_method = sub_1C65D04(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
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
      sub_1C13F80(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__85_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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

  if ( (byte_4BB1481 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_4BB1481 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1C13F80(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_34821204((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, v4);
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

  if ( (byte_4BB1482 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4BB1482 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
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

  if ( (byte_4BB1483 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4BB1483 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)(_4__this + 176), 0LL, v2, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1C13CC8((PartyOrganizationUtility_o *)(_4__this + 72), 0LL, v10, v11, v12, v13, v14, v15),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1C13F80(_4__this, method);
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
    sub_1C13F80(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, v2);
}