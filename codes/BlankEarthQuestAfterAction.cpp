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
  __int64 v7; // x1

  if ( (byte_418763A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&spotId);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__, v5);
    byte_418763A = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v7);
  return (BlankEarthSpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     Master_WarQuestSelectionMaster,
                                     spotId,
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


bool __fastcall BlankEarthQuestAfterAction__IsBlankEarthActive(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  ScrTerminalListTop_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *monitor; // x20

  if ( (byte_418763B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v2);
    byte_418763B = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
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
    sub_B2C434(v5, v6);
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
  BlankEarthQuestAfterAction_CommandParam_o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t id; // w8
  bool result; // w0
  char v23; // w9
  BlankEarthQuestAfterAction_CommandParam_o *v24; // x20
  BlankEarthQuestAfterAction_o *v25; // x0
  const MethodInfo *v26; // x2
  BlankEarthSpotEntity_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_o *param; // x21
  System_Char_array *v36; // x0
  System_String_array *v37; // x0
  __int64 v38; // x1
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
  __int64 v53; // x1
  System_String_o *v54; // x21
  System_Char_array *v55; // x0
  System_String_array *v56; // x0
  __int64 v57; // x1
  System_String_array *v58; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v59; // x22
  __int64 v60; // x0
  __int64 v61; // x1
  float v62; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v63; // x22
  __int64 v64; // x0
  float v65; // s0
  float v66; // s8
  __int64 v67; // x0
  __int64 v68; // x1
  float v69; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v70; // x20
  __int64 v71; // x0
  __int64 v72; // x1
  System_String_o *v73; // x21
  System_Char_array *v74; // x0
  System_String_array *v75; // x0
  __int64 v76; // x1
  System_String_array *v77; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v79; // x22
  float v80; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v81; // x22
  __int64 v82; // x0
  BlankEarthQuestAfterAction_o *v83; // x0
  const MethodInfo *v84; // x2
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0

  if ( (byte_4187639 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, command);
    sub_B2C35C(&BlankEarthQuestAfterAction_CommandParam_TypeInfo, v11);
    byte_4187639 = 1;
  }
  *errorMessage = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)errorMessage,
    0LL,
    (System_String_array **)commandParam,
    (System_String_array **)errorMessage,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v12 = (BlankEarthQuestAfterAction_CommandParam_o *)sub_B2C42C(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  BlankEarthQuestAfterAction_CommandParam___ctor(v12, 0LL);
  *commandParam = v12;
  sub_B2C2F8((BattleServantConfConponent_o *)commandParam, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
  if ( !command )
    sub_B2C434(v19, v20);
  id = command->fields.id;
  result = 1;
  v23 = id - 100;
  if ( (unsigned int)(id - 100) > 0xE )
    goto LABEL_18;
  if ( ((1 << v23) & 0x1C07) == 0 )
  {
    if ( ((1 << v23) & 0x4010) != 0 )
    {
      param = command->fields.param;
      v36 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !v36 )
        sub_B2C434(0LL, 0LL);
      if ( !v36->max_length )
      {
        v85 = sub_B2C460(v36);
        sub_B2C400(v85, 0LL);
      }
      v36->m_Items[2] = 44;
      if ( !param )
        sub_B2C434(v36, v36);
      v37 = System_String__Split(param, v36, 0LL);
      v39 = v37;
      if ( !v37 )
        sub_B2C434(0LL, v38);
      if ( !v37->max_length )
      {
        v86 = sub_B2C460(v37);
        sub_B2C400(v86, 0LL);
      }
      v40 = *commandParam;
      v41 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v37->m_Items[0], 0LL);
      SpotEntity = (System_Int32_array **)BlankEarthQuestAfterAction__GetSpotEntity(v41, (int32_t)v41, v42);
      if ( !v40 )
        sub_B2C434(SpotEntity, SpotEntity);
      v40->fields.blankEarthSpotEntity = (struct BlankEarthSpotEntity_o *)SpotEntity;
      sub_B2C2F8((BattleServantConfConponent_o *)&v40->fields, SpotEntity, v44, v45, v46, v47, v48, v49);
      if ( v39->max_length <= 1 )
      {
        v87 = sub_B2C460(v50);
        sub_B2C400(v87, 0LL);
      }
      v51 = *commandParam;
      v52 = System_Int32__Parse(v39->m_Items[1], 0LL);
      if ( !v51 )
        sub_B2C434(v52, v53);
      v51->fields.intValue = v52;
      return 1;
    }
LABEL_18:
    if ( id != 300 )
    {
      if ( id != 303 )
        return result;
      v54 = command->fields.param;
      v55 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !v55 )
        sub_B2C434(0LL, 0LL);
      if ( !v55->max_length )
      {
        v88 = sub_B2C460(v55);
        sub_B2C400(v88, 0LL);
      }
      v55->m_Items[2] = 44;
      if ( !v54 )
        sub_B2C434(v55, v55);
      v56 = System_String__Split(v54, v55, 0LL);
      v58 = v56;
      if ( !v56 )
        sub_B2C434(0LL, v57);
      if ( (int)v56->max_length > 3 )
      {
        v59 = *commandParam;
        v62 = System_Single__Parse(v56->m_Items[2], 0LL);
        if ( !v59 )
          sub_B2C434(v60, v61);
        v59->fields.time = v62 * 0.001;
        v63 = *commandParam;
        if ( !*commandParam )
          sub_B2C434(v60, v61);
        if ( v63->fields.time < 0.0 )
        {
          v63->fields.time = 0.5;
          v63 = *commandParam;
        }
        if ( !v58->max_length )
        {
          v91 = sub_B2C460(v60);
          sub_B2C400(v91, 0LL);
        }
        v65 = System_Single__Parse(v58->m_Items[0], 0LL);
        if ( v58->max_length <= 1 )
        {
          v92 = sub_B2C460(v64);
          sub_B2C400(v92, 0LL);
        }
        v66 = v65;
        v69 = System_Single__Parse(v58->m_Items[1], 0LL);
        if ( !v63 )
          sub_B2C434(v67, v68);
        v63->fields.latLongVector.fields.x = v66;
        v63->fields.latLongVector.fields.y = v69;
        if ( v58->max_length <= 3 )
        {
          v93 = sub_B2C460(v67);
          sub_B2C400(v93, 0LL);
        }
        v70 = *commandParam;
        v71 = System_Int32__Parse(v58->m_Items[3], 0LL);
        if ( !v70 )
          sub_B2C434(v71, v72);
        v70->fields.easeType = v71;
        return 1;
      }
      return 0;
    }
    v73 = command->fields.param;
    v74 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v74 )
      sub_B2C434(0LL, 0LL);
    if ( !v74->max_length )
    {
      v89 = sub_B2C460(v74);
      sub_B2C400(v89, 0LL);
    }
    v74->m_Items[2] = 44;
    if ( !v73 )
      sub_B2C434(v74, v74);
    v75 = System_String__Split(v73, v74, 0LL);
    v77 = v75;
    if ( !v75 )
      sub_B2C434(0LL, v76);
    max_length = v75->max_length;
    if ( max_length <= 0 )
      return 0;
    v79 = *commandParam;
    if ( max_length >= 3 )
    {
      v80 = System_Single__Parse(v75->m_Items[2], 0LL) * 0.001;
      if ( !v79 )
        goto LABEL_71;
    }
    else
    {
      v80 = 0.5;
      if ( !v79 )
LABEL_71:
        sub_B2C434(v75, v76);
    }
    v79->fields.time = v80;
    v81 = *commandParam;
    if ( (int)v77->max_length >= 2 )
    {
      v82 = System_Int32__Parse(v77->m_Items[1], 0LL);
      if ( !v81 )
        goto LABEL_72;
    }
    else
    {
      v82 = 15LL;
      if ( !v81 )
LABEL_72:
        sub_B2C434(v82, v76);
    }
    v81->fields.easeType = v82;
    if ( !v77->max_length )
    {
      v90 = sub_B2C460(v82);
      sub_B2C400(v90, 0LL);
    }
    v24 = *commandParam;
    v83 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v77->m_Items[0], 0LL);
    v27 = BlankEarthQuestAfterAction__GetSpotEntity(v83, (int32_t)v83, v84);
    v34 = (System_Int32_array **)v27;
    if ( !v24 )
      sub_B2C434(v27, v27);
    goto LABEL_50;
  }
  v24 = *commandParam;
  v25 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
  v27 = BlankEarthQuestAfterAction__GetSpotEntity(v25, (int32_t)v25, v26);
  v34 = (System_Int32_array **)v27;
  if ( !v24 )
    sub_B2C434(v27, v27);
