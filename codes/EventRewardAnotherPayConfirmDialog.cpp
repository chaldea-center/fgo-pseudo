void __fastcall EventRewardAnotherPayConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x9
  EventRewardAnotherPayConfirmDialog_c *v3; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v4; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v5; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v6; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v7; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v8; // x9

  if ( (byte_41887D4 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardAnotherPayConfirmDialog_TypeInfo, v1);
    byte_41887D4 = 1;
  }
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CANCEL_BUTTON_BASE_POS.fields.x = 0xC3600000C3200000LL;
  static_fields->CANCEL_BUTTON_BASE_POS.fields.z = 0.0;
  v3 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  v4 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(int32x2_t *)&v4->CANCEL_BUTTON_CHOICES_POS.fields.x = vdup_n_s32(0xC3600000);
  v4->CANCEL_BUTTON_CHOICES_POS.fields.z = 0.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->CANCEL_BUTTON_PURCHASED_POS.fields.x = 0xC3700000C3200000LL;
  v5->CANCEL_BUTTON_PURCHASED_POS.fields.z = 0.0;
  v6 = v3->static_fields;
  *(_QWORD *)&v6->CANCEL_BUTTON_RESULT_POS.fields.x = 0xC31B000000000000LL;
  v6->CANCEL_BUTTON_RESULT_POS.fields.z = 0.0;
  v7 = v3->static_fields;
  *(_QWORD *)&v7->DECIDE_BUTTON_BASE_POS.fields.x = 0xC360000043200000LL;
  v7->DECIDE_BUTTON_BASE_POS.fields.z = 0.0;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->DECIDE_BUTTON_PURCHASED_POS.fields.x = -4363988037795840000LL;
  v8->DECIDE_BUTTON_PURCHASED_POS.fields.z = 0.0;
  v3->static_fields->CONFIRM_WINDOW_SIZE = (struct UnityEngine_Vector2_o)0x4416000044430000LL;
  v3->static_fields->RESULT_WINDOW_SIZE = (struct UnityEngine_Vector2_o)0x43F0000044430000LL;
  v3->static_fields->SKILL_BASE_POS_Y = 5.0;
  v3->static_fields->SKILL_CHOICES_POS_Y = 10.0;
  v3->static_fields->SKILL_PURCHASED_POS_Y = -25.0;
  v3->static_fields->SKILL_RESULT_POS_Y = -30.0;
  v3->static_fields->SKILL_RESULT_END_POS_Y = 0.0;
  v3->static_fields->ICON_BASE_POS_Y = 175.0;
  v3->static_fields->ICON_CHOICES_POS_Y = 180.0;
  v3->static_fields->ICON_PURCHASED_POS_Y = 185.0;
  v3->static_fields->UPPER_LABEL_POS_Y = -50.0;
  v3->static_fields->UPPER_LABEL_CHOICES_POS_Y = -60.0;
  v3->static_fields->WARN_LABEL_BASE_POS_Y = -95.0;
  v3->static_fields->WARN_LABEL_CHOICES_POS_Y = -100.0;
  v3->static_fields->WARN_LABEL_PURCHASED_POS_Y = -125.0;
  v3->static_fields->DOWNER_LABEL_POS_Y = -50.0;
  v3->static_fields->DOWNER_LABEL_CHOICES_POS_Y = -55.0;
  v3->static_fields->DOWNER_LABEL_RESULT_POS_Y = -100.0;
  v3->static_fields->RESULT_LABEL_POS_Y = 100.0;
  v3->static_fields->RESULT_LABEL_PERIOD_POS_Y = 120.0;
  v3->static_fields->DOWNER_LABEL_FONT_SIZE = 20;
  v3->static_fields->DOWNER_LABEL_RESULT_FONT_SIZE = 22;
}


