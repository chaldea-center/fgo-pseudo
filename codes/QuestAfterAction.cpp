void __fastcall QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Generic_Dictionary_int__object__o *v47; // x20
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4B12FE7 & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthQuestAfterAction_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v13, v14);
    sub_1BCA7E0(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v15, v16);
    byte_4B12FE7 = 1;
  }
  v17 = (Il2CppObject *)sub_1BCAA2C(QuestAfterAction_TitleInfoControlCallback_TypeInfo, method, v2, v3);
  System_Object___ctor(v17, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v27 = (Il2CppObject *)sub_1BCAA2C(BlankEarthQuestAfterAction_TypeInfo, v24, v25, v26);
  System_Object___ctor(v27, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v27;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int64_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v37 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo,
                                                                   v34,
                                                                   v35,
                                                                   v36);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v37,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.commandTypeIds, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  v47 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo,
                                                                  v44,
                                                                  v45,
                                                                  v46);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v47,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtVoices, (int64_t)v47, v48, v49, v50, v51, v52, v53);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_1BCA784(p_endAct, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endAct, 0LL);
}


bool __fastcall QuestAfterAction__CheckChangeBlankEarth(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Instance; // x20
  __int64 v22; // x0
  __int64 v23; // x2
  Il2CppObject *MasterData_object; // x21
  int32_t v25; // w22
  _QWORD *p_image; // x21
  __int64 v27; // x2
  Il2CppObject *v28; // x21
  int32_t v29; // w22
  TerminalPramsManager_c *v30; // x0
  __int64 v31; // x2
  int32_t v32; // w19
  __int64 v33; // x8
  bool result; // w0
  __int64 v35; // x2
  __int64 v36; // x3
  unsigned int *v37; // x19
  __int64 v38; // x23
  unsigned __int64 v39; // x24
  __int64 v40; // x25
  int i; // w26
  int64_t v42; // x20
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B12FCD & 1) == 0 )
  {
    sub_1BCA7E0(&QuestAfterAction_Command___TypeInfo, method, v2);
    sub_1BCA7E0(&QuestAfterAction_Command_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v17, v18);
    byte_4B12FCD = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
  if ( !byte_4B13013 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
    byte_4B13013 = 1;
  }
  v22 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    v22 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v22 + 184) + 102LL) )
  {
    if ( !Instance )
      goto LABEL_74;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v23);
      byte_4B12DC3 = 1;
    }
    v22 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
      v22 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v25 = *(_DWORD *)(*(_QWORD *)(v22 + 184) + 20LL);
    if ( !byte_4B12DCE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v23);
      v22 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4B12DCE = 1;
    }
    if ( !*(_DWORD *)(v22 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v22, v19);
      v22 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_74;
    p_image = QuestPhaseDetailAddMaster__GetAfterAction(
                (QuestPhaseDetailAddMaster_o *)MasterData_object,
                v25,
                *(_DWORD *)(*(_QWORD *)(v22 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_57;
    v28 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v27);
      byte_4B12DC3 = 1;
    }
    v22 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
      v22 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v29 = *(_DWORD *)(*(_QWORD *)(v22 + 184) + 20LL);
    if ( !byte_4B12DCE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v27);
      v22 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4B12DCE = 1;
    }
    if ( !*(_DWORD *)(v22 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v22, v19);
      v22 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v28 )
      goto LABEL_74;
    p_image = QuestPhaseDetailMaster__GetAfterAction(
                (QuestPhaseDetailMaster_o *)v28,
                v29,
                *(_DWORD *)(*(_QWORD *)(v22 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_57;
    v22 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v22 + 224) )
    j_il2cpp_runtime_class_init_0(v22, v19);
  if ( !byte_4B13016 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
    byte_4B13016 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    v30 = TerminalPramsManager_TypeInfo;
  }
  if ( !v30->static_fields->_IsQuestClear_k__BackingField )
    return 0;
  if ( !v30->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v30, v19);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v31);
    byte_4B12DC3 = 1;
  }
  v22 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    v22 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance
    || (v32 = *(_DWORD *)(*(_QWORD *)(v22 + 184) + 20LL),
        (v22 = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_74:
    sub_1BCAA3C(v22, v19);
  }
  v22 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
          &entity,
          v32,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (v22 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_74;
  p_image = &entity[6].klass->_1.image;
  if ( !p_image )
    return 0;
LABEL_57:
  v33 = p_image[3];
  result = 0;
  if ( (int)v33 < 2 || (v33 & 1) != 0 )
    return result;
  v22 = sub_1BCA888(QuestAfterAction_Command___TypeInfo, (unsigned int)v33 >> 1);
  if ( !v22 )
    goto LABEL_74;
  v37 = (unsigned int *)v22;
  if ( *(int *)(v22 + 24) < 1 )
    return 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = v22 + 32;
  for ( i = 1; ; i += 2 )
  {
    v42 = sub_1BCAA2C(QuestAfterAction_Command_TypeInfo, v19, v35, v36);
    System_Object___ctor((Il2CppObject *)v42, 0LL);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_73;
    v22 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0LL);
    if ( !v42 )
      goto LABEL_74;
    *(_DWORD *)(v42 + 16) = v22;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_73:
      sub_1BCAA44(v22, v19);
    v49 = p_image[i + 4];
    *(_QWORD *)(v42 + 24) = v49;
    sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 24), v49, v43, v44, v45, v46, v47, v48);
    if ( *(_DWORD *)(v42 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v42 + 24), (System_String_o *)StringLiteral_1262/*"1"*/, 0LL) )
    {
      break;
    }
    v22 = sub_1BCA91C(v42, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
    if ( !v22 )
    {
      v56 = sub_1BCAA60();
      sub_1BCA908(v56, 0LL);
    }
    if ( v39 >= v37[6] )
      goto LABEL_73;
    *(_QWORD *)(v40 + 8 * v39) = v42;
    sub_1BCA784((PartyOrganizationUtility_o *)(v40 + v38), v42, v50, v51, v52, v53, v54, v55);
    ++v39;
    v38 += 8LL;
    if ( (__int64)v39 >= (int)v37[6] )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x2
  TerminalPramsManager_c *v61; // x0
  int32_t QuestId_k__BackingField; // w22
  __int64 v63; // x1
  System_String_array *afterActionVals; // x23
  __int64 v65; // x2
  Il2CppObject *Instance; // x22
  int64_t MasterData_object; // x0
  __int64 v68; // x8
  __int64 v69; // x8
  __int64 v70; // x8
  int32_t v71; // w24
  __int64 v72; // x8
  __int64 v73; // x8
  int32_t v74; // w25
  __int64 v75; // x8
  __int64 v76; // x8
  int32_t v77; // w24
  __int64 v78; // x8
  __int64 v79; // x8
  __int64 v80; // x2
  int32_t v81; // w19
  TerminalPramsManager_c *v82; // x0
  TerminalSceneComponent_c *v83; // x0
  TerminalPramsManager_c *v84; // x0
  char *v85; // x24
  int64_t v86; // x23
  __int64 v87; // x2
  int32_t v88; // w24
  __int64 v89; // x2
  int32_t v90; // w24
  System_String_o *v91; // x24
  __int64 v92; // x2
  bool v93; // w24
  bool v94; // w23
  __int64 v95; // x2
  Il2CppObject *v96; // x23
  WarEntity_o *QuestId; // x0
  WarEntity_o *v98; // x23
  TerminalPramsManager_c *v99; // x0
  int32_t id; // w19
  bool v101; // w23
  TerminalPramsManager_c *v102; // x0
  __int64 v103; // x2
  Il2CppObject *v104; // x23
  bool QuestEntity; // w0
  __int64 v106; // x2
  TerminalPramsManager_c *v107; // x0
  __int64 v108; // x2
  Il2CppObject *v109; // x23
  int32_t v110; // w24
  __int64 v111; // x2
  Il2CppObject *v112; // x22
  int32_t v113; // w23
  TerminalPramsManager_c *v114; // x0
  __int64 v115; // x2
  Il2CppObject *Master_object; // x22
  int32_t v117; // w24
  __int64 v118; // x2
  TerminalPramsManager_c *v119; // x0
  TerminalPramsManager_c *v120; // x0
  int32_t BeforeQuestStartWarId_k__BackingField; // w19
  TerminalSceneComponent_c *v122; // x0
  __int64 v123; // x1
  __int64 v124; // x2
  Il2CppObject *v125; // x21
  __int64 v126; // x2
  TerminalPramsManager_c *v127; // x0
  bool IsOverwriteCommandNone; // w0
  __int64 v129; // x8
  int64_t v130; // x0
  unsigned int **p_commandBuf; // x21
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  __int64 v138; // x2
  __int64 v139; // x3
  int *commandBuf; // x8
  unsigned __int64 v141; // x22
  il2cpp_array_size_t v142; // w29
  int64_t v143; // x24
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  __int64 v150; // x8
  int64_t v151; // x1
  System_String_o **v152; // x25
  const MethodInfo *v153; // x2
  int v154; // w8
  int v155; // w8
  __int64 v156; // x3
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  int64_t v158; // x28
  __int64 v159; // x27
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  int v166; // w8
  unsigned int v167; // w8
  System_Collections_Generic_List_int__o *Item; // x26
  const MethodInfo *v169; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v171; // x9
  __int64 size; // x10
  QuestAfterAction_o *v173; // x0
  const MethodInfo *v174; // x2
  System_String_c *v175; // x8
  int64_t v176; // x25
  unsigned __int64 v177; // x26
  System_String_Fields v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  unsigned int *v181; // x25
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  unsigned int *v188; // x0
  TerminalPramsManager_c *v189; // x0
  __int64 v190; // x2
  Il2CppObject *v191; // x20
  TerminalPramsManager_c *v192; // x0
  BalanceConfig_c *v193; // x8
  int32_t WarId_k__BackingField; // w20
  int32_t klass; // w20
  TerminalPramsManager_c *v196; // x0
  TerminalPramsManager_c *v197; // x0
  BalanceConfig_c *v198; // x8
  int32_t v199; // w19
  TerminalPramsManager_c *v200; // x0
  TerminalPramsManager_c *v201; // x0
  __int64 v202; // x0
  int32_t v203; // [xsp+8h] [xbp-88h]
  int32_t svtId; // [xsp+Ch] [xbp-84h] BYREF
  Il2CppObject *v205; // [xsp+10h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v207; // [xsp+20h] [xbp-70h] BYREF
  QuestEntity_o *v208; // [xsp+28h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4B12FCC & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isBeforeAction, method);
    sub_1BCA7E0(&bool_TypeInfo, v5, v6);
    sub_1BCA7E0(&QuestAfterAction_Command___TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestAfterAction_Command_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, v29, v30);
    sub_1BCA7E0(&DataManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v33, v34);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v35, v36);
    sub_1BCA7E0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v37, v38);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v41, v42);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__,
      v43,
      v44);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v47, v48);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v51, v52);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v53, v54);
    sub_1BCA7E0(&QuestAfterAction_VoiceInfo_TypeInfo, v55, v56);
    this = (QuestAfterAction_o *)sub_1BCA7E0(&StringLiteral_16878/*"afterActionBk"*/, v57, v58);
    byte_4B12FCC = 1;
  }
  v207 = 0LL;
  v208 = 0LL;
  v205 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_2F1DB4C *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v59);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v59);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v59, v60);
      byte_4B12DC3 = 1;
    }
    v61 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v59);
      v61 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v61->static_fields->_QuestId_k__BackingField;
    if ( !byte_4B12DCE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v59, v60);
      v61 = TerminalPramsManager_TypeInfo;
      byte_4B12DCE = 1;
    }
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61, v59);
      v61 = TerminalPramsManager_TypeInfo;
    }
    afterActionVals = QuestAfterAction__GetBeforeAction(
                        QuestId_k__BackingField,
                        v61->static_fields->_PhaseCnt_k__BackingField + 1,
                        v60);
    goto LABEL_213;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v63);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v63, v65);
    byte_4B10F83 = 1;
  }
  MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v63);
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v68 = **(_QWORD **)(MasterData_object + 184);
  if ( !v68 )
    goto LABEL_345;
  if ( *(_QWORD *)(v68 + 464) )
  {
    if ( !*(_DWORD *)(MasterData_object + 224) )
      j_il2cpp_runtime_class_init_0(MasterData_object, v63);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v63, v65);
      byte_4B10F83 = 1;
    }
    MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v63);
      MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    }
    v69 = **(_QWORD **)(MasterData_object + 184);
    if ( !v69 )
      goto LABEL_345;
    v70 = *(_QWORD *)(v69 + 464);
    if ( !v70 )
      goto LABEL_345;
    v71 = *(_DWORD *)(v70 + 20);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v63, v65);
      MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
      byte_4B10F83 = 1;
    }
    if ( !*(_DWORD *)(MasterData_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object, v63);
      MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
    }
    v72 = **(_QWORD **)(MasterData_object + 184);
    if ( !v72 )
      goto LABEL_345;
    v73 = *(_QWORD *)(v72 + 464);
    if ( !v73 )
      goto LABEL_345;
    v74 = *(_DWORD *)(v73 + 16);
    if ( v74 >= 1 )
    {
      if ( !*(_DWORD *)(MasterData_object + 224) )
        j_il2cpp_runtime_class_init_0(MasterData_object, v63);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v63, v65);
        byte_4B10F83 = 1;
      }
      MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v63);
        MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
      }
      v75 = **(_QWORD **)(MasterData_object + 184);
      if ( !v75 )
        goto LABEL_345;
      v76 = *(_QWORD *)(v75 + 464);
      if ( !v76 )
        goto LABEL_345;
      if ( !Instance )
        goto LABEL_345;
      afterActionVals = *(System_String_array **)(v76 + 32);
      MasterData_object = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !MasterData_object )
        goto LABEL_345;
      MasterData_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                     v74,
                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !MasterData_object )
        goto LABEL_345;
      v77 = *(_DWORD *)(MasterData_object + 28);
      MasterData_object = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !MasterData_object )
        goto LABEL_345;
      goto LABEL_67;
    }
    if ( v71 >= 1 )
    {
      if ( !*(_DWORD *)(MasterData_object + 224) )
        j_il2cpp_runtime_class_init_0(MasterData_object, v63);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v63, v65);
        byte_4B10F83 = 1;
      }
      MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v63);
        MasterData_object = (int64_t)TerminalSceneComponent_TypeInfo;
      }
      v78 = **(_QWORD **)(MasterData_object + 184);
      if ( !v78 )
        goto LABEL_345;
      v79 = *(_QWORD *)(v78 + 464);
      if ( !v79 )
        goto LABEL_345;
      afterActionVals = *(System_String_array **)(v79 + 32);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v63);
      MasterData_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !MasterData_object )
        goto LABEL_345;
      MasterData_object = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                     v71,
                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !MasterData_object )
        goto LABEL_345;
      v77 = *(_DWORD *)(MasterData_object + 24);
      MasterData_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
      if ( !MasterData_object )
        goto LABEL_345;
LABEL_67:
      MasterData_object = (int64_t)WarMaster__getByEventId((WarMaster_o *)MasterData_object, v77, 0LL);
      if ( !MasterData_object )
        goto LABEL_345;
      v81 = *(_DWORD *)(MasterData_object + 16);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      if ( !byte_4B12DCD )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v80);
        byte_4B12DCD = 1;
      }
      v82 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
        v82 = TerminalPramsManager_TypeInfo;
      }
      v82->static_fields->_WarId_k__BackingField = v81;
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v63, v80);
        byte_4B10F83 = 1;
      }
      v83 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v63);
        v83 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (int64_t)v83->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_345;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
      if ( afterActionVals )
        goto LABEL_213;
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
  if ( !byte_4B13013 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v65);
    byte_4B13013 = 1;
  }
  v84 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    v84 = TerminalPramsManager_TypeInfo;
  }
  v85 = &byte_4B12000;
  if ( !v84->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16878/*"afterActionBk"*/, 0LL) )
  {
    MasterData_object = (int64_t)UnityEngine_PlayerPrefs__GetString_70112520(
                                   (System_String_o *)StringLiteral_16878/*"afterActionBk"*/,
                                   0LL);
    if ( !MasterData_object )
      goto LABEL_345;
    MasterData_object = (int64_t)System_String__Split((System_String_o *)MasterData_object, 0x2Cu, 0, 0LL);
    if ( !MasterData_object )
      goto LABEL_345;
    v86 = MasterData_object;
    if ( !*(_DWORD *)(MasterData_object + 24) )
      goto LABEL_434;
    v88 = System_Int32__Parse(*(System_String_o **)(MasterData_object + 32), 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    if ( !byte_4B12DC7 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v87);
      byte_4B12DC7 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL) = v88;
    if ( *(_DWORD *)(v86 + 24) <= 1u )
      goto LABEL_434;
    v90 = System_Int32__Parse(*(System_String_o **)(v86 + 40), 0LL);
    if ( !byte_4B12DCB )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v89);
      byte_4B12DCB = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) = v90;
    if ( *(_DWORD *)(v86 + 24) <= 2u )
      goto LABEL_434;
    v91 = *(System_String_o **)(v86 + 48);
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo, v63);
    v93 = System_Boolean__Parse(v91, 0LL);
    if ( !byte_4B13014 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v92);
      byte_4B13014 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 101LL) = v93;
    if ( *(_DWORD *)(v86 + 24) <= 3u )
      goto LABEL_434;
    v94 = System_Boolean__Parse(*(System_String_o **)(v86 + 56), 0LL);
    v85 = &byte_4B12000;
    if ( !byte_4B13015 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v65);
      byte_4B13015 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 102LL) = v94;
    if ( !byte_4B13016 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v65);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      byte_4B13016 = 1;
    }
    if ( !*(_DWORD *)(MasterData_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object, v63);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 101LL) )
    {
      if ( !Instance )
        goto LABEL_345;
      v96 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      if ( !byte_4B12DC3 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v95);
        byte_4B12DC3 = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v96 )
        goto LABEL_345;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)v96,
                  *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL),
                  0LL);
      if ( QuestId )
      {
        v98 = QuestId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
        if ( !byte_4B13017 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v65);
          byte_4B13017 = 1;
        }
        v99 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
          v99 = TerminalPramsManager_TypeInfo;
        }
        v99->static_fields->_IsWarClear_k__BackingField = 1;
        id = v98->fields.id;
        if ( !byte_4B12DCD )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v65);
          v99 = TerminalPramsManager_TypeInfo;
          byte_4B12DCD = 1;
        }
        if ( !v99->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v99, v63);
          v99 = TerminalPramsManager_TypeInfo;
        }
        v85 = &byte_4B12000;
        v99->static_fields->_WarId_k__BackingField = id;
        v101 = TerminalPramsManager__CheckIsOrdealCallWarClear(v98, 0LL);
        if ( !byte_4B13018 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v65);
          byte_4B13018 = 1;
        }
        v102 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
          v102 = TerminalPramsManager_TypeInfo;
        }
        v102->static_fields->_IsOrdealCallWarClear_k__BackingField = v101;
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
  if ( !byte_4B13019 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v65);
    byte_4B13019 = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 91LL) )
  {
    if ( !*(_DWORD *)(MasterData_object + 224) )
      j_il2cpp_runtime_class_init_0(MasterData_object, v63);
    if ( !byte_4B12CE1 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v65);
      byte_4B12CE1 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(MasterData_object + 184) + 92LL) )
      goto LABEL_212;
  }
  if ( !Instance )
    goto LABEL_345;
  v104 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
  if ( !v85[3523] )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v103);
    v85[3523] = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !v104 )
    goto LABEL_345;
  QuestEntity = QuestMaster__TryGetQuestEntity(
                  (QuestMaster_o *)v104,
                  &entity,
                  *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL),
                  0LL);
  afterActionVals = 0LL;
  if ( !QuestEntity )
    goto LABEL_213;
  MasterData_object = (int64_t)entity;
  if ( !entity )
    goto LABEL_345;
  afterActionVals = 0LL;
  if ( !QuestEntity__IsOpenByTime(entity, 0, 0LL) )
    goto LABEL_213;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
  if ( !byte_4B13013 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v106);
    byte_4B13013 = 1;
  }
  v107 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    v107 = TerminalPramsManager_TypeInfo;
  }
  if ( v107->static_fields->_IsPhaseClear_k__BackingField )
  {
    v109 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v108);
      byte_4B12DC3 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    v110 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL);
    if ( !byte_4B12DCE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v108);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      byte_4B12DCE = 1;
    }
    if ( !*(_DWORD *)(MasterData_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object, v63);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( !v109 )
      goto LABEL_345;
    afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                        (QuestPhaseDetailAddMaster_o *)v109,
                        v110,
                        *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) + 1,
                        0LL);
    if ( afterActionVals )
      goto LABEL_213;
    v112 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v111);
      byte_4B12DC3 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    v113 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL);
    if ( !byte_4B12DCE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v111);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      byte_4B12DCE = 1;
    }
    if ( !*(_DWORD *)(MasterData_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object, v63);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( !v112 )
      goto LABEL_345;
    afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                        (QuestPhaseDetailMaster_o *)v112,
                        v113,
                        *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) + 1,
                        0LL);
    if ( afterActionVals )
      goto LABEL_213;
    v107 = TerminalPramsManager_TypeInfo;
  }
  if ( !v107->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v107, v63);
  if ( !byte_4B13016 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v106);
    byte_4B13016 = 1;
  }
  v114 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    v114 = TerminalPramsManager_TypeInfo;
  }
  if ( v114->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v114->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v114, v63);
    MasterData_object = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
    afterActionVals = 0LL;
    if ( (MasterData_object & 1) == 0 )
    {
      if ( !entity )
        goto LABEL_345;
      afterActionVals = entity->fields.afterActionVals;
    }
  }
  else
  {
LABEL_212:
    afterActionVals = 0LL;
  }
