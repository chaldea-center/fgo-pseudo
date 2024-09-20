void __fastcall EventRewardAnotherPayConfirmDialog___cctor(const MethodInfo *method)
{
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  EventRewardAnotherPayConfirmDialog_c *v2; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v3; // x10
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v4; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v5; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v6; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v7; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v8; // x8

  if ( (byte_4A5F360 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_4A5F360 = 1;
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
  v8 = v2->static_fields;
  *(_OWORD *)&v8->SKILL_BASE_POS_Y = xmmword_BB5180;
  *(_OWORD *)&v8->SKILL_RESULT_END_POS_Y = xmmword_BB47B0;
  *(_OWORD *)&v8->UPPER_LABEL_POS_Y = xmmword_BB4540;
  *(_OWORD *)&v8->WARN_LABEL_PURCHASED_POS_Y = xmmword_BB4A70;
  *(_QWORD *)&v8->RESULT_LABEL_POS_Y = 0x42F0000042C80000LL;
  *(_QWORD *)&v8->DOWNER_LABEL_FONT_SIZE = 0x1600000014LL;
}


void __fastcall EventRewardAnotherPayConfirmDialog___ctor(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5F35F & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5F35F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v6; // x1
  int64_t v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  Il2CppObject *v10; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  ServantLimitImageMaster_o *v13; // x20
  int32_t v14; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A5F35D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5F35D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !svtEntity )
    goto LABEL_24;
  v7 = UserId;
  v9 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v9;
  *(_QWORD *)&v17.fields.fakeValue = v8;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  if ( !Master_object )
    goto LABEL_24;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)Master_object,
          &entity,
          v7,
          UserId,
          0LL) )
  {
    v14 = -1;
    return ServantEntity__getName(svtEntity, v14, -1, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v12 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v13 = (ServantLimitImageMaster_o *)v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
  if ( !entity
    || !v13
    || (UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v13, UserId, entity->fields.maxLimitCount, 0LL),
        !entity) )
  {
LABEL_24:
    sub_1B8880C(UserId, v6);
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
  int32_t v4; // w2
  int32_t v5; // w3

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0LL), (itemIcon = (ItemIconComponent_o *)this->fields.skillIcon) == 0LL)
    || (SkillIconComponent__Clear((SkillIconComponent_o *)itemIcon, 0LL),
        (itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(itemIcon, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, 0, v4, v5);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickAnotherBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x8

  if ( (byte_4A5F35C & 1) == 0 )
  {
    sub_1B885B0(&Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    byte_4A5F35C = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1B8880C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      3LL,
      *(_QWORD *)&onDecide->fields.extra_arg);
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
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x8

  if ( (byte_4A5F359 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4A5F359 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mText = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    cancelLabel = this->fields.cancelLabel;
    if ( !cancelLabel )
      goto LABEL_13;
    v4 = mText;
    mText = cancelLabel->fields.mText;
    if ( !mText )
      goto LABEL_13;
    v6 = System_String__Equals_61715348(mText, v4, 0LL);
    v7 = Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B885C8(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, !v6, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
LABEL_13:
      sub_1B8880C(mText, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      0LL,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickDecide(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x8

  if ( (byte_4A5F35A & 1) == 0 )
  {
    sub_1B885B0(&Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    byte_4A5F35A = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1B8880C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      1LL,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickNormalBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x8

  if ( (byte_4A5F35B & 1) == 0 )
  {
    sub_1B885B0(&Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    byte_4A5F35B = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1B8880C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      2LL,
      *(_QWORD *)&onDecide->fields.extra_arg);
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
  DataManager_o *AnotherPayItemIds; // x0
  __int64 v13; // x1
  int32_t v14; // w24
  Il2CppObject *v15; // x21
  ServantEntity_o *v16; // x25
  int32_t v17; // w8
  int32_t eventId; // w24
  __int64 v19; // x26
  __int64 v20; // x27
  int32_t v21; // w0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  EventRewardAnotherPayConfirmDialog_o *v24; // x0
  const MethodInfo *v25; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  UILabel_o *warnLabel; // x26
  Il2CppObject *v29; // x25
  System_String_o *v30; // x27
  Il2CppObject *AnotherPayName; // x0
  UILabel_o *downerLabel; // x26
  UILabel_o *titleLabel; // x26
  System_String_o *v34; // x22
  Il2CppObject *v35; // x0
  UILabel_o *v36; // x22
  System_String_o *v37; // x23
  Il2CppObject *v38; // x0
  struct UILabel_o *v39; // x22
  System_String_o *v40; // x23
  Il2CppObject *v41; // x0
  System_String_o *v42; // x1
  UILabel_o *v43; // x0
  System_String_o *v44; // x27
  Il2CppObject *v45; // x0
  UILabel_o *v46; // x26
  System_String_o *v47; // x0
  struct UILabel_o *upperLabel; // x26
  System_String_o *v49; // x0
  System_String_o *v50; // x23
  char v51; // w2
  int32_t v52; // w3
  Il2CppObject *monitor; // x28
  System_Object_array *v54; // x27
  char v55; // w2
  int32_t v56; // w3
  char v57; // w2
  int32_t v58; // w3
  char v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x22
  const MethodInfo *v62; // x1
  EventRewardAnotherPayConfirmDialog_c *v63; // x0
  const MethodInfo *v64; // x3
  System_Action_o *v65; // x20
  __int64 v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4A5F354 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__);
    sub_1B885B0(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_2084/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/);
    sub_1B885B0(&StringLiteral_2083/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/);
    sub_1B885B0(&StringLiteral_2077/*"ANOTHER_PAY_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_2079/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/);
    sub_1B885B0(&StringLiteral_2082/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/);
    sub_1B885B0(&StringLiteral_2080/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/);
    sub_1B885B0(&StringLiteral_2078/*"ANOTHER_PAY_INFO_TITLE"*/);
    sub_1B885B0(&StringLiteral_2081/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/);
    byte_4A5F354 = 1;
  }
  p_onDecide = &this->fields.onDecide;
  this->fields.onDecide = onDecide;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onDecide,
    (int32_t)onDecide,
    isChoices,
    (int32_t)onDecide);
  if ( !entity )
    goto LABEL_65;
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    AnotherPayItemIds = (DataManager_o *)ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !AnotherPayItemIds )
      goto LABEL_65;
    if ( !LODWORD(AnotherPayItemIds->fields.m_CancellationTokenSource) )
      goto LABEL_66;
    v14 = *(_DWORD *)&AnotherPayItemIds->fields._DispLog;
  }
  else
  {
    v14 = 0;
  }
  AnotherPayItemIds = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  AnotherPayItemIds = (DataManager_o *)DataManager__GetMasterData_object_(
                                         AnotherPayItemIds,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  v15 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)AnotherPayItemIds,
          v14,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  AnotherPayItemIds = (DataManager_o *)ShopEntity__GetRelateServantEntity(entity, 0LL);
  if ( !v15 || (v16 = (ServantEntity_o *)AnotherPayItemIds) == 0LL )
  {
    if ( *p_onDecide )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))(*p_onDecide)->fields.m_target)(
        (*p_onDecide)->fields.original_method_info,
        2LL,
        *(_QWORD *)&(*p_onDecide)->fields.extra_arg);
      return;
    }
LABEL_65:
    sub_1B8880C(AnotherPayItemIds, v13);
  }
  AnotherPayItemIds = (DataManager_o *)this->fields.itemIcon;
  if ( isReconfirm )
    v17 = 2;
  else
    v17 = 4;
  if ( isChoices )
    v17 = 3;
  this->fields.state = v17;
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  AnotherPayItemIds = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)AnotherPayItemIds,
                                         0LL);
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnotherPayItemIds, 1, 0LL);
  AnotherPayItemIds = (DataManager_o *)this->fields.itemIcon;
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  ItemIconComponent__SetItem((ItemIconComponent_o *)AnotherPayItemIds, v14, -1, 0LL);
  eventId = entity->fields.eventId;
  v20 = *(_QWORD *)&v16->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v16->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v67.fields.currentCryptoKey = v20;
  *(_QWORD *)&v67.fields.fakeValue = v19;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v67, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v21, v22);
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, 1, v23);
  AnotherPayItemIds = (DataManager_o *)this->fields.resultLabel;
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  UILabel__set_text((UILabel_o *)AnotherPayItemIds, string_TypeInfo->static_fields->Empty, 0LL);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v24, v16, v25);
  ClassName = ServantEntity__getClassName(v16, 0LL);
  warnLabel = this->fields.warnLabel;
  v29 = (Il2CppObject *)ClassName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2083/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, 0LL);
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v15, 0LL);
  AnotherPayItemIds = (DataManager_o *)System_String__Format(v30, AnotherPayName, 0LL);
  if ( !warnLabel )
    goto LABEL_65;
  UILabel__set_text(warnLabel, (System_String_o *)AnotherPayItemIds, 0LL);
  downerLabel = this->fields.downerLabel;
  AnotherPayItemIds = (DataManager_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
  if ( !downerLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    downerLabel,
    EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_FONT_SIZE,
    0LL);
  titleLabel = this->fields.titleLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isChoices )
      goto LABEL_32;
