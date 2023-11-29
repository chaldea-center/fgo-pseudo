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

  if ( (byte_40F90E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&spotId);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__, v5);
    byte_40F90E6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  return (BlankEarthSpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     Master_WarQuestSelectionMaster,
                                     spotId,
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


bool __fastcall BlankEarthQuestAfterAction__IsBlankEarthActive(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  UnityEngine_Object_o *monitor; // x20
  ScrTerminalListTop_o *v7; // x0

  if ( (byte_40F90E7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v2);
    byte_40F90E7 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
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
  if ( UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL) )
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
  v7 = (ScrTerminalListTop_o *)mInstance[10].monitor;
  if ( !v7 )
LABEL_23:
    sub_B170D4();
  return ScrTerminalListTop__get_IsActiveBlankEarth(v7, 0LL);
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
  __int64 v14; // x3
  __int64 v15; // x4
  BlankEarthQuestAfterAction_CommandParam_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x2
  int32_t id; // w8
  bool result; // w0
  char v26; // w9
  BlankEarthQuestAfterAction_CommandParam_o *v27; // x20
  BlankEarthQuestAfterAction_o *v28; // x0
  const MethodInfo *v29; // x2
  BlankEarthSpotEntity_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_o *param; // x21
  System_Char_array *v39; // x0
  __int64 v40; // x2
  System_String_array *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  System_String_array *v44; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v45; // x22
  BlankEarthQuestAfterAction_o *v46; // x0
  const MethodInfo *v47; // x2
  System_Int32_array **SpotEntity; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  BlankEarthQuestAfterAction_CommandParam_o *v58; // x20
  int32_t v59; // w0
  System_String_o *v60; // x21
  System_Char_array *v61; // x0
  __int64 v62; // x2
  System_String_array *v63; // x0
  System_String_array *v64; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v65; // x22
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  float v69; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v70; // x22
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  float v74; // s0
  float v75; // s8
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  float v79; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v80; // x20
  int32_t v81; // w0
  System_String_o *v82; // x21
  System_Char_array *v83; // x0
  __int64 v84; // x2
  System_String_array *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  System_String_array *v88; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v90; // x22
  float v91; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v92; // x22
  __int64 v93; // x0
  BlankEarthQuestAfterAction_o *v94; // x0
  const MethodInfo *v95; // x2

  if ( (byte_40F90E5 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, command);
    sub_B16FFC(&BlankEarthQuestAfterAction_CommandParam_TypeInfo, v11);
    byte_40F90E5 = 1;
  }
  *errorMessage = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)errorMessage,
    0LL,
    (System_String_array **)commandParam,
    (System_String_array **)errorMessage,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v16 = (BlankEarthQuestAfterAction_CommandParam_o *)sub_B170CC(
                                                       BlankEarthQuestAfterAction_CommandParam_TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14,
                                                       v15);
  BlankEarthQuestAfterAction_CommandParam___ctor(v16, 0LL);
  *commandParam = v16;
  sub_B16F98((BattleServantConfConponent_o *)commandParam, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  if ( !command )
    sub_B170D4();
  id = command->fields.id;
  result = 1;
  v26 = id - 100;
  if ( (unsigned int)(id - 100) > 0xE )
    goto LABEL_18;
  if ( ((1 << v26) & 0x1C07) == 0 )
  {
    if ( ((1 << v26) & 0x4010) != 0 )
    {
      param = command->fields.param;
      v39 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v23);
      if ( !v39 )
        sub_B170D4();
      if ( !v39->max_length )
      {
        sub_B17100(v39, v39, v40);
        sub_B170A0();
      }
      v39->m_Items[2] = 44;
      if ( !param )
        sub_B170D4();
      v41 = System_String__Split(param, v39, 0LL);
      v44 = v41;
      if ( !v41 )
        sub_B170D4();
      if ( !v41->max_length )
      {
        sub_B17100(v41, v42, v43);
        sub_B170A0();
      }
      v45 = *commandParam;
      v46 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v41->m_Items[0], 0LL);
      SpotEntity = (System_Int32_array **)BlankEarthQuestAfterAction__GetSpotEntity(v46, (int32_t)v46, v47);
      if ( !v45 )
        sub_B170D4();
      v45->fields.blankEarthSpotEntity = (struct BlankEarthSpotEntity_o *)SpotEntity;
      sub_B16F98((BattleServantConfConponent_o *)&v45->fields, SpotEntity, v49, v50, v51, v52, v53, v54);
      if ( v44->max_length <= 1 )
      {
        sub_B17100(v55, v56, v57);
        sub_B170A0();
      }
      v58 = *commandParam;
      v59 = System_Int32__Parse(v44->m_Items[1], 0LL);
      if ( !v58 )
        sub_B170D4();
      v58->fields.intValue = v59;
      return 1;
    }
LABEL_18:
    if ( id != 300 )
    {
      if ( id != 303 )
        return result;
      v60 = command->fields.param;
      v61 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v23);
      if ( !v61 )
        sub_B170D4();
      if ( !v61->max_length )
      {
        sub_B17100(v61, v61, v62);
        sub_B170A0();
      }
      v61->m_Items[2] = 44;
      if ( !v60 )
        sub_B170D4();
      v63 = System_String__Split(v60, v61, 0LL);
      v64 = v63;
      if ( !v63 )
        sub_B170D4();
      if ( (int)v63->max_length > 3 )
      {
        v65 = *commandParam;
        v69 = System_Single__Parse(v63->m_Items[2], 0LL);
        if ( !v65 )
          sub_B170D4();
        v65->fields.time = v69 * 0.001;
        v70 = *commandParam;
        if ( !*commandParam )
          sub_B170D4();
        if ( v70->fields.time < 0.0 )
        {
          v70->fields.time = 0.5;
          v70 = *commandParam;
        }
        if ( !v64->max_length )
        {
          sub_B17100(v66, v67, v68);
          sub_B170A0();
        }
        v74 = System_Single__Parse(v64->m_Items[0], 0LL);
        if ( v64->max_length <= 1 )
        {
          sub_B17100(v71, v72, v73);
          sub_B170A0();
        }
        v75 = v74;
        v79 = System_Single__Parse(v64->m_Items[1], 0LL);
        if ( !v70 )
          sub_B170D4();
        v70->fields.latLongVector.fields.x = v75;
        v70->fields.latLongVector.fields.y = v79;
        if ( v64->max_length <= 3 )
        {
          sub_B17100(v76, v77, v78);
          sub_B170A0();
        }
        v80 = *commandParam;
        v81 = System_Int32__Parse(v64->m_Items[3], 0LL);
        if ( !v80 )
          sub_B170D4();
        v80->fields.easeType = v81;
        return 1;
      }
      return 0;
    }
    v82 = command->fields.param;
    v83 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v23);
    if ( !v83 )
      sub_B170D4();
    if ( !v83->max_length )
    {
      sub_B17100(v83, v83, v84);
      sub_B170A0();
    }
    v83->m_Items[2] = 44;
    if ( !v82 )
      sub_B170D4();
    v85 = System_String__Split(v82, v83, 0LL);
    v88 = v85;
    if ( !v85 )
      sub_B170D4();
    max_length = v85->max_length;
    if ( max_length <= 0 )
      return 0;
    v90 = *commandParam;
    if ( max_length >= 3 )
    {
      v91 = System_Single__Parse(v85->m_Items[2], 0LL) * 0.001;
      if ( !v90 )
        goto LABEL_71;
    }
    else
    {
      v91 = 0.5;
      if ( !v90 )
LABEL_71:
        sub_B170D4();
    }
    v90->fields.time = v91;
    v92 = *commandParam;
    if ( (int)v88->max_length >= 2 )
    {
      v93 = System_Int32__Parse(v88->m_Items[1], 0LL);
      if ( !v92 )
        goto LABEL_72;
    }
    else
    {
      v93 = 15LL;
      if ( !v92 )
LABEL_72:
        sub_B170D4();
    }
    v92->fields.easeType = v93;
    if ( !v88->max_length )
    {
      sub_B17100(v93, v86, v87);
      sub_B170A0();
    }
    v27 = *commandParam;
    v94 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v88->m_Items[0], 0LL);
    v30 = BlankEarthQuestAfterAction__GetSpotEntity(v94, (int32_t)v94, v95);
    v37 = (System_Int32_array **)v30;
    if ( !v27 )
      sub_B170D4();
    goto LABEL_50;
  }
  v27 = *commandParam;
  v28 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
  v30 = BlankEarthQuestAfterAction__GetSpotEntity(v28, (int32_t)v28, v29);
  v37 = (System_Int32_array **)v30;
  if ( !v27 )
    sub_B170D4();
