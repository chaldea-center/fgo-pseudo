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
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4A1C9D9 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___, *(_QWORD *)&gimmickId);
    sub_1B715CC(&DataManager_TypeInfo, v4);
    sub_1B715CC(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__, v5);
    byte_4A1C9D9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1B71828(0LL, v7);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_30F8760 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotEntity_o *__fastcall BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4A1C9D8 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&spotId);
    sub_1B715CC(&DataManager_TypeInfo, v4);
    sub_1B715CC(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__, v5);
    byte_4A1C9D8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1B71828(0LL, v7);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_30F8760 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


bool __fastcall BlankEarthQuestAfterAction__IsBlankEarthActive(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x19
  ScrTerminalListTop_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *mTerminalList; // x20

  if ( (byte_4A1C9DA & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    sub_1B715CC(&TerminalSceneComponent_TypeInfo, v2);
    byte_4A1C9DA = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A1ACFD )
  {
    sub_1B715CC(&TerminalSceneComponent_TypeInfo, method);
    byte_4A1ACFD = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return 0;
  if ( !mInstance )
    goto LABEL_19;
  mTerminalList = (UnityEngine_Object_o *)mInstance->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTerminalList, 0LL, 0LL) )
    return 0;
  v5 = mInstance->fields.mTerminalList;
  if ( !v5 )
LABEL_19:
    sub_1B71828(v5, v6);
  return ScrTerminalListTop__get_IsActiveBlankEarth(v5, 0LL);
}


