void __fastcall QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  Il2CppObject *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BD92B9 & 1) == 0 )
  {
    sub_1C21E38(&BlankEarthQuestAfterAction_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
    sub_1C21E38(&QuestAfterAction_TitleInfoControlCallback_TypeInfo);
    byte_4BD92B9 = 1;
  }
  v3 = (Il2CppObject *)sub_1C22084(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (Il2CppObject *)sub_1C22084(BlankEarthQuestAfterAction_TypeInfo);
  System_Object___ctor(v10, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v17,
    (const MethodInfo_32E58A4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.commandTypeIds, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.svtVoices, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_1C21DDC(p_endAct, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endAct, 0LL);
}


bool __fastcall QuestAfterAction__CheckChangeBlankEarth(QuestAfterAction_o *this, const MethodInfo *method)
{
  bool result; // w0
  __int64 v4; // x1
  Il2CppObject *Instance; // x19
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t v8; // w22
  _QWORD *p_image; // x21
  Il2CppObject *v10; // x21
  int32_t v11; // w22
  TerminalPramsManager_c *v12; // x0
  int32_t v13; // w20
  __int64 v14; // x8
  unsigned int *v15; // x19
  __int64 v16; // x23
  unsigned __int64 v17; // x24
  __int64 v18; // x25
  int i; // w26
  int64_t v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BD929F & 1) == 0 )
  {
    sub_1C21E38(&QuestAfterAction_Command___TypeInfo);
    sub_1C21E38(&QuestAfterAction_Command_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1265/*"1"*/);
    byte_4BD929F = 1;
  }
  entity = 0LL;
  if ( this->fields.BlankEarthTargetWarId > 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD92DA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92DA = 1;
  }
  v6 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 184) + 102LL) )
  {
    if ( !Instance )
      goto LABEL_76;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    v6 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v8 = *(_DWORD *)(*(_QWORD *)(v6 + 184) + 20LL);
    if ( !byte_4BD7263 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4BD7263 = 1;
    }
    if ( !*(_DWORD *)(v6 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_76;
    p_image = QuestPhaseDetailAddMaster__GetAfterAction(
                (QuestPhaseDetailAddMaster_o *)MasterData_object,
                v8,
                *(_DWORD *)(*(_QWORD *)(v6 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_60;
    v10 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    v6 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v11 = *(_DWORD *)(*(_QWORD *)(v6 + 184) + 20LL);
    if ( !byte_4BD7263 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4BD7263 = 1;
    }
    if ( !*(_DWORD *)(v6 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v10 )
      goto LABEL_76;
    p_image = QuestPhaseDetailMaster__GetAfterAction(
                (QuestPhaseDetailMaster_o *)v10,
                v11,
                *(_DWORD *)(*(_QWORD *)(v6 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_60;
    v6 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v6 + 224) )
    j_il2cpp_runtime_class_init_0(v6);
  if ( !byte_4BD92DD )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92DD = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( !v12->static_fields->_IsQuestClear_k__BackingField )
    return 0;
  if ( !v12->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v12);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v6 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance
    || (v13 = *(_DWORD *)(*(_QWORD *)(v6 + 184) + 20LL),
        (v6 = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_76:
    sub_1C22094(v6, v4);
  }
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
         &entity,
         v13,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (v6 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_76;
  p_image = &entity[6].klass->_1.image;
  if ( !p_image )
    return 0;
LABEL_60:
  v14 = p_image[3];
  result = 0;
  if ( (int)v14 < 2 || (v14 & 1) != 0 )
    return result;
  v6 = sub_1C21EE0(QuestAfterAction_Command___TypeInfo, (unsigned int)v14 >> 1);
  if ( !v6 )
    goto LABEL_76;
  v15 = (unsigned int *)v6;
  if ( *(int *)(v6 + 24) < 1 )
    return 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = v6 + 32;
  for ( i = 1; ; i += 2 )
  {
    v20 = sub_1C22084(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v20, 0LL);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_75;
    v6 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0LL);
    if ( !v20 )
      goto LABEL_76;
    *(_DWORD *)(v20 + 16) = v6;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_75:
      sub_1C2209C(v6, v4);
    v27 = p_image[i + 4];
    *(_QWORD *)(v20 + 24) = v27;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 24), v27, v21, v22, v23, v24, v25, v26);
    if ( *(_DWORD *)(v20 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v20 + 24), (System_String_o *)StringLiteral_1265/*"1"*/, 0LL) )
    {
      break;
    }
    v6 = sub_1C21F74(v20, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
    if ( !v6 )
    {
      v34 = sub_1C220B8();
      sub_1C21F60(v34, 0LL);
    }
    if ( v17 >= v15[6] )
      goto LABEL_75;
    *(_QWORD *)(v18 + 8 * v17) = v20;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + v16), v20, v28, v29, v30, v31, v32, v33);
    ++v17;
    v16 += 8LL;
    if ( (__int64)v17 >= (int)v15[6] )
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.commandBuf, 0LL, v3, v4, v5, v6, v7, v8);
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
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  TerminalPramsManager_c *v7; // x0
  int32_t QuestId_k__BackingField; // w22
  System_String_array *afterActionVals; // x23
  __int64 v10; // x1
  Il2CppObject *Instance; // x22
  int64_t MasterData_object; // x0
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  int32_t v16; // w24
  __int64 v17; // x8
  __int64 v18; // x8
  int32_t v19; // w25
  __int64 v20; // x8
  __int64 v21; // x8
  int32_t v22; // w24
  __int64 v23; // x8
  __int64 v24; // x8
  int32_t v25; // w19
  TerminalPramsManager_c *v26; // x0
  TerminalSceneComponent_c *v27; // x0
  TerminalPramsManager_c *v28; // x0
  int64_t v29; // x23
  int32_t v30; // w24
  int32_t v31; // w24
  System_String_o *v32; // x24
  bool v33; // w24
  bool v34; // w23
  Il2CppObject *v35; // x23
  WarEntity_o *QuestId; // x0
  WarEntity_o *v37; // x23
  BalanceConfig_c *v38; // x0
  bool v39; // w8
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v41; // x0
  TerminalPramsManager_c *v42; // x0
  int32_t id; // w19
  bool v44; // w23
  TerminalPramsManager_c *v45; // x0
  Il2CppObject *Master_object; // x23
  WarReleaseEntity_o *OpenEntity; // x24
  __int64 *v48; // x19
  Il2CppObject *v49; // x23
  bool QuestEntity; // w0
  TerminalPramsManager_c *v51; // x0
  Il2CppObject *v52; // x23
  int32_t v53; // w24
  Il2CppObject *v54; // x22
  int32_t v55; // w23
  TerminalPramsManager_c *v56; // x0
  Il2CppObject *v57; // x22
  int32_t v58; // w24
  bool IsOverwriteCommandNone; // w0
  __int64 v60; // x8
  int64_t v61; // x0
  unsigned int **p_commandBuf; // x21
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int *commandBuf; // x8
  unsigned __int64 v70; // x22
  il2cpp_array_size_t v71; // w29
  int64_t v72; // x24
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 v79; // x8
  int64_t v80; // x1
  System_String_o **v81; // x25
  const MethodInfo *v82; // x2
  int v83; // w8
  int v84; // w8
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  int32_t v86; // w21
  int64_t v87; // x28
  __int64 v88; // x27
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int v95; // w8
  System_String_c *v96; // x8
  int64_t v97; // x26
  int32_t v98; // w26
  BalanceConfig_c *v99; // x8
  int v100; // w27
  unsigned int v101; // w8
  System_Collections_Generic_List_int__o *Item; // x26
  const MethodInfo *v103; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v105; // x9
  __int64 size; // x10
  QuestAfterAction_o *v107; // x0
  const MethodInfo *v108; // x2
  System_String_c *v109; // x8
  int64_t v110; // x25
  unsigned __int64 v111; // x26
  System_String_Fields v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  unsigned int *v115; // x25
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  unsigned int *v122; // x0
  TerminalPramsManager_c *v123; // x0
  TerminalPramsManager_c *v124; // x0
  int32_t BeforeQuestStartWarId_k__BackingField; // w19
  TerminalSceneComponent_c *v126; // x0
  Il2CppObject *v127; // x21
  TerminalPramsManager_c *v128; // x0
  TerminalPramsManager_c *v129; // x0
  Il2CppObject *v130; // x20
  TerminalPramsManager_c *v131; // x0
  BalanceConfig_c *v132; // x8
  int32_t WarId_k__BackingField; // w19
  int32_t klass; // w19
  TerminalPramsManager_c *v135; // x0
  TerminalPramsManager_c *v136; // x0
  TerminalPramsManager_c *v137; // x0
  BalanceConfig_c *v138; // x8
  int32_t v139; // w20
  TerminalPramsManager_c *v140; // x0
  __int64 v141; // x0
  char v142; // [xsp+Ch] [xbp-94h]
  int32_t svtId; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v144; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v146; // [xsp+30h] [xbp-70h] BYREF
  QuestEntity_o *v147; // [xsp+38h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4BD929E & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&QuestAfterAction_Command___TypeInfo);
    sub_1C21E38(&QuestAfterAction_Command_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&QuestAfterAction_VoiceInfo_TypeInfo);
    sub_1C21E38(&StringLiteral_16991/*"afterActionBk"*/);
    this = (QuestAfterAction_o *)sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BD929E = 1;
  }
  v146 = 0LL;
  v147 = 0LL;
  v144 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_2FBA5AC *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v5);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !byte_4BD7263 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_4BD7263 = 1;
    }
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = TerminalPramsManager_TypeInfo;
    }
    afterActionVals = QuestAfterAction__GetBeforeAction(
                        QuestId_k__BackingField,
                        v7->static_fields->_PhaseCnt_k__BackingField + 1,
                        v6);
    goto LABEL_232;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v13 = **(_QWORD **)(MasterData_object + 184);
  if ( !v13 )
    goto LABEL_334;
  if ( !*(_QWORD *)(v13 + 464) )
    goto LABEL_80;
  if ( !*(_DWORD *)(MasterData_object + 224) )
    j_il2cpp_runtime_class_init_0(MasterData_object);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v14 = **(_QWORD **)(MasterData_object + 184);
  if ( !v14 )
    goto LABEL_334;
  v15 = *(_QWORD *)(v14 + 464);
  if ( !v15 )
    goto LABEL_334;
  v16 = *(_DWORD *)(v15 + 20);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    byte_4BD7183 = 1;
  }
  if ( !*(_DWORD *)(MasterData_object + 224) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v17 = **(_QWORD **)(MasterData_object + 184);
  if ( !v17 )
    goto LABEL_334;
  v18 = *(_QWORD *)(v17 + 464);
  if ( !v18 )
    goto LABEL_334;
  v19 = *(_DWORD *)(v18 + 16);
  if ( v19 >= 1 )
  {
    if ( !*(_DWORD *)(MasterData_object + 224) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    }
    v20 = **(_QWORD **)(MasterData_object + 184);
    if ( !v20 )
      goto LABEL_334;
    v21 = *(_QWORD *)(v20 + 464);
    if ( !v21 )
      goto LABEL_334;
    if ( !Instance )
      goto LABEL_334;
    afterActionVals = *(System_String_array **)(v21 + 32);
    MasterData_object = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_334;
    MasterData_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                   v19,
                                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_334;
    v22 = *(_DWORD *)(MasterData_object + 28);
    MasterData_object = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_334;
    goto LABEL_67;
  }
  if ( v16 >= 1 )
  {
    if ( !*(_DWORD *)(MasterData_object + 224) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    }
    v23 = **(_QWORD **)(MasterData_object + 184);
    if ( !v23 )
      goto LABEL_334;
    v24 = *(_QWORD *)(v23 + 464);
    if ( !v24 )
      goto LABEL_334;
    afterActionVals = *(System_String_array **)(v24 + 32);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    MasterData_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_334;
    MasterData_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                   v16,
                                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_334;
    v22 = *(_DWORD *)(MasterData_object + 24);
    MasterData_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_334;
LABEL_67:
    MasterData_object = (int64_t)WarMaster__getByEventId((WarMaster_o *)MasterData_object, v22, 0LL);
    if ( !MasterData_object )
      goto LABEL_334;
    v25 = *(_DWORD *)(MasterData_object + 16);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD90A0 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD90A0 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    v26->static_fields->_WarId_k__BackingField = v25;
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    v27 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v27 = TerminalSceneComponent_TypeInfo;
    }
    MasterData_object = (int64_t)v27->static_fields->mInstance;
    if ( !MasterData_object )
      goto LABEL_334;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
    if ( afterActionVals )
      goto LABEL_232;
  }
LABEL_80:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD92DA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92DA = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  if ( !v28->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16991/*"afterActionBk"*/, 0LL) )
  {
    MasterData_object = (int64_t)UnityEngine_PlayerPrefs__GetString_70827888(
                                   (System_String_o *)StringLiteral_16991/*"afterActionBk"*/,
                                   0LL);
    if ( !MasterData_object )
      goto LABEL_334;
    MasterData_object = (int64_t)System_String__Split((System_String_o *)MasterData_object, 0x2Cu, 0, 0LL);
    if ( !MasterData_object )
      goto LABEL_334;
    v29 = MasterData_object;
    if ( !*(_DWORD *)(MasterData_object + 24) )
      goto LABEL_474;
    v30 = System_Int32__Parse(*(System_String_o **)(MasterData_object + 32), 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD909A )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909A = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL) = v30;
    if ( *(_DWORD *)(v29 + 24) <= 1u )
      goto LABEL_474;
    v31 = System_Int32__Parse(*(System_String_o **)(v29 + 40), 0LL);
    if ( !byte_4BD909E )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909E = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) = v31;
    if ( *(_DWORD *)(v29 + 24) <= 2u )
      goto LABEL_474;
    v32 = *(System_String_o **)(v29 + 48);
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v33 = System_Boolean__Parse(v32, 0LL);
    if ( !byte_4BD92DB )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92DB = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 101LL) = v33;
    if ( *(_DWORD *)(v29 + 24) <= 3u )
      goto LABEL_474;
    v34 = System_Boolean__Parse(*(System_String_o **)(v29 + 56), 0LL);
    if ( !byte_4BD92DC )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92DC = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 102LL) = v34;
    if ( !byte_4BD92DD )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      byte_4BD92DD = 1;
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
      v35 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD7264 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7264 = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v35 )
        goto LABEL_334;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)v35,
                  *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL),
                  0LL);
      if ( QuestId )
      {
        v37 = QuestId;
        v38 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v38 = BalanceConfig_TypeInfo;
        }
        v39 = System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v38->static_fields->MainInterludeMapReturnWarIds,
                v37->fields.id,
                (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
        cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
        if ( v39 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BD92DE )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD92DE = 1;
          }
          v41 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v41 = TerminalPramsManager_TypeInfo;
          }
          v41->static_fields->_IsWarClear_k__BackingField = 0;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BD92DE )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD92DE = 1;
          }
          v42 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v42 = TerminalPramsManager_TypeInfo;
          }
          v42->static_fields->_IsWarClear_k__BackingField = 1;
          id = v37->fields.id;
          if ( !byte_4BD90A0 )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            v42 = TerminalPramsManager_TypeInfo;
            byte_4BD90A0 = 1;
          }
          if ( !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            v42 = TerminalPramsManager_TypeInfo;
          }
          v42->static_fields->_WarId_k__BackingField = id;
          v44 = TerminalPramsManager__CheckIsOrdealCallWarClear(v37, 0LL);
          if ( !byte_4BD92DF )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD92DF = 1;
          }
          v45 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v45 = TerminalPramsManager_TypeInfo;
          }
          v45->static_fields->_IsOrdealCallWarClear_k__BackingField = v44;
        }
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
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
  if ( !byte_4BD92E0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92E0 = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  v48 = &qword_4BD7000;
  if ( *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 91LL) )
  {
    if ( !*(_DWORD *)(MasterData_object + 224) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4BD8FB5 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD8FB5 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    v48 = &qword_4BD7000;
    if ( !*(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 92LL) )
      goto LABEL_231;
  }
  if ( !Instance )
    goto LABEL_334;
  v49 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !*((_BYTE *)v48 + 612) )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    *((_BYTE *)v48 + 612) = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !v49 )
    goto LABEL_334;
  QuestEntity = QuestMaster__TryGetQuestEntity(
                  (QuestMaster_o *)v49,
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
    if ( !byte_4BD92DA )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92DA = 1;
    }
    v51 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v51 = TerminalPramsManager_TypeInfo;
    }
    if ( v51->static_fields->_IsPhaseClear_k__BackingField )
    {
      v52 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !*((_BYTE *)v48 + 612) )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        *((_BYTE *)v48 + 612) = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      v53 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL);
      if ( !byte_4BD7263 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
        byte_4BD7263 = 1;
      }
      if ( !*(_DWORD *)(MasterData_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v52 )
        goto LABEL_334;
      afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                          (QuestPhaseDetailAddMaster_o *)v52,
                          v53,
                          *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_232;
      v54 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !*((_BYTE *)v48 + 612) )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        *((_BYTE *)v48 + 612) = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      v55 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL);
      if ( !byte_4BD7263 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
        byte_4BD7263 = 1;
      }
      if ( !*(_DWORD *)(MasterData_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v54 )
        goto LABEL_334;
      afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                          (QuestPhaseDetailMaster_o *)v54,
                          v55,
                          *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_232;
      v51 = TerminalPramsManager_TypeInfo;
    }
    if ( !v51->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v51);
    if ( !byte_4BD92DD )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92DD = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    if ( v56->static_fields->_IsQuestClear_k__BackingField )
    {
      if ( !v56->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v56);
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
  v57 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  v58 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL);
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !*(_DWORD *)(MasterData_object + 224) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !v57 )
    goto LABEL_334;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v57,
         v58,
         *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) + 1,
         7,
         0LL)
    || (IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(afterActionVals, (const MethodInfo *)v10),
        !afterActionVals)
    || IsOverwriteCommandNone
    || (v60 = *(_QWORD *)&afterActionVals->max_length, (int)v60 < 2)
    || (v60 & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD92E1 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92E1 = 1;
    }
    v123 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v123 = TerminalPramsManager_TypeInfo;
    }
    if ( v123->static_fields->_BeforeQuestStartWarId_k__BackingField >= 1 )
    {
      if ( !v123->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v123);
      if ( !byte_4BD736A )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD736A = 1;
      }
      v124 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v124 = TerminalPramsManager_TypeInfo;
      }
      v124->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4BD909C )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v124 = TerminalPramsManager_TypeInfo;
        byte_4BD909C = 1;
      }
      if ( !v124->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v124);
        v124 = TerminalPramsManager_TypeInfo;
      }
      v124->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4BD92E1 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v124 = TerminalPramsManager_TypeInfo;
        byte_4BD92E1 = 1;
      }
      if ( !v124->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v124);
        v124 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v124->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4BD90A0 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v124 = TerminalPramsManager_TypeInfo;
        byte_4BD90A0 = 1;
      }
      if ( !v124->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v124);
        v124 = TerminalPramsManager_TypeInfo;
      }
      v124->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      v126 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v126 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (int64_t)v126->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_334;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v127 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4BD9099 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9099 = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v127 )
        goto LABEL_334;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v127,
             &v144,
             *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 4LL),
             (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (int64_t)v144;
        if ( !v144 )
          goto LABEL_334;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v144, 0LL);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD92E2 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD92E2 = 1;
      }
      v128 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v128 = TerminalPramsManager_TypeInfo;
      }
      v128->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16991/*"afterActionBk"*/, 0LL);
    return;
  }
  v61 = sub_1C21EE0(QuestAfterAction_Command___TypeInfo, (unsigned int)v60 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v61;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.commandBuf, v61, v63, v64, v65, v66, v67, v68);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_334;
  v142 = 0;
  v70 = 0LL;
  v71 = 0;
  while ( (__int64)v70 < commandBuf[6] )
  {
    v72 = sub_1C22084(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v72, 0LL);
    if ( v71 >= afterActionVals->max_length )
      goto LABEL_474;
    MasterData_object = System_Int32__Parse(afterActionVals->m_Items[v71], 0LL);
    if ( !v72 )
      goto LABEL_334;
    *(_DWORD *)(v72 + 16) = MasterData_object;
    v79 = (int)v71 | 1LL;
    if ( (unsigned int)v79 >= afterActionVals->max_length )
      goto LABEL_474;
    v80 = (int64_t)afterActionVals->m_Items[v79];
    *(_QWORD *)(v72 + 24) = v80;
    v81 = (System_String_o **)(v72 + 24);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v72 + 24), v80, v73, v74, v75, v76, v77, v78);
    if ( !v4->fields.hasFadeCommand )
    {
      v83 = *(_DWORD *)(v72 + 16);
      if ( v83 == 520 || v83 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v71 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v72 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v72 + 16) == 350 )
    {
      MasterData_object = (int64_t)*v81;
      if ( !*v81 )
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
    v84 = *(_DWORD *)(v72 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v84 != 700 )
    {
      if ( v84 == 800 )
      {
        MasterData_object = (int64_t)QuestAfterAction_Command__GetAvailableRandomVoice(
                                       (QuestAfterAction_Command_o *)v72,
                                       &svtId,
                                       v82);
        if ( MasterData_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v86 = svtId;
          v87 = MasterData_object;
          v88 = sub_1C22084(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v88, 0LL);
          *(_DWORD *)(v88 + 16) = v86;
          *(_QWORD *)(v88 + 24) = v87;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v88 + 24), v87, v89, v90, v91, v92, v93, v94);
          if ( !svtVoices )
            goto LABEL_334;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v70,
            (Il2CppObject *)v88,
            (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
          p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v95 = *(_DWORD *)(v72 + 16);
    if ( v95 == 702 )
    {
      MasterData_object = (int64_t)*v81;
      if ( !*v81 )
        goto LABEL_334;
      MasterData_object = (int64_t)System_String__Split_63140568(
                                     (System_String_o *)MasterData_object,
                                     (System_String_o *)StringLiteral_866/*","*/,
                                     0,
                                     0LL);
      if ( !MasterData_object )
        goto LABEL_334;
      v96 = *(System_String_c **)(MasterData_object + 24);
      v97 = MasterData_object;
      if ( v96 )
      {
        if ( !(_DWORD)v96 )
          goto LABEL_474;
        MasterData_object = System_Int32__Parse(*(System_String_o **)(MasterData_object + 32), 0LL);
        if ( (int)MasterData_object >= 1 )
        {
          if ( *(int *)(v97 + 24) < 2 )
            v98 = 0;
          else
            v98 = System_Int32__Parse(*(System_String_o **)(v97 + 40), 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__SetAutoResumeForFolder(v98, 0LL);
          if ( !byte_4BD9099 )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD9099 = 1;
          }
          MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
          }
          v99 = BalanceConfig_TypeInfo;
          v100 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 4LL);
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v99 = BalanceConfig_TypeInfo;
          }
          p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
          if ( v100 == v99->static_fields->OrdealCallWarId )
          {
            v4->fields.BlankEarthTargetWarId = v98;
            v142 = 1;
          }
        }
      }
      v95 = *(_DWORD *)(v72 + 16);
    }
    if ( v95 <= 205 )
    {
      if ( (unsigned int)(v95 - 100) < 0xF && ((0x7C1Fu >> (v95 - 100)) & 1) != 0 )
      {
        v10 = 0LL;
      }
      else
      {
        if ( (unsigned int)(v95 - 200) > 5 )
          goto LABEL_317;
        v10 = 1LL;
      }
    }
    else if ( v95 <= 550 )
    {
      if ( (unsigned int)(v95 - 400) < 0xD )
      {
        v10 = 2LL;
      }
      else
      {
        if ( v95 != 550 )
          goto LABEL_317;
        v10 = 3LL;
      }
    }
    else
    {
      v101 = v95 - 1000;
      if ( v101 >= 0xD || ((0x1C07u >> v101) & 1) == 0 )
        goto LABEL_317;
      v10 = 4LL;
    }
    MasterData_object = (int64_t)v4->fields.commandTypeIds;
    if ( !MasterData_object )
      goto LABEL_334;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                       v10,
                                                       (const MethodInfo_32E61D8 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    MasterData_object = QuestAfterAction__ExtractCommandTargetId((QuestAfterAction_Command_o *)v72, v103);
    if ( !Item )
      goto LABEL_334;
    items = Item->fields._items;
    v105 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_334;
    size = Item->fields._size;
    v10 = (unsigned int)MasterData_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        MasterData_object,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = MasterData_object;
    }