LABEL_50:
  v27->fields.blankEarthSpotEntity = v30;
  sub_B16F98((BattleServantConfConponent_o *)&v27->fields, v37, v31, v32, v33, v34, v35, v36);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o **v20; // x19
  BlankEarthQuestAfterAction_o *v21; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x4
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  const MethodInfo *v28; // x5
  TerminalSceneComponent_c *v29; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t id; // w22
  BlankEarth_o *blankEarth; // x21
  int v34; // w8
  bool v35; // w20
  const MethodInfo *v36; // x5
  int32_t v37; // w2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v39; // x19
  const MethodInfo *v40; // x5
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v41; // x19
  const MethodInfo *v42; // x6
  System_String_o *errorMessage; // [xsp+8h] [xbp-38h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F90E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__, that);
    sub_B16FFC(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, v8);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v9);
    sub_B16FFC(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__, v10);
    sub_B16FFC(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__, v11);
    sub_B16FFC(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, v12);
    byte_40F90E4 = 1;
  }
  commandParam = 0LL;
  errorMessage = 0LL;
  v13 = sub_B170CC(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, that, command, endAnimCallback, method);
  BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor((BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_43;
  *(_QWORD *)(v13 + 16) = endAnimCallback;
  v20 = (System_Action_o **)(v13 + 16);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)endAnimCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( BlankEarthQuestAfterAction__IsBlankEarthActive(v21, v22) )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v23) )
    {
      ActionExtensions__Call(*v20, 0LL);
      return 1;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v24);
      byte_40F6042 = 1;
    }
    v29 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v29 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v29->static_fields->mInstance;
    if ( !mInstance || (mTerminalList = mInstance->fields.mTerminalList) == 0LL || !command )
