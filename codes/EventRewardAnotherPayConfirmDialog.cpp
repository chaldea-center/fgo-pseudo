void __fastcall EventRewardAnotherPayConfirmDialog___cctor(const MethodInfo *method)
{
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x9
  EventRewardAnotherPayConfirmDialog_c *v2; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v3; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v4; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v5; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v6; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v7; // x9

  if ( (byte_42ACAFC & 1) == 0 )
  {
    sub_B52984(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_42ACAFC = 1;
  }
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CANCEL_BUTTON_BASE_POS.fields.x = 0xC3600000C3200000LL;
  static_fields->CANCEL_BUTTON_BASE_POS.fields.z = 0.0;
  v2 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  v3 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(int32x2_t *)&v3->CANCEL_BUTTON_CHOICES_POS.fields.x = vdup_n_s32(0xC3600000);
  v3->CANCEL_BUTTON_CHOICES_POS.fields.z = 0.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->CANCEL_BUTTON_PURCHASED_POS.fields.x = 0xC3700000C3200000LL;
  v4->CANCEL_BUTTON_PURCHASED_POS.fields.z = 0.0;
  v5 = v2->static_fields;
  *(_QWORD *)&v5->CANCEL_BUTTON_RESULT_POS.fields.x = 0xC31B000000000000LL;
  v5->CANCEL_BUTTON_RESULT_POS.fields.z = 0.0;
  v6 = v2->static_fields;
  *(_QWORD *)&v6->DECIDE_BUTTON_BASE_POS.fields.x = 0xC360000043200000LL;
  v6->DECIDE_BUTTON_BASE_POS.fields.z = 0.0;
  v7 = v2->static_fields;
  *(_QWORD *)&v7->DECIDE_BUTTON_PURCHASED_POS.fields.x = -4363988037795840000LL;
  v7->DECIDE_BUTTON_PURCHASED_POS.fields.z = 0.0;
  v2->static_fields->CONFIRM_WINDOW_SIZE = (struct UnityEngine_Vector2_o)0x4416000044430000LL;
  v2->static_fields->RESULT_WINDOW_SIZE = (struct UnityEngine_Vector2_o)0x43F0000044430000LL;
  v2->static_fields->SKILL_BASE_POS_Y = 5.0;
  v2->static_fields->SKILL_CHOICES_POS_Y = 10.0;
  v2->static_fields->SKILL_PURCHASED_POS_Y = -25.0;
  v2->static_fields->SKILL_RESULT_POS_Y = -30.0;
  v2->static_fields->SKILL_RESULT_END_POS_Y = 0.0;
  v2->static_fields->ICON_BASE_POS_Y = 175.0;
  v2->static_fields->ICON_CHOICES_POS_Y = 180.0;
  v2->static_fields->ICON_PURCHASED_POS_Y = 185.0;
  v2->static_fields->UPPER_LABEL_POS_Y = -50.0;
  v2->static_fields->UPPER_LABEL_CHOICES_POS_Y = -60.0;
  v2->static_fields->WARN_LABEL_BASE_POS_Y = -95.0;
  v2->static_fields->WARN_LABEL_CHOICES_POS_Y = -100.0;
  v2->static_fields->WARN_LABEL_PURCHASED_POS_Y = -125.0;
  v2->static_fields->DOWNER_LABEL_POS_Y = -50.0;
  v2->static_fields->DOWNER_LABEL_CHOICES_POS_Y = -55.0;
  v2->static_fields->DOWNER_LABEL_RESULT_POS_Y = -100.0;
  v2->static_fields->RESULT_LABEL_POS_Y = 100.0;
  v2->static_fields->RESULT_LABEL_PERIOD_POS_Y = 120.0;
  v2->static_fields->DOWNER_LABEL_FONT_SIZE = 20;
  v2->static_fields->DOWNER_LABEL_RESULT_FONT_SIZE = 22;
}


void __fastcall EventRewardAnotherPayConfirmDialog___ctor(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42ACAFB & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42ACAFB = 1;
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
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v6; // x1
  int64_t v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  WarQuestSelectionMaster_o *v10; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  ServantLimitImageMaster_o *v13; // x20
  int32_t v14; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42ACAF9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42ACAF9 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !svtEntity )
    goto LABEL_29;
  v7 = UserId;
  v9 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v9;
  *(_QWORD *)&v17.fields.fakeValue = v8;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v17, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v7, UserId, 0LL) )
  {
    v14 = -1;
    return ServantEntity__getName(svtEntity, v14, -1, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v12 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v13 = (ServantLimitImageMaster_o *)v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v18, 0LL);
  if ( !entity
    || !v13
    || (UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v13, UserId, entity->fields.maxLimitCount, 0LL),
        !entity) )
  {
LABEL_29:
    sub_B52A5C(UserId, v6);
  }
  if ( (_DWORD)UserId == entity->fields.maxLimitCount )
    v14 = -1;
  else
    v14 = UserId;
  return ServantEntity__getName(svtEntity, v14, -1, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__Init(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0LL), (itemIcon = (ItemIconComponent_o *)this->fields.skillIcon) == 0LL)
    || (SkillIconComponent__Clear((SkillIconComponent_o *)itemIcon, 0LL),
        (itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B52A5C(itemIcon, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_B52920(&this->fields.onDecide);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickAnotherBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_42ACAF8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ACAF8 = 1;
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
      sub_B52A5C(0LL, v3);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      3,
      (const MethodInfo_26264D8 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickCancel(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_String_o *mText; // x0
  System_String_o *v4; // x1
  struct UILabel_o *cancelLabel; // x8
  bool v6; // w20
  _QWORD *v7; // x8
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_42ACAF5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
    sub_B52984(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    byte_42ACAF5 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    mText = LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    cancelLabel = this->fields.cancelLabel;
    if ( !cancelLabel )
      goto LABEL_15;
    v4 = mText;
    mText = cancelLabel->fields.mText;
    if ( !mText )
      goto LABEL_15;
    v6 = System_String__Equals_44555656(mText, v4, 0LL);
    v7 = Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B5298C(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_B52968(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, !v6, 0LL);
    mText = (System_String_o *)this->fields.onDecide;
    this->fields.state = 0;
    if ( !mText )
LABEL_15:
      sub_B52A5C(mText, v4);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)mText,
      0,
      (const MethodInfo_26264D8 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickDecide(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_42ACAF6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ACAF6 = 1;
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
      sub_B52A5C(0LL, v3);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      1,
      (const MethodInfo_26264D8 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickNormalBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_42ACAF7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ACAF7 = 1;
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
      sub_B52A5C(0LL, v3);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      2,
      (const MethodInfo_26264D8 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__Open(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *entity,
        bool isChoices,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide,
        bool isReconfirm,
        const MethodInfo *method)
{
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x26
  System_Action_ShopRootConstants_State__o *AnotherPayItemIds; // x0
  __int64 v13; // x1
  int32_t v14; // w24
  WarEntity_o *v15; // x21
  ServantEntity_o *RelateServantEntity; // x0
  ServantEntity_o *v17; // x25
  int32_t v18; // w8
  int32_t eventId; // w24
  __int64 v20; // x26
  __int64 v21; // x27
  int32_t v22; // w0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  EventRewardAnotherPayConfirmDialog_o *v25; // x0
  const MethodInfo *v26; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  UILabel_o *warnLabel; // x26
  Il2CppObject *v30; // x25
  System_String_o *v31; // x27
  Il2CppObject *AnotherPayName; // x0
  UILabel_o *downerLabel; // x26
  UILabel_o *titleLabel; // x26
  System_String_o *v35; // x22
  Il2CppObject *v36; // x0
  UILabel_o *upperLabel; // x22
  System_String_o *v38; // x23
  Il2CppObject *v39; // x0
  struct UILabel_o *v40; // x22
  System_String_o *v41; // x23
  Il2CppObject *v42; // x0
  System_String_o *v43; // x1
  UILabel_o *v44; // x0
  System_String_o *v45; // x27
  Il2CppObject *v46; // x0
  UILabel_o *v47; // x26
  System_String_o *v48; // x0
  UILabel_o *v49; // x26
  System_String_o *v50; // x0
  const MethodInfo *v51; // x1
  System_String_o *v52; // x23
  Il2CppObject *age; // x28
  System_Object_array *v54; // x27
  Il2CppObject *v55; // x22
  EventRewardAnotherPayConfirmDialog_c *v56; // x0
  const MethodInfo *v57; // x3
  System_Action_o *v58; // x20
  __int64 v59; // x0
  __int64 v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_42ACAF0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__);
    sub_B52984(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_1709/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/);
    sub_B52984(&StringLiteral_1708/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/);
    sub_B52984(&StringLiteral_1702/*"ANOTHER_PAY_CONFIRM_TITLE"*/);
    sub_B52984(&StringLiteral_1704/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/);
    sub_B52984(&StringLiteral_1707/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/);
    sub_B52984(&StringLiteral_1705/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/);
    sub_B52984(&StringLiteral_1703/*"ANOTHER_PAY_INFO_TITLE"*/);
    sub_B52984(&StringLiteral_1706/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/);
    byte_42ACAF0 = 1;
  }
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B52920(&this->fields.onDecide);
  if ( !entity )
    goto LABEL_78;
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !AnotherPayItemIds )
      goto LABEL_78;
    if ( !LODWORD(AnotherPayItemIds->fields.m_target) )
      goto LABEL_79;
    v14 = AnotherPayItemIds->fields.method;
  }
  else
  {
    v14 = 0;
  }
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)AnotherPayItemIds,
                                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  v15 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)AnotherPayItemIds,
          v14,
          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  RelateServantEntity = ShopEntity__GetRelateServantEntity(entity, 0LL);
  if ( !v15 || (v17 = RelateServantEntity) == 0LL )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)*p_onDecide;
    if ( *p_onDecide )
    {
      System_Action_ShopRootConstants_State___Invoke(
        AnotherPayItemIds,
        2,
        (const MethodInfo_26264D8 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
      return;
    }
    goto LABEL_78;
  }
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)this->fields.itemIcon;
  if ( isReconfirm )
    v18 = 2;
  else
    v18 = 4;
  if ( isChoices )
    v18 = 3;
  this->fields.state = v18;
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
  ItemIconComponent__SetItem((ItemIconComponent_o *)AnotherPayItemIds, v14, -1, 0LL);
  eventId = entity->fields.eventId;
  v21 = *(_QWORD *)&v17->fields.id.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v17->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v21;
  *(_QWORD *)&v61.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v61, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v22, v23);
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, 1, v24);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)this->fields.resultLabel;
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  UILabel__set_text((UILabel_o *)AnotherPayItemIds, string_TypeInfo->static_fields->Empty, 0LL);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v25, v17, v26);
  ClassName = ServantEntity__getClassName(v17, 0LL);
  warnLabel = this->fields.warnLabel;
  v30 = (Il2CppObject *)ClassName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_1708/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, 0LL);
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v15, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v31, AnotherPayName, 0LL);
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
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_1703/*"ANOTHER_PAY_INFO_TITLE"*/, 0LL);
    v36 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v15, 0LL);
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v35, v36, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
      upperLabel = this->fields.upperLabel;
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_1704/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0LL);
      v39 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v15, 0LL);
      AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v38, v39, 0LL);
      if ( upperLabel )
      {
        UILabel__set_text(upperLabel, (System_String_o *)AnotherPayItemIds, 0LL);
        v40 = this->fields.downerLabel;
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_1705/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0LL);
        v42 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v15, 0LL);
        AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v41, v42, 0LL);
        if ( v40 )
        {
          v43 = (System_String_o *)AnotherPayItemIds;
          v44 = v40;
LABEL_54:
          UILabel__set_text(v44, v43, 0LL);
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
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_1702/*"ANOTHER_PAY_CONFIRM_TITLE"*/, 0LL);
  v46 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v15, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v45, v46, 0LL);
  if ( !titleLabel )
    goto LABEL_78;
  UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
  v47 = this->fields.downerLabel;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_1707/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(
                                                                    v48,
                                                                    (Il2CppObject *)v15->fields.age,
                                                                    0LL);
  if ( !v47 )
    goto LABEL_78;
  UILabel__set_text(v47, (System_String_o *)AnotherPayItemIds, 0LL);
  v49 = this->fields.upperLabel;
  if ( isReconfirm )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_1709/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, 0LL);
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format_44569380(
                                                                      v50,
                                                                      (Il2CppObject *)v15->fields.age,
                                                                      v30,
                                                                      Name,
                                                                      0LL);
    if ( v49 )
    {
      v43 = (System_String_o *)AnotherPayItemIds;
      v44 = v49;
      goto LABEL_54;
    }