LABEL_39:
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2077/*"ANOTHER_PAY_CONFIRM_TITLE"*/, 0LL);
    v45 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v15, 0LL);
    AnotherPayItemIds = (DataManager_o *)System_String__Format(v44, v45, 0LL);
    if ( !titleLabel )
      goto LABEL_65;
    UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
    v46 = this->fields.downerLabel;
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2082/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, 0LL);
    AnotherPayItemIds = (DataManager_o *)System_String__Format(v47, (Il2CppObject *)v15[1].monitor, 0LL);
    if ( !v46 )
      goto LABEL_65;
    UILabel__set_text(v46, (System_String_o *)AnotherPayItemIds, 0LL);
    upperLabel = this->fields.upperLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isReconfirm )
        goto LABEL_43;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isReconfirm )
      {
LABEL_43:
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2084/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, 0LL);
        AnotherPayItemIds = (DataManager_o *)System_String__Format_61721472(
                                               v49,
                                               (Il2CppObject *)v15[1].monitor,
                                               v29,
                                               Name,
                                               0LL);
        if ( !upperLabel )
          goto LABEL_65;
        goto LABEL_60;
      }
    }
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2081/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, 0LL);
    AnotherPayItemIds = (DataManager_o *)sub_1B88658(object___TypeInfo, 4LL);
    if ( !AnotherPayItemIds )
      goto LABEL_65;
    monitor = (Il2CppObject *)v15[1].monitor;
    v54 = (System_Object_array *)AnotherPayItemIds;
    if ( monitor )
    {
      AnotherPayItemIds = (DataManager_o *)sub_1B886EC(v15[1].monitor, AnotherPayItemIds->klass->_1.element_class);
      if ( !AnotherPayItemIds )
        goto LABEL_67;
    }
    if ( !v54->max_length )
      goto LABEL_66;
    v54->m_Items[0] = monitor;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v54->m_Items, (int32_t)monitor, v51, v52);
    if ( v29 )
    {
      AnotherPayItemIds = (DataManager_o *)sub_1B886EC(v29, v54->obj.klass->_1.element_class);
      if ( !AnotherPayItemIds )
        goto LABEL_67;
    }
    if ( v54->max_length <= 1 )
      goto LABEL_66;
    v54->m_Items[1] = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->m_Items[1], (int32_t)v29, v55, v56);
    if ( Name )
    {
      AnotherPayItemIds = (DataManager_o *)sub_1B886EC(Name, v54->obj.klass->_1.element_class);
      if ( !AnotherPayItemIds )
        goto LABEL_67;
    }
    if ( v54->max_length <= 2 )
      goto LABEL_66;
    v54->m_Items[2] = Name;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->m_Items[2], (int32_t)Name, v57, v58);
    AnotherPayItemIds = (DataManager_o *)ShopEntity__getName(entity, 0LL);
    v61 = (Il2CppObject *)AnotherPayItemIds;
    if ( AnotherPayItemIds )
    {
      AnotherPayItemIds = (DataManager_o *)sub_1B886EC(AnotherPayItemIds, v54->obj.klass->_1.element_class);
      if ( !AnotherPayItemIds )
      {
LABEL_67:
        v66 = sub_1B88830(AnotherPayItemIds);
        sub_1B886D8(v66, 0LL);
      }
    }
    if ( v54->max_length > 3 )
    {
      v54->m_Items[3] = v61;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->m_Items[3], (int32_t)v61, v59, v60);
      AnotherPayItemIds = (DataManager_o *)System_String__Format_61721540(v50, v54, 0LL);
      if ( !upperLabel )
        goto LABEL_65;