void __fastcall EventRewardAnotherPayConfirmDialog___ctor(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_41887D3 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_41887D3 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__Close(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__EndOpen(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


System_String_o *__fastcall EventRewardAnotherPayConfirmDialog__GetName(
        EventRewardAnotherPayConfirmDialog_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v10; // x1
  int64_t v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  WarQuestSelectionMaster_o *v14; // x0
  __int64 v15; // x21
  __int64 v16; // x22
  ServantLimitImageMaster_o *v17; // x20
  int32_t v18; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_41887D1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, svtEntity);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_41887D1 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !svtEntity )
    goto LABEL_29;
  v11 = UserId;
  v13 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v13;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v21, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v11, UserId, 0LL) )
  {
    v18 = -1;
    return ServantEntity__getName(svtEntity, v18, -1, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v16 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v15 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v17 = (ServantLimitImageMaster_o *)v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v16;
  *(_QWORD *)&v22.fields.fakeValue = v15;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL);
  if ( !entity
    || !v17
    || (UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v17, UserId, entity->fields.maxLimitCount, 0LL),
        !entity) )
  {
LABEL_29:
    sub_B2C434(UserId, v10);
  }
  if ( (_DWORD)UserId == entity->fields.maxLimitCount )
    v18 = -1;
  else
    v18 = UserId;
  return ServantEntity__getName(svtEntity, v18, -1, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__Init(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0LL), (itemIcon = (ItemIconComponent_o *)this->fields.skillIcon) == 0LL)
    || (SkillIconComponent__Clear((SkillIconComponent_o *)itemIcon, 0LL),
        (itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(itemIcon, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onDecide, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickAnotherBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_41887D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_41887D0 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_B2C434(0LL, v4);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      3,
      (const MethodInfo_24BA830 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickCancel(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *mText; // x0
  System_String_o *v7; // x1
  struct UILabel_o *cancelLabel; // x8
  bool v9; // w20
  _QWORD *v10; // x8
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_41887CD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, method);
    sub_B2C35C(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v5);
    byte_41887CD = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    mText = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    cancelLabel = this->fields.cancelLabel;
    if ( !cancelLabel )
      goto LABEL_15;
    v7 = mText;
    mText = cancelLabel->fields.mText;
    if ( !mText )
      goto LABEL_15;
    v9 = System_String__Equals_44292872(mText, v7, 0LL);
    v10 = Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v10 = (_QWORD *)sub_B2C364(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v11 = (System_Reflection_MethodBase_o *)sub_B2C340(v10, v10[3]);
    OverwriteAssetSoundName__PlaySystemSe(v11, !v9, 0LL);
    mText = (System_String_o *)this->fields.onDecide;
    this->fields.state = 0;
    if ( !mText )
LABEL_15:
      sub_B2C434(mText, v7);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)mText,
      0,
      (const MethodInfo_24BA830 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickDecide(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_41887CE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_41887CE = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_B2C434(0LL, v4);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      1,
      (const MethodInfo_24BA830 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickNormalBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_41887CF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_41887CF = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_B2C434(0LL, v4);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      2,
      (const MethodInfo_24BA830 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__Open(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *entity,
        bool isChoices,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide,
        bool isReconfirm,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x26
  System_Action_ShopRootConstants_State__o *AnotherPayItemIds; // x0
  __int64 v33; // x1
  int32_t v34; // w24
  WarEntity_o *v35; // x21
  ServantEntity_o *RelateServantEntity; // x0
  ServantEntity_o *v37; // x25
  int32_t v38; // w8
  int32_t eventId; // w24
  __int64 v40; // x26
  __int64 v41; // x27
  int32_t v42; // w0
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x2
  EventRewardAnotherPayConfirmDialog_o *v45; // x0
  const MethodInfo *v46; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  UILabel_o *warnLabel; // x26
  Il2CppObject *v50; // x25
  System_String_o *v51; // x27
  Il2CppObject *AnotherPayName; // x0
  UILabel_o *downerLabel; // x26
  UILabel_o *titleLabel; // x26
  System_String_o *v55; // x22
  Il2CppObject *v56; // x0
  UILabel_o *upperLabel; // x22
  System_String_o *v58; // x23
  Il2CppObject *v59; // x0
  struct UILabel_o *v60; // x22
  System_String_o *v61; // x23
  Il2CppObject *v62; // x0
  System_String_o *v63; // x1
  UILabel_o *v64; // x0
  System_String_o *v65; // x27
  Il2CppObject *v66; // x0
  UILabel_o *v67; // x26
  System_String_o *v68; // x0
  UILabel_o *v69; // x26
  System_String_o *v70; // x0
  const MethodInfo *v71; // x1
  System_String_o *v72; // x23
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **age; // x28
  System_Object_array *v80; // x27
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x22
  EventRewardAnotherPayConfirmDialog_c *v100; // x0
  const MethodInfo *v101; // x3
  System_Action_o *v102; // x20
  __int64 v103; // x0
  __int64 v104; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_41887C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, entity);
    sub_B2C35C(&System_Action_TypeInfo, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__, v16);
    sub_B2C35C(&EventRewardAnotherPayConfirmDialog_TypeInfo, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&object___TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&string_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_1689/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, v23);
    sub_B2C35C(&StringLiteral_1688/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, v24);
    sub_B2C35C(&StringLiteral_1682/*"ANOTHER_PAY_CONFIRM_TITLE"*/, v25);
    sub_B2C35C(&StringLiteral_1684/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, v26);
    sub_B2C35C(&StringLiteral_1687/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, v27);
    sub_B2C35C(&StringLiteral_1685/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, v28);
    sub_B2C35C(&StringLiteral_1683/*"ANOTHER_PAY_INFO_TITLE"*/, v29);
    sub_B2C35C(&StringLiteral_1686/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, v30);
    byte_41887C8 = 1;
  }
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onDecide,
    (System_Int32_array **)onDecide,
    (System_String_array **)isChoices,
    (System_String_array **)onDecide,
    (System_Boolean_array **)isReconfirm,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( !entity )
    goto LABEL_78;
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !AnotherPayItemIds )
      goto LABEL_78;
    if ( !LODWORD(AnotherPayItemIds->fields.m_target) )
      goto LABEL_79;
    v34 = AnotherPayItemIds->fields.method;
  }
  else
  {
    v34 = 0;
  }
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)AnotherPayItemIds,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  v35 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)AnotherPayItemIds,
          v34,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  RelateServantEntity = ShopEntity__GetRelateServantEntity(entity, 0LL);
  if ( !v35 || (v37 = RelateServantEntity) == 0LL )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)*p_onDecide;
    if ( *p_onDecide )
    {
      System_Action_ShopRootConstants_State___Invoke(
        AnotherPayItemIds,
        2,
        (const MethodInfo_24BA830 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
      return;
    }
    goto LABEL_78;
  }
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)this->fields.itemIcon;
  if ( isReconfirm )
    v38 = 2;
  else
    v38 = 4;
  if ( isChoices )
    v38 = 3;
  this->fields.state = v38;
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)AnotherPayItemIds,
                                                                    0LL);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnotherPayItemIds, 1, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)this->fields.itemIcon;
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  ItemIconComponent__SetItem((ItemIconComponent_o *)AnotherPayItemIds, v34, -1, 0LL);
  eventId = entity->fields.eventId;
  v41 = *(_QWORD *)&v37->fields.id.fields.currentCryptoKey;
  v40 = *(_QWORD *)&v37->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v105.fields.currentCryptoKey = v41;
  *(_QWORD *)&v105.fields.fakeValue = v40;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v105, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v42, v43);
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, 1, v44);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)this->fields.resultLabel;
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  UILabel__set_text((UILabel_o *)AnotherPayItemIds, string_TypeInfo->static_fields->Empty, 0LL);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v45, v37, v46);
  ClassName = ServantEntity__getClassName(v37, 0LL);
  warnLabel = this->fields.warnLabel;
  v50 = (Il2CppObject *)ClassName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_1688/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, 0LL);
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v35, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v51, AnotherPayName, 0LL);
  if ( !warnLabel )
    goto LABEL_78;
  UILabel__set_text(warnLabel, (System_String_o *)AnotherPayItemIds, 0LL);
  downerLabel = this->fields.downerLabel;
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
  }
  if ( !downerLabel )
    goto LABEL_78;
  UILabel__set_fontSize(
    downerLabel,
    EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_FONT_SIZE,
    0LL);
  titleLabel = this->fields.titleLabel;
  if ( isChoices )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_1683/*"ANOTHER_PAY_INFO_TITLE"*/, 0LL);
    v56 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v35, 0LL);
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v55, v56, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
      upperLabel = this->fields.upperLabel;
      v58 = LocalizationManager__Get((System_String_o *)StringLiteral_1684/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0LL);
      v59 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v35, 0LL);
      AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v58, v59, 0LL);
      if ( upperLabel )
      {
        UILabel__set_text(upperLabel, (System_String_o *)AnotherPayItemIds, 0LL);
        v60 = this->fields.downerLabel;
        v61 = LocalizationManager__Get((System_String_o *)StringLiteral_1685/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0LL);
        v62 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v35, 0LL);
        AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v61, v62, 0LL);
        if ( v60 )
        {
          v63 = (System_String_o *)AnotherPayItemIds;
          v64 = v60;
LABEL_54:
          UILabel__set_text(v64, v63, 0LL);
          goto LABEL_73;
        }
      }
    }
    goto LABEL_78;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_1682/*"ANOTHER_PAY_CONFIRM_TITLE"*/, 0LL);
  v66 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v35, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v65, v66, 0LL);
  if ( !titleLabel )
    goto LABEL_78;
  UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
  v67 = this->fields.downerLabel;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_1687/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(
                                                                    v68,
                                                                    (Il2CppObject *)v35->fields.age,
                                                                    0LL);
  if ( !v67 )
    goto LABEL_78;
  UILabel__set_text(v67, (System_String_o *)AnotherPayItemIds, 0LL);
  v69 = this->fields.upperLabel;
  if ( isReconfirm )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v70 = LocalizationManager__Get((System_String_o *)StringLiteral_1689/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, 0LL);
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format_44306596(
                                                                      v70,
                                                                      (Il2CppObject *)v35->fields.age,
                                                                      v50,
                                                                      Name,
                                                                      0LL);
    if ( v69 )
    {
      v63 = (System_String_o *)AnotherPayItemIds;
      v64 = v69;
      goto LABEL_54;
    }