bool __fastcall BlankEarthQuestAfterAction__TryGetParam(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        BlankEarthQuestAfterAction_CommandParam_o **commandParam,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t id; // w8
  unsigned int v14; // w9
  char v15; // w9
  bool result; // w0
  BlankEarthQuestAfterAction_CommandParam_o *v17; // x20
  BlankEarthQuestAfterAction_o *v18; // x0
  const MethodInfo *v19; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  BlankEarthQuestAfterAction_CommandParam_o *v24; // x20
  BlankEarthQuestAfterAction_o *v25; // x0
  const MethodInfo *v26; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  System_String_o *v31; // x0
  System_String_array *v32; // x0
  __int64 v33; // x1
  System_String_array *v34; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v36; // x22
  float v37; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v38; // x22
  __int64 v39; // x0
  System_String_o *v40; // x0
  System_String_array *v41; // x0
  __int64 v42; // x1
  System_String_array *v43; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v44; // x22
  BlankEarthQuestAfterAction_o *v45; // x0
  const MethodInfo *v46; // x2
  BlankEarthGimmickEntity_o *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x0
  __int64 v51; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v52; // x20
  __int64 v53; // x0
  __int64 v54; // x1
  System_String_o *param; // x0
  System_String_array *v56; // x0
  __int64 v57; // x1
  System_String_array *v58; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v59; // x22
  BlankEarthQuestAfterAction_o *v60; // x0
  const MethodInfo *v61; // x2
  BlankEarthSpotEntity_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x1
  System_String_o *v68; // x0
  System_String_array *v69; // x0
  __int64 v70; // x1
  System_String_array *v71; // x21
  int v72; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v73; // x22
  bool v74; // w8
  System_String_o *v75; // x0
  System_String_array *v76; // x0
  __int64 v77; // x1
  System_String_array *v78; // x21
  int v79; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v80; // x22
  float v81; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v82; // x22
  __int64 v83; // x0
  System_String_o *v84; // x0
  System_String_array *v85; // x0
  __int64 v86; // x1
  System_String_array *v87; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v88; // x22
  __int64 v89; // x0
  __int64 v90; // x1
  float v91; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v92; // x22
  __int64 v93; // x0
  __int64 v94; // x1
  float v95; // s0
  float v96; // s8
  __int64 v97; // x0
  __int64 v98; // x1
  float v99; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v100; // x20
  __int64 v101; // x0
  __int64 v102; // x1
  BlankEarthQuestAfterAction_o *v103; // x0
  const MethodInfo *v104; // x2
  BlankEarthQuestAfterAction_o *v105; // x0
  const MethodInfo *v106; // x2
  BlankEarthQuestAfterAction_o *v107; // x0
  const MethodInfo *v108; // x2

  if ( (byte_4A1C9D7 & 1) == 0 )
  {
    sub_1B715CC(&BlankEarthQuestAfterAction_CommandParam_TypeInfo, command);
    byte_4A1C9D7 = 1;
  }
  *errorMessage = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)errorMessage, 0, (int32_t)commandParam, (int32_t)errorMessage);
  v8 = (Il2CppObject *)sub_1B71818(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  System_Object___ctor(v8, 0LL);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v8;
  sub_1B71570((ServantStatusBattleListViewItem_o *)commandParam, (int32_t)v8, v9, v10);
  if ( !command )
    sub_1B71828(v11, v12);
  id = command->fields.id;
  if ( id <= 403 )
  {
    v15 = id - 100;
    result = 1;
    if ( (unsigned int)(id - 100) <= 0xE )
    {
      if ( ((1 << v15) & 0x23E8) != 0 )
        return result;
      if ( ((1 << v15) & 0x1C07) != 0 )
      {
        v17 = *commandParam;
        v18 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v18, (int32_t)v18, v19);
        v23 = (int)SpotEntity;
        if ( !v17 )
          sub_1B71828(SpotEntity, SpotEntity);
LABEL_13:
        v17->fields.blankEarthSpotEntity = SpotEntity;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v17->fields, v23, v21, v22);
        return 1;
      }
      param = command->fields.param;
      if ( !param )
        sub_1B71828(0LL, v12);
      v56 = System_String__Split(param, 0x2Cu, 0, 0LL);
      v58 = v56;
      if ( !v56 )
        sub_1B71828(0LL, v57);
      if ( !v56->max_length )
        sub_1B71830(v56, v57);
      v59 = *commandParam;
      v60 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v56->m_Items[0], 0LL);
      v62 = BlankEarthQuestAfterAction__GetSpotEntity(v60, (int32_t)v60, v61);
      if ( !v59 )
        sub_1B71828(v62, v62);
      v59->fields.blankEarthSpotEntity = v62;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v59->fields, (int32_t)v62, v63, v64);
      if ( v58->max_length <= 1 )
        sub_1B71830(v65, v66);
      v52 = *commandParam;
      v53 = System_Int32__Parse(v58->m_Items[1], 0LL);
      if ( !v52 )
        sub_1B71828(v53, v67);
      goto LABEL_40;
    }
    switch ( id )
    {
      case 300:
        v31 = command->fields.param;
        if ( !v31 )
          sub_1B71828(0LL, v12);
        v32 = System_String__Split(v31, 0x2Cu, 0, 0LL);
        v34 = v32;
        if ( !v32 )
          sub_1B71828(0LL, v33);
        max_length = v32->max_length;
        if ( max_length <= 0 )
          return 0;
        v36 = *commandParam;
        v37 = 0.5;
        if ( max_length >= 3 )
          v37 = System_Single__Parse(v32->m_Items[2], 0LL) * 0.001;
        if ( !v36 )
          sub_1B71828(v32, v33);
        v36->fields.time = v37;
        v38 = *commandParam;
        if ( (int)v34->max_length >= 2 )
          v39 = System_Int32__Parse(v34->m_Items[1], 0LL);
        else
          v39 = 15LL;
        if ( !v38 )
          sub_1B71828(v39, v33);
        v38->fields.easeType = v39;
        if ( !v34->max_length )
          sub_1B71830(v39, v33);
        v17 = *commandParam;
        v105 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v34->m_Items[0], 0LL);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v105, (int32_t)v105, v106);
        v23 = (int)SpotEntity;
        if ( !v17 )
          sub_1B71828(SpotEntity, SpotEntity);
        goto LABEL_13;
      case 301:
        return result;
      case 302:
        v75 = command->fields.param;
        if ( !v75 )
          sub_1B71828(0LL, v12);
        v76 = System_String__Split(v75, 0x2Cu, 0, 0LL);
        v78 = v76;
        if ( !v76 )
          sub_1B71828(0LL, v77);
        v79 = v76->max_length;
        if ( v79 <= 0 )
          return 0;
        v80 = *commandParam;
        v81 = 0.5;
        if ( v79 >= 3 )
          v81 = System_Single__Parse(v76->m_Items[2], 0LL) * 0.001;
        if ( !v80 )
          sub_1B71828(v76, v77);
        v80->fields.time = v81;
        v82 = *commandParam;
        if ( (int)v78->max_length >= 2 )
          v83 = System_Int32__Parse(v78->m_Items[1], 0LL);
        else
          v83 = 15LL;
        if ( !v82 )
          sub_1B71828(v83, v77);
        v82->fields.easeType = v83;
        if ( !v78->max_length )
          sub_1B71830(v83, v77);
        v24 = *commandParam;
        v103 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v78->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v103, (int32_t)v103, v104);
        v30 = (int)GimmickEntity;
        if ( !v24 )
          sub_1B71828(GimmickEntity, GimmickEntity);
        break;
      case 303:
        v84 = command->fields.param;
        if ( !v84 )
          sub_1B71828(0LL, v12);
        v85 = System_String__Split(v84, 0x2Cu, 0, 0LL);
        v87 = v85;
        if ( !v85 )
          sub_1B71828(0LL, v86);
        if ( (int)v85->max_length <= 3 )
          return 0;
        v88 = *commandParam;
        v91 = System_Single__Parse(v85->m_Items[2], 0LL);
        if ( !v88 )
          sub_1B71828(v89, v90);
        v88->fields.time = v91 * 0.001;
        v92 = *commandParam;
        if ( !*commandParam )
          sub_1B71828(v89, v90);
        if ( v92->fields.time < 0.0 )
          v92->fields.time = 0.5;
        if ( !v87->max_length )
          sub_1B71830(v89, v90);
        v95 = System_Single__Parse(v87->m_Items[0], 0LL);
        if ( v87->max_length <= 1 )
          sub_1B71830(v93, v94);
        v96 = v95;
        v99 = System_Single__Parse(v87->m_Items[1], 0LL);
        v92->fields.latLongVector.fields.x = v96;
        v92->fields.latLongVector.fields.y = v99;
        if ( v87->max_length <= 3 )
          sub_1B71830(v97, v98);
        v100 = *commandParam;
        v101 = System_Int32__Parse(v87->m_Items[3], 0LL);
        if ( !v100 )
          sub_1B71828(v101, v102);
        v100->fields.easeType = v101;
        return 1;
      default:
        if ( (id & 0xFFFFFFFC) != 400 )
          return 1;
        v68 = command->fields.param;
        if ( !v68 )
          sub_1B71828(0LL, v12);
        v69 = System_String__Split(v68, 0x2Cu, 0, 0LL);
        v71 = v69;
        if ( !v69 )
          sub_1B71828(0LL, v70);
        v72 = v69->max_length;
        if ( v72 <= 0 )
          return 0;
        v73 = *commandParam;
        if ( v72 == 1 )
        {
          v74 = 0;
        }
        else
        {
          v69 = (System_String_array *)System_Int32__Parse(v69->m_Items[1], 0LL);
          v74 = (int)v69 > 0;
        }
        if ( !v73 )
          sub_1B71828(v69, v70);
        v73->fields.noWait = v74;
        if ( !v71->max_length )
          sub_1B71830(v69, v70);
        v24 = *commandParam;
        v107 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v71->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v107, (int32_t)v107, v108);
        v30 = (int)GimmickEntity;
        if ( !v24 )
          sub_1B71828(GimmickEntity, GimmickEntity);
        return result;
    }
