void __fastcall BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotEntity_o *__fastcall BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_42140FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&spotId);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__, v5);
    byte_42140FD = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  return (BlankEarthSpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     Master_WarQuestSelectionMaster,
                                     spotId,
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


bool __fastcall BlankEarthQuestAfterAction__IsBlankEarthActive(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  ScrTerminalListTop_o *v5; // x0
  UnityEngine_Object_o *monitor; // x20

  if ( (byte_42140FE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v2);
    byte_42140FE = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421083D = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return 0;
  if ( !mInstance )
    goto LABEL_23;
  monitor = (UnityEngine_Object_o *)mInstance[10].monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    return 0;
  v5 = (ScrTerminalListTop_o *)mInstance[10].monitor;
  if ( !v5 )
LABEL_23:
    sub_B0D97C(v5);
  return ScrTerminalListTop__get_IsActiveBlankEarth(v5, 0LL);
}


bool __fastcall BlankEarthQuestAfterAction__TryGetParam(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        BlankEarthQuestAfterAction_CommandParam_o **commandParam,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  BlankEarthQuestAfterAction_CommandParam_o *v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  int32_t id; // w8
  bool result; // w0
  char v24; // w9
  BlankEarthQuestAfterAction_CommandParam_o *v25; // x20
  BlankEarthQuestAfterAction_o *v26; // x0
  const MethodInfo *v27; // x2
  BlankEarthSpotEntity_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_o *param; // x21
  System_Char_array *v37; // x0
  System_String_array *v38; // x0
  System_String_array *v39; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v40; // x22
  BlankEarthQuestAfterAction_o *v41; // x0
  const MethodInfo *v42; // x2
  System_Int32_array **SpotEntity; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v51; // x20
  __int64 v52; // x0
  System_String_o *v53; // x21
  System_Char_array *v54; // x0
  System_String_array *v55; // x0
  System_String_array *v56; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v57; // x22
  __int64 v58; // x0
  float v59; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v60; // x22
  __int64 v61; // x0
  float v62; // s0
  float v63; // s8
  __int64 v64; // x0
  float v65; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v66; // x20
  __int64 v67; // x0
  System_String_o *v68; // x21
  System_Char_array *v69; // x0
  System_String_array *v70; // x0
  System_String_array *v71; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v73; // x22
  float v74; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v75; // x22
  __int64 v76; // x0
  BlankEarthQuestAfterAction_o *v77; // x0
  const MethodInfo *v78; // x2
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x0

  if ( (byte_42140FC & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, command);
    sub_B0D8A4(&BlankEarthQuestAfterAction_CommandParam_TypeInfo, v11);
    byte_42140FC = 1;
  }
  *errorMessage = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)errorMessage,
    0LL,
    (System_String_array **)commandParam,
    (System_String_array **)errorMessage,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v14 = (BlankEarthQuestAfterAction_CommandParam_o *)sub_B0D974(
                                                       BlankEarthQuestAfterAction_CommandParam_TypeInfo,
                                                       v12,
                                                       v13);
  BlankEarthQuestAfterAction_CommandParam___ctor(v14, 0LL);
  *commandParam = v14;
  sub_B0D840((BattleServantConfConponent_o *)commandParam, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  if ( !command )
    sub_B0D97C(v21);
  id = command->fields.id;
  result = 1;
  v24 = id - 100;
  if ( (unsigned int)(id - 100) > 0xE )
    goto LABEL_18;
  if ( ((1 << v24) & 0x1C07) == 0 )
  {
    if ( ((1 << v24) & 0x4010) != 0 )
    {
      param = command->fields.param;
      v37 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !v37 )
        sub_B0D97C(0LL);
      if ( !v37->max_length )
      {
        v79 = sub_B0D9A8(v37);
        sub_B0D948(v79, 0LL);
      }
      v37->m_Items[2] = 44;
      if ( !param )
        sub_B0D97C(v37);
      v38 = System_String__Split(param, v37, 0LL);
      v39 = v38;
      if ( !v38 )
        sub_B0D97C(0LL);
      if ( !v38->max_length )
      {
        v80 = sub_B0D9A8(v38);
        sub_B0D948(v80, 0LL);
      }
      v40 = *commandParam;
      v41 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v38->m_Items[0], 0LL);
      SpotEntity = (System_Int32_array **)BlankEarthQuestAfterAction__GetSpotEntity(v41, (int32_t)v41, v42);
      if ( !v40 )
        sub_B0D97C(SpotEntity);
      v40->fields.blankEarthSpotEntity = (struct BlankEarthSpotEntity_o *)SpotEntity;
      sub_B0D840((BattleServantConfConponent_o *)&v40->fields, SpotEntity, v44, v45, v46, v47, v48, v49);
      if ( v39->max_length <= 1 )
      {
        v81 = sub_B0D9A8(v50);
        sub_B0D948(v81, 0LL);
      }
      v51 = *commandParam;
      v52 = System_Int32__Parse(v39->m_Items[1], 0LL);
      if ( !v51 )
        sub_B0D97C(v52);
      v51->fields.intValue = v52;
      return 1;
    }
LABEL_18:
    if ( id != 300 )
    {
      if ( id != 303 )
        return result;
      v53 = command->fields.param;
      v54 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !v54 )
        sub_B0D97C(0LL);
      if ( !v54->max_length )
      {
        v82 = sub_B0D9A8(v54);
        sub_B0D948(v82, 0LL);
      }
      v54->m_Items[2] = 44;
      if ( !v53 )
        sub_B0D97C(v54);
      v55 = System_String__Split(v53, v54, 0LL);
      v56 = v55;
      if ( !v55 )
        sub_B0D97C(0LL);
      if ( (int)v55->max_length > 3 )
      {
        v57 = *commandParam;
        v59 = System_Single__Parse(v55->m_Items[2], 0LL);
        if ( !v57 )
          sub_B0D97C(v58);
        v57->fields.time = v59 * 0.001;
        v60 = *commandParam;
        if ( !*commandParam )
          sub_B0D97C(v58);
        if ( v60->fields.time < 0.0 )
        {
          v60->fields.time = 0.5;
          v60 = *commandParam;
        }
        if ( !v56->max_length )
        {
          v85 = sub_B0D9A8(v58);
          sub_B0D948(v85, 0LL);
        }
        v62 = System_Single__Parse(v56->m_Items[0], 0LL);
        if ( v56->max_length <= 1 )
        {
          v86 = sub_B0D9A8(v61);
          sub_B0D948(v86, 0LL);
        }
        v63 = v62;
        v65 = System_Single__Parse(v56->m_Items[1], 0LL);
        if ( !v60 )
          sub_B0D97C(v64);
        v60->fields.latLongVector.fields.x = v63;
        v60->fields.latLongVector.fields.y = v65;
        if ( v56->max_length <= 3 )
        {
          v87 = sub_B0D9A8(v64);
          sub_B0D948(v87, 0LL);
        }
        v66 = *commandParam;
        v67 = System_Int32__Parse(v56->m_Items[3], 0LL);
        if ( !v66 )
          sub_B0D97C(v67);
        v66->fields.easeType = v67;
        return 1;
      }
      return 0;
    }
    v68 = command->fields.param;
    v69 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v69 )
      sub_B0D97C(0LL);
    if ( !v69->max_length )
    {
      v83 = sub_B0D9A8(v69);
      sub_B0D948(v83, 0LL);
    }
    v69->m_Items[2] = 44;
    if ( !v68 )
      sub_B0D97C(v69);
    v70 = System_String__Split(v68, v69, 0LL);
    v71 = v70;
    if ( !v70 )
      sub_B0D97C(0LL);
    max_length = v70->max_length;
    if ( max_length <= 0 )
      return 0;
    v73 = *commandParam;
    if ( max_length >= 3 )
    {
      v74 = System_Single__Parse(v70->m_Items[2], 0LL) * 0.001;
      if ( !v73 )
        goto LABEL_71;
    }
    else
    {
      v74 = 0.5;
      if ( !v73 )
LABEL_71:
        sub_B0D97C(v70);
    }
    v73->fields.time = v74;
    v75 = *commandParam;
    if ( (int)v71->max_length >= 2 )
    {
      v76 = System_Int32__Parse(v71->m_Items[1], 0LL);
      if ( !v75 )
        goto LABEL_72;
    }
    else
    {
      v76 = 15LL;
      if ( !v75 )
LABEL_72:
        sub_B0D97C(v76);
    }
    v75->fields.easeType = v76;
    if ( !v71->max_length )
    {
      v84 = sub_B0D9A8(v76);
      sub_B0D948(v84, 0LL);
    }
    v25 = *commandParam;
    v77 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v71->m_Items[0], 0LL);
    v28 = BlankEarthQuestAfterAction__GetSpotEntity(v77, (int32_t)v77, v78);
    v35 = (System_Int32_array **)v28;
    if ( !v25 )
      sub_B0D97C(v28);
    goto LABEL_50;
  }
  v25 = *commandParam;
  v26 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
  v28 = BlankEarthQuestAfterAction__GetSpotEntity(v26, (int32_t)v26, v27);
  v35 = (System_Int32_array **)v28;
  if ( !v25 )
    sub_B0D97C(v28);
