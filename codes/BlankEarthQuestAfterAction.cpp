void __fastcall BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BlankEarthSpotEntity_o *__fastcall BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1

  if ( (byte_42AFD57 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
    byte_42AFD57 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v5);
  return (BlankEarthSpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     Master_WarQuestSelectionMaster,
                                     spotId,
                                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


bool __fastcall BlankEarthQuestAfterAction__IsBlankEarthActive(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  ScrTerminalListTop_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *monitor; // x20

  if ( (byte_42AFD58 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AFD58 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
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
  v4 = (ScrTerminalListTop_o *)mInstance[10].monitor;
  if ( !v4 )
LABEL_23:
    sub_B52A5C(v4, v5);
  return ScrTerminalListTop__get_IsActiveBlankEarth(v4, 0LL);
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
  BlankEarthQuestAfterAction_CommandParam_o *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t id; // w8
  bool result; // w0
  char v22; // w9
  BlankEarthQuestAfterAction_CommandParam_o *v23; // x20
  BlankEarthQuestAfterAction_o *v24; // x0
  const MethodInfo *v25; // x2
  BlankEarthSpotEntity_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_o *param; // x21
  System_Char_array *v35; // x0
  System_String_array *v36; // x0
  __int64 v37; // x1
  System_String_array *v38; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v39; // x22
  BlankEarthQuestAfterAction_o *v40; // x0
  const MethodInfo *v41; // x2
  System_Int32_array **SpotEntity; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v50; // x20
  __int64 v51; // x0
  __int64 v52; // x1
  System_String_o *v53; // x21
  System_Char_array *v54; // x0
  System_String_array *v55; // x0
  __int64 v56; // x1
  System_String_array *v57; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v58; // x22
  __int64 v59; // x0
  __int64 v60; // x1
  float v61; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v62; // x22
  __int64 v63; // x0
  float v64; // s0
  float v65; // s8
  __int64 v66; // x0
  __int64 v67; // x1
  float v68; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v69; // x20
  __int64 v70; // x0
  __int64 v71; // x1
  System_String_o *v72; // x21
  System_Char_array *v73; // x0
  System_String_array *v74; // x0
  __int64 v75; // x1
  System_String_array *v76; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v78; // x22
  float v79; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v80; // x22
  __int64 v81; // x0
  BlankEarthQuestAfterAction_o *v82; // x0
  const MethodInfo *v83; // x2
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x0

  if ( (byte_42AFD56 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&BlankEarthQuestAfterAction_CommandParam_TypeInfo);
    byte_42AFD56 = 1;
  }
  *errorMessage = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)errorMessage,
    0LL,
    (System_String_array **)commandParam,
    (System_String_array **)errorMessage,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v11 = (BlankEarthQuestAfterAction_CommandParam_o *)sub_B52A54(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  BlankEarthQuestAfterAction_CommandParam___ctor(v11, 0LL);
  *commandParam = v11;
  sub_B52920((BattleServantConfConponent_o *)commandParam, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  if ( !command )
    sub_B52A5C(v18, v19);
  id = command->fields.id;
  result = 1;
  v22 = id - 100;
  if ( (unsigned int)(id - 100) > 0xE )
    goto LABEL_18;
  if ( ((1 << v22) & 0x1C07) == 0 )
  {
    if ( ((1 << v22) & 0x4010) != 0 )
    {
      param = command->fields.param;
      v35 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
      if ( !v35 )
        sub_B52A5C(0LL, 0LL);
      if ( !v35->max_length )
      {
        v84 = sub_B52A88(v35);
        sub_B52A28(v84, 0LL);
      }
      v35->m_Items[2] = 44;
      if ( !param )
        sub_B52A5C(v35, v35);
      v36 = System_String__Split(param, v35, 0LL);
      v38 = v36;
      if ( !v36 )
        sub_B52A5C(0LL, v37);
      if ( !v36->max_length )
      {
        v85 = sub_B52A88(v36);
        sub_B52A28(v85, 0LL);
      }
      v39 = *commandParam;
      v40 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v36->m_Items[0], 0LL);
      SpotEntity = (System_Int32_array **)BlankEarthQuestAfterAction__GetSpotEntity(v40, (int32_t)v40, v41);
      if ( !v39 )
        sub_B52A5C(SpotEntity, SpotEntity);
      v39->fields.blankEarthSpotEntity = (struct BlankEarthSpotEntity_o *)SpotEntity;
      sub_B52920((BattleServantConfConponent_o *)&v39->fields, SpotEntity, v43, v44, v45, v46, v47, v48);
      if ( v38->max_length <= 1 )
      {
        v86 = sub_B52A88(v49);
        sub_B52A28(v86, 0LL);
      }
      v50 = *commandParam;
      v51 = System_Int32__Parse(v38->m_Items[1], 0LL);
      if ( !v50 )
        sub_B52A5C(v51, v52);
      v50->fields.intValue = v51;
      return 1;
    }
LABEL_18:
    if ( id != 300 )
    {
      if ( id != 303 )
        return result;
      v53 = command->fields.param;
      v54 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
      if ( !v54 )
        sub_B52A5C(0LL, 0LL);
      if ( !v54->max_length )
      {
        v87 = sub_B52A88(v54);
        sub_B52A28(v87, 0LL);
      }
      v54->m_Items[2] = 44;
      if ( !v53 )
        sub_B52A5C(v54, v54);
      v55 = System_String__Split(v53, v54, 0LL);
      v57 = v55;
      if ( !v55 )
        sub_B52A5C(0LL, v56);
      if ( (int)v55->max_length > 3 )
      {
        v58 = *commandParam;
        v61 = System_Single__Parse(v55->m_Items[2], 0LL);
        if ( !v58 )
          sub_B52A5C(v59, v60);
        v58->fields.time = v61 * 0.001;
        v62 = *commandParam;
        if ( !*commandParam )
          sub_B52A5C(v59, v60);
        if ( v62->fields.time < 0.0 )
        {
          v62->fields.time = 0.5;
          v62 = *commandParam;
        }
        if ( !v57->max_length )
        {
          v90 = sub_B52A88(v59);
          sub_B52A28(v90, 0LL);
        }
        v64 = System_Single__Parse(v57->m_Items[0], 0LL);
        if ( v57->max_length <= 1 )
        {
          v91 = sub_B52A88(v63);
          sub_B52A28(v91, 0LL);
        }
        v65 = v64;
        v68 = System_Single__Parse(v57->m_Items[1], 0LL);
        if ( !v62 )
          sub_B52A5C(v66, v67);
        v62->fields.latLongVector.fields.x = v65;
        v62->fields.latLongVector.fields.y = v68;
        if ( v57->max_length <= 3 )
        {
          v92 = sub_B52A88(v66);
          sub_B52A28(v92, 0LL);
        }
        v69 = *commandParam;
        v70 = System_Int32__Parse(v57->m_Items[3], 0LL);
        if ( !v69 )
          sub_B52A5C(v70, v71);
        v69->fields.easeType = v70;
        return 1;
      }
      return 0;
    }
    v72 = command->fields.param;
    v73 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
    if ( !v73 )
      sub_B52A5C(0LL, 0LL);
    if ( !v73->max_length )
    {
      v88 = sub_B52A88(v73);
      sub_B52A28(v88, 0LL);
    }
    v73->m_Items[2] = 44;
    if ( !v72 )
      sub_B52A5C(v73, v73);
    v74 = System_String__Split(v72, v73, 0LL);
    v76 = v74;
    if ( !v74 )
      sub_B52A5C(0LL, v75);
    max_length = v74->max_length;
    if ( max_length <= 0 )
      return 0;
    v78 = *commandParam;
    if ( max_length >= 3 )
    {
      v79 = System_Single__Parse(v74->m_Items[2], 0LL) * 0.001;
      if ( !v78 )
        goto LABEL_71;
    }
    else
    {
      v79 = 0.5;
      if ( !v78 )
LABEL_71:
        sub_B52A5C(v74, v75);
    }
    v78->fields.time = v79;
    v80 = *commandParam;
    if ( (int)v76->max_length >= 2 )
    {
      v81 = System_Int32__Parse(v76->m_Items[1], 0LL);
      if ( !v80 )
        goto LABEL_72;
    }
    else
    {
      v81 = 15LL;
      if ( !v80 )
LABEL_72:
        sub_B52A5C(v81, v75);
    }
    v80->fields.easeType = v81;
    if ( !v76->max_length )
    {
      v89 = sub_B52A88(v81);
      sub_B52A28(v89, 0LL);
    }
    v23 = *commandParam;
    v82 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v76->m_Items[0], 0LL);
    v26 = BlankEarthQuestAfterAction__GetSpotEntity(v82, (int32_t)v82, v83);
    v33 = (System_Int32_array **)v26;
    if ( !v23 )
      sub_B52A5C(v26, v26);
    goto LABEL_50;
  }
  v23 = *commandParam;
  v24 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
  v26 = BlankEarthQuestAfterAction__GetSpotEntity(v24, (int32_t)v24, v25);
  v33 = (System_Int32_array **)v26;
  if ( !v23 )
    sub_B52A5C(v26, v26);
LABEL_50:
  v23->fields.blankEarthSpotEntity = v26;
  sub_B52920((BattleServantConfConponent_o *)&v23->fields, v33, v27, v28, v29, v30, v31, v32);
  return 1;
}


bool __fastcall BlankEarthQuestAfterAction__UpdateAnim(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_o *that,
        QuestAfterAction_Command_o *command,
        System_Action_o *endAnimCallback,
        const MethodInfo *method)
{
  __int64 v8; // x20
  TerminalSceneComponent_c *IsSpotHideCommand; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Action_o **v17; // x19
  BlankEarthQuestAfterAction_o *v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x5
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t id; // w22
  BlankEarth_o *blankEarth; // x21
  int v26; // w8
  bool v27; // w20
  const MethodInfo *v28; // x5
  int32_t v29; // w2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x19
  const MethodInfo *v32; // x5
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v33; // x19
  const MethodInfo *v34; // x6
  System_String_o *errorMessage; // [xsp+8h] [xbp-38h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42AFD55 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
    sub_B52984(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__);
    sub_B52984(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__);
    sub_B52984(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
    byte_42AFD55 = 1;
  }
  commandParam = 0LL;
  errorMessage = 0LL;
  v8 = sub_B52A54(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor((BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_43;
  *(_QWORD *)(v8 + 16) = endAnimCallback;
  v17 = (System_Action_o **)(v8 + 16);
  sub_B52920(
    (BattleServantConfConponent_o *)(v8 + 16),
    (System_Int32_array **)endAnimCallback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( BlankEarthQuestAfterAction__IsBlankEarthActive(v18, v19) )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v20) )
    {
      ActionExtensions__Call(*v17, 0LL);
      return 1;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42AC2A0 )
    {
      sub_B52984(&TerminalSceneComponent_TypeInfo);
      byte_42AC2A0 = 1;
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
      sub_B52A5C(IsSpotHideCommand, v10);
    id = command->fields.id;
    blankEarth = mTerminalList->fields.blankEarth;
    if ( (unsigned int)(id - 100) > 0xE )
      goto LABEL_33;
    v26 = 1 << (id - 100);
    if ( (v26 & 0x1C07) != 0 )
    {
      v27 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0LL);
      IsSpotHideCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotHideCommand(id, 0LL);
      if ( ((unsigned __int8)IsSpotHideCommand & 1) != 0 )
      {
        v29 = 0;
      }
      else
      {
        IsSpotHideCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotGrayCommand(id, 0LL);
        if ( ((unsigned __int8)IsSpotHideCommand & 1) != 0 )
          v29 = 2;
        else
          v29 = 1;
      }
      if ( commandParam && blankEarth )
      {
        BlankEarth__RevealEarthPoint(blankEarth, commandParam->fields.blankEarthSpotEntity, v29, v27, *v17, v28);
        return 1;
      }
      goto LABEL_43;
    }
    if ( (v26 & 0x4010) != 0 )
    {
      if ( !commandParam || !blankEarth )
        goto LABEL_43;
      BlankEarth__PlaySpotUniqueAnim(
        blankEarth,
        commandParam->fields.blankEarthSpotEntity,
        commandParam->fields.intValue,
        id == 114,
        *v17,
        v21);
    }
    else
    {
LABEL_33:
      if ( id == 300 )
      {
        v33 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v33,
          (Il2CppObject *)v8,
          Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
          (const MethodInfo_2627780 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
        if ( commandParam && blankEarth )
        {
          BlankEarth__RotateEarthTowardsSpot(
            blankEarth,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v33,
            0LL,
            v34);
          return 1;
        }
        goto LABEL_43;
      }
      if ( id == 303 )
      {
        v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v31,
          (Il2CppObject *)v8,
          Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
          (const MethodInfo_2627780 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
        if ( commandParam && blankEarth )
        {
          BlankEarth__RotateEarthByLatLong(
            blankEarth,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v31,
            0LL,
            v32);
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