LABEL_83:
    v24->fields.blankEarthGimmickEntity = GimmickEntity;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v24->fields.blankEarthGimmickEntity, v30, v28, v29);
    return 1;
  }
  v14 = id & 0xFFFFFFFE;
  if ( id > 1002 )
  {
    if ( v14 != 1010 )
    {
      if ( id != 1012 )
        return 1;
      goto LABEL_27;
    }
    goto LABEL_15;
  }
  if ( v14 == 1000 )
  {
LABEL_15:
    v24 = *commandParam;
    v25 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
    GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v25, (int32_t)v25, v26);
    v30 = (int)GimmickEntity;
    if ( !v24 )
      sub_1B71828(GimmickEntity, GimmickEntity);
    goto LABEL_83;
  }
  if ( id == 1002 )
  {
LABEL_27:
    v40 = command->fields.param;
    if ( !v40 )
      sub_1B71828(0LL, v12);
    v41 = System_String__Split(v40, 0x2Cu, 0, 0LL);
    v43 = v41;
    if ( !v41 )
      sub_1B71828(0LL, v42);
    if ( !v41->max_length )
      sub_1B71830(v41, v42);
    v44 = *commandParam;
    v45 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v41->m_Items[0], 0LL);
    v47 = BlankEarthQuestAfterAction__GetGimmickEntity(v45, (int32_t)v45, v46);
    if ( !v44 )
      sub_1B71828(v47, v47);
    v44->fields.blankEarthGimmickEntity = v47;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v44->fields.blankEarthGimmickEntity, (int32_t)v47, v48, v49);
    if ( v43->max_length <= 1 )
      sub_1B71830(v50, v51);
    v52 = *commandParam;
    v53 = System_Int32__Parse(v43->m_Items[1], 0LL);
    if ( !v52 )
      sub_1B71828(v53, v54);