LABEL_213:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v63);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v115);
    byte_4B12DC3 = 1;
  }
  MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  v117 = *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL);
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v115);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !*(_DWORD *)(MasterData_object + 224) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object, v63);
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_345;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)Master_object,
         v117,
         *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 24LL) + 1,
         7,
         0LL)
    || (IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(afterActionVals, (const MethodInfo *)v63),
        !afterActionVals)
    || IsOverwriteCommandNone
    || (v129 = *(_QWORD *)&afterActionVals->max_length, (int)v129 < 2)
    || (v129 & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    if ( !byte_4B1301A )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v118);
      byte_4B1301A = 1;
    }
    v119 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      v119 = TerminalPramsManager_TypeInfo;
    }
    if ( v119->static_fields->_BeforeQuestStartWarId_k__BackingField >= 1 )
    {
      if ( !v119->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v119, v63);
      if ( !byte_4B11139 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v118);
        byte_4B11139 = 1;
      }
      v120 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
        v120 = TerminalPramsManager_TypeInfo;
      }
      v120->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4B12DC9 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v118);
        v120 = TerminalPramsManager_TypeInfo;
        byte_4B12DC9 = 1;
      }
      if ( !v120->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v120, v63);
        v120 = TerminalPramsManager_TypeInfo;
      }
      v120->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4B1301A )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v118);
        v120 = TerminalPramsManager_TypeInfo;
        byte_4B1301A = 1;
      }
      if ( !v120->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v120, v63);
        v120 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v120->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4B12DCD )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v118);
        v120 = TerminalPramsManager_TypeInfo;
        byte_4B12DCD = 1;
      }
      if ( !v120->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v120, v63);
        v120 = TerminalPramsManager_TypeInfo;
      }
      v120->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v63);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v63, v118);
        byte_4B10F83 = 1;
      }
      v122 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v63);
        v122 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (int64_t)v122->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_345;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v123);
      v125 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4B12DC6 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v124);
        byte_4B12DC6 = 1;
      }
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
        MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
      }
      if ( !v125 )
        goto LABEL_345;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v125,
             &v205,
             *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 4LL),
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (int64_t)v205;
        if ( !v205 )
          goto LABEL_345;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v205, 0LL);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      if ( !byte_4B1301B )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v126);
        byte_4B1301B = 1;
      }
      v127 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
        v127 = TerminalPramsManager_TypeInfo;
      }
      v127->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16878/*"afterActionBk"*/, 0LL);
    return;
  }
  v130 = sub_1BCA888(QuestAfterAction_Command___TypeInfo, (unsigned int)v129 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v130;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.commandBuf, v130, v132, v133, v134, v135, v136, v137);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_345;
  v141 = 0LL;
  v142 = 0;
  while ( (__int64)v141 < commandBuf[6] )
  {
    v143 = sub_1BCAA2C(QuestAfterAction_Command_TypeInfo, v63, v138, v139);
    System_Object___ctor((Il2CppObject *)v143, 0LL);
    if ( v142 >= afterActionVals->max_length )
      goto LABEL_434;
    MasterData_object = System_Int32__Parse(afterActionVals->m_Items[v142], 0LL);
    if ( !v143 )
      goto LABEL_345;
    *(_DWORD *)(v143 + 16) = MasterData_object;
    v150 = (int)v142 | 1LL;
    if ( (unsigned int)v150 >= afterActionVals->max_length )
      goto LABEL_434;
    v151 = (int64_t)afterActionVals->m_Items[v150];
    *(_QWORD *)(v143 + 24) = v151;
    v152 = (System_String_o **)(v143 + 24);
    sub_1BCA784((PartyOrganizationUtility_o *)(v143 + 24), v151, v144, v145, v146, v147, v148, v149);
    if ( !v4->fields.hasFadeCommand )
    {
      v154 = *(_DWORD *)(v143 + 16);
      if ( v154 == 520 || v154 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v142 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v143 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v143 + 16) == 350 )
    {
      MasterData_object = (int64_t)*v152;
      if ( !*v152 )
        goto LABEL_345;
      MasterData_object = (int64_t)System_String__Split((System_String_o *)MasterData_object, 0x2Cu, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_345;
      if ( *(int *)(MasterData_object + 24) >= 4 )
      {
        MasterData_object = System_Int32__Parse(*(System_String_o **)(MasterData_object + 56), 0LL);
        v4->fields.MapMoveBeforeFocusSpotId = MasterData_object;
      }
    }
    v155 = *(_DWORD *)(v143 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v155 != 700 )
    {
      if ( v155 == 800 )
      {
        MasterData_object = (int64_t)QuestAfterAction_Command__GetAvailableRandomVoice(
                                       (QuestAfterAction_Command_o *)v143,
                                       &svtId,
                                       v153);
        if ( MasterData_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v158 = MasterData_object;
          v203 = svtId;
          v159 = sub_1BCAA2C(QuestAfterAction_VoiceInfo_TypeInfo, v63, v153, v156);
          System_Object___ctor((Il2CppObject *)v159, 0LL);
          *(_DWORD *)(v159 + 16) = v203;
          *(_QWORD *)(v159 + 24) = v158;
          sub_1BCA784((PartyOrganizationUtility_o *)(v159 + 24), v158, v160, v161, v162, v163, v164, v165);
          if ( !svtVoices )
            goto LABEL_345;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v141,
            (Il2CppObject *)v159,
            (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v166 = *(_DWORD *)(v143 + 16);
    if ( v166 <= 205 )
    {
      if ( (unsigned int)(v166 - 100) < 0xF && ((0x7C1Fu >> (v166 - 100)) & 1) != 0 )
      {
        v63 = 0LL;
      }
      else
      {
        if ( (unsigned int)(v166 - 200) > 5 )
          goto LABEL_328;
        v63 = 1LL;
      }
    }
    else if ( v166 <= 550 )
    {
      if ( (unsigned int)(v166 - 400) < 0xD )
      {
        v63 = 2LL;
      }
      else
      {
        if ( v166 != 550 )
          goto LABEL_328;
        v63 = 3LL;
      }
    }
    else
    {
      v167 = v166 - 1000;
      if ( v167 >= 0xD || ((0x1C07u >> v167) & 1) == 0 )
        goto LABEL_328;
      v63 = 4LL;
    }
    MasterData_object = (int64_t)v4->fields.commandTypeIds;
    if ( !MasterData_object )
      goto LABEL_345;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                       v63,
                                                       (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    MasterData_object = QuestAfterAction__ExtractCommandTargetId((QuestAfterAction_Command_o *)v143, v169);
    if ( !Item )
      goto LABEL_345;
    items = Item->fields._items;
    v171 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_345;
    size = Item->fields._size;
    v63 = (unsigned int)MasterData_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        MasterData_object,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = MasterData_object;
    }
LABEL_328:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v143, v153);
    if ( *(_DWORD *)(v143 + 16) == 102 )
    {
      v173 = (QuestAfterAction_o *)System_Int32__Parse(*v152, 0LL);
      MasterData_object = (int64_t)QuestAfterAction__GetMapGimmickId(v173, (int32_t)v173, v174);
      if ( !MasterData_object )
        goto LABEL_345;
      v175 = *(System_String_c **)(MasterData_object + 24);
      v176 = MasterData_object;
      if ( (int)v175 >= 1 )
      {
        v177 = 0LL;
        while ( v177 < (unsigned int)v175 )
        {
          MasterData_object = (int64_t)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_345;
          v63 = *(unsigned int *)(v176 + 32 + 4 * v177);
          v178 = *(System_String_Fields *)(MasterData_object + 16);
          v179 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(MasterData_object + 28);
          if ( !*(_QWORD *)&v178 )
            goto LABEL_345;
          v180 = *(int *)(MasterData_object + 24);
          if ( (unsigned int)v180 >= *(_DWORD *)(*(_QWORD *)&v178 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v63,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
          }
          else
          {
            *(_DWORD *)(MasterData_object + 24) = v180 + 1;
            *(_DWORD *)(*(_QWORD *)&v178 + 4 * v180 + 32) = v63;
          }
          LODWORD(v175) = *(_DWORD *)(v176 + 24);
          if ( (__int64)++v177 >= (int)v175 )
            goto LABEL_341;
        }
LABEL_434:
        sub_1BCAA44(MasterData_object, v63);
      }
    }
LABEL_341:
    v181 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_345;
    MasterData_object = sub_1BCA91C(v143, *(_QWORD *)(*(_QWORD *)v181 + 64LL));
    if ( !MasterData_object )
    {
      v202 = sub_1BCAA60();
      sub_1BCA908(v202, 0LL);
    }
    if ( v141 >= v181[6] )
      goto LABEL_434;
    v188 = &v181[2 * v141];
    *((_QWORD *)v188 + 4) = v143;
    sub_1BCA784((PartyOrganizationUtility_o *)(v188 + 8), v143, v182, v183, v184, v185, v186, v187);
    commandBuf = (int *)*p_commandBuf;
    v142 += 2;
    ++v141;
    if ( !*p_commandBuf )
      goto LABEL_345;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
  if ( !byte_4B13013 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v138);
    byte_4B13013 = 1;
  }
  v189 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    v189 = TerminalPramsManager_TypeInfo;
  }
  if ( v189->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v63);
    v191 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v190);
      byte_4B12DC3 = 1;
    }
    MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      MasterData_object = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( !v191 )
      goto LABEL_345;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v191,
           &v208,
           *(_DWORD *)(*(_QWORD *)(MasterData_object + 184) + 20LL),
           0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      if ( !byte_4B12DC6 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v138);
        byte_4B12DC6 = 1;
      }
      v192 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
        v192 = TerminalPramsManager_TypeInfo;
      }
      v193 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v192->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v63);
        v193 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v193->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v63);
        MasterData_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v208 && MasterData_object )
        {
          MasterData_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                &v207,
                                v208->fields.spotId,
                                (const MethodInfo_31B2E94 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( (MasterData_object & 1) == 0 )
            goto LABEL_385;
          if ( v207 )
          {
            klass = (int32_t)v207[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
            if ( !byte_4B1301C )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v138);
              byte_4B1301C = 1;
            }
            v196 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
              v196 = TerminalPramsManager_TypeInfo;
            }
            v196->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = klass;
            goto LABEL_385;
          }
        }
LABEL_345:
        sub_1BCAA3C(MasterData_object, v63);
      }
    }
  }
LABEL_385:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v138);
    byte_4B11139 = 1;
  }
  v197 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    v197 = TerminalPramsManager_TypeInfo;
  }
  v197->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4B12DC9 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v138);
    v197 = TerminalPramsManager_TypeInfo;
    byte_4B12DC9 = 1;
  }
  if ( !v197->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v197, v63);
    v197 = TerminalPramsManager_TypeInfo;
  }
  v197->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v138);
    v197 = TerminalPramsManager_TypeInfo;
    byte_4B12DC6 = 1;
  }
  if ( !v197->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v197, v63);
    v197 = TerminalPramsManager_TypeInfo;
  }
  v198 = BalanceConfig_TypeInfo;
  v199 = v197->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v63);
    v198 = BalanceConfig_TypeInfo;
  }
  v200 = TerminalPramsManager_TypeInfo;
  if ( v199 == v198->static_fields->OrdealCallWarId )
    goto LABEL_438;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
  if ( !byte_4B12CE1 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v138);
    byte_4B12CE1 = 1;
  }
  v200 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    v200 = TerminalPramsManager_TypeInfo;
  }
  if ( v200->static_fields->_IsOrdealCallWarClear_k__BackingField )
  {
LABEL_438:
    if ( !v200->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v200, v63);
    if ( !byte_4B12CE2 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v138);
      byte_4B12CE2 = 1;
    }
    v200 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
      v200 = TerminalPramsManager_TypeInfo;
    }
    v200->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_4B12CE1 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v138);
      v200 = TerminalPramsManager_TypeInfo;
      byte_4B12CE1 = 1;
    }
    if ( !v200->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v200, v63);
      v200 = TerminalPramsManager_TypeInfo;
    }
    if ( !v200->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      if ( !v200->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v200, v63);
      if ( !byte_4B12DC9 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v138);
        byte_4B12DC9 = 1;
      }
      v200 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
        v200 = TerminalPramsManager_TypeInfo;
      }
      v200->static_fields->_DispState_k__BackingField = 3;
    }
  }
  if ( !v200->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v200, v63);
  if ( !byte_4B12DCC )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v63, v138);
    byte_4B12DCC = 1;
  }
  v201 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v63);
    v201 = TerminalPramsManager_TypeInfo;
  }
  v201->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12FCA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16878/*"afterActionBk"*/, v1, v2);
    byte_4B12FCA = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16878/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestAfterAction_Command_o *v3; // x19
  QuestAfterAction_Command_c *param; // x8

  v3 = command;
  if ( (byte_4B12FCE & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1BCA7E0(&StringLiteral_863/*","*/, method, v2);
    byte_4B12FCE = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v3->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_863/*","*/,
                                            0LL);
  param = (QuestAfterAction_Command_c *)v3->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0LL);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v3->fields.param, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_11:
    sub_1BCAA3C(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1BCAA44(command, method);
  param = command[1].klass;
  return System_Int32__Parse((System_String_o *)param, 0LL);
}


System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved(
        QuestAfterAction_o *this,
        System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B12FDB & 1) == 0 )
  {
    sub_1BCA7E0(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo, commandEnumerable, method);
    byte_4B12FDB = 1;
  }
  v6 = sub_1BCAA2C(
         QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo,
         commandEnumerable,
         method,
         v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = -2;
  *(_DWORD *)(v6 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v6 + 56) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 56), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 48) = commandEnumerable;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 48), (int64_t)commandEnumerable, v13, v14, v15, v16, v17, v18);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v6;
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 IsNullOrEmpty; // x0
  __int64 v9; // x1
  long double inited; // q0
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  QuestAfterAction_Command_array *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x22
  unsigned __int64 v19; // x23
  __int64 v20; // x24
  il2cpp_array_size_t v21; // w25
  int64_t v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_String_o *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v37; // x0

  if ( (byte_4B12FCF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_QuestAfterAction_Command___, method, v2);
    sub_1BCA7E0(&QuestAfterAction_Command___TypeInfo, v4, v5);
    sub_1BCA7E0(&QuestAfterAction_Command_TypeInfo, v6, v7);
    byte_4B12FCF = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v11 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v12 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v12 )
    {
      sub_1C1C718(Method_System_Array_Empty_QuestAfterAction_Command___, v9);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13, v9);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C1C6BC(inited);
    return **(QuestAfterAction_Command_array ***)(v14 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1BCA888(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1BCAA3C(IsNullOrEmpty, v9);
    }
    v15 = (QuestAfterAction_Command_array *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v18 = 0LL;
      v19 = 0LL;
      v20 = IsNullOrEmpty + 32;
      v21 = 1;
      do
      {
        v22 = sub_1BCAA2C(QuestAfterAction_Command_TypeInfo, v9, v16, v17);
        System_Object___ctor((Il2CppObject *)v22, 0LL);
        if ( v21 - 1 >= actionVals->max_length )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v21 - 1], 0LL);
        if ( !v22 )
          goto LABEL_25;
        *(_DWORD *)(v22 + 16) = IsNullOrEmpty;
        if ( v21 >= actionVals->max_length )
          goto LABEL_24;
        v29 = actionVals->m_Items[v21];
        *(_QWORD *)(v22 + 24) = v29;
        sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)v29, v23, v24, v25, v26, v27, v28);
        IsNullOrEmpty = sub_1BCA91C(v22, v15->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v37 = sub_1BCAA60();
          sub_1BCA908(v37, 0LL);
        }
        if ( v19 >= v15->max_length )
LABEL_24:
          sub_1BCAA44(IsNullOrEmpty, v9);
        *(_QWORD *)(v20 + 8 * v19) = v22;
        sub_1BCA784((PartyOrganizationUtility_o *)(v20 + v18), v22, v30, v31, v32, v33, v34, v35);
        ++v19;
        v21 += 2;
        v18 += 8LL;
      }
      while ( (__int64)v19 < (int)v15->max_length );
    }
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall QuestAfterAction__GetAfterAction(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *MasterData_object; // x22
  int32_t v21; // w23
  System_String_array *v22; // x22
  const MethodInfo *v23; // x1
  bool IsOverwriteCommandNone; // w8
  System_String_array *result; // x0
  __int64 v26; // x2
  Il2CppObject *v27; // x20
  System_String_array *v28; // x19

  if ( (byte_4B12FE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_string___, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v16);
    byte_4B12FE6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
    byte_4B12DC3 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v21 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v18);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_33;
  v22 = QuestPhaseDetailAddMaster__GetAfterAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v21,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v22, v23);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v22;
  if ( v22 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v27 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v26);
    byte_4B12DC3 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v27 )
LABEL_33:
    sub_1BCAA3C(Instance, v18);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v27,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v28 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v28->m_Items[8];
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *MasterData_object; // x22
  int32_t v21; // w23
  System_String_array *v22; // x22
  const MethodInfo *v23; // x1
  bool IsOverwriteCommandNone; // w8
  System_String_array *result; // x0
  __int64 v26; // x2
  Il2CppObject *v27; // x20
  System_String_array *v28; // x19

  if ( (byte_4B12FE5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_string___, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v16);
    byte_4B12FE5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
    byte_4B12DC3 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v21 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v18);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_33;
  v22 = QuestPhaseDetailAddMaster__GetBeforeAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v21,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v22, v23);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v22;
  if ( v22 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v27 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v26);
    byte_4B12DC3 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v27 )
LABEL_33:
    sub_1BCAA3C(Instance, v18);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v27,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v28 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v28->m_Items[7];
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
        return dword_C0C634[commandId - 1000];
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
        const MethodInfo_2FA3C68 *method)
{
  __int64 v10; // x1
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType, *(_QWORD *)&id);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v12 )
    return 0LL;
  if ( !MapGameObject )
    sub_1BCAA3C(v12, v13);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_2F626D0 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  __int64 v10; // x2
  UnityEngine_Object_o *v11; // x23
  __int64 v12; // x1
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v14; // x23
  __int64 v15; // x1
  const MethodInfo *v16; // x3

  v8 = this;
  if ( (byte_4B12FE1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType, *(_QWORD *)&id);
    this = (QuestAfterAction_o *)sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, v9, v10);
    byte_4B12FE1 = 1;
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
        v11 = 0LL;
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
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v12);
      this = (QuestAfterAction_o *)SrcSpotBasePrefab__GetGobjName(id, 0LL);
      if ( !transform )
LABEL_45:
        sub_1BCAA3C(this, *(_QWORD *)&comType);
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
    v11 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0LL);
    goto LABEL_35;
  }
  this = (QuestAfterAction_o *)v8->fields.mGimmickRoot;
  if ( !this )
    goto LABEL_45;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, 0LL);
  if ( !v14 )
    goto LABEL_45;
  v11 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v14, (System_String_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
  {
    this = (QuestAfterAction_o *)v8->fields.mUIGimmickRoot;
    if ( !this )
      goto LABEL_45;
    goto LABEL_30;
  }
LABEL_35:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( !state )
      goto LABEL_45;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v16);
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
    if ( !v11 )
      goto LABEL_45;
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestAfterAction__GetMapGimmickId(
        QuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_int__o *v17; // x20
  System_Object_array *Instance; // x0
  __int64 name_low; // x1
  int max_length; // w8
  System_Object_array *v21; // x21
  unsigned int v22; // w23
  Il2CppClass **v23; // x8
  Il2CppClass *v24; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10

  if ( (byte_4B12FD0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId, method);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_MapGimmickEntity___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B12FD0 = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&spotId,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase__getEntitys_object_(
               (DataMasterBase_o *)Instance,
               (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_MapGimmickEntity___);
  if ( !Instance )
    goto LABEL_19;
  max_length = Instance->max_length;
  v21 = Instance;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1BCAA44(Instance, name_low);
      v23 = &v21->obj.klass + (int)v22;
      v24 = v23[4];
      if ( !v24 )
        break;
      Instance = (System_Object_array *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v23[4], 0LL);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v17 )
          break;
        name_low = LODWORD(v24->_1.name);
        items = v17->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            name_low,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size + 1] = name_low;
        }
      }
      max_length = v21->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(Instance, name_low);
  }
LABEL_17:
  if ( !v17 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4B12FDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestAfterAction__getState__, method, v2);
    byte_4B12FDF = 1;
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  struct CStateManager_QuestAfterAction__o **p_fsm; // x20
  CStateManager_T__o *v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  CStateManager_T__o *fsm; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  Il2CppObject *v43; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0
  __int64 v45; // x1
  CStateManager_T__o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  Il2CppObject *v50; // x22
  CStateManager_T__o *v51; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  Il2CppObject *v55; // x22
  CStateManager_T__o *v56; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  Il2CppObject *v60; // x21
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int32_t v67; // w20
  __int64 v68; // x2
  __int64 v69; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v70; // x21
  int v71; // w8
  System_Collections_Generic_List_int__o *v72; // x22
  Il2CppObject *Component_object; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Collections_Generic_List_int__o *v89; // x20
  struct System_Collections_Generic_List_int__o **p_invalidMapGimmickIdList; // x19
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7

  if ( (byte_4B12FCB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestAfterAction___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_QuestAfterAction__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_QuestAfterAction__TypeInfo, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__,
      v13,
      v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v21, v22);
    sub_1BCA7E0(&QuestAfterAction_StateAdditional_TypeInfo, v23, v24);
    sub_1BCA7E0(&QuestAfterAction_StateInstant_TypeInfo, v25, v26);
    sub_1BCA7E0(&QuestAfterAction_StateMain_TypeInfo, v27, v28);
    sub_1BCA7E0(&QuestAfterAction_StateNone_TypeInfo, v29, v30);
    byte_4B12FCB = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v32 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_QuestAfterAction__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v32,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_313FBC4 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v32;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v32, v33, v34, v35, v36, v37, v38);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v43 = (Il2CppObject *)sub_1BCAA2C(QuestAfterAction_StateNone_TypeInfo, v40, v41, v42);
    System_Object___ctor(v43, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v43,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestAfterAction__add__);
    v46 = (CStateManager_T__o *)*p_fsm;
    v50 = (Il2CppObject *)sub_1BCAA2C(QuestAfterAction_StateMain_TypeInfo, v47, v48, v49);
    System_Object___ctor(v50, 0LL);
    if ( !v46 )
      goto LABEL_21;
    CStateManager_object___add(
      v46,
      1,
      (IState_T__o *)v50,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestAfterAction__add__);
    v51 = (CStateManager_T__o *)*p_fsm;
    v55 = (Il2CppObject *)sub_1BCAA2C(QuestAfterAction_StateAdditional_TypeInfo, v52, v53, v54);
    System_Object___ctor(v55, 0LL);
    if ( !v51 )
      goto LABEL_21;
    CStateManager_object___add(
      v51,
      2,
      (IState_T__o *)v55,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestAfterAction__add__);
    v56 = (CStateManager_T__o *)*p_fsm;
    v60 = (Il2CppObject *)sub_1BCAA2C(QuestAfterAction_StateInstant_TypeInfo, v57, v58, v59);
    System_Object___ctor(v60, 0LL);
    if ( !v56 )
      goto LABEL_21;
    CStateManager_object___add(
      v56,
      3,
      (IState_T__o *)v60,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.commandBuf, 0LL, v61, v62, v63, v64, v65, v66);
  v67 = 0;
  this->fields.commandIdx = 0;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                commandTypeIds,
                                                                                v67,
                                                                                (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v70 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v67,
                                                                                  (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v71 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v71;
    }
    else
    {
      v72 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v45,
                                                        v68,
                                                        v69);
      System_Collections_Generic_List_int____ctor(
        v72,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v70 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v70,
        v67,
        (Il2CppObject *)v72,
        (const MethodInfo_3234FE4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v67;
  }
  while ( v67 != 5 );
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
  if ( !commandTypeIds
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)commandTypeIds,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.screenCollider,
          (int64_t)Component_object,
          v74,
          v75,
          v76,
          v77,
          v78,
          v79),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_1BCAA3C(commandTypeIds, v45);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.lastDispSpot, 0LL, v80, v81, v82, v83, v84, v85);
  v89 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v86,
                                                    v87,
                                                    v88);
  System_Collections_Generic_List_int____ctor(
    v89,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v89;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1BCA784((PartyOrganizationUtility_o *)p_invalidMapGimmickIdList, (int64_t)v89, v91, v92, v93, v94, v95, v96);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0

  if ( (byte_4B12FD3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType,
      *(_QWORD *)&commandTypeId);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v9, v10);
    byte_4B12FD3 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1BCAA3C(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_1BCAA44(this, *(_QWORD *)&spotId);
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
    sub_1BCAA3C(this, *(_QWORD *)&spotId);
  }
  return v8;
}


bool __fastcall QuestAfterAction__IsGimmickDispCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFD) == 401;
}


bool __fastcall QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrTerminalMap_o *v3; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4B12FE4 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B12FE4 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v3 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.subRootGimmickP->klass;
  if ( !klass || (v3 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1BCAA3C(v3, method);
  return ScrTerminalMap__IsMapChangeable(v3, 0LL);
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
        sub_1BCAA44(actionCommand, method);
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
  __int64 v2; // x2
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4B12FDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestAfterAction__getState__, method, v2);
    byte_4B12FDF = 1;
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  TerminalTransitionInfo_o *TerminalTransitionInfoData; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  TerminalTransitionInfo_o *v42; // x20
  char *Master_object; // x0
  TerminalSceneComponent_o *v44; // x19
  DataManager_o *v45; // x22
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  EventMissionActionAddEntity_o *v50; // x23
  EventMissionActionInfo_o *v51; // x21
  Il2CppObject *Entity; // x0
  __int64 v53; // x1
  Il2CppObject *v54; // x21
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  _BOOL8 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v61; // x0
  __int64 v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  int64_t klass; // x1
  __int64 v71; // x0
  __int64 v72; // x1
  struct TerminalTransitionInfo_o *v73; // x8
  EventMissionActionEntity_o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  EventMissionActionEntity_o *v78; // x23
  Il2CppObject *v79; // x0
  Il2CppObject *v80; // x23
  __int64 v81; // x1
  __int64 v82; // x2
  TerminalPramsManager_c *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t vals; // x1
  struct TerminalTransitionInfo_o *v91; // x8
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B12FD7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopActionMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v27, v28);
    sub_1BCA7E0(&EventMissionActionInfo_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v37, v38);
    byte_4B12FD7 = 1;
  }
  memset(&v93, 0, sizeof(v93));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0LL);
  if ( !TerminalTransitionInfoData )
    return;
  v42 = TerminalTransitionInfoData;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v40);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v40, v41);
    byte_4B10F83 = 1;
  }
  Master_object = (char *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v40);
    Master_object = (char *)TerminalSceneComponent_TypeInfo;
  }
  v44 = (TerminalSceneComponent_o *)**((_QWORD **)Master_object + 23);
  if ( !v44 )
    goto LABEL_67;
  if ( v44->fields._TransitionInfo_k__BackingField )
    return;
  if ( v42->fields.missionId < 1 )
  {
    if ( v42->fields.shopId >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40);
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v42->fields.shopId,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v54 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v53);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v55 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v54[1].monitor,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v55 || !EventEntity__IsEventPeriod((EventEntity_o *)v55, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v56);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_object )
          goto LABEL_67;
        Master_object = (char *)ShopActionMaster__GetEntityList(
                                  (ShopActionMaster_o *)Master_object,
                                  (int32_t)v54[1].klass,
                                  0LL);
        if ( !Master_object )
          goto LABEL_67;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v92,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v93 = v92;
        while ( 1 )
        {
          v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v93,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v57 )
            break;
          current = v93.fields._current;
          if ( !v93.fields._current )
            sub_1BCAA3C(v57, v58);
          if ( LODWORD(v93.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v58);
            if ( !byte_4B1301D )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v58, v59);
              byte_4B1301D = 1;
            }
            v61 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v58);
              v61 = TerminalPramsManager_TypeInfo;
            }
            v61->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v44, v42, 0LL);
            TransitionInfo_k__BackingField = v44->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_1BCAA3C(0LL, v62);
            klass = (int64_t)current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              klass,
              v63,
              v64,
              v65,
              v66,
              v67,
              v68);
            v73 = v44->fields._TransitionInfo_k__BackingField;
            if ( !v73 )
              sub_1BCAA3C(v71, v72);
            v73->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v93,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v45 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_object )
      goto LABEL_67;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_object,
                                              v42->fields.missionId,
                                              5,
                                              4,
                                              0LL);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v50 = EntityFromIdProgressTypeAndActionType;
      v51 = (EventMissionActionInfo_o *)sub_1BCAA2C(EventMissionActionInfo_TypeInfo, v47, v48, v49);
      EventMissionActionInfo___ctor_42814600(v51, v50, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v45,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_object )
        goto LABEL_67;
      v74 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_object,
              v42->fields.missionId,
              5,
              4,
              0LL);
      if ( !v74 )
        return;
      v78 = v74;
      v51 = (EventMissionActionInfo_o *)sub_1BCAA2C(EventMissionActionInfo_TypeInfo, v75, v76, v77);
      EventMissionActionInfo___ctor(v51, v78, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v45,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v79 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v42->fields.missionId,
            (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v79 )
    {
      v80 = v79;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v45,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v80[1].monitor),
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v81);
        if ( !byte_4B1301D )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v81, v82);
          byte_4B1301D = 1;
        }
        v83 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v81);
          v83 = TerminalPramsManager_TypeInfo;
        }
        v83->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v44, v42, 0LL);
        if ( v51 )
        {
          Master_object = (char *)v44->fields._TransitionInfo_k__BackingField;
          if ( Master_object )
          {
            vals = (int64_t)v51->fields.vals;
            *((_QWORD *)Master_object + 4) = vals;
            sub_1BCA784((PartyOrganizationUtility_o *)(Master_object + 32), vals, v84, v85, v86, v87, v88, v89);
            v91 = v44->fields._TransitionInfo_k__BackingField;
            if ( v91 )
            {
              v91->fields.optionId = v51->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1BCAA3C(Master_object, v40);
      }
LABEL_66:
      TerminalSceneComponent__ClearTransitionInfo(v44, 0LL);
    }
  }
}