LABEL_78:
    sub_B2C434(AnotherPayItemIds, v33);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_1686/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B2C374(object___TypeInfo, 4LL);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  age = (System_Int32_array **)v35->fields.age;
  v80 = (System_Object_array *)AnotherPayItemIds;
  if ( age )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B2C41C(
                                                                      v35->fields.age,
                                                                      AnotherPayItemIds->klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( !v80->max_length )
    goto LABEL_79;
  v80->m_Items[0] = (Il2CppObject *)age;
  sub_B2C2F8((BattleServantConfConponent_o *)v80->m_Items, age, v73, v74, v75, v76, v77, v78);
  if ( v50 )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B2C41C(v50, v80->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( v80->max_length <= 1 )
    goto LABEL_79;
  v80->m_Items[1] = v50;
  sub_B2C2F8((BattleServantConfConponent_o *)&v80->m_Items[1], (System_Int32_array **)v50, v81, v82, v83, v84, v85, v86);
  if ( Name )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B2C41C(Name, v80->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( v80->max_length <= 2 )
    goto LABEL_79;
  v80->m_Items[2] = Name;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v80->m_Items[2],
    (System_Int32_array **)Name,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)ShopEntity__getName(entity, 0LL);
  v99 = (System_Int32_array **)AnotherPayItemIds;
  if ( AnotherPayItemIds )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B2C41C(
                                                                      AnotherPayItemIds,
                                                                      v80->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
    {
LABEL_80:
      v104 = sub_B2C454(AnotherPayItemIds);
      sub_B2C400(v104, 0LL);
    }
  }
  if ( v80->max_length <= 3 )
  {
LABEL_79:
    v103 = sub_B2C460(AnotherPayItemIds);
    sub_B2C400(v103, 0LL);
  }
  v80->m_Items[3] = (Il2CppObject *)v99;
  sub_B2C2F8((BattleServantConfConponent_o *)&v80->m_Items[3], v99, v93, v94, v95, v96, v97, v98);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format_44384256(v72, v80, 0LL);
  if ( !v69 )
    goto LABEL_78;
  UILabel__set_text(v69, (System_String_o *)AnotherPayItemIds, 0LL);
LABEL_73:
  v100 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v100 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v100->static_fields->CONFIRM_WINDOW_SIZE, v71);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, isChoices, (ItemEntity_o *)v35, v101);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnotherPayItemIds, 1, 0LL);
  v102 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v102, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v102, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__OpenResult(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *entity,
        bool isAnotherItemOnly,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x23
  __int64 v27; // x1
  System_Action_ShopRootConstants_State__o *itemIcon; // x0
  ServantEntity_o *v29; // x22
  int32_t eventId; // w23
  Il2CppObject *m_target; // x24
  __int64 v32; // x25
  int32_t v33; // w0
  const MethodInfo *v34; // x3
  UILabel_o *titleLabel; // x23
  UILabel_o *upperLabel; // x25
  UILabel_o *downerLabel; // x26
  System_String_o *Empty; // x24
  EventRewardAnotherPayConfirmDialog_o *v39; // x0
  const MethodInfo *v40; // x2
  Il2CppObject *Name; // x23
  System_String_o *ClassName; // x0
  UILabel_o *resultLabel; // x22
  Il2CppObject *v44; // x24
  __int64 *v45; // x8
  System_String_o *v46; // x21
  Il2CppObject *v47; // x0
  EventEntity_o *v48; // x0
  const MethodInfo *v49; // x2
  bool v50; // w1
  UILabel_o *v51; // x21
  UILabel_o *v52; // x21
  const MethodInfo *v53; // x1
  EventRewardAnotherPayConfirmDialog_c *v54; // x0
  int32_t v55; // w20
  ItemEntity_o *v56; // x0
  const MethodInfo *v57; // x3
  System_Action_o *v58; // x20
  __int64 v59; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_41887C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, entity);
    sub_B2C35C(&System_Action_TypeInfo, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__, v17);
    sub_B2C35C(&EventRewardAnotherPayConfirmDialog_TypeInfo, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&string_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_1692/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/, v23);
    sub_B2C35C(&StringLiteral_1691/*"ANOTHER_PAY_PERIOD_END_MSG"*/, v24);
    sub_B2C35C(&StringLiteral_1693/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/, v25);
    byte_41887C9 = 1;
  }
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onDecide,
    (System_Int32_array **)onDecide,
    (System_String_array **)isAnotherItemOnly,
    (System_String_array **)onDecide,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !entity )
  {
    itemIcon = (System_Action_ShopRootConstants_State__o *)*p_onDecide;
    if ( *p_onDecide )
    {
      System_Action_ShopRootConstants_State___Invoke(
        itemIcon,
        0,
        (const MethodInfo_24BA830 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
      return;
    }
    goto LABEL_52;
  }
  itemIcon = (System_Action_ShopRootConstants_State__o *)this->fields.itemIcon;
  this->fields.state = 5;
  if ( !itemIcon )
    goto LABEL_52;
  itemIcon = (System_Action_ShopRootConstants_State__o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)itemIcon,
                                                           0LL);
  if ( !itemIcon )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
  itemIcon = (System_Action_ShopRootConstants_State__o *)ShopEntity__GetRelateServantEntity(entity, 0LL);
  if ( !itemIcon )
    goto LABEL_52;
  v29 = (ServantEntity_o *)itemIcon;
  eventId = entity->fields.eventId;
  v32 = *(_QWORD *)&itemIcon->fields.method_ptr;
  m_target = itemIcon->fields.m_target;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v60.fields.currentCryptoKey = v32;
  *(_QWORD *)&v60.fields.fakeValue = m_target;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v60, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v33, v34);
  itemIcon = (System_Action_ShopRootConstants_State__o *)this->fields.warnLabel;
  if ( !itemIcon )
    goto LABEL_52;
  titleLabel = this->fields.titleLabel;
  upperLabel = this->fields.upperLabel;
  downerLabel = this->fields.downerLabel;
  Empty = string_TypeInfo->static_fields->Empty;
  UILabel__set_text((UILabel_o *)itemIcon, Empty, 0LL);
  if ( !downerLabel )
    goto LABEL_52;
  UILabel__set_text(downerLabel, Empty, 0LL);
  if ( !upperLabel )
    goto LABEL_52;
  UILabel__set_text(upperLabel, Empty, 0LL);
  if ( !titleLabel )
    goto LABEL_52;
  UILabel__set_text(titleLabel, Empty, 0LL);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v39, v29, v40);
  ClassName = ServantEntity__getClassName(v29, 0LL);
  resultLabel = this->fields.resultLabel;
  v44 = (Il2CppObject *)ClassName;
  if ( isAnotherItemOnly )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = &StringLiteral_1692/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = &StringLiteral_1693/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
  }
  v46 = LocalizationManager__Get((System_String_o *)*v45, 0LL);
  v47 = (Il2CppObject *)ShopEntity__getName(entity, 0LL);
  itemIcon = (System_Action_ShopRootConstants_State__o *)System_String__Format_44306596(v46, v47, v44, Name, 0LL);
  if ( !resultLabel )
    goto LABEL_52;
  UILabel__set_text(resultLabel, (System_String_o *)itemIcon, 0LL);
  itemIcon = (System_Action_ShopRootConstants_State__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon )
    goto LABEL_52;
  itemIcon = (System_Action_ShopRootConstants_State__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)itemIcon,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !itemIcon )
    goto LABEL_52;
  v48 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)itemIcon,
                           entity->fields.eventId,
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( v48 && !EventEntity__IsEventPeriod(v48, 0LL, 0LL) )
  {
    v51 = this->fields.downerLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    itemIcon = (System_Action_ShopRootConstants_State__o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_1691/*"ANOTHER_PAY_PERIOD_END_MSG"*/,
                                                             0LL);
    if ( !v51 )
      goto LABEL_52;
    UILabel__set_text(v51, (System_String_o *)itemIcon, 0LL);
    v52 = this->fields.downerLabel;
    itemIcon = (System_Action_ShopRootConstants_State__o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
    if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    }
    if ( !v52 )
      goto LABEL_52;
    UILabel__set_fontSize(
      v52,
      EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_FONT_SIZE,
      0LL);
    v50 = 0;
  }
  else
  {
    v50 = 1;
  }
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, v50, v49);
  v54 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v54 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v54->static_fields->RESULT_WINDOW_SIZE, v53);
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    itemIcon = (System_Action_ShopRootConstants_State__o *)ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !itemIcon )
      goto LABEL_52;
    if ( !LODWORD(itemIcon->fields.m_target) )
    {
      v59 = sub_B2C460(itemIcon);
      sub_B2C400(v59, 0LL);
    }
    v55 = itemIcon->fields.method;
  }
  else
  {
    v55 = 0;
  }
  itemIcon = (System_Action_ShopRootConstants_State__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon
    || (itemIcon = (System_Action_ShopRootConstants_State__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)itemIcon,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (v56 = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)itemIcon,
                                v55,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, 0, v56, v57),
        (itemIcon = (System_Action_ShopRootConstants_State__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL)) == 0LL) )
  {
LABEL_52:
    sub_B2C434(itemIcon, v27);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
  v58 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetButtonDisp(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isChoices,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *cancelLabel; // x22
  System_String_o *decideButton; // x0
  __int64 v15; // x1
  UILabel_o *decideLabel; // x22
  UILabel_o *normalBuyLabel; // x22
  UILabel_o *anotherBuyLabel; // x22
  System_String_o *v19; // x23
  Il2CppObject *AnotherPayName; // x0
  int32_t state; // w8
  UILabel_o *v22; // x20
  UnityEngine_GameObject_o *gameObject; // x19
  EventRewardAnotherPayConfirmDialog_c *v24; // x8
  float *p_x; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_GameObject_o *v29; // x20
  EventRewardAnotherPayConfirmDialog_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v33; // x21
  EventRewardAnotherPayConfirmDialog_c *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  EventRewardAnotherPayConfirmDialog_c *v36; // x8
  float *v37; // x8
  UnityEngine_GameObject_o *v38; // x0
  EventRewardAnotherPayConfirmDialog_c *v39; // x8
  float *v40; // x8

  if ( (byte_41887CC & 1) == 0 )
  {
    sub_B2C35C(&EventRewardAnotherPayConfirmDialog_TypeInfo, isChoices);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_9358/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v8);
    sub_B2C35C(&StringLiteral_1681/*"ANOTHER_PAY_ANOTHER_BUY"*/, v9);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v10);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v11);
    sub_B2C35C(&StringLiteral_1690/*"ANOTHER_PAY_NORMAL_BUY"*/, v12);
    byte_41887CC = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_56;
  UILabel__set_text(cancelLabel, decideButton, 0LL);
  decideLabel = this->fields.decideLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_9358/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_56;
  UILabel__set_text(decideLabel, decideButton, 0LL);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_1690/*"ANOTHER_PAY_NORMAL_BUY"*/, 0LL);
  if ( !normalBuyLabel )
    goto LABEL_56;
  UILabel__set_text(normalBuyLabel, decideButton, 0LL);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_1681/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0LL);
  if ( !itemEntity )
    goto LABEL_56;
  v19 = decideButton;
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0LL);
  decideButton = System_String__Format(v19, AnotherPayName, 0LL);
  if ( !anotherBuyLabel )
    goto LABEL_56;
  UILabel__set_text(anotherBuyLabel, decideButton, 0LL);
  state = this->fields.state;
  if ( state != 4 )
  {
    if ( state == 5 )
    {
      v22 = this->fields.cancelLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( v22 )
      {
        UILabel__set_text(v22, decideButton, 0LL);
        decideButton = (System_String_o *)this->fields.decideButton;
        if ( decideButton )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
          decideButton = (System_String_o *)this->fields.normalBuyButton;
          if ( decideButton )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
            decideButton = (System_String_o *)this->fields.anotherBuyButton;
            if ( decideButton )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
              decideButton = (System_String_o *)this->fields.cancelButton;
              if ( decideButton )
              {
                gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
                v24 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                  v24 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                }
                p_x = &v24->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                x = p_x[9];
                y = p_x[10];
                z = p_x[11];
LABEL_54:
                v31 = gameObject;
                goto LABEL_55;
              }
            }
          }
        }
      }
    }
    else
    {
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( decideButton )
      {
        v33 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
        v34 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
          v34 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(v33, v34->static_fields->DECIDE_BUTTON_BASE_POS, 0LL);
        decideButton = (System_String_o *)this->fields.decideButton;
        if ( decideButton )
        {
          if ( isChoices )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
            decideButton = (System_String_o *)this->fields.normalBuyButton;
            if ( decideButton )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0LL);
              decideButton = (System_String_o *)this->fields.anotherBuyButton;
              if ( decideButton )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0LL);
                decideButton = (System_String_o *)this->fields.cancelButton;
                if ( decideButton )
                {
                  v35 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
                  v36 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  gameObject = v35;
                  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                    v36 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  }
                  v37 = &v36->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                  x = v37[3];
                  y = v37[4];
                  z = v37[5];
                  goto LABEL_54;
                }
              }
            }
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0LL);
            decideButton = (System_String_o *)this->fields.normalBuyButton;
            if ( decideButton )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
              decideButton = (System_String_o *)this->fields.anotherBuyButton;
              if ( decideButton )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
                decideButton = (System_String_o *)this->fields.cancelButton;
                if ( decideButton )
                {
                  v38 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
                  v39 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  gameObject = v38;
                  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                    v39 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  }
                  v40 = &v39->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                  x = *v40;
                  y = v40[1];
                  z = v40[2];
                  goto LABEL_54;
                }
              }
            }
          }
        }
      }
    }
