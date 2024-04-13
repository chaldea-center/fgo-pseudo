void __fastcall EventRewardAnotherPayConfirmDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x9
  EventRewardAnotherPayConfirmDialog_c *v5; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v6; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v7; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v8; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v9; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v10; // x9

  if ( (byte_42E5516 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardAnotherPayConfirmDialog_TypeInfo, v1, v2, v3);
    byte_42E5516 = 1;
  }
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CANCEL_BUTTON_BASE_POS.fields.x = 0xC3600000C3200000LL;
  static_fields->CANCEL_BUTTON_BASE_POS.fields.z = 0.0;
  v5 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  v6 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(int32x2_t *)&v6->CANCEL_BUTTON_CHOICES_POS.fields.x = vdup_n_s32(0xC3600000);
  v6->CANCEL_BUTTON_CHOICES_POS.fields.z = 0.0;
  v7 = v5->static_fields;
  *(_QWORD *)&v7->CANCEL_BUTTON_PURCHASED_POS.fields.x = 0xC3700000C3200000LL;
  v7->CANCEL_BUTTON_PURCHASED_POS.fields.z = 0.0;
  v8 = v5->static_fields;
  *(_QWORD *)&v8->CANCEL_BUTTON_RESULT_POS.fields.x = 0xC31B000000000000LL;
  v8->CANCEL_BUTTON_RESULT_POS.fields.z = 0.0;
  v9 = v5->static_fields;
  *(_QWORD *)&v9->DECIDE_BUTTON_BASE_POS.fields.x = 0xC360000043200000LL;
  v9->DECIDE_BUTTON_BASE_POS.fields.z = 0.0;
  v10 = v5->static_fields;
  *(_QWORD *)&v10->DECIDE_BUTTON_PURCHASED_POS.fields.x = -4363988037795840000LL;
  v10->DECIDE_BUTTON_PURCHASED_POS.fields.z = 0.0;
  v5->static_fields->CONFIRM_WINDOW_SIZE = (struct UnityEngine_Vector2_o)0x4416000044430000LL;
  v5->static_fields->RESULT_WINDOW_SIZE = (struct UnityEngine_Vector2_o)0x43F0000044430000LL;
  v5->static_fields->SKILL_BASE_POS_Y = 5.0;
  v5->static_fields->SKILL_CHOICES_POS_Y = 10.0;
  v5->static_fields->SKILL_PURCHASED_POS_Y = -25.0;
  v5->static_fields->SKILL_RESULT_POS_Y = -30.0;
  v5->static_fields->SKILL_RESULT_END_POS_Y = 0.0;
  v5->static_fields->ICON_BASE_POS_Y = 175.0;
  v5->static_fields->ICON_CHOICES_POS_Y = 180.0;
  v5->static_fields->ICON_PURCHASED_POS_Y = 185.0;
  v5->static_fields->UPPER_LABEL_POS_Y = -50.0;
  v5->static_fields->UPPER_LABEL_CHOICES_POS_Y = -60.0;
  v5->static_fields->WARN_LABEL_BASE_POS_Y = -95.0;
  v5->static_fields->WARN_LABEL_CHOICES_POS_Y = -100.0;
  v5->static_fields->WARN_LABEL_PURCHASED_POS_Y = -125.0;
  v5->static_fields->DOWNER_LABEL_POS_Y = -50.0;
  v5->static_fields->DOWNER_LABEL_CHOICES_POS_Y = -55.0;
  v5->static_fields->DOWNER_LABEL_RESULT_POS_Y = -100.0;
  v5->static_fields->RESULT_LABEL_POS_Y = 100.0;
  v5->static_fields->RESULT_LABEL_PERIOD_POS_Y = 120.0;
  v5->static_fields->DOWNER_LABEL_FONT_SIZE = 20;
  v5->static_fields->DOWNER_LABEL_RESULT_FONT_SIZE = 22;
}


