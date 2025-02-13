void __fastcall BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BlankEarthGimmickEntity_o *__fastcall BlankEarthQuestAfterAction__GetGimmickEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4BD92D3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    byte_4BD92D3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v5);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *__fastcall BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4BD92D2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
    byte_4BD92D2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v5);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


bool __fastcall BlankEarthQuestAfterAction__IsBlankEarthActive(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x19
  ScrTerminalListTop_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *mTerminalList; // x20

  if ( (byte_4BD92D4 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD92D4 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
    return 0;
  if ( !mInstance )
    goto LABEL_19;
  mTerminalList = (UnityEngine_Object_o *)mInstance->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTerminalList, 0LL, 0LL) )
    return 0;
  v4 = mInstance->fields.mTerminalList;
  if ( !v4 )
LABEL_19:
    sub_1C22094(v4, v5);
  return ScrTerminalListTop__get_IsActiveBlankEarth(v4, 0LL);
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
  Il2CppObject *v11; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t id; // w8
  unsigned int v21; // w9
  char v22; // w9
  bool result; // w0
  BlankEarthQuestAfterAction_CommandParam_o *v24; // x20
  BlankEarthQuestAfterAction_o *v25; // x0
  const MethodInfo *v26; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v35; // x20
  BlankEarthQuestAfterAction_o *v36; // x0
  const MethodInfo *v37; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  System_String_o *v46; // x0
  System_String_array *v47; // x0
  __int64 v48; // x1
  System_String_array *v49; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v51; // x22
  float v52; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v53; // x22
  __int64 v54; // x0
  System_String_o *v55; // x0
  System_String_array *v56; // x0
  __int64 v57; // x1
  System_String_array *v58; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v59; // x22
  BlankEarthQuestAfterAction_o *v60; // x0
  const MethodInfo *v61; // x2
  BlankEarthGimmickEntity_o *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x0
  __int64 v70; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v71; // x20
  __int64 v72; // x0
  __int64 v73; // x1
  System_String_o *param; // x0
  System_String_array *v75; // x0
  __int64 v76; // x1
  System_String_array *v77; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v78; // x22
  BlankEarthQuestAfterAction_o *v79; // x0
  const MethodInfo *v80; // x2
  BlankEarthSpotEntity_o *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x0
  __int64 v89; // x1
  __int64 v90; // x1
  System_String_o *v91; // x0
  System_String_array *v92; // x0
  __int64 v93; // x1
  System_String_array *v94; // x21
  int v95; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v96; // x22
  bool v97; // w8
  System_String_o *v98; // x0
  System_String_array *v99; // x0
  __int64 v100; // x1
  System_String_array *v101; // x21
  int v102; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v103; // x22
  float v104; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v105; // x22
  __int64 v106; // x0
  System_String_o *v107; // x0
  System_String_array *v108; // x0
  __int64 v109; // x1
  System_String_array *v110; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v111; // x22
  __int64 v112; // x0
  __int64 v113; // x1
  float v114; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v115; // x22
  __int64 v116; // x0
  __int64 v117; // x1
  float v118; // s0
  float v119; // s8
  __int64 v120; // x0
  __int64 v121; // x1
  float v122; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v123; // x20
  __int64 v124; // x0
  __int64 v125; // x1
  BlankEarthQuestAfterAction_o *v126; // x0
  const MethodInfo *v127; // x2
  BlankEarthQuestAfterAction_o *v128; // x0
  const MethodInfo *v129; // x2
  BlankEarthQuestAfterAction_o *v130; // x0
  const MethodInfo *v131; // x2

  if ( (byte_4BD92D1 & 1) == 0 )
  {
    sub_1C21E38(&BlankEarthQuestAfterAction_CommandParam_TypeInfo);
    byte_4BD92D1 = 1;
  }
  *errorMessage = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)errorMessage,
    0LL,
    (int64_t)commandParam,
    (int32_t)errorMessage,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v11 = (Il2CppObject *)sub_1C22084(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  System_Object___ctor(v11, 0LL);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)commandParam, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !command )
    sub_1C22094(v18, v19);
  id = command->fields.id;
  if ( id <= 403 )
  {
    v22 = id - 100;
    result = 1;
    if ( (unsigned int)(id - 100) <= 0xE )
    {
      if ( ((1 << v22) & 0x23E8) != 0 )
        return result;
      if ( ((1 << v22) & 0x1C07) != 0 )
      {
        v24 = *commandParam;
        v25 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v25, (int32_t)v25, v26);
        v34 = (int64_t)SpotEntity;
        if ( !v24 )
          sub_1C22094(SpotEntity, SpotEntity);
LABEL_13:
        v24->fields.blankEarthSpotEntity = SpotEntity;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v24->fields, v34, v28, v29, v30, v31, v32, v33);
        return 1;
      }
      param = command->fields.param;
      if ( !param )
        sub_1C22094(0LL, v19);
      v75 = System_String__Split(param, 0x2Cu, 0, 0LL);
      v77 = v75;
      if ( !v75 )
        sub_1C22094(0LL, v76);
      if ( !v75->max_length )
        sub_1C2209C(v75, v76);
      v78 = *commandParam;
      v79 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v75->m_Items[0], 0LL);
      v81 = BlankEarthQuestAfterAction__GetSpotEntity(v79, (int32_t)v79, v80);
      if ( !v78 )
        sub_1C22094(v81, v81);
      v78->fields.blankEarthSpotEntity = v81;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v78->fields, (int64_t)v81, v82, v83, v84, v85, v86, v87);
      if ( v77->max_length <= 1 )
        sub_1C2209C(v88, v89);
      v71 = *commandParam;
      v72 = System_Int32__Parse(v77->m_Items[1], 0LL);
      if ( !v71 )
        sub_1C22094(v72, v90);
      goto LABEL_40;
    }
    switch ( id )
    {
      case 300:
        v46 = command->fields.param;
        if ( !v46 )
          sub_1C22094(0LL, v19);
        v47 = System_String__Split(v46, 0x2Cu, 0, 0LL);
        v49 = v47;
        if ( !v47 )
          sub_1C22094(0LL, v48);
        max_length = v47->max_length;
        if ( max_length <= 0 )
          return 0;
        v51 = *commandParam;
        v52 = 0.5;
        if ( max_length >= 3 )
          v52 = System_Single__Parse(v47->m_Items[2], 0LL) * 0.001;
        if ( !v51 )
          sub_1C22094(v47, v48);
        v51->fields.time = v52;
        v53 = *commandParam;
        if ( (int)v49->max_length >= 2 )
          v54 = System_Int32__Parse(v49->m_Items[1], 0LL);
        else
          v54 = 15LL;
        if ( !v53 )
          sub_1C22094(v54, v48);
        v53->fields.easeType = v54;
        if ( !v49->max_length )
          sub_1C2209C(v54, v48);
        v24 = *commandParam;
        v128 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v49->m_Items[0], 0LL);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v128, (int32_t)v128, v129);
        v34 = (int64_t)SpotEntity;
        if ( !v24 )
          sub_1C22094(SpotEntity, SpotEntity);
        goto LABEL_13;
      case 301:
        return result;
      case 302:
        v98 = command->fields.param;
        if ( !v98 )
          sub_1C22094(0LL, v19);
        v99 = System_String__Split(v98, 0x2Cu, 0, 0LL);
        v101 = v99;
        if ( !v99 )
          sub_1C22094(0LL, v100);
        v102 = v99->max_length;
        if ( v102 <= 0 )
          return 0;
        v103 = *commandParam;
        v104 = 0.5;
        if ( v102 >= 3 )
          v104 = System_Single__Parse(v99->m_Items[2], 0LL) * 0.001;
        if ( !v103 )
          sub_1C22094(v99, v100);
        v103->fields.time = v104;
        v105 = *commandParam;
        if ( (int)v101->max_length >= 2 )
          v106 = System_Int32__Parse(v101->m_Items[1], 0LL);
        else
          v106 = 15LL;
        if ( !v105 )
          sub_1C22094(v106, v100);
        v105->fields.easeType = v106;
        if ( !v101->max_length )
          sub_1C2209C(v106, v100);
        v35 = *commandParam;
        v126 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v101->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v126, (int32_t)v126, v127);
        v45 = (int64_t)GimmickEntity;
        if ( !v35 )
          sub_1C22094(GimmickEntity, GimmickEntity);
        break;
      case 303:
        v107 = command->fields.param;
        if ( !v107 )
          sub_1C22094(0LL, v19);
        v108 = System_String__Split(v107, 0x2Cu, 0, 0LL);
        v110 = v108;
        if ( !v108 )
          sub_1C22094(0LL, v109);
        if ( (int)v108->max_length <= 3 )
          return 0;
        v111 = *commandParam;
        v114 = System_Single__Parse(v108->m_Items[2], 0LL);
        if ( !v111 )
          sub_1C22094(v112, v113);
        v111->fields.time = v114 * 0.001;
        v115 = *commandParam;
        if ( !*commandParam )
          sub_1C22094(v112, v113);
        if ( v115->fields.time < 0.0 )
          v115->fields.time = 0.5;
        if ( !v110->max_length )
          sub_1C2209C(v112, v113);
        v118 = System_Single__Parse(v110->m_Items[0], 0LL);
        if ( v110->max_length <= 1 )
          sub_1C2209C(v116, v117);
        v119 = v118;
        v122 = System_Single__Parse(v110->m_Items[1], 0LL);
        v115->fields.latLongVector.fields.x = v119;
        v115->fields.latLongVector.fields.y = v122;
        if ( v110->max_length <= 3 )
          sub_1C2209C(v120, v121);
        v123 = *commandParam;
        v124 = System_Int32__Parse(v110->m_Items[3], 0LL);
        if ( !v123 )
          sub_1C22094(v124, v125);
        v123->fields.easeType = v124;
        return 1;
      default:
        if ( (id & 0xFFFFFFFC) != 400 )
          return 1;
        v91 = command->fields.param;
        if ( !v91 )
          sub_1C22094(0LL, v19);
        v92 = System_String__Split(v91, 0x2Cu, 0, 0LL);
        v94 = v92;
        if ( !v92 )
          sub_1C22094(0LL, v93);
        v95 = v92->max_length;
        if ( v95 <= 0 )
          return 0;
        v96 = *commandParam;
        if ( v95 == 1 )
        {
          v97 = 0;
        }
        else
        {
          v92 = (System_String_array *)System_Int32__Parse(v92->m_Items[1], 0LL);
          v97 = (int)v92 > 0;
        }
        if ( !v96 )
          sub_1C22094(v92, v93);
        v96->fields.noWait = v97;
        if ( !v94->max_length )
          sub_1C2209C(v92, v93);
        v35 = *commandParam;
        v130 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v94->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v130, (int32_t)v130, v131);
        v45 = (int64_t)GimmickEntity;
        if ( !v35 )
          sub_1C22094(GimmickEntity, GimmickEntity);
        return result;
    }
