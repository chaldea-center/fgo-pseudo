void __fastcall BattleSelectCommandTypeWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x0
  struct BattleCommand_TYPE_array *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_49FEB37 & 1) == 0 )
  {
    sub_1B640C8(&BattleSelectCommandTypeWindow_TypeInfo, v1);
    sub_1B640C8(&BattleCommand_TYPE___TypeInfo, v2);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB,
      v3);
    byte_49FEB37 = 1;
  }
  v4 = (System_Array_o *)sub_1B64170(BattleCommand_TYPE___TypeInfo, 3LL);
  v8.fields.value = Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB;
  v5 = (struct BattleCommand_TYPE_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v4, v8, 0LL);
  BattleSelectCommandTypeWindow_TypeInfo->static_fields->CommandTypeOrder = v5;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleSelectCommandTypeWindow_TypeInfo->static_fields,
    (int32_t)v5,
    v6,
    v7);
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
    sub_1B64324(0LL);
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
  if ( (unsigned int)(qabTypeId - 1) <= 2 )
    return dword_BDDC18[qabTypeId - 1];
  return qabTypeId;
}


System_Int32_array *__fastcall BattleSelectCommandTypeWindow__GetExcludeTdChangeTypes(
        BattleSelectCommandTypeWindow_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x0
  System_Int32_array *v5; // x20

  if ( (byte_49FEB32 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, svtData);
    byte_49FEB32 = 1;
  }
  TreasureDevice = (TreasureDvcEntity_o *)sub_1B64170(int___TypeInfo, 0LL);
  if ( !svtData )
    goto LABEL_8;
  v5 = (System_Int32_array *)TreasureDevice;
  if ( BattleServantData__get_TreasureDevice(svtData, 0LL) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(svtData, 0LL);
    if ( TreasureDevice )
      return TreasureDvcEntity__GetExcludeTdChangeTypes(TreasureDevice, v5, 0LL);
LABEL_8:
    sub_1B64324(TreasureDevice);
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

  if ( (byte_49FEB30 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleSelectCommandTypeWindow_onCloseButton__, call);
    sub_1B640C8(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_49FEB30 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v9 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1B64314(
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t v7; // w1
  __int64 v8; // x0
  struct BattleSelectCommandTypeWindow_SelectServantCallBack_o *selectCallBack; // x8
  struct BattleServantData_o *battleServantData; // x9

  if ( (byte_49FEB35 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleSelectCommandTypeWindow_SelectServant__, *(_QWORD *)&cmdType);
    byte_49FEB35 = 1;
  }
  if ( !this->fields.isSelected )
  {
    this->fields.nowCommandTypeID = cmdType;
    v5 = Method_BattleSelectCommandTypeWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectCommandTypeWindow_SelectServant__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_BattleSelectCommandTypeWindow_SelectServant__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    if ( cmdType >= 1 )
      v7 = 10;
    else
      v7 = 12;
    OverwriteAssetSoundName__PlayCommonSe(v6, v7, 0LL);
    selectCallBack = this->fields.selectCallBack;
    this->fields.useClose = 1;
    if ( selectCallBack )
    {
      battleServantData = this->fields.battleServantData;
      if ( !battleServantData )
        sub_1B64324(v8);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))selectCallBack->fields.m_target)(
        selectCallBack->fields.original_method_info,
        (unsigned int)battleServantData->fields.uniqueId,
        (unsigned int)cmdType,
        *(_QWORD *)&selectCallBack->fields.extra_arg);
    }
  }
}


void __fastcall BattleSelectCommandTypeWindow__SetCallBack(
        BattleSelectCommandTypeWindow_o *this,
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.selectCallBack = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectCallBack, (int32_t)callback, (int32_t)method, v3);
}


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
  UILabel_o *title_label; // x21
  __int64 buffData; // x0
  System_String_o *v18; // x23
  Il2CppObject *ServantShortName; // x0
  UnityEngine_Object_o *nowTypeLabel; // x21
  UILabel_o *v21; // x21
  int32_t *v22; // x8
  __int64 v23; // x21
  __int64 v24; // x23
  int32_t v25; // w0
  __int64 v26; // x1
  struct UnityEngine_GameObject_array *commandTypeObj; // x23
  int32_t nowCommandTypeID; // w24
  UnityEngine_Transform_o *v29; // x21
  __int64 v30; // x1
  UnityEngine_Transform_o *v31; // x23
  __int64 v32; // x1
  UnityEngine_Transform_o *v33; // x23
  BattleSelectCommandTypeWindow_o *v34; // x0
  const MethodInfo *v35; // x2
  System_Int32_array *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x23
  struct UnityEngine_GameObject_array *v40; // x8
  int v41; // w9
  int max_length; // w10
  UnityEngine_Object_o *v43; // x24
  __int64 v44; // x2
  System_Func_int__bool__o *v45; // x24
  struct UnityEngine_GameObject_array *v46; // x8
  __int64 v47; // x9
  UnityEngine_GameObject_o *v48; // x8
  struct UnityEngine_GameObject_array *v49; // x8
  __int64 v50; // x9
  UnityEngine_Transform_o *v51; // x24
  struct UnityEngine_GameObject_array *v52; // x8
  __int64 v53; // x9
  UnityEngine_Transform_o *v54; // x24
  struct UnityEngine_GameObject_array *v55; // x8
  __int64 v56; // x9
  const MethodInfo *v57; // x4
  BattleSelectCommandTypeWindow_c *v58; // x8
  BattleServantData_o *battleServantData; // x24
  struct BattleCommand_TYPE_array *CommandTypeOrder; // x8
  __int64 v61; // x9
  struct UnityEngine_GameObject_array *v62; // x8
  __int64 v63; // x9
  __int64 v64; // x1
  UnityEngine_Transform_o *v65; // x24
  BattleCommandComponent_o *commandCard; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_49FEB31 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, bsData);
    sub_1B640C8(&BattleSelectCommandTypeWindow_TypeInfo, v6);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&Method_BattleSelectCommandTypeWindow___c__DisplayClass19_0__SetServantData_b__0__, v12);
    sub_1B640C8(&BattleSelectCommandTypeWindow___c__DisplayClass19_0_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_2854/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, v14);
    sub_1B640C8(&StringLiteral_2856/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, v15);
    byte_49FEB31 = 1;
  }
  commandCard = 0LL;
  this->fields.battleServantData = bsData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.battleServantData,
    (int32_t)bsData,
    isShowFrame,
    (int32_t)method);
  title_label = this->fields.title_label;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  buffData = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2856/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, 0LL);
  if ( !bsData )
    goto LABEL_84;
  v18 = (System_String_o *)buffData;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(bsData, 0LL);
  buffData = (__int64)System_String__Format(v18, ServantShortName, 0LL);
  if ( !title_label )
    goto LABEL_84;
  UILabel__set_text(title_label, (System_String_o *)buffData, 0LL);
  nowTypeLabel = (UnityEngine_Object_o *)this->fields.nowTypeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nowTypeLabel, 0LL, 0LL) )
  {
    v21 = this->fields.nowTypeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    buffData = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2854/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, 0LL);
    if ( !v21 )
      goto LABEL_84;
    UILabel__set_text(v21, (System_String_o *)buffData, 0LL);
  }
  buffData = (__int64)bsData->fields.buffData;
  if ( !buffData )
    goto LABEL_84;
  if ( BattleBuffData__isTDTypeChange((BattleBuffData_o *)buffData, bsData, 0LL) )
  {
    buffData = (__int64)bsData->fields.buffData;
    if ( !buffData )
      goto LABEL_84;
    buffData = (__int64)BattleBuffData__getTDTypeChangeBuffData((BattleBuffData_o *)buffData, bsData, 0LL);
    if ( !buffData )
      goto LABEL_84;
    v22 = (int32_t *)(buffData + 28);
  }
  else
  {
    v24 = *(_QWORD *)&bsData->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&bsData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v67.fields.currentCryptoKey = v24;
    *(_QWORD *)&v67.fields.fakeValue = v23;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v67, 0LL);
    buffData = (__int64)ServantTreasureDvcMaster__getEntityFromIDID(v25, bsData->fields.treasuredvcId, 0LL);
    if ( !buffData )
      goto LABEL_84;
    v22 = (int32_t *)(buffData + 64);
  }
  buffData = (__int64)this->fields.nowTypeFrameObj;
  this->fields.nowCommandTypeID = *v22;
  if ( !buffData )
    goto LABEL_84;
  buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
  commandTypeObj = this->fields.commandTypeObj;
  nowCommandTypeID = this->fields.nowCommandTypeID;
  v29 = (UnityEngine_Transform_o *)buffData;
  if ( !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
  if ( (unsigned int)(nowCommandTypeID - 1) <= 2 )
    nowCommandTypeID = dword_BDDC18[nowCommandTypeID - 1];
  if ( !commandTypeObj )
    goto LABEL_84;
  if ( nowCommandTypeID - 1 >= commandTypeObj->max_length )
LABEL_85:
    sub_1B6432C(buffData, v26);
  buffData = (__int64)commandTypeObj->m_Items[nowCommandTypeID - 1];
  if ( !buffData )
    goto LABEL_84;
  buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
  if ( !v29 )
    goto LABEL_84;
  UnityEngine_Transform__SetParent(v29, (UnityEngine_Transform_o *)buffData, 0LL);
  buffData = (__int64)this->fields.nowTypeFrameObj;
  if ( !buffData )
    goto LABEL_84;
  buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
  v31 = (UnityEngine_Transform_o *)buffData;
  if ( !byte_49F7111 )
  {
    buffData = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v30);
    byte_49F7111 = 1;
  }
  if ( !v31 )
    goto LABEL_84;
  UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  buffData = (__int64)this->fields.nowTypeFrameObj;
  if ( !buffData )
    goto LABEL_84;
  buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
  v33 = (UnityEngine_Transform_o *)buffData;
  if ( !byte_49F7116 )
  {
    buffData = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v32);
    byte_49F7116 = 1;
  }
  if ( !v33 )
    goto LABEL_84;
  UnityEngine_Transform__set_localScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v36 = BattleSelectCommandTypeWindow__GetExcludeTdChangeTypes(v34, bsData, v35);
  v39 = sub_1B64314(BattleSelectCommandTypeWindow___c__DisplayClass19_0_TypeInfo, v37, v38);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  if ( !v39 )
    goto LABEL_84;
  *(_DWORD *)(v39 + 16) = 0;
  v40 = this->fields.commandTypeObj;
  if ( !v40 )
    goto LABEL_84;
  v41 = 0;
  while ( 1 )
  {
    max_length = v40->max_length;
    if ( v41 >= max_length )
      break;
    if ( v41 >= (unsigned int)max_length )
      goto LABEL_85;
    v43 = (UnityEngine_Object_o *)v40->m_Items[v41];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    buffData = UnityEngine_Object__op_Equality(v43, 0LL, 0LL);
    if ( (buffData & 1) == 0 )
    {
      v45 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v26, v44);
      System_Func_int__bool____ctor(
        v45,
        (Il2CppObject *)v39,
        Method_BattleSelectCommandTypeWindow___c__DisplayClass19_0__SetServantData_b__0__,
        0LL);
      buffData = BasicHelper__Any_int__48383472(
                   v36,
                   (System_Func_T__bool__o *)v45,
                   (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408);
      v46 = this->fields.commandTypeObj;
      if ( !v46 )
        goto LABEL_84;
      v47 = *(int *)(v39 + 16);
      if ( (unsigned int)v47 >= v46->max_length )
        goto LABEL_85;
      v48 = v46->m_Items[v47];
      if ( !v48 )
        goto LABEL_84;
      if ( (buffData & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(v48, 0, 0LL);
        v49 = this->fields.commandTypeObj;
        if ( !v49 )
          goto LABEL_84;
        v50 = *(int *)(v39 + 16);
        if ( (unsigned int)v50 >= v49->max_length )
          goto LABEL_85;
        buffData = (__int64)v49->m_Items[v50];
        if ( !buffData )
          goto LABEL_84;
        buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_84;
        v51 = (UnityEngine_Transform_o *)buffData;
        buffData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
        if ( !buffData )
          goto LABEL_84;
        buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
        if ( !v51 )
          goto LABEL_84;
        UnityEngine_Transform__set_parent(v51, (UnityEngine_Transform_o *)buffData, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(v48, 1, 0LL);
        v52 = this->fields.commandTypeObj;
        if ( !v52 )
          goto LABEL_84;
        v53 = *(int *)(v39 + 16);
        if ( (unsigned int)v53 >= v52->max_length )
          goto LABEL_85;
        buffData = (__int64)v52->m_Items[v53];
        if ( !buffData )
          goto LABEL_84;
        buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_84;
        v54 = (UnityEngine_Transform_o *)buffData;
        buffData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
        if ( !buffData )
          goto LABEL_84;
        buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
        if ( !v54 )
          goto LABEL_84;
        UnityEngine_Transform__set_parent(v54, (UnityEngine_Transform_o *)buffData, 0LL);
        v55 = this->fields.commandTypeObj;
        if ( !v55 )
          goto LABEL_84;
        v56 = *(int *)(v39 + 16);
        if ( (unsigned int)v56 >= v55->max_length )
          goto LABEL_85;
        buffData = (__int64)v55->m_Items[v56];
        if ( !buffData )
          goto LABEL_84;
        buffData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)buffData,
                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        v58 = BattleSelectCommandTypeWindow_TypeInfo;
        commandCard = (BattleCommandComponent_o *)buffData;
        battleServantData = this->fields.battleServantData;
        if ( !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
          v58 = BattleSelectCommandTypeWindow_TypeInfo;
        }
        CommandTypeOrder = v58->static_fields->CommandTypeOrder;
        if ( !CommandTypeOrder )
          goto LABEL_84;
        v61 = *(int *)(v39 + 16);
        if ( (unsigned int)v61 >= CommandTypeOrder->max_length )
          goto LABEL_85;
        BattleSelectCommandTypeWindow__SetTreasureDvcData(
          (BattleSelectCommandTypeWindow_o *)buffData,
          battleServantData,
          &commandCard,
          CommandTypeOrder->m_Items[v61 + 1],
          v57);
        v62 = this->fields.commandTypeObj;
        if ( !v62 )
          goto LABEL_84;
        v63 = *(int *)(v39 + 16);
        if ( (unsigned int)v63 >= v62->max_length )
          goto LABEL_85;
        buffData = (__int64)v62->m_Items[v63];
        if ( !buffData )
          goto LABEL_84;
        buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
        v65 = (UnityEngine_Transform_o *)buffData;
        if ( !byte_49F7116 )
        {
          buffData = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v64);
          byte_49F7116 = 1;
        }
        if ( !v65 )
          goto LABEL_84;
        UnityEngine_Transform__set_localScale(v65, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      }
    }
    v41 = *(_DWORD *)(v39 + 16) + 1;
    *(_DWORD *)(v39 + 16) = v41;
    v40 = this->fields.commandTypeObj;
    if ( !v40 )
      goto LABEL_84;
  }
  buffData = (__int64)this->fields.parentPanel;
  if ( !buffData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 1, 0LL),
        (buffData = (__int64)this->fields.svtRoot) == 0) )
  {
LABEL_84:
    sub_1B64324(buffData);
  }
  *(_BYTE *)(buffData + 57) = 1;
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

  if ( (byte_49FEB33 & 1) == 0 )
  {
    sub_1B640C8(&BattleCommandData_TypeInfo, bsData);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    this = (BattleSelectCommandTypeWindow_o *)sub_1B640C8(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v10);
    byte_49FEB33 = 1;
  }
  if ( !bsData )
    goto LABEL_15;
  if ( BattleServantData__getTreasureDvcId(bsData, 0, 0LL) >= 1 )
  {
    this = (BattleSelectCommandTypeWindow_o *)*commandCard;
    if ( !*commandCard )
      goto LABEL_15;
    this = (BattleSelectCommandTypeWindow_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (BattleSelectCommandTypeWindow_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_15;
    DataManager__GetMasterData_object_(
      (DataManager_o *)this,
      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    v11 = (UnityEngine_Object_o *)*commandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      v14 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v12, v13);
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
          BattleCommandComponent__setData((BattleCommandComponent_o *)this, v14, bsData, 0, 0, 1, 1, 0LL);
          return;
        }
      }
LABEL_15:
      sub_1B64324(this);
    }
  }
}


