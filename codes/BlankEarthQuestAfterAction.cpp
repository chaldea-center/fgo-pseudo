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

  if ( (byte_49FBAC6 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___, *(_QWORD *)&gimmickId);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__, v5);
    byte_49FBAC6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1B64C5C(0LL, v7);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_30D6798 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
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

  if ( (byte_49FBAC5 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&spotId);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__, v5);
    byte_49FBAC5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1B64C5C(0LL, v7);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_30D6798 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
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

  if ( (byte_49FBAC7 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, v2);
    byte_49FBAC7 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F9DCD )
  {
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, method);
    byte_49F9DCD = 1;
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
    sub_1B64C5C(v5, v6);
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
  int32_t id; // w9
  bool v14; // w8
  char v15; // w10
  BlankEarthQuestAfterAction_CommandParam_o *v16; // x20
  BlankEarthQuestAfterAction_o *v17; // x0
  const MethodInfo *v18; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  System_String_o *param; // x0
  System_String_array *v24; // x0
  __int64 v25; // x1
  System_String_array *v26; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v28; // x22
  float v29; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v30; // x22
  __int64 v31; // x0
  System_String_o *v32; // x0
  System_String_array *v33; // x0
  __int64 v34; // x1
  System_String_array *v35; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v36; // x22
  BlankEarthQuestAfterAction_o *v37; // x0
  const MethodInfo *v38; // x2
  BlankEarthSpotEntity_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x0
  __int64 v43; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v44; // x20
  __int64 v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x0
  System_String_array *v48; // x0
  __int64 v49; // x1
  System_String_array *v50; // x21
  int v51; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v52; // x22
  bool v53; // w8
  System_String_o *v54; // x0
  System_String_array *v55; // x0
  __int64 v56; // x1
  System_String_array *v57; // x21
  int v58; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v59; // x22
  float v60; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v61; // x22
  __int64 v62; // x0
  System_String_o *v63; // x0
  System_String_array *v64; // x0
  __int64 v65; // x1
  System_String_array *v66; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v67; // x22
  __int64 v68; // x0
  __int64 v69; // x1
  float v70; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v71; // x22
  __int64 v72; // x0
  __int64 v73; // x1
  float v74; // s0
  float v75; // s8
  __int64 v76; // x0
  __int64 v77; // x1
  float v78; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v79; // x20
  __int64 v80; // x0
  __int64 v81; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v82; // x20
  BlankEarthQuestAfterAction_o *v83; // x0
  const MethodInfo *v84; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  int32_t v88; // w1
  BlankEarthQuestAfterAction_o *v89; // x0
  const MethodInfo *v90; // x2
  BlankEarthQuestAfterAction_o *v91; // x0
  const MethodInfo *v92; // x2

  if ( (byte_49FBAC4 & 1) == 0 )
  {
    sub_1B64A00(&BlankEarthQuestAfterAction_CommandParam_TypeInfo, command);
    byte_49FBAC4 = 1;
  }
  *errorMessage = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)errorMessage, 0, (int32_t)commandParam, (int32_t)errorMessage);
  v8 = (Il2CppObject *)sub_1B64C4C(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  System_Object___ctor(v8, 0LL);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v8;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)commandParam, (int32_t)v8, v9, v10);
  if ( !command )
    sub_1B64C5C(v11, v12);
  id = command->fields.id;
  v14 = 1;
  v15 = id - 100;
  if ( (unsigned int)(id - 100) > 0xE )
  {
    switch ( id )
    {
      case 300:
        param = command->fields.param;
        if ( !param )
          sub_1B64C5C(0LL, v12);
        v24 = System_String__Split(param, 0x2Cu, 0, 0LL);
        v26 = v24;
        if ( !v24 )
          sub_1B64C5C(0LL, v25);
        max_length = v24->max_length;
        if ( max_length <= 0 )
          return 0;
        v28 = *commandParam;
        v29 = 0.5;
        if ( max_length >= 3 )
          v29 = System_Single__Parse(v24->m_Items[2], 0LL) * 0.001;
        if ( !v28 )
          sub_1B64C5C(v24, v25);
        v28->fields.time = v29;
        v30 = *commandParam;
        if ( (int)v26->max_length >= 2 )
          v31 = System_Int32__Parse(v26->m_Items[1], 0LL);
        else
          v31 = 15LL;
        if ( !v30 )
          sub_1B64C5C(v31, v25);
        v30->fields.easeType = v31;
        if ( !v26->max_length )
          sub_1B64C64(v31, v25);
        v16 = *commandParam;
        v89 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v26->m_Items[0], 0LL);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v89, (int32_t)v89, v90);
        v22 = (int)SpotEntity;
        if ( !v16 )
          sub_1B64C5C(SpotEntity, SpotEntity);
        goto LABEL_8;
      case 301:
        return v14;
      case 302:
        v54 = command->fields.param;
        if ( !v54 )
          sub_1B64C5C(0LL, v12);
        v55 = System_String__Split(v54, 0x2Cu, 0, 0LL);
        v57 = v55;
        if ( !v55 )
          sub_1B64C5C(0LL, v56);
        v58 = v55->max_length;
        if ( v58 <= 0 )
          return 0;
        v59 = *commandParam;
        v60 = 0.5;
        if ( v58 >= 3 )
          v60 = System_Single__Parse(v55->m_Items[2], 0LL) * 0.001;
        if ( !v59 )
          sub_1B64C5C(v55, v56);
        v59->fields.time = v60;
        v61 = *commandParam;
        if ( (int)v57->max_length >= 2 )
          v62 = System_Int32__Parse(v57->m_Items[1], 0LL);
        else
          v62 = 15LL;
        if ( !v61 )
          sub_1B64C5C(v62, v56);
        v61->fields.easeType = v62;
        if ( !v57->max_length )
          sub_1B64C64(v62, v56);
        v82 = *commandParam;
        v83 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v57->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v83, (int32_t)v83, v84);
        v88 = (int)GimmickEntity;
        if ( !v82 )
          sub_1B64C5C(GimmickEntity, GimmickEntity);
        goto LABEL_65;
      case 303:
        v63 = command->fields.param;
        if ( !v63 )
          sub_1B64C5C(0LL, v12);
        v64 = System_String__Split(v63, 0x2Cu, 0, 0LL);
        v66 = v64;
        if ( !v64 )
          sub_1B64C5C(0LL, v65);
        if ( (int)v64->max_length <= 3 )
          return 0;
        v67 = *commandParam;
        v70 = System_Single__Parse(v64->m_Items[2], 0LL);
        if ( !v67 )
          sub_1B64C5C(v68, v69);
        v67->fields.time = v70 * 0.001;
        v71 = *commandParam;
        if ( !*commandParam )
          sub_1B64C5C(v68, v69);
        if ( v71->fields.time < 0.0 )
          v71->fields.time = 0.5;
        if ( !v66->max_length )
          sub_1B64C64(v68, v69);
        v74 = System_Single__Parse(v66->m_Items[0], 0LL);
        if ( v66->max_length <= 1 )
          sub_1B64C64(v72, v73);
        v75 = v74;
        v78 = System_Single__Parse(v66->m_Items[1], 0LL);
        v71->fields.latLongVector.fields.x = v75;
        v71->fields.latLongVector.fields.y = v78;
        if ( v66->max_length <= 3 )
          sub_1B64C64(v76, v77);
        v79 = *commandParam;
        v80 = System_Int32__Parse(v66->m_Items[3], 0LL);
        if ( !v79 )
          sub_1B64C5C(v80, v81);
        v79->fields.easeType = v80;
        return 1;
      default:
        if ( (id & 0xFFFFFFFC) != 400 )
          return 1;
        v47 = command->fields.param;
        if ( !v47 )
          sub_1B64C5C(0LL, v12);
        v48 = System_String__Split(v47, 0x2Cu, 0, 0LL);
        v50 = v48;
        if ( !v48 )
          sub_1B64C5C(0LL, v49);
        v51 = v48->max_length;
        if ( v51 <= 0 )
          return 0;
        v52 = *commandParam;
        if ( v51 == 1 )
        {
          v53 = 0;
        }
        else
        {
          v48 = (System_String_array *)System_Int32__Parse(v48->m_Items[1], 0LL);
          v53 = (int)v48 > 0;
        }
        if ( !v52 )
          sub_1B64C5C(v48, v49);
        v52->fields.noWait = v53;
        if ( !v50->max_length )
          sub_1B64C64(v48, v49);
        v82 = *commandParam;
        v91 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v50->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v91, (int32_t)v91, v92);
        v88 = (int)GimmickEntity;
        if ( !v82 )
          sub_1B64C5C(GimmickEntity, GimmickEntity);
