void __fastcall BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthGimmickEntity_o *__fastcall BlankEarthQuestAfterAction__GetGimmickEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1

  if ( (byte_4B13000 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___, *(_QWORD *)&gimmickId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__, v6, v7);
    byte_4B13000 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&gimmickId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotEntity_o *__fastcall BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1

  if ( (byte_4B12FFF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&spotId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__, v6, v7);
    byte_4B12FFF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&spotId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


bool __fastcall BlankEarthQuestAfterAction__IsBlankEarthActive(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalSceneComponent_c *v5; // x0
  struct TerminalSceneComponent_o *mInstance; // x19
  ScrTerminalListTop_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *mTerminalList; // x20

  if ( (byte_4B13001 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v3, v4);
    byte_4B13001 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
    return 0;
  if ( !mInstance )
    goto LABEL_19;
  mTerminalList = (UnityEngine_Object_o *)mInstance->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Equality(mTerminalList, 0LL, 0LL) )
    return 0;
  v7 = mInstance->fields.mTerminalList;
  if ( !v7 )
LABEL_19:
    sub_1BCAA3C(v7, v8);
  return ScrTerminalListTop__get_IsActiveBlankEarth(v7, 0LL);
}


bool __fastcall BlankEarthQuestAfterAction__TryGetParam(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        BlankEarthQuestAfterAction_CommandParam_o **commandParam,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  Il2CppObject *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t id; // w8
  unsigned int v24; // w9
  char v25; // w9
  bool result; // w0
  BlankEarthQuestAfterAction_CommandParam_o *v27; // x20
  BlankEarthQuestAfterAction_o *v28; // x0
  const MethodInfo *v29; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v38; // x20
  BlankEarthQuestAfterAction_o *v39; // x0
  const MethodInfo *v40; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  System_String_o *v49; // x0
  System_String_array *v50; // x0
  __int64 v51; // x1
  System_String_array *v52; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v54; // x22
  float v55; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v56; // x22
  __int64 v57; // x0
  System_String_o *v58; // x0
  System_String_array *v59; // x0
  __int64 v60; // x1
  System_String_array *v61; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v62; // x22
  BlankEarthQuestAfterAction_o *v63; // x0
  const MethodInfo *v64; // x2
  BlankEarthGimmickEntity_o *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x0
  __int64 v73; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v74; // x20
  __int64 v75; // x0
  __int64 v76; // x1
  System_String_o *param; // x0
  System_String_array *v78; // x0
  __int64 v79; // x1
  System_String_array *v80; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v81; // x22
  BlankEarthQuestAfterAction_o *v82; // x0
  const MethodInfo *v83; // x2
  BlankEarthSpotEntity_o *v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  __int64 v91; // x0
  __int64 v92; // x1
  __int64 v93; // x1
  System_String_o *v94; // x0
  System_String_array *v95; // x0
  __int64 v96; // x1
  System_String_array *v97; // x21
  int v98; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v99; // x22
  bool v100; // w8
  System_String_o *v101; // x0
  System_String_array *v102; // x0
  __int64 v103; // x1
  System_String_array *v104; // x21
  int v105; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v106; // x22
  float v107; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v108; // x22
  __int64 v109; // x0
  System_String_o *v110; // x0
  System_String_array *v111; // x0
  __int64 v112; // x1
  System_String_array *v113; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v114; // x22
  __int64 v115; // x0
  __int64 v116; // x1
  float v117; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v118; // x22
  __int64 v119; // x0
  __int64 v120; // x1
  float v121; // s0
  float v122; // s8
  __int64 v123; // x0
  __int64 v124; // x1
  float v125; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v126; // x20
  __int64 v127; // x0
  __int64 v128; // x1
  BlankEarthQuestAfterAction_o *v129; // x0
  const MethodInfo *v130; // x2
  BlankEarthQuestAfterAction_o *v131; // x0
  const MethodInfo *v132; // x2
  BlankEarthQuestAfterAction_o *v133; // x0
  const MethodInfo *v134; // x2

  if ( (byte_4B12FFE & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthQuestAfterAction_CommandParam_TypeInfo, command, commandParam);
    byte_4B12FFE = 1;
  }
  *errorMessage = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)errorMessage,
    0LL,
    (int64_t)commandParam,
    (int32_t)errorMessage,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v14 = (Il2CppObject *)sub_1BCAA2C(BlankEarthQuestAfterAction_CommandParam_TypeInfo, v11, v12, v13);
  System_Object___ctor(v14, 0LL);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v14;
  sub_1BCA784((PartyOrganizationUtility_o *)commandParam, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  if ( !command )
    sub_1BCAA3C(v21, v22);
  id = command->fields.id;
  if ( id <= 403 )
  {
    v25 = id - 100;
    result = 1;
    if ( (unsigned int)(id - 100) <= 0xE )
    {
      if ( ((1 << v25) & 0x23E8) != 0 )
        return result;
      if ( ((1 << v25) & 0x1C07) != 0 )
      {
        v27 = *commandParam;
        v28 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v28, (int32_t)v28, v29);
        v37 = (int64_t)SpotEntity;
        if ( !v27 )
          sub_1BCAA3C(SpotEntity, SpotEntity);
LABEL_13:
        v27->fields.blankEarthSpotEntity = SpotEntity;
        sub_1BCA784((PartyOrganizationUtility_o *)&v27->fields, v37, v31, v32, v33, v34, v35, v36);
        return 1;
      }
      param = command->fields.param;
      if ( !param )
        sub_1BCAA3C(0LL, v22);
      v78 = System_String__Split(param, 0x2Cu, 0, 0LL);
      v80 = v78;
      if ( !v78 )
        sub_1BCAA3C(0LL, v79);
      if ( !v78->max_length )
        sub_1BCAA44(v78, v79);
      v81 = *commandParam;
      v82 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v78->m_Items[0], 0LL);
      v84 = BlankEarthQuestAfterAction__GetSpotEntity(v82, (int32_t)v82, v83);
      if ( !v81 )
        sub_1BCAA3C(v84, v84);
      v81->fields.blankEarthSpotEntity = v84;
      sub_1BCA784((PartyOrganizationUtility_o *)&v81->fields, (int64_t)v84, v85, v86, v87, v88, v89, v90);
      if ( v80->max_length <= 1 )
        sub_1BCAA44(v91, v92);
      v74 = *commandParam;
      v75 = System_Int32__Parse(v80->m_Items[1], 0LL);
      if ( !v74 )
        sub_1BCAA3C(v75, v93);
      goto LABEL_40;
    }
    switch ( id )
    {
      case 300:
        v49 = command->fields.param;
        if ( !v49 )
          sub_1BCAA3C(0LL, v22);
        v50 = System_String__Split(v49, 0x2Cu, 0, 0LL);
        v52 = v50;
        if ( !v50 )
          sub_1BCAA3C(0LL, v51);
        max_length = v50->max_length;
        if ( max_length <= 0 )
          return 0;
        v54 = *commandParam;
        v55 = 0.5;
        if ( max_length >= 3 )
          v55 = System_Single__Parse(v50->m_Items[2], 0LL) * 0.001;
        if ( !v54 )
          sub_1BCAA3C(v50, v51);
        v54->fields.time = v55;
        v56 = *commandParam;
        if ( (int)v52->max_length >= 2 )
          v57 = System_Int32__Parse(v52->m_Items[1], 0LL);
        else
          v57 = 15LL;
        if ( !v56 )
          sub_1BCAA3C(v57, v51);
        v56->fields.easeType = v57;
        if ( !v52->max_length )
          sub_1BCAA44(v57, v51);
        v27 = *commandParam;
        v131 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v52->m_Items[0], 0LL);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v131, (int32_t)v131, v132);
        v37 = (int64_t)SpotEntity;
        if ( !v27 )
          sub_1BCAA3C(SpotEntity, SpotEntity);
        goto LABEL_13;
      case 301:
        return result;
      case 302:
        v101 = command->fields.param;
        if ( !v101 )
          sub_1BCAA3C(0LL, v22);
        v102 = System_String__Split(v101, 0x2Cu, 0, 0LL);
        v104 = v102;
        if ( !v102 )
          sub_1BCAA3C(0LL, v103);
        v105 = v102->max_length;
        if ( v105 <= 0 )
          return 0;
        v106 = *commandParam;
        v107 = 0.5;
        if ( v105 >= 3 )
          v107 = System_Single__Parse(v102->m_Items[2], 0LL) * 0.001;
        if ( !v106 )
          sub_1BCAA3C(v102, v103);
        v106->fields.time = v107;
        v108 = *commandParam;
        if ( (int)v104->max_length >= 2 )
          v109 = System_Int32__Parse(v104->m_Items[1], 0LL);
        else
          v109 = 15LL;
        if ( !v108 )
          sub_1BCAA3C(v109, v103);
        v108->fields.easeType = v109;
        if ( !v104->max_length )
          sub_1BCAA44(v109, v103);
        v38 = *commandParam;
        v129 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v104->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v129, (int32_t)v129, v130);
        v48 = (int64_t)GimmickEntity;
        if ( !v38 )
          sub_1BCAA3C(GimmickEntity, GimmickEntity);
        break;
      case 303:
        v110 = command->fields.param;
        if ( !v110 )
          sub_1BCAA3C(0LL, v22);
        v111 = System_String__Split(v110, 0x2Cu, 0, 0LL);
        v113 = v111;
        if ( !v111 )
          sub_1BCAA3C(0LL, v112);
        if ( (int)v111->max_length <= 3 )
          return 0;
        v114 = *commandParam;
        v117 = System_Single__Parse(v111->m_Items[2], 0LL);
        if ( !v114 )
          sub_1BCAA3C(v115, v116);
        v114->fields.time = v117 * 0.001;
        v118 = *commandParam;
        if ( !*commandParam )
          sub_1BCAA3C(v115, v116);
        if ( v118->fields.time < 0.0 )
          v118->fields.time = 0.5;
        if ( !v113->max_length )
          sub_1BCAA44(v115, v116);
        v121 = System_Single__Parse(v113->m_Items[0], 0LL);
        if ( v113->max_length <= 1 )
          sub_1BCAA44(v119, v120);
        v122 = v121;
        v125 = System_Single__Parse(v113->m_Items[1], 0LL);
        v118->fields.latLongVector.fields.x = v122;
        v118->fields.latLongVector.fields.y = v125;
        if ( v113->max_length <= 3 )
          sub_1BCAA44(v123, v124);
        v126 = *commandParam;
        v127 = System_Int32__Parse(v113->m_Items[3], 0LL);
        if ( !v126 )
          sub_1BCAA3C(v127, v128);
        v126->fields.easeType = v127;
        return 1;
      default:
        if ( (id & 0xFFFFFFFC) != 400 )
          return 1;
        v94 = command->fields.param;
        if ( !v94 )
          sub_1BCAA3C(0LL, v22);
        v95 = System_String__Split(v94, 0x2Cu, 0, 0LL);
        v97 = v95;
        if ( !v95 )
          sub_1BCAA3C(0LL, v96);
        v98 = v95->max_length;
        if ( v98 <= 0 )
          return 0;
        v99 = *commandParam;
        if ( v98 == 1 )
        {
          v100 = 0;
        }
        else
        {
          v95 = (System_String_array *)System_Int32__Parse(v95->m_Items[1], 0LL);
          v100 = (int)v95 > 0;
        }
        if ( !v99 )
          sub_1BCAA3C(v95, v96);
        v99->fields.noWait = v100;
        if ( !v97->max_length )
          sub_1BCAA44(v95, v96);
        v38 = *commandParam;
        v133 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v97->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v133, (int32_t)v133, v134);
        v48 = (int64_t)GimmickEntity;
        if ( !v38 )
          sub_1BCAA3C(GimmickEntity, GimmickEntity);
        return result;
    }
