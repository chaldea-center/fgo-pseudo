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

  if ( (byte_48E4E5F & 1) == 0 )
  {
    sub_1B00CCC(&BattleSelectCommandTypeWindow_TypeInfo, v1);
    sub_1B00CCC(&BattleCommand_TYPE___TypeInfo, v2);
    sub_1B00CCC(
      &Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB,
      v3);
    byte_48E4E5F = 1;
  }
  v4 = (System_Array_o *)sub_1B00D74(BattleCommand_TYPE___TypeInfo, 3LL);
  v8.fields.value = Field__PrivateImplementationDetails__DEC2809E6E374A6F8998DEF7721D410CA4D634F5B842BD3989C5CC94ED785DDB;
  v5 = (struct BattleCommand_TYPE_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_60233828(v4, v8, 0LL);
  BattleSelectCommandTypeWindow_TypeInfo->static_fields->CommandTypeOrder = v5;
  sub_1B00C70(
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
    sub_1B00F28(0LL, call);
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
    return dword_BAB4C0[qabTypeId - 1];
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

  if ( (byte_48E4E5A & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, svtData);
    byte_48E4E5A = 1;
  }
  TreasureDevice = (TreasureDvcEntity_o *)sub_1B00D74(int___TypeInfo, 0LL);
  if ( !svtData )
    goto LABEL_8;
  v6 = (System_Int32_array *)TreasureDevice;
  if ( BattleServantData__get_TreasureDevice(svtData, 0LL) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(svtData, 0LL);
    if ( TreasureDevice )
      return TreasureDvcEntity__GetExcludeTdChangeTypes(TreasureDevice, v6, 0LL);
LABEL_8:
    sub_1B00F28(TreasureDevice, v5);
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

  if ( (byte_48E4E58 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleSelectCommandTypeWindow_onCloseButton__, call);
    sub_1B00CCC(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_48E4E58 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1B00F28(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v7 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1B00F18(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t v7; // w1
  __int64 v8; // x0
  __int64 v9; // x1
  struct BattleSelectCommandTypeWindow_SelectServantCallBack_o *selectCallBack; // x8
  struct BattleServantData_o *battleServantData; // x9

  if ( (byte_48E4E5D & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleSelectCommandTypeWindow_SelectServant__, *(_QWORD *)&cmdType);
    byte_48E4E5D = 1;
  }
  if ( !this->fields.isSelected )
  {
    this->fields.nowCommandTypeID = cmdType;
    v5 = Method_BattleSelectCommandTypeWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectCommandTypeWindow_SelectServant__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B00CE4(Method_BattleSelectCommandTypeWindow_SelectServant__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
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
        sub_1B00F28(v8, v9);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectCallBack, (int32_t)callback, (int32_t)method, v3);
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
  __int64 v18; // x1
  System_String_o *v19; // x23
  Il2CppObject *ServantShortName; // x0
  UnityEngine_Object_o *nowTypeLabel; // x21
  UILabel_o *v22; // x21
  int32_t *v23; // x8
  __int64 v24; // x21
  __int64 v25; // x23
  int32_t v26; // w0
  struct UnityEngine_GameObject_array *commandTypeObj; // x23
  int32_t nowCommandTypeID; // w24
  UnityEngine_Transform_o *v29; // x21
  UnityEngine_Transform_o *v30; // x23
  UnityEngine_Transform_o *v31; // x23
  BattleSelectCommandTypeWindow_o *v32; // x0
  const MethodInfo *v33; // x2
  System_Int32_array *v34; // x22
  __int64 v35; // x23
  struct UnityEngine_GameObject_array *v36; // x8
  int v37; // w9
  int max_length; // w10
  UnityEngine_Object_o *v39; // x24
  System_Func_int__bool__o *v40; // x24
  struct UnityEngine_GameObject_array *v41; // x8
  __int64 v42; // x9
  UnityEngine_GameObject_o *v43; // x8
  struct UnityEngine_GameObject_array *v44; // x8
  __int64 v45; // x9
  UnityEngine_Transform_o *v46; // x24
  struct UnityEngine_GameObject_array *v47; // x8
  __int64 v48; // x9
  UnityEngine_Transform_o *v49; // x24
  struct UnityEngine_GameObject_array *v50; // x8
  __int64 v51; // x9
  const MethodInfo *v52; // x4
  BattleSelectCommandTypeWindow_c *v53; // x8
  BattleServantData_o *battleServantData; // x24
  struct BattleCommand_TYPE_array *CommandTypeOrder; // x8
  __int64 v56; // x9
  struct UnityEngine_GameObject_array *v57; // x8
  __int64 v58; // x9
  UnityEngine_Transform_o *v59; // x24
  BattleCommandComponent_o *commandCard; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_48E4E59 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_int____74581360, bsData);
    sub_1B00CCC(&BattleSelectCommandTypeWindow_TypeInfo, v6);
    sub_1B00CCC(&System_Func_int__bool__TypeInfo, v7);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v8);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v9);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v10);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B00CCC(&Method_BattleSelectCommandTypeWindow___c__DisplayClass19_0__SetServantData_b__0__, v12);
    sub_1B00CCC(&BattleSelectCommandTypeWindow___c__DisplayClass19_0_TypeInfo, v13);
    sub_1B00CCC(&StringLiteral_2848/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, v14);
    sub_1B00CCC(&StringLiteral_2850/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, v15);
    byte_48E4E59 = 1;
  }
  commandCard = 0LL;
  this->fields.battleServantData = bsData;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.battleServantData,
    (int32_t)bsData,
    isShowFrame,
    (int32_t)method);
  title_label = this->fields.title_label;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  buffData = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2850/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_TITLE"*/, 0LL);
  if ( !bsData )
    goto LABEL_84;
  v19 = (System_String_o *)buffData;
  ServantShortName = (Il2CppObject *)BattleServantData__getServantShortName(bsData, 0LL);
  buffData = (__int64)System_String__Format(v19, ServantShortName, 0LL);
  if ( !title_label )
    goto LABEL_84;
  UILabel__set_text(title_label, (System_String_o *)buffData, 0LL);
  nowTypeLabel = (UnityEngine_Object_o *)this->fields.nowTypeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nowTypeLabel, 0LL, 0LL) )
  {
    v22 = this->fields.nowTypeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    buffData = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2848/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_NOW_TYPE"*/, 0LL);
    if ( !v22 )
      goto LABEL_84;
    UILabel__set_text(v22, (System_String_o *)buffData, 0LL);
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
    v23 = (int32_t *)(buffData + 28);
  }
  else
  {
    v25 = *(_QWORD *)&bsData->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&bsData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v61.fields.currentCryptoKey = v25;
    *(_QWORD *)&v61.fields.fakeValue = v24;
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v61, 0LL);
    buffData = (__int64)ServantTreasureDvcMaster__getEntityFromIDID(v26, bsData->fields.treasuredvcId, 0LL);
    if ( !buffData )
      goto LABEL_84;
    v23 = (int32_t *)(buffData + 64);
  }
  buffData = (__int64)this->fields.nowTypeFrameObj;
  this->fields.nowCommandTypeID = *v23;
  if ( !buffData )
    goto LABEL_84;
  buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
  commandTypeObj = this->fields.commandTypeObj;
  nowCommandTypeID = this->fields.nowCommandTypeID;
  v29 = (UnityEngine_Transform_o *)buffData;
  if ( !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
  if ( (unsigned int)(nowCommandTypeID - 1) <= 2 )
    nowCommandTypeID = dword_BAB4C0[nowCommandTypeID - 1];
  if ( !commandTypeObj )
    goto LABEL_84;
  if ( nowCommandTypeID - 1 >= commandTypeObj->max_length )
LABEL_85:
    sub_1B00F30(buffData, v18);
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
  v30 = (UnityEngine_Transform_o *)buffData;
  if ( !byte_48DD9F1 )
  {
    buffData = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v18);
    byte_48DD9F1 = 1;
  }
  if ( !v30 )
    goto LABEL_84;
  UnityEngine_Transform__set_localPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  buffData = (__int64)this->fields.nowTypeFrameObj;
  if ( !buffData )
    goto LABEL_84;
  buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
  v31 = (UnityEngine_Transform_o *)buffData;
  if ( !byte_48DD9F6 )
  {
    buffData = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v18);
    byte_48DD9F6 = 1;
  }
  if ( !v31 )
    goto LABEL_84;
  UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v34 = BattleSelectCommandTypeWindow__GetExcludeTdChangeTypes(v32, bsData, v33);
  v35 = sub_1B00F18(BattleSelectCommandTypeWindow___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_84;
  *(_DWORD *)(v35 + 16) = 0;
  v36 = this->fields.commandTypeObj;
  if ( !v36 )
    goto LABEL_84;
  v37 = 0;
  while ( 1 )
  {
    max_length = v36->max_length;
    if ( v37 >= max_length )
      break;
    if ( v37 >= (unsigned int)max_length )
      goto LABEL_85;
    v39 = (UnityEngine_Object_o *)v36->m_Items[v37];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    buffData = UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
    if ( (buffData & 1) == 0 )
    {
      v40 = (System_Func_int__bool__o *)sub_1B00F18(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v40,
        (Il2CppObject *)v35,
        Method_BattleSelectCommandTypeWindow___c__DisplayClass19_0__SetServantData_b__0__,
        0LL);
      buffData = BasicHelper__Any_int__47506688(
                   v34,
                   (System_Func_T__bool__o *)v40,
                   (const MethodInfo_2D4E500 *)Method_BasicHelper_Any_int____74581360);
      v41 = this->fields.commandTypeObj;
      if ( !v41 )
        goto LABEL_84;
      v42 = *(int *)(v35 + 16);
      if ( (unsigned int)v42 >= v41->max_length )
        goto LABEL_85;
      v43 = v41->m_Items[v42];
      if ( !v43 )
        goto LABEL_84;
      if ( (buffData & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(v43, 0, 0LL);
        v44 = this->fields.commandTypeObj;
        if ( !v44 )
          goto LABEL_84;
        v45 = *(int *)(v35 + 16);
        if ( (unsigned int)v45 >= v44->max_length )
          goto LABEL_85;
        buffData = (__int64)v44->m_Items[v45];
        if ( !buffData )
          goto LABEL_84;
        buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_84;
        v46 = (UnityEngine_Transform_o *)buffData;
        buffData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
        if ( !buffData )
          goto LABEL_84;
        buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
        if ( !v46 )
          goto LABEL_84;
        UnityEngine_Transform__set_parent(v46, (UnityEngine_Transform_o *)buffData, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(v43, 1, 0LL);
        v47 = this->fields.commandTypeObj;
        if ( !v47 )
          goto LABEL_84;
        v48 = *(int *)(v35 + 16);
        if ( (unsigned int)v48 >= v47->max_length )
          goto LABEL_85;
        buffData = (__int64)v47->m_Items[v48];
        if ( !buffData )
          goto LABEL_84;
        buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
        if ( !this->fields.svtRoot )
          goto LABEL_84;
        v49 = (UnityEngine_Transform_o *)buffData;
        buffData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
        if ( !buffData )
          goto LABEL_84;
        buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
        if ( !v49 )
          goto LABEL_84;
        UnityEngine_Transform__set_parent(v49, (UnityEngine_Transform_o *)buffData, 0LL);
        v50 = this->fields.commandTypeObj;
        if ( !v50 )
          goto LABEL_84;
        v51 = *(int *)(v35 + 16);
        if ( (unsigned int)v51 >= v50->max_length )
          goto LABEL_85;
        buffData = (__int64)v50->m_Items[v51];
        if ( !buffData )
          goto LABEL_84;
        buffData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)buffData,
                              (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        v53 = BattleSelectCommandTypeWindow_TypeInfo;
        commandCard = (BattleCommandComponent_o *)buffData;
        battleServantData = this->fields.battleServantData;
        if ( !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
          v53 = BattleSelectCommandTypeWindow_TypeInfo;
        }
        CommandTypeOrder = v53->static_fields->CommandTypeOrder;
        if ( !CommandTypeOrder )
          goto LABEL_84;
        v56 = *(int *)(v35 + 16);
        if ( (unsigned int)v56 >= CommandTypeOrder->max_length )
          goto LABEL_85;
        BattleSelectCommandTypeWindow__SetTreasureDvcData(
          (BattleSelectCommandTypeWindow_o *)buffData,
          battleServantData,
          &commandCard,
          CommandTypeOrder->m_Items[v56 + 1],
          v52);
        v57 = this->fields.commandTypeObj;
        if ( !v57 )
          goto LABEL_84;
        v58 = *(int *)(v35 + 16);
        if ( (unsigned int)v58 >= v57->max_length )
          goto LABEL_85;
        buffData = (__int64)v57->m_Items[v58];
        if ( !buffData )
          goto LABEL_84;
        buffData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)buffData, 0LL);
        v59 = (UnityEngine_Transform_o *)buffData;
        if ( !byte_48DD9F6 )
        {
          buffData = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v18);
          byte_48DD9F6 = 1;
        }
        if ( !v59 )
          goto LABEL_84;
        UnityEngine_Transform__set_localScale(v59, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      }
    }
    v37 = *(_DWORD *)(v35 + 16) + 1;
    *(_DWORD *)(v35 + 16) = v37;
    v36 = this->fields.commandTypeObj;
    if ( !v36 )
      goto LABEL_84;
  }
  buffData = (__int64)this->fields.parentPanel;
  if ( !buffData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 1, 0LL),
        (buffData = (__int64)this->fields.svtRoot) == 0) )
  {
LABEL_84:
    sub_1B00F28(buffData, v18);
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
  BattleCommandData_o *v12; // x22

  if ( (byte_48E4E5B & 1) == 0 )
  {
    sub_1B00CCC(&BattleCommandData_TypeInfo, bsData);
    sub_1B00CCC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v8);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v9);
    this = (BattleSelectCommandTypeWindow_o *)sub_1B00CCC(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v10);
    byte_48E4E5B = 1;
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
    this = (BattleSelectCommandTypeWindow_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_15;
    DataManager__GetMasterData_object_(
      (DataManager_o *)this,
      (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    v11 = (UnityEngine_Object_o *)*commandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      v12 = (BattleCommandData_o *)sub_1B00F18(BattleCommandData_TypeInfo);
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
          BattleCommandComponent__setData((BattleCommandComponent_o *)this, v12, bsData, 0, 0, 1, 1, 0LL);
          return;
        }
      }
LABEL_15:
      sub_1B00F28(this, bsData);
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

  if ( (byte_48E4E5E & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E4E5E = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B00F28(0LL, v4);
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
  if ( !byte_48DD9F1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v4);
    byte_48DD9F1 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1B00F28(gameObject, v4);
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
  __int64 v7; // x1
  UnityEngine_Collider_o *v8; // x0

  v5 = flg;
  if ( (byte_48E4E5C & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, flg);
    byte_48E4E5C = 1;
  }
  this->fields.useClose = v5;
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelButton, 0LL, 0LL) )
  {
    v8 = this->fields.cancelButton;
    if ( !v8 )
      sub_1B00F28(0LL, v7);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_194D7E4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_194D78C;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+18h] [xbp-38h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-34h] BYREF

  v14 = cmdType;
  v15 = uniqueId;
  if ( (byte_48E4E60 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&uniqueId);
    byte_48E4E60 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(int_TypeInfo, &v15, *(_QWORD *)&cmdType, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B00C80(this, v13, callback, object);
}


void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__EndInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
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

  if ( (byte_48E4E61 & 1) == 0 )
  {
    sub_1B00CCC(&BattleSelectCommandTypeWindow_TypeInfo, *(_QWORD *)&x);
    byte_48E4E61 = 1;
  }
  v5 = BattleSelectCommandTypeWindow_TypeInfo;
  if ( !BattleSelectCommandTypeWindow_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectCommandTypeWindow_TypeInfo);
    v5 = BattleSelectCommandTypeWindow_TypeInfo;
  }
  CommandTypeOrder = v5->static_fields->CommandTypeOrder;
  if ( !CommandTypeOrder )
    sub_1B00F28(v5, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= CommandTypeOrder->max_length )
    sub_1B00F30(v5, *(_QWORD *)&x);
  return CommandTypeOrder->m_Items[i + 1] == x;
}