LABEL_65:
        v82->fields.blankEarthGimmickEntity = GimmickEntity;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v82->fields.blankEarthGimmickEntity, v88, v86, v87);
        break;
    }
    return 1;
  }
  if ( ((1 << v15) & 0x23E8) == 0 )
  {
    if ( ((1 << v15) & 0x1C07) != 0 )
    {
      v16 = *commandParam;
      v17 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
      SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v17, (int32_t)v17, v18);
      v22 = (int)SpotEntity;
      if ( !v16 )
        sub_1B64C5C(SpotEntity, SpotEntity);
LABEL_8:
      v16->fields.blankEarthSpotEntity = SpotEntity;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v16->fields, v22, v20, v21);
    }
    else
    {
      v32 = command->fields.param;
      if ( !v32 )
        sub_1B64C5C(0LL, v12);
      v33 = System_String__Split(v32, 0x2Cu, 0, 0LL);
      v35 = v33;
      if ( !v33 )
        sub_1B64C5C(0LL, v34);
      if ( !v33->max_length )
        sub_1B64C64(v33, v34);
      v36 = *commandParam;
      v37 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v33->m_Items[0], 0LL);
      v39 = BlankEarthQuestAfterAction__GetSpotEntity(v37, (int32_t)v37, v38);
      if ( !v36 )
        sub_1B64C5C(v39, v39);
      v36->fields.blankEarthSpotEntity = v39;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v36->fields, (int32_t)v39, v40, v41);
      if ( v35->max_length <= 1 )
        sub_1B64C64(v42, v43);
      v44 = *commandParam;
      v45 = System_Int32__Parse(v35->m_Items[1], 0LL);
      if ( !v44 )
        sub_1B64C5C(v45, v46);
      v44->fields.intValue = v45;
    }
    return 1;
  }
  return v14;
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
  TerminalSceneComponent_c *IsGimmickDispCommand; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_Action_o **v21; // x20
  BlankEarthQuestAfterAction_o *v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x4
  bool IsBlankEarthActive; // w8
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t id; // w23
  BlankEarth_o *blankEarth; // x21
  int v30; // w8
  bool v31; // w19
  int32_t v32; // w2
  System_Action_object__o *v33; // x19
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x21
  System_Action_object__o *v36; // x19
  System_Action_object__o *v37; // x19
  bool IsNoWaitCommand; // w22
  System_String_o *errorMessage; // [xsp+8h] [xbp-48h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49FBAC3 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, that);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, v11);
    sub_1B64A00(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__, v12);
    sub_1B64A00(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__, v13);
    sub_1B64A00(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__, v14);
    sub_1B64A00(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, v15);
    byte_49FBAC3 = 1;
  }
  commandParam = 0LL;
  errorMessage = 0LL;
  v16 = sub_1B64C4C(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_63;
  *(_QWORD *)(v16 + 16) = endAnimCallback;
  v21 = (System_Action_o **)(v16 + 16);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)endAnimCallback, v19, v20);
  *isQuickUpdate = 0;
  IsBlankEarthActive = BlankEarthQuestAfterAction__IsBlankEarthActive(v22, v23);
  LOBYTE(IsGimmickDispCommand) = 0;
  if ( IsBlankEarthActive )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v24) )
    {
      ActionExtensions__Call(*v21, 0LL);
LABEL_31:
      LOBYTE(IsGimmickDispCommand) = 1;
      return (char)IsGimmickDispCommand;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F9DCD )
    {
      sub_1B64A00(&TerminalSceneComponent_TypeInfo, v18);
      byte_49F9DCD = 1;
    }
    IsGimmickDispCommand = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsGimmickDispCommand = TerminalSceneComponent_TypeInfo;
    }
    mInstance = IsGimmickDispCommand->static_fields->mInstance;
    if ( !mInstance || (mTerminalList = mInstance->fields.mTerminalList) == 0LL || !command )
