void __fastcall BattleSelectCommandTypeWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x19
  struct BattleSelectCommandTypeWindow_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v6; // 0:w1.4

  if ( (byte_4184E25 & 1) == 0 )
  {
    sub_B2C35C(&BattleSelectCommandTypeWindow_TypeInfo, v1);
    sub_B2C35C(&BattleCommand_TYPE___TypeInfo, v2);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB,
      v3);
    byte_4184E25 = 1;
  }
  v4 = (System_Array_o *)sub_B2C374(BattleCommand_TYPE___TypeInfo, 3LL);
  v6.fields.value = Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v4, v6, 0LL);
  static_fields = BattleSelectCommandTypeWindow_TypeInfo->static_fields;
  static_fields->CommandTypeOrder = (struct BattleCommand_TYPE_array *)v4;
  sub_B2C2F8(static_fields, v4);
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
    sub_B2C434(0LL, call);
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
  __int64 v5; // x1
  System_Int32_array *v6; // x20

  if ( (byte_4184E20 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, svtData);
    byte_4184E20 = 1;
  }
  TreasureDevice = (TreasureDvcEntity_o *)sub_B2C374(int___TypeInfo, 0LL);
  if ( !svtData )
    goto LABEL_8;
  v6 = (System_Int32_array *)TreasureDevice;
  if ( BattleServantData__get_TreasureDevice(svtData, 0LL) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(svtData, 0LL);
    if ( TreasureDevice )
      return TreasureDvcEntity__GetExcludeTdChangeTypes(TreasureDevice, v6, 0LL);
LABEL_8:
    sub_B2C434(TreasureDevice, v5);
  }
  return v6;
}


