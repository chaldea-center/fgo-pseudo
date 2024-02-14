void __fastcall BattleSelectCommandTypeWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x19
  struct BattleSelectCommandTypeWindow_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v6; // 0:w1.4

  if ( (byte_4211D54 & 1) == 0 )
  {
    sub_B0D8A4(&BattleSelectCommandTypeWindow_TypeInfo, v1);
    sub_B0D8A4(&BattleCommand_TYPE___TypeInfo, v2);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB,
      v3);
    byte_4211D54 = 1;
  }
  v4 = (System_Array_o *)sub_B0D8BC(BattleCommand_TYPE___TypeInfo, 3LL);
  v6.fields.value = Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v4, v6, 0LL);
  static_fields = BattleSelectCommandTypeWindow_TypeInfo->static_fields;
  static_fields->CommandTypeOrder = (struct BattleCommand_TYPE_array *)v4;
  sub_B0D840(static_fields, v4);
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
    sub_B0D97C(0LL);
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
  TreasureDvcEntity_o *TreasureDevice; // x0
  System_Int32_array *v5; // x20

  if ( (byte_4211D4F & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, svtData);
    byte_4211D4F = 1;
  }
  TreasureDevice = (TreasureDvcEntity_o *)sub_B0D8BC(int___TypeInfo, 0LL);
  if ( !svtData )
    goto LABEL_8;
  v5 = (System_Int32_array *)TreasureDevice;
  if ( BattleServantData__get_TreasureDevice(svtData, 0LL) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(svtData, 0LL);
    if ( TreasureDevice )
      return TreasureDvcEntity__GetExcludeTdChangeTypes(TreasureDevice, v5, 0LL);
LABEL_8:
    sub_B0D97C(TreasureDevice);
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
  BattleWindowOuterClickComponent_OuterClickCall_o *v9; // x20

  if ( (byte_4211D4D & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleSelectCommandTypeWindow_onCloseButton__, call);
    sub_B0D8A4(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_4211D4D = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v9 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B0D974(
                                                             BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                             v7,
                                                             v8);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleSelectCommandTypeWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v9,
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

  if ( (byte_4211D52 & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, *(_QWORD *)&cmdType);
    byte_4211D52 = 1;
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
        sub_B0D97C(selectCallBack);
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
  sub_B0D840(&this->fields.selectCallBack, callback);
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
  UnityEngine_GameObject_o *buffData; // x0
  System_String_o *v19; // x23
  Il2CppObject *ServantShortName; // x0
  UnityEngine_Object_o *nowTypeLabel; // x22
  UILabel_o *v22; // x22
  int32_t *p_m_CachedPtr; // x8
  __int64 v24; // x22
  __int64 v25; // x23
  int32_t v26; // w0
  struct UnityEngine_GameObject_array *commandTypeObj; // x23
  int32_t nowCommandTypeID; // w25
  UnityEngine_Transform_o *v29; // x22
  int v30; // w8
  il2cpp_array_size_t v31; // w8
  UnityEngine_Transform_o *transform; // x22
  int v33; // s0
  UnityEngine_Transform_o *v36; // x22
  int v37; // s0
  BattleSelectCommandTypeWindow_o *v40; // x0
  const MethodInfo *v41; // x2
  System_Int32_array *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  BattleSelectCommandTypeWindow___c__DisplayClass19_0_o *v45; // x22
  struct UnityEngine_GameObject_array *v46; // x8
  int v47; // w9
  int max_length; // w10
  UnityEngine_Object_o *v49; // x23
  __int64 v50; // x1
  __int64 v51; // x2
  System_Func_int__bool__o *v52; // x23
  struct UnityEngine_GameObject_array *v53; // x8
  __int64 i; // x9
  UnityEngine_GameObject_o *v55; // x8
  struct UnityEngine_GameObject_array *v56; // x8
  __int64 v57; // x9
  UnityEngine_Transform_o *v58; // x23
  struct UnityEngine_GameObject_array *v59; // x8
  __int64 v60; // x9
  UnityEngine_Transform_o *v61; // x23
  struct UnityEngine_GameObject_array *v62; // x8
  __int64 v63; // x9
  const MethodInfo *v64; // x4
  BattleServantData_o *battleServantData; // x23
  BattleSelectCommandTypeWindow_c *v66; // x8
  struct BattleCommand_TYPE_array *CommandTypeOrder; // x8
  __int64 v68; // x9
  struct UnityEngine_GameObject_array *v69; // x8
  __int64 v70; // x9
  UnityEngine_Transform_o *v71; // x23
  int v72; // s0
  struct UIGrid_o *svtRoot; // x8
  __int64 v76; // x0
  BattleCommandComponent_o *commandCard; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_4211D4E & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, bsData);
    sub_B0D8A4(&BattleSelectCommandTypeWindow_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B0D8A4(&Method_BattleSelectCommandTypeWindow___c__DisplayClass19_0__SetServantData_b__0__, v13);
    sub_B0D8A4(&BattleSelectCommandTypeWindow___c__DisplayClass19_0_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_2439/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, v15);
    sub_B0D8A4(&StringLiteral_2441/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, v16);
    byte_4211D4E = 1;
  }
  commandCard = 0LL;
  this->fields.battleServantData = bsData;
  sub_B0D840(&this->fields.battleServantData, bsData);
  title_label = this->fields.title_label;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  buffData = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2441/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, 0LL);
  if ( !bsData )
    goto LABEL_93;
  v19 = (System_String_o *)buffData;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(bsData, 0LL);
  buffData = (UnityEngine_GameObject_o *)System_String__Format(v19, ServantShortName, 0LL);
  if ( !title_label )
    goto LABEL_93;
  UILabel__set_text(title_label, (System_String_o *)buffData, 0LL);
  nowTypeLabel = (UnityEngine_Object_o *)this->fields.nowTypeLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nowTypeLabel, 0LL, 0LL) )
  {
    v22 = this->fields.nowTypeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    buffData = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2439/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, 0LL);
    if ( !v22 )
      goto LABEL_93;
    UILabel__set_text(v22, (System_String_o *)buffData, 0LL);
  }
  buffData = (UnityEngine_GameObject_o *)bsData->fields.buffData;
  if ( !buffData )
    goto LABEL_93;
  if ( BattleBuffData__isTDTypeChange((BattleBuffData_o *)buffData, bsData, 0LL) )
  {
    buffData = (UnityEngine_GameObject_o *)bsData->fields.buffData;
    if ( !buffData )
      goto LABEL_93;
    buffData = (UnityEngine_GameObject_o *)BattleBuffData__getTDTypeChangeBuffData(
                                             (BattleBuffData_o *)buffData,
                                             bsData,
                                             0LL);
    if ( !buffData )
      goto LABEL_93;
    p_m_CachedPtr = (int32_t *)&buffData[1].klass + 1;
  }
  else
  {
    v25 = *(_QWORD *)&bsData->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&bsData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v78.fields.currentCryptoKey = v25;
    *(_QWORD *)&v78.fields.fakeValue = v24;
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v78, 0LL);
    buffData = (UnityEngine_GameObject_o *)ServantTreasureDvcMaster__getEntityFromIDID(
                                             v26,
                                             bsData->fields.treasuredvcId,
                                             0LL);
    if ( !buffData )
      goto LABEL_93;
    p_m_CachedPtr = &buffData[2].fields.m_CachedPtr;
  }
  buffData = this->fields.nowTypeFrameObj;
  this->fields.nowCommandTypeID = *p_m_CachedPtr;
  if ( !buffData )
    goto LABEL_93;
  buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
  commandTypeObj = this->fields.commandTypeObj;
  nowCommandTypeID = this->fields.nowCommandTypeID;
  v29 = (UnityEngine_Transform_o *)buffData;
  if ( (BYTE3(BattleSelectCommandTypeWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
  }
  if ( nowCommandTypeID == 1 )
  {
    v30 = 2;
    if ( !commandTypeObj )
      goto LABEL_93;
  }
  else if ( nowCommandTypeID == 3 )
  {
    v30 = 1;
    if ( !commandTypeObj )
      goto LABEL_93;
  }
  else
  {
    if ( nowCommandTypeID == 2 )
      v30 = 3;
    else
      v30 = nowCommandTypeID;
    if ( !commandTypeObj )
      goto LABEL_93;
  }
  v31 = v30 - 1;
  if ( v31 >= commandTypeObj->max_length )
  {
LABEL_94:
    v76 = sub_B0D9A8(buffData);
    sub_B0D948(v76, 0LL);
  }
  buffData = commandTypeObj->m_Items[v31];
  if ( !buffData )
    goto LABEL_93;
  buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
  if ( !v29 )
    goto LABEL_93;
  UnityEngine_Transform__SetParent(v29, (UnityEngine_Transform_o *)buffData, 0LL);
  buffData = this->fields.nowTypeFrameObj;
  if ( !buffData )
    goto LABEL_93;
  transform = UnityEngine_GameObject__get_transform(buffData, 0LL);
  *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_93;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v33, 0LL);
  buffData = this->fields.nowTypeFrameObj;
  if ( !buffData )
    goto LABEL_93;
  v36 = UnityEngine_GameObject__get_transform(buffData, 0LL);
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL);
  if ( !v36 )
    goto LABEL_93;
  UnityEngine_Transform__set_localScale(v36, *(UnityEngine_Vector3_o *)&v37, 0LL);
  v42 = BattleSelectCommandTypeWindow__GetExcludeTdChangeTypes(v40, bsData, v41);
  v45 = (BattleSelectCommandTypeWindow___c__DisplayClass19_0_o *)sub_B0D974(
                                                                   BattleSelectCommandTypeWindow___c__DisplayClass19_0_TypeInfo,
                                                                   v43,
                                                                   v44);
  BattleSelectCommandTypeWindow___c__DisplayClass19_0___ctor(v45, 0LL);
  if ( !v45 )
    goto LABEL_93;
  v45->fields.i = 0;
  v46 = this->fields.commandTypeObj;
  if ( !v46 )
    goto LABEL_93;
  v47 = 0;
  while ( 1 )
  {
    max_length = v46->max_length;
    if ( v47 >= max_length )
      break;
    if ( v47 >= (unsigned int)max_length )
      goto LABEL_94;
    v49 = (UnityEngine_Object_o *)v46->m_Items[v47];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    buffData = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v49, 0LL, 0LL);
    if ( ((unsigned __int8)buffData & 1) == 0 )
    {
      v52 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v50, v51);
      System_Func_int__bool____ctor(
        v52,
        (Il2CppObject *)v45,
        Method_BattleSelectCommandTypeWindow___c__DisplayClass19_0__SetServantData_b__0__,
        (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
      buffData = (UnityEngine_GameObject_o *)BasicHelper__Any_int__24145568(
                                               v42,
                                               (System_Func_T__bool__o *)v52,
                                               (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
      v53 = this->fields.commandTypeObj;
      if ( !v53 )
        goto LABEL_93;
      i = v45->fields.i;
      if ( (unsigned int)i >= v53->max_length )
        goto LABEL_94;
      v55 = v53->m_Items[i];
      if ( !v55 )
        goto LABEL_93;
      if ( ((unsigned __int8)buffData & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(v55, 0, 0LL);
        v56 = this->fields.commandTypeObj;
        if ( !v56 )
          goto LABEL_93;
        v57 = v45->fields.i;
        if ( (unsigned int)v57 >= v56->max_length )
          goto LABEL_94;
        buffData = v56->m_Items[v57];
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_93;
        v58 = (UnityEngine_Transform_o *)buffData;
        buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
        if ( !v58 )
          goto LABEL_93;
        UnityEngine_Transform__set_parent(v58, (UnityEngine_Transform_o *)buffData, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(v55, 1, 0LL);
        v59 = this->fields.commandTypeObj;
        if ( !v59 )
          goto LABEL_93;
        v60 = v45->fields.i;
        if ( (unsigned int)v60 >= v59->max_length )
          goto LABEL_94;
        buffData = v59->m_Items[v60];
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_93;
        v61 = (UnityEngine_Transform_o *)buffData;
        buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
        if ( !v61 )
          goto LABEL_93;
        UnityEngine_Transform__set_parent(v61, (UnityEngine_Transform_o *)buffData, 0LL);
        v62 = this->fields.commandTypeObj;
        if ( !v62 )
          goto LABEL_93;
        v63 = v45->fields.i;
        if ( (unsigned int)v63 >= v62->max_length )
          goto LABEL_94;
        buffData = v62->m_Items[v63];
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 buffData,
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        commandCard = (BattleCommandComponent_o *)buffData;
        battleServantData = this->fields.battleServantData;
        v66 = BattleSelectCommandTypeWindow_TypeInfo;
        if ( (BYTE3(BattleSelectCommandTypeWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
          v66 = BattleSelectCommandTypeWindow_TypeInfo;
        }
        CommandTypeOrder = v66->static_fields->CommandTypeOrder;
        if ( !CommandTypeOrder )
          goto LABEL_93;
        v68 = v45->fields.i;
        if ( (unsigned int)v68 >= CommandTypeOrder->max_length )
          goto LABEL_94;
        BattleSelectCommandTypeWindow__SetTreasureDvcData(
          (BattleSelectCommandTypeWindow_o *)buffData,
          battleServantData,
          &commandCard,
          CommandTypeOrder->m_Items[v68 + 1],
          v64);
        v69 = this->fields.commandTypeObj;
        if ( !v69 )
          goto LABEL_93;
        v70 = v45->fields.i;
        if ( (unsigned int)v70 >= v69->max_length )
          goto LABEL_94;
        buffData = v69->m_Items[v70];
        if ( !buffData )
          goto LABEL_93;
        v71 = UnityEngine_GameObject__get_transform(buffData, 0LL);
        *(UnityEngine_Vector3_o *)&v72 = UnityEngine_Vector3__get_one(0LL);
        if ( !v71 )
          goto LABEL_93;
        UnityEngine_Transform__set_localScale(v71, *(UnityEngine_Vector3_o *)&v72, 0LL);
      }
    }
    v47 = v45->fields.i + 1;
    v45->fields.i = v47;
    v46 = this->fields.commandTypeObj;
    if ( !v46 )
      goto LABEL_93;
  }
  buffData = this->fields.parentPanel;
  if ( !buffData
    || (UnityEngine_GameObject__SetActive(buffData, 1, 0LL), (svtRoot = this->fields.svtRoot) == 0LL)
    || (BYTE1(svtRoot->fields.onReposition) = 1, (buffData = (UnityEngine_GameObject_o *)this->fields.svtRoot) == 0LL) )
  {
LABEL_93:
    sub_B0D97C(buffData);
  }
  UIGrid__set_repositionNow((UIGrid_o *)buffData, 1, 0LL);
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
  UnityEngine_Object_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  BattleCommandData_o *v14; // x22

  if ( (byte_4211D50 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandData_TypeInfo, bsData);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    this = (BattleSelectCommandTypeWindow_o *)sub_B0D8A4(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v10);
    byte_4211D50 = 1;
  }
  if ( !bsData )
    goto LABEL_16;
  if ( BattleServantData__getTreasureDvcId(bsData, 0, 0LL) >= 1 )
  {
    this = (BattleSelectCommandTypeWindow_o *)*commandCard;
    if ( !*commandCard )
      goto LABEL_16;
    this = (BattleSelectCommandTypeWindow_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (BattleSelectCommandTypeWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)this,
      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    v11 = (UnityEngine_Object_o *)*commandCard;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      v14 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v12, v13);
      BattleCommandData___ctor(v14, 0LL);
      if ( v14 )
      {
        v14->fields._type = cmdType;
        v14->fields.svtlimit = BattleServantData__getCommandDispLimitCount(bsData, 0LL);
        v14->fields._loadsvtLimit = BattleServantData__getDispLimitCount(bsData, 1, 0LL);
        v14->fields.uniqueId = bsData->fields.uniqueId;
        v14->fields.svtId = BattleServantData__getSvtId(bsData, 0LL);
        v14->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(bsData, 0LL);
        v14->fields.treasureDvc = BattleServantData__getTreasureDvcId(bsData, 0, 0LL);
        this = (BattleSelectCommandTypeWindow_o *)*commandCard;
        if ( *commandCard )
        {
          BattleCommandComponent__setData((BattleCommandComponent_o *)this, v14, bsData, 0, 0, 1, 0LL);
          return;
        }
      }
LABEL_16:
      sub_B0D97C(this);
    }
  }
}


UnityEngine_GameObject_o *__fastcall BattleSelectCommandTypeWindow__get_closeBtnObject(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4211D53 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211D53 = 1;
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(gameObject);
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

  if ( (byte_4211D51 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, flg);
    byte_4211D51 = 1;
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
      sub_B0D97C(0LL);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4211EEC & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&uniqueId);
    byte_4211EEC = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B0D848(this, v10, callback, object);
}


void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__EndInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&uniqueId, *(_QWORD *)&cmdType, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v11);
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
  __int64 v9; // x0

  if ( (byte_4211EEB & 1) == 0 )
  {
    sub_B0D8A4(&BattleSelectCommandTypeWindow_TypeInfo, *(_QWORD *)&x);
    byte_4211EEB = 1;
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
    sub_B0D97C(v5);
  i = this->fields.i;
  if ( (unsigned int)i >= CommandTypeOrder->max_length )
  {
    v9 = sub_B0D9A8(v5);
    sub_B0D948(v9, 0LL);
  }
  return CommandTypeOrder->m_Items[i + 1] == x;
}