void __fastcall EventRewardAnotherPayConfirmDialog___ctor(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5515 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5515 = 1;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v19; // x1
  int64_t v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  WarQuestSelectionMaster_o *v23; // x0
  __int64 v24; // x21
  __int64 v25; // x22
  ServantLimitImageMaster_o *v26; // x20
  int32_t v27; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42E5513 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, (_DWORD)svtEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    byte_42E5513 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !svtEntity )
    goto LABEL_29;
  v20 = UserId;
  v22 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v21 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v22;
  *(_QWORD *)&v30.fields.fakeValue = v21;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v20, UserId, 0LL) )
  {
    v27 = -1;
    return ServantEntity__getName(svtEntity, v27, -1, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v23 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v25 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v24 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v26 = (ServantLimitImageMaster_o *)v23;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v25;
  *(_QWORD *)&v31.fields.fakeValue = v24;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
  if ( !entity
    || !v26
    || (UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v26, UserId, entity->fields.maxLimitCount, 0LL),
        !entity) )
  {
LABEL_29:
    sub_B5D69C(UserId, v19);
  }
  if ( (_DWORD)UserId == entity->fields.maxLimitCount )
    v27 = -1;
  else
    v27 = UserId;
  return ServantEntity__getName(svtEntity, v27, -1, 0LL);
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
    sub_B5D69C(itemIcon, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_B5D560(&this->fields.onDecide);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickAnotherBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_42E5512 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E5512 = 1;
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
      sub_B5D69C(0LL, v8);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      3,
      (const MethodInfo_258A078 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickCancel(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *mText; // x0
  System_String_o *v15; // x1
  struct UILabel_o *cancelLabel; // x8
  bool v17; // w20
  _QWORD *v18; // x8
  System_Reflection_MethodBase_o *v19; // x0

  if ( (byte_42E550F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v11, v12, v13);
    byte_42E550F = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    mText = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    cancelLabel = this->fields.cancelLabel;
    if ( !cancelLabel )
      goto LABEL_15;
    v15 = mText;
    mText = cancelLabel->fields.mText;
    if ( !mText )
      goto LABEL_15;
    v17 = System_String__Equals_44565128(mText, v15, 0LL);
    v18 = Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v18 = (_QWORD *)sub_B5D5CC(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v19 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v18, v18[3]);
    OverwriteAssetSoundName__PlaySystemSe(v19, !v17, 0LL);
    mText = (System_String_o *)this->fields.onDecide;
    this->fields.state = 0;
    if ( !mText )
LABEL_15:
      sub_B5D69C(mText, v15);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)mText,
      0,
      (const MethodInfo_258A078 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickDecide(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_42E5510 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E5510 = 1;
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
      sub_B5D69C(0LL, v8);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      1,
      (const MethodInfo_258A078 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickNormalBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_42E5511 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E5511 = 1;
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
      sub_B5D69C(0LL, v8);
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      2,
      (const MethodInfo_258A078 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
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
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  int v35; // w1
  char v36; // w2
  __int64 v37; // x3
  int v38; // w1
  char v39; // w2
  __int64 v40; // x3
  int v41; // w1
  char v42; // w2
  __int64 v43; // x3
  int v44; // w1
  char v45; // w2
  __int64 v46; // x3
  int v47; // w1
  char v48; // w2
  __int64 v49; // x3
  int v50; // w1
  char v51; // w2
  __int64 v52; // x3
  int v53; // w1
  char v54; // w2
  __int64 v55; // x3
  int v56; // w1
  char v57; // w2
  __int64 v58; // x3
  int v59; // w1
  char v60; // w2
  __int64 v61; // x3
  int v62; // w1
  char v63; // w2
  __int64 v64; // x3
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x26
  System_Action_ShopRootConstants_State__o *AnotherPayItemIds; // x0
  __int64 v67; // x1
  int32_t v68; // w24
  WarEntity_o *v69; // x21
  ServantEntity_o *RelateServantEntity; // x0
  ServantEntity_o *v71; // x25
  int32_t v72; // w8
  int32_t eventId; // w24
  __int64 v74; // x26
  __int64 v75; // x27
  int32_t v76; // w0
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x2
  EventRewardAnotherPayConfirmDialog_o *v79; // x0
  const MethodInfo *v80; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  UILabel_o *warnLabel; // x26
  Il2CppObject *v84; // x25
  System_String_o *v85; // x27
  Il2CppObject *AnotherPayName; // x0
  UILabel_o *downerLabel; // x26
  UILabel_o *titleLabel; // x26
  System_String_o *v89; // x22
  Il2CppObject *v90; // x0
  UILabel_o *upperLabel; // x22
  System_String_o *v92; // x23
  Il2CppObject *v93; // x0
  struct UILabel_o *v94; // x22
  System_String_o *v95; // x23
  Il2CppObject *v96; // x0
  System_String_o *v97; // x1
  UILabel_o *v98; // x0
  System_String_o *v99; // x27
  Il2CppObject *v100; // x0
  UILabel_o *v101; // x26
  System_String_o *v102; // x0
  UILabel_o *v103; // x26
  System_String_o *v104; // x0
  const MethodInfo *v105; // x1
  System_String_o *v106; // x23
  Il2CppObject *age; // x28
  System_Object_array *v108; // x27
  Il2CppObject *v109; // x22
  EventRewardAnotherPayConfirmDialog_c *v110; // x0
  const MethodInfo *v111; // x3
  System_Action_o *v112; // x20
  __int64 v113; // x0
  __int64 v114; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_42E550A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__,
      (_DWORD)entity,
      isChoices,
      onDecide);
    sub_B5D5C4(&System_Action_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__, v20, v21, v22);
    sub_B5D5C4(&EventRewardAnotherPayConfirmDialog_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&object___TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&string_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_1714/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_1713/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_1707/*"ANOTHER_PAY_CONFIRM_TITLE"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_1709/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_1712/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_1710/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_1708/*"ANOTHER_PAY_INFO_TITLE"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_1711/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, v62, v63, v64);
    byte_42E550A = 1;
  }
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B5D560(&this->fields.onDecide);
  if ( !entity )
    goto LABEL_78;
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !AnotherPayItemIds )
      goto LABEL_78;
    if ( !LODWORD(AnotherPayItemIds->fields.m_target) )
      goto LABEL_79;
    v68 = AnotherPayItemIds->fields.method;
  }
  else
  {
    v68 = 0;
  }
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)AnotherPayItemIds,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  v69 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)AnotherPayItemIds,
          v68,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  RelateServantEntity = ShopEntity__GetRelateServantEntity(entity, 0LL);
  if ( !v69 || (v71 = RelateServantEntity) == 0LL )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)*p_onDecide;
    if ( *p_onDecide )
    {
      System_Action_ShopRootConstants_State___Invoke(
        AnotherPayItemIds,
        2,
        (const MethodInfo_258A078 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
      return;
    }
    goto LABEL_78;
  }
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)this->fields.itemIcon;
  if ( isReconfirm )
    v72 = 2;
  else
    v72 = 4;
  if ( isChoices )
    v72 = 3;
  this->fields.state = v72;
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
  ItemIconComponent__SetItem((ItemIconComponent_o *)AnotherPayItemIds, v68, -1, 0LL);
  eventId = entity->fields.eventId;
  v75 = *(_QWORD *)&v71->fields.id.fields.currentCryptoKey;
  v74 = *(_QWORD *)&v71->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v115.fields.currentCryptoKey = v75;
  *(_QWORD *)&v115.fields.fakeValue = v74;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v115, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v76, v77);
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, 1, v78);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)this->fields.resultLabel;
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  UILabel__set_text((UILabel_o *)AnotherPayItemIds, string_TypeInfo->static_fields->Empty, 0LL);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v79, v71, v80);
  ClassName = ServantEntity__getClassName(v71, 0LL);
  warnLabel = this->fields.warnLabel;
  v84 = (Il2CppObject *)ClassName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_1713/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, 0LL);
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v69, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v85, AnotherPayName, 0LL);
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
    v89 = LocalizationManager__Get((System_String_o *)StringLiteral_1708/*"ANOTHER_PAY_INFO_TITLE"*/, 0LL);
    v90 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v69, 0LL);
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v89, v90, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
      upperLabel = this->fields.upperLabel;
      v92 = LocalizationManager__Get((System_String_o *)StringLiteral_1709/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0LL);
      v93 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v69, 0LL);
      AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v92, v93, 0LL);
      if ( upperLabel )
      {
        UILabel__set_text(upperLabel, (System_String_o *)AnotherPayItemIds, 0LL);
        v94 = this->fields.downerLabel;
        v95 = LocalizationManager__Get((System_String_o *)StringLiteral_1710/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0LL);
        v96 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v69, 0LL);
        AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v95, v96, 0LL);
        if ( v94 )
        {
          v97 = (System_String_o *)AnotherPayItemIds;
          v98 = v94;
LABEL_54:
          UILabel__set_text(v98, v97, 0LL);
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
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_1707/*"ANOTHER_PAY_CONFIRM_TITLE"*/, 0LL);
  v100 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v69, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(v99, v100, 0LL);
  if ( !titleLabel )
    goto LABEL_78;
  UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
  v101 = this->fields.downerLabel;
  v102 = LocalizationManager__Get((System_String_o *)StringLiteral_1712/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format(
                                                                    v102,
                                                                    (Il2CppObject *)v69->fields.age,
                                                                    0LL);
  if ( !v101 )
    goto LABEL_78;
  UILabel__set_text(v101, (System_String_o *)AnotherPayItemIds, 0LL);
  v103 = this->fields.upperLabel;
  if ( isReconfirm )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v104 = LocalizationManager__Get((System_String_o *)StringLiteral_1714/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, 0LL);
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format_44578852(
                                                                      v104,
                                                                      (Il2CppObject *)v69->fields.age,
                                                                      v84,
                                                                      Name,
                                                                      0LL);
    if ( v103 )
    {
      v97 = (System_String_o *)AnotherPayItemIds;
      v98 = v103;
      goto LABEL_54;
    }
LABEL_78:
    sub_B5D69C(AnotherPayItemIds, v67);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_1711/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, 0LL);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B5D5DC(object___TypeInfo, 4LL);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  age = (Il2CppObject *)v69->fields.age;
  v108 = (System_Object_array *)AnotherPayItemIds;
  if ( age )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B5D684(
                                                                      v69->fields.age,
                                                                      AnotherPayItemIds->klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( !v108->max_length )
    goto LABEL_79;
  v108->m_Items[0] = age;
  sub_B5D560(v108->m_Items);
  if ( v84 )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B5D684(v84, v108->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( v108->max_length <= 1 )
    goto LABEL_79;
  v108->m_Items[1] = v84;
  sub_B5D560(&v108->m_Items[1]);
  if ( Name )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B5D684(Name, v108->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( v108->max_length <= 2 )
    goto LABEL_79;
  v108->m_Items[2] = Name;
  sub_B5D560(&v108->m_Items[2]);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)ShopEntity__getName(entity, 0LL);
  v109 = (Il2CppObject *)AnotherPayItemIds;
  if ( AnotherPayItemIds )
  {
    AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)sub_B5D684(
                                                                      AnotherPayItemIds,
                                                                      v108->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
    {
LABEL_80:
      v114 = sub_B5D6BC();
      sub_B5D668(v114, 0LL);
    }
  }
  if ( v108->max_length <= 3 )
  {
LABEL_79:
    v113 = sub_B5D6C8(AnotherPayItemIds);
    sub_B5D668(v113, 0LL);
  }
  v108->m_Items[3] = v109;
  sub_B5D560(&v108->m_Items[3]);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)System_String__Format_44656512(v106, v108, 0LL);
  if ( !v103 )
    goto LABEL_78;
  UILabel__set_text(v103, (System_String_o *)AnotherPayItemIds, 0LL);
LABEL_73:
  v110 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v110 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v110->static_fields->CONFIRM_WINDOW_SIZE, v105);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, isChoices, (ItemEntity_o *)v69, v111);
  AnotherPayItemIds = (System_Action_ShopRootConstants_State__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnotherPayItemIds, 1, 0LL);
  v112 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v112, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v112, 0, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OpenResult(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *entity,
        bool isAnotherItemOnly,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide,
        const MethodInfo *method)
{
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
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x23
  __int64 v52; // x1
  System_Action_ShopRootConstants_State__o *itemIcon; // x0
  ServantEntity_o *v54; // x22
  int32_t eventId; // w23
  Il2CppObject *m_target; // x24
  __int64 v57; // x25
  int32_t v58; // w0
  const MethodInfo *v59; // x3
  UILabel_o *titleLabel; // x23
  UILabel_o *upperLabel; // x25
  UILabel_o *downerLabel; // x26
  System_String_o *Empty; // x24
  EventRewardAnotherPayConfirmDialog_o *v64; // x0
  const MethodInfo *v65; // x2
  Il2CppObject *Name; // x23
  System_String_o *ClassName; // x0
  UILabel_o *resultLabel; // x22
  Il2CppObject *v69; // x24
  __int64 *v70; // x8
  System_String_o *v71; // x21
  Il2CppObject *v72; // x0
  EventEntity_o *v73; // x0
  const MethodInfo *v74; // x2
  bool v75; // w1
  UILabel_o *v76; // x21
  UILabel_o *v77; // x21
  const MethodInfo *v78; // x1
  EventRewardAnotherPayConfirmDialog_c *v79; // x0
  int32_t v80; // w20
  ItemEntity_o *v81; // x0
  const MethodInfo *v82; // x3
  System_Action_o *v83; // x20
  __int64 v84; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_42E550B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__,
      (_DWORD)entity,
      isAnotherItemOnly,
      onDecide);
    sub_B5D5C4(&System_Action_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__, v24, v25, v26);
    sub_B5D5C4(&EventRewardAnotherPayConfirmDialog_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&string_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_1717/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_1716/*"ANOTHER_PAY_PERIOD_END_MSG"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_1718/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/, v48, v49, v50);
    byte_42E550B = 1;
  }
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B5D560(&this->fields.onDecide);
  if ( !entity )
  {
    itemIcon = (System_Action_ShopRootConstants_State__o *)*p_onDecide;
    if ( *p_onDecide )
    {
      System_Action_ShopRootConstants_State___Invoke(
        itemIcon,
        0,
        (const MethodInfo_258A078 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
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
  v54 = (ServantEntity_o *)itemIcon;
  eventId = entity->fields.eventId;
  v57 = *(_QWORD *)&itemIcon->fields.method_ptr;
  m_target = itemIcon->fields.m_target;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v85.fields.currentCryptoKey = v57;
  *(_QWORD *)&v85.fields.fakeValue = m_target;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v85, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v58, v59);
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
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v64, v54, v65);
  ClassName = ServantEntity__getClassName(v54, 0LL);
  resultLabel = this->fields.resultLabel;
  v69 = (Il2CppObject *)ClassName;
  if ( isAnotherItemOnly )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v70 = &StringLiteral_1717/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v70 = &StringLiteral_1718/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
  }
  v71 = LocalizationManager__Get((System_String_o *)*v70, 0LL);
  v72 = (Il2CppObject *)ShopEntity__getName(entity, 0LL);
  itemIcon = (System_Action_ShopRootConstants_State__o *)System_String__Format_44578852(v71, v72, v69, Name, 0LL);
  if ( !resultLabel )
    goto LABEL_52;
  UILabel__set_text(resultLabel, (System_String_o *)itemIcon, 0LL);
  itemIcon = (System_Action_ShopRootConstants_State__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon )
    goto LABEL_52;
  itemIcon = (System_Action_ShopRootConstants_State__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)itemIcon,
                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !itemIcon )
    goto LABEL_52;
  v73 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)itemIcon,
                           entity->fields.eventId,
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( v73 && !EventEntity__IsEventPeriod(v73, 0LL, 0LL) )
  {
    v76 = this->fields.downerLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    itemIcon = (System_Action_ShopRootConstants_State__o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_1716/*"ANOTHER_PAY_PERIOD_END_MSG"*/,
                                                             0LL);
    if ( !v76 )
      goto LABEL_52;
    UILabel__set_text(v76, (System_String_o *)itemIcon, 0LL);
    v77 = this->fields.downerLabel;
    itemIcon = (System_Action_ShopRootConstants_State__o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
    if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    }
    if ( !v77 )
      goto LABEL_52;
    UILabel__set_fontSize(
      v77,
      EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_FONT_SIZE,
      0LL);
    v75 = 0;
  }
  else
  {
    v75 = 1;
  }
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, v75, v74);
  v79 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v79 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v79->static_fields->RESULT_WINDOW_SIZE, v78);
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    itemIcon = (System_Action_ShopRootConstants_State__o *)ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !itemIcon )
      goto LABEL_52;
    if ( !LODWORD(itemIcon->fields.m_target) )
    {
      v84 = sub_B5D6C8(itemIcon);
      sub_B5D668(v84, 0LL);
    }
    v80 = itemIcon->fields.method;
  }
  else
  {
    v80 = 0;
  }
  itemIcon = (System_Action_ShopRootConstants_State__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon
    || (itemIcon = (System_Action_ShopRootConstants_State__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)itemIcon,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (v81 = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)itemIcon,
                                v80,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, 0, v81, v82),
        (itemIcon = (System_Action_ShopRootConstants_State__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL)) == 0LL) )
  {
LABEL_52:
    sub_B5D69C(itemIcon, v52);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
  v83 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v83, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v83, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetButtonDisp(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isChoices,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  char v19; // w1
  int v20; // w2
  __int64 v21; // x3
  char v22; // w1
  int v23; // w2
  __int64 v24; // x3
  UILabel_o *cancelLabel; // x22
  System_String_o *decideButton; // x0
  __int64 v27; // x1
  UILabel_o *decideLabel; // x22
  UILabel_o *normalBuyLabel; // x22
  UILabel_o *anotherBuyLabel; // x22
  System_String_o *v31; // x23
  Il2CppObject *AnotherPayName; // x0
  int32_t state; // w8
  UILabel_o *v34; // x20
  UnityEngine_GameObject_o *gameObject; // x19
  EventRewardAnotherPayConfirmDialog_c *v36; // x8
  float *p_x; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_GameObject_o *v41; // x20
  EventRewardAnotherPayConfirmDialog_c *v42; // x8
  UnityEngine_GameObject_o *v43; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v45; // x21
  EventRewardAnotherPayConfirmDialog_c *v46; // x8
  UnityEngine_GameObject_o *v47; // x0
  EventRewardAnotherPayConfirmDialog_c *v48; // x8
  float *v49; // x8
  UnityEngine_GameObject_o *v50; // x0
  EventRewardAnotherPayConfirmDialog_c *v51; // x8
  float *v52; // x8

  if ( (byte_42E550E & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardAnotherPayConfirmDialog_TypeInfo, isChoices, (_DWORD)itemEntity, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_9454/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1706/*"ANOTHER_PAY_ANOTHER_BUY"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1715/*"ANOTHER_PAY_NORMAL_BUY"*/, v22, v23, v24);
    byte_42E550E = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_56;
  UILabel__set_text(cancelLabel, decideButton, 0LL);
  decideLabel = this->fields.decideLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_9454/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_56;
  UILabel__set_text(decideLabel, decideButton, 0LL);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_1715/*"ANOTHER_PAY_NORMAL_BUY"*/, 0LL);
  if ( !normalBuyLabel )
    goto LABEL_56;
  UILabel__set_text(normalBuyLabel, decideButton, 0LL);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_1706/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0LL);
  if ( !itemEntity )
    goto LABEL_56;
  v31 = decideButton;
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0LL);
  decideButton = System_String__Format(v31, AnotherPayName, 0LL);
  if ( !anotherBuyLabel )
    goto LABEL_56;
  UILabel__set_text(anotherBuyLabel, decideButton, 0LL);
  state = this->fields.state;
  if ( state != 4 )
  {
    if ( state == 5 )
    {
      v34 = this->fields.cancelLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( v34 )
      {
        UILabel__set_text(v34, decideButton, 0LL);
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
                v36 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                  v36 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                }
                p_x = &v36->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                x = p_x[9];
                y = p_x[10];
                z = p_x[11];
LABEL_54:
                v43 = gameObject;
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
        v45 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
        v46 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
          v46 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(v45, v46->static_fields->DECIDE_BUTTON_BASE_POS, 0LL);
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
                  v47 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
                  v48 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  gameObject = v47;
                  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                    v48 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  }
                  v49 = &v48->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                  x = v49[3];
                  y = v49[4];
                  z = v49[5];
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
                  v50 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
                  v51 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  gameObject = v50;
                  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                    v51 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  }
                  v52 = &v51->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                  x = *v52;
                  y = v52[1];
                  z = v52[2];
                  goto LABEL_54;
                }
              }
            }
          }
        }
      }
    }
