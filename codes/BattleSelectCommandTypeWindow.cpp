void __fastcall BattleSelectCommandTypeWindow___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Array_o *v10; // x19
  struct BattleSelectCommandTypeWindow_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_42E57A6 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSelectCommandTypeWindow_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&BattleCommand_TYPE___TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB,
      v7,
      v8,
      v9);
    byte_42E57A6 = 1;
  }
  v10 = (System_Array_o *)sub_B5D5DC(BattleCommand_TYPE___TypeInfo, 3LL);
  v12.fields.value = Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v10, v12, 0LL);
  static_fields = BattleSelectCommandTypeWindow_TypeInfo->static_fields;
  static_fields->CommandTypeOrder = (struct BattleCommand_TYPE_array *)v10;
  sub_B5D560(static_fields);
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
    sub_B5D69C(0LL, call);
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
  __int64 v3; // x3
  TreasureDvcEntity_o *TreasureDevice; // x0
  __int64 v6; // x1
  System_Int32_array *v7; // x20

  if ( (byte_42E57A1 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)svtData, (_DWORD)method, v3);
    byte_42E57A1 = 1;
  }
  TreasureDevice = (TreasureDvcEntity_o *)sub_B5D5DC(int___TypeInfo, 0LL);
  if ( !svtData )
    goto LABEL_8;
  v7 = (System_Int32_array *)TreasureDevice;
  if ( BattleServantData__get_TreasureDevice(svtData, 0LL) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(svtData, 0LL);
    if ( TreasureDevice )
      return TreasureDvcEntity__GetExcludeTdChangeTypes(TreasureDevice, v7, 0LL);
LABEL_8:
    sub_B5D69C(TreasureDevice, v6);
  }
  return v7;
}