LABEL_60:
      v42 = (System_String_o *)AnotherPayItemIds;
      v43 = upperLabel;
      goto LABEL_61;
    }
LABEL_66:
    sub_1B88814(AnotherPayItemIds, v13);
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !isChoices )
    goto LABEL_39;
LABEL_32:
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2078/*"ANOTHER_PAY_INFO_TITLE"*/, 0LL);
  v35 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v15, 0LL);
  AnotherPayItemIds = (DataManager_o *)System_String__Format(v34, v35, 0LL);
  if ( !titleLabel )
    goto LABEL_65;
  UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
  v36 = this->fields.upperLabel;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2079/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0LL);
  v38 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v15, 0LL);
  AnotherPayItemIds = (DataManager_o *)System_String__Format(v37, v38, 0LL);
  if ( !v36 )
    goto LABEL_65;
  UILabel__set_text(v36, (System_String_o *)AnotherPayItemIds, 0LL);
  v39 = this->fields.downerLabel;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2080/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0LL);
  v41 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v15, 0LL);
  AnotherPayItemIds = (DataManager_o *)System_String__Format(v40, v41, 0LL);
  if ( !v39 )
    goto LABEL_65;
  v42 = (System_String_o *)AnotherPayItemIds;
  v43 = v39;
LABEL_61:
  UILabel__set_text(v43, v42, 0LL);
  v63 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v63 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v63->static_fields->CONFIRM_WINDOW_SIZE, v62);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, isChoices, (ItemEntity_o *)v15, v64);
  AnotherPayItemIds = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnotherPayItemIds, 1, 0LL);
  v65 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v65, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v65, 0, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OpenResult(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *entity,
        bool isAnotherItemOnly,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide,
        const MethodInfo *method)
{
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x23
  void *itemIcon; // x0
  __int64 v11; // x1
  ServantEntity_o *v12; // x22
  int32_t eventId; // w23
  __int64 v14; // x24
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
  Il2CppObject *v31; // x0
  const MethodInfo *v32; // x2
  bool v33; // w1
  UILabel_o *v34; // x21
  UILabel_o *v35; // x21
  const MethodInfo *v36; // x1
  EventRewardAnotherPayConfirmDialog_c *v37; // x0
  int32_t v38; // w20
  Il2CppObject *v39; // x0
  const MethodInfo *v40; // x3
  System_Action_o *v41; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4A5F355 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__);
    sub_1B885B0(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_2087/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/);
    sub_1B885B0(&StringLiteral_2086/*"ANOTHER_PAY_PERIOD_END_MSG"*/);
    sub_1B885B0(&StringLiteral_2088/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/);
    byte_4A5F355 = 1;
  }
  p_onDecide = &this->fields.onDecide;
  this->fields.onDecide = onDecide;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onDecide,
    (int32_t)onDecide,
    isAnotherItemOnly,
    (int32_t)onDecide);
  if ( !entity )
  {
    if ( *p_onDecide )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))(*p_onDecide)->fields.m_target)(
        (*p_onDecide)->fields.original_method_info,
        0LL,
        *(_QWORD *)&(*p_onDecide)->fields.extra_arg);
      return;
    }
    goto LABEL_44;
  }
  itemIcon = this->fields.itemIcon;
  this->fields.state = 5;
  if ( !itemIcon )
    goto LABEL_44;
  itemIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemIcon, 0LL);
  if ( !itemIcon )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
  itemIcon = ShopEntity__GetRelateServantEntity(entity, 0LL);
  if ( !itemIcon )
    goto LABEL_44;
  v12 = (ServantEntity_o *)itemIcon;
  eventId = entity->fields.eventId;
  v15 = *((_QWORD *)itemIcon + 2);
  v14 = *((_QWORD *)itemIcon + 3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v15;
  *(_QWORD *)&v42.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v42, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v16, v17);
  itemIcon = this->fields.warnLabel;
  if ( !itemIcon )
    goto LABEL_44;
  titleLabel = this->fields.titleLabel;
  upperLabel = this->fields.upperLabel;
  downerLabel = this->fields.downerLabel;
  Empty = string_TypeInfo->static_fields->Empty;
  UILabel__set_text((UILabel_o *)itemIcon, Empty, 0LL);
  if ( !downerLabel )
    goto LABEL_44;
  UILabel__set_text(downerLabel, Empty, 0LL);
  if ( !upperLabel )
    goto LABEL_44;
  UILabel__set_text(upperLabel, Empty, 0LL);
  if ( !titleLabel )
    goto LABEL_44;
  UILabel__set_text(titleLabel, Empty, 0LL);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v22, v12, v23);
  ClassName = ServantEntity__getClassName(v12, 0LL);
  resultLabel = this->fields.resultLabel;
  v27 = (Il2CppObject *)ClassName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isAnotherItemOnly )
      goto LABEL_15;