LABEL_40:
    v52->fields.intValue = v53;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x22
  TerminalSceneComponent_c *v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_Action_o **v21; // x19
  BlankEarthQuestAfterAction_o *v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x4
  bool IsBlankEarthActive; // w8
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t id; // w23
  BlankEarth_o *blankEarth; // x21
  unsigned int v30; // w8
  int v31; // w8
  int32_t v32; // w2
  System_Action_object__o *v34; // x19
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x21
  System_Action_object__o *v37; // x19
  System_Action_object__o *v38; // x19
  unsigned int v39; // w8
  System_String_o *errorMessage; // [xsp+8h] [xbp-48h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A1C9D6 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, that);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v10);
    sub_1B715CC(&TerminalSceneComponent_TypeInfo, v11);
    sub_1B715CC(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__, v12);
    sub_1B715CC(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__, v13);
    sub_1B715CC(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__, v14);
    sub_1B715CC(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, v15);
    byte_4A1C9D6 = 1;
  }
  commandParam = 0LL;
  errorMessage = 0LL;
  v16 = sub_1B71818(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_79;
  *(_QWORD *)(v16 + 16) = endAnimCallback;
  v21 = (System_Action_o **)(v16 + 16);
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)endAnimCallback, v19, v20);
  *isQuickUpdate = 0;
  IsBlankEarthActive = BlankEarthQuestAfterAction__IsBlankEarthActive(v22, v23);
  LOBYTE(v17) = 0;
  if ( IsBlankEarthActive )
  {
    if ( BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v24) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A1ACFD )
      {
        sub_1B715CC(&TerminalSceneComponent_TypeInfo, v18);
        byte_4A1ACFD = 1;
      }
      v17 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v17 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v17->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_79;
      mTerminalList = mInstance->fields.mTerminalList;
      if ( !mTerminalList || !command )
        goto LABEL_79;
      id = command->fields.id;
      blankEarth = mTerminalList->fields.blankEarth;
      if ( id > 403 )
      {
        v30 = id & 0xFFFFFFFE;
        if ( id <= 1002 )
        {
          if ( v30 != 1000 )
          {
            if ( id == 1002 )
              goto LABEL_45;
LABEL_58:
            LOBYTE(v17) = 0;
            return (char)v17;
          }
        }
        else if ( v30 != 1010 )
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
              *v21,
              0LL);
            goto LABEL_58;
          }