LABEL_83:
    v35->fields.blankEarthGimmickEntity = GimmickEntity;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v35->fields.blankEarthGimmickEntity, v45, v39, v40, v41, v42, v43, v44);
    return 1;
  }
  v21 = id & 0xFFFFFFFE;
  if ( id > 1002 )
  {
    if ( v21 != 1010 )
    {
      if ( id != 1012 )
        return 1;
      goto LABEL_27;
    }
    goto LABEL_15;
  }
  if ( v21 == 1000 )
  {
LABEL_15:
    v35 = *commandParam;
    v36 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
    GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v36, (int32_t)v36, v37);
    v45 = (int64_t)GimmickEntity;
    if ( !v35 )
      sub_1C22094(GimmickEntity, GimmickEntity);
    goto LABEL_83;
  }
  if ( id == 1002 )
  {
LABEL_27:
    v55 = command->fields.param;
    if ( !v55 )
      sub_1C22094(0LL, v19);
    v56 = System_String__Split(v55, 0x2Cu, 0, 0LL);
    v58 = v56;
    if ( !v56 )
      sub_1C22094(0LL, v57);
    if ( !v56->max_length )
      sub_1C2209C(v56, v57);
    v59 = *commandParam;
    v60 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v56->m_Items[0], 0LL);
    v62 = BlankEarthQuestAfterAction__GetGimmickEntity(v60, (int32_t)v60, v61);
    if ( !v59 )
      sub_1C22094(v62, v62);
    v59->fields.blankEarthGimmickEntity = v62;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v59->fields.blankEarthGimmickEntity,
      (int64_t)v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    if ( v58->max_length <= 1 )
      sub_1C2209C(v69, v70);
    v71 = *commandParam;
    v72 = System_Int32__Parse(v58->m_Items[1], 0LL);
    if ( !v71 )
      sub_1C22094(v72, v73);