LABEL_317:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v72, v82);
    if ( *(_DWORD *)(v72 + 16) == 102 )
    {
      v107 = (QuestAfterAction_o *)System_Int32__Parse(*v81, 0LL);
      MasterData_object = (int64_t)QuestAfterAction__GetMapGimmickId(v107, (int32_t)v107, v108);
      if ( !MasterData_object )
        goto LABEL_334;
      v109 = *(System_String_c **)(MasterData_object + 24);
      v110 = MasterData_object;
      if ( (int)v109 >= 1 )
      {
        v111 = 0LL;
        while ( v111 < (unsigned int)v109 )
        {
          MasterData_object = (int64_t)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_334;
          v10 = *(unsigned int *)(v110 + 32 + 4 * v111);
          v112 = *(System_String_Fields *)(MasterData_object + 16);
          v113 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(MasterData_object + 28);
          if ( !*(_QWORD *)&v112 )
            goto LABEL_334;
          v114 = *(int *)(MasterData_object + 24);
          if ( (unsigned int)v114 >= *(_DWORD *)(*(_QWORD *)&v112 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v10,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
          }
          else
          {
            *(_DWORD *)(MasterData_object + 24) = v114 + 1;
            *(_DWORD *)(*(_QWORD *)&v112 + 4 * v114 + 32) = v10;
          }
          LODWORD(v109) = *(_DWORD *)(v110 + 24);
          if ( (__int64)++v111 >= (int)v109 )
            goto LABEL_330;
        }
LABEL_474:
        sub_1C2209C(MasterData_object, v10);
      }
    }
LABEL_330:
    v115 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_334;
    MasterData_object = sub_1C21F74(v72, *(_QWORD *)(*(_QWORD *)v115 + 64LL));
    if ( !MasterData_object )
    {
      v141 = sub_1C220B8();
      sub_1C21F60(v141, 0LL);
    }
    if ( v70 >= v115[6] )
      goto LABEL_474;
    v122 = &v115[2 * v70];
    *((_QWORD *)v122 + 4) = v72;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v122 + 8), v72, v116, v117, v118, v119, v120, v121);
    commandBuf = (int *)*p_commandBuf;
    v71 += 2;
    ++v70;
    if ( !*p_commandBuf )
      goto LABEL_334;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD92DA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92DA = 1;
  }
  v129 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v129 = TerminalPramsManager_TypeInfo;
  }
  if ( v129->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v130 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( !v130 )
      goto LABEL_334;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v130,
           &v147,
           *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL),
           0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9099 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9099 = 1;
      }
      v131 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v131 = TerminalPramsManager_TypeInfo;
      }
      v132 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v131->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v132 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v132->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        MasterData_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v147 && MasterData_object )
        {
          MasterData_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                &v146,
                                v147->fields.spotId,
                                (const MethodInfo_325BE14 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( (MasterData_object & 1) == 0 )
            goto LABEL_424;
          if ( v146 )
          {
            klass = (int32_t)v146[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BD92E3 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD92E3 = 1;
            }
            v135 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v135 = TerminalPramsManager_TypeInfo;
            }
            v135->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = klass;
            goto LABEL_424;
          }
        }
LABEL_334:
        sub_1C22094(MasterData_object, v10);
      }
    }
  }
LABEL_424:
  v136 = TerminalPramsManager_TypeInfo;
  if ( (v142 & 1) == 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD736A )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD736A = 1;
    }
    v137 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v137 = TerminalPramsManager_TypeInfo;
    }
    v137->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4BD909C )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v137 = TerminalPramsManager_TypeInfo;
      byte_4BD909C = 1;
    }
    if ( !v137->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v137);
      v137 = TerminalPramsManager_TypeInfo;
    }
    v137->static_fields->_DispState_k__BackingField = 2;
    if ( !byte_4BD9099 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v137 = TerminalPramsManager_TypeInfo;
      byte_4BD9099 = 1;
    }
    if ( !v137->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v137);
      v137 = TerminalPramsManager_TypeInfo;
    }
    v138 = BalanceConfig_TypeInfo;
    v139 = v137->static_fields->_WarId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v138 = BalanceConfig_TypeInfo;
    }
    v136 = TerminalPramsManager_TypeInfo;
    if ( v139 == v138->static_fields->OrdealCallWarId )
      goto LABEL_478;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD8FB5 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD8FB5 = 1;
    }
    v136 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v136 = TerminalPramsManager_TypeInfo;
    }
    if ( v136->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
LABEL_478:
      if ( !v136->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v136);
      if ( !byte_4BD8FB6 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD8FB6 = 1;
      }
      v136 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v136 = TerminalPramsManager_TypeInfo;
      }
      v136->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !byte_4BD8FB5 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v136 = TerminalPramsManager_TypeInfo;
        byte_4BD8FB5 = 1;
      }
      if ( !v136->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v136);
        v136 = TerminalPramsManager_TypeInfo;
      }
      if ( !v136->static_fields->_IsOrdealCallWarClear_k__BackingField )
      {
        if ( !v136->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v136);
        if ( !byte_4BD909C )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD909C = 1;
        }
        v136 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v136 = TerminalPramsManager_TypeInfo;
        }
        v136->static_fields->_DispState_k__BackingField = 3;
      }
    }
  }
  if ( !v136->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v136);
  if ( !byte_4BD909F )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD909F = 1;
  }
  v140 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v140 = TerminalPramsManager_TypeInfo;
  }
  v140->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_4BD929C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16991/*"afterActionBk"*/);
    byte_4BD929C = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16991/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8

  v2 = command;
  if ( (byte_4BD92A0 & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BD92A0 = 1;
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
    sub_1C22094(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1C2209C(command, method);
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

  if ( (byte_4BD92AD & 1) == 0 )
  {
    sub_1C21E38(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo);
    byte_4BD92AD = 1;
  }
  v5 = sub_1C22084(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 56) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 56), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)commandEnumerable, v12, v13, v14, v15, v16, v17);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v5;
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__GenerateCommandBuf(
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
  QuestAfterAction_Command_array *v10; // x20
  __int64 v11; // x22
  unsigned __int64 v12; // x23
  __int64 v13; // x24
  il2cpp_array_size_t v14; // w25
  int64_t v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v30; // x0

  if ( (byte_4BD92A1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_QuestAfterAction_Command___);
    sub_1C21E38(&QuestAfterAction_Command___TypeInfo);
    sub_1C21E38(&QuestAfterAction_Command_TypeInfo);
    byte_4BD92A1 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v6 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v7 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v7 )
    {
      sub_1C73D70(Method_System_Array_Empty_QuestAfterAction_Command___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C73D14(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C73D14(inited);
    return **(QuestAfterAction_Command_array ***)(v9 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1C21EE0(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1C22094(IsNullOrEmpty, v4);
    }
    v10 = (QuestAfterAction_Command_array *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v11 = 0LL;
      v12 = 0LL;
      v13 = IsNullOrEmpty + 32;
      v14 = 1;
      do
      {
        v15 = sub_1C22084(QuestAfterAction_Command_TypeInfo);
        System_Object___ctor((Il2CppObject *)v15, 0LL);
        if ( v14 - 1 >= actionVals->max_length )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v14 - 1], 0LL);
        if ( !v15 )
          goto LABEL_25;
        *(_DWORD *)(v15 + 16) = IsNullOrEmpty;
        if ( v14 >= actionVals->max_length )
          goto LABEL_24;
        v22 = actionVals->m_Items[v14];
        *(_QWORD *)(v15 + 24) = v22;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)v22, v16, v17, v18, v19, v20, v21);
        IsNullOrEmpty = sub_1C21F74(v15, v10->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v30 = sub_1C220B8();
          sub_1C21F60(v30, 0LL);
        }
        if ( v12 >= v10->max_length )
LABEL_24:
          sub_1C2209C(IsNullOrEmpty, v4);
        *(_QWORD *)(v13 + 8 * v12) = v15;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + v11), v15, v23, v24, v25, v26, v27, v28);
        ++v12;
        v14 += 2;
        v11 += 8LL;
      }
      while ( (__int64)v12 < (int)v10->max_length );
    }
  }
  return v10;
}


System_String_array *__fastcall QuestAfterAction__GetAfterAction(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v8; // w23
  System_String_array *v9; // x22
  const MethodInfo *v10; // x1
  bool IsOverwriteCommandNone; // w8
  System_String_array *result; // x0
  Il2CppObject *v13; // x20
  System_String_array *v14; // x19

  if ( (byte_4BD92B8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_string___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92B8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_33;
  v9 = QuestPhaseDetailAddMaster__GetAfterAction(
         (QuestPhaseDetailAddMaster_o *)MasterData_object,
         v8,
         *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
         0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v9, v10);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v9;
  if ( v9 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v13 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v13 )
LABEL_33:
    sub_1C22094(Instance, v6);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v14 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_string___) )
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
  Il2CppObject *MasterData_object; // x22
  int32_t v8; // w23
  System_String_array *v9; // x22
  const MethodInfo *v10; // x1
  bool IsOverwriteCommandNone; // w8
  System_String_array *result; // x0
  Il2CppObject *v13; // x20
  System_String_array *v14; // x19

  if ( (byte_4BD92B7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_string___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92B7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_33;
  v9 = QuestPhaseDetailAddMaster__GetBeforeAction(
         (QuestPhaseDetailAddMaster_o *)MasterData_object,
         v8,
         *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
         0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v9, v10);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v9;
  if ( v9 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v13 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v13 )
LABEL_33:
    sub_1C22094(Instance, v6);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v14 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_string___) )
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
        return dword_C38504[commandId - 1000];
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


Il2CppObject *__fastcall QuestAfterAction__GetMapComponent_object_(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo_3041D88 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C73D70();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !MapGameObject )
    sub_1C22094(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_3000534 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  UnityEngine_Transform_o *v11; // x23
  const MethodInfo *v12; // x3

  v8 = this;
  if ( (byte_4BD92B3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (QuestAfterAction_o *)sub_1C21E38(&SrcSpotBasePrefab_TypeInfo);
    byte_4BD92B3 = 1;
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
        v9 = 0LL;
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
        sub_1C22094(this, *(_QWORD *)&comType);
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
    v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0LL);
    goto LABEL_35;
  }
  this = (QuestAfterAction_o *)v8->fields.mGimmickRoot;
  if ( !this )
    goto LABEL_45;
  v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, 0LL);
  if ( !v11 )
    goto LABEL_45;
  v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v11, (System_String_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
  {
    this = (QuestAfterAction_o *)v8->fields.mUIGimmickRoot;
    if ( !this )
      goto LABEL_45;
    goto LABEL_30;
  }
LABEL_35:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( !state )
      goto LABEL_45;
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
    if ( !v9 )
      goto LABEL_45;
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
  }
}


System_Int32_array *__fastcall QuestAfterAction__GetMapGimmickId(
        QuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  Il2CppObject *Instance; // x0
  __int64 name_low; // x1
  Il2CppObject *v7; // x21
  __int64 v8; // x0
  int monitor; // w8
  Il2CppObject *v10; // x21
  unsigned int v11; // w23
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4BD92A2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C21E38(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys_MapGimmickEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD92A2 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  v7 = Instance;
  v8 = sub_1C21F6C(Instance->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys_MapGimmickEntity___
                                           + 40)
                                         + 1].methodPtr);
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v8 + 8))(v7, v8);
  if ( !Instance )
    goto LABEL_19;
  monitor = (int)Instance[1].monitor;
  v10 = Instance;
  if ( monitor >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= monitor )
        sub_1C2209C(Instance, name_low);
      v12 = &v10->klass + (int)v11;
      v13 = v12[4];
      if ( !v13 )
        break;
      Instance = (Il2CppObject *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v12[4], 0LL);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v4 )
          break;
        name_low = LODWORD(v13->_1.name);
        items = v4->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          break;
        size = v4->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            name_low,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size + 1] = name_low;
        }
      }
      monitor = (int)v10[1].monitor;
      if ( (int)++v11 >= monitor )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C22094(Instance, name_low);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4BD92B1 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4BD92B1 = 1;
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
  struct CStateManager_QuestAfterAction__o **p_fsm; // x20
  CStateManager_T__o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v13; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x21
  Il2CppObject *v19; // x22
  CStateManager_T__o *v20; // x20
  Il2CppObject *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t v28; // w20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v29; // x21
  int v30; // w8
  System_Collections_Generic_List_int__o *v31; // x22
  Il2CppObject *Component_object; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_List_int__o *v45; // x20
  struct System_Collections_Generic_List_int__o **p_invalidMapGimmickIdList; // x19
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4BD929D & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_QuestAfterAction___ctor__);
    sub_1C21E38(&Method_CStateManager_QuestAfterAction__add__);
    sub_1C21E38(&CStateManager_QuestAfterAction__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&QuestAfterAction_StateAdditional_TypeInfo);
    sub_1C21E38(&QuestAfterAction_StateInstant_TypeInfo);
    sub_1C21E38(&QuestAfterAction_StateMain_TypeInfo);
    sub_1C21E38(&QuestAfterAction_StateNone_TypeInfo);
    byte_4BD929D = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v5 = (CStateManager_T__o *)sub_1C22084(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_31E6A20 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v5, v6, v7, v8, v9, v10, v11);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v13 = (Il2CppObject *)sub_1C22084(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v13, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_QuestAfterAction__add__);
    v16 = (CStateManager_T__o *)*p_fsm;
    v17 = (Il2CppObject *)sub_1C22084(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !v16 )
      goto LABEL_21;
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_QuestAfterAction__add__);
    v18 = (CStateManager_T__o *)*p_fsm;
    v19 = (Il2CppObject *)sub_1C22084(QuestAfterAction_StateAdditional_TypeInfo);
    System_Object___ctor(v19, 0LL);
    if ( !v18 )
      goto LABEL_21;
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_QuestAfterAction__add__);
    v20 = (CStateManager_T__o *)*p_fsm;
    v21 = (Il2CppObject *)sub_1C22084(QuestAfterAction_StateInstant_TypeInfo);
    System_Object___ctor(v21, 0LL);
    if ( !v20 )
      goto LABEL_21;
    CStateManager_object___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.commandBuf, 0LL, v22, v23, v24, v25, v26, v27);
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
                                                                                (const MethodInfo_32E646C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v29 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v28,
                                                                                  (const MethodInfo_32E61D8 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v30 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v30;
    }
    else
    {
      v31 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v31,
        (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v29 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v29,
        v28,
        (Il2CppObject *)v31,
        (const MethodInfo_32E6264 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v28;
  }
  while ( v28 != 5 );
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
  if ( !commandTypeIds
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)commandTypeIds,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.screenCollider,
          (int64_t)Component_object,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_1C22094(commandTypeIds, v15);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.lastDispSpot, 0LL, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v45;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_invalidMapGimmickIdList, (int64_t)v45, v47, v48, v49, v50, v51, v52);
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0

  if ( (byte_4BD92A5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4BD92A5 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_32E646C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_32E61D8 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1C22094(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_1C2209C(this, *(_QWORD *)&spotId);
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
    sub_1C22094(this, *(_QWORD *)&spotId);
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
        sub_1C2209C(this, method);
      v6 = m_Items[v4];
      if ( !v6 )
        sub_1C22094(this, method);
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

  if ( (byte_4BD92B6 & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD92B6 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1C22094(v2, method);
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
        sub_1C2209C(actionCommand, method);
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

  if ( (byte_4BD92B1 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4BD92B1 = 1;
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  int64_t klass; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  struct TerminalTransitionInfo_o *v29; // x8
  EventMissionActionEntity_o *v30; // x0
  EventMissionActionEntity_o *v31; // x23
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x23
  TerminalPramsManager_c *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t vals; // x1
  struct TerminalTransitionInfo_o *v42; // x8
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BD92A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ShopActionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__);
    sub_1C21E38(&EventMissionActionInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD92A9 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0LL);
  if ( !TerminalTransitionInfoData )
    return;
  v4 = TerminalTransitionInfoData;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v4->fields.shopId,
                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v12 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v13 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v12[1].monitor,
                (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v13 || !EventEntity__IsEventPeriod((EventEntity_o *)v13, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_object )
          goto LABEL_67;
        Master_object = (char *)ShopActionMaster__GetEntityList(
                                  (ShopActionMaster_o *)Master_object,
                                  (int32_t)v12[1].klass,
                                  0LL);
        if ( !Master_object )
          goto LABEL_67;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v43,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v44 = v43;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v44,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v14 )
            break;
          current = v44.fields._current;
          if ( !v44.fields._current )
            sub_1C22094(v14, v15);
          if ( LODWORD(v44.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BD92E4 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD92E4 = 1;
            }
            v17 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v17 = TerminalPramsManager_TypeInfo;
            }
            v17->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0LL);
            TransitionInfo_k__BackingField = v6->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_1C22094(0LL, v18);
            klass = (int64_t)current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              klass,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
            v29 = v6->fields._TransitionInfo_k__BackingField;
            if ( !v29 )
              sub_1C22094(v27, v28);
            v29->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v44,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v7 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_object )
      goto LABEL_67;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_object,
                                              v4->fields.missionId,
                                              5,
                                              4,
                                              0LL);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v9 = EntityFromIdProgressTypeAndActionType;
      v10 = (EventMissionActionInfo_o *)sub_1C22084(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_43383248(v10, v9, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_object )
        goto LABEL_67;
      v30 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_object,
              v4->fields.missionId,
              5,
              4,
              0LL);
      if ( !v30 )
        return;
      v31 = v30;
      v10 = (EventMissionActionInfo_o *)sub_1C22084(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v10, v31, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v7,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v32 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v4->fields.missionId,
            (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v32 )
    {
      v33 = v32;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v33[1].monitor),
                                (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD92E4 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD92E4 = 1;
        }
        v34 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v34 = TerminalPramsManager_TypeInfo;
        }
        v34->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0LL);
        if ( v10 )
        {
          Master_object = (char *)v6->fields._TransitionInfo_k__BackingField;
          if ( Master_object )
          {
            vals = (int64_t)v10->fields.vals;
            *((_QWORD *)Master_object + 4) = vals;
            sub_1C21DDC((PartyOrganizationUtility_o *)(Master_object + 32), vals, v35, v36, v37, v38, v39, v40);
            v42 = v6->fields._TransitionInfo_k__BackingField;
            if ( v42 )
            {
              v42->fields.optionId = v10->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1C22094(Master_object, v3);
      }
LABEL_66:
      TerminalSceneComponent__ClearTransitionInfo(v6, 0LL);
    }
  }
}


void __fastcall QuestAfterAction__LoadVoice(
        QuestAfterAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_4BD92A6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_4BD92A6 = 1;
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
      sub_1C22094(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_32B585C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_56945064(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_34907532(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v7,
      endAct,
      v8);
  }
}


void __fastcall QuestAfterAction__LoadVoice_34907532(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *Instance; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **v16; // x28
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Action_o **v23; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_String_o *VoiceAssetName_41121704; // x19
  Il2CppObject *v31; // x20
  System_Action_o *v32; // x22

  while ( 1 )
  {
    if ( (byte_4BD92A7 & 1) == 0 )
    {
      sub_1C21E38(&System_Action_TypeInfo);
      sub_1C21E38(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
      sub_1C21E38(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
      sub_1C21E38(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
      sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      sub_1C21E38(&Method_QuestAfterAction___c__DisplayClass74_0__LoadVoice_b__0__);
      sub_1C21E38(&QuestAfterAction___c__DisplayClass74_0_TypeInfo);
      byte_4BD92A7 = 1;
    }
    v7 = sub_1C22084(QuestAfterAction___c__DisplayClass74_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    if ( !v7 )
      goto LABEL_17;
    *(_QWORD *)(v7 + 16) = svtVInfos;
    v16 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **)(v7 + 16);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)svtVInfos, v10, v11, v12, v13, v14, v15);
    *(_QWORD *)(v7 + 24) = this;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
    *(_QWORD *)(v7 + 32) = endAct;
    v23 = (System_Action_o **)(v7 + 32);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)endAct, v24, v25, v26, v27, v28, v29);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 16),
            (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
        ActionExtensions__Call(*v23, 0LL);
        return;
      }
LABEL_17:
      sub_1C22094(Instance, v9);
    }
    Instance = *v16;
    if ( !*v16 )
      goto LABEL_17;
    Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  (System_Collections_Generic_List_object__o *)Instance,
                                                                                  0,
                                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
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
      (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    svtVInfos = *v16;
    endAct = *v23;
  }
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  Instance = *v16;
  if ( !*v16 )
    goto LABEL_17;
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)Instance,
                                                                                0,
                                                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_17;
  VoiceAssetName_41121704 = ServantVoiceEntity__getVoiceAssetName_41121704((int32_t)Instance->fields._items, 0LL);
  v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v32 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)v7, Method_QuestAfterAction___c__DisplayClass74_0__LoadVoice_b__0__, 0LL);
  if ( !v31 )
    goto LABEL_17;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v31, VoiceAssetName_41121704, v32, 1, 0LL);
}