LABEL_79:
          sub_1B71828(v17, v18);
        }
        if ( !commandParam || !blankEarth )
          goto LABEL_79;
        BlankEarth__RevealOtherObject(
          blankEarth,
          commandParam->fields.blankEarthGimmickEntity,
          id != 1000 && id != 1010,
          v30 == 1010,
          *v21,
          0LL);
        goto LABEL_58;
      }
      v17 = 0LL;
      if ( (unsigned int)(id - 100) <= 0xE )
      {
        v31 = 1 << (id - 100);
        if ( (v31 & 0x23E8) != 0 )
          return (char)v17;
        if ( (v31 & 0x1C07) == 0 )
        {
          if ( commandParam && blankEarth )
          {
            BlankEarth__PlaySpotUniqueAnim(
              blankEarth,
              commandParam->fields.blankEarthSpotEntity,
              commandParam->fields.intValue,
              id == 114,
              *v21,
              0LL);
            goto LABEL_58;
          }
          goto LABEL_79;
        }
        v32 = 0;
        if ( id != 100 && id != 110 )
        {
          if ( id == 111 || id == 101 )
            v32 = 2;
          else
            v32 = 1;
        }
        if ( !commandParam || !blankEarth )
          goto LABEL_79;
        BlankEarth__RevealEarthPoint(
          blankEarth,
          commandParam->fields.blankEarthSpotEntity,
          v32,
          (unsigned int)(id - 110) < 3,
          *v21,
          0LL);
        goto LABEL_21;
      }
      switch ( id )
      {
        case 300:
          v34 = (System_Action_object__o *)sub_1B71818(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v34,
            (Il2CppObject *)v16,
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
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v34,
            0LL,
            0LL);
          break;
        case 301:
          return (char)v17;
        case 302:
          v37 = (System_Action_object__o *)sub_1B71818(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v37,
            (Il2CppObject *)v16,
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
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v37,
            0LL);
          break;
        case 303:
          v38 = (System_Action_object__o *)sub_1B71818(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v38,
            (Il2CppObject *)v16,
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
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v38,
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
          v17 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(EarthGimmick, 0LL, 0LL);
          if ( ((unsigned __int8)v17 & 1) != 0 )
            goto LABEL_58;
          v39 = id & 0xFFFFFFFD;
          if ( (id & 0xFFFFFFFE) == 402 )
          {
            if ( !EarthGimmick )
              goto LABEL_79;
            BlankEarthGimmickComponent__SetDispAnimQuick((BlankEarthGimmickComponent_o *)EarthGimmick, v39 == 401, 0LL);
LABEL_76:
            LOBYTE(v17) = 1;
            *isQuickUpdate = 1;
            return (char)v17;
          }
          if ( v39 == 401 )
            v18 = 3LL;
          else
            v18 = 2LL;
          if ( !commandParam )
            goto LABEL_79;
          if ( commandParam->fields.noWait )
          {
            if ( !EarthGimmick )
              goto LABEL_79;
            BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v18, 0LL, 0LL);
            goto LABEL_76;
          }
          if ( !EarthGimmick )
            goto LABEL_79;
          BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v18, *v21, 0LL);
          break;
      }
    }
    else
    {
      ActionExtensions__Call(*v21, 0LL);
    }
LABEL_21:
    LOBYTE(v17) = 1;
  }
  return (char)v17;
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