LABEL_40:
    v71->fields.intValue = v72;
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
  __int64 v10; // x22
  TerminalSceneComponent_c *v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Action_o **v19; // x19
  BlankEarthQuestAfterAction_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x4
  bool IsBlankEarthActive; // w8
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t id; // w23
  BlankEarth_o *blankEarth; // x21
  unsigned int v28; // w8
  int v29; // w8
  int32_t v30; // w2
  System_Action_object__o *v32; // x19
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x21
  System_Action_object__o *v35; // x19
  System_Action_object__o *v36; // x19
  unsigned int v37; // w8
  System_String_o *errorMessage; // [xsp+8h] [xbp-48h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BD92D0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__);
    sub_1C21E38(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__);
    sub_1C21E38(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__);
    sub_1C21E38(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
    byte_4BD92D0 = 1;
  }
  commandParam = 0LL;
  errorMessage = 0LL;
  v10 = sub_1C22084(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_79;
  *(_QWORD *)(v10 + 16) = endAnimCallback;
  v19 = (System_Action_o **)(v10 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)endAnimCallback, v13, v14, v15, v16, v17, v18);
  *isQuickUpdate = 0;
  IsBlankEarthActive = BlankEarthQuestAfterAction__IsBlankEarthActive(v20, v21);
  LOBYTE(v11) = 0;
  if ( IsBlankEarthActive )
  {
    if ( BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v22) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      v11 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v11 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v11->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_79;
      mTerminalList = mInstance->fields.mTerminalList;
      if ( !mTerminalList || !command )
        goto LABEL_79;
      id = command->fields.id;
      blankEarth = mTerminalList->fields.blankEarth;
      if ( id > 403 )
      {
        v28 = id & 0xFFFFFFFE;
        if ( id <= 1002 )
        {
          if ( v28 != 1000 )
          {
            if ( id == 1002 )
              goto LABEL_45;
LABEL_58:
            LOBYTE(v11) = 0;
            return (char)v11;
          }
        }
        else if ( v28 != 1010 )
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
              *v19,
              0LL);
            goto LABEL_58;
          }