void __fastcall QuestAfterAction__LoadVoice(
        QuestAfterAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Collections_Generic_List_object__o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4B12FD4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__,
      endAct,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v7, v8);
    byte_4B12FD4 = 1;
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
      sub_1BCAA3C(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v14 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo,
                                                         v11,
                                                         v12,
                                                         v13);
    System_Collections_Generic_List_object____ctor_56235344(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_34440152(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v14,
      endAct,
      v15);
  }
}


void __fastcall QuestAfterAction__LoadVoice_34440152(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Action_o *v4; // x29
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x21
  CommonUI_o *Instance; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  CommonUI_o **v30; // x28
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Action_o **v37; // x19
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_String_o *VoiceAssetName_40580584; // x19
  Il2CppObject *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x22

  v4 = endAct;
  v5 = svtVInfos;
  while ( 1 )
  {
    if ( (byte_4B12FD5 & 1) == 0 )
    {
      sub_1BCA7E0(&System_Action_TypeInfo, svtVInfos, endAct);
      sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v7, v8);
      sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v9, v10);
      sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v11, v12);
      sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
      sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v15, v16);
      sub_1BCA7E0(&Method_QuestAfterAction___c__DisplayClass74_0__LoadVoice_b__0__, v17, v18);
      sub_1BCA7E0(&QuestAfterAction___c__DisplayClass74_0_TypeInfo, v19, v20);
      byte_4B12FD5 = 1;
    }
    v21 = sub_1BCAA2C(QuestAfterAction___c__DisplayClass74_0_TypeInfo, svtVInfos, endAct, method);
    System_Object___ctor((Il2CppObject *)v21, 0LL);
    if ( !v21 )
      goto LABEL_18;
    *(_QWORD *)(v21 + 16) = v5;
    v30 = (CommonUI_o **)(v21 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)v5, v24, v25, v26, v27, v28, v29);
    *(_QWORD *)(v21 + 24) = this;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)this, v31, v32, v33, v34, v35, v36);
    *(_QWORD *)(v21 + 32) = v4;
    v37 = (System_Action_o **)(v21 + 32);
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)v4, v38, v39, v40, v41, v42, v43);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v21 + 16),
            (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v37, 0LL);
        return;
      }
LABEL_18:
      sub_1BCAA3C(Instance, v23);
    }
    Instance = *v30;
    if ( !*v30 )
      goto LABEL_18;
    Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Instance,
                               0,
                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
    if ( !Instance )
      goto LABEL_18;
    if ( Instance->fields.m_CachedPtr )
      break;
    Instance = *v30;
    if ( !*v30 )
      goto LABEL_18;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)*v30;
    v4 = *v37;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  Instance = *v30;
  if ( !*v30 )
    goto LABEL_18;
  Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             0,
                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_18;
  VoiceAssetName_40580584 = ServantVoiceEntity__getVoiceAssetName_40580584(Instance->fields.m_CachedPtr, 0LL);
  v45 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
  System_Action___ctor(v49, (Il2CppObject *)v21, Method_QuestAfterAction___c__DisplayClass74_0__LoadVoice_b__0__, 0LL);
  if ( !v45 )
    goto LABEL_18;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v45, VoiceAssetName_40580584, v49, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_4B12FE3 & 1) == 0 )
  {
    sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType, *(_QWORD *)&id);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B12FE3 = 1;
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
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    return SrcSpotBasePrefab__GetGobjName(id, 0LL);
  }
}


void __fastcall QuestAfterAction__OnEnd(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Action_o *endAct; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Collider_o *screenCollider; // x0
  struct System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x8
  int v8; // w9

  if ( (byte_4B12FDD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, method, v2);
    byte_4B12FDD = 1;
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
    sub_1BCAA3C(screenCollider, v5);
  }
  v8 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v8;
  QuestAfterAction__Init(this, v5);
  this->fields.isKeepingMainStateButFinished = 0;
}


void __fastcall QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2

  if ( (byte_4B12FD9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAct, method);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_QuestAfterAction___c__DisplayClass78_0__Play_b__0__, v8, v9);
    sub_1BCA7E0(&QuestAfterAction___c__DisplayClass78_0_TypeInfo, v10, v11);
    byte_4B12FD9 = 1;
  }
  v12 = sub_1BCAA2C(QuestAfterAction___c__DisplayClass78_0_TypeInfo, endAct, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = endAct,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)endAct, v15, v16, v17, v18, v19, v20),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v14);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)v12, Method_QuestAfterAction___c__DisplayClass78_0__Play_b__0__, 0LL);
  this->fields.endAct = v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v31);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x21
  const MethodInfo *v52; // x2
  System_Collections_IEnumerator_o *v53; // x1

  if ( (byte_4B12FDA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, actionVals, finishCallback);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__0__, v9, v10);
    sub_1BCA7E0(&Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__1__, v11, v12);
    sub_1BCA7E0(&QuestAfterAction___c__DisplayClass79_0_TypeInfo, v13, v14);
    byte_4B12FDA = 1;
  }
  v15 = sub_1BCAA2C(QuestAfterAction___c__DisplayClass79_0_TypeInfo, actionVals, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)finishCallback, v24, v25, v26, v27, v28, v29);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v15 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v30);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.temporaryCommandBuf,
    (int64_t)CommandBuf,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(Instance, v17);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v15,
    Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)v41, v42, v43, v44, v45, v46, v47);
  v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v15,
    Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__1__,
    0LL);
  v53 = QuestAfterAction__WaitWhileMainStateFinished(this, v51, v52);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v53, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x2

  if ( (byte_4B12FDC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, commandArray, method);
    sub_1BCA7E0(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__82_0__, v5, v6);
    byte_4B12FDC = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.temporaryCommandBuf,
      (int64_t)commandArray,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__82_0__,
      0LL);
    this->fields.endAct = v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)v16, v17, v18, v19, v20, v21, v22);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  TerminalPramsManager_c *v11; // x0
  ScrTerminalMap_o *v12; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4B12FE2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType, *(_QWORD *)&cTarget);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v7, v8);
    byte_4B12FE2 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    byte_4B11139 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v9, v10);
    byte_4B10F83 = 1;
  }
  v12 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9);
    v12 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v12->fields.subRootGimmickP->klass;
  if ( !klass || (v12 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1BCAA3C(v12, v9);
  ScrTerminalMap__RequestMapChange(v12, 0, -1, -1, 0LL);
}


void __fastcall QuestAfterAction__SetActionMap(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *com,
        const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t id; // w8
  int v10; // w8
  unsigned int v11; // w8
  unsigned int v12; // w8
  int m_CancellationTokenSource; // w8
  System_String_o *TitleInfoCtrlCallback_k__BackingField; // x0
  int32_t SpotId; // w0
  Il2CppObject *MasterData_object; // x0
  System_String_o *param; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x20

  v4 = this;
  if ( (byte_4B12FD2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, com, method);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5, v6);
    this = (QuestAfterAction_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B12FD2 = 1;
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
                sub_1BCAA44(this, com);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1BCAA3C(this, com);
        }
        if ( id == 550 )
        {
          v10 = 3;
LABEL_23:
          v4->fields.ActionMapTargetType = v10;
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v18 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v18,
                                             (int32_t)this,
                                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
      v10 = 2;
      goto LABEL_23;
    }
    if ( id <= 113 )
    {
      v12 = id - 100;
      if ( v12 > 0xD || ((1 << v12) & 0x3C1F) == 0 )
        goto LABEL_41;
    }
    else
    {
      if ( (unsigned int)(id - 200) < 6 )
        goto LABEL_22;
      v11 = id - 300;
      if ( v11 > 7 )
        goto LABEL_41;
      if ( ((1 << v11) & 0x21) == 0 )
      {
        if ( ((1 << v11) & 0x42) == 0 )
        {
          if ( ((1 << v11) & 0x84) == 0 )
            goto LABEL_41;
          goto LABEL_18;
        }
LABEL_22:
        v10 = 1;
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

  if ( (byte_4B12FE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state, method);
    byte_4B12FE0 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B12FD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestAfterAction__update__, method, v2);
    byte_4B12FD8 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_313FCD4 *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *__fastcall QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B12FDE & 1) == 0 )
  {
    sub_1BCA7E0(&QuestAfterAction__WaitWhileMainStateFinished_d__85_TypeInfo, action, method);
    byte_4B12FDE = 1;
  }
  v6 = sub_1BCAA2C(QuestAfterAction__WaitWhileMainStateFinished_d__85_TypeInfo, action, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = action;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)action, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endAct, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.temporaryCommandBuf, 0LL, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4B12FD1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, method, v2);
    byte_4B12FD1 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1BCAA3C(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_object__o *v25; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  System_String_o *VoiceAssetName_40580584; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B12FD6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v16, v17);
    sub_1BCA7E0(&SoundManager_TypeInfo, v18, v19);
    byte_4B12FD6 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo,
                                                       v22,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor_56235344(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v25 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    v25,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v26 )
      break;
    if ( !v30.fields._current )
      sub_1BCAA3C(v26, v27);
    VoiceAssetName_40580584 = ServantVoiceEntity__getVoiceAssetName_40580584((int32_t)v30.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v28);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_40580584, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1BCAA3C(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  void *param; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x22
  Il2CppObject *MasterData_object; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Random_o *v33; // x22
  __int64 size; // x1
  int32_t v35; // w24
  int v36; // w8
  void *v37; // x25
  __int64 v38; // x2
  Il2CppObject *Item; // x25
  __int64 v40; // x8
  __int64 v41; // x8
  int32_t v42; // w1
  _BOOL8 v43; // x0
  __int64 v44; // x1
  int v45; // w8
  void *v46; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B12FE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__RemoveAt__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor___76798456, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Random_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v21, v22);
    byte_4B12FE8 = 1;
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
  v24 = (System_Collections_Generic_IEnumerable_T__o *)param;
  if ( *((int *)param + 6) > 1 )
  {
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_string__TypeInfo,
                                                           v26,
                                                           v27,
                                                           v28);
      System_Collections_Generic_List_object____ctor_56235344(
        v29,
        v24,
        (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_string___ctor___76798456);
      result = 0;
      v33 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, v30, v31, v32);
      System_Random___ctor(v33, 0LL);
      if ( v29 )
      {
        if ( v33 )
        {
          size = (unsigned int)v29->fields._size;
          while ( 1 )
          {
            v35 = ((__int64 (__fastcall *)(System_Random_o *, __int64, Il2CppMethodPointer))v33->klass->vtable._7_Next.method)(
                    v33,
                    size,
                    v33->klass->vtable._8_NextDouble.methodPtr);
            result = 0;
            param = System_Collections_Generic_List_object___get_Item(
                      v29,
                      v35,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
            if ( !param )
              break;
            param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
            if ( !param )
              break;
            v36 = *((_DWORD *)param + 6);
            v37 = param;
            if ( v36 == 3 )
            {
              v43 = System_Int32__TryParse(*((System_String_o **)param + 4), &result, 0LL);
              if ( *((_DWORD *)v37 + 6) < 3u )
                goto LABEL_42;
              param = System_String__Concat_62412480(
                        *((System_String_o **)v37 + 5),
                        (System_String_o *)StringLiteral_16290/*"_"*/,
                        *((System_String_o **)v37 + 6),
                        0LL);
              if ( !MasterData_object )
                break;
              v42 = result;
              Item = (Il2CppObject *)param;
            }
            else
            {
              if ( v36 != 2 )
                goto LABEL_29;
              result = 0;
              Item = System_Collections_Generic_List_object___get_Item(
                       v29,
                       v35,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, svtId);
              if ( !byte_4B10F83 )
              {
                sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, svtId, v38);
                byte_4B10F83 = 1;
              }
              param = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, svtId);
                param = TerminalSceneComponent_TypeInfo;
              }
              v40 = **((_QWORD **)param + 23);
              if ( !v40 )
                break;
              v41 = *(_QWORD *)(v40 + 464);
              if ( !v41 )
                break;
              param = (void *)ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v41 + 40), 0LL);
              if ( !MasterData_object )
                break;
              v42 = (int)param;
            }
            if ( VoicePlayCondMaster__isVoicePlay(
                   (VoicePlayCondMaster_o *)MasterData_object,
                   v42,
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
              v29,
              v35,
              (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v29->fields._size;
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
    sub_1BCAA3C(param, svtId);
  }
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
  if ( !param )
    goto LABEL_41;
  v45 = *((_DWORD *)param + 6);
  v46 = param;
  if ( v45 != 3 )
  {
    if ( v45 == 2 )
      return this->fields.param;
    return 0LL;
  }
  v43 = System_Int32__TryParse(*((System_String_o **)param + 4), svtId, 0LL);
  if ( *((_DWORD *)v46 + 6) < 3u )
LABEL_42:
    sub_1BCAA44(v43, v44);
  return System_String__Concat_62412480(
           *((System_String_o **)v46 + 5),
           (System_String_o *)StringLiteral_16290/*"_"*/,
           *((System_String_o **)v46 + 6),
           0LL);
}


System_String_o *__fastcall QuestAfterAction_Command__GetBgmName(
        QuestAfterAction_Command_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x0
  bool v9; // w8
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4B12FEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BgmMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12FEA = 1;
  }
  result = 0;
  entity = 0LL;
  v8 = 0LL;
  if ( this->fields.id == 851 )
  {
    v9 = System_Int32__TryParse(this->fields.param, &result, 0LL);
    v8 = 0LL;
    if ( v9 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1BCAA3C(Instance, v11);
      }
      return 0LL;
    }
  }
  return v8;
}


