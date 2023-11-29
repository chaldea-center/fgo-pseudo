void __fastcall BattleSelectCommandTypeWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x19
  struct BattleSelectCommandTypeWindow_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_40F753B & 1) == 0 )
  {
    sub_B16FFC(&BattleSelectCommandTypeWindow_TypeInfo, v1);
    sub_B16FFC(&BattleCommand_TYPE___TypeInfo, v3);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB,
      v4);
    byte_40F753B = 1;
  }
  v5 = (System_Array_o *)sub_B17014(BattleCommand_TYPE___TypeInfo, 3LL, v2);
  v7.fields.value = Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v5, v7, 0LL);
  static_fields = BattleSelectCommandTypeWindow_TypeInfo->static_fields;
  static_fields->CommandTypeOrder = (struct BattleCommand_TYPE_array *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleSelectCommandTypeWindow___ctor(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.useClose = 257;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0LL);
}


void __fastcall BattleSelectCommandTypeWindow__Close(
        BattleSelectCommandTypeWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0

  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0LL);
  this->fields.isSelected = 1;
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


int32_t __fastcall BattleSelectCommandTypeWindow__ConvertABQToQAB(int32_t abqTypeId, const MethodInfo *method)
{
  return abqTypeId;
}


int32_t __fastcall BattleSelectCommandTypeWindow__ConvertQABToABQ(int32_t qabTypeId, const MethodInfo *method)
{
  switch ( qabTypeId )
  {
    case 1:
      return 2;
    case 3:
      return 1;
    case 2:
      return 3;
  }
  return qabTypeId;
}


System_Int32_array *__fastcall BattleSelectCommandTypeWindow__GetExcludeTdChangeTypes(
        BattleSelectCommandTypeWindow_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v4; // x0
  System_Int32_array *v5; // x20
  TreasureDvcEntity_o *TreasureDevice; // x0

  if ( (byte_40F7536 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, svtData);
    byte_40F7536 = 1;
  }
  v4 = sub_B17014(int___TypeInfo, 0LL, method);
  if ( !svtData )
    goto LABEL_8;
  v5 = (System_Int32_array *)v4;
  if ( BattleServantData__get_TreasureDevice(svtData, 0LL) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(svtData, 0LL);
    if ( TreasureDevice )
      return TreasureDvcEntity__GetExcludeTdChangeTypes(TreasureDevice, v5, 0LL);
LABEL_8:
    sub_B170D4();
  }
  return v5;
}