LABEL_78:
    sub_B52A5C(AnotherPayItemIds, v13);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_1706/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B5299C(object___TypeInfo, 4LL);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  age = (Il2CppObject *)v15->fields.age;
  v54 = (System_Object_array *)AnotherPayItemIds;
  if ( age )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B52A44(
                                                                      v15->fields.age,
                                                                      AnotherPayItemIds->klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( !v54->max_length )
    goto LABEL_79;
  v54->m_Items[0] = age;
  sub_B52920(v54->m_Items);
  if ( v30 )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B52A44(v30, v54->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( v54->max_length <= 1 )
    goto LABEL_79;
  v54->m_Items[1] = v30;
  sub_B52920(&v54->m_Items[1]);
  if ( Name )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B52A44(Name, v54->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( v54->max_length <= 2 )
    goto LABEL_79;
  v54->m_Items[2] = Name;
  sub_B52920(&v54->m_Items[2]);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)ShopEntity__getName(entity, 0LL);
  v55 = (Il2CppObject *)AnotherPayItemIds;
  if ( AnotherPayItemIds )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B52A44(
                                                                      AnotherPayItemIds,
                                                                      v54->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
    {
LABEL_80:
      v60 = sub_B52A7C();
      sub_B52A28(v60, 0LL);
    }
  }
  if ( v54->max_length <= 3 )
  {
LABEL_79:
    v59 = sub_B52A88(AnotherPayItemIds);
    sub_B52A28(v59, 0LL);
  }
  v54->m_Items[3] = v55;
  sub_B52920(&v54->m_Items[3]);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format_44647040(v52, v54, 0LL);
  if ( !v49 )
    goto LABEL_78;
  UILabel__set_text(v49, (System_String_o *)AnotherPayItemIds, 0LL);
LABEL_73:
  v56 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v56 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v56->static_fields->CONFIRM_WINDOW_SIZE, v51);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, isChoices, (ItemEntity_o *)v15, v57);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnotherPayItemIds, 1, 0LL);
  v58 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OpenResult(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *entity,
        bool isAnotherItemOnly,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide,
        const MethodInfo *method)
{
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x23
  __int64 v10; // x1
  System_Action_ShopRootConstants_State__o *itemIcon; // x0
  ServantEntity_o *v12; // x22
  int32_t eventId; // w23
  Il2CppObject *m_target; // x24
  __int64 v15; // x25
  int32_t v16; // w0
  const MethodInfo *v17; // x3
  UILabel_o *titleLabel; // x23
  UILabel_o *upperLabel; // x25
  UILabel_o *downerLabel; // x26
  System_String_o *Empty; // x24
  EventRewardAnotherPayConfirmDialog_o *v22; // x0
  const MethodInfo *v23; // x2
  Il2CppObject *Name; // x23
  System_String_o *ClassName; // x0
  UILabel_o *resultLabel; // x22
  Il2CppObject *v27; // x24
  __int64 *v28; // x8
  System_String_o *v29; // x21
  Il2CppObject *v30; // x0
  EventEntity_o *v31; // x0
  const MethodInfo *v32; // x2
  bool v33; // w1
  UILabel_o *v34; // x21
  UILabel_o *v35; // x21
  const MethodInfo *v36; // x1
  EventRewardAnotherPayConfirmDialog_c *v37; // x0
  int32_t v38; // w20
  ItemEntity_o *v39; // x0
  const MethodInfo *v40; // x3
  System_Action_o *v41; // x20
  __int64 v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42ACAF1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__);
    sub_B52984(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_1712/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/);
    sub_B52984(&StringLiteral_1711/*"ANOTHER_PAY_PERIOD_END_MSG"*/);
    sub_B52984(&StringLiteral_1713/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/);
    byte_42ACAF1 = 1;
  }
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B52920(&this->fields.onDecide);
  if ( !entity )
  {
    itemIcon = (System_Action_ShopRootConstants_State__o *)*p_onDecide;
    if ( *p_onDecide )
    {
      System_Action_ShopRootConstants_State___Invoke(
        itemIcon,
        0,
        (const MethodInfo_26264D8 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
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
  v12 = (ServantEntity_o *)itemIcon;
  eventId = entity->fields.eventId;
  v15 = *(_QWORD *)&itemIcon->fields.method_ptr;
  m_target = itemIcon->fields.m_target;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v15;
  *(_QWORD *)&v43.fields.fakeValue = m_target;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v43, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v16, v17);
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
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v22, v12, v23);
  ClassName = ServantEntity__getClassName(v12, 0LL);
  resultLabel = this->fields.resultLabel;
  v27 = (Il2CppObject *)ClassName;
  if ( isAnotherItemOnly )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = &StringLiteral_1712/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = &StringLiteral_1713/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
  }
  v29 = LocalizationManager__Get((System_String_o *)*v28, 0LL);
  v30 = (Il2CppObject *)ShopEntity__getName(entity, 0LL);
  itemIcon = (System_Action_ShopRootConstants_State__o *)System_String__Format_44569380(v29, v30, v27, Name, 0LL);
  if ( !resultLabel )
    goto LABEL_52;
  UILabel__set_text(resultLabel, (System_String_o *)itemIcon, 0LL);
  itemIcon = (System_Action_ShopRootConstants_State__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon )
    goto LABEL_52;
  itemIcon = (System_Action_ShopRootConstants_State__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)itemIcon,
                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !itemIcon )
    goto LABEL_52;
  v31 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)itemIcon,
                           entity->fields.eventId,
                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( v31 && !EventEntity__IsEventPeriod(v31, 0LL, 0LL) )
  {
    v34 = this->fields.downerLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    itemIcon = (System_Action_ShopRootConstants_State__o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_1711/*"ANOTHER_PAY_PERIOD_END_MSG"*/,
                                                             0LL);
    if ( !v34 )
      goto LABEL_52;
    UILabel__set_text(v34, (System_String_o *)itemIcon, 0LL);
    v35 = this->fields.downerLabel;
    itemIcon = (System_Action_ShopRootConstants_State__o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
    if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    }
    if ( !v35 )
      goto LABEL_52;
    UILabel__set_fontSize(
      v35,
      EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_FONT_SIZE,
      0LL);
    v33 = 0;
  }
  else
  {
    v33 = 1;
  }
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, v33, v32);
  v37 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v37 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v37->static_fields->RESULT_WINDOW_SIZE, v36);
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    itemIcon = (System_Action_ShopRootConstants_State__o *)ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !itemIcon )
      goto LABEL_52;
    if ( !LODWORD(itemIcon->fields.m_target) )
    {
      v42 = sub_B52A88(itemIcon);
      sub_B52A28(v42, 0LL);
    }
    v38 = itemIcon->fields.method;
  }
  else
  {
    v38 = 0;
  }
  itemIcon = (System_Action_ShopRootConstants_State__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon
    || (itemIcon = (System_Action_ShopRootConstants_State__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)itemIcon,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (v39 = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)itemIcon,
                                v38,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, 0, v39, v40),
        (itemIcon = (System_Action_ShopRootConstants_State__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL)) == 0LL) )
  {
LABEL_52:
    sub_B52A5C(itemIcon, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
  v41 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetButtonDisp(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isChoices,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  UILabel_o *cancelLabel; // x22
  System_String_o *decideButton; // x0
  __int64 v9; // x1
  UILabel_o *decideLabel; // x22
  UILabel_o *normalBuyLabel; // x22
  UILabel_o *anotherBuyLabel; // x22
  System_String_o *v13; // x23
  Il2CppObject *AnotherPayName; // x0
  int32_t state; // w8
  UILabel_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x19
  EventRewardAnotherPayConfirmDialog_c *v18; // x8
  float *p_x; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_GameObject_o *v23; // x20
  EventRewardAnotherPayConfirmDialog_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v27; // x21
  EventRewardAnotherPayConfirmDialog_c *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  EventRewardAnotherPayConfirmDialog_c *v30; // x8
  float *v31; // x8
  UnityEngine_GameObject_o *v32; // x0
  EventRewardAnotherPayConfirmDialog_c *v33; // x8
  float *v34; // x8

  if ( (byte_42ACAF4 & 1) == 0 )
  {
    sub_B52984(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_9415/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/);
    sub_B52984(&StringLiteral_1701/*"ANOTHER_PAY_ANOTHER_BUY"*/);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_1710/*"ANOTHER_PAY_NORMAL_BUY"*/);
    byte_42ACAF4 = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_56;
  UILabel__set_text(cancelLabel, decideButton, 0LL);
  decideLabel = this->fields.decideLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_9415/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_56;
  UILabel__set_text(decideLabel, decideButton, 0LL);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_1710/*"ANOTHER_PAY_NORMAL_BUY"*/, 0LL);
  if ( !normalBuyLabel )
    goto LABEL_56;
  UILabel__set_text(normalBuyLabel, decideButton, 0LL);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_1701/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0LL);
  if ( !itemEntity )
    goto LABEL_56;
  v13 = decideButton;
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0LL);
  decideButton = System_String__Format(v13, AnotherPayName, 0LL);
  if ( !anotherBuyLabel )
    goto LABEL_56;
  UILabel__set_text(anotherBuyLabel, decideButton, 0LL);
  state = this->fields.state;
  if ( state != 4 )
  {
    if ( state == 5 )
    {
      v16 = this->fields.cancelLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( v16 )
      {
        UILabel__set_text(v16, decideButton, 0LL);
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
                v18 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                  v18 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                }
                p_x = &v18->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                x = p_x[9];
                y = p_x[10];
                z = p_x[11];
LABEL_54:
                v25 = gameObject;
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
        v27 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
        v28 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
          v28 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(v27, v28->static_fields->DECIDE_BUTTON_BASE_POS, 0LL);
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
                  v29 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
                  v30 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  gameObject = v29;
                  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                    v30 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  }
                  v31 = &v30->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                  x = v31[3];
                  y = v31[4];
                  z = v31[5];
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
                  v32 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
                  v33 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  gameObject = v32;
                  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                    v33 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  }
                  v34 = &v33->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                  x = *v34;
                  y = v34[1];
                  z = v34[2];
                  goto LABEL_54;
                }
              }
            }
          }
        }
      }
    }