int32_t __fastcall QuestAfterAction_Command__GetSvtId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  void *v3; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( this->fields.id != 800 )
    return 0;
  v3 = str;
  if ( !str || (v3 = System_String__Split(str, 0x5Fu, 0, 0LL)) == 0LL )
    sub_1BCAA3C(v3, str);
  if ( *((_DWORD *)v3 + 6) != 3 )
    return 0;
  result = 0;
  if ( System_Int32__TryParse(*((System_String_o **)v3 + 4), &result, 0LL) )
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
  if ( (byte_4B12FE9 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1BCA7E0(&StringLiteral_16290/*"_"*/, str, method);
    byte_4B12FE9 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1BCAA3C(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_62412480(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16290/*"_"*/,
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(screenCollider, v5);
  }
  monitor = (System_Action_o *)screenCollider[7].monitor;
  p_monitor = (PartyOrganizationUtility_o *)&screenCollider[7].monitor;
  p_monitor->klass = 0LL;
  sub_1BCA784(p_monitor, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(0LL, v7);
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
    sub_1BCAA3C(0LL, v7);
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
  __int64 v2; // x2
  QuestAfterAction_StateMain_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct QuestAfterAction_o *that; // x8
  __int64 v13; // x8
  QuestAfterAction_StateMain_o *v14; // x20
  unsigned __int64 v15; // x22
  struct QuestAfterAction_o *v16; // x8
  int32_t v17; // w21
  __int64 v18; // x1
  Il2CppObject *MapComponent_object; // x21
  Il2CppClass *klass; // x8

  v3 = this;
  if ( (byte_4B12FEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v8, v9);
    this = (QuestAfterAction_StateMain_o *)sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v10, v11);
    byte_4B12FEF = 1;
  }
  that = v3->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_22;
  v13 = *(_QWORD *)&this->fields.IsAnimDoing;
  v14 = this;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v13 )
        sub_1BCAA44(this, method);
      v16 = v3->fields.that;
      if ( !v16 )
        break;
      this = (QuestAfterAction_StateMain_o *)v16->fields.invalidMapGimmickIdList;
      if ( !this )
        break;
      v17 = *((_DWORD *)&v14->fields.waitTime + v15);
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)this,
        v17,
        (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v3->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v17,
                              v3,
                              (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_34730552(
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
      LODWORD(v13) = *(_DWORD *)&v14->fields.IsAnimDoing;
      if ( (__int64)++v15 >= (int)v13 )
        return;
    }
LABEL_22:
    sub_1BCAA3C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x1
  __int64 v143; // x2
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x1
  __int64 v161; // x2
  __int64 v162; // x1
  __int64 v163; // x2
  __int64 v164; // x1
  __int64 v165; // x2
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x1
  __int64 v173; // x2
  __int64 v174; // x1
  __int64 v175; // x2
  __int64 v176; // x1
  __int64 v177; // x2
  int64_t v178; // x22
  __int64 updated; // x0
  QuestAfterAction_o *v180; // x1
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  __int64 *v187; // x20
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v195; // x21
  QuestAfterAction_Command_o *v196; // x21
  __int64 v197; // x2
  __int64 v198; // x3
  BlankEarthQuestAfterAction_o *v199; // x23
  System_Action_o *v200; // x24
  const MethodInfo *v201; // x5
  __int64 v202; // x2
  __int64 v203; // x3
  int id; // w8
  float v205; // s0
  __int64 v206; // x1
  __int64 v207; // x2
  __int64 v208; // x3
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v210; // x0
  TerminalSceneComponent_c *v211; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v213; // x20
  TerminalSceneComponent_o *v214; // x0
  float v215; // s0
  System_Action_o *v216; // x1
  System_String_o *v217; // x19
  __int64 v218; // x1
  System_String_o *v219; // x20
  System_String_o *v220; // x20
  Il2CppObject *Instance; // x21
  __int64 v222; // x1
  __int64 v223; // x2
  __int64 v224; // x3
  System_Action_o *v225; // x23
  __int64 v226; // x8
  __int64 v227; // x23
  float v228; // s0
  System_String_o *param; // x21
  _QWORD *v230; // x0
  System_Reflection_MethodBase_o *v231; // x0
  __int64 v232; // x20
  int64_t v233; // x2
  int32_t v234; // w3
  System_String_o *v235; // x4
  BattleSetupInfo_o *v236; // x5
  FollowerInfo_o *v237; // x6
  PartyListViewItem_o *v238; // x7
  __int64 v239; // x23
  __int64 v240; // x8
  __int64 v241; // x22
  int32_t v242; // w21
  bool v243; // w24
  bool v244; // w26
  __int64 v245; // x20
  int64_t v246; // x2
  int32_t v247; // w3
  System_String_o *v248; // x4
  BattleSetupInfo_o *v249; // x5
  FollowerInfo_o *v250; // x6
  PartyListViewItem_o *v251; // x7
  __int64 v252; // x8
  QuestAfterAction_o *v253; // x22
  Il2CppObject *v254; // x0
  int64_t v255; // x2
  int32_t v256; // w3
  System_String_o *v257; // x4
  BattleSetupInfo_o *v258; // x5
  FollowerInfo_o *v259; // x6
  PartyListViewItem_o *v260; // x7
  __int64 v261; // x1
  UnityEngine_Object_o *v262; // x19
  __int64 v263; // x1
  __int64 v264; // x2
  __int64 v265; // x3
  SrcSpotBasePrefab_o *v266; // x19
  System_Action_o *v267; // x21
  int32_t v268; // w1
  __int64 v269; // x23
  float v270; // s0
  float v271; // s9
  float v272; // s0
  float v273; // s10
  float v274; // s0
  float v275; // s11
  float v276; // s0
  float v277; // s8
  __int64 v278; // x2
  int32_t v279; // w19
  __int64 v280; // x8
  float v281; // s8
  const MethodInfo_36C2D28 *v282; // x2
  __int64 v283; // x3
  float v284; // s0
  float v285; // s1
  float v286; // s2
  float v287; // s10
  float v288; // s9
  float v289; // s11
  MapCamera_o *v290; // x20
  System_Action_o *v291; // x21
  MapCamera_o *v292; // x0
  float v293; // s0
  float v294; // s1
  float v295; // s2
  float v296; // s3
  int32_t v297; // w1
  __int64 v298; // x20
  int64_t v299; // x2
  int32_t v300; // w3
  System_String_o *v301; // x4
  BattleSetupInfo_o *v302; // x5
  FollowerInfo_o *v303; // x6
  PartyListViewItem_o *v304; // x7
  __int64 v305; // x8
  QuestAfterAction_o *v306; // x22
  Il2CppObject *v307; // x0
  int64_t v308; // x2
  int32_t v309; // w3
  System_String_o *v310; // x4
  BattleSetupInfo_o *v311; // x5
  FollowerInfo_o *v312; // x6
  PartyListViewItem_o *v313; // x7
  __int64 v314; // x1
  UnityEngine_Object_o *v315; // x19
  __int64 v316; // x1
  __int64 v317; // x2
  __int64 v318; // x3
  ModelLineComponent_o *v319; // x19
  System_Action_o *v320; // x21
  const MethodInfo *v321; // x3
  int32_t v322; // w1
  __int64 v323; // x21
  __int64 v324; // x1
  __int64 v325; // x2
  __int64 v326; // x3
  int32_t v327; // w20
  int32_t v328; // w22
  TerminalSceneComponent_c *v329; // x0
  TerminalSceneComponent_o *v330; // x22
  __int64 v331; // x8
  PlayMakerFSM_o *v332; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v334; // x2
  __int64 v335; // x3
  __int64 v336; // x8
  __int64 v337; // x8
  QuestBoardListViewManager_o *v338; // x21
  System_Action_o *v339; // x22
  __int64 v340; // x22
  int v341; // w23
  float v342; // s8
  int32_t v343; // w21
  __int64 v344; // x1
  __int64 v345; // x2
  TerminalPramsManager_c *v346; // x0
  __int64 v347; // x8
  __int64 v348; // x2
  __int64 v349; // x8
  __int64 v350; // x8
  __int64 v351; // x8
  System_String_o *v352; // x20
  System_String_o *v353; // x21
  SeManager_c *v354; // x0
  float DEFAULT_VOLUME; // s8
  int32_t v356; // w23
  Il2CppObject *v357; // x21
  const MethodInfo *v358; // x2
  __int64 v359; // x24
  __int64 v360; // x2
  int v361; // w23
  __int64 v362; // x2
  __int64 v363; // x3
  __int64 v364; // x8
  ScrTerminalListTop_o *v365; // x20
  TerminalPramsManager_c *v366; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w23
  System_Action_o *v369; // x19
  __int64 v370; // x23
  __int64 v371; // x2
  int32_t v372; // w21
  int32_t v373; // w22
  int32_t v374; // w23
  System_String_o *v375; // x23
  int64_t v376; // x2
  int32_t v377; // w3
  System_String_o *v378; // x4
  BattleSetupInfo_o *v379; // x5
  FollowerInfo_o *v380; // x6
  PartyListViewItem_o *v381; // x7
  System_String_array *v382; // x20
  int64_t v383; // x1
  int v384; // w8
  System_String_o *v385; // x19
  System_String_o *v386; // x20
  System_String_o *v387; // x19
  __int64 v388; // x1
  System_String_o *v389; // x20
  System_String_o *v390; // x20
  Il2CppObject *v391; // x21
  __int64 v392; // x1
  __int64 v393; // x2
  __int64 v394; // x3
  System_Action_o *v395; // x23
  int *v396; // x10
  System_String_o *v397; // x23
  int64_t v398; // x2
  int32_t v399; // w3
  System_String_o *v400; // x4
  BattleSetupInfo_o *v401; // x5
  FollowerInfo_o *v402; // x6
  PartyListViewItem_o *v403; // x7
  System_String_array *v404; // x20
  int64_t v405; // x1
  int v406; // w8
  System_String_o *v407; // x19
  __int64 v408; // x1
  System_String_o *v409; // x20
  System_String_o *v410; // x20
  Il2CppObject *v411; // x21
  __int64 v412; // x1
  __int64 v413; // x2
  __int64 v414; // x3
  System_Action_o *v415; // x23
  const MethodInfo *v416; // x2
  __int64 v417; // x3
  __int64 v418; // x8
  __int64 v419; // x8
  QuestAfterAction_TitleInfoControlCallback_o *v420; // x21
  __int64 v421; // x1
  Il2CppObject *MapComponent_object; // x22
  __int64 v423; // x2
  __int64 v424; // x1
  Il2CppObject *v425; // x20
  __int64 v426; // x8
  ScrTerminalMap_o *v427; // x23
  __int64 v428; // x8
  ScrTerminalMap_o *v429; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v431; // x1
  __int64 v432; // x2
  __int64 v433; // x3
  System_Action_o *v434; // x23
  TerminalPramsManager_c *v435; // x0
  __int64 v436; // x8
  __int64 v437; // x1
  __int64 v438; // x2
  const MethodInfo *v439; // x2
  TerminalPramsManager_c *v440; // x0
  __int64 v441; // x8
  float v442; // s0
  __int64 v443; // x8
  float v444; // s0
  __int64 v445; // x2
  __int64 v446; // x23
  float v447; // s0
  float v448; // s8
  __int64 v449; // x2
  int32_t v450; // w22
  __int64 v451; // x8
  ScrTerminalMap_o *v452; // x24
  float v453; // s0
  float v454; // s9
  float v455; // s0
  const MethodInfo_36C2D28 *v456; // x2
  __int64 v457; // x3
  int v458; // w8
  float v459; // s10
  float v460; // s9
  float v461; // s11
  MapCamera_o *v462; // x20
  __int64 v463; // x21
  int32_t v464; // w0
  __int64 v465; // x2
  __int64 v466; // x3
  int32_t v467; // w20
  float v468; // s8
  int32_t v469; // w19
  __int64 v470; // x20
  int64_t v471; // x2
  int32_t v472; // w3
  System_String_o *v473; // x4
  BattleSetupInfo_o *v474; // x5
  FollowerInfo_o *v475; // x6
  PartyListViewItem_o *v476; // x7
  __int64 v477; // x8
  QuestAfterAction_o *v478; // x22
  Il2CppObject *v479; // x0
  int64_t v480; // x2
  int32_t v481; // w3
  System_String_o *v482; // x4
  BattleSetupInfo_o *v483; // x5
  FollowerInfo_o *v484; // x6
  PartyListViewItem_o *v485; // x7
  __int64 v486; // x1
  UnityEngine_Object_o *v487; // x19
  __int64 v488; // x1
  __int64 v489; // x2
  __int64 v490; // x3
  __int64 v491; // x23
  int64_t v492; // x2
  int32_t v493; // w3
  System_String_o *v494; // x4
  BattleSetupInfo_o *v495; // x5
  FollowerInfo_o *v496; // x6
  PartyListViewItem_o *v497; // x7
  __int64 v498; // x20
  QuestAfterAction_o *v499; // x22
  Il2CppObject *v500; // x0
  int64_t *v501; // x19
  int64_t v502; // x2
  int32_t v503; // w3
  System_String_o *v504; // x4
  BattleSetupInfo_o *v505; // x5
  FollowerInfo_o *v506; // x6
  PartyListViewItem_o *v507; // x7
  __int64 v508; // x1
  UnityEngine_Object_o *v509; // x21
  __int64 v510; // x1
  __int64 v511; // x2
  __int64 v512; // x3
  SrcSpotBasePrefab_o *v513; // x21
  System_Action_o *v514; // x22
  int64_t v515; // x2
  int32_t v516; // w3
  System_String_o *v517; // x4
  BattleSetupInfo_o *v518; // x5
  FollowerInfo_o *v519; // x6
  PartyListViewItem_o *v520; // x7
  int64_t v521; // x1
  PartyOrganizationUtility_o *v522; // x0
  __int64 v523; // x22
  QuestAfterAction_o *v524; // x21
  __int64 v525; // x1
  Il2CppObject *v526; // x21
  __int64 v527; // x2
  __int64 v528; // x3
  System_Action_o *v529; // x22
  QuestAfterAction_o *v530; // x22
  __int64 v531; // x1
  Il2CppObject *v532; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v534; // x0
  int32_t v535; // w1
  QuestAfterAction_o *v536; // x22
  __int64 v537; // x1
  Il2CppObject *v538; // x21
  _DWORD *v539; // x8
  QuestAfterAction_o *v540; // x22
  __int64 v541; // x1
  _DWORD *v542; // x8
  __int64 v543; // x21
  QuestAfterAction_o *v544; // x22
  __int64 v545; // x1
  Il2CppObject *v546; // x22
  __int64 v547; // x1
  __int64 v548; // x2
  int32_t v549; // w21
  TerminalPramsManager_c *v550; // x0
  QuestAfterAction_o *v551; // x20
  __int64 v552; // x1
  Il2CppObject *v553; // x20
  __int64 v554; // x1
  __int64 v555; // x2
  TerminalPramsManager_c *v556; // x0
  SceneJumpInfo_o *v557; // x21
  MapCamera_o *v558; // x20
  float v559; // s0
  __int64 v560; // x1
  __int64 v561; // x2
  __int64 v562; // x3
  System_Action_o *v563; // x21
  MapCamera_o *v564; // x0
  float v565; // s0
  int32_t v566; // w4
  int v567; // w23
  __int64 v568; // x21
  float v569; // s0
  float v570; // s8
  __int64 v571; // x2
  __int64 v572; // x3
  float v573; // s0
  MapCamera_o *v574; // x19
  float v575; // s0
  float v576; // s9
  int32_t v577; // w20
  __int64 v578; // x20
  int64_t v579; // x2
  int32_t v580; // w3
  System_String_o *v581; // x4
  BattleSetupInfo_o *v582; // x5
  FollowerInfo_o *v583; // x6
  PartyListViewItem_o *v584; // x7
  __int64 v585; // x8
  QuestAfterAction_o *v586; // x22
  Il2CppObject *v587; // x0
  int64_t v588; // x2
  int32_t v589; // w3
  System_String_o *v590; // x4
  BattleSetupInfo_o *v591; // x5
  FollowerInfo_o *v592; // x6
  PartyListViewItem_o *v593; // x7
  __int64 v594; // x1
  UnityEngine_Object_o *v595; // x19
  __int64 v596; // x1
  __int64 v597; // x2
  __int64 v598; // x3
  __int64 v599; // x20
  int64_t v600; // x2
  int32_t v601; // w3
  System_String_o *v602; // x4
  BattleSetupInfo_o *v603; // x5
  FollowerInfo_o *v604; // x6
  PartyListViewItem_o *v605; // x7
  __int64 v606; // x8
  QuestAfterAction_o *v607; // x22
  Il2CppObject *v608; // x0
  int64_t v609; // x2
  int32_t v610; // w3
  System_String_o *v611; // x4
  BattleSetupInfo_o *v612; // x5
  FollowerInfo_o *v613; // x6
  PartyListViewItem_o *v614; // x7
  __int64 v615; // x1
  UnityEngine_Object_o *v616; // x19
  __int64 v617; // x1
  __int64 v618; // x2
  __int64 v619; // x3
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v621; // x22
  __int64 v622; // x1
  UnityEngine_Object_o *v623; // x21
  const MethodInfo *v624; // x2
  _DWORD *v625; // x8
  _BOOL4 v626; // w23
  QuestAfterAction_o *v627; // x22
  __int64 v628; // x1
  UnityEngine_Object_o *v629; // x21
  const MethodInfo *v630; // x2
  const MethodInfo *v631; // x2
  _DWORD *v632; // x8
  _BOOL4 v633; // w23
  QuestAfterAction_o *v634; // x22
  __int64 v635; // x1
  UnityEngine_Object_o *v636; // x21
  const MethodInfo *v637; // x2
  const MethodInfo *v638; // x2
  System_Action_o *v639; // x20
  const MethodInfo *v640; // x2
  System_String_o *v641; // x20
  Il2CppObject *v642; // x21
  __int64 v643; // x1
  __int64 v644; // x2
  __int64 v645; // x3
  System_Action_o *v646; // x23
  __int64 v647; // x1
  __int64 v648; // x2
  __int64 v649; // x3
  float v650; // s0
  float v651; // s0
  float v652; // s0
  QuestAfterAction_o *v653; // x24
  const MethodInfo *v654; // x4
  __int64 v655; // x1
  UnityEngine_Object_o *v656; // x24
  __int64 v657; // x2
  float v658; // s10
  float v659; // s8
  float v660; // s9
  __int64 v661; // x8
  const MethodInfo_36C2D28 *v662; // x2
  __int64 v663; // x3
  System_String_o *v664; // x24
  QuestAfterAction_o *v665; // x24
  const MethodInfo *v666; // x4
  __int64 v667; // x1
  UnityEngine_Object_o *v668; // x24
  __int64 v669; // x2
  float v670; // s8
  float v671; // s9
  float v672; // s10
  __int64 v673; // x8
  __int64 v674; // x1
  float v675; // s0
  float v676; // s1
  float v677; // s2
  QuestAfterAction_o *v678; // x24
  const MethodInfo *v679; // x4
  __int64 v680; // x1
  UnityEngine_Object_o *v681; // x24
  __int64 v682; // x8
  int v683; // w8
  __int64 v684; // x8
  MapCamera_o *v685; // x20
  MapCamera_o *v686; // x0
  float v687; // s0
  float v688; // s1
  float v689; // s2
  __int64 v690; // x23
  int64_t v691; // x2
  int32_t v692; // w3
  System_String_o *v693; // x4
  BattleSetupInfo_o *v694; // x5
  FollowerInfo_o *v695; // x6
  PartyListViewItem_o *v696; // x7
  __int64 v697; // x20
  __int64 v698; // x8
  __int64 v699; // x21
  int32_t v700; // w22
  bool v701; // w26
  bool v702; // w27
  __int64 v703; // x8
  __int64 v704; // x22
  int32_t v705; // w21
  bool v706; // w22
  __int64 v707; // x8
  __int64 v708; // x22
  int32_t v709; // w21
  bool v710; // w22
  __int64 v711; // x21
  float v712; // s0
  QuestAfterAction_o *v713; // x20
  float v714; // s8
  __int64 v715; // x1
  Il2CppObject *v716; // x20
  __int64 v717; // x2
  _BOOL4 v718; // w23
  __int64 v719; // x20
  int64_t v720; // x2
  int32_t v721; // w3
  System_String_o *v722; // x4
  BattleSetupInfo_o *v723; // x5
  FollowerInfo_o *v724; // x6
  PartyListViewItem_o *v725; // x7
  __int64 v726; // x8
  QuestAfterAction_o *v727; // x22
  Il2CppObject *v728; // x0
  int64_t v729; // x2
  int32_t v730; // w3
  System_String_o *v731; // x4
  BattleSetupInfo_o *v732; // x5
  FollowerInfo_o *v733; // x6
  PartyListViewItem_o *v734; // x7
  __int64 v735; // x1
  UnityEngine_Object_o *v736; // x19
  __int64 v737; // x1
  __int64 v738; // x2
  __int64 v739; // x3
  MapGimmickComponent_o *v740; // x19
  System_Action_o *v741; // x21
  __int64 v742; // x2
  TerminalSceneComponent_o *v743; // x19
  __int64 v744; // x20
  int64_t v745; // x2
  int32_t v746; // w3
  System_String_o *v747; // x4
  BattleSetupInfo_o *v748; // x5
  FollowerInfo_o *v749; // x6
  PartyListViewItem_o *v750; // x7
  System_String_array *v751; // x0
  __int64 *v752; // x21
  int64_t v753; // x2
  int32_t v754; // w3
  System_String_o *v755; // x4
  BattleSetupInfo_o *v756; // x5
  FollowerInfo_o *v757; // x6
  PartyListViewItem_o *v758; // x7
  __int64 v759; // x8
  __int64 v760; // x9
  QuestAfterAction_o *v761; // x21
  Il2CppObject *v762; // x0
  int64_t v763; // x2
  int32_t v764; // w3
  System_String_o *v765; // x4
  BattleSetupInfo_o *v766; // x5
  FollowerInfo_o *v767; // x6
  PartyListViewItem_o *v768; // x7
  __int64 v769; // x1
  UnityEngine_Object_o *v770; // x19
  __int64 v771; // x1
  __int64 v772; // x2
  __int64 v773; // x3
  MapGimmickComponent_o *v774; // x19
  System_Action_o *v775; // x0
  __int64 *v776; // x8
  System_Action_o *v777; // x21
  __int64 v778; // x21
  QuestAfterAction_o *v779; // x20
  __int64 v780; // x1
  Il2CppObject *v781; // x20
  UIWidget_o *v782; // x20
  int64_t v783; // x2
  int32_t v784; // w3
  System_String_o *v785; // x4
  BattleSetupInfo_o *v786; // x5
  FollowerInfo_o *v787; // x6
  PartyListViewItem_o *v788; // x7
  __int64 v789; // x8
  QuestAfterAction_o *v790; // x22
  Il2CppObject *v791; // x0
  __int64 v792; // x19
  int64_t v793; // x2
  int32_t v794; // w3
  System_String_o *v795; // x4
  BattleSetupInfo_o *v796; // x5
  FollowerInfo_o *v797; // x6
  PartyListViewItem_o *v798; // x7
  __int64 v799; // x1
  UnityEngine_Object_o *v800; // x21
  bool v801; // w0
  bool v802; // w22
  __int64 v803; // x1
  __int64 v804; // x2
  __int64 v805; // x3
  int32_t v806; // w1
  __int64 v807; // x8
  __int64 v808; // x22
  int32_t v809; // w21
  bool v810; // w22
  __int64 v811; // x22
  QuestAfterAction_o *v812; // x21
  __int64 v813; // x1
  Il2CppObject *v814; // x21
  QuestAfterAction_o *v815; // x23
  const MethodInfo *v816; // x4
  int32_t v817; // w2
  QuestAfterAction_o *v818; // x0
  int32_t v819; // w1
  QuestAfterAction_o *v820; // x21
  __int64 v821; // x1
  QuestAfterAction_o *v822; // x23
  const MethodInfo *v823; // x4
  __int64 v824; // x1
  UnityEngine_Object_o *MapGameObject; // x23
  float v826; // s0
  float v827; // s1
  float v828; // s2
  float x; // s9
  float y; // s8
  float z; // s10
  QuestAfterAction_o *v832; // x21
  __int64 v833; // x1
  QuestAfterAction_o *v834; // x23
  __int64 v835; // x1
  UnityEngine_Object_o *v836; // x23
  __int64 v837; // x2
  __int64 v838; // x8
  float v839; // s0
  float v840; // s11
  __int64 v841; // x2
  __int64 v842; // x3
  int32_t v843; // w23
  __int64 v844; // x2
  __int64 v845; // x3
  clsQuestCheck_o *v846; // x19
  QuestAfterAction_StateMain___c_c *v847; // x8
  System_Action_o *_9__16_25; // x20
  Il2CppObject *v849; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v850; // x0
  int64_t v851; // x2
  int32_t v852; // w3
  System_String_o *v853; // x4
  BattleSetupInfo_o *v854; // x5
  FollowerInfo_o *v855; // x6
  PartyListViewItem_o *v856; // x7
  __int64 v857; // x20
  int64_t v858; // x2
  int32_t v859; // w3
  System_String_o *v860; // x4
  BattleSetupInfo_o *v861; // x5
  FollowerInfo_o *v862; // x6
  PartyListViewItem_o *v863; // x7
  __int64 v864; // x8
  QuestAfterAction_o *v865; // x22
  Il2CppObject *v866; // x0
  int64_t v867; // x2
  int32_t v868; // w3
  System_String_o *v869; // x4
  BattleSetupInfo_o *v870; // x5
  FollowerInfo_o *v871; // x6
  PartyListViewItem_o *v872; // x7
  __int64 v873; // x1
  UnityEngine_Object_o *v874; // x19
  __int64 v875; // x1
  __int64 v876; // x2
  __int64 v877; // x3
  srcLineSprite_o *v878; // x19
  System_Action_o *v879; // x21
  int32_t v880; // w1
  __int64 v881; // x20
  int64_t v882; // x2
  int32_t v883; // w3
  System_String_o *v884; // x4
  BattleSetupInfo_o *v885; // x5
  FollowerInfo_o *v886; // x6
  PartyListViewItem_o *v887; // x7
  __int64 v888; // x8
  QuestAfterAction_o *v889; // x22
  Il2CppObject *v890; // x0
  int64_t v891; // x2
  int32_t v892; // w3
  System_String_o *v893; // x4
  BattleSetupInfo_o *v894; // x5
  FollowerInfo_o *v895; // x6
  PartyListViewItem_o *v896; // x7
  __int64 v897; // x1
  UnityEngine_Object_o *v898; // x19
  __int64 v899; // x1
  __int64 v900; // x2
  __int64 v901; // x3
  __int64 v902; // x20
  int64_t v903; // x2
  int32_t v904; // w3
  System_String_o *v905; // x4
  BattleSetupInfo_o *v906; // x5
  FollowerInfo_o *v907; // x6
  PartyListViewItem_o *v908; // x7
  __int64 v909; // x8
  QuestAfterAction_o *v910; // x22
  Il2CppObject *v911; // x0
  int64_t v912; // x2
  int32_t v913; // w3
  System_String_o *v914; // x4
  BattleSetupInfo_o *v915; // x5
  FollowerInfo_o *v916; // x6
  PartyListViewItem_o *v917; // x7
  __int64 v918; // x1
  UnityEngine_Object_o *v919; // x19
  __int64 v920; // x1
  __int64 v921; // x2
  __int64 v922; // x3
  __int64 v923; // x1
  UnityEngine_Object_o *v924; // x21
  __int64 v925; // x1
  UnityEngine_Object_o *v926; // x21
  int v927; // w9
  __int64 v928; // x1
  UnityEngine_Object_o *v929; // x21
  Il2CppObject *v930; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int64_t v932; // x2
  int32_t v933; // w3
  System_String_o *v934; // x4
  BattleSetupInfo_o *v935; // x5
  FollowerInfo_o *v936; // x6
  PartyListViewItem_o *v937; // x7
  __int64 v938; // x2
  TerminalSceneComponent_c *v939; // x0
  System_Action_o *v940; // x21
  float v941; // s10
  float v942; // s9
  float v943; // s8
  __int64 v944; // x3
  System_String_o *v945; // x24
  Il2CppObject *v946; // x0
  int64_t v947; // x2
  int32_t v948; // w3
  System_String_o *v949; // x4
  BattleSetupInfo_o *v950; // x5
  FollowerInfo_o *v951; // x6
  PartyListViewItem_o *v952; // x7
  __int64 v953; // x1
  UnityEngine_Object_o *v954; // x22
  __int64 v955; // x2
  __int64 v956; // x3
  MapGimmickComponent_o *v957; // x21
  System_Action_o *v958; // x0
  System_Action_o *v959; // x22
  MapGimmickComponent_o *v960; // x0
  System_Action_o *v961; // x2
  Il2CppObject *v962; // x0
  MapGimmickComponent_o **v963; // x22
  int64_t v964; // x2
  int32_t v965; // w3
  System_String_o *v966; // x4
  BattleSetupInfo_o *v967; // x5
  FollowerInfo_o *v968; // x6
  PartyListViewItem_o *v969; // x7
  __int64 v970; // x1
  UnityEngine_Object_o *v971; // x24
  __int64 v972; // x2
  __int64 v973; // x3
  MapGimmickComponent_o *v974; // x24
  System_Action_o *v975; // x0
  __int64 v976; // x1
  Il2CppObject *v977; // x21
  __int64 v978; // x1
  Il2CppObject *v979; // x21
  Il2CppClass *v980; // x8
  __int64 v981; // x1
  Il2CppObject *v982; // x21
  Il2CppClass *v983; // x8
  QuestAfterAction_StateMain_c *v984; // x8
  int v985; // w0
  __int64 v986; // x8
  ScrTerminalMap_o *v987; // x21
  System_Action_o *v988; // x23
  MapCamera_o *v989; // x20
  MapCamera_o *v990; // x20
  int v991; // w8
  MapCamera_o *v992; // x20
  float v993; // s0
  float v994; // s1
  float v995; // s2
  float v996; // s0
  float v997; // s1
  float v998; // s2
  __int64 v999; // x8
  float v1000; // s3
  System_Action_o *v1001; // x20
  MapGimmickComponent_o *v1002; // x0
  float v1003; // s0
  float v1004; // s1
  float v1005; // s2
  float v1006; // s3
  int32_t v1007; // w1
  System_Action_o *v1008; // x2
  __int64 v1009; // x8
  __int64 v1010; // x8
  float v1011; // s0
  float v1012; // s0
  MapCamera_o *v1013; // x0
  float v1014; // s0
  __int64 v1015; // x1
  __int64 v1016; // x2
  __int64 v1017; // x3
  __int64 v1018; // x8
  ScrTerminalMap_o *v1019; // x22
  float v1020; // s0
  float v1021; // s9
  float v1022; // s0
  float v1023; // s0
  float v1024; // s1
  float v1025; // s2
  float v1026; // s10
  float v1027; // s9
  float v1028; // s11
  float v1029; // s8
  __int64 v1030; // x2
  __int64 v1031; // x3
  int32_t v1032; // w21
  System_Action_o *v1033; // x22
  float v1034; // s0
  float v1035; // s0
  __int64 v1036; // x1
  __int64 v1037; // x2
  __int64 v1038; // x3
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  float sec; // [xsp+3Ch] [xbp-B4h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v1042; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v1048; // 0:x0.8
  System_Nullable_float__o v1049; // 0:x0.8
  System_Nullable_float__o v1050; // 0:x0.8
  System_Nullable_float__o v1051; // 0:x0.8
  System_Nullable_float__o v1052; // 0:x3.8
  System_Nullable_float__o v1053; // 0:x3.8
  System_Nullable_Vector3__o v1054; // 0:x0.16
  System_Nullable_Vector3__o v1055; // 0:x0.16
  System_Nullable_Vector3__o v1056; // 0:x0.16
  System_Nullable_Vector3__o v1057; // 0:x0.16
  System_Nullable_Vector3__o v1058; // 0:x0.16
  System_Nullable_Vector3__o v1059; // 0:x1.16
  System_Nullable_Vector3__o v1060; // 0:x1.16
  UnityEngine_Vector3_o v1061; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1062; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1063; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1064; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1065; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1067; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1068; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1069; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1070; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1072; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1073; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1074; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1075; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1076; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1077; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12FED & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v18, v19);
    sub_1BCA7E0(&FSUtility_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v24, v25);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v28, v29);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v30, v31);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v34, v35);
    sub_1BCA7E0(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v36, v37);
    sub_1BCA7E0(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v38, v39);
    sub_1BCA7E0(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v40, v41);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v42, v43);
    sub_1BCA7E0(&SeManager_TypeInfo, v44, v45);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v46, v47);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v48, v49);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50, v51);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v52, v53);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v54, v55);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v56, v57);
    sub_1BCA7E0(&SoundManager_TypeInfo, v58, v59);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain_UpdateAnim__, v60, v61);
    sub_1BCA7E0(&string___TypeInfo, v62, v63);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v64, v65);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v66, v67);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, v68, v69);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_25__, v70, v71);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v72, v73);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v74, v75);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v76, v77);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__, v78, v79);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__24__, v80, v81);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__28__, v82, v83);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__, v84, v85);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__, v86, v87);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__, v88, v89);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v90, v91);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v92, v93);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v94, v95);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__, v96, v97);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__, v98, v99);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v100, v101);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__, v102, v103);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__, v104, v105);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v106, v107);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__, v108, v109);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v110, v111);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__, v112, v113);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v114, v115);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__, v116, v117);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__, v118, v119);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v120, v121);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v122, v123);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v124, v125);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v126, v127);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v128, v129);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v130, v131);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v132, v133);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v134, v135);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v136, v137);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v138, v139);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v140, v141);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v142, v143);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v144, v145);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v146, v147);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v148, v149);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v150, v151);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v152, v153);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v154, v155);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v156, v157);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c_TypeInfo, v158, v159);
    sub_1BCA7E0(&StringLiteral_88/*"\r\n"*/, v160, v161);
    sub_1BCA7E0(&StringLiteral_1474/*"30101"*/, v162, v163);
    sub_1BCA7E0(&StringLiteral_10959/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v164, v165);
    sub_1BCA7E0(&StringLiteral_1475/*"30102"*/, v166, v167);
    sub_1BCA7E0(&StringLiteral_1399/*"10703"*/, v168, v169);
    sub_1BCA7E0(&StringLiteral_3433/*"CAPTER WAIT"*/, v170, v171);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v172, v173);
    sub_1BCA7E0(&StringLiteral_20022/*"gevINFOBAR_BACK"*/, v174, v175);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v176, v177);
    byte_4B12FED = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v178 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v178, 0LL);
  if ( !v178 )
    goto LABEL_1002;
  *(_QWORD *)(v178 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v178 + 16), (int64_t)this, v181, v182, v183, v184, v185, v186);
  *(_QWORD *)(v178 + 24) = that;
  v187 = (__int64 *)(v178 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v178 + 24), (int64_t)that, v188, v189, v190, v191, v192, v193);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v187 )
    goto LABEL_1002;
  if ( *(_BYTE *)(*v187 + 169) )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v187 )
    {
      *(_BYTE *)(*v187 + 169) = 0;
      return;
    }