LABEL_83:
    v38->fields.blankEarthGimmickEntity = GimmickEntity;
    sub_1BCA784((PartyOrganizationUtility_o *)&v38->fields.blankEarthGimmickEntity, v48, v42, v43, v44, v45, v46, v47);
    return 1;
  }
  v24 = id & 0xFFFFFFFE;
  if ( id > 1002 )
  {
    if ( v24 != 1010 )
    {
      if ( id != 1012 )
        return 1;
      goto LABEL_27;
    }
    goto LABEL_15;
  }
  if ( v24 == 1000 )
  {
LABEL_15:
    v38 = *commandParam;
    v39 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
    GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v39, (int32_t)v39, v40);
    v48 = (int64_t)GimmickEntity;
    if ( !v38 )
      sub_1BCAA3C(GimmickEntity, GimmickEntity);
    goto LABEL_83;
  }
  if ( id == 1002 )
  {
LABEL_27:
    v58 = command->fields.param;
    if ( !v58 )
      sub_1BCAA3C(0LL, v22);
    v59 = System_String__Split(v58, 0x2Cu, 0, 0LL);
    v61 = v59;
    if ( !v59 )
      sub_1BCAA3C(0LL, v60);
    if ( !v59->max_length )
      sub_1BCAA44(v59, v60);
    v62 = *commandParam;
    v63 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v59->m_Items[0], 0LL);
    v65 = BlankEarthQuestAfterAction__GetGimmickEntity(v63, (int32_t)v63, v64);
    if ( !v62 )
      sub_1BCAA3C(v65, v65);
    v62->fields.blankEarthGimmickEntity = v65;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v62->fields.blankEarthGimmickEntity,
      (int64_t)v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
    if ( v61->max_length <= 1 )
      sub_1BCAA44(v72, v73);
    v74 = *commandParam;
    v75 = System_Int32__Parse(v61->m_Items[1], 0LL);
    if ( !v74 )
      sub_1BCAA3C(v75, v76);