LABEL_56:
    sub_B52A5C(decideButton, v9);
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
  v23 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
  v24 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v24 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v23, v24->static_fields->DECIDE_BUTTON_PURCHASED_POS, 0LL);
  decideButton = (System_String_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_56;
  v25 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  x = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.x;
  y = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.y;
  z = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.z;
LABEL_55:
  GameObjectExtensions__SetLocalPosition(v25, *(UnityEngine_Vector3_o *)&x, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(
        EventRewardAnotherPayConfirmDialog_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *v7; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v15; // x0
  int32_t v16; // w20
  SkillEntity_o *Entity; // x21
  SkillLvEntity_o *v18; // x0
  SkillLvEntity_o *v19; // x22
  UILabel_o *skillNameLabel; // x23
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0

  if ( (byte_42ACAF2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
    sub_B52984(&Method_System_Func_ServantPassiveSkillEntity__bool___ctor__);
    sub_B52984(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__);
    sub_B52984(&EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo);
    byte_42ACAF2 = 1;
  }
  v7 = (EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *)sub_B52A54(EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo);
  EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_25;
  v7->fields.eventId = eventId;
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AEB684(v11);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v11 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                            (ServantPassiveSkillMaster_o *)MasterData_WarQuestSelectionMaster,
                                                                            svtId,
                                                                            0LL);
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_ServantPassiveSkillEntity__bool___ctor__);
  v14 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          ServantSkillList,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
  v15 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
          v14,
          (const MethodInfo_1B62EA8 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
  v16 = v15 ? HIDWORD(v15->fields.transactionId) : 0;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                              v16,
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  v18 = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, v16, 1, 0LL);
  if ( Entity )
  {
    v19 = v18;
    if ( v18 )
    {
      skillNameLabel = this->fields.skillNameLabel;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillEntity__getName(Entity, 0LL);
      if ( skillNameLabel )
      {
        UILabel__set_text(skillNameLabel, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
        skillDetailLabel = this->fields.skillDetailLabel;
        Detail = SkillLvEntity__getDetail(v19, 0, 0LL);
        WrapControlText__textAdjust(skillDetailLabel, Detail, 22, 0, 0, 0LL);
        MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.skillIcon;
        if ( MasterData_WarQuestSelectionMaster )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)MasterData_WarQuestSelectionMaster, v16, 0LL);
          return;
        }
      }
LABEL_25:
      sub_B52A5C(MasterData_WarQuestSelectionMaster, v9);
    }
  }
}


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

  if ( (byte_42ACAF3 & 1) == 0 )
  {
    sub_B52984(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_42ACAF3 = 1;
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
        sub_B52A5C(itemIcon, v7);
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
    sub_B52A5C(window, method);
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
  if ( (byte_42ACAFA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15582/*"Window/CancelButton"*/);
    byte_42ACAFA = 1;
  }
  return (System_String_o *)StringLiteral_15582/*"Window/CancelButton"*/;
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
    sub_B52A5C(this, 0LL);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}