LABEL_1002:
    sub_1BCAA3C(updated, v180);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v195 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v195 )
    goto LABEL_1002;
  if ( (unsigned int)updated >= *(_DWORD *)(v195 + 24) )
    goto LABEL_1003;
  v196 = *(QuestAfterAction_Command_o **)(v195 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v196,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_829;
  if ( !*v187 )
    goto LABEL_1002;
  v199 = *(BlankEarthQuestAfterAction_o **)(*v187 + 48);
  v200 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v197, v198);
  System_Action___ctor(v200, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !v199 )
    goto LABEL_1002;
  updated = BlankEarthQuestAfterAction__UpdateAnim(v199, v180, v196, v200, &isQuickUpdate, v201);
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
        *v187,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v196 )
    goto LABEL_1002;
  id = v196->fields.id;
  if ( id <= 520 )
  {
    if ( id > 350 )
    {
      if ( id > 500 )
      {
        if ( id == 501 )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v202);
            byte_4B10F83 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v331 = **(_QWORD **)(updated + 184);
          if ( !v331 )
            goto LABEL_1002;
          updated = *(_QWORD *)(v331 + 256);
          if ( !updated )
            goto LABEL_1002;
          updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
          if ( !updated )
            goto LABEL_1002;
          v332 = (PlayMakerFSM_o *)updated;
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
          if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3433/*"CAPTER WAIT"*/, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v334);
              byte_4B10F83 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v336 = **(_QWORD **)(updated + 184);
            if ( !v336 )
              goto LABEL_1002;
            v337 = *(_QWORD *)(v336 + 256);
            if ( !v337 )
              goto LABEL_1002;
            v338 = *(QuestBoardListViewManager_o **)(v337 + 296);
            updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo, v180);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            }
            v339 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
            if ( !v339 )
            {
              if ( !*(_DWORD *)(updated + 224) )
              {
                j_il2cpp_runtime_class_init_0(updated, v180);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v930 = **(Il2CppObject ***)(updated + 184);
              v339 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v334, v335);
              System_Action___ctor(v339, v930, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0LL);
              static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              static_fields->__9__16_22 = v339;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&static_fields->__9__16_22,
                (int64_t)v339,
                v932,
                v933,
                v934,
                v935,
                v936,
                v937);
            }
            if ( !v338 )
              goto LABEL_1002;
            QuestBoardListViewManager__SetMode(v338, 4, v339, 0, 0, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v938);
              byte_4B10F83 = 1;
            }
            v939 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
              v939 = TerminalSceneComponent_TypeInfo;
            }
            updated = (__int64)v939->static_fields->mInstance;
            if ( !updated )
              goto LABEL_1002;
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
            PlayMakerFSM__SendEvent(v332, (System_String_o *)StringLiteral_20022/*"gevINFOBAR_BACK"*/, 0LL);
          }
          goto LABEL_829;
        }
        if ( id != 510 )
        {
          if ( id == 520 )
          {
            DEFAULT_FADE_TIME = System_Single__Parse(v196->fields.param, 0LL);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v210 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v206);
                v210 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v210->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v206);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v206, v207);
              byte_4B10F83 = 1;
            }
            v211 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v206);
              v211 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v211->static_fields->mInstance;
            v213 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v206, v207, v208);
            System_Action___ctor(
              v213,
              (Il2CppObject *)v178,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
              0LL);
            if ( !mInstance )
              goto LABEL_1002;
            v214 = mInstance;
            v215 = DEFAULT_FADE_TIME;
            v216 = v213;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v214, v215, v216, 0LL);
          }
          return;
        }
        updated = (__int64)v196->fields.param;
        if ( !updated )
          goto LABEL_1002;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1002;
        v340 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v341 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          v342 = 0.5;
          if ( *(int *)(v340 + 24) >= 2 )
          {
            v343 = System_Int32__Parse(*(System_String_o **)(v340 + 40), 0LL);
            if ( *(int *)(v340 + 24) >= 3 )
              v342 = System_Single__Parse(*(System_String_o **)(v340 + 48), 0LL);
          }
          else
          {
            v343 = v341;
            v341 = -1;
          }
          updated = *v187;
          if ( !*v187 )
            goto LABEL_1002;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v343,
                                  this,
                                  (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v421);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
          {
            if ( v341 >= 1 )
            {
              updated = *v187;
              if ( !*v187 )
                goto LABEL_1002;
              v425 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v341,
                       this,
                       (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v424);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v425, 0LL, 0LL) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
                if ( !byte_4B10F83 )
                {
                  sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v423);
                  byte_4B10F83 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v426 = **(_QWORD **)(updated + 184);
                if ( !v426 )
                  goto LABEL_1002;
                if ( !v425 )
                  goto LABEL_1002;
                v427 = *(ScrTerminalMap_o **)(v426 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v425, 0LL);
                if ( !v427 )
                  goto LABEL_1002;
                ScrTerminalMap__SetPlayerIcon(v427, (UnityEngine_GameObject_o *)updated, 0LL);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v423);
              byte_4B10F83 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v428 = **(_QWORD **)(updated + 184);
            if ( !v428 )
              goto LABEL_1002;
            if ( !MapComponent_object )
              goto LABEL_1002;
            v429 = *(ScrTerminalMap_o **)(v428 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
            v434 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v431, v432, v433);
            System_Action___ctor(v434, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v429 )
              goto LABEL_1002;
            ScrTerminalMap__MovePlayerIcon(v429, gameObject, v343, v434, v342, 0LL);
          }
          return;
        }
        goto LABEL_1003;
      }
      if ( (unsigned int)(id - 351) >= 2 )
      {
        switch ( id )
        {
          case 400:
            v232 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v180, v202, v203);
            System_Object___ctor((Il2CppObject *)v232, 0LL);
            if ( !v232 )
              goto LABEL_1002;
            *(_QWORD *)(v232 + 24) = v178;
            v239 = v232 + 24;
            sub_1BCA784((PartyOrganizationUtility_o *)(v232 + 24), v178, v233, v234, v235, v236, v237, v238);
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v240 = *(_QWORD *)(updated + 24);
            v241 = updated;
            if ( v240 )
            {
              if ( !(_DWORD)v240 )
                goto LABEL_1003;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v242 = updated;
              if ( *(int *)(v241 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v241 + 40), 0LL);
                v243 = (int)updated < 1;
                if ( *(int *)(v241 + 24) < 3 )
                {
                  v244 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v241 + 48), 0LL);
                  v244 = (int)updated > 0;
                }
                goto LABEL_842;
              }
            }
            else
            {
              v242 = 0;
            }
            v244 = 0;
            v243 = 1;
LABEL_842:
            if ( !*(_QWORD *)v239 )
              goto LABEL_1002;
            updated = *(_QWORD *)(*(_QWORD *)v239 + 24LL);
            if ( !updated )
              goto LABEL_1002;
            v946 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v242,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v232 + 16) = v946;
            sub_1BCA784((PartyOrganizationUtility_o *)(v232 + 16), (int64_t)v946, v947, v948, v949, v950, v951, v952);
            v954 = *(UnityEngine_Object_o **)(v232 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v953);
            updated = UnityEngine_Object__op_Equality(v954, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v957 = *(MapGimmickComponent_o **)(v232 + 16);
            if ( !v957 )
              goto LABEL_1002;
            v957->fields.isForceNotActive = v244;
            v958 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v955, v956);
            v959 = v958;
            if ( v243 )
            {
              System_Action___ctor(
                v958,
                (Il2CppObject *)v232,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
                0LL);
              v806 = 2;
              v960 = v957;
              v961 = v959;
LABEL_951:
              MapGimmickComponent__SetState(v960, v806, v961, 0LL);
              return;
            }
            System_Action___ctor(
              v958,
              (Il2CppObject *)v232,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
              0LL);
            MapGimmickComponent__SetState(v957, 2, v959, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v1009 = *(_QWORD *)(v232 + 24);
            if ( !v1009 )
              goto LABEL_1002;
            goto LABEL_956;
          case 401:
            v690 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v180, v202, v203);
            System_Object___ctor((Il2CppObject *)v690, 0LL);
            if ( !v690 )
              goto LABEL_1002;
            *(_QWORD *)(v690 + 24) = v178;
            v697 = v690 + 24;
            sub_1BCA784((PartyOrganizationUtility_o *)(v690 + 24), v178, v691, v692, v693, v694, v695, v696);
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v698 = *(_QWORD *)(updated + 24);
            v699 = updated;
            if ( v698 )
            {
              if ( !(_DWORD)v698 )
                goto LABEL_1003;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v700 = updated;
              if ( *(int *)(v699 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v699 + 40), 0LL);
                v701 = (int)updated < 1;
                if ( *(int *)(v699 + 24) < 3 )
                {
                  v702 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v699 + 48), 0LL);
                  v702 = (int)updated > 0;
                }
                goto LABEL_852;
              }
            }
            else
            {
              v700 = 0;
            }
            v702 = 0;
            v701 = 1;
LABEL_852:
            if ( !*(_QWORD *)v697 )
              goto LABEL_1002;
            updated = *(_QWORD *)(*(_QWORD *)v697 + 24LL);
            if ( !updated )
              goto LABEL_1002;
            v962 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v700,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v690 + 16) = v962;
            v963 = (MapGimmickComponent_o **)(v690 + 16);
            sub_1BCA784((PartyOrganizationUtility_o *)(v690 + 16), (int64_t)v962, v964, v965, v966, v967, v968, v969);
            v971 = *(UnityEngine_Object_o **)(v690 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v970);
            updated = UnityEngine_Object__op_Equality(v971, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v974 = *v963;
            if ( !*v963 )
              goto LABEL_1002;
            v974->fields.isForceLoop = v702;
            v974->fields.isForceNotActive = 0;
            if ( *(int *)(v699 + 24) >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v699 + 56), 0LL);
              if ( !*v963 )
                goto LABEL_1002;
              MapGimmickComponent__SetUseAnimNum(*v963, updated, 1, 0LL);
              v974 = *v963;
            }
            v975 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v972, v973);
            v777 = v975;
            if ( v701 )
            {
              System_Action___ctor(
                v975,
                (Il2CppObject *)v690,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
                0LL);
              if ( !v974 )
                goto LABEL_1002;
              v806 = 3;
              v960 = v974;
LABEL_950:
              v961 = v777;
              goto LABEL_951;
            }
            System_Action___ctor(
              v975,
              (Il2CppObject *)v690,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
              0LL);
            if ( !v974 )
              goto LABEL_1002;
            MapGimmickComponent__SetState(v974, 3, v777, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v1009 = *(_QWORD *)v697;
            if ( !*(_QWORD *)v697 )
              goto LABEL_1002;
LABEL_956:
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
              this,
              *(_QWORD *)(v1009 + 24),
              this->klass->vtable._14_EndAnim.methodPtr);
            return;
          case 402:
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v703 = *(_QWORD *)(updated + 24);
            v704 = updated;
            if ( v703 )
            {
              if ( !(_DWORD)v703 )
                goto LABEL_1003;
              v705 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v704 + 24) >= 2 )
              {
                v706 = System_Int32__Parse(*(System_String_o **)(v704 + 40), 0LL) > 0;
                goto LABEL_866;
              }
            }
            else
            {
              v705 = 0;
            }
            v706 = 0;
LABEL_866:
            updated = *v187;
            if ( !*v187 )
              goto LABEL_1002;
            v977 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v705,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v976);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v977, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v977 )
                goto LABEL_1002;
              BYTE1(v977[6].monitor) = v706;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v977, 0, 0LL);
              v625 = v977[7].klass;
              if ( !v625 )
                goto LABEL_1002;
LABEL_872:
              v625[4] = 0;
              goto LABEL_18;
            }
            return;
          case 403:
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v707 = *(_QWORD *)(updated + 24);
            v708 = updated;
            if ( v707 )
            {
              if ( !(_DWORD)v707 )
                goto LABEL_1003;
              v709 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v708 + 24) >= 2 )
              {
                v710 = System_Int32__Parse(*(System_String_o **)(v708 + 40), 0LL) > 0;
                goto LABEL_875;
              }
            }
            else
            {
              v709 = 0;
            }
            v710 = 0;
LABEL_875:
            updated = *v187;
            if ( !*v187 )
              goto LABEL_1002;
            v979 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v709,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v978);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v979, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v979 )
                goto LABEL_1002;
              LOBYTE(v979[6].monitor) = v710;
              BYTE1(v979[6].monitor) = 0;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v979, 1, 0LL);
              v980 = v979[7].klass;
              if ( !v980 )
                goto LABEL_1002;
              LODWORD(v980->_1.name) = 1;
              goto LABEL_18;
            }
            return;
          case 404:
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v711 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_829;
            v712 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
            if ( !*(_DWORD *)(v711 + 24) )
              goto LABEL_1003;
            v713 = (QuestAfterAction_o *)*v187;
            v714 = v712;
            updated = System_Int32__Parse(*(System_String_o **)(v711 + 32), 0LL);
            if ( !v713 )
              goto LABEL_1002;
            v716 = QuestAfterAction__GetMapComponent_object_(
                     v713,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v715);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v716, 0LL, 0LL) )
              return;
            v718 = *(int *)(v711 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v711 + 72), 0LL) > 0;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v717);
              byte_4B10F83 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v1018 = **(_QWORD **)(updated + 184);
            if ( !v1018 )
              goto LABEL_1002;
            if ( *(_DWORD *)(v711 + 24) <= 1u )
              goto LABEL_1003;
            v1019 = *(ScrTerminalMap_o **)(v1018 + 264);
            v1020 = System_Single__Parse(*(System_String_o **)(v711 + 40), 0LL);
            if ( *(_DWORD *)(v711 + 24) <= 2u )
              goto LABEL_1003;
            v1021 = v1020;
            v1022 = System_Single__Parse(*(System_String_o **)(v711 + 48), 0LL);
            if ( !v1019 )
              goto LABEL_1002;
            *(UnityEngine_Vector3_o *)&v1023 = ScrTerminalMap__LocalPosFromCoord(v1019, v1021, v1022, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v711 + 24) <= 4u )
              goto LABEL_1003;
            v1026 = v1023;
            v1027 = v1024;
            v1028 = v1025;
            v1029 = v714 * 0.001;
            updated = System_Int32__Parse(*(System_String_o **)(v711 + 64), 0LL);
            v1032 = updated;
            if ( v718 )
            {
              if ( !v716 )
                goto LABEL_1002;
              v1075.fields.x = v1026;
              v1075.fields.y = v1027;
              v1075.fields.z = v1028;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v716, v1075, v1029, updated, 0LL, 0LL);
              goto LABEL_829;
            }
            v1033 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v1030, v1031);
            System_Action___ctor(v1033, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v716 )
              goto LABEL_1002;
            v1002 = (MapGimmickComponent_o *)v716;
            v1003 = v1026;
            v1004 = v1027;
            v1005 = v1028;
            v1006 = v1029;
            v1007 = v1032;
            v1008 = v1033;
LABEL_993:
            MapGimmickComponent__SetMoveAnim(v1002, *(UnityEngine_Vector3_o *)&v1003, v1006, v1007, v1008, 0LL);
            return;
          case 405:
            v719 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v180, v202, v203);
            System_Object___ctor((Il2CppObject *)v719, 0LL);
            if ( !v719 )
              goto LABEL_1002;
            *(_QWORD *)(v719 + 24) = v178;
            sub_1BCA784((PartyOrganizationUtility_o *)(v719 + 24), v178, v720, v721, v722, v723, v724, v725);
            v726 = *(_QWORD *)(v719 + 24);
            if ( !v726 )
              goto LABEL_1002;
            v727 = *(QuestAfterAction_o **)(v726 + 24);
            updated = System_Int32__Parse(v196->fields.param, 0LL);
            if ( !v727 )
              goto LABEL_1002;
            v728 = QuestAfterAction__GetMapComponent_object_(
                     v727,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v719 + 16) = v728;
            sub_1BCA784((PartyOrganizationUtility_o *)(v719 + 16), (int64_t)v728, v729, v730, v731, v732, v733, v734);
            v736 = *(UnityEngine_Object_o **)(v719 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v735);
            if ( UnityEngine_Object__op_Equality(v736, 0LL, 0LL) )
              return;
            v740 = *(MapGimmickComponent_o **)(v719 + 16);
            v741 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v737, v738, v739);
            System_Action___ctor(
              v741,
              (Il2CppObject *)v719,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
              0LL);
            if ( !v740 )
              goto LABEL_1002;
            MapGimmickComponent__SetState(v740, 3, v741, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v742);
              byte_4B10F83 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v743 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v180);
            if ( !v743 )
              goto LABEL_1002;
            v214 = v743;
            v216 = 0LL;
            v215 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_46;
          case 406:
            v744 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v180, v202, v203);
            System_Object___ctor((Il2CppObject *)v744, 0LL);
            if ( !v744 )
              goto LABEL_1002;
            *(_QWORD *)(v744 + 32) = v178;
            sub_1BCA784((PartyOrganizationUtility_o *)(v744 + 32), v178, v745, v746, v747, v748, v749, v750);
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            v751 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            *(_QWORD *)(v744 + 24) = v751;
            v752 = (__int64 *)(v744 + 24);
            sub_1BCA784((PartyOrganizationUtility_o *)(v744 + 24), (int64_t)v751, v753, v754, v755, v756, v757, v758);
            v759 = *(_QWORD *)(v744 + 32);
            if ( !v759 )
              goto LABEL_1002;
            v760 = *v752;
            if ( !*v752 )
              goto LABEL_1002;
            if ( !*(_DWORD *)(v760 + 24) )
              goto LABEL_1003;
            v761 = *(QuestAfterAction_o **)(v759 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v760 + 32), 0LL);
            if ( !v761 )
              goto LABEL_1002;
            v762 = QuestAfterAction__GetMapComponent_object_(
                     v761,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v744 + 16) = v762;
            sub_1BCA784((PartyOrganizationUtility_o *)(v744 + 16), (int64_t)v762, v763, v764, v765, v766, v767, v768);
            v770 = *(UnityEngine_Object_o **)(v744 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v769);
            if ( UnityEngine_Object__op_Equality(v770, 0LL, 0LL) )
              return;
            v774 = *(MapGimmickComponent_o **)(v744 + 16);
            v775 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v771, v772, v773);
            v776 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
            v777 = v775;
            goto LABEL_702;
          case 407:
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v778 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1003;
            v779 = (QuestAfterAction_o *)*v187;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v779 )
              goto LABEL_1002;
            v781 = QuestAfterAction__GetMapComponent_object_(
                     v779,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v780);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v781, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( !v781 )
              goto LABEL_1002;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v781, 0LL);
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v778 + 24) <= 1u )
              goto LABEL_1003;
            v782 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v778 + 40), &color, 0LL);
            if ( !v782 )
              goto LABEL_1002;
            UIWidget__set_color(v782, color, 0LL);
            goto LABEL_829;
          case 408:
            v744 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v180, v202, v203);
            System_Object___ctor((Il2CppObject *)v744, 0LL);
            if ( !v744 )
              goto LABEL_1002;
            *(_QWORD *)(v744 + 24) = v178;
            sub_1BCA784((PartyOrganizationUtility_o *)(v744 + 24), v178, v783, v784, v785, v786, v787, v788);
            v789 = *(_QWORD *)(v744 + 24);
            if ( !v789 )
              goto LABEL_1002;
            v790 = *(QuestAfterAction_o **)(v789 + 24);
            updated = System_Int32__Parse(v196->fields.param, 0LL);
            if ( !v790 )
              goto LABEL_1002;
            v791 = QuestAfterAction__GetMapComponent_object_(
                     v790,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v744 + 16) = v791;
            v792 = v744 + 16;
            sub_1BCA784((PartyOrganizationUtility_o *)(v744 + 16), (int64_t)v791, v793, v794, v795, v796, v797, v798);
            v800 = *(UnityEngine_Object_o **)(v744 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v799);
            if ( UnityEngine_Object__op_Equality(v800, 0LL, 0LL) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v792 || !updated )
              goto LABEL_1002;
            v801 = QuestTree__CheckMapGimmickCond_34730552(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v792 + 112LL),
                     0LL);
            v774 = *(MapGimmickComponent_o **)v792;
            v802 = v801;
            v775 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v803, v804, v805);
            v777 = v775;
            if ( v802 )
            {
              v776 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_702:
              System_Action___ctor(v775, (Il2CppObject *)v744, *v776, 0LL);
              if ( !v774 )
                goto LABEL_1002;
              v806 = 3;
            }
            else
            {
              System_Action___ctor(
                v775,
                (Il2CppObject *)v744,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
                0LL);
              if ( !v774 )
                goto LABEL_1002;
              v806 = 2;
            }
            v960 = v774;
            goto LABEL_950;
          case 409:
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v807 = *(_QWORD *)(updated + 24);
            v808 = updated;
            if ( v807 )
            {
              if ( !(_DWORD)v807 )
                goto LABEL_1003;
              v809 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v808 + 24) >= 2 )
              {
                v810 = System_Int32__Parse(*(System_String_o **)(v808 + 40), 0LL) > 0;
                goto LABEL_884;
              }
            }
            else
            {
              v809 = 0;
            }
            v810 = 0;
LABEL_884:
            updated = *v187;
            if ( !*v187 )
              goto LABEL_1002;
            v982 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v809,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v981);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v982, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v982 )
                goto LABEL_1002;
              LOBYTE(v982[6].monitor) = v810;
              BYTE1(v982[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v982, 1, 0LL);
              v983 = v982[7].klass;
              if ( !v983 )
                goto LABEL_1002;
              LODWORD(v983->_1.name) = 1;
              v984 = this->klass;
              this->fields.IsAnimDoing = 0;
              v985 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v984->vtable._11_get_CommandIndex.method)(
                       this,
                       v984->vtable._12_set_CommandIndex.methodPtr);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                this,
                (unsigned int)(v985 + 1),
                this->klass->vtable._13_UpdateAnim.methodPtr);
              goto LABEL_19;
            }
            return;
          case 410:
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v811 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_829;
            v812 = (QuestAfterAction_o *)*v187;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v812 )
              goto LABEL_1002;
            v814 = QuestAfterAction__GetMapComponent_object_(
                     v812,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v813);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v814, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v811 + 24) <= 1u )
              goto LABEL_1003;
            v815 = (QuestAfterAction_o *)*v187;
            updated = System_Int32__Parse(*(System_String_o **)(v811 + 40), 0LL);
            if ( !v815 )
              goto LABEL_1002;
            v817 = updated;
            v818 = v815;
            v819 = 0;
            goto LABEL_744;
          case 411:
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v811 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_829;
            v820 = (QuestAfterAction_o *)*v187;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v820 )
              goto LABEL_1002;
            v814 = QuestAfterAction__GetMapComponent_object_(
                     v820,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v821);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v814, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v811 + 24) <= 1u )
              goto LABEL_1003;
            v822 = (QuestAfterAction_o *)*v187;
            updated = System_Int32__Parse(*(System_String_o **)(v811 + 40), 0LL);
            if ( !v822 )
              goto LABEL_1002;
            MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v822, 2, updated, this, v823);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v824);
            if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
              return;
            *(UnityEngine_Vector3_o *)&v826 = GameObjectExtensions__GetLocalPosition(
                                                (UnityEngine_GameObject_o *)MapGameObject,
                                                0LL);
            if ( *(_DWORD *)(v811 + 24) <= 2u )
              goto LABEL_1003;
            x = v826;
            y = v827;
            z = v828;
            goto LABEL_758;
          case 412:
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v811 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_829;
            v832 = (QuestAfterAction_o *)*v187;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v832 )
              goto LABEL_1002;
            v814 = QuestAfterAction__GetMapComponent_object_(
                     v832,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v833);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v814, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v811 + 24) <= 1u )
              goto LABEL_1003;
            v834 = (QuestAfterAction_o *)*v187;
            updated = System_Int32__Parse(*(System_String_o **)(v811 + 40), 0LL);
            if ( !v834 )
              goto LABEL_1002;
            v817 = updated;
            v819 = 1;
            v818 = v834;