LABEL_50:
  v24->fields.blankEarthSpotEntity = v27;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->fields, v34, v28, v29, v30, v31, v32, v33);
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
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Action_o **v22; // x19
  BlankEarthQuestAfterAction_o *v23; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x4
  const MethodInfo *v26; // x5
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t id; // w22
  BlankEarth_o *blankEarth; // x21
  int v31; // w8
  bool v32; // w20
  const MethodInfo *v33; // x5
  int32_t v34; // w2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v36; // x19
  const MethodInfo *v37; // x5
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v38; // x19
  const MethodInfo *v39; // x6
  System_String_o *errorMessage; // [xsp+8h] [xbp-38h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4187638 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__, that);
    sub_B2C35C(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, v8);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v9);
    sub_B2C35C(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__, v10);
    sub_B2C35C(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__, v11);
    sub_B2C35C(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, v12);
    byte_4187638 = 1;
  }
  commandParam = 0LL;
  errorMessage = 0LL;
  v13 = sub_B2C42C(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor((BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_43;
  *(_QWORD *)(v13 + 16) = endAnimCallback;
  v22 = (System_Action_o **)(v13 + 16);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)endAnimCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( BlankEarthQuestAfterAction__IsBlankEarthActive(v23, v24) )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v25) )
    {
      ActionExtensions__Call(*v22, 0LL);
      return 1;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v15);
      byte_4183C65 = 1;
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
      sub_B2C434(IsSpotHideCommand, v15);
    id = command->fields.id;
    blankEarth = mTerminalList->fields.blankEarth;
    if ( (unsigned int)(id - 100) > 0xE )
      goto LABEL_33;
    v31 = 1 << (id - 100);
    if ( (v31 & 0x1C07) != 0 )
    {
      v32 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0LL);
      IsSpotHideCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotHideCommand(id, 0LL);
      if ( ((unsigned __int8)IsSpotHideCommand & 1) != 0 )
      {
        v34 = 0;
      }
      else
      {
        IsSpotHideCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotGrayCommand(id, 0LL);
        if ( ((unsigned __int8)IsSpotHideCommand & 1) != 0 )
          v34 = 2;
        else
          v34 = 1;
      }
      if ( commandParam && blankEarth )
      {
        BlankEarth__RevealEarthPoint(blankEarth, commandParam->fields.blankEarthSpotEntity, v34, v32, *v22, v33);
        return 1;
      }
      goto LABEL_43;
    }
    if ( (v31 & 0x4010) != 0 )
    {
      if ( !commandParam || !blankEarth )
        goto LABEL_43;
      BlankEarth__PlaySpotUniqueAnim(
        blankEarth,
        commandParam->fields.blankEarthSpotEntity,
        commandParam->fields.intValue,
        id == 114,
        *v22,
        v26);
    }
    else
    {
LABEL_33:
      if ( id == 300 )
      {
        v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v38,
          (Il2CppObject *)v13,
          Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
        if ( commandParam && blankEarth )
        {
          BlankEarth__RotateEarthTowardsSpot(
            blankEarth,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v38,
            0LL,
            v39);
          return 1;
        }
        goto LABEL_43;
      }
      if ( id == 303 )
      {
        v36 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v36,
          (Il2CppObject *)v13,
          Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
        if ( commandParam && blankEarth )
        {
          BlankEarth__RotateEarthByLatLong(
            blankEarth,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v36,
            0LL,
            v37);
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