System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4BD92B5 & 1) == 0 )
  {
    sub_1C21E38(&SrcSpotBasePrefab_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD92B5 = 1;
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

  if ( (byte_4BD92AF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4BD92AF = 1;
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
    sub_1C22094(screenCollider, v4);
  }
  v7 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v7;
  QuestAfterAction__Init(this, v4);
  this->fields.isKeepingMainStateButFinished = 0;
}


void __fastcall QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Action_o *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4BD92AB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&Method_QuestAfterAction___c__DisplayClass78_0__Play_b__0__);
    sub_1C21E38(&QuestAfterAction___c__DisplayClass78_0_TypeInfo);
    byte_4BD92AB = 1;
  }
  v5 = sub_1C22084(QuestAfterAction___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = endAct,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)endAct, v8, v9, v10, v11, v12, v13),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1C22094(Instance, v7);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_QuestAfterAction___c__DisplayClass78_0__Play_b__0__, 0LL);
  this->fields.endAct = v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)v14, v15, v16, v17, v18, v19, v20);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Action_o *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x2
  System_Collections_IEnumerator_o *v39; // x1

  if ( (byte_4BD92AC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__0__);
    sub_1C21E38(&Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__1__);
    sub_1C21E38(&QuestAfterAction___c__DisplayClass79_0_TypeInfo);
    byte_4BD92AC = 1;
  }
  v7 = sub_1C22084(QuestAfterAction___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)finishCallback, v16, v17, v18, v19, v20, v21);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v22);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.temporaryCommandBuf,
    (int64_t)CommandBuf,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1C22094(Instance, v9);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v30 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__1__,
    0LL);
  v39 = QuestAfterAction__WaitWhileMainStateFinished(this, v37, v38);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v39, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Action_o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4BD92AE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__82_0__);
    byte_4BD92AE = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.temporaryCommandBuf,
      (int64_t)commandArray,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__82_0__,
      0LL);
    this->fields.endAct = v11;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)v11, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4BD92B4 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD92B4 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD736A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD736A = 1;
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
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v9->fields.subRootGimmickP->klass;
  if ( !klass || (v9 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1C22094(v9, v7);
  ScrTerminalMap__RequestMapChange(v9, 0, -1, -1, 0LL);
}


void __fastcall QuestAfterAction__SetActionMap(
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
  if ( (byte_4BD92A4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (QuestAfterAction_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD92A4 = 1;
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
                sub_1C2209C(this, com);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1C22094(this, com);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v14 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v14,
                                             (int32_t)this,
                                             (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_4BD92B2 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_QuestAfterAction__setState__);
    byte_4BD92B2 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C22094(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_31E6B54 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4BD92AA & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_QuestAfterAction__update__);
    byte_4BD92AA = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_31E6B30 *)Method_CStateManager_QuestAfterAction__update__);
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

  if ( (byte_4BD92B0 & 1) == 0 )
  {
    sub_1C21E38(&QuestAfterAction__WaitWhileMainStateFinished_d__85_TypeInfo);
    byte_4BD92B0 = 1;
  }
  v5 = sub_1C22084(QuestAfterAction__WaitWhileMainStateFinished_d__85_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)action, v12, v13, v14, v15, v16, v17);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.endAct, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.temporaryCommandBuf, 0LL, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4BD92A3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4BD92A3 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1C22094(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *VoiceAssetName_41121704; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BD92A8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BD92A8 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_32B585C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v5 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v9.fields._current )
      sub_1C22094(v6, v7);
    VoiceAssetName_41121704 = ServantVoiceEntity__getVoiceAssetName_41121704((int32_t)v9.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_41121704, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1C22094(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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
  __int64 v19; // x1
  int v20; // w8
  void *v21; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BD92BA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor___77587768);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&System_Random_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    byte_4BD92BA = 1;
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
  v6 = (System_Collections_Generic_IEnumerable_T__o *)param;
  if ( *((int *)param + 6) > 1 )
  {
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_56945064(
        v8,
        v6,
        (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_string___ctor___77587768);
      result = 0;
      v9 = (System_Random_o *)sub_1C22084(System_Random_TypeInfo);
      System_Random___ctor(v9, 0LL);
      if ( v8 )
      {
        if ( v9 )
        {
          size = (unsigned int)v8->fields._size;
          while ( 1 )
          {
            v11 = ((__int64 (__fastcall *)(System_Random_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._7_Next.method)(
                    v9,
                    size,
                    v9->klass->vtable._8_NextDouble.methodPtr);
            result = 0;
            param = System_Collections_Generic_List_object___get_Item(
                      v8,
                      v11,
                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
            if ( !param )
              break;
            param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
            if ( !param )
              break;
            v12 = *((_DWORD *)param + 6);
            v13 = param;
            if ( v12 == 3 )
            {
              v18 = System_Int32__TryParse(*((System_String_o **)param + 4), &result, 0LL);
              if ( *((_DWORD *)v13 + 6) < 3u )
                goto LABEL_42;
              param = System_String__Concat_63126736(
                        *((System_String_o **)v13 + 5),
                        (System_String_o *)StringLiteral_16399/*"_"*/,
                        *((System_String_o **)v13 + 6),
                        0LL);
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
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4BD7183 )
              {
                sub_1C21E38(&TerminalSceneComponent_TypeInfo);
                byte_4BD7183 = 1;
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
              param = (void *)ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v16 + 40), 0LL);
              if ( !MasterData_object )
                break;
              v17 = (int)param;
            }
            if ( VoicePlayCondMaster__isVoicePlay(
                   (VoicePlayCondMaster_o *)MasterData_object,
                   v17,
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
              v8,
              v11,
              (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v8->fields._size;
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
    sub_1C22094(param, svtId);
  }
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
  if ( !param )
    goto LABEL_41;
  v20 = *((_DWORD *)param + 6);
  v21 = param;
  if ( v20 != 3 )
  {
    if ( v20 == 2 )
      return this->fields.param;
    return 0LL;
  }
  v18 = System_Int32__TryParse(*((System_String_o **)param + 4), svtId, 0LL);
  if ( *((_DWORD *)v21 + 6) < 3u )
LABEL_42:
    sub_1C2209C(v18, v19);
  return System_String__Concat_63126736(
           *((System_String_o **)v21 + 5),
           (System_String_o *)StringLiteral_16399/*"_"*/,
           *((System_String_o **)v21 + 6),
           0LL);
}


System_String_o *__fastcall QuestAfterAction_Command__GetBgmName(
        QuestAfterAction_Command_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  bool v4; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4BD92BC & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C21E38(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD92BC = 1;
  }
  result = 0;
  entity = 0LL;
  v3 = 0LL;
  if ( this->fields.id == 851 )
  {
    v4 = System_Int32__TryParse(this->fields.param, &result, 0LL);
    v3 = 0LL;
    if ( v4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_325BE14 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1C22094(Instance, v6);
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
  System_String_o **v3; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( this->fields.id != 800 )
    return 0;
  v3 = (System_String_o **)str;
  if ( !str || (v3 = (System_String_o **)System_String__Split(str, 0x5Fu, 0, 0LL)) == 0LL )
    sub_1C22094(v3, str);
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
  if ( (byte_4BD92BB & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1C21E38(&StringLiteral_16399/*"_"*/);
    byte_4BD92BB = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1C22094(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_63126736(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16399/*"_"*/,
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
    sub_1C22094(this, method);
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
    sub_1C22094(screenCollider, v5);
  }
  monitor = (System_Action_o *)screenCollider[7].monitor;
  p_monitor = (PartyOrganizationUtility_o *)&screenCollider[7].monitor;
  p_monitor->klass = 0LL;
  sub_1C21DDC(p_monitor, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(0LL, v7);
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
    sub_1C22094(0LL, v7);
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
  Il2CppObject *MapComponent_object; // x21
  Il2CppClass *klass; // x8

  v2 = this;
  if ( (byte_4BD92C1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    this = (QuestAfterAction_StateMain_o *)sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4BD92C1 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_22;
  v4 = *(_QWORD *)&this->fields.IsAnimDoing;
  v5 = this;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1C2209C(this, method);
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
        (const MethodInfo_363358C *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v8,
                              v2,
                              (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_35202432(
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
      LODWORD(v4) = *(_DWORD *)&v5->fields.IsAnimDoing;
      if ( (__int64)++v6 >= (int)v4 )
        return;
    }
LABEL_22:
    sub_1C22094(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  int64_t v5; // x22
  __int64 updated; // x0
  QuestAfterAction_o *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v22; // x21
  QuestAfterAction_Command_o *v23; // x21
  BlankEarthQuestAfterAction_o *v24; // x23
  System_Action_o *v25; // x24
  const MethodInfo *v26; // x5
  int id; // w8
  float v28; // s0
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v30; // x0
  TerminalSceneComponent_c *v31; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v33; // x20
  TerminalSceneComponent_o *v34; // x0
  float v35; // s0
  System_Action_o *v36; // x1
  System_String_o *v37; // x19
  System_String_o *v38; // x20
  System_String_o *v39; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v41; // x23
  __int64 v42; // x8
  __int64 v43; // x23
  float v44; // s0
  System_String_o *param; // x21
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  __int64 v48; // x20
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x23
  __int64 v56; // x8
  __int64 v57; // x22
  int32_t v58; // w21
  bool v59; // w24
  bool v60; // w26
  __int64 v61; // x23
  int32_t v62; // w21
  int32_t v63; // w22
  int32_t v64; // w23
  __int64 v65; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x8
  QuestAfterAction_o *v73; // x22
  Il2CppObject *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  UnityEngine_Object_o *v81; // x19
  SrcSpotBasePrefab_o *v82; // x19
  System_Action_o *v83; // x21
  int32_t v84; // w1
  __int64 v85; // x23
  float v86; // s0
  float v87; // s9
  float v88; // s0
  float v89; // s10
  float v90; // s0
  float v91; // s11
  float v92; // s0
  float v93; // s8
  int32_t v94; // w19
  __int64 v95; // x8
  float v96; // s8
  const MethodInfo_376FA28 *v97; // x2
  float v98; // s0
  float v99; // s1
  float v100; // s2
  float v101; // s10
  float v102; // s9
  float v103; // s11
  MapCamera_o *v104; // x20
  System_Action_o *v105; // x21
  MapCamera_o *v106; // x0
  float v107; // s0
  float v108; // s1
  float v109; // s2
  float v110; // s3
  int32_t v111; // w1
  __int64 v112; // x20
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  __int64 v119; // x8
  QuestAfterAction_o *v120; // x22
  Il2CppObject *v121; // x0
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  UnityEngine_Object_o *v128; // x19
  ModelLineComponent_o *v129; // x19
  System_Action_o *v130; // x21
  const MethodInfo *v131; // x3
  int32_t v132; // w1
  TerminalPramsManager_c *v133; // x0
  __int64 v134; // x8
  const MethodInfo *v135; // x2
  __int64 v136; // x8
  QuestAfterAction_TitleInfoControlCallback_o *v137; // x21
  __int64 v138; // x20
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  __int64 v145; // x23
  int32_t v146; // w21
  Il2CppObject *v147; // x0
  __int64 *v148; // x24
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  const MethodInfo *v155; // x2
  __int64 v156; // x22
  int v157; // w21
  __int64 v158; // x8
  NetworkManager_ResultCallbackFunc_o *v159; // x21
  Il2CppObject *Request_object; // x20
  int32_t v161; // w21
  TerminalSceneComponent_c *v162; // x0
  TerminalSceneComponent_o *v163; // x22
  __int64 v164; // x8
  PlayMakerFSM_o *v165; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v167; // x8
  __int64 v168; // x8
  QuestBoardListViewManager_o *v169; // x21
  System_Action_o *v170; // x22
  __int64 v171; // x22
  int v172; // w23
  float v173; // s8
  int32_t v174; // w21
  __int64 v175; // x8
  __int64 v176; // x21
  int32_t v177; // w20
  __int64 v178; // x8
  __int64 v179; // x8
  __int64 v180; // x8
  __int64 v181; // x8
  System_String_o *v182; // x20
  System_String_o *v183; // x21
  SeManager_c *v184; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v186; // x21
  int32_t v187; // w20
  int32_t v188; // w22
  TerminalPramsManager_c *v189; // x0
  __int64 v190; // x8
  const MethodInfo *v191; // x2
  TerminalPramsManager_c *v192; // x0
  System_String_o *v193; // x23
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  System_String_array *v200; // x20
  int64_t v201; // x1
  int v202; // w8
  System_String_o *v203; // x19
  System_String_o *v204; // x20
  System_String_o *v205; // x19
  System_String_o *v206; // x20
  System_String_o *v207; // x20
  Il2CppObject *v208; // x21
  System_Action_o *v209; // x23
  int *v210; // x10
  System_String_o *v211; // x23
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  System_String_array *v218; // x20
  int64_t v219; // x1
  int v220; // w8
  System_String_o *v221; // x19
  System_String_o *v222; // x20
  System_String_o *v223; // x20
  Il2CppObject *v224; // x21
  System_Action_o *v225; // x23
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v227; // x20
  __int64 v228; // x8
  ScrTerminalMap_o *v229; // x23
  __int64 v230; // x8
  ScrTerminalMap_o *v231; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v233; // x23
  __int64 v234; // x8
  float v235; // s0
  __int64 v236; // x8
  float v237; // s0
  __int64 v238; // x23
  float v239; // s0
  float v240; // s8
  int32_t v241; // w22
  __int64 v242; // x8
  ScrTerminalMap_o *v243; // x24
  float v244; // s0
  float v245; // s9
  float v246; // s0
  const MethodInfo_376FA28 *v247; // x2
  int v248; // w8
  float v249; // s10
  float v250; // s9
  float v251; // s11
  MapCamera_o *v252; // x20
  __int64 v253; // x21
  int32_t v254; // w0
  int32_t v255; // w20
  float v256; // s8
  int32_t v257; // w19
  __int64 v258; // x20
  int64_t v259; // x2
  int32_t v260; // w3
  System_String_o *v261; // x4
  BattleSetupInfo_o *v262; // x5
  FollowerInfo_o *v263; // x6
  PartyListViewItem_o *v264; // x7
  __int64 v265; // x8
  QuestAfterAction_o *v266; // x22
  Il2CppObject *v267; // x0
  int64_t v268; // x2
  int32_t v269; // w3
  System_String_o *v270; // x4
  BattleSetupInfo_o *v271; // x5
  FollowerInfo_o *v272; // x6
  PartyListViewItem_o *v273; // x7
  UnityEngine_Object_o *v274; // x19
  __int64 v275; // x23
  int64_t v276; // x2
  int32_t v277; // w3
  System_String_o *v278; // x4
  BattleSetupInfo_o *v279; // x5
  FollowerInfo_o *v280; // x6
  PartyListViewItem_o *v281; // x7
  __int64 v282; // x20
  QuestAfterAction_o *v283; // x22
  Il2CppObject *v284; // x0
  int64_t *v285; // x19
  int64_t v286; // x2
  int32_t v287; // w3
  System_String_o *v288; // x4
  BattleSetupInfo_o *v289; // x5
  FollowerInfo_o *v290; // x6
  PartyListViewItem_o *v291; // x7
  UnityEngine_Object_o *v292; // x21
  SrcSpotBasePrefab_o *v293; // x21
  System_Action_o *v294; // x22
  int64_t v295; // x2
  int32_t v296; // w3
  System_String_o *v297; // x4
  BattleSetupInfo_o *v298; // x5
  FollowerInfo_o *v299; // x6
  PartyListViewItem_o *v300; // x7
  int64_t v301; // x1
  PartyOrganizationUtility_o *v302; // x0
  __int64 v303; // x22
  QuestAfterAction_o *v304; // x21
  Il2CppObject *v305; // x21
  System_Action_o *v306; // x22
  QuestAfterAction_o *v307; // x22
  Il2CppObject *v308; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v310; // x0
  int32_t v311; // w1
  QuestAfterAction_o *v312; // x22
  Il2CppObject *v313; // x21
  _DWORD *v314; // x8
  QuestAfterAction_o *v315; // x22
  _DWORD *v316; // x8
  __int64 v317; // x21
  QuestAfterAction_o *v318; // x22
  Il2CppObject *v319; // x22
  SceneJumpInfo_o *v320; // x21
  TerminalPramsManager_c *v321; // x0
  TerminalPramsManager_c *v322; // x0
  int32_t v323; // w21
  TerminalPramsManager_c *v324; // x0
  QuestAfterAction_o *v325; // x20
  Il2CppObject *v326; // x20
  TerminalPramsManager_c *v327; // x0
  MapCamera_o *v328; // x20
  float v329; // s0
  System_Action_o *v330; // x21
  MapCamera_o *v331; // x0
  float v332; // s0
  int32_t v333; // w4
  int v334; // w23
  __int64 v335; // x21
  float v336; // s0
  float v337; // s8
  float v338; // s0
  MapCamera_o *v339; // x19
  float v340; // s0
  float v341; // s9
  int32_t v342; // w20
  __int64 v343; // x20
  int64_t v344; // x2
  int32_t v345; // w3
  System_String_o *v346; // x4
  BattleSetupInfo_o *v347; // x5
  FollowerInfo_o *v348; // x6
  PartyListViewItem_o *v349; // x7
  __int64 v350; // x8
  QuestAfterAction_o *v351; // x22
  Il2CppObject *v352; // x0
  int64_t v353; // x2
  int32_t v354; // w3
  System_String_o *v355; // x4
  BattleSetupInfo_o *v356; // x5
  FollowerInfo_o *v357; // x6
  PartyListViewItem_o *v358; // x7
  UnityEngine_Object_o *v359; // x19
  __int64 v360; // x20
  int64_t v361; // x2
  int32_t v362; // w3
  System_String_o *v363; // x4
  BattleSetupInfo_o *v364; // x5
  FollowerInfo_o *v365; // x6
  PartyListViewItem_o *v366; // x7
  __int64 v367; // x8
  QuestAfterAction_o *v368; // x22
  Il2CppObject *v369; // x0
  int64_t v370; // x2
  int32_t v371; // w3
  System_String_o *v372; // x4
  BattleSetupInfo_o *v373; // x5
  FollowerInfo_o *v374; // x6
  PartyListViewItem_o *v375; // x7
  UnityEngine_Object_o *v376; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v378; // x22
  UnityEngine_Object_o *v379; // x21
  const MethodInfo *v380; // x2
  _DWORD *v381; // x8
  _BOOL4 v382; // w23
  QuestAfterAction_o *v383; // x22
  UnityEngine_Object_o *v384; // x21
  const MethodInfo *v385; // x2
  const MethodInfo *v386; // x2
  _DWORD *v387; // x8
  _BOOL4 v388; // w23
  QuestAfterAction_o *v389; // x22
  UnityEngine_Object_o *v390; // x21
  const MethodInfo *v391; // x2
  const MethodInfo *v392; // x2
  System_Action_o *v393; // x20
  const MethodInfo *v394; // x2
  Il2CppObject *v395; // x21
  System_Action_o *v396; // x23
  float v397; // s0
  float v398; // s0
  float v399; // s0
  QuestAfterAction_o *v400; // x24
  const MethodInfo *v401; // x4
  UnityEngine_Object_o *v402; // x24
  float v403; // s10
  float v404; // s8
  float v405; // s9
  __int64 v406; // x8
  const MethodInfo_376FA28 *v407; // x2
  System_String_o *v408; // x24
  QuestAfterAction_o *v409; // x24
  const MethodInfo *v410; // x4
  UnityEngine_Object_o *v411; // x24
  float v412; // s8
  float v413; // s9
  float v414; // s10
  __int64 v415; // x8
  float v416; // s0
  float v417; // s1
  float v418; // s2
  QuestAfterAction_o *v419; // x24
  const MethodInfo *v420; // x4
  UnityEngine_Object_o *v421; // x24
  __int64 v422; // x8
  int v423; // w8
  __int64 v424; // x8
  MapCamera_o *v425; // x20
  MapCamera_o *v426; // x0
  float v427; // s0
  float v428; // s1
  float v429; // s2
  __int64 v430; // x23
  int64_t v431; // x2
  int32_t v432; // w3
  System_String_o *v433; // x4
  BattleSetupInfo_o *v434; // x5
  FollowerInfo_o *v435; // x6
  PartyListViewItem_o *v436; // x7
  __int64 v437; // x20
  __int64 v438; // x8
  __int64 v439; // x21
  int32_t v440; // w22
  bool v441; // w26
  bool v442; // w27
  __int64 v443; // x8
  __int64 v444; // x22
  int32_t v445; // w21
  bool v446; // w22
  __int64 v447; // x8
  __int64 v448; // x22
  int32_t v449; // w21
  bool v450; // w22
  __int64 v451; // x21
  float v452; // s0
  QuestAfterAction_o *v453; // x20
  float v454; // s8
  Il2CppObject *v455; // x20
  _BOOL4 v456; // w23
  __int64 v457; // x20
  int64_t v458; // x2
  int32_t v459; // w3
  System_String_o *v460; // x4
  BattleSetupInfo_o *v461; // x5
  FollowerInfo_o *v462; // x6
  PartyListViewItem_o *v463; // x7
  __int64 v464; // x8
  QuestAfterAction_o *v465; // x22
  Il2CppObject *v466; // x0
  int64_t v467; // x2
  int32_t v468; // w3
  System_String_o *v469; // x4
  BattleSetupInfo_o *v470; // x5
  FollowerInfo_o *v471; // x6
  PartyListViewItem_o *v472; // x7
  UnityEngine_Object_o *v473; // x19
  MapGimmickComponent_o *v474; // x19
  System_Action_o *v475; // x21
  TerminalSceneComponent_o *v476; // x19
  __int64 v477; // x20
  int64_t v478; // x2
  int32_t v479; // w3
  System_String_o *v480; // x4
  BattleSetupInfo_o *v481; // x5
  FollowerInfo_o *v482; // x6
  PartyListViewItem_o *v483; // x7
  System_String_array *v484; // x0
  __int64 *v485; // x21
  int64_t v486; // x2
  int32_t v487; // w3
  System_String_o *v488; // x4
  BattleSetupInfo_o *v489; // x5
  FollowerInfo_o *v490; // x6
  PartyListViewItem_o *v491; // x7
  __int64 v492; // x8
  __int64 v493; // x9
  QuestAfterAction_o *v494; // x21
  Il2CppObject *v495; // x0
  int64_t v496; // x2
  int32_t v497; // w3
  System_String_o *v498; // x4
  BattleSetupInfo_o *v499; // x5
  FollowerInfo_o *v500; // x6
  PartyListViewItem_o *v501; // x7
  UnityEngine_Object_o *v502; // x19
  MapGimmickComponent_o *v503; // x19
  System_Action_o *v504; // x0
  __int64 *v505; // x8
  System_Action_o *v506; // x21
  __int64 v507; // x21
  QuestAfterAction_o *v508; // x20
  Il2CppObject *v509; // x20
  UIWidget_o *v510; // x20
  int64_t v511; // x2
  int32_t v512; // w3
  System_String_o *v513; // x4
  BattleSetupInfo_o *v514; // x5
  FollowerInfo_o *v515; // x6
  PartyListViewItem_o *v516; // x7
  __int64 v517; // x8
  QuestAfterAction_o *v518; // x22
  Il2CppObject *v519; // x0
  __int64 v520; // x19
  int64_t v521; // x2
  int32_t v522; // w3
  System_String_o *v523; // x4
  BattleSetupInfo_o *v524; // x5
  FollowerInfo_o *v525; // x6
  PartyListViewItem_o *v526; // x7
  UnityEngine_Object_o *v527; // x21
  bool v528; // w0
  bool v529; // w22
  int32_t v530; // w1
  __int64 v531; // x8
  __int64 v532; // x22
  int32_t v533; // w21
  bool v534; // w22
  __int64 v535; // x22
  QuestAfterAction_o *v536; // x21
  Il2CppObject *v537; // x21
  QuestAfterAction_o *v538; // x23
  const MethodInfo *v539; // x4
  int32_t v540; // w2
  QuestAfterAction_o *v541; // x0
  int32_t v542; // w1
  QuestAfterAction_o *v543; // x21
  QuestAfterAction_o *v544; // x23
  const MethodInfo *v545; // x4
  UnityEngine_Object_o *MapGameObject; // x23
  float v547; // s0
  float v548; // s1
  float v549; // s2
  float x; // s9
  float y; // s8
  float z; // s10
  QuestAfterAction_o *v553; // x21
  QuestAfterAction_o *v554; // x23
  UnityEngine_Object_o *v555; // x23
  __int64 v556; // x8
  float v557; // s0
  float v558; // s11
  int32_t v559; // w23
  System_String_o *v560; // x20
  __int64 v561; // x20
  int64_t v562; // x2
  int32_t v563; // w3
  System_String_o *v564; // x4
  BattleSetupInfo_o *v565; // x5
  FollowerInfo_o *v566; // x6
  PartyListViewItem_o *v567; // x7
  __int64 v568; // x8
  QuestAfterAction_o *v569; // x22
  Il2CppObject *v570; // x0
  int64_t v571; // x2
  int32_t v572; // w3
  System_String_o *v573; // x4
  BattleSetupInfo_o *v574; // x5
  FollowerInfo_o *v575; // x6
  PartyListViewItem_o *v576; // x7
  UnityEngine_Object_o *v577; // x19
  srcLineSprite_o *v578; // x19
  System_Action_o *v579; // x21
  int32_t v580; // w1
  __int64 v581; // x20
  int64_t v582; // x2
  int32_t v583; // w3
  System_String_o *v584; // x4
  BattleSetupInfo_o *v585; // x5
  FollowerInfo_o *v586; // x6
  PartyListViewItem_o *v587; // x7
  __int64 v588; // x8
  QuestAfterAction_o *v589; // x22
  Il2CppObject *v590; // x0
  int64_t v591; // x2
  int32_t v592; // w3
  System_String_o *v593; // x4
  BattleSetupInfo_o *v594; // x5
  FollowerInfo_o *v595; // x6
  PartyListViewItem_o *v596; // x7
  UnityEngine_Object_o *v597; // x19
  __int64 v598; // x20
  int64_t v599; // x2
  int32_t v600; // w3
  System_String_o *v601; // x4
  BattleSetupInfo_o *v602; // x5
  FollowerInfo_o *v603; // x6
  PartyListViewItem_o *v604; // x7
  __int64 v605; // x8
  QuestAfterAction_o *v606; // x22
  Il2CppObject *v607; // x0
  int64_t v608; // x2
  int32_t v609; // w3
  System_String_o *v610; // x4
  BattleSetupInfo_o *v611; // x5
  FollowerInfo_o *v612; // x6
  PartyListViewItem_o *v613; // x7
  UnityEngine_Object_o *v614; // x19
  UnityEngine_Object_o *v615; // x21
  UnityEngine_Object_o *v616; // x21
  int v617; // w9
  UnityEngine_Object_o *v618; // x21
  Il2CppObject *v619; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int64_t v621; // x2
  int32_t v622; // w3
  System_String_o *v623; // x4
  BattleSetupInfo_o *v624; // x5
  FollowerInfo_o *v625; // x6
  PartyListViewItem_o *v626; // x7
  TerminalSceneComponent_c *v627; // x0
  System_Action_o *v628; // x21
  float v629; // s10
  float v630; // s9
  float v631; // s8
  System_String_o *v632; // x24
  Il2CppObject *v633; // x0
  int64_t v634; // x2
  int32_t v635; // w3
  System_String_o *v636; // x4
  BattleSetupInfo_o *v637; // x5
  FollowerInfo_o *v638; // x6
  PartyListViewItem_o *v639; // x7
  UnityEngine_Object_o *v640; // x22
  MapGimmickComponent_o *v641; // x21
  System_Action_o *v642; // x0
  System_Action_o *v643; // x22
  MapGimmickComponent_o *v644; // x0
  System_Action_o *v645; // x2
  Il2CppObject *v646; // x0
  MapGimmickComponent_o **v647; // x22
  int64_t v648; // x2
  int32_t v649; // w3
  System_String_o *v650; // x4
  BattleSetupInfo_o *v651; // x5
  FollowerInfo_o *v652; // x6
  PartyListViewItem_o *v653; // x7
  UnityEngine_Object_o *v654; // x24
  MapGimmickComponent_o *v655; // x24
  System_Action_o *v656; // x0
  Il2CppObject *v657; // x21
  Il2CppObject *v658; // x21
  Il2CppClass *v659; // x8
  Il2CppObject *v660; // x21
  Il2CppClass *v661; // x8
  QuestAfterAction_StateMain_c *v662; // x8
  int v663; // w0
  __int64 v664; // x8
  ScrTerminalMap_o *v665; // x21
  System_Action_o *v666; // x23
  MapCamera_o *v667; // x20
  MapCamera_o *v668; // x20
  int v669; // w8
  MapCamera_o *v670; // x20
  float v671; // s0
  float v672; // s1
  float v673; // s2
  float v674; // s0
  float v675; // s1
  float v676; // s2
  __int64 v677; // x8
  float v678; // s3
  System_Action_o *v679; // x20
  MapGimmickComponent_o *v680; // x0
  float v681; // s0
  float v682; // s1
  float v683; // s2
  float v684; // s3
  int32_t v685; // w1
  System_Action_o *v686; // x2
  __int64 v687; // x8
  __int64 v688; // x8
  float v689; // s0
  float v690; // s0
  MapCamera_o *v691; // x0
  float v692; // s0
  __int64 v693; // x8
  ScrTerminalMap_o *v694; // x22
  float v695; // s0
  float v696; // s9
  float v697; // s0
  float v698; // s0
  float v699; // s1
  float v700; // s2
  float v701; // s10
  float v702; // s9
  float v703; // s11
  float v704; // s8
  int32_t v705; // w21
  System_Action_o *v706; // x22
  float v707; // s0
  float v708; // s0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  float sec; // [xsp+3Ch] [xbp-B4h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v712; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v718; // 0:x0.8
  System_Nullable_float__o v719; // 0:x0.8
  System_Nullable_float__o v720; // 0:x0.8
  System_Nullable_float__o v721; // 0:x0.8
  System_Nullable_float__o v722; // 0:x3.8
  System_Nullable_float__o v723; // 0:x3.8
  System_Nullable_Vector3__o v724; // 0:x0.16
  System_Nullable_Vector3__o v725; // 0:x0.16
  System_Nullable_Vector3__o v726; // 0:x0.16
  System_Nullable_Vector3__o v727; // 0:x0.16
  System_Nullable_Vector3__o v728; // 0:x0.16
  System_Nullable_Vector3__o v729; // 0:x1.16
  System_Nullable_Vector3__o v730; // 0:x1.16
  UnityEngine_Vector3_o v731; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v732; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v733; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v734; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v735; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v737; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v738; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v739; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v740; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v742; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v743; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v744; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v745; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v746; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v747; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD92BF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_Vector3___ctor__);
    sub_1C21E38(&Method_System_Nullable_float___ctor__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_1C21E38(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
    sub_1C21E38(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
    sub_1C21E38(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&SeManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain_UpdateAnim__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
    sub_1C21E38(&QuestAfterAction_StateMain___c_TypeInfo);
    sub_1C21E38(&StringLiteral_89/*"\r\n"*/);
    sub_1C21E38(&StringLiteral_1477/*"30101"*/);
    sub_1C21E38(&StringLiteral_11033/*"QUEST_AFTER_ACTION_MESSAGE_"*/);
    sub_1C21E38(&StringLiteral_1478/*"30102"*/);
    sub_1C21E38(&StringLiteral_1402/*"10703"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_3456/*"CAPTER WAIT"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_20163/*"gevINFOBAR_BACK"*/);
    sub_1C21E38(&StringLiteral_1212/*"0"*/);
    byte_4BD92BF = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v5 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_1012;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = that;
  v14 = (__int64 *)(v5 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)that, v15, v16, v17, v18, v19, v20);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v14 )
    goto LABEL_1012;
  if ( *(_BYTE *)(*v14 + 169) )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v14 )
    {
      *(_BYTE *)(*v14 + 169) = 0;
      return;
    }
LABEL_1012:
    sub_1C22094(updated, v7);
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
    goto LABEL_1012;
  if ( (unsigned int)updated >= *(_DWORD *)(v22 + 24) )
    goto LABEL_1013;
  v23 = *(QuestAfterAction_Command_o **)(v22 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v23,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_839;
  if ( !*v14 )
    goto LABEL_1012;
  v24 = *(BlankEarthQuestAfterAction_o **)(*v14 + 48);
  v25 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !v24 )
    goto LABEL_1012;
  updated = BlankEarthQuestAfterAction__UpdateAnim(v24, v7, v23, v25, &isQuickUpdate, v26);
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
        *v14,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v23 )
    goto LABEL_1012;
  id = v23->fields.id;
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
          if ( !byte_4BD7183 )
          {
            sub_1C21E38(&TerminalSceneComponent_TypeInfo);
            byte_4BD7183 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v164 = **(_QWORD **)(updated + 184);
          if ( !v164 )
            goto LABEL_1012;
          updated = *(_QWORD *)(v164 + 256);
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v165 = (PlayMakerFSM_o *)updated;
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
          if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3456/*"CAPTER WAIT"*/, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BD7183 )
            {
              sub_1C21E38(&TerminalSceneComponent_TypeInfo);
              byte_4BD7183 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v167 = **(_QWORD **)(updated + 184);
            if ( !v167 )
              goto LABEL_1012;
            v168 = *(_QWORD *)(v167 + 256);
            if ( !v168 )
              goto LABEL_1012;
            v169 = *(QuestBoardListViewManager_o **)(v168 + 296);
            updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            }
            v170 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
            if ( !v170 )
            {
              if ( !*(_DWORD *)(updated + 224) )
              {
                j_il2cpp_runtime_class_init_0(updated);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v619 = **(Il2CppObject ***)(updated + 184);
              v170 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
              System_Action___ctor(v170, v619, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0LL);
              static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              static_fields->__9__16_22 = v170;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&static_fields->__9__16_22,
                (int64_t)v170,
                v621,
                v622,
                v623,
                v624,
                v625,
                v626);
            }
            if ( !v169 )
              goto LABEL_1012;
            QuestBoardListViewManager__SetMode(v169, 4, v170, 0, 0, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BD7183 )
            {
              sub_1C21E38(&TerminalSceneComponent_TypeInfo);
              byte_4BD7183 = 1;
            }
            v627 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v627 = TerminalSceneComponent_TypeInfo;
            }
            updated = (__int64)v627->static_fields->mInstance;
            if ( !updated )
              goto LABEL_1012;
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
            PlayMakerFSM__SendEvent(v165, (System_String_o *)StringLiteral_20163/*"gevINFOBAR_BACK"*/, 0LL);
          }
          goto LABEL_839;
        }
        if ( id != 510 )
        {
          if ( id == 520 )
          {
            DEFAULT_FADE_TIME = System_Single__Parse(v23->fields.param, 0LL);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v30 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v30 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BD7183 )
            {
              sub_1C21E38(&TerminalSceneComponent_TypeInfo);
              byte_4BD7183 = 1;
            }
            v31 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v31 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v31->static_fields->mInstance;
            v33 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(
              v33,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
              0LL);
            if ( !mInstance )
              goto LABEL_1012;
            v34 = mInstance;
            v35 = DEFAULT_FADE_TIME;
            v36 = v33;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v34, v35, v36, 0LL);
          }
          return;
        }
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v171 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v172 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          v173 = 0.5;
          if ( *(int *)(v171 + 24) >= 2 )
          {
            v174 = System_Int32__Parse(*(System_String_o **)(v171 + 40), 0LL);
            if ( *(int *)(v171 + 24) >= 3 )
              v173 = System_Single__Parse(*(System_String_o **)(v171 + 48), 0LL);
          }
          else
          {
            v174 = v172;
            v172 = -1;
          }
          updated = *v14;
          if ( !*v14 )
            goto LABEL_1012;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v174,
                                  this,
                                  (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
          {
            if ( v172 >= 1 )
            {
              updated = *v14;
              if ( !*v14 )
                goto LABEL_1012;
              v227 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v172,
                       this,
                       (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v227, 0LL, 0LL) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4BD7183 )
                {
                  sub_1C21E38(&TerminalSceneComponent_TypeInfo);
                  byte_4BD7183 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v228 = **(_QWORD **)(updated + 184);
                if ( !v228 )
                  goto LABEL_1012;
                if ( !v227 )
                  goto LABEL_1012;
                v229 = *(ScrTerminalMap_o **)(v228 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v227, 0LL);
                if ( !v229 )
                  goto LABEL_1012;
                ScrTerminalMap__SetPlayerIcon(v229, (UnityEngine_GameObject_o *)updated, 0LL);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BD7183 )
            {
              sub_1C21E38(&TerminalSceneComponent_TypeInfo);
              byte_4BD7183 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v230 = **(_QWORD **)(updated + 184);
            if ( !v230 )
              goto LABEL_1012;
            if ( !MapComponent_object )
              goto LABEL_1012;
            v231 = *(ScrTerminalMap_o **)(v230 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
            v233 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(v233, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v231 )
              goto LABEL_1012;
            ScrTerminalMap__MovePlayerIcon(v231, gameObject, v174, v233, v173, 0LL);
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
            v48 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            System_Object___ctor((Il2CppObject *)v48, 0LL);
            if ( !v48 )
              goto LABEL_1012;
            *(_QWORD *)(v48 + 24) = v5;
            v55 = v48 + 24;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v48 + 24), v5, v49, v50, v51, v52, v53, v54);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v56 = *(_QWORD *)(updated + 24);
            v57 = updated;
            if ( v56 )
            {
              if ( !(_DWORD)v56 )
                goto LABEL_1013;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v58 = updated;
              if ( *(int *)(v57 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v57 + 40), 0LL);
                v59 = (int)updated < 1;
                if ( *(int *)(v57 + 24) < 3 )
                {
                  v60 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v57 + 48), 0LL);
                  v60 = (int)updated > 0;
                }
                goto LABEL_852;
              }
            }
            else
            {
              v58 = 0;
            }
            v60 = 0;
            v59 = 1;
LABEL_852:
            if ( !*(_QWORD *)v55 )
              goto LABEL_1012;
            updated = *(_QWORD *)(*(_QWORD *)v55 + 24LL);
            if ( !updated )
              goto LABEL_1012;
            v633 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v58,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v48 + 16) = v633;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v48 + 16), (int64_t)v633, v634, v635, v636, v637, v638, v639);
            v640 = *(UnityEngine_Object_o **)(v48 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v640, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v641 = *(MapGimmickComponent_o **)(v48 + 16);
            if ( !v641 )
              goto LABEL_1012;
            v641->fields.isForceNotActive = v60;
            v642 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            v643 = v642;
            if ( v59 )
            {
              System_Action___ctor(
                v642,
                (Il2CppObject *)v48,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
                0LL);
              v530 = 2;
              v644 = v641;
              v645 = v643;
LABEL_961:
              MapGimmickComponent__SetState(v644, v530, v645, 0LL);
              return;
            }
            System_Action___ctor(
              v642,
              (Il2CppObject *)v48,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
              0LL);
            MapGimmickComponent__SetState(v641, 2, v643, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v687 = *(_QWORD *)(v48 + 24);
            if ( !v687 )
              goto LABEL_1012;
            goto LABEL_966;
          case 401:
            v430 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            System_Object___ctor((Il2CppObject *)v430, 0LL);
            if ( !v430 )
              goto LABEL_1012;
            *(_QWORD *)(v430 + 24) = v5;
            v437 = v430 + 24;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v430 + 24), v5, v431, v432, v433, v434, v435, v436);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v438 = *(_QWORD *)(updated + 24);
            v439 = updated;
            if ( v438 )
            {
              if ( !(_DWORD)v438 )
                goto LABEL_1013;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v440 = updated;
              if ( *(int *)(v439 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v439 + 40), 0LL);
                v441 = (int)updated < 1;
                if ( *(int *)(v439 + 24) < 3 )
                {
                  v442 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v439 + 48), 0LL);
                  v442 = (int)updated > 0;
                }
                goto LABEL_862;
              }
            }
            else
            {
              v440 = 0;
            }
            v442 = 0;
            v441 = 1;
LABEL_862:
            if ( !*(_QWORD *)v437 )
              goto LABEL_1012;
            updated = *(_QWORD *)(*(_QWORD *)v437 + 24LL);
            if ( !updated )
              goto LABEL_1012;
            v646 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v440,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v430 + 16) = v646;
            v647 = (MapGimmickComponent_o **)(v430 + 16);
            sub_1C21DDC((PartyOrganizationUtility_o *)(v430 + 16), (int64_t)v646, v648, v649, v650, v651, v652, v653);
            v654 = *(UnityEngine_Object_o **)(v430 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v654, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v655 = *v647;
            if ( !*v647 )
              goto LABEL_1012;
            v655->fields.isForceLoop = v442;
            v655->fields.isForceNotActive = 0;
            if ( *(int *)(v439 + 24) >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v439 + 56), 0LL);
              if ( !*v647 )
                goto LABEL_1012;
              MapGimmickComponent__SetUseAnimNum(*v647, updated, 1, 0LL);
              v655 = *v647;
            }
            v656 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            v506 = v656;
            if ( v441 )
            {
              System_Action___ctor(
                v656,
                (Il2CppObject *)v430,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
                0LL);
              if ( !v655 )
                goto LABEL_1012;
              v530 = 3;
              v644 = v655;
LABEL_960:
              v645 = v506;
              goto LABEL_961;
            }
            System_Action___ctor(
              v656,
              (Il2CppObject *)v430,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
              0LL);
            if ( !v655 )
              goto LABEL_1012;
            MapGimmickComponent__SetState(v655, 3, v506, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v687 = *(_QWORD *)v437;
            if ( !*(_QWORD *)v437 )
              goto LABEL_1012;
LABEL_966:
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
              this,
              *(_QWORD *)(v687 + 24),
              this->klass->vtable._14_EndAnim.methodPtr);
            return;
          case 402:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v443 = *(_QWORD *)(updated + 24);
            v444 = updated;
            if ( v443 )
            {
              if ( !(_DWORD)v443 )
                goto LABEL_1013;
              v445 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v444 + 24) >= 2 )
              {
                v446 = System_Int32__Parse(*(System_String_o **)(v444 + 40), 0LL) > 0;
                goto LABEL_876;
              }
            }
            else
            {
              v445 = 0;
            }
            v446 = 0;
LABEL_876:
            updated = *v14;
            if ( !*v14 )
              goto LABEL_1012;
            v657 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v445,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v657, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v657 )
                goto LABEL_1012;
              BYTE1(v657[6].monitor) = v446;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v657, 0, 0LL);
              v381 = v657[7].klass;
              if ( !v381 )
                goto LABEL_1012;
LABEL_882:
              v381[4] = 0;
              goto LABEL_18;
            }
            return;
          case 403:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v447 = *(_QWORD *)(updated + 24);
            v448 = updated;
            if ( v447 )
            {
              if ( !(_DWORD)v447 )
                goto LABEL_1013;
              v449 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v448 + 24) >= 2 )
              {
                v450 = System_Int32__Parse(*(System_String_o **)(v448 + 40), 0LL) > 0;
                goto LABEL_885;
              }
            }
            else
            {
              v449 = 0;
            }
            v450 = 0;