void __fastcall BattleSelectCommandTypeWindow__Open(
        BattleSelectCommandTypeWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *parentPanel; // x0
  BattleWindowOuterClickComponent_OuterClickCall_o *v7; // x20

  if ( (byte_4184E1E & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleSelectCommandTypeWindow_onCloseButton__, call);
    sub_B2C35C(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_4184E1E = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_B2C434(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v7 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B2C42C(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleSelectCommandTypeWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v7,
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
  __int64 v6; // x1
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *selectCallBack; // x0
  struct BattleServantData_o *battleServantData; // x8

  if ( (byte_4184E23 & 1) == 0 )
  {
    sub_B2C35C(&SeManager_TypeInfo, *(_QWORD *)&cmdType);
    byte_4184E23 = 1;
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
        sub_B2C434(selectCallBack, v6);
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
  sub_B2C2F8(&this->fields.selectCallBack, callback);
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
  __int64 v19; // x1
  System_String_o *v20; // x23
  Il2CppObject *ServantShortName; // x0
  UnityEngine_Object_o *nowTypeLabel; // x22
  UILabel_o *v23; // x22
  int32_t *p_m_CachedPtr; // x8
  __int64 v25; // x22
  __int64 v26; // x23
  int32_t v27; // w0
  struct UnityEngine_GameObject_array *commandTypeObj; // x23
  int32_t nowCommandTypeID; // w25
  UnityEngine_Transform_o *v30; // x22
  int v31; // w8
  il2cpp_array_size_t v32; // w8
  UnityEngine_Transform_o *transform; // x22
  int v34; // s0
  UnityEngine_Transform_o *v37; // x22
  int v38; // s0
  BattleSelectCommandTypeWindow_o *v41; // x0
  const MethodInfo *v42; // x2
  System_Int32_array *v43; // x21
  BattleSelectCommandTypeWindow___c__DisplayClass19_0_o *v44; // x22
  struct UnityEngine_GameObject_array *v45; // x8
  int v46; // w9
  int max_length; // w10
  UnityEngine_Object_o *v48; // x23
  System_Func_int__bool__o *v49; // x23
  struct UnityEngine_GameObject_array *v50; // x8
  __int64 i; // x9
  UnityEngine_GameObject_o *v52; // x8
  struct UnityEngine_GameObject_array *v53; // x8
  __int64 v54; // x9
  UnityEngine_Transform_o *v55; // x23
  struct UnityEngine_GameObject_array *v56; // x8
  __int64 v57; // x9
  UnityEngine_Transform_o *v58; // x23
  struct UnityEngine_GameObject_array *v59; // x8
  __int64 v60; // x9
  const MethodInfo *v61; // x4
  BattleServantData_o *battleServantData; // x23
  BattleSelectCommandTypeWindow_c *v63; // x8
  struct BattleCommand_TYPE_array *CommandTypeOrder; // x8
  __int64 v65; // x9
  struct UnityEngine_GameObject_array *v66; // x8
  __int64 v67; // x9
  UnityEngine_Transform_o *v68; // x23
  int v69; // s0
  struct UIGrid_o *svtRoot; // x8
  __int64 v73; // x0
  BattleCommandComponent_o *commandCard; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_4184E1F & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, bsData);
    sub_B2C35C(&BattleSelectCommandTypeWindow_TypeInfo, v6);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v7);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&Method_BattleSelectCommandTypeWindow___c__DisplayClass19_0__SetServantData_b__0__, v13);
    sub_B2C35C(&BattleSelectCommandTypeWindow___c__DisplayClass19_0_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_2429/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, v15);
    sub_B2C35C(&StringLiteral_2431/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, v16);
    byte_4184E1F = 1;
  }
  commandCard = 0LL;
  this->fields.battleServantData = bsData;
  sub_B2C2F8(&this->fields.battleServantData, bsData);
  title_label = this->fields.title_label;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  buffData = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2431/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, 0LL);
  if ( !bsData )
    goto LABEL_93;
  v20 = (System_String_o *)buffData;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(bsData, 0LL);
  buffData = (UnityEngine_GameObject_o *)System_String__Format(v20, ServantShortName, 0LL);
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
    v23 = this->fields.nowTypeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    buffData = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2429/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, 0LL);
    if ( !v23 )
      goto LABEL_93;
    UILabel__set_text(v23, (System_String_o *)buffData, 0LL);
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
    v26 = *(_QWORD *)&bsData->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&bsData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v75.fields.currentCryptoKey = v26;
    *(_QWORD *)&v75.fields.fakeValue = v25;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v75, 0LL);
    buffData = (UnityEngine_GameObject_o *)ServantTreasureDvcMaster__getEntityFromIDID(
                                             v27,
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
  v30 = (UnityEngine_Transform_o *)buffData;
  if ( (BYTE3(BattleSelectCommandTypeWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
  }
  if ( nowCommandTypeID == 1 )
  {
    v31 = 2;
    if ( !commandTypeObj )
      goto LABEL_93;
  }
  else if ( nowCommandTypeID == 3 )
  {
    v31 = 1;
    if ( !commandTypeObj )
      goto LABEL_93;
  }
  else
  {
    if ( nowCommandTypeID == 2 )
      v31 = 3;
    else
      v31 = nowCommandTypeID;
    if ( !commandTypeObj )
      goto LABEL_93;
  }
  v32 = v31 - 1;
  if ( v32 >= commandTypeObj->max_length )
  {
LABEL_94:
    v73 = sub_B2C460(buffData);
    sub_B2C400(v73, 0LL);
  }
  buffData = commandTypeObj->m_Items[v32];
  if ( !buffData )
    goto LABEL_93;
  buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
  if ( !v30 )
    goto LABEL_93;
  UnityEngine_Transform__SetParent(v30, (UnityEngine_Transform_o *)buffData, 0LL);
  buffData = this->fields.nowTypeFrameObj;
  if ( !buffData )
    goto LABEL_93;
  transform = UnityEngine_GameObject__get_transform(buffData, 0LL);
  *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_93;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v34, 0LL);
  buffData = this->fields.nowTypeFrameObj;
  if ( !buffData )
    goto LABEL_93;
  v37 = UnityEngine_GameObject__get_transform(buffData, 0LL);
  *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_one(0LL);
  if ( !v37 )
    goto LABEL_93;
  UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
  v43 = BattleSelectCommandTypeWindow__GetExcludeTdChangeTypes(v41, bsData, v42);
  v44 = (BattleSelectCommandTypeWindow___c__DisplayClass19_0_o *)sub_B2C42C(BattleSelectCommandTypeWindow___c__DisplayClass19_0_TypeInfo);
  BattleSelectCommandTypeWindow___c__DisplayClass19_0___ctor(v44, 0LL);
  if ( !v44 )
    goto LABEL_93;
  v44->fields.i = 0;
  v45 = this->fields.commandTypeObj;
  if ( !v45 )
    goto LABEL_93;
  v46 = 0;
  while ( 1 )
  {
    max_length = v45->max_length;
    if ( v46 >= max_length )
      break;
    if ( v46 >= (unsigned int)max_length )
      goto LABEL_94;
    v48 = (UnityEngine_Object_o *)v45->m_Items[v46];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    buffData = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v48, 0LL, 0LL);
    if ( ((unsigned __int8)buffData & 1) == 0 )
    {
      v49 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v49,
        (Il2CppObject *)v44,
        Method_BattleSelectCommandTypeWindow___c__DisplayClass19_0__SetServantData_b__0__,
        (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
      buffData = (UnityEngine_GameObject_o *)BasicHelper__Any_int__24273940(
                                               v43,
                                               (System_Func_T__bool__o *)v49,
                                               (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
      v50 = this->fields.commandTypeObj;
      if ( !v50 )
        goto LABEL_93;
      i = v44->fields.i;
      if ( (unsigned int)i >= v50->max_length )
        goto LABEL_94;
      v52 = v50->m_Items[i];
      if ( !v52 )
        goto LABEL_93;
      if ( ((unsigned __int8)buffData & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(v52, 0, 0LL);
        v53 = this->fields.commandTypeObj;
        if ( !v53 )
          goto LABEL_93;
        v54 = v44->fields.i;
        if ( (unsigned int)v54 >= v53->max_length )
          goto LABEL_94;
        buffData = v53->m_Items[v54];
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_93;
        v55 = (UnityEngine_Transform_o *)buffData;
        buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
        if ( !v55 )
          goto LABEL_93;
        UnityEngine_Transform__set_parent(v55, (UnityEngine_Transform_o *)buffData, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(v52, 1, 0LL);
        v56 = this->fields.commandTypeObj;
        if ( !v56 )
          goto LABEL_93;
        v57 = v44->fields.i;
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
        v59 = this->fields.commandTypeObj;
        if ( !v59 )
          goto LABEL_93;
        v60 = v44->fields.i;
        if ( (unsigned int)v60 >= v59->max_length )
          goto LABEL_94;
        buffData = v59->m_Items[v60];
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 buffData,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        commandCard = (BattleCommandComponent_o *)buffData;
        battleServantData = this->fields.battleServantData;
        v63 = BattleSelectCommandTypeWindow_TypeInfo;
        if ( (BYTE3(BattleSelectCommandTypeWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
          v63 = BattleSelectCommandTypeWindow_TypeInfo;
        }
        CommandTypeOrder = v63->static_fields->CommandTypeOrder;
        if ( !CommandTypeOrder )
          goto LABEL_93;
        v65 = v44->fields.i;
        if ( (unsigned int)v65 >= CommandTypeOrder->max_length )
          goto LABEL_94;
        BattleSelectCommandTypeWindow__SetTreasureDvcData(
          (BattleSelectCommandTypeWindow_o *)buffData,
          battleServantData,
          &commandCard,
          CommandTypeOrder->m_Items[v65 + 1],
          v61);
        v66 = this->fields.commandTypeObj;
        if ( !v66 )
          goto LABEL_93;
        v67 = v44->fields.i;
        if ( (unsigned int)v67 >= v66->max_length )
          goto LABEL_94;
        buffData = v66->m_Items[v67];
        if ( !buffData )
          goto LABEL_93;
        v68 = UnityEngine_GameObject__get_transform(buffData, 0LL);
        *(UnityEngine_Vector3_o *)&v69 = UnityEngine_Vector3__get_one(0LL);
        if ( !v68 )
          goto LABEL_93;
        UnityEngine_Transform__set_localScale(v68, *(UnityEngine_Vector3_o *)&v69, 0LL);
      }
    }
    v46 = v44->fields.i + 1;
    v44->fields.i = v46;
    v45 = this->fields.commandTypeObj;
    if ( !v45 )
      goto LABEL_93;
  }
  buffData = this->fields.parentPanel;
  if ( !buffData
    || (UnityEngine_GameObject__SetActive(buffData, 1, 0LL), (svtRoot = this->fields.svtRoot) == 0LL)
    || (BYTE1(svtRoot->fields.onReposition) = 1, (buffData = (UnityEngine_GameObject_o *)this->fields.svtRoot) == 0LL) )
  {
LABEL_93:
    sub_B2C434(buffData, v19);
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
  BattleCommandData_o *v12; // x22

  if ( (byte_4184E21 & 1) == 0 )
  {
    sub_B2C35C(&BattleCommandData_TypeInfo, bsData);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    this = (BattleSelectCommandTypeWindow_o *)sub_B2C35C(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v10);
    byte_4184E21 = 1;
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
    this = (BattleSelectCommandTypeWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)this,
      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    v11 = (UnityEngine_Object_o *)*commandCard;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      v12 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
      BattleCommandData___ctor(v12, 0LL);
      if ( v12 )
      {
        v12->fields._type = cmdType;
        v12->fields.svtlimit = BattleServantData__getCommandDispLimitCount(bsData, 0LL);
        v12->fields._loadsvtLimit = BattleServantData__getDispLimitCount(bsData, 1, 0LL);
        v12->fields.uniqueId = bsData->fields.uniqueId;
        v12->fields.svtId = BattleServantData__getSvtId(bsData, 0LL);
        v12->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(bsData, 0LL);
        v12->fields.treasureDvc = BattleServantData__getTreasureDvcId(bsData, 0, 0LL);
        this = (BattleSelectCommandTypeWindow_o *)*commandCard;
        if ( *commandCard )
        {
          BattleCommandComponent__setData((BattleCommandComponent_o *)this, v12, bsData, 0, 0, 1, 0LL);
          return;
        }
      }
LABEL_16:
      sub_B2C434(this, bsData);
    }
  }
}


UnityEngine_GameObject_o *__fastcall BattleSelectCommandTypeWindow__get_closeBtnObject(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4184E24 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4184E24 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
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
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  int v6; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL),
        !transform) )
  {
    sub_B2C434(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow__setUseClose(
        BattleSelectCommandTypeWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_4184E22 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, flg);
    byte_4184E22 = 1;
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
    v7 = this->fields.cancelButton;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    UnityEngine_Collider__set_enabled(v7, flg, 0LL);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41850C0 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&uniqueId);
    byte_41850C0 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B2C300(this, v10, callback, object);
}


void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__EndInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(_QWORD, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
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
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&uniqueId, *(_QWORD *)&cmdType, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      v24((unsigned int)uniqueId, (unsigned int)cmdType, v23);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v28 = *v22;
          v29 = *(_QWORD *)(v23 + 24);
          v30 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_34;
            }
            v19 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_34:
            v19 = sub_AC5258(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, (unsigned int)uniqueId, (unsigned int)cmdType, v20);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v14 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v11, v13);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            (unsigned int)uniqueId,
            (unsigned int)cmdType,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            (unsigned int)uniqueId,
            (unsigned int)cmdType,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(
      v22,
      (unsigned int)uniqueId,
      (unsigned int)cmdType,
      v23);
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

  if ( (byte_41850BF & 1) == 0 )
  {
    sub_B2C35C(&BattleSelectCommandTypeWindow_TypeInfo, *(_QWORD *)&x);
    byte_41850BF = 1;
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
    sub_B2C434(v5, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= CommandTypeOrder->max_length )
  {
    v9 = sub_B2C460(v5);
    sub_B2C400(v9, 0LL);
  }
  return CommandTypeOrder->m_Items[i + 1] == x;
}