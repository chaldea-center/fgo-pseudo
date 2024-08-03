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

  if ( (byte_49F93B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___, *(_QWORD *)&gimmickId);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__, v5);
    byte_49F93B7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
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

  if ( (byte_49F93B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, *(_QWORD *)&spotId);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__, v5);
    byte_49F93B6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


bool __fastcall BlankEarthQuestAfterAction__IsBlankEarthActive(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x19
  ScrTerminalListTop_o *v5; // x0
  UnityEngine_Object_o *mTerminalList; // x20

  if ( (byte_49F93B8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v2);
    byte_49F93B8 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F76BD = 1;
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
    sub_1B64324(v5);
  return ScrTerminalListTop__get_IsActiveBlankEarth(v5, 0LL);
}


bool __fastcall BlankEarthQuestAfterAction__TryGetParam(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        BlankEarthQuestAfterAction_CommandParam_o **commandParam,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x0
  int32_t id; // w9
  bool v15; // w8
  char v16; // w10
  BlankEarthQuestAfterAction_CommandParam_o *v17; // x20
  BlankEarthQuestAfterAction_o *v18; // x0
  const MethodInfo *v19; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  System_String_o *param; // x0
  System_String_array *v25; // x0
  __int64 v26; // x1
  System_String_array *v27; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v29; // x22
  float v30; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v31; // x22
  __int64 v32; // x0
  System_String_o *v33; // x0
  System_String_array *v34; // x0
  __int64 v35; // x1
  System_String_array *v36; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v37; // x22
  BlankEarthQuestAfterAction_o *v38; // x0
  const MethodInfo *v39; // x2
  BlankEarthSpotEntity_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x0
  __int64 v44; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v45; // x20
  __int64 v46; // x0
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
  System_String_array *v65; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v66; // x22
  __int64 v67; // x0
  __int64 v68; // x1
  float v69; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v70; // x22
  __int64 v71; // x0
  __int64 v72; // x1
  float v73; // s0
  float v74; // s8
  __int64 v75; // x0
  __int64 v76; // x1
  float v77; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v78; // x20
  __int64 v79; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v80; // x20
  BlankEarthQuestAfterAction_o *v81; // x0
  const MethodInfo *v82; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  int32_t v86; // w1
  BlankEarthQuestAfterAction_o *v87; // x0
  const MethodInfo *v88; // x2
  BlankEarthQuestAfterAction_o *v89; // x0
  const MethodInfo *v90; // x2

  if ( (byte_49F93B5 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthQuestAfterAction_CommandParam_TypeInfo, command);
    byte_49F93B5 = 1;
  }
  *errorMessage = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)errorMessage, 0, (int32_t)commandParam, (int32_t)errorMessage);
  v10 = (Il2CppObject *)sub_1B64314(BlankEarthQuestAfterAction_CommandParam_TypeInfo, v8, v9);
  System_Object___ctor(v10, 0LL);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)commandParam, (int32_t)v10, v11, v12);
  if ( !command )
    sub_1B64324(v13);
  id = command->fields.id;
  v15 = 1;
  v16 = id - 100;
  if ( (unsigned int)(id - 100) > 0xE )
  {
    switch ( id )
    {
      case 300:
        param = command->fields.param;
        if ( !param )
          sub_1B64324(0LL);
        v25 = System_String__Split(param, 0x2Cu, 0, 0LL);
        v27 = v25;
        if ( !v25 )
          sub_1B64324(0LL);
        max_length = v25->max_length;
        if ( max_length <= 0 )
          return 0;
        v29 = *commandParam;
        v30 = 0.5;
        if ( max_length >= 3 )
          v30 = System_Single__Parse(v25->m_Items[2], 0LL) * 0.001;
        if ( !v29 )
          sub_1B64324(v25);
        v29->fields.time = v30;
        v31 = *commandParam;
        if ( (int)v27->max_length >= 2 )
          v32 = System_Int32__Parse(v27->m_Items[1], 0LL);
        else
          v32 = 15LL;
        if ( !v31 )
          sub_1B64324(v32);
        v31->fields.easeType = v32;
        if ( !v27->max_length )
          sub_1B6432C(v32, v26);
        v17 = *commandParam;
        v87 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v27->m_Items[0], 0LL);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v87, (int32_t)v87, v88);
        v23 = (int)SpotEntity;
        if ( !v17 )
          sub_1B64324(SpotEntity);
        goto LABEL_8;
      case 301:
        return v15;
      case 302:
        v54 = command->fields.param;
        if ( !v54 )
          sub_1B64324(0LL);
        v55 = System_String__Split(v54, 0x2Cu, 0, 0LL);
        v57 = v55;
        if ( !v55 )
          sub_1B64324(0LL);
        v58 = v55->max_length;
        if ( v58 <= 0 )
          return 0;
        v59 = *commandParam;
        v60 = 0.5;
        if ( v58 >= 3 )
          v60 = System_Single__Parse(v55->m_Items[2], 0LL) * 0.001;
        if ( !v59 )
          sub_1B64324(v55);
        v59->fields.time = v60;
        v61 = *commandParam;
        if ( (int)v57->max_length >= 2 )
          v62 = System_Int32__Parse(v57->m_Items[1], 0LL);
        else
          v62 = 15LL;
        if ( !v61 )
          sub_1B64324(v62);
        v61->fields.easeType = v62;
        if ( !v57->max_length )
          sub_1B6432C(v62, v56);
        v80 = *commandParam;
        v81 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v57->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v81, (int32_t)v81, v82);
        v86 = (int)GimmickEntity;
        if ( !v80 )
          sub_1B64324(GimmickEntity);
        goto LABEL_65;
      case 303:
        v63 = command->fields.param;
        if ( !v63 )
          sub_1B64324(0LL);
        v64 = System_String__Split(v63, 0x2Cu, 0, 0LL);
        v65 = v64;
        if ( !v64 )
          sub_1B64324(0LL);
        if ( (int)v64->max_length <= 3 )
          return 0;
        v66 = *commandParam;
        v69 = System_Single__Parse(v64->m_Items[2], 0LL);
        if ( !v66 )
          sub_1B64324(v67);
        v66->fields.time = v69 * 0.001;
        v70 = *commandParam;
        if ( !*commandParam )
          sub_1B64324(v67);
        if ( v70->fields.time < 0.0 )
          v70->fields.time = 0.5;
        if ( !v65->max_length )
          sub_1B6432C(v67, v68);
        v73 = System_Single__Parse(v65->m_Items[0], 0LL);
        if ( v65->max_length <= 1 )
          sub_1B6432C(v71, v72);
        v74 = v73;
        v77 = System_Single__Parse(v65->m_Items[1], 0LL);
        v70->fields.latLongVector.fields.x = v74;
        v70->fields.latLongVector.fields.y = v77;
        if ( v65->max_length <= 3 )
          sub_1B6432C(v75, v76);
        v78 = *commandParam;
        v79 = System_Int32__Parse(v65->m_Items[3], 0LL);
        if ( !v78 )
          sub_1B64324(v79);
        v78->fields.easeType = v79;
        return 1;
      default:
        if ( (id & 0xFFFFFFFC) != 400 )
          return 1;
        v47 = command->fields.param;
        if ( !v47 )
          sub_1B64324(0LL);
        v48 = System_String__Split(v47, 0x2Cu, 0, 0LL);
        v50 = v48;
        if ( !v48 )
          sub_1B64324(0LL);
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
          sub_1B64324(v48);
        v52->fields.noWait = v53;
        if ( !v50->max_length )
          sub_1B6432C(v48, v49);
        v80 = *commandParam;
        v89 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v50->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v89, (int32_t)v89, v90);
        v86 = (int)GimmickEntity;
        if ( !v80 )
          sub_1B64324(GimmickEntity);