LABEL_885:
            updated = *v14;
            if ( !*v14 )
              goto LABEL_1012;
            v658 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v449,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v658, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v658 )
                goto LABEL_1012;
              LOBYTE(v658[6].monitor) = v450;
              BYTE1(v658[6].monitor) = 0;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v658, 1, 0LL);
              v659 = v658[7].klass;
              if ( !v659 )
                goto LABEL_1012;
              LODWORD(v659->_1.name) = 1;
              goto LABEL_18;
            }
            return;
          case 404:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v451 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_839;
            v452 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
            if ( !*(_DWORD *)(v451 + 24) )
              goto LABEL_1013;
            v453 = (QuestAfterAction_o *)*v14;
            v454 = v452;
            updated = System_Int32__Parse(*(System_String_o **)(v451 + 32), 0LL);
            if ( !v453 )
              goto LABEL_1012;
            v455 = QuestAfterAction__GetMapComponent_object_(
                     v453,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v455, 0LL, 0LL) )
              return;
            v456 = *(int *)(v451 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v451 + 72), 0LL) > 0;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BD7183 )
            {
              sub_1C21E38(&TerminalSceneComponent_TypeInfo);
              byte_4BD7183 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v693 = **(_QWORD **)(updated + 184);
            if ( !v693 )
              goto LABEL_1012;
            if ( *(_DWORD *)(v451 + 24) <= 1u )
              goto LABEL_1013;
            v694 = *(ScrTerminalMap_o **)(v693 + 264);
            v695 = System_Single__Parse(*(System_String_o **)(v451 + 40), 0LL);
            if ( *(_DWORD *)(v451 + 24) <= 2u )
              goto LABEL_1013;
            v696 = v695;
            v697 = System_Single__Parse(*(System_String_o **)(v451 + 48), 0LL);
            if ( !v694 )
              goto LABEL_1012;
            *(UnityEngine_Vector3_o *)&v698 = ScrTerminalMap__LocalPosFromCoord(v694, v696, v697, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v451 + 24) <= 4u )
              goto LABEL_1013;
            v701 = v698;
            v702 = v699;
            v703 = v700;
            v704 = v454 * 0.001;
            updated = System_Int32__Parse(*(System_String_o **)(v451 + 64), 0LL);
            v705 = updated;
            if ( v456 )
            {
              if ( !v455 )
                goto LABEL_1012;
              v745.fields.x = v701;
              v745.fields.y = v702;
              v745.fields.z = v703;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v455, v745, v704, updated, 0LL, 0LL);
              goto LABEL_839;
            }
            v706 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(v706, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v455 )
              goto LABEL_1012;
            v680 = (MapGimmickComponent_o *)v455;
            v681 = v701;
            v682 = v702;
            v683 = v703;
            v684 = v704;
            v685 = v705;
            v686 = v706;