void __fastcall BattleSelectCommandTypeWindow__Open(
        BattleSelectCommandTypeWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *parentPanel; // x0
  BattleWindowOuterClickComponent_OuterClickCall_o *v10; // x20

  if ( (byte_42E579F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleSelectCommandTypeWindow_onCloseButton__, (_DWORD)call, (_DWORD)method, v3);
    sub_B5D5C4(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v6, v7, v8);
    byte_42E579F = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_B5D69C(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v10 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B5D694(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleSelectCommandTypeWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v10,
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


void __fastcall BattleSelectCommandTypeWindow__SelectServant(
        BattleSelectCommandTypeWindow_o *this,
        int32_t cmdType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v6; // w0
  __int64 v7; // x1
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *selectCallBack; // x0
  struct BattleServantData_o *battleServantData; // x8

  if ( (byte_42E57A4 & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, cmdType, (_DWORD)method, v3);
    byte_42E57A4 = 1;
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
      v6 = 12;
    }
    else
    {
      if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      }
      v6 = 10;
    }
    SeManager__PlayCommonSe(v6, 0LL);
    selectCallBack = this->fields.selectCallBack;
    this->fields.useClose = 1;
    if ( selectCallBack )
    {
      battleServantData = this->fields.battleServantData;
      if ( !battleServantData )
        sub_B5D69C(selectCallBack, v7);
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
  sub_B5D560(&this->fields.selectCallBack);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow__SetServantData(
        BattleSelectCommandTypeWindow_o *this,
        BattleServantData_o *bsData,
        bool isShowFrame,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  UILabel_o *title_label; // x22
  UnityEngine_GameObject_o *buffData; // x0
  __int64 v41; // x1
  System_String_o *v42; // x23
  Il2CppObject *ServantShortName; // x0
  UnityEngine_Object_o *nowTypeLabel; // x22
  UILabel_o *v45; // x22
  int32_t *p_m_CachedPtr; // x8
  __int64 v47; // x22
  __int64 v48; // x23
  int32_t v49; // w0
  struct UnityEngine_GameObject_array *commandTypeObj; // x23
  int32_t nowCommandTypeID; // w25
  UnityEngine_Transform_o *v52; // x22
  int v53; // w8
  il2cpp_array_size_t v54; // w8
  UnityEngine_Transform_o *transform; // x22
  int v56; // s0
  UnityEngine_Transform_o *v59; // x22
  int v60; // s0
  BattleSelectCommandTypeWindow_o *v63; // x0
  const MethodInfo *v64; // x2
  System_Int32_array *v65; // x21
  BattleSelectCommandTypeWindow___c__DisplayClass19_0_o *v66; // x22
  struct UnityEngine_GameObject_array *v67; // x8
  int v68; // w9
  int max_length; // w10
  UnityEngine_Object_o *v70; // x23
  System_Func_int__bool__o *v71; // x23
  struct UnityEngine_GameObject_array *v72; // x8
  __int64 i; // x9
  UnityEngine_GameObject_o *v74; // x8
  struct UnityEngine_GameObject_array *v75; // x8
  __int64 v76; // x9
  UnityEngine_Transform_o *v77; // x23
  struct UnityEngine_GameObject_array *v78; // x8
  __int64 v79; // x9
  UnityEngine_Transform_o *v80; // x23
  struct UnityEngine_GameObject_array *v81; // x8
  __int64 v82; // x9
  const MethodInfo *v83; // x4
  BattleServantData_o *battleServantData; // x23
  BattleSelectCommandTypeWindow_c *v85; // x8
  struct BattleCommand_TYPE_array *CommandTypeOrder; // x8
  __int64 v87; // x9
  struct UnityEngine_GameObject_array *v88; // x8
  __int64 v89; // x9
  UnityEngine_Transform_o *v90; // x23
  int v91; // s0
  struct UIGrid_o *svtRoot; // x8
  __int64 v95; // x0
  BattleCommandComponent_o *commandCard; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_42E57A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)bsData, isShowFrame, method);
    sub_B5D5C4(&BattleSelectCommandTypeWindow_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_BattleSelectCommandTypeWindow___c__DisplayClass19_0__SetServantData_b__0__, v27, v28, v29);
    sub_B5D5C4(&BattleSelectCommandTypeWindow___c__DisplayClass19_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_2469/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_2471/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, v36, v37, v38);
    byte_42E57A0 = 1;
  }
  commandCard = 0LL;
  this->fields.battleServantData = bsData;
  sub_B5D560(&this->fields.battleServantData);
  title_label = this->fields.title_label;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  buffData = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2471/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, 0LL);
  if ( !bsData )
    goto LABEL_93;
  v42 = (System_String_o *)buffData;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(bsData, 0LL);
  buffData = (UnityEngine_GameObject_o *)System_String__Format(v42, ServantShortName, 0LL);
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
    v45 = this->fields.nowTypeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    buffData = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2469/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, 0LL);
    if ( !v45 )
      goto LABEL_93;
    UILabel__set_text(v45, (System_String_o *)buffData, 0LL);
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
    v48 = *(_QWORD *)&bsData->fields.svtId.fields.currentCryptoKey;
    v47 = *(_QWORD *)&bsData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v97.fields.currentCryptoKey = v48;
    *(_QWORD *)&v97.fields.fakeValue = v47;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v97, 0LL);
    buffData = (UnityEngine_GameObject_o *)ServantTreasureDvcMaster__getEntityFromIDID(
                                             v49,
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
  v52 = (UnityEngine_Transform_o *)buffData;
  if ( (BYTE3(BattleSelectCommandTypeWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
  }
  if ( nowCommandTypeID == 1 )
  {
    v53 = 2;
    if ( !commandTypeObj )
      goto LABEL_93;
  }
  else if ( nowCommandTypeID == 3 )
  {
    v53 = 1;
    if ( !commandTypeObj )
      goto LABEL_93;
  }
  else
  {
    if ( nowCommandTypeID == 2 )
      v53 = 3;
    else
      v53 = nowCommandTypeID;
    if ( !commandTypeObj )
      goto LABEL_93;
  }
  v54 = v53 - 1;
  if ( v54 >= commandTypeObj->max_length )
  {
LABEL_94:
    v95 = sub_B5D6C8(buffData);
    sub_B5D668(v95, 0LL);
  }
  buffData = commandTypeObj->m_Items[v54];
  if ( !buffData )
    goto LABEL_93;
  buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
  if ( !v52 )
    goto LABEL_93;
  UnityEngine_Transform__SetParent(v52, (UnityEngine_Transform_o *)buffData, 0LL);
  buffData = this->fields.nowTypeFrameObj;
  if ( !buffData )
    goto LABEL_93;
  transform = UnityEngine_GameObject__get_transform(buffData, 0LL);
  *(UnityEngine_Vector3_o *)&v56 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_93;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v56, 0LL);
  buffData = this->fields.nowTypeFrameObj;
  if ( !buffData )
    goto LABEL_93;
  v59 = UnityEngine_GameObject__get_transform(buffData, 0LL);
  *(UnityEngine_Vector3_o *)&v60 = UnityEngine_Vector3__get_one(0LL);
  if ( !v59 )
    goto LABEL_93;
  UnityEngine_Transform__set_localScale(v59, *(UnityEngine_Vector3_o *)&v60, 0LL);
  v65 = BattleSelectCommandTypeWindow__GetExcludeTdChangeTypes(v63, bsData, v64);
  v66 = (BattleSelectCommandTypeWindow___c__DisplayClass19_0_o *)sub_B5D694(BattleSelectCommandTypeWindow___c__DisplayClass19_0_TypeInfo);
  BattleSelectCommandTypeWindow___c__DisplayClass19_0___ctor(v66, 0LL);
  if ( !v66 )
    goto LABEL_93;
  v66->fields.i = 0;
  v67 = this->fields.commandTypeObj;
  if ( !v67 )
    goto LABEL_93;
  v68 = 0;
  while ( 1 )
  {
    max_length = v67->max_length;
    if ( v68 >= max_length )
      break;
    if ( v68 >= (unsigned int)max_length )
      goto LABEL_94;
    v70 = (UnityEngine_Object_o *)v67->m_Items[v68];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    buffData = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v70, 0LL, 0LL);
    if ( ((unsigned __int8)buffData & 1) == 0 )
    {
      v71 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v71,
        (Il2CppObject *)v66,
        Method_BattleSelectCommandTypeWindow___c__DisplayClass19_0__SetServantData_b__0__,
        (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
      buffData = (UnityEngine_GameObject_o *)BasicHelper__Any_int__28142236(
                                               v65,
                                               (System_Func_T__bool__o *)v71,
                                               (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
      v72 = this->fields.commandTypeObj;
      if ( !v72 )
        goto LABEL_93;
      i = v66->fields.i;
      if ( (unsigned int)i >= v72->max_length )
        goto LABEL_94;
      v74 = v72->m_Items[i];
      if ( !v74 )
        goto LABEL_93;
      if ( ((unsigned __int8)buffData & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(v74, 0, 0LL);
        v75 = this->fields.commandTypeObj;
        if ( !v75 )
          goto LABEL_93;
        v76 = v66->fields.i;
        if ( (unsigned int)v76 >= v75->max_length )
          goto LABEL_94;
        buffData = v75->m_Items[v76];
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_93;
        v77 = (UnityEngine_Transform_o *)buffData;
        buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
        if ( !v77 )
          goto LABEL_93;
        UnityEngine_Transform__set_parent(v77, (UnityEngine_Transform_o *)buffData, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(v74, 1, 0LL);
        v78 = this->fields.commandTypeObj;
        if ( !v78 )
          goto LABEL_93;
        v79 = v66->fields.i;
        if ( (unsigned int)v79 >= v78->max_length )
          goto LABEL_94;
        buffData = v78->m_Items[v79];
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_93;
        v80 = (UnityEngine_Transform_o *)buffData;
        buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buffData, 0LL);
        if ( !v80 )
          goto LABEL_93;
        UnityEngine_Transform__set_parent(v80, (UnityEngine_Transform_o *)buffData, 0LL);
        v81 = this->fields.commandTypeObj;
        if ( !v81 )
          goto LABEL_93;
        v82 = v66->fields.i;
        if ( (unsigned int)v82 >= v81->max_length )
          goto LABEL_94;
        buffData = v81->m_Items[v82];
        if ( !buffData )
          goto LABEL_93;
        buffData = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 buffData,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        commandCard = (BattleCommandComponent_o *)buffData;
        battleServantData = this->fields.battleServantData;
        v85 = BattleSelectCommandTypeWindow_TypeInfo;
        if ( (BYTE3(BattleSelectCommandTypeWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
          v85 = BattleSelectCommandTypeWindow_TypeInfo;
        }
        CommandTypeOrder = v85->static_fields->CommandTypeOrder;
        if ( !CommandTypeOrder )
          goto LABEL_93;
        v87 = v66->fields.i;
        if ( (unsigned int)v87 >= CommandTypeOrder->max_length )
          goto LABEL_94;
        BattleSelectCommandTypeWindow__SetTreasureDvcData(
          (BattleSelectCommandTypeWindow_o *)buffData,
          battleServantData,
          &commandCard,
          CommandTypeOrder->m_Items[v87 + 1],
          v83);
        v88 = this->fields.commandTypeObj;
        if ( !v88 )
          goto LABEL_93;
        v89 = v66->fields.i;
        if ( (unsigned int)v89 >= v88->max_length )
          goto LABEL_94;
        buffData = v88->m_Items[v89];
        if ( !buffData )
          goto LABEL_93;
        v90 = UnityEngine_GameObject__get_transform(buffData, 0LL);
        *(UnityEngine_Vector3_o *)&v91 = UnityEngine_Vector3__get_one(0LL);
        if ( !v90 )
          goto LABEL_93;
        UnityEngine_Transform__set_localScale(v90, *(UnityEngine_Vector3_o *)&v91, 0LL);
      }
    }
    v68 = v66->fields.i + 1;
    v66->fields.i = v68;
    v67 = this->fields.commandTypeObj;
    if ( !v67 )
      goto LABEL_93;
  }
  buffData = this->fields.parentPanel;
  if ( !buffData
    || (UnityEngine_GameObject__SetActive(buffData, 1, 0LL), (svtRoot = this->fields.svtRoot) == 0LL)
    || (BYTE1(svtRoot->fields.onReposition) = 1, (buffData = (UnityEngine_GameObject_o *)this->fields.svtRoot) == 0LL) )
  {
LABEL_93:
    sub_B5D69C(buffData, v41);
  }
  UIGrid__set_repositionNow((UIGrid_o *)buffData, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow__SetTreasureDvcData(
        BattleSelectCommandTypeWindow_o *this,
        BattleServantData_o *bsData,
        BattleCommandComponent_o **commandCard,
        int32_t cmdType,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *v17; // x22
  BattleCommandData_o *v18; // x22

  if ( (byte_42E57A2 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandData_TypeInfo, (_DWORD)bsData, (_DWORD)commandCard, *(_QWORD *)&cmdType);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    this = (BattleSelectCommandTypeWindow_o *)sub_B5D5C4(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v14,
                                                v15,
                                                v16);
    byte_42E57A2 = 1;
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
    this = (BattleSelectCommandTypeWindow_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)this,
      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    v17 = (UnityEngine_Object_o *)*commandCard;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      v18 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
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
        this = (BattleSelectCommandTypeWindow_o *)*commandCard;
        if ( *commandCard )
        {
          BattleCommandComponent__setData((BattleCommandComponent_o *)this, v18, bsData, 0, 0, 1, 0LL);
          return;
        }
      }
LABEL_16:
      sub_B5D69C(this, bsData);
    }
  }
}


UnityEngine_GameObject_o *__fastcall BattleSelectCommandTypeWindow__get_closeBtnObject(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E57A5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E57A5 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
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
    sub_B5D69C(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleSelectCommandTypeWindow__setUseClose(
        BattleSelectCommandTypeWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x21
  __int64 v7; // x1
  UnityEngine_Collider_o *v8; // x0

  if ( (byte_42E57A3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, flg, (_DWORD)method, v3);
    byte_42E57A3 = 1;
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
    v8 = this->fields.cancelButton;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_Collider__set_enabled(v8, flg, 0LL);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E60D8 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, uniqueId, cmdType, callback);
    byte_42E60D8 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B5D568(this, v10, callback, object);
}


void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__EndInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&uniqueId, *(_QWORD *)&cmdType);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v11, v13);
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
  __int64 v3; // x3
  BattleSelectCommandTypeWindow_c *v6; // x0
  struct BattleCommand_TYPE_array *CommandTypeOrder; // x8
  __int64 i; // x9
  __int64 v10; // x0

  if ( (byte_42E60D7 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSelectCommandTypeWindow_TypeInfo, x, (_DWORD)method, v3);
    byte_42E60D7 = 1;
  }
  v6 = BattleSelectCommandTypeWindow_TypeInfo;
  if ( (BYTE3(BattleSelectCommandTypeWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
    v6 = BattleSelectCommandTypeWindow_TypeInfo;
  }
  CommandTypeOrder = v6->static_fields->CommandTypeOrder;
  if ( !CommandTypeOrder )
    sub_B5D69C(v6, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= CommandTypeOrder->max_length )
  {
    v10 = sub_B5D6C8(v6);
    sub_B5D668(v10, 0LL);
  }
  return CommandTypeOrder->m_Items[i + 1] == x;
}