LABEL_50:
  v25->fields.blankEarthSpotEntity = v28;
  sub_B0D840((BattleServantConfConponent_o *)&v25->fields, v35, v29, v30, v31, v32, v33, v34);
  return 1;
}


bool __fastcall BlankEarthQuestAfterAction__UpdateAnim(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_o *that,
        QuestAfterAction_Command_o *command,
        System_Action_o *endAnimCallback,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  TerminalSceneComponent_c *IsSpotHideCommand; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_o **v21; // x19
  BlankEarthQuestAfterAction_o *v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x4
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x5
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t id; // w22
  BlankEarth_o *blankEarth; // x21
  int v32; // w8
  bool v33; // w20
  const MethodInfo *v34; // x5
  int32_t v35; // w2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v37; // x19
  const MethodInfo *v38; // x5
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v39; // x19
  const MethodInfo *v40; // x6
  System_String_o *errorMessage; // [xsp+8h] [xbp-38h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42140FB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__, that);
    sub_B0D8A4(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, v8);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v9);
    sub_B0D8A4(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__, v10);
    sub_B0D8A4(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__, v11);
    sub_B0D8A4(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, v12);
    byte_42140FB = 1;
  }
  commandParam = 0LL;
  errorMessage = 0LL;
  v13 = sub_B0D974(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, that, command);
  BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor((BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_43;
  *(_QWORD *)(v13 + 16) = endAnimCallback;
  v21 = (System_Action_o **)(v13 + 16);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)endAnimCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( BlankEarthQuestAfterAction__IsBlankEarthActive(v22, v23) )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v24) )
    {
      ActionExtensions__Call(*v21, 0LL);
      return 1;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v25);
      byte_421083D = 1;
    }
    IsSpotHideCommand = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsSpotHideCommand = TerminalSceneComponent_TypeInfo;
    }
    mInstance = IsSpotHideCommand->static_fields->mInstance;
    if ( !mInstance || (mTerminalList = mInstance->fields.mTerminalList) == 0LL || !command )