LABEL_1003:
            MapGimmickComponent__SetMoveAnim(v680, *(UnityEngine_Vector3_o *)&v681, v684, v685, v686, 0LL);
            return;
          case 405:
            v457 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            System_Object___ctor((Il2CppObject *)v457, 0LL);
            if ( !v457 )
              goto LABEL_1012;
            *(_QWORD *)(v457 + 24) = v5;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v457 + 24), v5, v458, v459, v460, v461, v462, v463);
            v464 = *(_QWORD *)(v457 + 24);
            if ( !v464 )
              goto LABEL_1012;
            v465 = *(QuestAfterAction_o **)(v464 + 24);
            updated = System_Int32__Parse(v23->fields.param, 0LL);
            if ( !v465 )
              goto LABEL_1012;
            v466 = QuestAfterAction__GetMapComponent_object_(
                     v465,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v457 + 16) = v466;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v457 + 16), (int64_t)v466, v467, v468, v469, v470, v471, v472);
            v473 = *(UnityEngine_Object_o **)(v457 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v473, 0LL, 0LL) )
              return;
            v474 = *(MapGimmickComponent_o **)(v457 + 16);
            v475 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(
              v475,
              (Il2CppObject *)v457,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
              0LL);
            if ( !v474 )
              goto LABEL_1012;
            MapGimmickComponent__SetState(v474, 3, v475, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BD7183 )
            {
              sub_1C21E38(&TerminalSceneComponent_TypeInfo);
              byte_4BD7183 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v476 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v476 )
              goto LABEL_1012;
            v34 = v476;
            v36 = 0LL;
            v35 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_46;
          case 406:
            v477 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            System_Object___ctor((Il2CppObject *)v477, 0LL);
            if ( !v477 )
              goto LABEL_1012;
            *(_QWORD *)(v477 + 32) = v5;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v477 + 32), v5, v478, v479, v480, v481, v482, v483);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1012;
            v484 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            *(_QWORD *)(v477 + 24) = v484;
            v485 = (__int64 *)(v477 + 24);
            sub_1C21DDC((PartyOrganizationUtility_o *)(v477 + 24), (int64_t)v484, v486, v487, v488, v489, v490, v491);
            v492 = *(_QWORD *)(v477 + 32);
            if ( !v492 )
              goto LABEL_1012;
            v493 = *v485;
            if ( !*v485 )
              goto LABEL_1012;
            if ( !*(_DWORD *)(v493 + 24) )
              goto LABEL_1013;
            v494 = *(QuestAfterAction_o **)(v492 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v493 + 32), 0LL);
            if ( !v494 )
              goto LABEL_1012;
            v495 = QuestAfterAction__GetMapComponent_object_(
                     v494,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v477 + 16) = v495;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v477 + 16), (int64_t)v495, v496, v497, v498, v499, v500, v501);
            v502 = *(UnityEngine_Object_o **)(v477 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v502, 0LL, 0LL) )
              return;
            v503 = *(MapGimmickComponent_o **)(v477 + 16);
            v504 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            v505 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
            v506 = v504;
            goto LABEL_716;
          case 407:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v507 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1013;
            v508 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v508 )
              goto LABEL_1012;
            v509 = QuestAfterAction__GetMapComponent_object_(
                     v508,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v509, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( !v509 )
              goto LABEL_1012;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v509, 0LL);
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v507 + 24) <= 1u )
              goto LABEL_1013;
            v510 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v507 + 40), &color, 0LL);
            if ( !v510 )
              goto LABEL_1012;
            UIWidget__set_color(v510, color, 0LL);
            goto LABEL_839;
          case 408:
            v477 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            System_Object___ctor((Il2CppObject *)v477, 0LL);
            if ( !v477 )
              goto LABEL_1012;
            *(_QWORD *)(v477 + 24) = v5;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v477 + 24), v5, v511, v512, v513, v514, v515, v516);
            v517 = *(_QWORD *)(v477 + 24);
            if ( !v517 )
              goto LABEL_1012;
            v518 = *(QuestAfterAction_o **)(v517 + 24);
            updated = System_Int32__Parse(v23->fields.param, 0LL);
            if ( !v518 )
              goto LABEL_1012;
            v519 = QuestAfterAction__GetMapComponent_object_(
                     v518,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v477 + 16) = v519;
            v520 = v477 + 16;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v477 + 16), (int64_t)v519, v521, v522, v523, v524, v525, v526);
            v527 = *(UnityEngine_Object_o **)(v477 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v527, 0LL, 0LL) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v520 || !updated )
              goto LABEL_1012;
            v528 = QuestTree__CheckMapGimmickCond_35202432(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v520 + 112LL),
                     0LL);
            v503 = *(MapGimmickComponent_o **)v520;
            v529 = v528;
            v504 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            v506 = v504;
            if ( v529 )
            {
              v505 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_716:
              System_Action___ctor(v504, (Il2CppObject *)v477, *v505, 0LL);
              if ( !v503 )
                goto LABEL_1012;
              v530 = 3;
            }
            else
            {
              System_Action___ctor(
                v504,
                (Il2CppObject *)v477,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
                0LL);
              if ( !v503 )
                goto LABEL_1012;
              v530 = 2;
            }
            v644 = v503;
            goto LABEL_960;
          case 409:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v531 = *(_QWORD *)(updated + 24);
            v532 = updated;
            if ( v531 )
            {
              if ( !(_DWORD)v531 )
                goto LABEL_1013;
              v533 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v532 + 24) >= 2 )
              {
                v534 = System_Int32__Parse(*(System_String_o **)(v532 + 40), 0LL) > 0;
                goto LABEL_894;
              }
            }
            else
            {
              v533 = 0;
            }
            v534 = 0;
LABEL_894:
            updated = *v14;
            if ( !*v14 )
              goto LABEL_1012;
            v660 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v533,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v660, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v660 )
                goto LABEL_1012;
              LOBYTE(v660[6].monitor) = v534;
              BYTE1(v660[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v660, 1, 0LL);
              v661 = v660[7].klass;
              if ( !v661 )
                goto LABEL_1012;
              LODWORD(v661->_1.name) = 1;
              v662 = this->klass;
              this->fields.IsAnimDoing = 0;
              v663 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v662->vtable._11_get_CommandIndex.method)(
                       this,
                       v662->vtable._12_set_CommandIndex.methodPtr);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                this,
                (unsigned int)(v663 + 1),
                this->klass->vtable._13_UpdateAnim.methodPtr);
              goto LABEL_19;
            }
            return;
          case 410:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v535 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_839;
            v536 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v536 )
              goto LABEL_1012;
            v537 = QuestAfterAction__GetMapComponent_object_(
                     v536,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v537, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v535 + 24) <= 1u )
              goto LABEL_1013;
            v538 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v535 + 40), 0LL);
            if ( !v538 )
              goto LABEL_1012;
            v540 = updated;
            v541 = v538;
            v542 = 0;
            goto LABEL_758;
          case 411:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v535 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_839;
            v543 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v543 )
              goto LABEL_1012;
            v537 = QuestAfterAction__GetMapComponent_object_(
                     v543,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v537, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v535 + 24) <= 1u )
              goto LABEL_1013;
            v544 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v535 + 40), 0LL);
            if ( !v544 )
              goto LABEL_1012;
            MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v544, 2, updated, this, v545);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
              return;
            *(UnityEngine_Vector3_o *)&v547 = GameObjectExtensions__GetLocalPosition(
                                                (UnityEngine_GameObject_o *)MapGameObject,
                                                0LL);
            if ( *(_DWORD *)(v535 + 24) <= 2u )
              goto LABEL_1013;
            x = v547;
            y = v548;
            z = v549;
            goto LABEL_772;
          case 412:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v535 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_839;
            v553 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v553 )
              goto LABEL_1012;
            v537 = QuestAfterAction__GetMapComponent_object_(
                     v553,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v537, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v535 + 24) <= 1u )
              goto LABEL_1013;
            v554 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v535 + 40), 0LL);
            if ( !v554 )
              goto LABEL_1012;
            v540 = updated;
            v542 = 1;
            v541 = v554;
LABEL_758:
            v555 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v541, v542, v540, this, v539);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v555, 0LL, 0LL) )
              return;
            LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v555, 0LL);
            x = LocalPosition.fields.x;
            y = LocalPosition.fields.y;
            z = LocalPosition.fields.z;
            if ( !this->fields.IsMapModel )
              goto LABEL_771;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BD7183 )
            {
              sub_1C21E38(&TerminalSceneComponent_TypeInfo);
              byte_4BD7183 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v556 = **(_QWORD **)(updated + 184);
            if ( !v556 )
              goto LABEL_1012;
            updated = *(_QWORD *)(v556 + 264);
            if ( !updated )
              goto LABEL_1012;
            v742.fields.x = x;
            v742.fields.y = y;
            v742.fields.z = z;
            v743 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v742, 0LL);
            x = v743.fields.x;
            y = v743.fields.y;
            z = v743.fields.z;
LABEL_771:
            if ( *(_DWORD *)(v535 + 24) <= 2u )
              goto LABEL_1013;