LABEL_19:
    v28 = &StringLiteral_2088/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
    goto LABEL_20;
  }
  if ( !isAnotherItemOnly )
    goto LABEL_19;
LABEL_15:
  v28 = &StringLiteral_2087/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
LABEL_20:
  v29 = LocalizationManager__Get((System_String_o *)*v28, 0LL);
  v30 = (Il2CppObject *)ShopEntity__getName(entity, 0LL);
  itemIcon = System_String__Format_61721472(v29, v30, v27, Name, 0LL);
  if ( !resultLabel )
    goto LABEL_44;
  UILabel__set_text(resultLabel, (System_String_o *)itemIcon, 0LL);
  itemIcon = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon )
    goto LABEL_44;
  itemIcon = DataManager__GetMasterData_object_(
               (DataManager_o *)itemIcon,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !itemIcon )
    goto LABEL_44;
  v31 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)itemIcon,
          entity->fields.eventId,
          (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( v31 && !EventEntity__IsEventPeriod((EventEntity_o *)v31, 0LL, 0LL) )
  {
    v34 = this->fields.downerLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemIcon = LocalizationManager__Get((System_String_o *)StringLiteral_2086/*"ANOTHER_PAY_PERIOD_END_MSG"*/, 0LL);
    if ( !v34 )
      goto LABEL_44;
    UILabel__set_text(v34, (System_String_o *)itemIcon, 0LL);
    itemIcon = EventRewardAnotherPayConfirmDialog_TypeInfo;
    v35 = this->fields.downerLabel;
    if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    if ( !v35 )
      goto LABEL_44;
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
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v37 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v37->static_fields->RESULT_WINDOW_SIZE, v36);
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    itemIcon = ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !itemIcon )
      goto LABEL_44;
    if ( !*((_DWORD *)itemIcon + 6) )
      sub_1B88814(itemIcon, v11);
    v38 = *((_DWORD *)itemIcon + 8);
  }
  else
  {
    v38 = 0;
  }
  itemIcon = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon
    || (itemIcon = DataManager__GetMasterData_object_(
                     (DataManager_o *)itemIcon,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (v39 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)itemIcon,
                v38,
                (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, 0, (ItemEntity_o *)v39, v40),
        (itemIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_44:
    sub_1B8880C(itemIcon, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
  v41 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
  UnityEngine_GameObject_o *v17; // x19
  EventRewardAnotherPayConfirmDialog_c *v18; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v19; // x9
  _QWORD *p_x; // x8
  int *p_z; // x9
  UnityEngine_GameObject_o *gameObject; // x20
  EventRewardAnotherPayConfirmDialog_c *v23; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x9
  UnityEngine_GameObject_o *v25; // x21
  EventRewardAnotherPayConfirmDialog_c *v26; // x8
  UnityEngine_GameObject_o *v27; // x0
  EventRewardAnotherPayConfirmDialog_c *v28; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v29; // x9
  UnityEngine_GameObject_o *v30; // x0
  EventRewardAnotherPayConfirmDialog_c *v31; // x8
  __int64 v32; // d0 OVERLAPPED
  int v33; // s2
  int v34; // s1

  if ( (byte_4A5F358 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9302/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/);
    sub_1B885B0(&StringLiteral_2076/*"ANOTHER_PAY_ANOTHER_BUY"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_2085/*"ANOTHER_PAY_NORMAL_BUY"*/);
    byte_4A5F358 = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_48;
  UILabel__set_text(cancelLabel, decideButton, 0LL);
  decideLabel = this->fields.decideLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_9302/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_48;
  UILabel__set_text(decideLabel, decideButton, 0LL);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_2085/*"ANOTHER_PAY_NORMAL_BUY"*/, 0LL);
  if ( !normalBuyLabel )
    goto LABEL_48;
  UILabel__set_text(normalBuyLabel, decideButton, 0LL);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_2076/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0LL);
  if ( !itemEntity )
    goto LABEL_48;
  v13 = decideButton;
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0LL);
  decideButton = System_String__Format(v13, AnotherPayName, 0LL);
  if ( !anotherBuyLabel )
    goto LABEL_48;
  UILabel__set_text(anotherBuyLabel, decideButton, 0LL);
  state = this->fields.state;
  if ( state == 4 )
  {
    decideButton = (System_String_o *)this->fields.decideButton;
    if ( decideButton )
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
          decideButton = (System_String_o *)this->fields.decideButton;
          if ( decideButton )
          {
            gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
            v23 = EventRewardAnotherPayConfirmDialog_TypeInfo;
            if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
              v23 = EventRewardAnotherPayConfirmDialog_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition(gameObject, v23->static_fields->DECIDE_BUTTON_PURCHASED_POS, 0LL);
            decideButton = (System_String_o *)this->fields.cancelButton;
            if ( decideButton )
            {
              v17 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
              static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
              p_x = (_QWORD *)&static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.x;
              p_z = (int *)&static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.z;
              goto LABEL_47;
            }
          }
        }
      }
    }
    goto LABEL_48;
  }
  if ( state == 5 )
  {
    v16 = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
              v17 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
              v18 = EventRewardAnotherPayConfirmDialog_TypeInfo;
              if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                v18 = EventRewardAnotherPayConfirmDialog_TypeInfo;
              }
              v19 = v18->static_fields;
              p_x = (_QWORD *)&v19->CANCEL_BUTTON_RESULT_POS.fields.x;
              p_z = (int *)&v19->CANCEL_BUTTON_RESULT_POS.fields.z;
              goto LABEL_47;
            }
          }
        }
      }
    }