LABEL_43:
      sub_B170D4();
    id = command->fields.id;
    blankEarth = mTerminalList->fields.blankEarth;
    if ( (unsigned int)(id - 100) > 0xE )
      goto LABEL_33;
    v34 = 1 << (id - 100);
    if ( (v34 & 0x1C07) != 0 )
    {
      v35 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0LL);
      if ( QuestAfterAction__IsSpotHideCommand(id, 0LL) )
      {
        v37 = 0;
      }
      else if ( QuestAfterAction__IsSpotGrayCommand(id, 0LL) )
      {
        v37 = 2;
      }
      else
      {
        v37 = 1;
      }
      if ( commandParam && blankEarth )
      {
        BlankEarth__RevealEarthPoint(blankEarth, commandParam->fields.blankEarthSpotEntity, v37, v35, *v20, v36);
        return 1;
      }
      goto LABEL_43;
    }
    if ( (v34 & 0x4010) != 0 )
    {
      if ( !commandParam || !blankEarth )
        goto LABEL_43;
      BlankEarth__PlaySpotUniqueAnim(
        blankEarth,
        commandParam->fields.blankEarthSpotEntity,
        commandParam->fields.intValue,
        id == 114,
        *v20,
        v28);
    }
    else
    {
LABEL_33:
      if ( id == 300 )
      {
        v41 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo,
                                                                                     v24,
                                                                                     v25,
                                                                                     v26,
                                                                                     v27);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v41,
          (Il2CppObject *)v13,
          Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
          (const MethodInfo_24B7310 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
        if ( commandParam && blankEarth )
        {
          BlankEarth__RotateEarthTowardsSpot(
            blankEarth,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v41,
            0LL,
            v42);
          return 1;
        }
        goto LABEL_43;
      }
      if ( id == 303 )
      {
        v39 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo,
                                                                                     v24,
                                                                                     v25,
                                                                                     v26,
                                                                                     v27);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v39,
          (Il2CppObject *)v13,
          Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
          (const MethodInfo_24B7310 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
        if ( commandParam && blankEarth )
        {
          BlankEarth__RotateEarthByLatLong(
            blankEarth,
            commandParam->fields.latLongVector,
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