LABEL_43:
      sub_B0D97C(IsSpotHideCommand);
    id = command->fields.id;
    blankEarth = mTerminalList->fields.blankEarth;
    if ( (unsigned int)(id - 100) > 0xE )
      goto LABEL_33;
    v32 = 1 << (id - 100);
    if ( (v32 & 0x1C07) != 0 )
    {
      v33 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0LL);
      IsSpotHideCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotHideCommand(id, 0LL);
      if ( ((unsigned __int8)IsSpotHideCommand & 1) != 0 )
      {
        v35 = 0;
      }
      else
      {
        IsSpotHideCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotGrayCommand(id, 0LL);
        if ( ((unsigned __int8)IsSpotHideCommand & 1) != 0 )
          v35 = 2;
        else
          v35 = 1;
      }
      if ( commandParam && blankEarth )
      {
        BlankEarth__RevealEarthPoint(blankEarth, commandParam->fields.blankEarthSpotEntity, v35, v33, *v21, v34);
        return 1;
      }
      goto LABEL_43;
    }
    if ( (v32 & 0x4010) != 0 )
    {
      if ( !commandParam || !blankEarth )
        goto LABEL_43;
      BlankEarth__PlaySpotUniqueAnim(
        blankEarth,
        commandParam->fields.blankEarthSpotEntity,
        commandParam->fields.intValue,
        id == 114,
        *v21,
        v27);
    }
    else
    {
LABEL_33:
      if ( id == 300 )
      {
        v39 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo,
                                                                                     v25,
                                                                                     v26);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v39,
          (Il2CppObject *)v13,
          Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
          (const MethodInfo_246EA3C *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
        if ( commandParam && blankEarth )
        {
          BlankEarth__RotateEarthTowardsSpot(
            blankEarth,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v39,
            0LL,
            v40);
          return 1;
        }
        goto LABEL_43;
      }
      if ( id == 303 )
      {
        v37 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo,
                                                                                     v25,
                                                                                     v26);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v37,
          (Il2CppObject *)v13,
          Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
          (const MethodInfo_246EA3C *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
        if ( commandParam && blankEarth )
        {
          BlankEarth__RotateEarthByLatLong(
            blankEarth,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v37,
            0LL,
            v38);
          return 1;
        }
        goto LABEL_43;
      }
    }
  }
  return 0;
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