LABEL_56:
    sub_B2C434(decideButton, v15);
  }
  decideButton = (System_String_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0LL);
  decideButton = (System_String_o *)this->fields.normalBuyButton;
  if ( !decideButton )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
  decideButton = (System_String_o *)this->fields.anotherBuyButton;
  if ( !decideButton )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
  decideButton = (System_String_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_56;
  v29 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
  v30 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v30 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v29, v30->static_fields->DECIDE_BUTTON_PURCHASED_POS, 0LL);
  decideButton = (System_String_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_56;
  v31 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  x = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.x;
  y = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.y;
  z = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.z;
LABEL_55:
  GameObjectExtensions__SetLocalPosition(v31, *(UnityEngine_Vector3_o *)&x, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(
        EventRewardAnotherPayConfirmDialog_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *v19; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  __int64 v22; // x21
  __int64 v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v27; // x0
  int32_t v28; // w20
  SkillEntity_o *Entity; // x21
  SkillLvEntity_o *v30; // x0
  SkillLvEntity_o *v31; // x22
  UILabel_o *skillNameLabel; // x23
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0

  if ( (byte_41887CA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___, v12);
    sub_B2C35C(&Method_System_Func_ServantPassiveSkillEntity__bool___ctor__, v13);
    sub_B2C35C(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__, v17);
    sub_B2C35C(&EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo, v18);
    byte_41887CA = 1;
  }
  v19 = (EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *)sub_B2C42C(EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo);
  EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_25;
  v19->fields.eventId = eventId;
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v23 = **(_QWORD **)(v22 + 192);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_AC505C(v23);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v23 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                            (ServantPassiveSkillMaster_o *)MasterData_WarQuestSelectionMaster,
                                                                            svtId,
                                                                            0LL);
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v19,
    Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_ServantPassiveSkillEntity__bool___ctor__);
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          ServantSkillList,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
  v27 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
          v26,
          (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
  v28 = v27 ? HIDWORD(v27->fields.transactionId) : 0;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                              v28,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  v30 = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, v28, 1, 0LL);
  if ( Entity )
  {
    v31 = v30;
    if ( v30 )
    {
      skillNameLabel = this->fields.skillNameLabel;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillEntity__getName(Entity, 0LL);
      if ( skillNameLabel )
      {
        UILabel__set_text(skillNameLabel, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
        skillDetailLabel = this->fields.skillDetailLabel;
        Detail = SkillLvEntity__getDetail(v31, 0, 0LL);
        WrapControlText__textAdjust(skillDetailLabel, Detail, 22, 0, 0, 0LL);
        MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.skillIcon;
        if ( MasterData_WarQuestSelectionMaster )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)MasterData_WarQuestSelectionMaster, v28, 0LL);
          return;
        }
      }
LABEL_25:
      sub_B2C434(MasterData_WarQuestSelectionMaster, v21);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetUIPositon(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isEventPeriod,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *skill; // x20
  EventRewardAnotherPayConfirmDialog_c *v6; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  float WARN_LABEL_BASE_POS_Y; // s0
  UnityEngine_GameObject_o *v15; // x20
  EventRewardAnotherPayConfirmDialog_c *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  float DOWNER_LABEL_CHOICES_POS_Y; // s1
  UnityEngine_GameObject_o *v21; // x20
  EventRewardAnotherPayConfirmDialog_c *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v26; // x8
  float DOWNER_LABEL_RESULT_POS_Y; // s0
  UnityEngine_GameObject_o *v28; // x21
  EventRewardAnotherPayConfirmDialog_c *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  EventRewardAnotherPayConfirmDialog_c *v31; // x0
  UnityEngine_GameObject_o *v32; // x20
  UnityEngine_GameObject_o *v33; // x0

  if ( (byte_41887CB & 1) == 0 )
  {
    sub_B2C35C(&EventRewardAnotherPayConfirmDialog_TypeInfo, isEventPeriod);
    byte_41887CB = 1;
  }
  switch ( this->fields.state )
  {
    case 2:
      skill = this->fields.skill;
      v6 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v6 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(skill, v6->static_fields->SKILL_BASE_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_42;
      gameObject = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        gameObject,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_BASE_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v10 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v10,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_BASE_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v11 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v11,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_BASE_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v12 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = static_fields->WARN_LABEL_BASE_POS_Y;
      goto LABEL_20;
    case 3:
      v21 = this->fields.skill;
      v22 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v22 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v21, v22->static_fields->SKILL_CHOICES_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_42;
      v23 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v23,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v24 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v24,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_CHOICES_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v25 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v25,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v12 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      v26 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = v26->WARN_LABEL_CHOICES_POS_Y;
      DOWNER_LABEL_CHOICES_POS_Y = v26->DOWNER_LABEL_CHOICES_POS_Y;
      goto LABEL_29;
    case 4:
      v15 = this->fields.skill;
      v16 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v16 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v15, v16->static_fields->SKILL_PURCHASED_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_42;
      v17 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v17,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_PURCHASED_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v18 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v18,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_PURCHASED_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v19 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v19,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_PURCHASED_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v12 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = static_fields->WARN_LABEL_PURCHASED_POS_Y;
LABEL_20:
      DOWNER_LABEL_CHOICES_POS_Y = static_fields->DOWNER_LABEL_POS_Y;
LABEL_29:
      DOWNER_LABEL_RESULT_POS_Y = WARN_LABEL_BASE_POS_Y + DOWNER_LABEL_CHOICES_POS_Y;
      goto LABEL_30;
    case 5:
      v28 = this->fields.skill;
      v29 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v29 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v28, v29->static_fields->SKILL_RESULT_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v30 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v30,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->RESULT_LABEL_POS_Y,
        0LL);
      if ( isEventPeriod )
        return;
      v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v32 = this->fields.skill;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v32, v31->static_fields->SKILL_RESULT_END_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !itemIcon
        || (v33 = UnityEngine_Component__get_gameObject(itemIcon, 0LL),
            GameObjectExtensions__SetLocalPositionY(
              v33,
              EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->RESULT_LABEL_PERIOD_POS_Y,
              0LL),
            (itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel) == 0LL) )
      {
LABEL_42:
        sub_B2C434(itemIcon, v7);
      }
      v12 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      DOWNER_LABEL_RESULT_POS_Y = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_POS_Y;
LABEL_30:
      GameObjectExtensions__SetLocalPositionY(v12, DOWNER_LABEL_RESULT_POS_Y, 0LL);
      return;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetWindowSize(
        EventRewardAnotherPayConfirmDialog_o *this,
        UnityEngine_Vector2_o size,
        const MethodInfo *method)
{
  UIWidget_o *window; // x0
  float y; // s8
  double x; // d0
  double v7; // d0

  window = this->fields.window;
  if ( !window
    || ((y = size.fields.y, size.fields.x != INFINITY) ? (x = size.fields.x) : (x = -size.fields.x),
        UIWidget__set_width(window, (int)x, 0LL),
        (window = this->fields.window) == 0LL) )
  {
    sub_B2C434(window, method);
  }
  v7 = y;
  if ( y == INFINITY )
    v7 = -INFINITY;
  UIWidget__set_height(window, (int)v7, 0LL);
}


System_String_o *__fastcall EventRewardAnotherPayConfirmDialog__get_closeBtnPath(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_41887D2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15477/*"Window/CancelButton"*/, method);
    byte_41887D2 = 1;
  }
  return (System_String_o *)StringLiteral_15477/*"Window/CancelButton"*/;
}


void __fastcall EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0___ctor(
        EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0___SetSvtPassiveSkillInfo_b__0(
        EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *this,
        ServantPassiveSkillEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B2C434(this, 0LL);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}