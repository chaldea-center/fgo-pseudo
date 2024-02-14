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

  if ( (byte_421130F & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardAnotherPayConfirmDialog_TypeInfo, v1);
    byte_421130F = 1;
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
  if ( (byte_421130E & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_421130E = 1;
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
  int64_t v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  WarQuestSelectionMaster_o *v13; // x0
  __int64 v14; // x21
  __int64 v15; // x22
  ServantLimitImageMaster_o *v16; // x20
  int32_t v17; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_421130C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, svtEntity);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_421130C = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !svtEntity )
    goto LABEL_29;
  v10 = UserId;
  v12 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v20, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v10, UserId, 0LL) )
  {
    v17 = -1;
    return ServantEntity__getName(svtEntity, v17, -1, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v13 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v15 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v16 = (ServantLimitImageMaster_o *)v13;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v21, 0LL);
  if ( !entity
    || !v16
    || (UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, UserId, entity->fields.maxLimitCount, 0LL),
        !entity) )
  {
LABEL_29:
    sub_B0D97C(UserId);
  }
  if ( (_DWORD)UserId == entity->fields.maxLimitCount )
    v17 = -1;
  else
    v17 = UserId;
  return ServantEntity__getName(svtEntity, v17, -1, 0LL);
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
    sub_B0D97C(itemIcon);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_B0D840(&this->fields.onDecide, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickAnotherBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_421130B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_421130B = 1;
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
      sub_B0D97C(0LL);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      3,
      (const MethodInfo_246D794 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
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
  struct UILabel_o *cancelLabel; // x8
  System_String_o *v8; // x1
  bool v9; // w20
  _QWORD *v10; // x8
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4211308 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, method);
    sub_B0D8A4(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v5);
    byte_4211308 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    mText = LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    cancelLabel = this->fields.cancelLabel;
    if ( !cancelLabel )
      goto LABEL_15;
    v8 = mText;
    mText = cancelLabel->fields.mText;
    if ( !mText )
      goto LABEL_15;
    v9 = System_String__Equals_43837244(mText, v8, 0LL);
    v10 = Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v10 = (_QWORD *)sub_B0D8AC(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v11 = (System_Reflection_MethodBase_o *)sub_B0D888(v10, v10[3]);
    OverwriteAssetSoundName__PlaySystemSe(v11, !v9, 0LL);
    mText = (System_String_o *)this->fields.onDecide;
    this->fields.state = 0;
    if ( !mText )
LABEL_15:
      sub_B0D97C(mText);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)mText,
      0,
      (const MethodInfo_246D794 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickDecide(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_4211309 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4211309 = 1;
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
      sub_B0D97C(0LL);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      1,
      (const MethodInfo_246D794 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickNormalBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_421130A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_421130A = 1;
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
      sub_B0D97C(0LL);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      2,
      (const MethodInfo_246D794 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
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
  __int64 v11; // x1
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x26
  System_Action_ShopRootConstants_State__o *AnotherPayItemIds; // x0
  int32_t v31; // w24
  WarEntity_o *v32; // x21
  ServantEntity_o *RelateServantEntity; // x0
  ServantEntity_o *v34; // x25
  int32_t v35; // w8
  int32_t eventId; // w24
  __int64 v37; // x26
  __int64 v38; // x27
  int32_t v39; // w0
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x2
  EventRewardAnotherPayConfirmDialog_o *v42; // x0
  const MethodInfo *v43; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  UILabel_o *warnLabel; // x26
  Il2CppObject *v47; // x25
  System_String_o *v48; // x27
  Il2CppObject *AnotherPayName; // x0
  UILabel_o *downerLabel; // x26
  UILabel_o *titleLabel; // x26
  System_String_o *v52; // x22
  Il2CppObject *v53; // x0
  UILabel_o *upperLabel; // x22
  System_String_o *v55; // x23
  Il2CppObject *v56; // x0
  struct UILabel_o *v57; // x22
  System_String_o *v58; // x23
  Il2CppObject *v59; // x0
  System_String_o *v60; // x1
  UILabel_o *v61; // x0
  System_String_o *v62; // x27
  Il2CppObject *v63; // x0
  UILabel_o *v64; // x26
  System_String_o *v65; // x0
  UILabel_o *v66; // x26
  System_String_o *v67; // x0
  const MethodInfo *v68; // x1
  System_String_o *v69; // x23
  Il2CppObject *age; // x28
  System_Object_array *v71; // x27
  Il2CppObject *v72; // x22
  EventRewardAnotherPayConfirmDialog_c *v73; // x0
  const MethodInfo *v74; // x3
  __int64 v75; // x1
  __int64 v76; // x2
  System_Action_o *v77; // x20
  __int64 v78; // x0
  __int64 v79; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4211303 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, entity);
    sub_B0D8A4(&System_Action_TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__, v14);
    sub_B0D8A4(&EventRewardAnotherPayConfirmDialog_TypeInfo, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&object___TypeInfo, v17);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&string_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_1697/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, v21);
    sub_B0D8A4(&StringLiteral_1696/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, v22);
    sub_B0D8A4(&StringLiteral_1690/*"ANOTHER_PAY_CONFIRM_TITLE"*/, v23);
    sub_B0D8A4(&StringLiteral_1692/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, v24);
    sub_B0D8A4(&StringLiteral_1695/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, v25);
    sub_B0D8A4(&StringLiteral_1693/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, v26);
    sub_B0D8A4(&StringLiteral_1691/*"ANOTHER_PAY_INFO_TITLE"*/, v27);
    sub_B0D8A4(&StringLiteral_1694/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, v28);
    byte_4211303 = 1;
  }
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B0D840(&this->fields.onDecide, onDecide);
  if ( !entity )
    goto LABEL_78;
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !AnotherPayItemIds )
      goto LABEL_78;
    if ( !LODWORD(AnotherPayItemIds->fields.m_target) )
      goto LABEL_79;
    v31 = AnotherPayItemIds->fields.method;
  }
  else
  {
    v31 = 0;
  }
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)AnotherPayItemIds,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  v32 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)AnotherPayItemIds,
          v31,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  RelateServantEntity = ShopEntity__GetRelateServantEntity(entity, 0LL);
  if ( !v32 || (v34 = RelateServantEntity) == 0LL )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)*p_onDecide;
    if ( *p_onDecide )
    {
      System_Action_ShopRootConstants_State___Invoke(
        AnotherPayItemIds,
        2,
        (const MethodInfo_246D794 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
      return;
    }
    goto LABEL_78;
  }
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)this->fields.itemIcon;
  if ( isReconfirm )
    v35 = 2;
  else
    v35 = 4;
  if ( isChoices )
    v35 = 3;
  this->fields.state = v35;
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
  ItemIconComponent__SetItem((ItemIconComponent_o *)AnotherPayItemIds, v31, -1, 0LL);
  eventId = entity->fields.eventId;
  v38 = *(_QWORD *)&v34->fields.id.fields.currentCryptoKey;
  v37 = *(_QWORD *)&v34->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v80.fields.currentCryptoKey = v38;
  *(_QWORD *)&v80.fields.fakeValue = v37;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v80, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v39, v40);
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, 1, v41);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)this->fields.resultLabel;
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  UILabel__set_text((UILabel_o *)AnotherPayItemIds, string_TypeInfo->static_fields->Empty, 0LL);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v42, v34, v43);
  ClassName = ServantEntity__getClassName(v34, 0LL);
  warnLabel = this->fields.warnLabel;
  v47 = (Il2CppObject *)ClassName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_1696/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, 0LL);
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v32, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v48, AnotherPayName, 0LL);
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
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_1691/*"ANOTHER_PAY_INFO_TITLE"*/, 0LL);
    v53 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v32, 0LL);
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v52, v53, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
      upperLabel = this->fields.upperLabel;
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_1692/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0LL);
      v56 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v32, 0LL);
      AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v55, v56, 0LL);
      if ( upperLabel )
      {
        UILabel__set_text(upperLabel, (System_String_o *)AnotherPayItemIds, 0LL);
        v57 = this->fields.downerLabel;
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_1693/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0LL);
        v59 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v32, 0LL);
        AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v58, v59, 0LL);
        if ( v57 )
        {
          v60 = (System_String_o *)AnotherPayItemIds;
          v61 = v57;
LABEL_54:
          UILabel__set_text(v61, v60, 0LL);
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
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_1690/*"ANOTHER_PAY_CONFIRM_TITLE"*/, 0LL);
  v63 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v32, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v62, v63, 0LL);
  if ( !titleLabel )
    goto LABEL_78;
  UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
  v64 = this->fields.downerLabel;
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_1695/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(
                                                                    v65,
                                                                    (Il2CppObject *)v32->fields.age,
                                                                    0LL);
  if ( !v64 )
    goto LABEL_78;
  UILabel__set_text(v64, (System_String_o *)AnotherPayItemIds, 0LL);
  v66 = this->fields.upperLabel;
  if ( isReconfirm )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_1697/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, 0LL);
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format_43850968(
                                                                      v67,
                                                                      (Il2CppObject *)v32->fields.age,
                                                                      v47,
                                                                      Name,
                                                                      0LL);
    if ( v66 )
    {
      v60 = (System_String_o *)AnotherPayItemIds;
      v61 = v66;
      goto LABEL_54;
    }