LABEL_79:
          sub_1C22094(v11, v12);
        }
        if ( !commandParam || !blankEarth )
          goto LABEL_79;
        BlankEarth__RevealOtherObject(
          blankEarth,
          commandParam->fields.blankEarthGimmickEntity,
          id != 1000 && id != 1010,
          v28 == 1010,
          *v19,
          0LL);
        goto LABEL_58;
      }
      v11 = 0LL;
      if ( (unsigned int)(id - 100) <= 0xE )
      {
        v29 = 1 << (id - 100);
        if ( (v29 & 0x23E8) != 0 )
          return (char)v11;
        if ( (v29 & 0x1C07) == 0 )
        {
          if ( commandParam && blankEarth )
          {
            BlankEarth__PlaySpotUniqueAnim(
              blankEarth,
              commandParam->fields.blankEarthSpotEntity,
              commandParam->fields.intValue,
              id == 114,
              *v19,
              0LL);
            goto LABEL_58;
          }
          goto LABEL_79;
        }
        v30 = 0;
        if ( id != 100 && id != 110 )
        {
          if ( id == 111 || id == 101 )
            v30 = 2;
          else
            v30 = 1;
        }
        if ( !commandParam || !blankEarth )
          goto LABEL_79;
        BlankEarth__RevealEarthPoint(
          blankEarth,
          commandParam->fields.blankEarthSpotEntity,
          v30,
          (unsigned int)(id - 110) < 3,
          *v19,
          0LL);
        goto LABEL_21;
      }
      switch ( id )
      {
        case 300:
          v32 = (System_Action_object__o *)sub_1C22084(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v32,
            (Il2CppObject *)v10,
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
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v32,
            0LL,
            0LL);
          break;
        case 301:
          return (char)v11;
        case 302:
          v35 = (System_Action_object__o *)sub_1C22084(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v35,
            (Il2CppObject *)v10,
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
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v35,
            0LL);
          break;
        case 303:
          v36 = (System_Action_object__o *)sub_1C22084(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v36,
            (Il2CppObject *)v10,
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
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v36,
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
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v11 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(EarthGimmick, 0LL, 0LL);
          if ( ((unsigned __int8)v11 & 1) != 0 )
            goto LABEL_58;
          v37 = id & 0xFFFFFFFD;
          if ( (id & 0xFFFFFFFE) == 402 )
          {
            if ( !EarthGimmick )
              goto LABEL_79;
            BlankEarthGimmickComponent__SetDispAnimQuick((BlankEarthGimmickComponent_o *)EarthGimmick, v37 == 401, 0LL);
LABEL_76:
            LOBYTE(v11) = 1;
            *isQuickUpdate = 1;
            return (char)v11;
          }
          if ( v37 == 401 )
            v12 = 3LL;
          else
            v12 = 2LL;
          if ( !commandParam )
            goto LABEL_79;
          if ( commandParam->fields.noWait )
          {
            if ( !EarthGimmick )
              goto LABEL_79;
            BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v12, 0LL, 0LL);
            goto LABEL_76;
          }
          if ( !EarthGimmick )
            goto LABEL_79;
          BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v12, *v19, 0LL);
          break;
      }
    }
    else
    {
      ActionExtensions__Call(*v19, 0LL);
    }
LABEL_21:
    LOBYTE(v11) = 1;
  }
  return (char)v11;
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