LABEL_744:
            v836 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v818, v819, v817, this, v816);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v835);
            if ( UnityEngine_Object__op_Equality(v836, 0LL, 0LL) )
              return;
            LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v836, 0LL);
            x = LocalPosition.fields.x;
            y = LocalPosition.fields.y;
            z = LocalPosition.fields.z;
            if ( !this->fields.IsMapModel )
              goto LABEL_757;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v837);
              byte_4B10F83 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v838 = **(_QWORD **)(updated + 184);
            if ( !v838 )
              goto LABEL_1002;
            updated = *(_QWORD *)(v838 + 264);
            if ( !updated )
              goto LABEL_1002;
            v1072.fields.x = x;
            v1072.fields.y = y;
            v1072.fields.z = z;
            v1073 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v1072, 0LL);
            x = v1073.fields.x;
            y = v1073.fields.y;
            z = v1073.fields.z;
LABEL_757:
            if ( *(_DWORD *)(v811 + 24) <= 2u )
              goto LABEL_1003;
LABEL_758:
            v839 = System_Single__Parse(*(System_String_o **)(v811 + 48), 0LL) * 0.001;
            if ( v839 >= 0.0 )
              v840 = v839;
            else
              v840 = 0.5;
            if ( *(_DWORD *)(v811 + 24) <= 3u )
              goto LABEL_1003;
            v843 = System_Int32__Parse(*(System_String_o **)(v811 + 56), 0LL);
            if ( *(int *)(v811 + 24) >= 5 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v811 + 64), 0LL);
              if ( (int)updated >= 1 )
              {
                if ( !v814 )
                  goto LABEL_1002;
                v1074.fields.x = x;
                v1074.fields.y = y;
                v1074.fields.z = z;
                MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v814, v1074, v840, v843, 0LL, 0LL);
                goto LABEL_18;
              }
            }
            v1001 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v841, v842);
            System_Action___ctor(v1001, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v814 )
              goto LABEL_1002;
            v1002 = (MapGimmickComponent_o *)v814;
            v1003 = x;
            v1004 = y;
            v1005 = z;
            v1006 = v840;
            v1007 = v843;
            v1008 = v1001;
            goto LABEL_993;
          default:
            if ( id != 500 )
              return;
            v549 = System_Int32__Parse(v196->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v547);
            if ( !byte_4B1301F )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v547, v548);
              byte_4B1301F = 1;
            }
            v550 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v547);
              v550 = TerminalPramsManager_TypeInfo;
            }
            v550->static_fields->_AfterActionFocusQuestId_k__BackingField = v549;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v547);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_1002;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    &entity,
                    v549,
                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_829;
            updated = (__int64)entity;
            if ( !entity )
              goto LABEL_1002;
            v551 = (QuestAfterAction_o *)*v187;
            updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v551 )
              goto LABEL_1002;
            v553 = QuestAfterAction__GetMapComponent_object_(
                     v551,
                     0,
                     updated,
                     this,
                     (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v552);
            updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v553, 0LL, 0LL);
            if ( (updated & 1) == 0 )
              goto LABEL_829;
            if ( !v553 )
              goto LABEL_1002;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v553, 0, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v554);
            if ( !byte_4B13020 )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v554, v555);
              byte_4B13020 = 1;
            }
            v556 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v554);
              v556 = TerminalPramsManager_TypeInfo;
            }
            v556->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
            goto LABEL_829;
        }
      }
      updated = (__int64)v196->fields.param;
      if ( !updated )
        goto LABEL_1002;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_1002;
      v269 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_829;
      v270 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(_DWORD *)(v269 + 24) <= 1u )
        goto LABEL_1003;
      v271 = v270;
      v272 = System_Single__Parse(*(System_String_o **)(v269 + 40), 0LL);
      if ( *(_DWORD *)(v269 + 24) <= 2u )
        goto LABEL_1003;
      v273 = v272;
      v274 = System_Single__Parse(*(System_String_o **)(v269 + 48), 0LL);
      if ( *(_DWORD *)(v269 + 24) <= 3u )
        goto LABEL_1003;
      v275 = v274;
      v276 = System_Single__Parse(*(System_String_o **)(v269 + 56), 0LL);
      if ( *(_DWORD *)(v269 + 24) <= 4u )
        goto LABEL_1003;
      v277 = v276;
      v279 = System_Int32__Parse(*(System_String_o **)(v269 + 64), 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v278);
        byte_4B10F83 = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v280 = **(_QWORD **)(updated + 184);
      if ( !v280 )
        goto LABEL_1002;
      updated = *(_QWORD *)(v280 + 264);
      if ( !updated )
        goto LABEL_1002;
      v1061.fields.y = v273;
      v1061.fields.z = v275;
      v281 = v277 * 0.001;
      v1061.fields.x = v271;
      *(UnityEngine_Vector3_o *)&v284 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                          (ScrTerminalMap_o *)updated,
                                          v1061,
                                          0LL);
      v287 = v284;
      v288 = v285;
      v289 = v286;
      if ( v196->fields.id != 352 || *(int *)(v269 + 24) < 6 )
      {
        if ( !*v187 )
          goto LABEL_1002;
        v290 = *(MapCamera_o **)(*v187 + 152);
        v291 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v282, v283);
        System_Action___ctor(
          v291,
          (Il2CppObject *)v178,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
          0LL);
        if ( !v290 )
          goto LABEL_1002;
        v292 = v290;
        v293 = v287;
        v294 = v288;
        v295 = v289;
        v296 = v281;
        v297 = v279;
        goto LABEL_934;
      }
      if ( !*v187 )
        goto LABEL_1002;
      v558 = *(MapCamera_o **)(*v187 + 152);
      *(_QWORD *)&v1054.fields.hasValue = &v1042;
      *(_QWORD *)&v1054.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v1042.fields.hasValue = 0LL;
      *(_QWORD *)&v1042.fields.value.fields.y = 0LL;
      System_Nullable_Vector3____ctor(v1054, *(UnityEngine_Vector3_o *)&v284, v282);
      if ( *(_DWORD *)(v269 + 24) <= 5u )
        goto LABEL_1003;
      v559 = System_Single__Parse(*(System_String_o **)(v269 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v559, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
      v563 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v560, v561, v562);
      System_Action___ctor(
        v563,
        (Il2CppObject *)v178,
        Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
        0LL);
      if ( !v558 )
        goto LABEL_1002;
      v1059 = v1042;
      v1052 = size;
      v564 = v558;
      v565 = v281;
      v566 = v279;
LABEL_975:
      MapCamera__StartAutoWork(v564, v565, v1059, v1052, v566, v563, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v245 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v180, v202, v203);
          System_Object___ctor((Il2CppObject *)v245, 0LL);
          if ( !v245 )
            goto LABEL_1002;
          *(_QWORD *)(v245 + 24) = v178;
          sub_1BCA784((PartyOrganizationUtility_o *)(v245 + 24), v178, v246, v247, v248, v249, v250, v251);
          v252 = *(_QWORD *)(v245 + 24);
          if ( !v252 )
            goto LABEL_1002;
          v253 = *(QuestAfterAction_o **)(v252 + 24);
          updated = System_Int32__Parse(v196->fields.param, 0LL);
          if ( !v253 )
            goto LABEL_1002;
          v254 = QuestAfterAction__GetMapComponent_object_(
                   v253,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v245 + 16) = v254;
          sub_1BCA784((PartyOrganizationUtility_o *)(v245 + 16), (int64_t)v254, v255, v256, v257, v258, v259, v260);
          v262 = *(UnityEngine_Object_o **)(v245 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v261);
          if ( UnityEngine_Object__op_Equality(v262, 0LL, 0LL) )
            return;
          v266 = *(SrcSpotBasePrefab_o **)(v245 + 16);
          v267 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v263, v264, v265);
          System_Action___ctor(
            v267,
            (Il2CppObject *)v245,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v266 )
            goto LABEL_1002;
          v268 = 2;
          goto LABEL_396;
        case 'e':
          v470 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v180, v202, v203);
          System_Object___ctor((Il2CppObject *)v470, 0LL);
          if ( !v470 )
            goto LABEL_1002;
          *(_QWORD *)(v470 + 24) = v178;
          sub_1BCA784((PartyOrganizationUtility_o *)(v470 + 24), v178, v471, v472, v473, v474, v475, v476);
          v477 = *(_QWORD *)(v470 + 24);
          if ( !v477 )
            goto LABEL_1002;
          v478 = *(QuestAfterAction_o **)(v477 + 24);
          updated = System_Int32__Parse(v196->fields.param, 0LL);
          if ( !v478 )
            goto LABEL_1002;
          v479 = QuestAfterAction__GetMapComponent_object_(
                   v478,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v470 + 16) = v479;
          sub_1BCA784((PartyOrganizationUtility_o *)(v470 + 16), (int64_t)v479, v480, v481, v482, v483, v484, v485);
          v487 = *(UnityEngine_Object_o **)(v470 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v486);
          if ( UnityEngine_Object__op_Equality(v487, 0LL, 0LL) )
            return;
          v266 = *(SrcSpotBasePrefab_o **)(v470 + 16);
          v267 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v488, v489, v490);
          System_Action___ctor(
            v267,
            (Il2CppObject *)v470,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v266 )
            goto LABEL_1002;
          v268 = 3;
LABEL_396:
          SrcSpotBasePrefab__SetState(v266, v268, v267, 0LL);
          return;
        case 'f':
          v491 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v180, v202, v203);
          System_Object___ctor((Il2CppObject *)v491, 0LL);
          if ( !v491 )
            goto LABEL_1002;
          *(_QWORD *)(v491 + 24) = v178;
          v498 = v491 + 24;
          sub_1BCA784((PartyOrganizationUtility_o *)(v491 + 24), v178, v492, v493, v494, v495, v496, v497);
          if ( !*(_QWORD *)(v491 + 24) )
            goto LABEL_1002;
          v499 = *(QuestAfterAction_o **)(*(_QWORD *)(v491 + 24) + 24LL);
          updated = System_Int32__Parse(v196->fields.param, 0LL);
          if ( !v499 )
            goto LABEL_1002;
          v500 = QuestAfterAction__GetMapComponent_object_(
                   v499,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v491 + 16) = v500;
          v501 = (int64_t *)(v491 + 16);
          sub_1BCA784((PartyOrganizationUtility_o *)(v491 + 16), (int64_t)v500, v502, v503, v504, v505, v506, v507);
          v509 = *(UnityEngine_Object_o **)(v491 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v508);
          if ( UnityEngine_Object__op_Equality(v509, 0LL, 0LL) )
            return;
          v513 = *(SrcSpotBasePrefab_o **)(v491 + 16);
          v514 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v510, v511, v512);
          System_Action___ctor(
            v514,
            (Il2CppObject *)v491,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v513 )
            goto LABEL_1002;
          SrcSpotBasePrefab__SetState(v513, 4, v514, 0LL);
          if ( !*(_QWORD *)v498 )
            goto LABEL_1002;
          updated = *(_QWORD *)(*(_QWORD *)v498 + 24LL);
          if ( !updated )
            goto LABEL_1002;
          v521 = *v501;
          *(_QWORD *)(updated + 184) = *v501;
          v522 = (PartyOrganizationUtility_o *)(updated + 184);
          goto LABEL_418;
        case 'g':
          updated = (__int64)v196->fields.param;
          if ( !updated )
            goto LABEL_1002;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1002;
          v523 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_829;
          v524 = (QuestAfterAction_o *)*v187;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v524 )
            goto LABEL_1002;
          v526 = QuestAfterAction__GetMapComponent_object_(
                   v524,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v525);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v526, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v523 + 24) <= 1u )
            goto LABEL_1003;
          updated = System_Int32__Parse(*(System_String_o **)(v523 + 40), 0LL);
          if ( !v526 )
            goto LABEL_1002;
          LODWORD(v526[14].klass) = updated;
          v529 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v527, v528);
          System_Action___ctor(v529, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v526, 5, v529, 0LL);
          updated = *v187;
          if ( !*v187 )
            goto LABEL_1002;
          *(_QWORD *)(updated + 184) = v526;
          v522 = (PartyOrganizationUtility_o *)(updated + 184);
          v521 = (int64_t)v526;
LABEL_418:
          sub_1BCA784(v522, v521, v515, v516, v517, v518, v519, v520);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v530 = (QuestAfterAction_o *)*v187;
          updated = System_Int32__Parse(v196->fields.param, 0LL);
          if ( !v530 )
            goto LABEL_1002;
          v532 = QuestAfterAction__GetMapComponent_object_(
                   v530,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v531);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v532, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v532 )
            goto LABEL_1002;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v532, 0, 0LL);
          monitor = v532[14].monitor;
          if ( !monitor )
            goto LABEL_1002;
          monitor[5] = 0;
          v534 = (SrcSpotBasePrefab_o *)v532;
          v535 = 0;
          goto LABEL_441;
        case 'o':
          v536 = (QuestAfterAction_o *)*v187;
          updated = System_Int32__Parse(v196->fields.param, 0LL);
          if ( !v536 )
            goto LABEL_1002;
          v538 = QuestAfterAction__GetMapComponent_object_(
                   v536,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v537);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v538, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v538 )
            goto LABEL_1002;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v538, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v538, 0, 0LL);
          v539 = v538[14].monitor;
          if ( !v539 )
            goto LABEL_1002;
          v539[5] = 2;
          goto LABEL_440;
        case 'p':
          v540 = (QuestAfterAction_o *)*v187;
          updated = System_Int32__Parse(v196->fields.param, 0LL);
          if ( !v540 )
            goto LABEL_1002;
          v538 = QuestAfterAction__GetMapComponent_object_(
                   v540,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v541);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v538, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v538 )
            goto LABEL_1002;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v538, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v538, 1, 0LL);
          v542 = v538[14].monitor;
          if ( !v542 )
            goto LABEL_1002;
          v542[5] = 1;
LABEL_440:
          v535 = 1;
          v534 = (SrcSpotBasePrefab_o *)v538;
LABEL_441:
          SrcSpotBasePrefab__SetTouchType(v534, v535, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v196->fields.param;
          if ( !updated )
            goto LABEL_1002;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1002;
          v543 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_829;
          v544 = (QuestAfterAction_o *)*v187;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v544 )
            goto LABEL_1002;
          v546 = QuestAfterAction__GetMapComponent_object_(
                   v544,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v545);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v546, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v543 + 24) <= 1u )
            goto LABEL_1003;
          updated = System_Int32__Parse(*(System_String_o **)(v543 + 40), 0LL);
          if ( !v546 )
            goto LABEL_1002;
          LODWORD(v546[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v546, 1, 0LL);
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
        updated = (__int64)v196->fields.param;
        if ( !updated )
          goto LABEL_1002;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1002;
        v226 = *(_QWORD *)(updated + 24);
        v227 = updated;
        if ( (int)v226 <= 0 )
          goto LABEL_829;
        if ( (int)v226 > 2 )
        {
          v650 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v226 = *(_QWORD *)(v227 + 24);
          v228 = v650 * 0.001;
        }
        else
        {
          v228 = 0.5;
        }
        sec = v228;
        if ( (int)v226 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v227 + 40), 0LL);
          v226 = *(_QWORD *)(v227 + 24);
          v450 = updated;
        }
        else
        {
          v450 = 15;
        }
        if ( !(_DWORD)v226 )
          goto LABEL_1003;
        v653 = (QuestAfterAction_o *)*v187;
        updated = System_Int32__Parse(*(System_String_o **)(v227 + 32), 0LL);
        if ( !v653 )
          goto LABEL_1002;
        v656 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v653, 0, updated, this, v654);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v655);
        if ( UnityEngine_Object__op_Equality(v656, 0LL, 0LL) )
          return;
        v1063 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v656, 0LL);
        v658 = v1063.fields.x;
        v659 = v1063.fields.y;
        v660 = v1063.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_577;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v657);
          byte_4B10F83 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v661 = **(_QWORD **)(updated + 184);
        if ( !v661 )
          goto LABEL_1002;
        updated = *(_QWORD *)(v661 + 264);
        if ( !updated )
          goto LABEL_1002;
        v1064.fields.x = v658;
        v1064.fields.y = v659;
        v1064.fields.z = v660;
        v1065 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v1064, 0LL);
        v658 = v1065.fields.x;
        v659 = v1065.fields.y;
        v660 = v1065.fields.z;
LABEL_577:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v180);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_909;
        if ( !*(_DWORD *)(v227 + 24) )
          goto LABEL_1003;
        v664 = *(System_String_o **)(v227 + 32);
        updated = System_String__op_Equality(v664, (System_String_o *)StringLiteral_1399/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v659 = v659 + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v664, (System_String_o *)StringLiteral_1474/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            v659 = v659 + -50.0;
        }
LABEL_909:
        v683 = *(_DWORD *)(v227 + 24);
        if ( v196->fields.id == 305 )
        {
LABEL_910:
          if ( v683 < 4 )
            goto LABEL_911;
          if ( v683 == 4 )
          {
            if ( !*v187 )
              goto LABEL_1002;
            v990 = *(MapCamera_o **)(*v187 + 152);
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v227 + 64), 0LL);
            if ( !*v187 )
              goto LABEL_1002;
            v990 = *(MapCamera_o **)(*v187 + 152);
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v1055.fields.hasValue = &v1042;
              v993 = v658;
              v994 = v659;
              *(_QWORD *)&v1055.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v995 = v660;
              v1042 = (System_Nullable_Vector3__o)0LL;
LABEL_966:
              System_Nullable_Vector3____ctor(v1055, *(UnityEngine_Vector3_o *)&v993, v662);
              if ( *(_DWORD *)(v227 + 24) <= 3u )
                goto LABEL_1003;
              v1011 = System_Single__Parse(*(System_String_o **)(v227 + 56), 0LL);
              v1048 = (System_Nullable_float__o)&size;
              size = 0LL;
              System_Nullable_float____ctor(
                v1048,
                v1011,
                (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
              if ( !v990 )
                goto LABEL_1002;
              v1060 = v1042;
              v1053 = size;
              v1012 = sec;
              v1013 = v990;
              goto LABEL_969;
            }
          }
          *(_QWORD *)&v1056.fields.hasValue = &v1042;
          v996 = v658;
          v997 = v659;
          *(_QWORD *)&v1056.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v998 = v660;
          v1042 = (System_Nullable_Vector3__o)0LL;
LABEL_971:
          System_Nullable_Vector3____ctor(v1056, *(UnityEngine_Vector3_o *)&v996, v662);
          if ( *(_DWORD *)(v227 + 24) <= 3u )
            goto LABEL_1003;
          v1014 = System_Single__Parse(*(System_String_o **)(v227 + 56), 0LL);
          v1049 = (System_Nullable_float__o)&size;
          size = 0LL;
          System_Nullable_float____ctor(v1049, v1014, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
          v563 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v1015, v1016, v1017);
          System_Action___ctor(v563, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v990 )
            goto LABEL_1002;
          v1059 = v1042;
          v1052 = size;
          v565 = sec;
          v564 = v990;
          goto LABEL_974;
        }
LABEL_618:
        if ( v683 < 4 )
        {
LABEL_911:
          if ( !*v187 )
            goto LABEL_1002;
          v685 = *(MapCamera_o **)(*v187 + 152);
          goto LABEL_913;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v227 + 56), 0LL);
        v684 = *v187;
        if ( !*v187 )
          goto LABEL_1002;
        v685 = *(MapCamera_o **)(v684 + 152);
        if ( (int)updated < 1 )
        {
LABEL_913:
          v291 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v662, v663);
          System_Action___ctor(v291, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v685 )
            goto LABEL_1002;
          v292 = v685;
          v293 = v658;
          v294 = v659;
          v295 = v660;
LABEL_932:
          v296 = sec;
LABEL_933:
          v297 = v450;
LABEL_934:
          MapCamera__StartAutoMove(v292, *(UnityEngine_Vector3_o *)&v293, v296, v297, v291, 0LL);
          return;
        }
        if ( !v685 )
          goto LABEL_1002;
        v686 = *(MapCamera_o **)(v684 + 152);
        v687 = v658;
        v688 = v659;
        v689 = v660;
        goto LABEL_943;
      case 301:
      case 306:
        updated = (__int64)v196->fields.param;
        if ( !updated )
          goto LABEL_1002;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1002;
        v441 = *(_QWORD *)(updated + 24);
        v227 = updated;
        if ( (int)v441 <= 0 )
          goto LABEL_829;
        if ( (int)v441 > 2 )
        {
          v651 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v441 = *(_QWORD *)(v227 + 24);
          v442 = v651 * 0.001;
        }
        else
        {
          v442 = 0.5;
        }
        sec = v442;
        if ( (int)v441 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v227 + 40), 0LL);
          v441 = *(_QWORD *)(v227 + 24);
          v450 = updated;
        }
        else
        {
          v450 = 15;
        }
        if ( !(_DWORD)v441 )
          goto LABEL_1003;
        v665 = (QuestAfterAction_o *)*v187;
        updated = System_Int32__Parse(*(System_String_o **)(v227 + 32), 0LL);
        if ( !v665 )
          goto LABEL_1002;
        v668 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v665, 1, updated, this, v666);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v667);
        updated = UnityEngine_Object__op_Equality(v668, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v668 )
            goto LABEL_1002;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v668,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1002;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v670 = Position.fields.x;
          v671 = Position.fields.y;
          v672 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v669);
            byte_4B10F83 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v673 = **(_QWORD **)(updated + 184);
          if ( !v673 )
            goto LABEL_1002;
          updated = *(_QWORD *)(v673 + 264);
          if ( !updated )
            goto LABEL_1002;
          v1067.fields.x = v670;
          v1067.fields.y = v671;
          v1067.fields.z = v672;
          *(UnityEngine_Vector3_o *)&v675 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v1067,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v675 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v668,
                                              0LL);
        }
        v941 = v675;
        v942 = v676;
        v943 = v677;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v674);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_921;
        if ( !*(_DWORD *)(v227 + 24) )
          goto LABEL_1003;
        v945 = *(System_String_o **)(v227 + 32);
        updated = System_String__op_Equality(v945, (System_String_o *)StringLiteral_1399/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v942 = v942 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v945, (System_String_o *)StringLiteral_1475/*"30102"*/, 0LL);
          if ( (updated & 1) != 0 )
            v942 = v942 + 45.0;
        }
LABEL_921:
        v991 = *(_DWORD *)(v227 + 24);
        if ( v196->fields.id == 306 )
        {
          if ( v991 >= 4 )
          {
            if ( v991 == 4 )
            {
              if ( !*v187 )
                goto LABEL_1002;
              v990 = *(MapCamera_o **)(*v187 + 152);
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v227 + 64), 0LL);
              if ( !*v187 )
                goto LABEL_1002;
              v990 = *(MapCamera_o **)(*v187 + 152);
              if ( (int)updated >= 1 )
              {
                v1042 = (System_Nullable_Vector3__o)0LL;
                *(_QWORD *)&v1055.fields.hasValue = &v1042;
                v993 = v941;
                *(_QWORD *)&v1055.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v994 = v942;
                v995 = v943;
                goto LABEL_966;
              }
            }
            v1042 = (System_Nullable_Vector3__o)0LL;
            *(_QWORD *)&v1056.fields.hasValue = &v1042;
            v996 = v941;
            *(_QWORD *)&v1056.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v997 = v942;
            v998 = v943;
            goto LABEL_971;
          }
          goto LABEL_928;
        }
        if ( v991 < 4 )
        {
LABEL_928:
          if ( !*v187 )
            goto LABEL_1002;
          v992 = *(MapCamera_o **)(*v187 + 152);
LABEL_930:
          v291 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v662, v944);
          System_Action___ctor(v291, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v992 )
            goto LABEL_1002;
          v292 = v992;
          v293 = v941;
          v294 = v942;
          v295 = v943;
          goto LABEL_932;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v227 + 56), 0LL);
        v999 = *v187;
        if ( !*v187 )
          goto LABEL_1002;
        v992 = *(MapCamera_o **)(v999 + 152);
        if ( (int)updated < 1 )
          goto LABEL_930;
        if ( !v992 )
          goto LABEL_1002;
        v686 = *(MapCamera_o **)(v999 + 152);
        v687 = v941;
        v688 = v942;
        v689 = v943;