LABEL_56:
    sub_B5D69C(decideButton, v27);
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
  v41 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
  v42 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v42 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v41, v42->static_fields->DECIDE_BUTTON_PURCHASED_POS, 0LL);
  decideButton = (System_String_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_56;
  v43 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  x = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.x;
  y = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.y;
  z = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.z;
LABEL_55:
  GameObjectExtensions__SetLocalPosition(v43, *(UnityEngine_Vector3_o *)&x, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(
        EventRewardAnotherPayConfirmDialog_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *v43; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v45; // x1
  __int64 v46; // x21
  __int64 v47; // x21
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v49; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v51; // x0
  int32_t v52; // w20
  SkillEntity_o *Entity; // x21
  SkillLvEntity_o *v54; // x0
  SkillLvEntity_o *v55; // x22
  UILabel_o *skillNameLabel; // x23
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0

  if ( (byte_42E550C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, eventId, svtId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___, v22, v23, v24);
    sub_B5D5C4(&Method_System_Func_ServantPassiveSkillEntity__bool___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(
      &Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__,
      v37,
      v38,
      v39);
    sub_B5D5C4(&EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo, v40, v41, v42);
    byte_42E550C = 1;
  }
  v43 = (EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *)sub_B5D694(EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo);
  EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0___ctor(v43, 0LL);
  if ( !v43 )
    goto LABEL_25;
  v43->fields.eventId = eventId;
  v46 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v47 = **(_QWORD **)(v46 + 192);
  if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
    sub_AF52C4(v47);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v47 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                            (ServantPassiveSkillMaster_o *)MasterData_WarQuestSelectionMaster,
                                                                            svtId,
                                                                            0LL);
  v49 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v49,
    (Il2CppObject *)v43,
    Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_ServantPassiveSkillEntity__bool___ctor__);
  v50 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          ServantSkillList,
          (System_Func_TSource__bool__o *)v49,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
  v51 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
          v50,
          (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
  v52 = v51 ? HIDWORD(v51->fields.transactionId) : 0;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                              v52,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  v54 = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_WarQuestSelectionMaster, v52, 1, 0LL);
  if ( Entity )
  {
    v55 = v54;
    if ( v54 )
    {
      skillNameLabel = this->fields.skillNameLabel;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)SkillEntity__getName(Entity, 0LL);
      if ( skillNameLabel )
      {
        UILabel__set_text(skillNameLabel, (System_String_o *)MasterData_WarQuestSelectionMaster, 0LL);
        skillDetailLabel = this->fields.skillDetailLabel;
        Detail = SkillLvEntity__getDetail(v55, 0, 0LL);
        WrapControlText__textAdjust(skillDetailLabel, Detail, 22, 0, 0, 0LL);
        MasterData_WarQuestSelectionMaster = (DataManager_o *)this->fields.skillIcon;
        if ( MasterData_WarQuestSelectionMaster )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)MasterData_WarQuestSelectionMaster, v52, 0LL);
          return;
        }
      }