LABEL_78:
    sub_B0D97C(AnotherPayItemIds);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_1694/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B0D8BC(object___TypeInfo, 4LL);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  age = (Il2CppObject *)v32->fields.age;
  v71 = (System_Object_array *)AnotherPayItemIds;
  if ( age )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B0D964(
                                                                      v32->fields.age,
                                                                      AnotherPayItemIds->klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( !v71->max_length )
    goto LABEL_79;
  v71->m_Items[0] = age;
  sub_B0D840(v71->m_Items, age);
  if ( v47 )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B0D964(v47, v71->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( v71->max_length <= 1 )
    goto LABEL_79;
  v71->m_Items[1] = v47;
  sub_B0D840(&v71->m_Items[1], v47);
  if ( Name )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B0D964(Name, v71->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( v71->max_length <= 2 )
    goto LABEL_79;
  v71->m_Items[2] = Name;
  sub_B0D840(&v71->m_Items[2], Name);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)ShopEntity__getName(entity, 0LL);
  v72 = (Il2CppObject *)AnotherPayItemIds;
  if ( AnotherPayItemIds )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B0D964(
                                                                      AnotherPayItemIds,
                                                                      v71->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
    {
LABEL_80:
      v79 = sub_B0D99C();
      sub_B0D948(v79, 0LL);
    }
  }
  if ( v71->max_length <= 3 )
  {
LABEL_79:
    v78 = sub_B0D9A8(AnotherPayItemIds);
    sub_B0D948(v78, 0LL);
  }
  v71->m_Items[3] = v72;
  sub_B0D840(&v71->m_Items[3], v72);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format_43928628(v69, v71, 0LL);
  if ( !v66 )
    goto LABEL_78;
  UILabel__set_text(v66, (System_String_o *)AnotherPayItemIds, 0LL);
LABEL_73:
  v73 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v73 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v73->static_fields->CONFIRM_WINDOW_SIZE, v68);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, isChoices, (ItemEntity_o *)v32, v74);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnotherPayItemIds, 1, 0LL);
  v77 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v75, v76);
  System_Action___ctor(v77, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OpenResult(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *entity,
        bool isAnotherItemOnly,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x23
  System_Action_ShopRootConstants_State__o *itemIcon; // x0
  ServantEntity_o *v25; // x22
  int32_t eventId; // w23
  Il2CppObject *m_target; // x24
  __int64 v28; // x25
  int32_t v29; // w0
  const MethodInfo *v30; // x3
  UILabel_o *titleLabel; // x23
  UILabel_o *upperLabel; // x25
  UILabel_o *downerLabel; // x26
  System_String_o *Empty; // x24
  EventRewardAnotherPayConfirmDialog_o *v35; // x0
  const MethodInfo *v36; // x2
  Il2CppObject *Name; // x23
  System_String_o *ClassName; // x0
  UILabel_o *resultLabel; // x22
  Il2CppObject *v40; // x24
  __int64 *v41; // x8
  System_String_o *v42; // x21
  Il2CppObject *v43; // x0
  EventEntity_o *v44; // x0
  const MethodInfo *v45; // x2
  bool v46; // w1
  UILabel_o *v47; // x21
  UILabel_o *v48; // x21
  const MethodInfo *v49; // x1
  EventRewardAnotherPayConfirmDialog_c *v50; // x0
  int32_t v51; // w20
  ItemEntity_o *v52; // x0
  const MethodInfo *v53; // x3
  __int64 v54; // x1
  __int64 v55; // x2
  System_Action_o *v56; // x20
  __int64 v57; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4211304 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, entity);
    sub_B0D8A4(&System_Action_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__, v14);
    sub_B0D8A4(&EventRewardAnotherPayConfirmDialog_TypeInfo, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&string_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_1700/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/, v20);
    sub_B0D8A4(&StringLiteral_1699/*"ANOTHER_PAY_PERIOD_END_MSG"*/, v21);
    sub_B0D8A4(&StringLiteral_1701/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/, v22);
    byte_4211304 = 1;
  }
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B0D840(&this->fields.onDecide, onDecide);
  if ( !entity )
  {
    itemIcon = (System_Action_ShopRootConstants_State__o *)*p_onDecide;
    if ( *p_onDecide )
    {
      System_Action_ShopRootConstants_State___Invoke(
        itemIcon,
        0,
        (const MethodInfo_246D794 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
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
  v25 = (ServantEntity_o *)itemIcon;
  eventId = entity->fields.eventId;
  v28 = *(_QWORD *)&itemIcon->fields.method_ptr;
  m_target = itemIcon->fields.m_target;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v58.fields.currentCryptoKey = v28;
  *(_QWORD *)&v58.fields.fakeValue = m_target;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v58, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v29, v30);
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
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v35, v25, v36);
  ClassName = ServantEntity__getClassName(v25, 0LL);
  resultLabel = this->fields.resultLabel;
  v40 = (Il2CppObject *)ClassName;
  if ( isAnotherItemOnly )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = &StringLiteral_1700/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = &StringLiteral_1701/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
  }
  v42 = LocalizationManager__Get((System_String_o *)*v41, 0LL);
  v43 = (Il2CppObject *)ShopEntity__getName(entity, 0LL);
  itemIcon = (System_Action_ShopRootConstants_State__o *)System_String__Format_43850968(v42, v43, v40, Name, 0LL);
  if ( !resultLabel )
    goto LABEL_52;
  UILabel__set_text(resultLabel, (System_String_o *)itemIcon, 0LL);
  itemIcon = (System_Action_ShopRootConstants_State__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon )
    goto LABEL_52;
  itemIcon = (System_Action_ShopRootConstants_State__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)itemIcon,
                                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !itemIcon )
    goto LABEL_52;
  v44 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)itemIcon,
                           entity->fields.eventId,
                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( v44 && !EventEntity__IsEventPeriod(v44, 0LL, 0LL) )
  {
    v47 = this->fields.downerLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    itemIcon = (System_Action_ShopRootConstants_State__o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_1699/*"ANOTHER_PAY_PERIOD_END_MSG"*/,
                                                             0LL);
    if ( !v47 )
      goto LABEL_52;
    UILabel__set_text(v47, (System_String_o *)itemIcon, 0LL);
    v48 = this->fields.downerLabel;
    itemIcon = (System_Action_ShopRootConstants_State__o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
    if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    }
    if ( !v48 )
      goto LABEL_52;
    UILabel__set_fontSize(
      v48,
      EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_FONT_SIZE,
      0LL);
    v46 = 0;
  }
  else
  {
    v46 = 1;
  }
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, v46, v45);
  v50 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v50 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v50->static_fields->RESULT_WINDOW_SIZE, v49);
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    itemIcon = (System_Action_ShopRootConstants_State__o *)ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !itemIcon )
      goto LABEL_52;
    if ( !LODWORD(itemIcon->fields.m_target) )
    {
      v57 = sub_B0D9A8(itemIcon);
      sub_B0D948(v57, 0LL);
    }
    v51 = itemIcon->fields.method;
  }
  else
  {
    v51 = 0;
  }
  itemIcon = (System_Action_ShopRootConstants_State__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon
    || (itemIcon = (System_Action_ShopRootConstants_State__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)itemIcon,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (v52 = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)itemIcon,
                                v51,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, 0, v52, v53),
        (itemIcon = (System_Action_ShopRootConstants_State__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL)) == 0LL) )
  {
LABEL_52:
    sub_B0D97C(itemIcon);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
  v56 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v54, v55);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v56, 0, 0LL);
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
  UILabel_o *decideLabel; // x22
  UILabel_o *normalBuyLabel; // x22
  UILabel_o *anotherBuyLabel; // x22
  System_String_o *v18; // x23
  Il2CppObject *AnotherPayName; // x0
  int32_t state; // w8
  UILabel_o *v21; // x20
  UnityEngine_GameObject_o *gameObject; // x19
  EventRewardAnotherPayConfirmDialog_c *v23; // x8
  float *p_x; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_GameObject_o *v28; // x20
  EventRewardAnotherPayConfirmDialog_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v32; // x21
  EventRewardAnotherPayConfirmDialog_c *v33; // x8
  UnityEngine_GameObject_o *v34; // x0
  EventRewardAnotherPayConfirmDialog_c *v35; // x8
  float *v36; // x8
  UnityEngine_GameObject_o *v37; // x0
  EventRewardAnotherPayConfirmDialog_c *v38; // x8
  float *v39; // x8

  if ( (byte_4211307 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardAnotherPayConfirmDialog_TypeInfo, isChoices);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_9381/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v8);
    sub_B0D8A4(&StringLiteral_1689/*"ANOTHER_PAY_ANOTHER_BUY"*/, v9);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v10);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v11);
    sub_B0D8A4(&StringLiteral_1698/*"ANOTHER_PAY_NORMAL_BUY"*/, v12);
    byte_4211307 = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_56;
  UILabel__set_text(cancelLabel, decideButton, 0LL);
  decideLabel = this->fields.decideLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_9381/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_56;
  UILabel__set_text(decideLabel, decideButton, 0LL);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_1698/*"ANOTHER_PAY_NORMAL_BUY"*/, 0LL);
  if ( !normalBuyLabel )
    goto LABEL_56;
  UILabel__set_text(normalBuyLabel, decideButton, 0LL);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_1689/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0LL);
  if ( !itemEntity )
    goto LABEL_56;
  v18 = decideButton;
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0LL);
  decideButton = System_String__Format(v18, AnotherPayName, 0LL);
  if ( !anotherBuyLabel )
    goto LABEL_56;
  UILabel__set_text(anotherBuyLabel, decideButton, 0LL);
  state = this->fields.state;
  if ( state != 4 )
  {
    if ( state == 5 )
    {
      v21 = this->fields.cancelLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( v21 )
      {
        UILabel__set_text(v21, decideButton, 0LL);
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
                v23 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                  v23 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                }
                p_x = &v23->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                x = p_x[9];
                y = p_x[10];
                z = p_x[11];
LABEL_54:
                v30 = gameObject;
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
        v32 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
        v33 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
          v33 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(v32, v33->static_fields->DECIDE_BUTTON_BASE_POS, 0LL);
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
                  v34 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
                  v35 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  gameObject = v34;
                  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                    v35 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  }
                  v36 = &v35->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                  x = v36[3];
                  y = v36[4];
                  z = v36[5];
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
                  v37 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
                  v38 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  gameObject = v37;
                  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                    v38 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  }
                  v39 = &v38->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                  x = *v39;
                  y = v39[1];
                  z = v39[2];
                  goto LABEL_54;
                }
              }
            }
          }
        }
      }
    }