LABEL_772:
            v557 = System_Single__Parse(*(System_String_o **)(v535 + 48), 0LL) * 0.001;
            if ( v557 >= 0.0 )
              v558 = v557;
            else
              v558 = 0.5;
            if ( *(_DWORD *)(v535 + 24) <= 3u )
              goto LABEL_1013;
            v559 = System_Int32__Parse(*(System_String_o **)(v535 + 56), 0LL);
            if ( *(int *)(v535 + 24) >= 5 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v535 + 64), 0LL);
              if ( (int)updated >= 1 )
              {
                if ( !v537 )
                  goto LABEL_1012;
                v744.fields.x = x;
                v744.fields.y = y;
                v744.fields.z = z;
                MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v537, v744, v558, v559, 0LL, 0LL);
                goto LABEL_18;
              }
            }
            v679 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(v679, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v537 )
              goto LABEL_1012;
            v680 = (MapGimmickComponent_o *)v537;
            v681 = x;
            v682 = y;
            v683 = z;
            v684 = v558;
            v685 = v559;
            v686 = v679;
            goto LABEL_1003;
          default:
            if ( id != 500 )
              return;
            v323 = System_Int32__Parse(v23->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BD92E6 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD92E6 = 1;
            }
            v324 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v324 = TerminalPramsManager_TypeInfo;
            }
            v324->static_fields->_AfterActionFocusQuestId_k__BackingField = v323;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_1012;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    &entity,
                    v323,
                    (const MethodInfo_325BE14 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_839;
            updated = (__int64)entity;
            if ( !entity )
              goto LABEL_1012;
            v325 = (QuestAfterAction_o *)*v14;
            updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v325 )
              goto LABEL_1012;
            v326 = QuestAfterAction__GetMapComponent_object_(
                     v325,
                     0,
                     updated,
                     this,
                     (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v326, 0LL, 0LL);
            if ( (updated & 1) == 0 )
              goto LABEL_839;
            if ( !v326 )
              goto LABEL_1012;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v326, 0, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BD92E7 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD92E7 = 1;
            }
            v327 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v327 = TerminalPramsManager_TypeInfo;
            }
            v327->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
            goto LABEL_839;
        }
      }
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_1012;
      v85 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_839;
      v86 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(_DWORD *)(v85 + 24) <= 1u )
        goto LABEL_1013;
      v87 = v86;
      v88 = System_Single__Parse(*(System_String_o **)(v85 + 40), 0LL);
      if ( *(_DWORD *)(v85 + 24) <= 2u )
        goto LABEL_1013;
      v89 = v88;
      v90 = System_Single__Parse(*(System_String_o **)(v85 + 48), 0LL);
      if ( *(_DWORD *)(v85 + 24) <= 3u )
        goto LABEL_1013;
      v91 = v90;
      v92 = System_Single__Parse(*(System_String_o **)(v85 + 56), 0LL);
      if ( *(_DWORD *)(v85 + 24) <= 4u )
        goto LABEL_1013;
      v93 = v92;
      v94 = System_Int32__Parse(*(System_String_o **)(v85 + 64), 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v95 = **(_QWORD **)(updated + 184);
      if ( !v95 )
        goto LABEL_1012;
      updated = *(_QWORD *)(v95 + 264);
      if ( !updated )
        goto LABEL_1012;
      v731.fields.y = v89;
      v731.fields.z = v91;
      v96 = v93 * 0.001;
      v731.fields.x = v87;
      *(UnityEngine_Vector3_o *)&v98 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                         (ScrTerminalMap_o *)updated,
                                         v731,
                                         0LL);
      v101 = v98;
      v102 = v99;
      v103 = v100;
      if ( v23->fields.id != 352 || *(int *)(v85 + 24) < 6 )
      {
        if ( !*v14 )
          goto LABEL_1012;
        v104 = *(MapCamera_o **)(*v14 + 152);
        v105 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v105,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
          0LL);
        if ( !v104 )
          goto LABEL_1012;
        v106 = v104;
        v107 = v101;
        v108 = v102;
        v109 = v103;
        v110 = v96;
        v111 = v94;
        goto LABEL_944;
      }
      if ( !*v14 )
        goto LABEL_1012;
      v328 = *(MapCamera_o **)(*v14 + 152);
      *(_QWORD *)&v724.fields.hasValue = &v712;
      *(_QWORD *)&v724.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v712.fields.hasValue = 0LL;
      *(_QWORD *)&v712.fields.value.fields.y = 0LL;
      System_Nullable_Vector3____ctor(v724, *(UnityEngine_Vector3_o *)&v98, v97);
      if ( *(_DWORD *)(v85 + 24) <= 5u )
        goto LABEL_1013;
      v329 = System_Single__Parse(*(System_String_o **)(v85 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v329, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
      v330 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v330,
        (Il2CppObject *)v5,
        Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
        0LL);
      if ( !v328 )
        goto LABEL_1012;
      v729 = v712;
      v722 = size;
      v331 = v328;
      v332 = v96;
      v333 = v94;
LABEL_985:
      MapCamera__StartAutoWork(v331, v332, v729, v722, v333, v330, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v65 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v65, 0LL);
          if ( !v65 )
            goto LABEL_1012;
          *(_QWORD *)(v65 + 24) = v5;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v65 + 24), v5, v66, v67, v68, v69, v70, v71);
          v72 = *(_QWORD *)(v65 + 24);
          if ( !v72 )
            goto LABEL_1012;
          v73 = *(QuestAfterAction_o **)(v72 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0LL);
          if ( !v73 )
            goto LABEL_1012;
          v74 = QuestAfterAction__GetMapComponent_object_(
                  v73,
                  0,
                  updated,
                  this,
                  (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v65 + 16) = v74;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v65 + 16), (int64_t)v74, v75, v76, v77, v78, v79, v80);
          v81 = *(UnityEngine_Object_o **)(v65 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v81, 0LL, 0LL) )
            return;
          v82 = *(SrcSpotBasePrefab_o **)(v65 + 16);
          v83 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v83,
            (Il2CppObject *)v65,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v82 )
            goto LABEL_1012;
          v84 = 2;
          goto LABEL_397;
        case 'e':
          v258 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          System_Object___ctor((Il2CppObject *)v258, 0LL);
          if ( !v258 )
            goto LABEL_1012;
          *(_QWORD *)(v258 + 24) = v5;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v258 + 24), v5, v259, v260, v261, v262, v263, v264);
          v265 = *(_QWORD *)(v258 + 24);
          if ( !v265 )
            goto LABEL_1012;
          v266 = *(QuestAfterAction_o **)(v265 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0LL);
          if ( !v266 )
            goto LABEL_1012;
          v267 = QuestAfterAction__GetMapComponent_object_(
                   v266,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v258 + 16) = v267;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v258 + 16), (int64_t)v267, v268, v269, v270, v271, v272, v273);
          v274 = *(UnityEngine_Object_o **)(v258 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v274, 0LL, 0LL) )
            return;
          v82 = *(SrcSpotBasePrefab_o **)(v258 + 16);
          v83 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v83,
            (Il2CppObject *)v258,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v82 )
            goto LABEL_1012;
          v84 = 3;
LABEL_397:
          SrcSpotBasePrefab__SetState(v82, v84, v83, 0LL);
          return;
        case 'f':
          v275 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v275, 0LL);
          if ( !v275 )
            goto LABEL_1012;
          *(_QWORD *)(v275 + 24) = v5;
          v282 = v275 + 24;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v275 + 24), v5, v276, v277, v278, v279, v280, v281);
          if ( !*(_QWORD *)(v275 + 24) )
            goto LABEL_1012;
          v283 = *(QuestAfterAction_o **)(*(_QWORD *)(v275 + 24) + 24LL);
          updated = System_Int32__Parse(v23->fields.param, 0LL);
          if ( !v283 )
            goto LABEL_1012;
          v284 = QuestAfterAction__GetMapComponent_object_(
                   v283,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v275 + 16) = v284;
          v285 = (int64_t *)(v275 + 16);
          sub_1C21DDC((PartyOrganizationUtility_o *)(v275 + 16), (int64_t)v284, v286, v287, v288, v289, v290, v291);
          v292 = *(UnityEngine_Object_o **)(v275 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v292, 0LL, 0LL) )
            return;
          v293 = *(SrcSpotBasePrefab_o **)(v275 + 16);
          v294 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v294,
            (Il2CppObject *)v275,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v293 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetState(v293, 4, v294, 0LL);
          if ( !*(_QWORD *)v282 )
            goto LABEL_1012;
          updated = *(_QWORD *)(*(_QWORD *)v282 + 24LL);
          if ( !updated )
            goto LABEL_1012;
          v301 = *v285;
          *(_QWORD *)(updated + 184) = *v285;
          v302 = (PartyOrganizationUtility_o *)(updated + 184);
          goto LABEL_419;
        case 'g':
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v303 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_839;
          v304 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v304 )
            goto LABEL_1012;
          v305 = QuestAfterAction__GetMapComponent_object_(
                   v304,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v305, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v303 + 24) <= 1u )
            goto LABEL_1013;
          updated = System_Int32__Parse(*(System_String_o **)(v303 + 40), 0LL);
          if ( !v305 )
            goto LABEL_1012;
          LODWORD(v305[14].klass) = updated;
          v306 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v306, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v305, 5, v306, 0LL);
          updated = *v14;
          if ( !*v14 )
            goto LABEL_1012;
          *(_QWORD *)(updated + 184) = v305;
          v302 = (PartyOrganizationUtility_o *)(updated + 184);
          v301 = (int64_t)v305;
LABEL_419:
          sub_1C21DDC(v302, v301, v295, v296, v297, v298, v299, v300);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v307 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(v23->fields.param, 0LL);
          if ( !v307 )
            goto LABEL_1012;
          v308 = QuestAfterAction__GetMapComponent_object_(
                   v307,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v308, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v308 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v308, 0, 0LL);
          monitor = v308[14].monitor;
          if ( !monitor )
            goto LABEL_1012;
          monitor[5] = 0;
          v310 = (SrcSpotBasePrefab_o *)v308;
          v311 = 0;
          goto LABEL_442;
        case 'o':
          v312 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(v23->fields.param, 0LL);
          if ( !v312 )
            goto LABEL_1012;
          v313 = QuestAfterAction__GetMapComponent_object_(
                   v312,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v313, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v313 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v313, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v313, 0, 0LL);
          v314 = v313[14].monitor;
          if ( !v314 )
            goto LABEL_1012;
          v314[5] = 2;
          goto LABEL_441;
        case 'p':
          v315 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(v23->fields.param, 0LL);
          if ( !v315 )
            goto LABEL_1012;
          v313 = QuestAfterAction__GetMapComponent_object_(
                   v315,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v313, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v313 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v313, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v313, 1, 0LL);
          v316 = v313[14].monitor;
          if ( !v316 )
            goto LABEL_1012;
          v316[5] = 1;
LABEL_441:
          v311 = 1;
          v310 = (SrcSpotBasePrefab_o *)v313;
LABEL_442:
          SrcSpotBasePrefab__SetTouchType(v310, v311, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v317 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_839;
          v318 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v318 )
            goto LABEL_1012;
          v319 = QuestAfterAction__GetMapComponent_object_(
                   v318,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v319, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v317 + 24) <= 1u )
            goto LABEL_1013;
          updated = System_Int32__Parse(*(System_String_o **)(v317 + 40), 0LL);
          if ( !v319 )
            goto LABEL_1012;
          LODWORD(v319[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v319, 1, 0LL);
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
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v42 = *(_QWORD *)(updated + 24);
        v43 = updated;
        if ( (int)v42 <= 0 )
          goto LABEL_839;
        if ( (int)v42 > 2 )
        {
          v397 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v42 = *(_QWORD *)(v43 + 24);
          v44 = v397 * 0.001;
        }
        else
        {
          v44 = 0.5;
        }
        sec = v44;
        if ( (int)v42 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v43 + 40), 0LL);
          v42 = *(_QWORD *)(v43 + 24);
          v241 = updated;
        }
        else
        {
          v241 = 15;
        }
        if ( !(_DWORD)v42 )
          goto LABEL_1013;
        v400 = (QuestAfterAction_o *)*v14;
        updated = System_Int32__Parse(*(System_String_o **)(v43 + 32), 0LL);
        if ( !v400 )
          goto LABEL_1012;
        v402 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v400, 0, updated, this, v401);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v402, 0LL, 0LL) )
          return;
        v733 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v402, 0LL);
        v403 = v733.fields.x;
        v404 = v733.fields.y;
        v405 = v733.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_591;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BD7183 )
        {
          sub_1C21E38(&TerminalSceneComponent_TypeInfo);
          byte_4BD7183 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v406 = **(_QWORD **)(updated + 184);
        if ( !v406 )
          goto LABEL_1012;
        updated = *(_QWORD *)(v406 + 264);
        if ( !updated )
          goto LABEL_1012;
        v734.fields.x = v403;
        v734.fields.y = v404;
        v734.fields.z = v405;
        v735 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v734, 0LL);
        v403 = v735.fields.x;
        v404 = v735.fields.y;
        v405 = v735.fields.z;
LABEL_591:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_919;
        if ( !*(_DWORD *)(v43 + 24) )
          goto LABEL_1013;
        v408 = *(System_String_o **)(v43 + 32);
        updated = System_String__op_Equality(v408, (System_String_o *)StringLiteral_1402/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v404 = v404 + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v408, (System_String_o *)StringLiteral_1477/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            v404 = v404 + -50.0;
        }
LABEL_919:
        v423 = *(_DWORD *)(v43 + 24);
        if ( v23->fields.id == 305 )
        {
LABEL_920:
          if ( v423 < 4 )
            goto LABEL_921;
          if ( v423 == 4 )
          {
            if ( !*v14 )
              goto LABEL_1012;
            v668 = *(MapCamera_o **)(*v14 + 152);
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v43 + 64), 0LL);
            if ( !*v14 )
              goto LABEL_1012;
            v668 = *(MapCamera_o **)(*v14 + 152);
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v725.fields.hasValue = &v712;
              v671 = v403;
              v672 = v404;
              *(_QWORD *)&v725.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v673 = v405;
              v712 = (System_Nullable_Vector3__o)0LL;
LABEL_976:
              System_Nullable_Vector3____ctor(v725, *(UnityEngine_Vector3_o *)&v671, v407);
              if ( *(_DWORD *)(v43 + 24) <= 3u )
                goto LABEL_1013;
              v689 = System_Single__Parse(*(System_String_o **)(v43 + 56), 0LL);
              v718 = (System_Nullable_float__o)&size;
              size = 0LL;
              System_Nullable_float____ctor(
                v718,
                v689,
                (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
              if ( !v668 )
                goto LABEL_1012;
              v730 = v712;
              v723 = size;
              v690 = sec;
              v691 = v668;
              goto LABEL_979;
            }
          }
          *(_QWORD *)&v726.fields.hasValue = &v712;
          v674 = v403;
          v675 = v404;
          *(_QWORD *)&v726.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v676 = v405;
          v712 = (System_Nullable_Vector3__o)0LL;
LABEL_981:
          System_Nullable_Vector3____ctor(v726, *(UnityEngine_Vector3_o *)&v674, v407);
          if ( *(_DWORD *)(v43 + 24) <= 3u )
            goto LABEL_1013;
          v692 = System_Single__Parse(*(System_String_o **)(v43 + 56), 0LL);
          v719 = (System_Nullable_float__o)&size;
          size = 0LL;
          System_Nullable_float____ctor(v719, v692, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
          v330 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v330, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v668 )
            goto LABEL_1012;
          v729 = v712;
          v722 = size;
          v332 = sec;
          v331 = v668;
          goto LABEL_984;
        }
LABEL_632:
        if ( v423 < 4 )
        {
LABEL_921:
          if ( !*v14 )
            goto LABEL_1012;
          v425 = *(MapCamera_o **)(*v14 + 152);
          goto LABEL_923;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v43 + 56), 0LL);
        v424 = *v14;
        if ( !*v14 )
          goto LABEL_1012;
        v425 = *(MapCamera_o **)(v424 + 152);
        if ( (int)updated < 1 )
        {
LABEL_923:
          v105 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v105, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v425 )
            goto LABEL_1012;
          v106 = v425;
          v107 = v403;
          v108 = v404;
          v109 = v405;
LABEL_942:
          v110 = sec;
LABEL_943:
          v111 = v241;
LABEL_944:
          MapCamera__StartAutoMove(v106, *(UnityEngine_Vector3_o *)&v107, v110, v111, v105, 0LL);
          return;
        }
        if ( !v425 )
          goto LABEL_1012;
        v426 = *(MapCamera_o **)(v424 + 152);
        v427 = v403;
        v428 = v404;
        v429 = v405;
        goto LABEL_953;
      case 301:
      case 306:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v234 = *(_QWORD *)(updated + 24);
        v43 = updated;
        if ( (int)v234 <= 0 )
          goto LABEL_839;
        if ( (int)v234 > 2 )
        {
          v398 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v234 = *(_QWORD *)(v43 + 24);
          v235 = v398 * 0.001;
        }
        else
        {
          v235 = 0.5;
        }
        sec = v235;
        if ( (int)v234 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v43 + 40), 0LL);
          v234 = *(_QWORD *)(v43 + 24);
          v241 = updated;
        }
        else
        {
          v241 = 15;
        }
        if ( !(_DWORD)v234 )
          goto LABEL_1013;
        v409 = (QuestAfterAction_o *)*v14;
        updated = System_Int32__Parse(*(System_String_o **)(v43 + 32), 0LL);
        if ( !v409 )
          goto LABEL_1012;
        v411 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v409, 1, updated, this, v410);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v411, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v411 )
            goto LABEL_1012;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v411,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1012;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v412 = Position.fields.x;
          v413 = Position.fields.y;
          v414 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BD7183 )
          {
            sub_1C21E38(&TerminalSceneComponent_TypeInfo);
            byte_4BD7183 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v415 = **(_QWORD **)(updated + 184);
          if ( !v415 )
            goto LABEL_1012;
          updated = *(_QWORD *)(v415 + 264);
          if ( !updated )
            goto LABEL_1012;
          v737.fields.x = v412;
          v737.fields.y = v413;
          v737.fields.z = v414;
          *(UnityEngine_Vector3_o *)&v416 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v737,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v416 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v411,
                                              0LL);
        }
        v629 = v416;
        v630 = v417;
        v631 = v418;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_931;
        if ( !*(_DWORD *)(v43 + 24) )
          goto LABEL_1013;
        v632 = *(System_String_o **)(v43 + 32);
        updated = System_String__op_Equality(v632, (System_String_o *)StringLiteral_1402/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v630 = v630 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v632, (System_String_o *)StringLiteral_1478/*"30102"*/, 0LL);
          if ( (updated & 1) != 0 )
            v630 = v630 + 45.0;
        }
LABEL_931:
        v669 = *(_DWORD *)(v43 + 24);
        if ( v23->fields.id == 306 )
        {
          if ( v669 >= 4 )
          {
            if ( v669 == 4 )
            {
              if ( !*v14 )
                goto LABEL_1012;
              v668 = *(MapCamera_o **)(*v14 + 152);
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v43 + 64), 0LL);
              if ( !*v14 )
                goto LABEL_1012;
              v668 = *(MapCamera_o **)(*v14 + 152);
              if ( (int)updated >= 1 )
              {
                v712 = (System_Nullable_Vector3__o)0LL;
                *(_QWORD *)&v725.fields.hasValue = &v712;
                v671 = v629;
                *(_QWORD *)&v725.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v672 = v630;
                v673 = v631;
                goto LABEL_976;
              }
            }
            v712 = (System_Nullable_Vector3__o)0LL;
            *(_QWORD *)&v726.fields.hasValue = &v712;
            v674 = v629;
            *(_QWORD *)&v726.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v675 = v630;
            v676 = v631;
            goto LABEL_981;
          }
          goto LABEL_938;
        }
        if ( v669 < 4 )
        {
LABEL_938:
          if ( !*v14 )
            goto LABEL_1012;
          v670 = *(MapCamera_o **)(*v14 + 152);
LABEL_940:
          v105 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v105, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v670 )
            goto LABEL_1012;
          v106 = v670;
          v107 = v629;
          v108 = v630;
          v109 = v631;
          goto LABEL_942;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v43 + 56), 0LL);
        v677 = *v14;
        if ( !*v14 )
          goto LABEL_1012;
        v670 = *(MapCamera_o **)(v677 + 152);
        if ( (int)updated < 1 )
          goto LABEL_940;
        if ( !v670 )
          goto LABEL_1012;
        v426 = *(MapCamera_o **)(v677 + 152);
        v427 = v629;
        v428 = v630;
        v429 = v631;
LABEL_953:
        v678 = sec;
        goto LABEL_954;
      case 302:
      case 307:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v236 = *(_QWORD *)(updated + 24);
        v43 = updated;
        if ( (int)v236 <= 0 )
          goto LABEL_839;
        if ( (int)v236 > 2 )
        {
          v399 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v236 = *(_QWORD *)(v43 + 24);
          v237 = v399 * 0.001;
        }
        else
        {
          v237 = 0.5;
        }
        sec = v237;
        if ( (int)v236 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v43 + 40), 0LL);
          v236 = *(_QWORD *)(v43 + 24);
          v241 = updated;
        }
        else
        {
          v241 = 15;
        }
        if ( !(_DWORD)v236 )
          goto LABEL_1013;
        v419 = (QuestAfterAction_o *)*v14;
        updated = System_Int32__Parse(*(System_String_o **)(v43 + 32), 0LL);
        if ( !v419 )
          goto LABEL_1012;
        v421 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v419, 2, updated, this, v420);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v421, 0LL, 0LL) )
          return;
        v738 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v421, 0LL);
        v403 = v738.fields.x;
        v404 = v738.fields.y;
        v405 = v738.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_631;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BD7183 )
        {
          sub_1C21E38(&TerminalSceneComponent_TypeInfo);
          byte_4BD7183 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v422 = **(_QWORD **)(updated + 184);
        if ( !v422 )
          goto LABEL_1012;
        updated = *(_QWORD *)(v422 + 264);
        if ( !updated )
          goto LABEL_1012;
        v739.fields.x = v403;
        v739.fields.y = v404;
        v739.fields.z = v405;
        v740 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v739, 0LL);
        v403 = v740.fields.x;
        v404 = v740.fields.y;
        v405 = v740.fields.z;