LABEL_943:
        v1000 = sec;
        goto LABEL_944;
      case 302:
      case 307:
        updated = (__int64)v196->fields.param;
        if ( !updated )
          goto LABEL_1002;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1002;
        v443 = *(_QWORD *)(updated + 24);
        v227 = updated;
        if ( (int)v443 <= 0 )
          goto LABEL_829;
        if ( (int)v443 > 2 )
        {
          v652 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v443 = *(_QWORD *)(v227 + 24);
          v444 = v652 * 0.001;
        }
        else
        {
          v444 = 0.5;
        }
        sec = v444;
        if ( (int)v443 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v227 + 40), 0LL);
          v443 = *(_QWORD *)(v227 + 24);
          v450 = updated;
        }
        else
        {
          v450 = 15;
        }
        if ( !(_DWORD)v443 )
          goto LABEL_1003;
        v678 = (QuestAfterAction_o *)*v187;
        updated = System_Int32__Parse(*(System_String_o **)(v227 + 32), 0LL);
        if ( !v678 )
          goto LABEL_1002;
        v681 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v678, 2, updated, this, v679);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v680);
        if ( UnityEngine_Object__op_Equality(v681, 0LL, 0LL) )
          return;
        v1068 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v681, 0LL);
        v658 = v1068.fields.x;
        v659 = v1068.fields.y;
        v660 = v1068.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_617;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v662);
          byte_4B10F83 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v682 = **(_QWORD **)(updated + 184);
        if ( !v682 )
          goto LABEL_1002;
        updated = *(_QWORD *)(v682 + 264);
        if ( !updated )
          goto LABEL_1002;
        v1069.fields.x = v658;
        v1069.fields.y = v659;
        v1069.fields.z = v660;
        v1070 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v1069, 0LL);
        v658 = v1070.fields.x;
        v659 = v1070.fields.y;
        v660 = v1070.fields.z;
LABEL_617:
        v683 = *(_DWORD *)(v227 + 24);
        if ( v196->fields.id != 307 )
          goto LABEL_618;
        goto LABEL_910;
      case 303:
      case 308:
        updated = (__int64)v196->fields.param;
        if ( !updated )
          goto LABEL_1002;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1002;
        v446 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_829;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v180);
        if ( !byte_4B1301E )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v180, v445);
          byte_4B1301E = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v180);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          goto LABEL_829;
        if ( *(_DWORD *)(v446 + 24) <= 2u )
          goto LABEL_1003;
        v447 = System_Single__Parse(*(System_String_o **)(v446 + 48), 0LL) * 0.001;
        v448 = v447 >= 0.0 ? v447 : 0.5;
        if ( *(_DWORD *)(v446 + 24) <= 3u )
          goto LABEL_1003;
        v450 = System_Int32__Parse(*(System_String_o **)(v446 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v449);
          byte_4B10F83 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v451 = **(_QWORD **)(updated + 184);
        if ( !v451 )
          goto LABEL_1002;
        if ( !*(_DWORD *)(v446 + 24) )
          goto LABEL_1003;
        v452 = *(ScrTerminalMap_o **)(v451 + 264);
        v453 = System_Single__Parse(*(System_String_o **)(v446 + 32), 0LL);
        if ( *(_DWORD *)(v446 + 24) <= 1u )
          goto LABEL_1003;
        v454 = v453;
        v455 = System_Single__Parse(*(System_String_o **)(v446 + 40), 0LL);
        if ( !v452 )
          goto LABEL_1002;
        v1062 = ScrTerminalMap__LocalPosFromCoord(v452, v454, v455, 0.0, 0.0, 0LL);
        v458 = *(_DWORD *)(v446 + 24);
        v459 = v1062.fields.x;
        v460 = v1062.fields.y;
        v461 = v1062.fields.z;
        if ( v196->fields.id == 308 )
        {
          if ( v458 >= 5 )
          {
            if ( v458 == 5 )
            {
              if ( !*v187 )
                goto LABEL_1002;
              v462 = *(MapCamera_o **)(*v187 + 152);
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v446 + 72), 0LL);
              if ( !*v187 )
                goto LABEL_1002;
              v462 = *(MapCamera_o **)(*v187 + 152);
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v1057.fields.hasValue = &v1042;
                v1076.fields.x = v459;
                v1076.fields.y = v460;
                *(_QWORD *)&v1057.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v1076.fields.z = v461;
                v1042 = (System_Nullable_Vector3__o)0LL;
                System_Nullable_Vector3____ctor(v1057, v1076, v456);
                if ( *(_DWORD *)(v446 + 24) <= 4u )
                  goto LABEL_1003;
                v1034 = System_Single__Parse(*(System_String_o **)(v446 + 64), 0LL);
                v1050 = (System_Nullable_float__o)&size;
                size = 0LL;
                System_Nullable_float____ctor(
                  v1050,
                  v1034,
                  (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
                if ( !v462 )
                  goto LABEL_1002;
                v1060 = v1042;
                v1053 = size;
                v1013 = v462;
                v1012 = v448;
LABEL_969:
                MapCamera__StartAutoWork(v1013, v1012, v1060, v1053, v450, 0LL, 0LL);
                goto LABEL_829;
              }
            }
            *(_QWORD *)&v1058.fields.hasValue = &v1042;
            v1077.fields.x = v459;
            v1077.fields.y = v460;
            *(_QWORD *)&v1058.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v1077.fields.z = v461;
            v1042 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v1058, v1077, v456);
            if ( *(_DWORD *)(v446 + 24) <= 4u )
              goto LABEL_1003;
            v1035 = System_Single__Parse(*(System_String_o **)(v446 + 64), 0LL);
            v1051 = (System_Nullable_float__o)&size;
            size = 0LL;
            System_Nullable_float____ctor(
              v1051,
              v1035,
              (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
            v563 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v1036, v1037, v1038);
            System_Action___ctor(v563, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v462 )
              goto LABEL_1002;
            v1059 = v1042;
            v1052 = size;
            v564 = v462;
            v565 = v448;
LABEL_974:
            v566 = v450;
            goto LABEL_975;
          }
        }
        else if ( v458 >= 5 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v446 + 64), 0LL);
          v1010 = *v187;
          if ( !*v187 )
            goto LABEL_1002;
          v989 = *(MapCamera_o **)(v1010 + 152);
          if ( (int)updated >= 1 )
          {
            if ( !v989 )
              goto LABEL_1002;
            v686 = *(MapCamera_o **)(v1010 + 152);
            v687 = v459;
            v688 = v460;
            v689 = v461;
            v1000 = v448;
LABEL_944:
            MapCamera__StartAutoMove(v686, *(UnityEngine_Vector3_o *)&v687, v1000, v450, 0LL, 0LL);
            goto LABEL_829;
          }
LABEL_905:
          v291 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v456, v457);
          System_Action___ctor(v291, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v989 )
            goto LABEL_1002;
          v292 = v989;
          v293 = v459;
          v294 = v460;
          v295 = v461;
          v296 = v448;
          goto LABEL_933;
        }
        if ( !*v187 )
          goto LABEL_1002;
        v989 = *(MapCamera_o **)(*v187 + 152);
        goto LABEL_905;
      case 304:
        updated = (__int64)v196->fields.param;
        if ( !updated )
          goto LABEL_1002;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1002;
        v567 = *(_DWORD *)(updated + 24);
        v568 = updated;
        if ( v567 <= 1 )
          goto LABEL_829;
        v569 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v568 + 24) <= 1u )
          goto LABEL_1003;
        v570 = v569;
        v573 = System_Single__Parse(*(System_String_o **)(v568 + 40), 0LL);
        if ( !*v187 )
          goto LABEL_1002;
        v574 = *(MapCamera_o **)(*v187 + 152);
        v575 = v573 * 0.001;
        if ( v575 >= 0.0 )
          v576 = v575;
        else
          v576 = 0.5;
        if ( v567 < 3 )
        {
          v577 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v568 + 24) <= 2u )
            goto LABEL_1003;
          v577 = System_Int32__Parse(*(System_String_o **)(v568 + 48), 0LL);
        }
        v940 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v571, v572);
        System_Action___ctor(
          v940,
          (Il2CppObject *)v178,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0LL);
        if ( !v574 )
          goto LABEL_1002;
        MapCamera__StartAutoZoom(v574, v570, v576, v577, v940, 0LL);
        return;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v298 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v180, v202, v203);
              System_Object___ctor((Il2CppObject *)v298, 0LL);
              if ( !v298 )
                goto LABEL_1002;
              *(_QWORD *)(v298 + 24) = v178;
              sub_1BCA784((PartyOrganizationUtility_o *)(v298 + 24), v178, v299, v300, v301, v302, v303, v304);
              v305 = *(_QWORD *)(v298 + 24);
              if ( !v305 )
                goto LABEL_1002;
              v306 = *(QuestAfterAction_o **)(v305 + 24);
              updated = System_Int32__Parse(v196->fields.param, 0LL);
              if ( !v306 )
                goto LABEL_1002;
              v307 = QuestAfterAction__GetMapComponent_object_(
                       v306,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v298 + 16) = v307;
              sub_1BCA784((PartyOrganizationUtility_o *)(v298 + 16), (int64_t)v307, v308, v309, v310, v311, v312, v313);
              v315 = *(UnityEngine_Object_o **)(v298 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v314);
              if ( !UnityEngine_Object__op_Equality(v315, 0LL, 0LL) )
              {
                v319 = *(ModelLineComponent_o **)(v298 + 16);
                v320 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v316, v317, v318);
                System_Action___ctor(
                  v320,
                  (Il2CppObject *)v298,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v319 )
                  goto LABEL_1002;
                v322 = 2;
                goto LABEL_512;
              }
            }
            else
            {
              v857 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v180, v202, v203);
              System_Object___ctor((Il2CppObject *)v857, 0LL);
              if ( !v857 )
                goto LABEL_1002;
              *(_QWORD *)(v857 + 24) = v178;
              sub_1BCA784((PartyOrganizationUtility_o *)(v857 + 24), v178, v858, v859, v860, v861, v862, v863);
              v864 = *(_QWORD *)(v857 + 24);
              if ( !v864 )
                goto LABEL_1002;
              v865 = *(QuestAfterAction_o **)(v864 + 24);
              updated = System_Int32__Parse(v196->fields.param, 0LL);
              if ( !v865 )
                goto LABEL_1002;
              v866 = QuestAfterAction__GetMapComponent_object_(
                       v865,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v857 + 16) = v866;
              sub_1BCA784((PartyOrganizationUtility_o *)(v857 + 16), (int64_t)v866, v867, v868, v869, v870, v871, v872);
              v874 = *(UnityEngine_Object_o **)(v857 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v873);
              if ( !UnityEngine_Object__op_Equality(v874, 0LL, 0LL) )
              {
                v878 = *(srcLineSprite_o **)(v857 + 16);
                v879 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v875, v876, v877);
                System_Action___ctor(
                  v879,
                  (Il2CppObject *)v857,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v878 )
                  goto LABEL_1002;
                v880 = 2;
                goto LABEL_798;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v578 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v180, v202, v203);
              System_Object___ctor((Il2CppObject *)v578, 0LL);
              if ( !v578 )
                goto LABEL_1002;
              *(_QWORD *)(v578 + 24) = v178;
              sub_1BCA784((PartyOrganizationUtility_o *)(v578 + 24), v178, v579, v580, v581, v582, v583, v584);
              v585 = *(_QWORD *)(v578 + 24);
              if ( !v585 )
                goto LABEL_1002;
              v586 = *(QuestAfterAction_o **)(v585 + 24);
              updated = System_Int32__Parse(v196->fields.param, 0LL);
              if ( !v586 )
                goto LABEL_1002;
              v587 = QuestAfterAction__GetMapComponent_object_(
                       v586,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v578 + 16) = v587;
              sub_1BCA784((PartyOrganizationUtility_o *)(v578 + 16), (int64_t)v587, v588, v589, v590, v591, v592, v593);
              v595 = *(UnityEngine_Object_o **)(v578 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v594);
              if ( !UnityEngine_Object__op_Equality(v595, 0LL, 0LL) )
              {
                v319 = *(ModelLineComponent_o **)(v578 + 16);
                v320 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v596, v597, v598);
                System_Action___ctor(
                  v320,
                  (Il2CppObject *)v578,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v319 )
                  goto LABEL_1002;
                v322 = 3;
                goto LABEL_512;
              }
            }
            else
            {
              v881 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v180, v202, v203);
              System_Object___ctor((Il2CppObject *)v881, 0LL);
              if ( !v881 )
                goto LABEL_1002;
              *(_QWORD *)(v881 + 24) = v178;
              sub_1BCA784((PartyOrganizationUtility_o *)(v881 + 24), v178, v882, v883, v884, v885, v886, v887);
              v888 = *(_QWORD *)(v881 + 24);
              if ( !v888 )
                goto LABEL_1002;
              v889 = *(QuestAfterAction_o **)(v888 + 24);
              updated = System_Int32__Parse(v196->fields.param, 0LL);
              if ( !v889 )
                goto LABEL_1002;
              v890 = QuestAfterAction__GetMapComponent_object_(
                       v889,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v881 + 16) = v890;
              sub_1BCA784((PartyOrganizationUtility_o *)(v881 + 16), (int64_t)v890, v891, v892, v893, v894, v895, v896);
              v898 = *(UnityEngine_Object_o **)(v881 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v897);
              if ( !UnityEngine_Object__op_Equality(v898, 0LL, 0LL) )
              {
                v878 = *(srcLineSprite_o **)(v881 + 16);
                v879 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v899, v900, v901);
                System_Action___ctor(
                  v879,
                  (Il2CppObject *)v881,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v878 )
                  goto LABEL_1002;
                v880 = 3;
                goto LABEL_798;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v599 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v180, v202, v203);
              System_Object___ctor((Il2CppObject *)v599, 0LL);
              if ( !v599 )
                goto LABEL_1002;
              *(_QWORD *)(v599 + 24) = v178;
              sub_1BCA784((PartyOrganizationUtility_o *)(v599 + 24), v178, v600, v601, v602, v603, v604, v605);
              v606 = *(_QWORD *)(v599 + 24);
              if ( !v606 )
                goto LABEL_1002;
              v607 = *(QuestAfterAction_o **)(v606 + 24);
              updated = System_Int32__Parse(v196->fields.param, 0LL);
              if ( !v607 )
                goto LABEL_1002;
              v608 = QuestAfterAction__GetMapComponent_object_(
                       v607,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v599 + 16) = v608;
              sub_1BCA784((PartyOrganizationUtility_o *)(v599 + 16), (int64_t)v608, v609, v610, v611, v612, v613, v614);
              v616 = *(UnityEngine_Object_o **)(v599 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v615);
              if ( !UnityEngine_Object__op_Equality(v616, 0LL, 0LL) )
              {
                v319 = *(ModelLineComponent_o **)(v599 + 16);
                v320 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v617, v618, v619);
                System_Action___ctor(
                  v320,
                  (Il2CppObject *)v599,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v319 )
                  goto LABEL_1002;
                v322 = 4;
LABEL_512:
                ModelLineComponent__SetState(v319, v322, v320, v321);
              }
            }
            else
            {
              v902 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v180, v202, v203);
              System_Object___ctor((Il2CppObject *)v902, 0LL);
              if ( !v902 )
                goto LABEL_1002;
              *(_QWORD *)(v902 + 24) = v178;
              sub_1BCA784((PartyOrganizationUtility_o *)(v902 + 24), v178, v903, v904, v905, v906, v907, v908);
              v909 = *(_QWORD *)(v902 + 24);
              if ( !v909 )
                goto LABEL_1002;
              v910 = *(QuestAfterAction_o **)(v909 + 24);
              updated = System_Int32__Parse(v196->fields.param, 0LL);
              if ( !v910 )
                goto LABEL_1002;
              v911 = QuestAfterAction__GetMapComponent_object_(
                       v910,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v902 + 16) = v911;
              sub_1BCA784((PartyOrganizationUtility_o *)(v902 + 16), (int64_t)v911, v912, v913, v914, v915, v916, v917);
              v919 = *(UnityEngine_Object_o **)(v902 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v918);
              if ( !UnityEngine_Object__op_Equality(v919, 0LL, 0LL) )
              {
                v878 = *(srcLineSprite_o **)(v902 + 16);
                v879 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v920, v921, v922);
                System_Action___ctor(
                  v879,
                  (Il2CppObject *)v902,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v878 )
                  goto LABEL_1002;
                v880 = 4;
LABEL_798:
                srcLineSprite__SetState(v878, v880, v879, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v621 = (QuestAfterAction_o *)*v187;
            updated = System_Int32__Parse(v196->fields.param, 0LL);
            if ( !v621 )
              goto LABEL_1002;
            if ( IsMapModel )
            {
              v623 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v621,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v622);
              updated = UnityEngine_Object__op_Equality(v623, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v623 )
                goto LABEL_1002;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34421684((ModelLineComponent_o *)v623, 0, 0.0, v624);
              v625 = v623[3].klass;
              if ( !v625 )
                goto LABEL_1002;
            }
            else
            {
              v924 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v621,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v923);
              updated = UnityEngine_Object__op_Equality(v924, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v924 )
                goto LABEL_1002;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v924, 0, 0LL);
              v625 = v924[5].monitor;
              if ( !v625 )
                goto LABEL_1002;
            }
            goto LABEL_872;
          case 204:
            v626 = this->fields.IsMapModel;
            v627 = (QuestAfterAction_o *)*v187;
            updated = System_Int32__Parse(v196->fields.param, 0LL);
            if ( !v627 )
              goto LABEL_1002;
            if ( v626 )
            {
              v629 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v627,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v628);
              updated = UnityEngine_Object__op_Equality(v629, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v629 )
                goto LABEL_1002;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34421684((ModelLineComponent_o *)v629, 1, 0.0, v630);
              ModelLineComponent__SetQuestAfterActionColorAnim_34422160((ModelLineComponent_o *)v629, 0, 0.0, v631);
              v632 = v629[3].klass;
              if ( !v632 )
                goto LABEL_1002;
            }
            else
            {
              v926 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v627,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v925);
              updated = UnityEngine_Object__op_Equality(v926, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v926 )
                goto LABEL_1002;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v926, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v926, 0, 0LL);
              v632 = v926[5].monitor;
              if ( !v632 )
                goto LABEL_1002;
            }
            v927 = 2;
            goto LABEL_817;
          case 205:
            v633 = this->fields.IsMapModel;
            v634 = (QuestAfterAction_o *)*v187;
            updated = System_Int32__Parse(v196->fields.param, 0LL);
            if ( !v634 )
              goto LABEL_1002;
            if ( v633 )
            {
              v636 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v634,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v635);
              updated = UnityEngine_Object__op_Equality(v636, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v636 )
                goto LABEL_1002;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34421684((ModelLineComponent_o *)v636, 1, 0.0, v637);
              ModelLineComponent__SetQuestAfterActionColorAnim_34422160((ModelLineComponent_o *)v636, 1, 0.0, v638);
              v632 = v636[3].klass;
              if ( !v632 )
                goto LABEL_1002;
            }
            else
            {
              v929 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v634,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2FA3C68 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v928);
              updated = UnityEngine_Object__op_Equality(v929, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v929 )
                goto LABEL_1002;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v929, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v929, 1, 0LL);
              v632 = v929[5].monitor;
              if ( !v632 )
                goto LABEL_1002;
            }
            v927 = 1;
LABEL_817:
            v632[4] = v927;
            goto LABEL_18;
          default:
            if ( id != 350 )
              return;
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v463 = updated;
            if ( *(int *)(updated + 24) <= 0 )
              goto LABEL_829;
            v464 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v464 < 1 )
              goto LABEL_829;
            v467 = v464;
            v468 = 0.5;
            if ( *(int *)(v463 + 24) > 1 )
            {
              v469 = System_Int32__Parse(*(System_String_o **)(v463 + 40), 0LL);
              if ( *(int *)(v463 + 24) >= 3 )
                v468 = System_Single__Parse(*(System_String_o **)(v463 + 48), 0LL) * 0.001;
            }
            else
            {
              v469 = 15;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v465);
              byte_4B10F83 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v986 = **(_QWORD **)(updated + 184);
            if ( !v986 )
              goto LABEL_1002;
            v987 = *(ScrTerminalMap_o **)(v986 + 264);
            v988 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v465, v466);
            System_Action___ctor(
              v988,
              (Il2CppObject *)v178,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
              0LL);
            if ( !v987 )
              goto LABEL_1002;
            ScrTerminalMap__RequestMapMove_35169280(v987, v467, v468, v469, v988, 0LL);
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
          v217 = (System_String_o *)StringLiteral_1/*""*/;
          v219 = System_String__Concat_62401220((System_String_o *)StringLiteral_10959/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v196->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v218);
          v220 = LocalizationManager__Get(v219, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v225 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v222, v223, v224);
          System_Action___ctor(
            v225,
            (Il2CppObject *)v178,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__28__,
            0LL);
          if ( !Instance )
            goto LABEL_1002;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v217,
            v220,
            v225,
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
          v375 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1BCA888(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1002;
          v382 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v383 = StringLiteral_88/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_88/*"\r\n"*/;
          sub_1BCA784((PartyOrganizationUtility_o *)(updated + 32), v383, v376, v377, v378, v379, v380, v381);
          updated = (__int64)v196->fields.param;
          if ( !updated )
            goto LABEL_1002;
          updated = (__int64)System_String__Split_62427452((System_String_o *)updated, v382, 0, 0LL);
          if ( !updated )
            goto LABEL_1002;
          v384 = *(_DWORD *)(updated + 24);
          if ( v384 <= 0 )
            goto LABEL_829;
          v385 = *(System_String_o **)(updated + 32);
          if ( v384 == 1 )
          {
            v386 = *(System_String_o **)(updated + 32);
            v385 = v375;
          }
          else
          {
            v386 = *(System_String_o **)(updated + 40);
          }
          v642 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v646 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v643, v644, v645);
          System_Action___ctor(
            v646,
            (Il2CppObject *)v178,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
            0LL);
          if ( !v642 )
            goto LABEL_1002;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)v642,
            v385,
            v386,
            v646,
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
          v387 = (System_String_o *)StringLiteral_1/*""*/;
          v389 = System_String__Concat_62401220((System_String_o *)StringLiteral_10959/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v196->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v388);
          v390 = LocalizationManager__Get(v389, 0LL);
          v391 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v395 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v392, v393, v394);
          System_Action___ctor(
            v395,
            (Il2CppObject *)v178,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
            0LL);
          if ( !v391 )
            goto LABEL_1002;
          v396 = &dword_C0B000;
          onClickOkSeKind = 0;
          goto LABEL_551;
        case 603:
          v397 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1BCA888(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1002;
          v404 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v405 = StringLiteral_88/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_88/*"\r\n"*/;
          sub_1BCA784((PartyOrganizationUtility_o *)(updated + 32), v405, v398, v399, v400, v401, v402, v403);
          updated = (__int64)v196->fields.param;
          if ( !updated )
            goto LABEL_1002;
          updated = (__int64)System_String__Split_62427452((System_String_o *)updated, v404, 0, 0LL);
          if ( !updated )
            goto LABEL_1002;
          v406 = *(_DWORD *)(updated + 24);
          if ( v406 <= 0 )
            goto LABEL_829;
          v387 = *(System_String_o **)(updated + 32);
          if ( v406 == 1 )
          {
            v390 = *(System_String_o **)(updated + 32);
            v387 = v397;
          }
          else
          {
            v390 = *(System_String_o **)(updated + 40);
          }
          v391 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v395 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v647, v648, v649);
          System_Action___ctor(
            v395,
            (Il2CppObject *)v178,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
            0LL);
          if ( !v391 )
            goto LABEL_1002;
          v396 = &dword_C0B000;
          onClickOkSeKind = 1;
LABEL_551:
          CommonUI__OpenNotificationDialog_30767520(
            (CommonUI_o *)v391,
            v387,
            v390,
            v395,
            40.0,
            *((float *)v396 + 169),
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
          v407 = (System_String_o *)StringLiteral_1/*""*/;
          v409 = System_String__Concat_62401220((System_String_o *)StringLiteral_10959/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v196->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v408);
          v410 = LocalizationManager__Get(v409, 0LL);
          v411 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v415 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v412, v413, v414);
          System_Action___ctor(
            v415,
            (Il2CppObject *)v178,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( !v411 )
            goto LABEL_1002;
          CommonUI__OpenNotificationDialog_30767520(
            (CommonUI_o *)v411,
            v407,
            v410,
            v415,
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
            updated = (__int64)v196->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v418 = *(_QWORD *)(updated + 24);
            if ( v418 )
            {
              if ( !(_DWORD)v418 )
                break;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v419 = *v187;
              if ( !*v187 )
                goto LABEL_1002;
              v420 = *(QuestAfterAction_TitleInfoControlCallback_o **)(v419 + 40);
              if ( (int)updated >= 1 )
              {
                if ( !v420 )
                  goto LABEL_1002;
                QuestAfterAction_TitleInfoControlCallback__Start(
                  *(QuestAfterAction_TitleInfoControlCallback_o **)(v419 + 40),
                  0LL,
                  v416);
                goto LABEL_18;
              }
            }
            else
            {
              if ( !*v187 )
                goto LABEL_1002;
              v420 = *(QuestAfterAction_TitleInfoControlCallback_o **)(*v187 + 40);
            }
            v639 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v416, v417);
            System_Action___ctor(v639, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v420 )
              goto LABEL_1002;
            QuestAfterAction_TitleInfoControlCallback__Start(v420, v639, v640);
            return;
          }
          if ( id != 700 )
            return;
          updated = (__int64)v196->fields.param;
          if ( !updated )
            goto LABEL_1002;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1002;
          v323 = updated;
          if ( *(_DWORD *)(updated + 24) )
          {
            v327 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( *(int *)(v323 + 24) >= 2 )
              v328 = System_Int32__Parse(*(System_String_o **)(v323 + 40), 0LL) + 1;
            else
              v328 = 0;
            v557 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v324, v325, v326);
            SceneJumpInfo___ctor_39380944(v557, (System_String_o *)StringLiteral_1/*""*/, v327, v328, 0LL);
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !updated )
              goto LABEL_1002;
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v557, 0LL);
            goto LABEL_829;
          }
          break;
      }