UnityEngine_GameObject_o *__fastcall BattleSelectCommandTypeWindow__get_closeBtnObject(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_49FEB36 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FEB36 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1B64324(0LL);
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


void __fastcall BattleSelectCommandTypeWindow__setInitialPos(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_49F7111 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v4);
    byte_49F7111 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1B64324(gameObject);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow__setUseClose(
        BattleSelectCommandTypeWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  bool v5; // w22
  UnityEngine_Object_o *cancelButton; // x21
  UnityEngine_Collider_o *v7; // x0

  v5 = flg;
  if ( (byte_49FEB34 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, flg);
    byte_49FEB34 = 1;
  }
  this->fields.useClose = v5;
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelButton, 0LL, 0LL) )
  {
    v7 = this->fields.cancelButton;
    if ( !v7 )
      sub_1B64324(0LL);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19AE960;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AE908;
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
  __int64 v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v11 = cmdType;
  v12 = uniqueId;
  if ( (byte_49FEB38 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&uniqueId);
    byte_49FEB38 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v10, callback, object);
}


void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__EndInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__Invoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        int32_t cmdType,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    uniqueId,
    cmdType,
    *(_QWORD *)&this->fields.extra_arg);
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

  if ( (byte_49FEB39 & 1) == 0 )
  {
    sub_1B640C8(&BattleSelectCommandTypeWindow_TypeInfo, *(_QWORD *)&x);
    byte_49FEB39 = 1;
  }
  v5 = BattleSelectCommandTypeWindow_TypeInfo;
  if ( !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
    v5 = BattleSelectCommandTypeWindow_TypeInfo;
  }
  CommandTypeOrder = v5->static_fields->CommandTypeOrder;
  if ( !CommandTypeOrder )
    sub_1B64324(v5);
  i = this->fields.i;
  if ( (unsigned int)i >= CommandTypeOrder->max_length )
    sub_1B6432C(v5, *(_QWORD *)&x);
  return CommandTypeOrder->m_Items[i + 1] == x;
}