LABEL_63:
      sub_1B64C5C(IsGimmickDispCommand, v18);
    id = command->fields.id;
    blankEarth = mTerminalList->fields.blankEarth;
    IsGimmickDispCommand = 0LL;
    if ( (unsigned int)(id - 100) > 0xE )
    {
      switch ( id )
      {
        case 300:
          v33 = (System_Action_object__o *)sub_1B64C4C(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v33,
            (Il2CppObject *)v16,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
            0LL);
          if ( !commandParam || !blankEarth )
            goto LABEL_63;
          BlankEarth__RotateEarthTowardsSpot(
            blankEarth,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v33,
            0LL,
            0LL);
          goto LABEL_31;
        case 301:
          return (char)IsGimmickDispCommand;
        case 302:
          v36 = (System_Action_object__o *)sub_1B64C4C(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v36,
            (Il2CppObject *)v16,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
            0LL);
          if ( !commandParam || !blankEarth )
            goto LABEL_63;
          BlankEarth__RotateEarthTowardsGimmick(
            blankEarth,
            commandParam->fields.blankEarthGimmickEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v36,
            0LL);
          goto LABEL_31;
        case 303:
          v37 = (System_Action_object__o *)sub_1B64C4C(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v37,
            (Il2CppObject *)v16,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__,
            0LL);
          if ( !commandParam || !blankEarth )
            goto LABEL_63;
          BlankEarth__RotateEarthByLatLong(
            blankEarth,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v37,
            0LL,
            0LL);
          goto LABEL_31;
        default:
          if ( (id & 0xFFFFFFFC) != 400 )
            goto LABEL_43;
          if ( !commandParam )
            goto LABEL_63;
          blankEarthGimmickEntity = commandParam->fields.blankEarthGimmickEntity;
          if ( !blankEarthGimmickEntity || !blankEarth )
            goto LABEL_63;
          EarthGimmick = (UnityEngine_Object_o *)BlankEarth__GetEarthGimmick(
                                                   blankEarth,
                                                   blankEarthGimmickEntity->fields.id,
                                                   0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(EarthGimmick, 0LL, 0LL) )
            goto LABEL_43;
          IsNoWaitCommand = QuestAfterAction__IsNoWaitCommand(id, 0LL);
          IsGimmickDispCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsGimmickDispCommand(id, 0LL);
          if ( ((unsigned __int8)IsGimmickDispCommand & 1) != 0 )
            v18 = 3LL;
          else
            v18 = 2LL;
          if ( IsNoWaitCommand )
          {
            if ( !EarthGimmick )
              goto LABEL_63;
            BlankEarthGimmickComponent__SetDispAnimQuick(
              (BlankEarthGimmickComponent_o *)EarthGimmick,
              (unsigned __int8)IsGimmickDispCommand & 1,
              0LL);
          }
          else
          {
            if ( !commandParam )
              goto LABEL_63;
            if ( !commandParam->fields.noWait )
            {
              if ( EarthGimmick )
              {
                BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v18, *v21, 0LL);
                goto LABEL_31;
              }
              goto LABEL_63;
            }
            if ( !EarthGimmick )
              goto LABEL_63;
            BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v18, 0LL, 0LL);
          }
          LOBYTE(IsGimmickDispCommand) = 1;
          *isQuickUpdate = 1;
          break;
      }
    }
    else
    {
      v30 = 1 << (id - 100);
      if ( (v30 & 0x23E8) == 0 )
      {
        if ( (v30 & 0x1C07) != 0 )
        {
          v31 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0LL);
          IsGimmickDispCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotHideCommand(id, 0LL);
          if ( ((unsigned __int8)IsGimmickDispCommand & 1) != 0 )
          {
            v32 = 0;
          }
          else
          {
            IsGimmickDispCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotGrayCommand(id, 0LL);
            if ( ((unsigned __int8)IsGimmickDispCommand & 1) != 0 )
              v32 = 2;
            else
              v32 = 1;
          }
          if ( commandParam && blankEarth )
          {
            BlankEarth__RevealEarthPoint(blankEarth, commandParam->fields.blankEarthSpotEntity, v32, v31, *v21, 0LL);
            goto LABEL_31;
          }
          goto LABEL_63;
        }
        if ( !commandParam || !blankEarth )
          goto LABEL_63;
        BlankEarth__PlaySpotUniqueAnim(
          blankEarth,
          commandParam->fields.blankEarthSpotEntity,
          commandParam->fields.intValue,
          id == 114,
          *v21,
          0LL);
LABEL_43:
        LOBYTE(IsGimmickDispCommand) = 0;
      }
    }
  }
  return (char)IsGimmickDispCommand;
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