LABEL_48:
    sub_1B8880C(decideButton, v9);
  }
  decideButton = (System_String_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_48;
  v25 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
  v26 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v26 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v25, v26->static_fields->DECIDE_BUTTON_BASE_POS, 0LL);
  decideButton = (System_String_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_48;
  if ( isChoices )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
    decideButton = (System_String_o *)this->fields.normalBuyButton;
    if ( !decideButton )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0LL);
    decideButton = (System_String_o *)this->fields.anotherBuyButton;
    if ( !decideButton )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0LL);
    decideButton = (System_String_o *)this->fields.cancelButton;
    if ( !decideButton )
      goto LABEL_48;
    v27 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
    v28 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    v17 = v27;
    if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
      v28 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    }
    v29 = v28->static_fields;
    p_x = (_QWORD *)&v29->CANCEL_BUTTON_CHOICES_POS.fields.x;
    p_z = (int *)&v29->CANCEL_BUTTON_CHOICES_POS.fields.z;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0LL);
    decideButton = (System_String_o *)this->fields.normalBuyButton;
    if ( !decideButton )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
    decideButton = (System_String_o *)this->fields.anotherBuyButton;
    if ( !decideButton )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0LL);
    decideButton = (System_String_o *)this->fields.cancelButton;
    if ( !decideButton )
      goto LABEL_48;
    v30 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
    v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    v17 = v30;
    if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
      v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    }
    p_x = (_QWORD *)&v31->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
    p_z = (int *)(p_x + 1);
  }