LABEL_631:
        v423 = *(_DWORD *)(v43 + 24);
        if ( v23->fields.id != 307 )
          goto LABEL_632;
        goto LABEL_920;
      case 303:
      case 308:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v238 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_839;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD92E5 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD92E5 = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          goto LABEL_839;
        if ( *(_DWORD *)(v238 + 24) <= 2u )
          goto LABEL_1013;
        v239 = System_Single__Parse(*(System_String_o **)(v238 + 48), 0LL) * 0.001;
        v240 = v239 >= 0.0 ? v239 : 0.5;
        if ( *(_DWORD *)(v238 + 24) <= 3u )
          goto LABEL_1013;
        v241 = System_Int32__Parse(*(System_String_o **)(v238 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BD7183 )
        {
          sub_1C21E38(&TerminalSceneComponent_TypeInfo);
          byte_4BD7183 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v242 = **(_QWORD **)(updated + 184);
        if ( !v242 )
          goto LABEL_1012;
        if ( !*(_DWORD *)(v238 + 24) )
          goto LABEL_1013;
        v243 = *(ScrTerminalMap_o **)(v242 + 264);
        v244 = System_Single__Parse(*(System_String_o **)(v238 + 32), 0LL);
        if ( *(_DWORD *)(v238 + 24) <= 1u )
          goto LABEL_1013;
        v245 = v244;
        v246 = System_Single__Parse(*(System_String_o **)(v238 + 40), 0LL);
        if ( !v243 )
          goto LABEL_1012;
        v732 = ScrTerminalMap__LocalPosFromCoord(v243, v245, v246, 0.0, 0.0, 0LL);
        v248 = *(_DWORD *)(v238 + 24);
        v249 = v732.fields.x;
        v250 = v732.fields.y;
        v251 = v732.fields.z;
        if ( v23->fields.id == 308 )
        {
          if ( v248 >= 5 )
          {
            if ( v248 == 5 )
            {
              if ( !*v14 )
                goto LABEL_1012;
              v252 = *(MapCamera_o **)(*v14 + 152);
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v238 + 72), 0LL);
              if ( !*v14 )
                goto LABEL_1012;
              v252 = *(MapCamera_o **)(*v14 + 152);
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v727.fields.hasValue = &v712;
                v746.fields.x = v249;
                v746.fields.y = v250;
                *(_QWORD *)&v727.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v746.fields.z = v251;
                v712 = (System_Nullable_Vector3__o)0LL;
                System_Nullable_Vector3____ctor(v727, v746, v247);
                if ( *(_DWORD *)(v238 + 24) <= 4u )
                  goto LABEL_1013;
                v707 = System_Single__Parse(*(System_String_o **)(v238 + 64), 0LL);
                v720 = (System_Nullable_float__o)&size;
                size = 0LL;
                System_Nullable_float____ctor(
                  v720,
                  v707,
                  (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
                if ( !v252 )
                  goto LABEL_1012;
                v730 = v712;
                v723 = size;
                v691 = v252;
                v690 = v240;
LABEL_979:
                MapCamera__StartAutoWork(v691, v690, v730, v723, v241, 0LL, 0LL);
                goto LABEL_839;
              }
            }
            *(_QWORD *)&v728.fields.hasValue = &v712;
            v747.fields.x = v249;
            v747.fields.y = v250;
            *(_QWORD *)&v728.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v747.fields.z = v251;
            v712 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v728, v747, v247);
            if ( *(_DWORD *)(v238 + 24) <= 4u )
              goto LABEL_1013;
            v708 = System_Single__Parse(*(System_String_o **)(v238 + 64), 0LL);
            v721 = (System_Nullable_float__o)&size;
            size = 0LL;
            System_Nullable_float____ctor(v721, v708, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
            v330 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(v330, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v252 )
              goto LABEL_1012;
            v729 = v712;
            v722 = size;
            v331 = v252;
            v332 = v240;
LABEL_984:
            v333 = v241;
            goto LABEL_985;
          }
        }
        else if ( v248 >= 5 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v238 + 64), 0LL);
          v688 = *v14;
          if ( !*v14 )
            goto LABEL_1012;
          v667 = *(MapCamera_o **)(v688 + 152);
          if ( (int)updated >= 1 )
          {
            if ( !v667 )
              goto LABEL_1012;
            v426 = *(MapCamera_o **)(v688 + 152);
            v427 = v249;
            v428 = v250;
            v429 = v251;
            v678 = v240;
LABEL_954:
            MapCamera__StartAutoMove(v426, *(UnityEngine_Vector3_o *)&v427, v678, v241, 0LL, 0LL);
            goto LABEL_839;
          }
LABEL_915:
          v105 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v105, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v667 )
            goto LABEL_1012;
          v106 = v667;
          v107 = v249;
          v108 = v250;
          v109 = v251;
          v110 = v240;
          goto LABEL_943;
        }
        if ( !*v14 )
          goto LABEL_1012;
        v667 = *(MapCamera_o **)(*v14 + 152);
        goto LABEL_915;
      case 304:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v334 = *(_DWORD *)(updated + 24);
        v335 = updated;
        if ( v334 <= 1 )
          goto LABEL_839;
        v336 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v335 + 24) <= 1u )
          goto LABEL_1013;
        v337 = v336;
        v338 = System_Single__Parse(*(System_String_o **)(v335 + 40), 0LL);
        if ( !*v14 )
          goto LABEL_1012;
        v339 = *(MapCamera_o **)(*v14 + 152);
        v340 = v338 * 0.001;
        if ( v340 >= 0.0 )
          v341 = v340;
        else
          v341 = 0.5;
        if ( v334 < 3 )
        {
          v342 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v335 + 24) <= 2u )
            goto LABEL_1013;
          v342 = System_Int32__Parse(*(System_String_o **)(v335 + 48), 0LL);
        }
        v628 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v628,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0LL);
        if ( !v339 )
          goto LABEL_1012;
        MapCamera__StartAutoZoom(v339, v337, v341, v342, v628, 0LL);
        return;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v112 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              System_Object___ctor((Il2CppObject *)v112, 0LL);
              if ( !v112 )
                goto LABEL_1012;
              *(_QWORD *)(v112 + 24) = v5;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v112 + 24), v5, v113, v114, v115, v116, v117, v118);
              v119 = *(_QWORD *)(v112 + 24);
              if ( !v119 )
                goto LABEL_1012;
              v120 = *(QuestAfterAction_o **)(v119 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0LL);
              if ( !v120 )
                goto LABEL_1012;
              v121 = QuestAfterAction__GetMapComponent_object_(
                       v120,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v112 + 16) = v121;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v112 + 16), (int64_t)v121, v122, v123, v124, v125, v126, v127);
              v128 = *(UnityEngine_Object_o **)(v112 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v128, 0LL, 0LL) )
              {
                v129 = *(ModelLineComponent_o **)(v112 + 16);
                v130 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                System_Action___ctor(
                  v130,
                  (Il2CppObject *)v112,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v129 )
                  goto LABEL_1012;
                v132 = 2;
                goto LABEL_530;
              }
            }
            else
            {
              v561 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              System_Object___ctor((Il2CppObject *)v561, 0LL);
              if ( !v561 )
                goto LABEL_1012;
              *(_QWORD *)(v561 + 24) = v5;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v561 + 24), v5, v562, v563, v564, v565, v566, v567);
              v568 = *(_QWORD *)(v561 + 24);
              if ( !v568 )
                goto LABEL_1012;
              v569 = *(QuestAfterAction_o **)(v568 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0LL);
              if ( !v569 )
                goto LABEL_1012;
              v570 = QuestAfterAction__GetMapComponent_object_(
                       v569,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v561 + 16) = v570;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v561 + 16), (int64_t)v570, v571, v572, v573, v574, v575, v576);
              v577 = *(UnityEngine_Object_o **)(v561 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v577, 0LL, 0LL) )
              {
                v578 = *(srcLineSprite_o **)(v561 + 16);
                v579 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                System_Action___ctor(
                  v579,
                  (Il2CppObject *)v561,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v578 )
                  goto LABEL_1012;
                v580 = 2;
                goto LABEL_808;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v343 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              System_Object___ctor((Il2CppObject *)v343, 0LL);
              if ( !v343 )
                goto LABEL_1012;
              *(_QWORD *)(v343 + 24) = v5;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v343 + 24), v5, v344, v345, v346, v347, v348, v349);
              v350 = *(_QWORD *)(v343 + 24);
              if ( !v350 )
                goto LABEL_1012;
              v351 = *(QuestAfterAction_o **)(v350 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0LL);
              if ( !v351 )
                goto LABEL_1012;
              v352 = QuestAfterAction__GetMapComponent_object_(
                       v351,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v343 + 16) = v352;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v343 + 16), (int64_t)v352, v353, v354, v355, v356, v357, v358);
              v359 = *(UnityEngine_Object_o **)(v343 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v359, 0LL, 0LL) )
              {
                v129 = *(ModelLineComponent_o **)(v343 + 16);
                v130 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                System_Action___ctor(
                  v130,
                  (Il2CppObject *)v343,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v129 )
                  goto LABEL_1012;
                v132 = 3;
                goto LABEL_530;
              }
            }
            else
            {
              v581 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              System_Object___ctor((Il2CppObject *)v581, 0LL);
              if ( !v581 )
                goto LABEL_1012;
              *(_QWORD *)(v581 + 24) = v5;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v581 + 24), v5, v582, v583, v584, v585, v586, v587);
              v588 = *(_QWORD *)(v581 + 24);
              if ( !v588 )
                goto LABEL_1012;
              v589 = *(QuestAfterAction_o **)(v588 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0LL);
              if ( !v589 )
                goto LABEL_1012;
              v590 = QuestAfterAction__GetMapComponent_object_(
                       v589,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v581 + 16) = v590;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v581 + 16), (int64_t)v590, v591, v592, v593, v594, v595, v596);
              v597 = *(UnityEngine_Object_o **)(v581 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v597, 0LL, 0LL) )
              {
                v578 = *(srcLineSprite_o **)(v581 + 16);
                v579 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                System_Action___ctor(
                  v579,
                  (Il2CppObject *)v581,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v578 )
                  goto LABEL_1012;
                v580 = 3;
                goto LABEL_808;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v360 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              System_Object___ctor((Il2CppObject *)v360, 0LL);
              if ( !v360 )
                goto LABEL_1012;
              *(_QWORD *)(v360 + 24) = v5;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v360 + 24), v5, v361, v362, v363, v364, v365, v366);
              v367 = *(_QWORD *)(v360 + 24);
              if ( !v367 )
                goto LABEL_1012;
              v368 = *(QuestAfterAction_o **)(v367 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0LL);
              if ( !v368 )
                goto LABEL_1012;
              v369 = QuestAfterAction__GetMapComponent_object_(
                       v368,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v360 + 16) = v369;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v360 + 16), (int64_t)v369, v370, v371, v372, v373, v374, v375);
              v376 = *(UnityEngine_Object_o **)(v360 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v376, 0LL, 0LL) )
              {
                v129 = *(ModelLineComponent_o **)(v360 + 16);
                v130 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                System_Action___ctor(
                  v130,
                  (Il2CppObject *)v360,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v129 )
                  goto LABEL_1012;
                v132 = 4;
LABEL_530:
                ModelLineComponent__SetState(v129, v132, v130, v131);
              }
            }
            else
            {
              v598 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              System_Object___ctor((Il2CppObject *)v598, 0LL);
              if ( !v598 )
                goto LABEL_1012;
              *(_QWORD *)(v598 + 24) = v5;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v598 + 24), v5, v599, v600, v601, v602, v603, v604);
              v605 = *(_QWORD *)(v598 + 24);
              if ( !v605 )
                goto LABEL_1012;
              v606 = *(QuestAfterAction_o **)(v605 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0LL);
              if ( !v606 )
                goto LABEL_1012;
              v607 = QuestAfterAction__GetMapComponent_object_(
                       v606,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v598 + 16) = v607;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v598 + 16), (int64_t)v607, v608, v609, v610, v611, v612, v613);
              v614 = *(UnityEngine_Object_o **)(v598 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v614, 0LL, 0LL) )
              {
                v578 = *(srcLineSprite_o **)(v598 + 16);
                v579 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                System_Action___ctor(
                  v579,
                  (Il2CppObject *)v598,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v578 )
                  goto LABEL_1012;
                v580 = 4;
LABEL_808:
                srcLineSprite__SetState(v578, v580, v579, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v378 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(v23->fields.param, 0LL);
            if ( !v378 )
              goto LABEL_1012;
            if ( IsMapModel )
            {
              v379 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v378,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v379, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v379 )
                goto LABEL_1012;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34888416((ModelLineComponent_o *)v379, 0, 0.0, v380);
              v381 = v379[3].klass;
              if ( !v381 )
                goto LABEL_1012;
            }
            else
            {
              v615 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v378,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v615, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v615 )
                goto LABEL_1012;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v615, 0, 0LL);
              v381 = v615[5].monitor;
              if ( !v381 )
                goto LABEL_1012;
            }
            goto LABEL_882;
          case 204:
            v382 = this->fields.IsMapModel;
            v383 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(v23->fields.param, 0LL);
            if ( !v383 )
              goto LABEL_1012;
            if ( v382 )
            {
              v384 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v383,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v384, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v384 )
                goto LABEL_1012;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34888416((ModelLineComponent_o *)v384, 1, 0.0, v385);
              ModelLineComponent__SetQuestAfterActionColorAnim_34888892((ModelLineComponent_o *)v384, 0, 0.0, v386);
              v387 = v384[3].klass;
              if ( !v387 )
                goto LABEL_1012;
            }
            else
            {
              v616 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v383,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v616, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v616 )
                goto LABEL_1012;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v616, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v616, 0, 0LL);
              v387 = v616[5].monitor;
              if ( !v387 )
                goto LABEL_1012;
            }
            v617 = 2;
            goto LABEL_827;
          case 205:
            v388 = this->fields.IsMapModel;
            v389 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(v23->fields.param, 0LL);
            if ( !v389 )
              goto LABEL_1012;
            if ( v388 )
            {
              v390 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v389,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v390, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v390 )
                goto LABEL_1012;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34888416((ModelLineComponent_o *)v390, 1, 0.0, v391);
              ModelLineComponent__SetQuestAfterActionColorAnim_34888892((ModelLineComponent_o *)v390, 1, 0.0, v392);
              v387 = v390[3].klass;
              if ( !v387 )
                goto LABEL_1012;
            }
            else
            {
              v618 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v389,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3041D88 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v618, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v618 )
                goto LABEL_1012;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v618, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v618, 1, 0LL);
              v387 = v618[5].monitor;
              if ( !v387 )
                goto LABEL_1012;
            }
            v617 = 1;
LABEL_827:
            v387[4] = v617;
            goto LABEL_18;
          default:
            if ( id != 350 )
              return;
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v253 = updated;
            if ( *(int *)(updated + 24) <= 0 )
              goto LABEL_839;
            v254 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v254 < 1 )
              goto LABEL_839;
            v255 = v254;
            v256 = 0.5;
            if ( *(int *)(v253 + 24) > 1 )
            {
              v257 = System_Int32__Parse(*(System_String_o **)(v253 + 40), 0LL);
              if ( *(int *)(v253 + 24) >= 3 )
                v256 = System_Single__Parse(*(System_String_o **)(v253 + 48), 0LL) * 0.001;
            }
            else
            {
              v257 = 15;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BD7183 )
            {
              sub_1C21E38(&TerminalSceneComponent_TypeInfo);
              byte_4BD7183 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v664 = **(_QWORD **)(updated + 184);
            if ( !v664 )
              goto LABEL_1012;
            v665 = *(ScrTerminalMap_o **)(v664 + 264);
            v666 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(
              v666,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
              0LL);
            if ( !v665 )
              goto LABEL_1012;
            ScrTerminalMap__RequestMapMove_35647556(v665, v255, v256, v257, v666, 0LL);
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
          v37 = (System_String_o *)StringLiteral_1/*""*/;
          v38 = System_String__Concat_63115476((System_String_o *)StringLiteral_11033/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v39 = LocalizationManager__Get(v38, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v41 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v41,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
            0LL);
          if ( !Instance )
            goto LABEL_1012;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v37,
            v39,
            v41,
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
          v193 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1C21EE0(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1012;
          v200 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1013;
          v201 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1C21DDC((PartyOrganizationUtility_o *)(updated + 32), v201, v194, v195, v196, v197, v198, v199);
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split_63141708((System_String_o *)updated, v200, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v202 = *(_DWORD *)(updated + 24);
          if ( v202 <= 0 )
            goto LABEL_839;
          v203 = *(System_String_o **)(updated + 32);
          if ( v202 == 1 )
          {
            v204 = *(System_String_o **)(updated + 32);
            v203 = v193;
          }
          else
          {
            v204 = *(System_String_o **)(updated + 40);
          }
          v395 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v396 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v396,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
            0LL);
          if ( !v395 )
            goto LABEL_1012;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)v395,
            v203,
            v204,
            v396,
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
          v205 = (System_String_o *)StringLiteral_1/*""*/;
          v206 = System_String__Concat_63115476((System_String_o *)StringLiteral_11033/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v207 = LocalizationManager__Get(v206, 0LL);
          v208 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v209 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v209,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
            0LL);
          if ( !v208 )
            goto LABEL_1012;
          v210 = &dword_C37000;
          onClickOkSeKind = 0;
          goto LABEL_565;
        case 603:
          v211 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1C21EE0(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1012;
          v218 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1013;
          v219 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1C21DDC((PartyOrganizationUtility_o *)(updated + 32), v219, v212, v213, v214, v215, v216, v217);
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split_63141708((System_String_o *)updated, v218, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v220 = *(_DWORD *)(updated + 24);
          if ( v220 <= 0 )
            goto LABEL_839;
          v205 = *(System_String_o **)(updated + 32);
          if ( v220 == 1 )
          {
            v207 = *(System_String_o **)(updated + 32);
            v205 = v211;
          }
          else
          {
            v207 = *(System_String_o **)(updated + 40);
          }
          v208 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v209 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v209,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( !v208 )
            goto LABEL_1012;
          v210 = &dword_C37000;
          onClickOkSeKind = 1;
LABEL_565:
          CommonUI__OpenNotificationDialog_31129380(
            (CommonUI_o *)v208,
            v205,
            v207,
            v209,
            40.0,
            *((float *)v210 + 85),
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
          v221 = (System_String_o *)StringLiteral_1/*""*/;
          v222 = System_String__Concat_63115476((System_String_o *)StringLiteral_11033/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v223 = LocalizationManager__Get(v222, 0LL);
          v224 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v225 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v225,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
            0LL);
          if ( !v224 )
            goto LABEL_1012;
          CommonUI__OpenNotificationDialog_31129380(
            (CommonUI_o *)v224,
            v221,
            v223,
            v225,
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
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v134 = *(_QWORD *)(updated + 24);
          if ( v134 )
          {
            if ( !(_DWORD)v134 )
              goto LABEL_1013;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            v136 = *v14;
            if ( !*v14 )
              goto LABEL_1012;
            v137 = *(QuestAfterAction_TitleInfoControlCallback_o **)(v136 + 40);
            if ( (int)updated >= 1 )
            {
              if ( !v137 )
                goto LABEL_1012;
              QuestAfterAction_TitleInfoControlCallback__Start(
                *(QuestAfterAction_TitleInfoControlCallback_o **)(v136 + 40),
                0LL,
                v135);
              goto LABEL_18;
            }
          }
          else
          {
            if ( !*v14 )
              goto LABEL_1012;
            v137 = *(QuestAfterAction_TitleInfoControlCallback_o **)(*v14 + 40);
          }
          v393 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v393, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v137 )
            goto LABEL_1012;
          QuestAfterAction_TitleInfoControlCallback__Start(v137, v393, v394);
          return;
      }
    }
    if ( id == 530 )
    {
      v138 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
      System_Object___ctor((Il2CppObject *)v138, 0LL);
      if ( !v138 )
        goto LABEL_1012;
      *(_QWORD *)(v138 + 24) = v5;
      v145 = v138 + 24;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v138 + 24), v5, v139, v140, v141, v142, v143, v144);
      v146 = System_Int32__Parse(v23->fields.param, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_1012;
      v147 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v146,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      *(_QWORD *)(v138 + 16) = v147;
      v148 = (__int64 *)(v138 + 16);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v138 + 16), (int64_t)v147, v149, v150, v151, v152, v153, v154);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)updated, v146, 0LL);
      if ( !updated )
        goto LABEL_1012;
      v156 = updated;
      if ( *(_DWORD *)(updated + 32) == 1 )
      {
        updated = *v148;
        if ( !*v148 )
          goto LABEL_1012;
        if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2LL, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BD909A )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD909A = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v146;
          v157 = *(_DWORD *)(v156 + 44);
          if ( !byte_4BD909E )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4BD909E = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v157;
          if ( !*(_QWORD *)v145 )
            goto LABEL_1012;
          v158 = *(_QWORD *)(*(_QWORD *)v145 + 24LL);
          if ( !v158 )
            goto LABEL_1012;
          *(_BYTE *)(v158 + 195) = 1;
          v159 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v159,
            (Il2CppObject *)v138,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Request_object = NetworkManager__getRequest_object_(
                             v159,
                             (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
          if ( !byte_4BD7264 )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD7264 = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          v161 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
          if ( !byte_4BD7263 )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4BD7263 = 1;
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
            v161,
            *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
            0LL);
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v155);
      }
      return;
    }
    if ( id != 540 )
      return;
    updated = (__int64)v23->fields.param;
    if ( !updated )
      goto LABEL_1012;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
    if ( !updated )
      goto LABEL_1012;
    v61 = updated;
    if ( !*(_DWORD *)(updated + 24) )