LABEL_56:
    sub_B0D97C(decideButton);
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
  v28 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
  v29 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v29 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v28, v29->static_fields->DECIDE_BUTTON_PURCHASED_POS, 0LL);
  decideButton = (System_String_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_56;
  v30 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  x = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.x;
  y = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.y;
  z = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.z;
LABEL_55:
  GameObjectExtensions__SetLocalPosition(v30, *(UnityEngine_Vector3_o *)&x, 0LL);
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
  __int64 v21; // x21
  __int64 v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v28; // x0
  int32_t v29; // w20
  SkillEntity_o *Entity; // x21
  SkillLvEntity_o *v31; // x0
  SkillLvEntity_o *v32; // x22
  UILabel_o *skillNameLabel; // x23
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0

  if ( (byte_4211305 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___, v12);
    sub_B0D8A4(&Method_System_Func_ServantPassiveSkillEntity__bool___ctor__, v13);
    sub_B0D8A4(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__, v17);
    sub_B0D8A4(&EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo, v18);
    byte_4211305 = 1;
  }
  v19 = (EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *)sub_B0D974(
                                                                        EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo,
                                                                        *(_QWORD *)&eventId,
                                                                        *(_QWORD *)&svtId);
  EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_25;
  v19->fields.eventId = eventId;
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v22 = **(_QWORD **)(v21 + 192);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AA65A4(v22);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v22 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                            (ServantPassiveSkillMaster_o *)MasterData_WarQuestSelectionMaster,
                                                                            svtId,
                                                                            0LL);
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_ServantPassiveSkillEntity__bool__TypeInfo,
                                                                             v24,
                                                                             v25);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v19,
    Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_ServantPassiveSkillEntity__bool___ctor__);
  v27 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          ServantSkillList,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
  v28 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
          v27,
          (const MethodInfo_1B4B938 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
  v29 = v28 ? HIDWORD(v28->fields.transactionId) : 0;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                              v29,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  v31 = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, v29, 1, 0LL);
  if ( Entity )
  {
    v32 = v31;
    if ( v31 )
    {
      skillNameLabel = this->fields.skillNameLabel;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillEntity__getName(Entity, 0LL);
      if ( skillNameLabel )
      {
        UILabel__set_text(skillNameLabel, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
        skillDetailLabel = this->fields.skillDetailLabel;
        Detail = SkillLvEntity__getDetail(v32, 0, 0LL);
        WrapControlText__textAdjust(skillDetailLabel, Detail, 22, 0, 0, 0LL);
        MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.skillIcon;
        if ( MasterData_WarQuestSelectionMaster )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)MasterData_WarQuestSelectionMaster, v29, 0LL);
          return;
        }
      }