LABEL_40:
    v74->fields.intValue = v75;
  }
  return 1;
}


bool __fastcall BlankEarthQuestAfterAction__UpdateAnim(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_o *that,
        QuestAfterAction_Command_o *command,
        System_Action_o *endAnimCallback,
        bool *isQuickUpdate,
        const MethodInfo *method)
{
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
  __int64 v22; // x22
  TerminalSceneComponent_c *v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Action_o **v31; // x19
  BlankEarthQuestAfterAction_o *v32; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x4
  bool IsBlankEarthActive; // w8
  __int64 v36; // x2
  __int64 v37; // x3
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t id; // w23
  BlankEarth_o *blankEarth; // x21
  unsigned int v42; // w8
  int v43; // w8
  int32_t v44; // w2
  System_Action_object__o *v46; // x19
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  __int64 v48; // x1
  UnityEngine_Object_o *EarthGimmick; // x21
  System_Action_object__o *v50; // x19
  System_Action_object__o *v51; // x19
  unsigned int v52; // w8
  System_String_o *errorMessage; // [xsp+8h] [xbp-48h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B12FFD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, that, command);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__, v14, v15);
    sub_1BCA7E0(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__, v16, v17);
    sub_1BCA7E0(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__, v18, v19);
    sub_1BCA7E0(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, v20, v21);
    byte_4B12FFD = 1;
  }
  commandParam = 0LL;
  errorMessage = 0LL;
  v22 = sub_1BCAA2C(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, that, command, endAnimCallback);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_79;
  *(_QWORD *)(v22 + 16) = endAnimCallback;
  v31 = (System_Action_o **)(v22 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)endAnimCallback, v25, v26, v27, v28, v29, v30);
  *isQuickUpdate = 0;
  IsBlankEarthActive = BlankEarthQuestAfterAction__IsBlankEarthActive(v32, v33);
  LOBYTE(v23) = 0;
  if ( IsBlankEarthActive )
  {
    if ( BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v34) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v24);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v24, v36);
        byte_4B10F83 = 1;
      }
      v23 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v24);
        v23 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v23->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_79;
      mTerminalList = mInstance->fields.mTerminalList;
      if ( !mTerminalList || !command )
        goto LABEL_79;
      id = command->fields.id;
      blankEarth = mTerminalList->fields.blankEarth;
      if ( id > 403 )
      {
        v42 = id & 0xFFFFFFFE;
        if ( id <= 1002 )
        {
          if ( v42 != 1000 )
          {
            if ( id == 1002 )
              goto LABEL_45;
LABEL_58:
            LOBYTE(v23) = 0;
            return (char)v23;
          }
        }
        else if ( v42 != 1010 )
        {
          if ( id != 1012 )
            goto LABEL_58;
LABEL_45:
          if ( commandParam && blankEarth )
          {
            BlankEarth__PlayOtherObjectUniqueAnim(
              blankEarth,
              commandParam->fields.blankEarthGimmickEntity,
              commandParam->fields.intValue,
              id == 1012,
              *v31,
              0LL);
            goto LABEL_58;
          }
LABEL_79:
          sub_1BCAA3C(v23, v24);
        }
        if ( !commandParam || !blankEarth )
          goto LABEL_79;
        BlankEarth__RevealOtherObject(
          blankEarth,
          commandParam->fields.blankEarthGimmickEntity,
          id != 1000 && id != 1010,
          v42 == 1010,
          *v31,
          0LL);
        goto LABEL_58;
      }
      v23 = 0LL;
      if ( (unsigned int)(id - 100) <= 0xE )
      {
        v43 = 1 << (id - 100);
        if ( (v43 & 0x23E8) != 0 )
          return (char)v23;
        if ( (v43 & 0x1C07) == 0 )
        {
          if ( commandParam && blankEarth )
          {
            BlankEarth__PlaySpotUniqueAnim(
              blankEarth,
              commandParam->fields.blankEarthSpotEntity,
              commandParam->fields.intValue,
              id == 114,
              *v31,
              0LL);
            goto LABEL_58;
          }
          goto LABEL_79;
        }
        v44 = 0;
        if ( id != 100 && id != 110 )
        {
          if ( id == 111 || id == 101 )
            v44 = 2;
          else
            v44 = 1;
        }
        if ( !commandParam || !blankEarth )
          goto LABEL_79;
        BlankEarth__RevealEarthPoint(
          blankEarth,
          commandParam->fields.blankEarthSpotEntity,
          v44,
          (unsigned int)(id - 110) < 3,
          *v31,
          0LL);
        goto LABEL_21;
      }
      switch ( id )
      {
        case 300:
          v46 = (System_Action_object__o *)sub_1BCAA2C(
                                             System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo,
                                             v24,
                                             v36,
                                             v37);
          System_Action_object____ctor(
            v46,
            (Il2CppObject *)v22,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
            0LL);
          if ( !commandParam || !blankEarth )
            goto LABEL_79;
          BlankEarth__RotateEarthTowardsSpot(
            blankEarth,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v46,
            0LL,
            0LL);
          break;
        case 301:
          return (char)v23;
        case 302:
          v50 = (System_Action_object__o *)sub_1BCAA2C(
                                             System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo,
                                             v24,
                                             v36,
                                             v37);
          System_Action_object____ctor(
            v50,
            (Il2CppObject *)v22,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
            0LL);
          if ( !commandParam || !blankEarth )
            goto LABEL_79;
          BlankEarth__RotateEarthTowardsGimmick(
            blankEarth,
            commandParam->fields.blankEarthGimmickEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v50,
            0LL);
          break;
        case 303:
          v51 = (System_Action_object__o *)sub_1BCAA2C(
                                             System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo,
                                             v24,
                                             v36,
                                             v37);
          System_Action_object____ctor(
            v51,
            (Il2CppObject *)v22,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__,
            0LL);
          if ( !commandParam || !blankEarth )
            goto LABEL_79;
          BlankEarth__RotateEarthByLatLong(
            blankEarth,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v51,
            0LL,
            0LL);
          break;
        default:
          if ( (id & 0xFFFFFFFC) != 400 )
            goto LABEL_58;
          if ( !commandParam )
            goto LABEL_79;
          blankEarthGimmickEntity = commandParam->fields.blankEarthGimmickEntity;
          if ( !blankEarthGimmickEntity || !blankEarth )
            goto LABEL_79;
          EarthGimmick = (UnityEngine_Object_o *)BlankEarth__GetEarthGimmick(
                                                   blankEarth,
                                                   blankEarthGimmickEntity->fields.id,
                                                   0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
          v23 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(EarthGimmick, 0LL, 0LL);
          if ( ((unsigned __int8)v23 & 1) != 0 )
            goto LABEL_58;
          v52 = id & 0xFFFFFFFD;
          if ( (id & 0xFFFFFFFE) == 402 )
          {
            if ( !EarthGimmick )
              goto LABEL_79;
            BlankEarthGimmickComponent__SetDispAnimQuick((BlankEarthGimmickComponent_o *)EarthGimmick, v52 == 401, 0LL);
LABEL_76:
            LOBYTE(v23) = 1;
            *isQuickUpdate = 1;
            return (char)v23;
          }
          if ( v52 == 401 )
            v24 = 3LL;
          else
            v24 = 2LL;
          if ( !commandParam )
            goto LABEL_79;
          if ( commandParam->fields.noWait )
          {
            if ( !EarthGimmick )
              goto LABEL_79;
            BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v24, 0LL, 0LL);
            goto LABEL_76;
          }
          if ( !EarthGimmick )
            goto LABEL_79;
          BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v24, *v31, 0LL);
          break;
      }
    }
    else
    {
      ActionExtensions__Call(*v31, 0LL);
    }
LABEL_21:
    LOBYTE(v23) = 1;
  }
  return (char)v23;
}


void __fastcall BlankEarthQuestAfterAction_CommandParam___ctor(
        BlankEarthQuestAfterAction_CommandParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__0(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0LL);
}


void __fastcall BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__1(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0LL);
}


void __fastcall BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__2(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0LL);
}