void __fastcall BattleSelectCommandTypeWindow__Open(
        BattleSelectCommandTypeWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *parentPanel; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  BattleWindowOuterClickComponent_OuterClickCall_o *v11; // x20

  if ( (byte_40F7534 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleSelectCommandTypeWindow_onCloseButton__, call);
    sub_B16FFC(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_40F7534 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v11 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B170CC(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v7,
                                                              v8,
                                                              v9,
                                                              v10);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleSelectCommandTypeWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v11,
    0LL);
}


void __fastcall BattleSelectCommandTypeWindow__SelectA(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectCommandTypeWindow__SelectServant(this, 3, v2);
}


void __fastcall BattleSelectCommandTypeWindow__SelectB(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectCommandTypeWindow__SelectServant(this, 1, v2);
}


void __fastcall BattleSelectCommandTypeWindow__SelectC(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectCommandTypeWindow__SelectServant(this, 2, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow__SelectServant(
        BattleSelectCommandTypeWindow_o *this,
        int32_t cmdType,
        const MethodInfo *method)
{
  int32_t v5; // w0
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *selectCallBack; // x0
  struct BattleServantData_o *battleServantData; // x8

  if ( (byte_40F7539 & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, *(_QWORD *)&cmdType);
    byte_40F7539 = 1;
  }
  if ( !this->fields.isSelected )
  {
    this->fields.nowCommandTypeID = cmdType;
    if ( cmdType < 1 )
    {
      if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      }
      v5 = 12;
    }
    else
    {
      if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      }
      v5 = 10;
    }
    SeManager__PlayCommonSe(v5, 0LL);
    selectCallBack = this->fields.selectCallBack;
    this->fields.useClose = 1;
    if ( selectCallBack )
    {
      battleServantData = this->fields.battleServantData;
      if ( !battleServantData )
        sub_B170D4();
      BattleSelectCommandTypeWindow_SelectServantCallBack__Invoke(
        selectCallBack,
        battleServantData->fields.uniqueId,
        cmdType,
        0LL);
    }
  }
}


void __fastcall BattleSelectCommandTypeWindow__SetCallBack(
        BattleSelectCommandTypeWindow_o *this,
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *callback,
        const MethodInfo *method)
{
  this->fields.selectCallBack = callback;
  sub_B16F98(&this->fields.selectCallBack, callback);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow__SetServantData(
        BattleSelectCommandTypeWindow_o *this,
        BattleServantData_o *bsData,
        bool isShowFrame,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UILabel_o *title_label; // x22
  System_String_o *v18; // x0
  System_String_o *v19; // x23
  Il2CppObject *ServantShortName; // x0
  System_String_o *v21; // x0
  UnityEngine_Object_o *nowTypeLabel; // x22
  UILabel_o *v23; // x22
  System_String_o *v24; // x0
  BattleBuffData_o *buffData; // x0
  BattleBuffData_o *v26; // x0
  BattleBuffData_BuffData_o *v27; // x0
  int32_t *p_param; // x8
  __int64 v29; // x22
  __int64 v30; // x23
  int32_t v31; // w0
  ServantTreasureDvcEntity_o *EntityFromIDID; // x0
  UnityEngine_GameObject_o *nowTypeFrameObj; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  struct UnityEngine_GameObject_array *commandTypeObj; // x23
  int32_t nowCommandTypeID; // w25
  UnityEngine_Transform_o *v39; // x22
  int v40; // w8
  il2cpp_array_size_t v41; // w8
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Transform_o *v45; // x22
  int v46; // s0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Transform_o *v50; // x22
  int v51; // s0
  BattleSelectCommandTypeWindow_o *v54; // x0
  const MethodInfo *v55; // x2
  System_Int32_array *v56; // x21
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  BattleSelectCommandTypeWindow___c__DisplayClass19_0_o *v61; // x22
  struct UnityEngine_GameObject_array *v62; // x8
  int v63; // w9
  int max_length; // w10
  UnityEngine_Object_o *v65; // x23
  __int64 v66; // x3
  __int64 v67; // x4
  System_Func_int__bool__o *v68; // x23
  struct UnityEngine_GameObject_array *v69; // x8
  __int64 i; // x9
  UnityEngine_GameObject_o *v71; // x8
  struct UnityEngine_GameObject_array *v72; // x8
  __int64 v73; // x9
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_Transform_o *v75; // x0
  UnityEngine_Transform_o *v76; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v78; // x0
  struct UnityEngine_GameObject_array *v79; // x8
  __int64 v80; // x9
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_Transform_o *v82; // x0
  UnityEngine_Transform_o *v83; // x23
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_Transform_o *v85; // x0
  struct UnityEngine_GameObject_array *v86; // x8
  __int64 v87; // x9
  UnityEngine_GameObject_o *v88; // x0
  const MethodInfo *v89; // x4
  BattleServantData_o *battleServantData; // x23
  BattleSelectCommandTypeWindow_c *v91; // x8
  struct BattleCommand_TYPE_array *CommandTypeOrder; // x8
  __int64 v93; // x9
  struct UnityEngine_GameObject_array *v94; // x8
  __int64 v95; // x9
  UnityEngine_GameObject_o *v96; // x0
  UnityEngine_Transform_o *v97; // x23
  int v98; // s0
  UnityEngine_GameObject_o *parentPanel; // x0
  struct UIGrid_o *svtRoot; // x8
  UIGrid_o *v103; // x0
  BattleCommandComponent_o *commandCard; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_40F7535 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, bsData);
    sub_B16FFC(&BattleSelectCommandTypeWindow_TypeInfo, v6);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_BattleSelectCommandTypeWindow___c__DisplayClass19_0__SetServantData_b__0__, v13);
    sub_B16FFC(&BattleSelectCommandTypeWindow___c__DisplayClass19_0_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_2420, v15);
    sub_B16FFC(&StringLiteral_2422, v16);
    byte_40F7535 = 1;
  }
  commandCard = 0LL;
  this->fields.battleServantData = bsData;
  sub_B16F98(&this->fields.battleServantData, bsData);
  title_label = this->fields.title_label;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2422, 0LL);
  if ( !bsData )
    goto LABEL_93;
  v19 = v18;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(bsData, 0LL);
  v21 = System_String__Format(v19, ServantShortName, 0LL);
  if ( !title_label )
    goto LABEL_93;
  UILabel__set_text(title_label, v21, 0LL);
  nowTypeLabel = (UnityEngine_Object_o *)this->fields.nowTypeLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nowTypeLabel, 0LL, 0LL) )
  {
    v23 = this->fields.nowTypeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2420, 0LL);
    if ( !v23 )
      goto LABEL_93;
    UILabel__set_text(v23, v24, 0LL);
  }
  buffData = bsData->fields.buffData;
  if ( !buffData )
    goto LABEL_93;
  if ( BattleBuffData__isTDTypeChange(buffData, bsData, 0LL) )
  {
    v26 = bsData->fields.buffData;
    if ( !v26 )
      goto LABEL_93;
    v27 = BattleBuffData__getTDTypeChangeBuffData(v26, bsData, 0LL);
    if ( !v27 )
      goto LABEL_93;
    p_param = &v27->fields.param;
  }
  else
  {
    v30 = *(_QWORD *)&bsData->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&bsData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v105.fields.currentCryptoKey = v30;
    *(_QWORD *)&v105.fields.fakeValue = v29;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v105, 0LL);
    EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(v31, bsData->fields.treasuredvcId, 0LL);
    if ( !EntityFromIDID )
      goto LABEL_93;
    p_param = &EntityFromIDID->fields.cardId;
  }
  nowTypeFrameObj = this->fields.nowTypeFrameObj;
  this->fields.nowCommandTypeID = *p_param;
  if ( !nowTypeFrameObj )
    goto LABEL_93;
  transform = UnityEngine_GameObject__get_transform(nowTypeFrameObj, 0LL);
  commandTypeObj = this->fields.commandTypeObj;
  nowCommandTypeID = this->fields.nowCommandTypeID;
  v39 = transform;
  if ( (BYTE3(BattleSelectCommandTypeWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
  {
    transform = (UnityEngine_Transform_o *)j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
  }
  if ( nowCommandTypeID == 1 )
  {
    v40 = 2;
    if ( !commandTypeObj )
      goto LABEL_93;
  }
  else if ( nowCommandTypeID == 3 )
  {
    v40 = 1;
    if ( !commandTypeObj )
      goto LABEL_93;
  }
  else
  {
    if ( nowCommandTypeID == 2 )
      v40 = 3;
    else
      v40 = nowCommandTypeID;
    if ( !commandTypeObj )
      goto LABEL_93;
  }
  v41 = v40 - 1;
  if ( v41 >= commandTypeObj->max_length )
  {
LABEL_94:
    sub_B17100(transform, v35, v36);
    sub_B170A0();
  }
  v42 = commandTypeObj->m_Items[v41];
  if ( !v42 )
    goto LABEL_93;
  v43 = UnityEngine_GameObject__get_transform(v42, 0LL);
  if ( !v39 )
    goto LABEL_93;
  UnityEngine_Transform__SetParent(v39, v43, 0LL);
  v44 = this->fields.nowTypeFrameObj;
  if ( !v44 )
    goto LABEL_93;
  v45 = UnityEngine_GameObject__get_transform(v44, 0LL);
  *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v45 )
    goto LABEL_93;
  UnityEngine_Transform__set_localPosition(v45, *(UnityEngine_Vector3_o *)&v46, 0LL);
  v49 = this->fields.nowTypeFrameObj;
  if ( !v49 )
    goto LABEL_93;
  v50 = UnityEngine_GameObject__get_transform(v49, 0LL);
  *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Vector3__get_one(0LL);
  if ( !v50 )
    goto LABEL_93;
  UnityEngine_Transform__set_localScale(v50, *(UnityEngine_Vector3_o *)&v51, 0LL);
  v56 = BattleSelectCommandTypeWindow__GetExcludeTdChangeTypes(v54, bsData, v55);
  v61 = (BattleSelectCommandTypeWindow___c__DisplayClass19_0_o *)sub_B170CC(
                                                                   BattleSelectCommandTypeWindow___c__DisplayClass19_0_TypeInfo,
                                                                   v57,
                                                                   v58,
                                                                   v59,
                                                                   v60);
  BattleSelectCommandTypeWindow___c__DisplayClass19_0___ctor(v61, 0LL);
  if ( !v61 )
    goto LABEL_93;
  v61->fields.i = 0;
  v62 = this->fields.commandTypeObj;
  if ( !v62 )
    goto LABEL_93;
  v63 = 0;
  while ( 1 )
  {
    max_length = v62->max_length;
    if ( v63 >= max_length )
      break;
    if ( v63 >= (unsigned int)max_length )
      goto LABEL_94;
    v65 = (UnityEngine_Object_o *)v62->m_Items[v63];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v65, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
    {
      v68 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v35, v36, v66, v67);
      System_Func_int__bool____ctor(
        v68,
        (Il2CppObject *)v61,
        Method_BattleSelectCommandTypeWindow___c__DisplayClass19_0__SetServantData_b__0__,
        (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
      transform = (UnityEngine_Transform_o *)BasicHelper__Any_int__25910576(
                                               v56,
                                               (System_Func_T__bool__o *)v68,
                                               (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
      v69 = this->fields.commandTypeObj;
      if ( !v69 )
        goto LABEL_93;
      i = v61->fields.i;
      if ( (unsigned int)i >= v69->max_length )
        goto LABEL_94;
      v71 = v69->m_Items[i];
      if ( !v71 )
        goto LABEL_93;
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(v71, 0, 0LL);
        v72 = this->fields.commandTypeObj;
        if ( !v72 )
          goto LABEL_93;
        v73 = v61->fields.i;
        if ( (unsigned int)v73 >= v72->max_length )
          goto LABEL_94;
        v74 = v72->m_Items[v73];
        if ( !v74 )
          goto LABEL_93;
        v75 = UnityEngine_GameObject__get_transform(v74, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_93;
        v76 = v75;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
        if ( !gameObject )
          goto LABEL_93;
        v78 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !v76 )
          goto LABEL_93;
        UnityEngine_Transform__set_parent(v76, v78, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(v71, 1, 0LL);
        v79 = this->fields.commandTypeObj;
        if ( !v79 )
          goto LABEL_93;
        v80 = v61->fields.i;
        if ( (unsigned int)v80 >= v79->max_length )
          goto LABEL_94;
        v81 = v79->m_Items[v80];
        if ( !v81 )
          goto LABEL_93;
        v82 = UnityEngine_GameObject__get_transform(v81, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_93;
        v83 = v82;
        v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
        if ( !v84 )
          goto LABEL_93;
        v85 = UnityEngine_GameObject__get_transform(v84, 0LL);
        if ( !v83 )
          goto LABEL_93;
        UnityEngine_Transform__set_parent(v83, v85, 0LL);
        v86 = this->fields.commandTypeObj;
        if ( !v86 )
          goto LABEL_93;
        v87 = v61->fields.i;
        if ( (unsigned int)v87 >= v86->max_length )
          goto LABEL_94;
        v88 = v86->m_Items[v87];
        if ( !v88 )
          goto LABEL_93;
        transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v88,
                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        commandCard = (BattleCommandComponent_o *)transform;
        battleServantData = this->fields.battleServantData;
        v91 = BattleSelectCommandTypeWindow_TypeInfo;
        if ( (BYTE3(BattleSelectCommandTypeWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
        {
          transform = (UnityEngine_Transform_o *)j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
          v91 = BattleSelectCommandTypeWindow_TypeInfo;
        }
        CommandTypeOrder = v91->static_fields->CommandTypeOrder;
        if ( !CommandTypeOrder )
          goto LABEL_93;
        v93 = v61->fields.i;
        if ( (unsigned int)v93 >= CommandTypeOrder->max_length )
          goto LABEL_94;
        BattleSelectCommandTypeWindow__SetTreasureDvcData(
          (BattleSelectCommandTypeWindow_o *)transform,
          battleServantData,
          &commandCard,
          CommandTypeOrder->m_Items[v93 + 1],
          v89);
        v94 = this->fields.commandTypeObj;
        if ( !v94 )
          goto LABEL_93;
        v95 = v61->fields.i;
        if ( (unsigned int)v95 >= v94->max_length )
          goto LABEL_94;
        v96 = v94->m_Items[v95];
        if ( !v96 )
          goto LABEL_93;
        v97 = UnityEngine_GameObject__get_transform(v96, 0LL);
        *(UnityEngine_Vector3_o *)&v98 = UnityEngine_Vector3__get_one(0LL);
        if ( !v97 )
          goto LABEL_93;
        UnityEngine_Transform__set_localScale(v97, *(UnityEngine_Vector3_o *)&v98, 0LL);
      }
    }
    v63 = v61->fields.i + 1;
    v61->fields.i = v63;
    v62 = this->fields.commandTypeObj;
    if ( !v62 )
      goto LABEL_93;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel
    || (UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL), (svtRoot = this->fields.svtRoot) == 0LL)
    || (BYTE1(svtRoot->fields.onReposition) = 1, (v103 = this->fields.svtRoot) == 0LL) )
  {
LABEL_93:
    sub_B170D4();
  }
  UIGrid__set_repositionNow(v103, 1, 0LL);
}


void __fastcall BattleSelectCommandTypeWindow__SetTreasureDvcData(
        BattleSelectCommandTypeWindow_o *this,
        BattleServantData_o *bsData,
        BattleCommandComponent_o **commandCard,
        int32_t cmdType,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  UnityEngine_Object_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  BattleCommandData_o *v18; // x22

  if ( (byte_40F7537 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandData_TypeInfo, bsData);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F7537 = 1;
  }
  if ( !bsData )
    goto LABEL_16;
  if ( BattleServantData__getTreasureDvcId(bsData, 0, 0LL) >= 1 )
  {
    if ( !*commandCard )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*commandCard, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)Instance,
      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    v13 = (UnityEngine_Object_o *)*commandCard;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    {
      v18 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v14, v15, v16, v17);
      BattleCommandData___ctor(v18, 0LL);
      if ( v18 )
      {
        v18->fields._type = cmdType;
        v18->fields.svtlimit = BattleServantData__getCommandDispLimitCount(bsData, 0LL);
        v18->fields._loadsvtLimit = BattleServantData__getDispLimitCount(bsData, 1, 0LL);
        v18->fields.uniqueId = bsData->fields.uniqueId;
        v18->fields.svtId = BattleServantData__getSvtId(bsData, 0LL);
        v18->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(bsData, 0LL);
        v18->fields.treasureDvc = BattleServantData__getTreasureDvcId(bsData, 0, 0LL);
        if ( *commandCard )
        {
          BattleCommandComponent__setData(*commandCard, v18, bsData, 0, 0, 1, 0LL);
          return;
        }
      }
LABEL_16:
      sub_B170D4();
    }
  }
}


UnityEngine_GameObject_o *__fastcall BattleSelectCommandTypeWindow__get_closeBtnObject(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40F753A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F753A = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


void __fastcall BattleSelectCommandTypeWindow__onCloseButton(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.useClose )
    BattleSelectCommandTypeWindow__SelectServant(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow__setInitialPos(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Vector3__get_zero(0LL),
        !transform) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow__setUseClose(
        BattleSelectCommandTypeWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x21
  UnityEngine_Collider_o *v6; // x0

  if ( (byte_40F7538 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, flg);
    byte_40F7538 = 1;
  }
  this->fields.useClose = flg;
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelButton, 0LL, 0LL) )
  {
    v6 = this->fields.cancelButton;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_Collider__set_enabled(v6, flg, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack___ctor(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B16F98(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__BeginInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        int32_t cmdType,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = cmdType;
  v12 = uniqueId;
  if ( (byte_40F71B6 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&uniqueId);
    byte_40F71B6 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v10, callback, object);
}


void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__EndInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__Invoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        int32_t cmdType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  BattleSelectCommandTypeWindow_SelectServantCallBack_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(_QWORD, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v31;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (BattleSelectCommandTypeWindow_SelectServantCallBack_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v20 = v9[v10];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&uniqueId, *(_QWORD *)&cmdType);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_35;
      v23((unsigned int)uniqueId, (unsigned int)cmdType, v22);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v26 = *v21;
          v27 = *(_QWORD *)(v22 + 24);
          v28 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_34;
            }
            v18 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v18 = sub_AAFEF8(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, (unsigned int)uniqueId, (unsigned int)cmdType, v19);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            (unsigned int)uniqueId,
            (unsigned int)cmdType,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)uniqueId,
            (unsigned int)cmdType,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(
      v21,
      (unsigned int)uniqueId,
      (unsigned int)cmdType,
      v22);
    goto LABEL_36;
  }
}


void __fastcall BattleSelectCommandTypeWindow___c__DisplayClass19_0___ctor(
        BattleSelectCommandTypeWindow___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSelectCommandTypeWindow___c__DisplayClass19_0___SetServantData_b__0(
        BattleSelectCommandTypeWindow___c__DisplayClass19_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BattleSelectCommandTypeWindow_c *v5; // x0
  struct BattleCommand_TYPE_array *CommandTypeOrder; // x8
  __int64 i; // x9

  if ( (byte_40F71B5 & 1) == 0 )
  {
    sub_B16FFC(&BattleSelectCommandTypeWindow_TypeInfo, *(_QWORD *)&x);
    byte_40F71B5 = 1;
  }
  v5 = BattleSelectCommandTypeWindow_TypeInfo;
  if ( (BYTE3(BattleSelectCommandTypeWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
    v5 = BattleSelectCommandTypeWindow_TypeInfo;
  }
  CommandTypeOrder = v5->static_fields->CommandTypeOrder;
  if ( !CommandTypeOrder )
    sub_B170D4();
  i = this->fields.i;
  if ( (unsigned int)i >= CommandTypeOrder->max_length )
  {
    sub_B17100(v5, *(_QWORD *)&x, method);
    sub_B170A0();
  }
  return CommandTypeOrder->m_Items[i + 1] == x;
}