LABEL_25:
      sub_B0D97C(MasterData_WarQuestSelectionMaster);
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
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  float WARN_LABEL_BASE_POS_Y; // s0
  UnityEngine_GameObject_o *v14; // x20
  EventRewardAnotherPayConfirmDialog_c *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  float DOWNER_LABEL_CHOICES_POS_Y; // s1
  UnityEngine_GameObject_o *v20; // x20
  EventRewardAnotherPayConfirmDialog_c *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v25; // x8
  float DOWNER_LABEL_RESULT_POS_Y; // s0
  UnityEngine_GameObject_o *v27; // x21
  EventRewardAnotherPayConfirmDialog_c *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  EventRewardAnotherPayConfirmDialog_c *v30; // x0
  UnityEngine_GameObject_o *v31; // x20
  UnityEngine_GameObject_o *v32; // x0

  if ( (byte_4211306 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardAnotherPayConfirmDialog_TypeInfo, isEventPeriod);
    byte_4211306 = 1;
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
      v9 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v9,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_BASE_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v10 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v10,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_BASE_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v11 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = static_fields->WARN_LABEL_BASE_POS_Y;
      goto LABEL_20;
    case 3:
      v20 = this->fields.skill;
      v21 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v21 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v20, v21->static_fields->SKILL_CHOICES_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_42;
      v22 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v22,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v23 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v23,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_CHOICES_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v24 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v24,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v11 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      v25 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = v25->WARN_LABEL_CHOICES_POS_Y;
      DOWNER_LABEL_CHOICES_POS_Y = v25->DOWNER_LABEL_CHOICES_POS_Y;
      goto LABEL_29;
    case 4:
      v14 = this->fields.skill;
      v15 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v15 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v14, v15->static_fields->SKILL_PURCHASED_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_42;
      v16 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v16,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_PURCHASED_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v17 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v17,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_PURCHASED_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v18 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v18,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_PURCHASED_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v11 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = static_fields->WARN_LABEL_PURCHASED_POS_Y;
LABEL_20:
      DOWNER_LABEL_CHOICES_POS_Y = static_fields->DOWNER_LABEL_POS_Y;
LABEL_29:
      DOWNER_LABEL_RESULT_POS_Y = WARN_LABEL_BASE_POS_Y + DOWNER_LABEL_CHOICES_POS_Y;
      goto LABEL_30;
    case 5:
      v27 = this->fields.skill;
      v28 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v28 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v27, v28->static_fields->SKILL_RESULT_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v29 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v29,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->RESULT_LABEL_POS_Y,
        0LL);
      if ( isEventPeriod )
        return;
      v30 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v31 = this->fields.skill;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v30 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v31, v30->static_fields->SKILL_RESULT_END_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !itemIcon
        || (v32 = UnityEngine_Component__get_gameObject(itemIcon, 0LL),
            GameObjectExtensions__SetLocalPositionY(
              v32,
              EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->RESULT_LABEL_PERIOD_POS_Y,
              0LL),
            (itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel) == 0LL) )
      {
LABEL_42:
        sub_B0D97C(itemIcon);
      }
      v11 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      DOWNER_LABEL_RESULT_POS_Y = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_POS_Y;
LABEL_30:
      GameObjectExtensions__SetLocalPositionY(v11, DOWNER_LABEL_RESULT_POS_Y, 0LL);
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
    sub_B0D97C(window);
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
  if ( (byte_421130D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15524/*"Window/CancelButton"*/, method);
    byte_421130D = 1;
  }
  return (System_String_o *)StringLiteral_15524/*"Window/CancelButton"*/;
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
    sub_B0D97C(this);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}