LABEL_1013:
      sub_1C2209C(updated, v7);
    v62 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
    if ( *(int *)(v61 + 24) < 2 )
    {
      v63 = -1;
    }
    else
    {
      v63 = System_Int32__Parse(*(System_String_o **)(v61 + 40), 0LL);
      if ( *(int *)(v61 + 24) >= 3 )
      {
        v64 = System_Int32__Parse(*(System_String_o **)(v61 + 48), 0LL);
LABEL_261:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD736A )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD736A = 1;
        }
        v189 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v189 = TerminalPramsManager_TypeInfo;
        }
        v189->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BD7183 )
        {
          sub_1C21E38(&TerminalSceneComponent_TypeInfo);
          byte_4BD7183 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v190 = **(_QWORD **)(updated + 184);
        if ( !v190 )
          goto LABEL_1012;
        updated = *(_QWORD *)(v190 + 264);
        if ( !updated )
          goto LABEL_1012;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v62, v63, v64, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BD736A )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD736A = 1;
          }
          v192 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v192 = TerminalPramsManager_TypeInfo;
          }
          v192->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_18;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        updated = *v14;
        if ( !*v14 )
          goto LABEL_1012;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v191);
        return;
      }
    }
    v64 = -1;
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
        if ( !System_String__op_Equality(v23->fields.param, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL) )
          goto LABEL_18;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD92E8 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD92E8 = 1;
        }
        v133 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v133 = TerminalPramsManager_TypeInfo;
        }
        v133->static_fields->_IsTransOrdealCall_k__BackingField = 1;
        goto LABEL_471;
      }
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_1012;
      v186 = updated;
      if ( *(_DWORD *)(updated + 24) )
      {
        v187 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(int *)(v186 + 24) >= 2 )
          v188 = System_Int32__Parse(*(System_String_o **)(v186 + 40), 0LL) + 1;
        else
          v188 = 0;
        v320 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39918404(v320, (System_String_o *)StringLiteral_1/*""*/, v187, v188, 0LL);
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1012;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v320, 0LL);
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
            param = v23->fields.param;
            v46 = Method_QuestAfterAction_StateMain_UpdateAnim__;
            if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
              v46 = (_QWORD *)sub_1C21E50(Method_QuestAfterAction_StateMain_UpdateAnim__);
            v47 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v46, v46[4]);
            OverwriteAssetSoundName__PlaySe(v47, param, 0, 0LL);
            goto LABEL_18;
          }
          return;
        }
        v178 = *v14;
        if ( !*v14 )
          goto LABEL_1012;
        updated = *(_QWORD *)(v178 + 88);
        if ( !updated )
          goto LABEL_1012;
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               (System_Collections_Generic_Dictionary_int__object__o *)updated,
               *(_DWORD *)(v178 + 64),
               &value,
               (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
        {
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
          if ( !updated )
            goto LABEL_1012;
          AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BD7183 )
          {
            sub_1C21E38(&TerminalSceneComponent_TypeInfo);
            byte_4BD7183 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v179 = **(_QWORD **)(updated + 184);
          if ( !v179 )
            goto LABEL_1012;
          if ( !*(_QWORD *)(v179 + 464) )
            goto LABEL_245;
          if ( !*(_DWORD *)(updated + 224) )
            j_il2cpp_runtime_class_init_0(updated);
          if ( !byte_4BD7183 )
          {
            sub_1C21E38(&TerminalSceneComponent_TypeInfo);
            byte_4BD7183 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v180 = **(_QWORD **)(updated + 184);
          if ( !v180 )
            goto LABEL_1012;
          v181 = *(_QWORD *)(v180 + 464);
          if ( !v181 )
            goto LABEL_1012;
          updated = *(unsigned int *)(v181 + 48);
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
            v560 = (System_String_o *)value[1].monitor;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice(v560, 0, 0LL);
          }
          else
          {
            updated = (__int64)ServantVoiceEntity__getVoiceAssetName_41121704(updated, 0LL);
            if ( !value )
              goto LABEL_1012;
            v182 = (System_String_o *)updated;
            v183 = (System_String_o *)value[1].monitor;
            v184 = SeManager_TypeInfo;
            if ( !SeManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              v184 = SeManager_TypeInfo;
            }
            DEFAULT_VOLUME = v184->static_fields->DEFAULT_VOLUME;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice_39957484(v182, v183, DEFAULT_VOLUME, 0LL, 0, 0LL);
          }
        }
LABEL_839:
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        return;
      }
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)System_String__Split_63140568(
                           (System_String_o *)updated,
                           (System_String_o *)StringLiteral_866/*","*/,
                           0,
                           0LL);
      if ( !updated )
        goto LABEL_1012;
      v175 = *(_QWORD *)(updated + 24);
      v176 = updated;
      if ( !v175 )
        goto LABEL_456;
      if ( (_DWORD)v175 )
      {
        if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL) > 0 )
          goto LABEL_18;
        if ( *(int *)(v176 + 24) >= 2 )
        {
          v177 = System_Int32__Parse(*(System_String_o **)(v176 + 40), 0LL);
LABEL_457:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__SetAutoResumeForFolder(v177, 0LL);
          if ( !byte_4BD9275 )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD9275 = 1;
          }
          v321 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v321 = TerminalPramsManager_TypeInfo;
          }
          if ( v321->static_fields->_DispState_k__BackingField == 3 )
          {
            if ( !v321->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v321);
            if ( !byte_4BD92E9 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD92E9 = 1;
            }
            v322 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v322 = TerminalPramsManager_TypeInfo;
            }
            v322->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
          }
LABEL_471:
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !updated )
            goto LABEL_1012;
          AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0LL, 0, 0LL);
          goto LABEL_839;
        }
LABEL_456:
        v177 = 0;
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
      if ( !*v14 )
        goto LABEL_1012;
      *(_BYTE *)(*v14 + 193) = 1;
      goto LABEL_18;
    case 851:
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      v162 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v162 = TerminalSceneComponent_TypeInfo;
      }
      v163 = v162->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v23, (const MethodInfo *)v7);
      if ( !v163 )
        goto LABEL_1012;
      TerminalSceneComponent__playBgm(v163, (System_String_o *)updated, 0LL);
      if ( !*v14 )
        goto LABEL_1012;
      *(_BYTE *)(*v14 + 193) = 0;
      goto LABEL_18;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalSceneComponent_c *screenCollider; // x0
  __int64 v11; // x1
  struct QuestAfterAction_o *v12; // x8
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4BD92BE & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD92BE = 1;
  }
  this->fields.that = that;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)that, (int64_t)method, v3, v4, v5, v6, v7);
  v12 = this->fields.that;
  if ( !v12 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v12->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
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
    sub_1C22094(screenCollider, v11);
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
    sub_1C22094(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C22094(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4BD92BD & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD92BD = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1C22094(v2, method);
  return mTerminalMap->fields.subRootGimmickP;
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

  if ( (byte_4BD92C0 & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_16991/*"afterActionBk"*/);
    byte_4BD92C0 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16991/*"afterActionBk"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
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
    sub_1C22094(mInstance, deleteKey);
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
    sub_1C22094(this, value);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD92C2 & 1) == 0 )
  {
    sub_1C21E38(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4BD92C2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  TerminalPramsManager_c *v2; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v5; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__16_27; // x21
  Il2CppObject *v8; // x22
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BD92C3 & 1) == 0 )
  {
    sub_1C21E38(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__);
    sub_1C21E38(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4BD92C3 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4BD7264 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
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
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1C22084(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v8, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_27,
      (int64_t)_9__16_27,
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
    0LL,
    -1,
    0,
    0,
    0LL,
    0LL);
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_27(
        QuestAfterAction_StateMain___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___c_c *v3; // x0
  NetworkManager_ResultCallbackFunc_o *_9__16_28; // x19
  Il2CppObject *v5; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v14; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v18; // x1

  if ( (byte_4BD92C4 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__);
    sub_1C21E38(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4BD92C4 = 1;
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
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v5,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__16_28, (int64_t)_9__16_28, v7, v8, v9, v10, v11, v12);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v14->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_object )
    sub_1C22094(SelectRouteArray, v18);
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
  Il2CppObject *v4; // x19
  System_Object_array *v5; // x19
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4BD92C5 & 1) == 0 )
  {
    sub_1C21E38(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_16991/*"afterActionBk"*/);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    sub_1C21E38(&StringLiteral_13878/*"TerminalTransitionInfoMissionId"*/);
    byte_4BD92C5 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_63126736(
                         (System_String_o *)StringLiteral_16086/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16345/*"]"*/,
                         0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__DeserializeArray_object_(
         v4,
         (const MethodInfo_3017804 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16991/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13878/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v5, 1, 0LL);
  if ( !byte_4BD736A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD736A = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(_4__this, method);
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
  UnityEngine_GameObject_c *v14; // x8
  bool Effect; // w21
  TerminalPramsManager_c *v16; // x0
  TerminalPramsManager_c *v17; // x0
  int32_t WarId_k__BackingField; // w19
  UnityEngine_GameObject_c *v19; // x8
  ScrTerminalListTop_o *v20; // x19
  int32_t v21; // w21

  if ( (byte_4BD92C6 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_16991/*"afterActionBk"*/);
    sub_1C21E38(&StringLiteral_13878/*"TerminalTransitionInfoMissionId"*/);
    byte_4BD92C6 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
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
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = _4__this->fields.subRootGimmickP->klass;
  if ( !v5 || (_4__this = *(ScrTerminalMap_o **)&v5->_2.thread_static_fields_offset) == 0LL )
LABEL_97:
    sub_1C22094(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0LL);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = _4__this->fields.subRootGimmickP->klass;
  if ( !v6 )
    goto LABEL_97;
  _4__this = *(ScrTerminalMap_o **)&v6->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_97;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)_4__this, 0, 0LL, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BD92EA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD92EA = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4BD7264 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v7->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v9->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0LL);
  v11 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v12->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_4BD92EB )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92EB = 1;
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
  TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  TerminalPramsManager__Save_SaveData(0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16991/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13878/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v14 = _4__this->fields.subRootGimmickP->klass;
  if ( !v14 )
    goto LABEL_97;
  _4__this = *(ScrTerminalMap_o **)&v14->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_97;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)_4__this, 0LL);
  if ( !byte_4BD92EC )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92EC = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_IsPlayGetEffect_k__BackingField = Effect;
  _4__this = (ScrTerminalMap_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_97;
  ((void (__fastcall *)(ScrTerminalMap_o *, Il2CppRuntimeInterfaceOffsetPair *))_4__this->klass[1]._1.implementedInterfaces)(
    _4__this,
    _4__this->klass[1]._1.interfaceOffsets);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v17->static_fields->_WarId_k__BackingField;
  if ( !byte_4BD92E2 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4BD92E2 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v19 = _4__this->fields.subRootGimmickP->klass;
  if ( !v19 )
    goto LABEL_97;
  v20 = *(ScrTerminalListTop_o **)&v19->_2.static_fields_size;
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  v21 = *((_DWORD *)&_4__this->fields.subRootGimmickP->fields + 1);
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !LODWORD(_4__this->fields.pfbBaseP) )
  {
    j_il2cpp_runtime_class_init_0(_4__this);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v20 )
    goto LABEL_97;
  ScrTerminalListTop__RequestBattleSecnario(v20, v21, LODWORD(_4__this->fields.subRootGimmickP[1].klass) + 1, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__29(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(spot, method);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
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
  __int64 v3; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_Component_o *v12; // x22
  Il2CppObject *v13; // x0
  UnityEngine_Color_o **v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v22; // x8
  UnityEngine_Color_o *v23; // x20
  float v24; // s0
  UITweener_o *v25; // x20
  EventDelegate_Callback_o *v26; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4BD92C7 & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_TweenColor___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__);
    sub_1C21E38(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
    byte_4BD92C7 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v3 = sub_1C22084(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)this, v6, v7, v8, v9, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v3 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v3 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)v13, v15, v16, v17, v18, v19, v20);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( paramsStr->max_length <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                            paramsStr->m_Items[1],
                                            &color,
                                            0LL);
  if ( !*v14
    || ((*v14)[8] = *(UnityEngine_Color_o *)((char *)&v12[6].klass + 4), !*v14)
    || ((*v14)[9] = color, (v22 = this->fields.paramsStr) == 0LL) )
  {
LABEL_18:
    sub_1C22094(mapGimmick, v5);
  }
  if ( v22->max_length <= 2 )
LABEL_19:
    sub_1C2209C(mapGimmick, v5);
  v23 = *v14;
  v24 = System_Single__Parse(v22->m_Items[2], 0LL);
  if ( !v23 )
    goto LABEL_18;
  v23[3].fields.b = v24;
  mapGimmick = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0LL);
  v25 = *(UITweener_o **)(v3 + 16);
  v26 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v26,
    (Il2CppObject *)v3,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__,
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


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_14___UpdateAnim_b__19(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tween; // x20
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  __int64 v5; // x1
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_4BD92C8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD92C8 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1C22094(_4__this, v5);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
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
  QuestEntity_o *questEntity; // x0
  void *image; // x8
  ScrTerminalListTop_o *v6; // x20
  int32_t name_high; // w21
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals16; // x22
  int namespaze; // w24
  System_Action_o *_9__25; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  clsQuestCheck_o *v17; // x19
  QuestAfterAction_StateMain___c_c *v18; // x8
  System_Action_o *_9__16_26; // x20
  Il2CppObject *v20; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BD92C9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__);
    sub_1C21E38(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__);
    sub_1C21E38(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4BD92C9 = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_35;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
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
      if ( !byte_4BD7264 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7264 = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_4BD7263 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4BD7263 = 1;
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
          _9__25 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            _9__25,
            (Il2CppObject *)CS___8__locals16,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
            0LL);
          CS___8__locals16->fields.__9__25 = _9__25;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&CS___8__locals16->fields.__9__25,
            (int64_t)_9__25,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
        }
        if ( v6 )
        {
          ScrTerminalListTop__StartWindowMessage_35492084(v6, name_high, namespaze + 1, 2, _9__25, 1, 0LL);
          return;
        }
      }
    }
LABEL_35:
    sub_1C22094(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v17 = (clsQuestCheck_o *)questEntity;
  v18 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v18 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_26 = v18->static_fields->__9__16_26;
  if ( !_9__16_26 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__16_26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v20, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_26,
      (int64_t)_9__16_26,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !v17 )
    goto LABEL_35;
  clsQuestCheck__PlayQuestStartAction(v17, _9__16_26, 0LL);
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
    sub_1C22094(spot, method);
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
    sub_1C22094(spot, method);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
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
  sub_1C21DDC(p_end, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)startCallback, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)p_end, (int64_t)endCallback, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1C21DDC(v6, (int64_t)vName, v7, v8, v9, v10, v11, v12);
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
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x19
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
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
  QuestAfterAction_Command_o *v28; // x0
  const MethodInfo *v29; // x1
  int64_t v30; // x20
  int id; // w8
  unsigned int v32; // w8
  int32_t v33; // w21
  int32_t CommandTargetId; // w2
  const MethodInfo *v35; // x3
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *v49; // [xsp+18h] [xbp-48h]

  v2 = this;
  v49 = this;
  if ( (byte_4BD92CD & 1) == 0 )
  {
    sub_1C21E38(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    byte_4BD92CD = 1;
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
      sub_1C22094(this, method);
    klass = commandEnumerable->klass;
    v7 = *(unsigned __int16 *)(&commandEnumerable->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&commandEnumerable->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C73E18(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v10 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v49->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v49->fields.__7__wrap1, v10, v11, v12, v13, v14, v15, v16);
    v2 = v49;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_46:
    sub_1C22094(this, method);
  while ( 1 )
  {
    v18 = _7__wrap1->klass;
    v19 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_18:
      v21 = sub_1C73E18(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v21)(
            _7__wrap1,
            *(_QWORD *)(v21 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81____m__Finally1(v49, v22);
      v49->fields.__7__wrap1 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v49->fields.__7__wrap1, 0LL, v42, v43, v44, v45, v46, v47);
      return 0;
    }
    v23 = v49->fields.__7__wrap1;
    if ( !v23 )
      sub_1C22094(v49, v22);
    v24 = v23->klass;
    v25 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v26 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_26;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_26:
      v27 = sub_1C73E18(
              v49->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v28 = (QuestAfterAction_Command_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v27)(
                                          v23,
                                          *(_QWORD *)(v27 + 8));
    v30 = (int64_t)v28;
    if ( !v28 )
      sub_1C22094(0LL, v29);
    if ( !_4__this )
      sub_1C22094(v28, v29);
    id = v28->fields.id;
    if ( id <= 205 )
    {
      if ( (unsigned int)(id - 100) >= 0xF || ((0x7C1Fu >> (id - 100)) & 1) == 0 )
      {
        if ( (unsigned int)(id - 200) <= 5 )
        {
          v33 = 1;
          goto LABEL_44;
        }
        goto LABEL_41;
      }
      v33 = 0;
    }
    else
    {
      if ( id > 550 )
      {
        v32 = id - 1000;
        if ( v32 < 0xD )
        {
          v33 = dword_C38504[v32];
          goto LABEL_44;
        }
LABEL_41:
        v33 = -1;
        goto LABEL_44;
      }
      if ( (unsigned int)(id - 400) >= 0xD )
      {
        if ( id == 550 )
        {
          v33 = 3;
          goto LABEL_44;
        }
        goto LABEL_41;
      }
      v33 = 2;
    }
LABEL_44:
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v28, v29);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    v33,
                                                                                    CommandTargetId,
                                                                                    v35);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v49->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_46;
  }
  v49->fields.__2__current = (struct QuestAfterAction_Command_o *)v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v49->fields.__2__current, v30, v36, v37, v38, v39, v40, v41);
  result = 1;
  v49->fields.__1__state = 1;
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

  if ( (byte_4BD92CF & 1) == 0 )
  {
    sub_1C21E38(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo);
    byte_4BD92CF = 1;
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
    v10 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)sub_1C22084(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v10->fields.__4__this, (int64_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v10->fields.commandEnumerable = _3__commandEnumerable;
  sub_1C21DDC(
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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

  if ( (byte_4BD92CE & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    byte_4BD92CE = 1;
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
      p_method = sub_1C73E18(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
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
      sub_1C22094(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__85_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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

  if ( (byte_4BD92CA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    byte_4BD92CA = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1C22094(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_34907532((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, v4);
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

  if ( (byte_4BD92CB & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BD92CB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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

  if ( (byte_4BD92CC & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BD92CC = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)(_4__this + 176), 0LL, v2, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1C21DDC((PartyOrganizationUtility_o *)(_4__this + 72), 0LL, v10, v11, v12, v13, v14, v15),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1C22094(_4__this, method);
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
    sub_1C22094(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, v2);
}