LABEL_1003:
      sub_1BCAA44(updated, v180);
    }
    if ( id == 530 )
    {
      v356 = System_Int32__Parse(v196->fields.param, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_1002;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_1002;
      v357 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v356,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_1002;
      updated = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)updated, v356, 0LL);
      if ( !updated )
        goto LABEL_1002;
      v359 = updated;
      if ( *(_DWORD *)(updated + 32) == 1 )
      {
        if ( !v357 )
          goto LABEL_1002;
        if ( QuestEntity__HasFlag((QuestEntity_o *)v357, 2LL, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v180);
          if ( !byte_4B12DC7 )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v180, v360);
            byte_4B12DC7 = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v180);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v356;
          v361 = *(_DWORD *)(v359 + 44);
          if ( !byte_4B12DCB )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v180, v360);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4B12DCB = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated, v180);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v361;
          if ( !*v187 )
            goto LABEL_1002;
          *(_BYTE *)(*v187 + 195) = 1;
          if ( QuestEntity__HasFlag((QuestEntity_o *)v357, 0x800000000000LL, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v362);
              byte_4B10F83 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v364 = **(_QWORD **)(updated + 184);
            if ( !v364 )
              goto LABEL_1002;
            v365 = *(ScrTerminalListTop_o **)(v364 + 256);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v180);
            if ( !byte_4B12DC3 )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v180, v362);
              byte_4B12DC3 = 1;
            }
            v366 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v180);
              v366 = TerminalPramsManager_TypeInfo;
            }
            QuestId_k__BackingField = v366->static_fields->_QuestId_k__BackingField;
            if ( !byte_4B12DCE )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v180, v362);
              v366 = TerminalPramsManager_TypeInfo;
              byte_4B12DCE = 1;
            }
            if ( !v366->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v366, v180);
              v366 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v366->static_fields->_PhaseCnt_k__BackingField;
            v369 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v362, v363);
            System_Action___ctor(
              v369,
              (Il2CppObject *)v178,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__24__,
              0LL);
            if ( !v365 )
              goto LABEL_1002;
            ScrTerminalListTop__StartWindowMessage_35017112(
              v365,
              QuestId_k__BackingField,
              PhaseCnt_k__BackingField + 1,
              2,
              v369,
              1,
              0LL);
          }
          else
          {
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v846 = (clsQuestCheck_o *)updated;
            v847 = QuestAfterAction_StateMain___c_TypeInfo;
            if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo, v180);
              v847 = QuestAfterAction_StateMain___c_TypeInfo;
            }
            _9__16_25 = v847->static_fields->__9__16_25;
            if ( !_9__16_25 )
            {
              if ( !v847->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v847, v180);
                v847 = QuestAfterAction_StateMain___c_TypeInfo;
              }
              v849 = (Il2CppObject *)v847->static_fields->__9;
              _9__16_25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v180, v844, v845);
              System_Action___ctor(_9__16_25, v849, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_25__, 0LL);
              v850 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              v850->__9__16_25 = _9__16_25;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v850->__9__16_25,
                (int64_t)_9__16_25,
                v851,
                v852,
                v853,
                v854,
                v855,
                v856);
            }
            if ( !v846 )
              goto LABEL_1002;
            clsQuestCheck__PlayQuestStartAction(v846, _9__16_25, 0LL);
          }
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v358);
      }
      return;
    }
    if ( id != 540 )
    {
      if ( id == 550 )
        goto LABEL_18;
      return;
    }
    updated = (__int64)v196->fields.param;
    if ( !updated )
      goto LABEL_1002;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
    if ( !updated )
      goto LABEL_1002;
    v370 = updated;
    if ( !*(_DWORD *)(updated + 24) )
      goto LABEL_1003;
    v372 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
    if ( *(int *)(v370 + 24) < 2 )
    {
      v373 = -1;
    }
    else
    {
      v373 = System_Int32__Parse(*(System_String_o **)(v370 + 40), 0LL);
      if ( *(int *)(v370 + 24) >= 3 )
      {
        v374 = System_Int32__Parse(*(System_String_o **)(v370 + 48), 0LL);
LABEL_315:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v180);
        if ( !byte_4B11139 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v180, v371);
          byte_4B11139 = 1;
        }
        v435 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v180);
          v435 = TerminalPramsManager_TypeInfo;
        }
        v435->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v371);
          byte_4B10F83 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v436 = **(_QWORD **)(updated + 184);
        if ( !v436 )
          goto LABEL_1002;
        updated = *(_QWORD *)(v436 + 264);
        if ( !updated )
          goto LABEL_1002;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v372, v373, v374, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v437);
          if ( !byte_4B11139 )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v437, v438);
            byte_4B11139 = 1;
          }
          v440 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v437);
            v440 = TerminalPramsManager_TypeInfo;
          }
          v440->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_18;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        updated = *v187;
        if ( !*v187 )
          goto LABEL_1002;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v439);
        return;
      }
    }
    v374 = -1;
    goto LABEL_315;
  }
  if ( id <= 801 )
  {
    switch ( id )
    {
      case 701:
        if ( !System_String__op_Equality(v196->fields.param, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL) )
          goto LABEL_18;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v344);
        if ( !byte_4B13021 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v344, v345);
          byte_4B13021 = 1;
        }
        v346 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v344);
          v346 = TerminalPramsManager_TypeInfo;
        }
        v346->static_fields->_IsTransOrdealCall_k__BackingField = 1;
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1002;
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0LL, 0, 0LL);
        break;
      case 800:
        v347 = *v187;
        if ( !*v187 )
          goto LABEL_1002;
        updated = *(_QWORD *)(v347 + 88);
        if ( !updated )
          goto LABEL_1002;
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               (System_Collections_Generic_Dictionary_int__object__o *)updated,
               *(_DWORD *)(v347 + 64),
               &value,
               (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
        {
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
          if ( !updated )
            goto LABEL_1002;
          AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v348);
            byte_4B10F83 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v349 = **(_QWORD **)(updated + 184);
          if ( !v349 )
            goto LABEL_1002;
          if ( !*(_QWORD *)(v349 + 464) )
            goto LABEL_197;
          if ( !*(_DWORD *)(updated + 224) )
            j_il2cpp_runtime_class_init_0(updated, v180);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v348);
            byte_4B10F83 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v350 = **(_QWORD **)(updated + 184);
          if ( !v350 )
            goto LABEL_1002;
          v351 = *(_QWORD *)(v350 + 464);
          if ( !v351 )
            goto LABEL_1002;
          updated = *(unsigned int *)(v351 + 48);
          if ( !(_DWORD)updated )
          {
LABEL_197:
            if ( !value )
              goto LABEL_1002;
            updated = LODWORD(value[1].klass);
          }
          if ( (int)updated < 1 )
          {
            if ( !value )
              goto LABEL_1002;
            v641 = (System_String_o *)value[1].monitor;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v180);
            SoundManager__playVoice(v641, 0LL);
          }
          else
          {
            updated = (__int64)ServantVoiceEntity__getVoiceAssetName_40580584(updated, 0LL);
            if ( !value )
              goto LABEL_1002;
            v352 = (System_String_o *)updated;
            v353 = (System_String_o *)value[1].monitor;
            v354 = SeManager_TypeInfo;
            if ( !SeManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v180);
              v354 = SeManager_TypeInfo;
            }
            DEFAULT_VOLUME = v354->static_fields->DEFAULT_VOLUME;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v180);
            SoundManager__playVoice_39419392(v352, v353, DEFAULT_VOLUME, 0LL, 0LL);
          }
        }
        break;
      case 801:
        param = v196->fields.param;
        v230 = Method_QuestAfterAction_StateMain_UpdateAnim__;
        if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
          v230 = (_QWORD *)sub_1BCA7F8(Method_QuestAfterAction_StateMain_UpdateAnim__);
        v231 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v230, v230[4]);
        OverwriteAssetSoundName__PlaySe(v231, param, 0LL);
        goto LABEL_18;
      default:
        return;
    }
LABEL_829:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
      this,
      this->klass->vtable._15_onEnd.methodPtr);
    return;
  }
  switch ( id )
  {
    case 850:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v180);
      SoundManager__stopBgm(0LL);
      if ( !*v187 )
        goto LABEL_1002;
      *(_BYTE *)(*v187 + 193) = 1;
      goto LABEL_18;
    case 851:
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v180, v202);
        byte_4B10F83 = 1;
      }
      v329 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v180);
        v329 = TerminalSceneComponent_TypeInfo;
      }
      v330 = v329->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v196, (const MethodInfo *)v180);
      if ( !v330 )
        goto LABEL_1002;
      TerminalSceneComponent__playBgm(v330, (System_String_o *)updated, 0LL);
      if ( !*v187 )
        goto LABEL_1002;
      *(_BYTE *)(*v187 + 193) = 0;
      goto LABEL_18;
    case 900:
      v205 = (float)System_Int32__Parse(v196->fields.param, 0LL) / 1000.0;
      if ( v205 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v205;
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
  __int64 v13; // x2
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4B12FEC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, that, method);
    byte_4B12FEC = 1;
  }
  this->fields.that = that;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)that, (int64_t)method, v3, v4, v5, v6, v7);
  v12 = this->fields.that;
  if ( !v12 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v12->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v11, v13);
    byte_4B10F83 = 1;
  }
  screenCollider = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
    screenCollider = TerminalSceneComponent_TypeInfo;
  }
  mInstance = screenCollider->static_fields->mInstance;
  if ( !mInstance || (screenCollider = (TerminalSceneComponent_c *)mInstance->fields.mTerminalMap) == 0LL )
LABEL_14:
    sub_1BCAA3C(screenCollider, v11);
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
    sub_1BCAA3C(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4B12FEB & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B12FEB = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1BCAA3C(v3, method);
  return mTerminalMap->fields.subRootGimmickP;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__onEnd(
        QuestAfterAction_StateMain_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalSceneComponent_c *v7; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B12FEE & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, deleteKey, method);
    sub_1BCA7E0(&StringLiteral_16878/*"afterActionBk"*/, v5, v6);
    byte_4B12FEE = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16878/*"afterActionBk"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, deleteKey);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, deleteKey, method);
    byte_4B10F83 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, deleteKey);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v7->static_fields->mInstance;
  if ( !mInstance
    || (TerminalSceneComponent__ClearTransitionInfo(mInstance, 0LL),
        QuestAfterAction_StateMain__StartMapGimmick(this, v9),
        (mInstance = (TerminalSceneComponent_o *)this->fields.that) == 0LL) )
  {
    sub_1BCAA3C(mInstance, deleteKey);
  }
  QuestAfterAction__OnEnd((QuestAfterAction_o *)mInstance, (const MethodInfo *)deleteKey);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__set_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(this, *(_QWORD *)&value);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12FF0 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestAfterAction_StateMain___c_TypeInfo, v1, v2);
    byte_4B12FF0 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestAfterAction_StateMain___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_25(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  TerminalPramsManager_c *v12; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v15; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__16_26; // x21
  Il2CppObject *v18; // x22
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B12FF1 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, v8, v9);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c_TypeInfo, v10, v11);
    byte_4B12FF1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC6 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v12->static_fields->_WarId_k__BackingField;
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4B12DC3 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12, method);
    v12 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v12->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12, method);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v15 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v12->static_fields->_PhaseCnt_k__BackingField;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo, method);
    v15 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_26 = v15->static_fields->__9__16_26;
  if ( !_9__16_26 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, method);
      v15 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__16_26 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3);
    ScriptManager_CallbackFunc___ctor(_9__16_26, v18, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_26,
      (int64_t)_9__16_26,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__16_26,
    0,
    0LL,
    -1,
    0,
    0,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_26(
        QuestAfterAction_StateMain___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  QuestAfterAction_StateMain___c_c *v16; // x0
  NetworkManager_ResultCallbackFunc_o *_9__16_27; // x19
  Il2CppObject *v18; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v29; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v33; // x1

  if ( (byte_4B12FF2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, v12, v13);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c_TypeInfo, v14, v15);
    byte_4B12FF2 = 1;
  }
  v16 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo, isExit);
    v16 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_27 = v16->static_fields->__9__16_27;
  if ( !_9__16_27 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, isExit);
      v16 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__16_27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                         NetworkManager_ResultCallbackFunc_TypeInfo,
                                                         isExit,
                                                         method,
                                                         v3);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_27,
      v18,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_27,
      (int64_t)_9__16_27,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isExit);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_27,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
    byte_4B12DC3 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
    v29 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v29->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29, v26);
    v29 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v29->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v26);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_object )
    sub_1BCAA3C(SelectRouteArray, v33);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0LL);
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_27(
        QuestAfterAction_StateMain___c_o *this,
        System_String_o *jsonstr,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  Il2CppObject *v21; // x19
  System_Object_array *v22; // x19
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  TerminalPramsManager_c *v27; // x0
  Il2CppObject *Instance; // x0
  __int64 v29; // x1

  if ( (byte_4B12FF3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_16878/*"afterActionBk"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_13784/*"TerminalTransitionInfoMissionId"*/, v18, v19);
    byte_4B12FF3 = 1;
  }
  v21 = (Il2CppObject *)System_String__Concat_62412480(
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v20);
  v22 = JsonManager__DeserializeArray_object_(
          v21,
          (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16878/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13784/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v23);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v22, 1, 0LL);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v26);
    byte_4B11139 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
    v27 = TerminalPramsManager_TypeInfo;
  }
  v27->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v29);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(_4__this, method);
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, struct QuestAfterAction_o *, Il2CppMethodPointer))_4__this->klass->vtable._13_UpdateAnim.method)(
    _4__this,
    this->fields.that,
    _4__this->klass->vtable._14_EndAnim.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__24(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ScrTerminalMap_o *_4__this; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v12; // x2
  UnityEngine_GameObject_c *v13; // x8
  UnityEngine_GameObject_c *v14; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  TerminalPramsManager_c *v17; // x0
  int32_t QuestId_k__BackingField; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  TerminalPramsManager_c *v21; // x0
  bool HasFlag; // w0
  __int64 v23; // x1
  __int64 v24; // x2
  TerminalPramsManager_c *v25; // x8
  TerminalPramsManager_c *v26; // x0
  __int64 v27; // x2
  int32_t SpotId; // w21
  __int64 v29; // x2
  UnityEngine_GameObject_c *v30; // x8
  __int64 v31; // x2
  bool Effect; // w21
  TerminalPramsManager_c *v33; // x0
  __int64 v34; // x2
  TerminalPramsManager_c *v35; // x0
  int32_t WarId_k__BackingField; // w19
  UnityEngine_GameObject_c *v37; // x8
  ScrTerminalListTop_o *v38; // x19
  int32_t v39; // w21

  if ( (byte_4B12FF4 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_16878/*"afterActionBk"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_13784/*"TerminalTransitionInfoMissionId"*/, v8, v9);
    byte_4B12FF4 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v12);
    byte_4B10F83 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v13 = _4__this->fields.subRootGimmickP->klass;
  if ( !v13 || (_4__this = *(ScrTerminalMap_o **)&v13->_2.thread_static_fields_offset) == 0LL )
LABEL_97:
    sub_1BCAA3C(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0LL);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v12);
    byte_4B10F83 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v14 = _4__this->fields.subRootGimmickP->klass;
  if ( !v14 )
    goto LABEL_97;
  _4__this = *(ScrTerminalMap_o **)&v14->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_97;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)_4__this, 0, 0LL, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v16);
    byte_4B12DC3 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B13022 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v16);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4B13022 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17, v15);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v16);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4B12DC3 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17, v15);
    v17 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v17->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
    byte_4B12DC3 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    v21 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v21->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0LL);
  v25 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v23, v24);
      byte_4B12DC3 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
      v26 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v26->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_4B13023 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v23, v27);
      byte_4B13023 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  if ( !v25->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v25, v23);
  TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  TerminalPramsManager__Save_SaveData(0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16878/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13784/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v29);
    byte_4B10F83 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v30 = _4__this->fields.subRootGimmickP->klass;
  if ( !v30 )
    goto LABEL_97;
  _4__this = *(ScrTerminalMap_o **)&v30->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_97;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)_4__this, 0LL);
  if ( !byte_4B13024 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v31);
    byte_4B13024 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_IsPlayGetEffect_k__BackingField = Effect;
  _4__this = (ScrTerminalMap_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_97;
  ((void (__fastcall *)(ScrTerminalMap_o *, Il2CppRuntimeInterfaceOffsetPair *))_4__this->klass[1]._1.implementedInterfaces)(
    _4__this,
    _4__this->klass[1]._1.interfaceOffsets);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v34);
    byte_4B12DC6 = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v35 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v35->static_fields->_WarId_k__BackingField;
  if ( !byte_4B1301B )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v34);
    v35 = TerminalPramsManager_TypeInfo;
    byte_4B1301B = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35, method);
    v35 = TerminalPramsManager_TypeInfo;
  }
  v35->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v34);
    byte_4B10F83 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v37 = _4__this->fields.subRootGimmickP->klass;
  if ( !v37 )
    goto LABEL_97;
  v38 = *(ScrTerminalListTop_o **)&v37->_2.static_fields_size;
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v34);
    byte_4B12DC3 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  v39 = *((_DWORD *)&_4__this->fields.subRootGimmickP->fields + 1);
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v34);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !LODWORD(_4__this->fields.pfbBaseP) )
  {
    j_il2cpp_runtime_class_init_0(_4__this, method);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v38 )
    goto LABEL_97;
  ScrTerminalListTop__RequestBattleSecnario(v38, v39, LODWORD(_4__this->fields.subRootGimmickP[1].klass) + 1, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__28(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__29(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(spot, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_Component_o *v22; // x22
  Il2CppObject *v23; // x0
  UnityEngine_Color_o **v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v32; // x8
  UnityEngine_Color_o *v33; // x20
  float v34; // s0
  UITweener_o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  EventDelegate_Callback_o *v39; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4B12FF5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v7, v8);
    sub_1BCA7E0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__, v9, v10);
    sub_1BCA7E0(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v11, v12);
    byte_4B12FF5 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v13 = sub_1BCAA2C(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_18;
  *(_QWORD *)(v13 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v22 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v23 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v13 + 16) = v23;
  v24 = (UnityEngine_Color_o **)(v13 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)v23, v25, v26, v27, v28, v29, v30);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( paramsStr->max_length <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                            paramsStr->m_Items[1],
                                            &color,
                                            0LL);
  if ( !*v24
    || ((*v24)[8] = *(UnityEngine_Color_o *)((char *)&v22[6].klass + 4), !*v24)
    || ((*v24)[9] = color, (v32 = this->fields.paramsStr) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(mapGimmick, v15);
  }
  if ( v32->max_length <= 2 )
LABEL_19:
    sub_1BCAA44(mapGimmick, v15);
  v33 = *v24;
  v34 = System_Single__Parse(v32->m_Items[2], 0LL);
  if ( !v33 )
    goto LABEL_18;
  v33[3].fields.b = v34;
  mapGimmick = (UnityEngine_Component_o *)*v24;
  if ( !*v24 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0LL);
  v35 = *(UITweener_o **)(v13 + 16);
  v39 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v36, v37, v38);
  EventDelegate_Callback___ctor(
    v39,
    (Il2CppObject *)v13,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__,
    0LL);
  if ( !v35 )
    goto LABEL_18;
  UITweener__SetOnFinished(v35, v39, 0LL);
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
  __int64 v2; // x2
  UnityEngine_Object_o *tween; // x20
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  __int64 v6; // x1
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_4B12FF6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12FF6 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1BCAA3C(_4__this, v6);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(spot, method);
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
    sub_1BCAA3C(spot, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
  sub_1BCA784(p_end, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)startCallback, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1BCA784((PartyOrganizationUtility_o *)p_end, (int64_t)endCallback, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1BCA784(v6, (int64_t)vName, v7, v8, v9, v10, v11, v12);
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
  __int64 v2; // x2
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *v3; // x21
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x19
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  const MethodInfo *v27; // x1
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v28; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  QuestAfterAction_Command_o *v33; // x0
  const MethodInfo *v34; // x1
  int64_t v35; // x20
  int id; // w8
  unsigned int v37; // w8
  int32_t v38; // w21
  int32_t CommandTargetId; // w2
  const MethodInfo *v40; // x3
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *v54; // [xsp+18h] [xbp-48h]

  v3 = this;
  v54 = this;
  if ( (byte_4B12FFA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo, v4, v5);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)sub_1BCA7E0(
                                                                                    &System_Collections_IEnumerator_TypeInfo,
                                                                                    v6,
                                                                                    v7);
    byte_4B12FFA = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    commandEnumerable = v3->fields.commandEnumerable;
    v3->fields.__1__state = -1;
    if ( !commandEnumerable )
      sub_1BCAA3C(this, method);
    klass = commandEnumerable->klass;
    v12 = *(unsigned __int16 *)(&commandEnumerable->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&commandEnumerable->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v15 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v54->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)&v54->fields.__7__wrap1, v15, v16, v17, v18, v19, v20, v21);
    v3 = v54;
  }
  _7__wrap1 = v3->fields.__7__wrap1;
  v3->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_46:
    sub_1BCAA3C(this, method);
  while ( 1 )
  {
    v23 = _7__wrap1->klass;
    v24 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_18:
      v26 = sub_1C1C7C0(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v26)(
            _7__wrap1,
            *(_QWORD *)(v26 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81____m__Finally1(v54, v27);
      v54->fields.__7__wrap1 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v54->fields.__7__wrap1, 0LL, v47, v48, v49, v50, v51, v52);
      return 0;
    }
    v28 = v54->fields.__7__wrap1;
    if ( !v28 )
      sub_1BCAA3C(v54, v27);
    v29 = v28->klass;
    v30 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v31 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_26;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_26:
      v32 = sub_1C1C7C0(
              v54->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v33 = (QuestAfterAction_Command_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v32)(
                                          v28,
                                          *(_QWORD *)(v32 + 8));
    v35 = (int64_t)v33;
    if ( !v33 )
      sub_1BCAA3C(0LL, v34);
    if ( !_4__this )
      sub_1BCAA3C(v33, v34);
    id = v33->fields.id;
    if ( id <= 205 )
    {
      if ( (unsigned int)(id - 100) >= 0xF || ((0x7C1Fu >> (id - 100)) & 1) == 0 )
      {
        if ( (unsigned int)(id - 200) <= 5 )
        {
          v38 = 1;
          goto LABEL_44;
        }
        goto LABEL_41;
      }
      v38 = 0;
    }
    else
    {
      if ( id > 550 )
      {
        v37 = id - 1000;
        if ( v37 < 0xD )
        {
          v38 = dword_C0C634[v37];
          goto LABEL_44;
        }
LABEL_41:
        v38 = -1;
        goto LABEL_44;
      }
      if ( (unsigned int)(id - 400) >= 0xD )
      {
        if ( id == 550 )
        {
          v38 = 3;
          goto LABEL_44;
        }
        goto LABEL_41;
      }
      v38 = 2;
    }
LABEL_44:
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v33, v34);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    v38,
                                                                                    CommandTargetId,
                                                                                    v40);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v54->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_46;
  }
  v54->fields.__2__current = (struct QuestAfterAction_Command_o *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&v54->fields.__2__current, v35, v41, v42, v43, v44, v45, v46);
  result = 1;
  v54->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
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

  if ( (byte_4B12FFC & 1) == 0 )
  {
    sub_1BCA7E0(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo, method, v2);
    byte_4B12FFC = 1;
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
    v10 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)sub_1BCAA2C(
                                                                                   QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo,
                                                                                   method,
                                                                                   v2,
                                                                                   v3);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.__4__this, (int64_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v10->fields.commandEnumerable = _3__commandEnumerable;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v10->fields.commandEnumerable,
    (int64_t)_3__commandEnumerable,
    v2,
    v3,
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B12FFB & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    byte_4B12FFB = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v6 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C1C7C0(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
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
      sub_1BCAA3C(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_QuestAfterAction__WaitWhileMainStateFinished_d__85_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  System_Collections_Generic_List_object__o *svtVInfos; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4B12FF7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method, v2);
    byte_4B12FF7 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_34440152((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, v5);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B12FF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B12FF8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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

  if ( (byte_4B12FF9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B12FF9 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)(_4__this + 176), 0LL, v2, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1BCA784((PartyOrganizationUtility_o *)(_4__this + 72), 0LL, v10, v11, v12, v13, v14, v15),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1BCAA3C(_4__this, method);
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
    sub_1BCAA3C(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, v2);
}