LABEL_25:
      sub_B5D69C(MasterData_WarQuestSelectionMaster, v45);
    }
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__SetUIPositon(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isEventPeriod,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *skill; // x20
  EventRewardAnotherPayConfirmDialog_c *v7; // x0
  __int64 v8; // x1
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  float WARN_LABEL_BASE_POS_Y; // s0
  UnityEngine_GameObject_o *v16; // x20
  EventRewardAnotherPayConfirmDialog_c *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  float DOWNER_LABEL_CHOICES_POS_Y; // s1
  UnityEngine_GameObject_o *v22; // x20
  EventRewardAnotherPayConfirmDialog_c *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v27; // x8
  float DOWNER_LABEL_RESULT_POS_Y; // s0
  UnityEngine_GameObject_o *v29; // x21
  EventRewardAnotherPayConfirmDialog_c *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  EventRewardAnotherPayConfirmDialog_c *v32; // x0
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_GameObject_o *v34; // x0

  if ( (byte_42E550D & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardAnotherPayConfirmDialog_TypeInfo, isEventPeriod, (_DWORD)method, v3);
    byte_42E550D = 1;
  }
  switch ( this->fields.state )
  {
    case 2:
      skill = this->fields.skill;
      v7 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v7 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(skill, v7->static_fields->SKILL_BASE_POS_Y, 0LL);
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
      v11 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v11,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_BASE_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v12 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v12,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_BASE_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v13 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = static_fields->WARN_LABEL_BASE_POS_Y;
      goto LABEL_20;
    case 3:
      v22 = this->fields.skill;
      v23 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v23 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v22, v23->static_fields->SKILL_CHOICES_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_42;
      v24 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v24,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v25 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v25,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_CHOICES_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v26 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v26,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v13 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      v27 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = v27->WARN_LABEL_CHOICES_POS_Y;
      DOWNER_LABEL_CHOICES_POS_Y = v27->DOWNER_LABEL_CHOICES_POS_Y;
      goto LABEL_29;
    case 4:
      v16 = this->fields.skill;
      v17 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v17 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v16, v17->static_fields->SKILL_PURCHASED_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_42;
      v18 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v18,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_PURCHASED_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v19 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v19,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_PURCHASED_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v20 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v20,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_PURCHASED_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v13 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = static_fields->WARN_LABEL_PURCHASED_POS_Y;
LABEL_20:
      DOWNER_LABEL_CHOICES_POS_Y = static_fields->DOWNER_LABEL_POS_Y;
LABEL_29:
      DOWNER_LABEL_RESULT_POS_Y = WARN_LABEL_BASE_POS_Y + DOWNER_LABEL_CHOICES_POS_Y;
      goto LABEL_30;
    case 5:
      v29 = this->fields.skill;
      v30 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v30 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v29, v30->static_fields->SKILL_RESULT_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !itemIcon )
        goto LABEL_42;
      v31 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v31,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->RESULT_LABEL_POS_Y,
        0LL);
      if ( isEventPeriod )
        return;
      v32 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v33 = this->fields.skill;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v32 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v33, v32->static_fields->SKILL_RESULT_END_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !itemIcon
        || (v34 = UnityEngine_Component__get_gameObject(itemIcon, 0LL),
            GameObjectExtensions__SetLocalPositionY(
              v34,
              EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->RESULT_LABEL_PERIOD_POS_Y,
              0LL),
            (itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel) == 0LL) )
      {
LABEL_42:
        sub_B5D69C(itemIcon, v8);
      }
      v13 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      DOWNER_LABEL_RESULT_POS_Y = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_POS_Y;
LABEL_30:
      GameObjectExtensions__SetLocalPositionY(v13, DOWNER_LABEL_RESULT_POS_Y, 0LL);
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
    sub_B5D69C(window, method);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5514 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42E5514 = 1;
  }
  return (System_String_o *)StringLiteral_15667/*"Window/CancelButton"*/;
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
    sub_B5D69C(this, 0LL);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}