LABEL_65:
        v80->fields.blankEarthGimmickEntity = GimmickEntity;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v80->fields.blankEarthGimmickEntity, v86, v84, v85);
        break;
    }
    return 1;
  }
  if ( ((1 << v16) & 0x23E8) == 0 )
  {
    if ( ((1 << v16) & 0x1C07) != 0 )
    {
      v17 = *commandParam;
      v18 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
      SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v18, (int32_t)v18, v19);
      v23 = (int)SpotEntity;
      if ( !v17 )
        sub_1B64324(SpotEntity);
LABEL_8:
      v17->fields.blankEarthSpotEntity = SpotEntity;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->fields, v23, v21, v22);
    }
    else
    {
      v33 = command->fields.param;
      if ( !v33 )
        sub_1B64324(0LL);
      v34 = System_String__Split(v33, 0x2Cu, 0, 0LL);
      v36 = v34;
      if ( !v34 )
        sub_1B64324(0LL);
      if ( !v34->max_length )
        sub_1B6432C(v34, v35);
      v37 = *commandParam;
      v38 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v34->m_Items[0], 0LL);
      v40 = BlankEarthQuestAfterAction__GetSpotEntity(v38, (int32_t)v38, v39);
      if ( !v37 )
        sub_1B64324(v40);
      v37->fields.blankEarthSpotEntity = v40;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->fields, (int32_t)v40, v41, v42);
      if ( v36->max_length <= 1 )
        sub_1B6432C(v43, v44);
      v45 = *commandParam;
      v46 = System_Int32__Parse(v36->m_Items[1], 0LL);
      if ( !v45 )
        sub_1B64324(v46);
      v45->fields.intValue = v46;
    }
    return 1;
  }
  return v15;
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_Action_o **v20; // x20
  BlankEarthQuestAfterAction_o *v21; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x4
  bool IsBlankEarthActive; // w8
  __int64 v25; // x1
  __int64 v26; // x2
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t id; // w23
  BlankEarth_o *blankEarth; // x21
  int v31; // w8
  bool v32; // w19
  int32_t v33; // w2
  System_Action_object__o *v34; // x19
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x21
  System_Action_object__o *v37; // x19
  System_Action_object__o *v38; // x19
  bool IsNoWaitCommand; // w22
  int32_t v40; // w1
  System_String_o *errorMessage; // [xsp+8h] [xbp-48h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49F93B4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, that);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v11);
    sub_1B640C8(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__, v12);
    sub_1B640C8(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__, v13);
    sub_1B640C8(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__, v14);
    sub_1B640C8(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, v15);
    byte_49F93B4 = 1;
  }
  commandParam = 0LL;
  errorMessage = 0LL;
  v16 = sub_1B64314(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, that, command);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_63;
  *(_QWORD *)(v16 + 16) = endAnimCallback;
  v20 = (System_Action_o **)(v16 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)endAnimCallback, v18, v19);
  *isQuickUpdate = 0;
  IsBlankEarthActive = BlankEarthQuestAfterAction__IsBlankEarthActive(v21, v22);
  LOBYTE(IsGimmickDispCommand) = 0;
  if ( IsBlankEarthActive )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v23) )
    {
      ActionExtensions__Call(*v20, 0LL);
LABEL_31:
      LOBYTE(IsGimmickDispCommand) = 1;
      return (char)IsGimmickDispCommand;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v25);
      byte_49F76BD = 1;
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
      sub_1B64324(IsGimmickDispCommand);
    id = command->fields.id;
    blankEarth = mTerminalList->fields.blankEarth;
    IsGimmickDispCommand = 0LL;
    if ( (unsigned int)(id - 100) > 0xE )
    {
      switch ( id )
      {
        case 300:
          v34 = (System_Action_object__o *)sub_1B64314(
                                             System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo,
                                             v25,
                                             v26);
          System_Action_object____ctor(
            v34,
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
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v34,
            0LL,
            0LL);
          goto LABEL_31;
        case 301:
          return (char)IsGimmickDispCommand;
        case 302:
          v37 = (System_Action_object__o *)sub_1B64314(
                                             System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo,
                                             v25,
                                             v26);
          System_Action_object____ctor(
            v37,
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
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v37,
            0LL);
          goto LABEL_31;
        case 303:
          v38 = (System_Action_object__o *)sub_1B64314(
                                             System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo,
                                             v25,
                                             v26);
          System_Action_object____ctor(
            v38,
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
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v38,
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
            v40 = 3;
          else
            v40 = 2;
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
                BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v40, *v20, 0LL);
                goto LABEL_31;
              }
              goto LABEL_63;
            }
            if ( !EarthGimmick )
              goto LABEL_63;
            BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v40, 0LL, 0LL);
          }
          LOBYTE(IsGimmickDispCommand) = 1;
          *isQuickUpdate = 1;
          break;
      }
    }
    else
    {
      v31 = 1 << (id - 100);
      if ( (v31 & 0x23E8) == 0 )
      {
        if ( (v31 & 0x1C07) != 0 )
        {
          v32 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0LL);
          IsGimmickDispCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotHideCommand(id, 0LL);
          if ( ((unsigned __int8)IsGimmickDispCommand & 1) != 0 )
          {
            v33 = 0;
          }
          else
          {
            IsGimmickDispCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotGrayCommand(id, 0LL);
            if ( ((unsigned __int8)IsGimmickDispCommand & 1) != 0 )
              v33 = 2;
            else
              v33 = 1;
          }
          if ( commandParam && blankEarth )
          {
            BlankEarth__RevealEarthPoint(blankEarth, commandParam->fields.blankEarthSpotEntity, v33, v32, *v20, 0LL);
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
          *v20,
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