LABEL_47:
  v32 = *p_x;
  v33 = *p_z;
  v34 = HIDWORD(*p_x);
  GameObjectExtensions__SetLocalPosition(v17, *(UnityEngine_Vector3_o *)&v32, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(
        EventRewardAnotherPayConfirmDialog_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x21
  DataManager_o *MasterData_object; // x0
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  System_Func_object__bool__o *v13; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  Il2CppObject *v15; // x0
  int32_t v16; // w20
  Il2CppObject *Entity; // x21
  SkillLvEntity_o *v18; // x0
  SkillLvEntity_o *v19; // x22
  UILabel_o *skillNameLabel; // x23
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0

  if ( (byte_4A5F356 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
    sub_1B885B0(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__);
    sub_1B885B0(&EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo);
    byte_4A5F356 = 1;
  }
  v7 = sub_1B887FC(EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_24;
  *(_DWORD *)(v7 + 16) = eventId;
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BDA48C(v11);
  MasterData_object = **(DataManager_o ***)(v11 + 184);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                            (ServantPassiveSkillMaster_o *)MasterData_object,
                                                                            svtId,
                                                                            0LL);
  v13 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          ServantSkillList,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
  v15 = System_Linq_Enumerable__FirstOrDefault_object_(
          v14,
          (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
  v16 = v15 ? HIDWORD(v15[1].monitor) : 0;
  MasterData_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             v16,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  MasterData_object = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  v18 = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v16, 1, 0LL);
  if ( Entity )
  {
    v19 = v18;
    if ( v18 )
    {
      skillNameLabel = this->fields.skillNameLabel;
      MasterData_object = (DataManager_o *)SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
      if ( skillNameLabel )
      {
        UILabel__set_text(skillNameLabel, (System_String_o *)MasterData_object, 0LL);
        skillDetailLabel = this->fields.skillDetailLabel;
        Detail = SkillLvEntity__getDetail(v19, 0, 0LL);
        WrapControlText__textAdjust(skillDetailLabel, Detail, 22, 0, 0, 0LL);
        MasterData_object = (DataManager_o *)this->fields.skillIcon;
        if ( MasterData_object )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)MasterData_object, v16, 0LL);
          return;
        }
      }
LABEL_24:
      sub_1B8880C(MasterData_object, v9);
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
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v20; // x8
  float DOWNER_LABEL_CHOICES_POS_Y; // s1
  UnityEngine_GameObject_o *v22; // x20
  EventRewardAnotherPayConfirmDialog_c *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  float DOWNER_LABEL_RESULT_POS_Y; // s0
  UnityEngine_GameObject_o *v28; // x21
  EventRewardAnotherPayConfirmDialog_c *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  EventRewardAnotherPayConfirmDialog_c *v31; // x0
  UnityEngine_GameObject_o *v32; // x20
  UnityEngine_GameObject_o *v33; // x0

  if ( (byte_4A5F357 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_4A5F357 = 1;
  }
  switch ( this->fields.state )
  {
    case 2:
      skill = this->fields.skill;
      v6 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v6 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(skill, v6->static_fields->SKILL_BASE_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_37;
      gameObject = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        gameObject,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_BASE_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v10 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v10,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_BASE_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v11 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v11,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_BASE_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v12 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = static_fields->WARN_LABEL_BASE_POS_Y;
      goto LABEL_25;
    case 3:
      v15 = this->fields.skill;
      v16 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v16 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v15, v16->static_fields->SKILL_CHOICES_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_37;
      v17 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v17,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v18 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v18,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_CHOICES_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v19 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v19,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v12 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      v20 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = v20->WARN_LABEL_CHOICES_POS_Y;
      DOWNER_LABEL_CHOICES_POS_Y = v20->DOWNER_LABEL_CHOICES_POS_Y;
      goto LABEL_26;
    case 4:
      v22 = this->fields.skill;
      v23 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v23 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v22, v23->static_fields->SKILL_PURCHASED_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_37;
      v24 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v24,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_PURCHASED_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v25 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v25,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_PURCHASED_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v26 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v26,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_PURCHASED_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v12 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = static_fields->WARN_LABEL_PURCHASED_POS_Y;
LABEL_25:
      DOWNER_LABEL_CHOICES_POS_Y = static_fields->DOWNER_LABEL_POS_Y;
LABEL_26:
      DOWNER_LABEL_RESULT_POS_Y = WARN_LABEL_BASE_POS_Y + DOWNER_LABEL_CHOICES_POS_Y;
      goto LABEL_27;
    case 5:
      v28 = this->fields.skill;
      v29 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v29 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v28, v29->static_fields->SKILL_RESULT_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v30 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v30,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->RESULT_LABEL_POS_Y,
        0LL);
      if ( isEventPeriod )
        return;
      v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v32 = this->fields.skill;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
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
LABEL_37:
        sub_1B8880C(itemIcon, v7);
      }
      v12 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      DOWNER_LABEL_RESULT_POS_Y = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_POS_Y;
LABEL_27:
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
  int32_t x; // w1
  int32_t v7; // w1

  window = this->fields.window;
  if ( !window
    || ((y = size.fields.y, size.fields.x != INFINITY) ? (x = (int)size.fields.x) : (x = 0x80000000),
        UIWidget__set_width(window, x, 0LL),
        (window = this->fields.window) == 0LL) )
  {
    sub_1B8880C(window, method);
  }
  if ( y == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)y;
  UIWidget__set_height(window, v7, 0LL);
}


System_String_o *__fastcall EventRewardAnotherPayConfirmDialog__get_closeBtnPath(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5F35E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15641/*"Window/CancelButton"*/);
    byte_4A5F35E = 1;
  }
  return (System_String_o *)StringLiteral_15641/*"Window/CancelButton"*/;
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
    sub_1B8880C(this, 0LL);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}