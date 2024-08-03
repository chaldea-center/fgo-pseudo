void __fastcall EventRewardAnotherPayConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  EventRewardAnotherPayConfirmDialog_c *v3; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v4; // x10
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v5; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v6; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v7; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v8; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v9; // x8

  if ( (byte_4A00574 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardAnotherPayConfirmDialog_TypeInfo, v1);
    byte_4A00574 = 1;
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
  v9 = v3->static_fields;
  *(_OWORD *)&v9->SKILL_BASE_POS_Y = xmmword_BA3990;
  *(_OWORD *)&v9->SKILL_RESULT_END_POS_Y = xmmword_BA2FB0;
  *(_OWORD *)&v9->UPPER_LABEL_POS_Y = xmmword_BA2D40;
  *(_OWORD *)&v9->WARN_LABEL_PURCHASED_POS_Y = xmmword_BA3280;
  *(_QWORD *)&v9->RESULT_LABEL_POS_Y = 0x42F0000042C80000LL;
  *(_QWORD *)&v9->DOWNER_LABEL_FONT_SIZE = 0x1600000014LL;
}


void __fastcall EventRewardAnotherPayConfirmDialog___ctor(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A00573 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_4A00573 = 1;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  int64_t v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  Il2CppObject *v13; // x0
  __int64 v14; // x21
  __int64 v15; // x22
  ServantLimitImageMaster_o *v16; // x20
  int32_t v17; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A00571 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, svtEntity);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A00571 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !svtEntity )
    goto LABEL_24;
  v10 = UserId;
  v12 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20, 0LL);
  if ( !Master_object )
    goto LABEL_24;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)Master_object,
          &entity,
          v10,
          UserId,
          0LL) )
  {
    v17 = -1;
    return ServantEntity__getName(svtEntity, v17, -1, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v13 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v15 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v16 = (ServantLimitImageMaster_o *)v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v21, 0LL);
  if ( !entity
    || !v16
    || (UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, UserId, entity->fields.maxLimitCount, 0LL),
        !entity) )
  {
LABEL_24:
    sub_1B64324(UserId);
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
  int32_t v4; // w2
  int32_t v5; // w3

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0LL), (itemIcon = (ItemIconComponent_o *)this->fields.skillIcon) == 0LL)
    || (SkillIconComponent__Clear((SkillIconComponent_o *)itemIcon, 0LL),
        (itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64324(itemIcon);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, 0, v4, v5);
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
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x8

  if ( (byte_4A00570 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__, method);
    byte_4A00570 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1B64324(v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *mText; // x0
  struct UILabel_o *cancelLabel; // x8
  System_String_o *v7; // x1
  bool v8; // w20
  _QWORD *v9; // x8
  System_Reflection_MethodBase_o *v10; // x0
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x8

  if ( (byte_4A0056D & 1) == 0 )
  {
    sub_1B640C8(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v4);
    byte_4A0056D = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mText = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    cancelLabel = this->fields.cancelLabel;
    if ( !cancelLabel )
      goto LABEL_13;
    v7 = mText;
    mText = cancelLabel->fields.mText;
    if ( !mText )
      goto LABEL_13;
    v8 = System_String__Equals_61383712(mText, v7, 0LL);
    v9 = Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B640E0(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, !v8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
LABEL_13:
      sub_1B64324(mText);
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
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x8

  if ( (byte_4A0056E & 1) == 0 )
  {
    sub_1B640C8(&Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__, method);
    byte_4A0056E = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1B64324(v5);
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
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x8

  if ( (byte_4A0056F & 1) == 0 )
  {
    sub_1B640C8(&Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__, method);
    byte_4A0056F = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1B64324(v5);
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
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x26
  DataManager_o *AnotherPayItemIds; // x0
  __int64 v30; // x1
  int32_t v31; // w24
  Il2CppObject *v32; // x21
  ServantEntity_o *v33; // x25
  int32_t v34; // w8
  int32_t eventId; // w24
  __int64 v36; // x26
  __int64 v37; // x27
  int32_t v38; // w0
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x2
  EventRewardAnotherPayConfirmDialog_o *v41; // x0
  const MethodInfo *v42; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  UILabel_o *warnLabel; // x26
  Il2CppObject *v46; // x25
  System_String_o *v47; // x27
  Il2CppObject *AnotherPayName; // x0
  UILabel_o *downerLabel; // x26
  UILabel_o *titleLabel; // x26
  System_String_o *v51; // x22
  Il2CppObject *v52; // x0
  UILabel_o *v53; // x22
  System_String_o *v54; // x23
  Il2CppObject *v55; // x0
  struct UILabel_o *v56; // x22
  System_String_o *v57; // x23
  Il2CppObject *v58; // x0
  System_String_o *v59; // x1
  UILabel_o *v60; // x0
  System_String_o *v61; // x27
  Il2CppObject *v62; // x0
  UILabel_o *v63; // x26
  System_String_o *v64; // x0
  struct UILabel_o *upperLabel; // x26
  System_String_o *v66; // x0
  System_String_o *v67; // x23
  char v68; // w2
  int32_t v69; // w3
  Il2CppObject *monitor; // x28
  System_Object_array *v71; // x27
  char v72; // w2
  int32_t v73; // w3
  char v74; // w2
  int32_t v75; // w3
  char v76; // w2
  int32_t v77; // w3
  Il2CppObject *v78; // x22
  const MethodInfo *v79; // x1
  EventRewardAnotherPayConfirmDialog_c *v80; // x0
  const MethodInfo *v81; // x3
  __int64 v82; // x1
  __int64 v83; // x2
  System_Action_o *v84; // x20
  __int64 v85; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4A00568 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, entity);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__, v13);
    sub_1B640C8(&EventRewardAnotherPayConfirmDialog_TypeInfo, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&object___TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&string_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_2086/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, v20);
    sub_1B640C8(&StringLiteral_2085/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, v21);
    sub_1B640C8(&StringLiteral_2079/*"ANOTHER_PAY_CONFIRM_TITLE"*/, v22);
    sub_1B640C8(&StringLiteral_2081/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, v23);
    sub_1B640C8(&StringLiteral_2084/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, v24);
    sub_1B640C8(&StringLiteral_2082/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, v25);
    sub_1B640C8(&StringLiteral_2080/*"ANOTHER_PAY_INFO_TITLE"*/, v26);
    sub_1B640C8(&StringLiteral_2083/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, v27);
    byte_4A00568 = 1;
  }
  p_onDecide = &this->fields.onDecide;
  this->fields.onDecide = onDecide;
  sub_1B6406C(
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
    v31 = *(_DWORD *)&AnotherPayItemIds->fields._DispLog;
  }
  else
  {
    v31 = 0;
  }
  AnotherPayItemIds = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  AnotherPayItemIds = (DataManager_o *)DataManager__GetMasterData_object_(
                                         AnotherPayItemIds,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  v32 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)AnotherPayItemIds,
          v31,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  AnotherPayItemIds = (DataManager_o *)ShopEntity__GetRelateServantEntity(entity, 0LL);
  if ( !v32 || (v33 = (ServantEntity_o *)AnotherPayItemIds) == 0LL )
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
    sub_1B64324(AnotherPayItemIds);
  }
  AnotherPayItemIds = (DataManager_o *)this->fields.itemIcon;
  if ( isReconfirm )
    v34 = 2;
  else
    v34 = 4;
  if ( isChoices )
    v34 = 3;
  this->fields.state = v34;
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
  ItemIconComponent__SetItem((ItemIconComponent_o *)AnotherPayItemIds, v31, -1, 0LL);
  eventId = entity->fields.eventId;
  v37 = *(_QWORD *)&v33->fields.id.fields.currentCryptoKey;
  v36 = *(_QWORD *)&v33->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v37;
  *(_QWORD *)&v86.fields.fakeValue = v36;
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v86, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v38, v39);
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, 1, v40);
  AnotherPayItemIds = (DataManager_o *)this->fields.resultLabel;
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  UILabel__set_text((UILabel_o *)AnotherPayItemIds, string_TypeInfo->static_fields->Empty, 0LL);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v41, v33, v42);
  ClassName = ServantEntity__getClassName(v33, 0LL);
  warnLabel = this->fields.warnLabel;
  v46 = (Il2CppObject *)ClassName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2085/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, 0LL);
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v32, 0LL);
  AnotherPayItemIds = (DataManager_o *)System_String__Format(v47, AnotherPayName, 0LL);
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
    v61 = LocalizationManager__Get((System_String_o *)StringLiteral_2079/*"ANOTHER_PAY_CONFIRM_TITLE"*/, 0LL);
    v62 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v32, 0LL);
    AnotherPayItemIds = (DataManager_o *)System_String__Format(v61, v62, 0LL);
    if ( !titleLabel )
      goto LABEL_65;
    UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
    v63 = this->fields.downerLabel;
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_2084/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, 0LL);
    AnotherPayItemIds = (DataManager_o *)System_String__Format(v64, (Il2CppObject *)v32[1].monitor, 0LL);
    if ( !v63 )
      goto LABEL_65;
    UILabel__set_text(v63, (System_String_o *)AnotherPayItemIds, 0LL);
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
        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_2086/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, 0LL);
        AnotherPayItemIds = (DataManager_o *)System_String__Format_61389836(
                                               v66,
                                               (Il2CppObject *)v32[1].monitor,
                                               v46,
                                               Name,
                                               0LL);
        if ( !upperLabel )
          goto LABEL_65;
        goto LABEL_60;
      }
    }
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_2083/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, 0LL);
    AnotherPayItemIds = (DataManager_o *)sub_1B64170(object___TypeInfo, 4LL);
    if ( !AnotherPayItemIds )
      goto LABEL_65;
    monitor = (Il2CppObject *)v32[1].monitor;
    v71 = (System_Object_array *)AnotherPayItemIds;
    if ( monitor )
    {
      AnotherPayItemIds = (DataManager_o *)sub_1B64204(v32[1].monitor, AnotherPayItemIds->klass->_1.element_class);
      if ( !AnotherPayItemIds )
        goto LABEL_67;
    }
    if ( !v71->max_length )
      goto LABEL_66;
    v71->m_Items[0] = monitor;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v71->m_Items, (int32_t)monitor, v68, v69);
    if ( v46 )
    {
      AnotherPayItemIds = (DataManager_o *)sub_1B64204(v46, v71->obj.klass->_1.element_class);
      if ( !AnotherPayItemIds )
        goto LABEL_67;
    }
    if ( v71->max_length <= 1 )
      goto LABEL_66;
    v71->m_Items[1] = v46;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v71->m_Items[1], (int32_t)v46, v72, v73);
    if ( Name )
    {
      AnotherPayItemIds = (DataManager_o *)sub_1B64204(Name, v71->obj.klass->_1.element_class);
      if ( !AnotherPayItemIds )
        goto LABEL_67;
    }
    if ( v71->max_length <= 2 )
      goto LABEL_66;
    v71->m_Items[2] = Name;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v71->m_Items[2], (int32_t)Name, v74, v75);
    AnotherPayItemIds = (DataManager_o *)ShopEntity__getName(entity, 0LL);
    v78 = (Il2CppObject *)AnotherPayItemIds;
    if ( AnotherPayItemIds )
    {
      AnotherPayItemIds = (DataManager_o *)sub_1B64204(AnotherPayItemIds, v71->obj.klass->_1.element_class);
      if ( !AnotherPayItemIds )
      {
LABEL_67:
        v85 = sub_1B64348(AnotherPayItemIds);
        sub_1B641F0(v85, 0LL);
      }
    }
    if ( v71->max_length > 3 )
    {
      v71->m_Items[3] = v78;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v71->m_Items[3], (int32_t)v78, v76, v77);
      AnotherPayItemIds = (DataManager_o *)System_String__Format_61389904(v67, v71, 0LL);
      if ( !upperLabel )
        goto LABEL_65;
LABEL_60:
      v59 = (System_String_o *)AnotherPayItemIds;
      v60 = upperLabel;
      goto LABEL_61;
    }
LABEL_66:
    sub_1B6432C(AnotherPayItemIds, v30);
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !isChoices )
    goto LABEL_39;
LABEL_32:
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_2080/*"ANOTHER_PAY_INFO_TITLE"*/, 0LL);
  v52 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v32, 0LL);
  AnotherPayItemIds = (DataManager_o *)System_String__Format(v51, v52, 0LL);
  if ( !titleLabel )
    goto LABEL_65;
  UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
  v53 = this->fields.upperLabel;
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_2081/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0LL);
  v55 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v32, 0LL);
  AnotherPayItemIds = (DataManager_o *)System_String__Format(v54, v55, 0LL);
  if ( !v53 )
    goto LABEL_65;
  UILabel__set_text(v53, (System_String_o *)AnotherPayItemIds, 0LL);
  v56 = this->fields.downerLabel;
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_2082/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0LL);
  v58 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v32, 0LL);
  AnotherPayItemIds = (DataManager_o *)System_String__Format(v57, v58, 0LL);
  if ( !v56 )
    goto LABEL_65;
  v59 = (System_String_o *)AnotherPayItemIds;
  v60 = v56;
LABEL_61:
  UILabel__set_text(v60, v59, 0LL);
  v80 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v80 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v80->static_fields->CONFIRM_WINDOW_SIZE, v79);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, isChoices, (ItemEntity_o *)v32, v81);
  AnotherPayItemIds = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnotherPayItemIds, 1, 0LL);
  v84 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v82, v83);
  System_Action___ctor(v84, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v84, 0, 0LL);
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
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x23
  void *itemIcon; // x0
  ServantEntity_o *v24; // x22
  int32_t eventId; // w23
  __int64 v26; // x24
  __int64 v27; // x25
  int32_t v28; // w0
  const MethodInfo *v29; // x3
  UILabel_o *titleLabel; // x23
  UILabel_o *upperLabel; // x25
  UILabel_o *downerLabel; // x26
  System_String_o *Empty; // x24
  EventRewardAnotherPayConfirmDialog_o *v34; // x0
  const MethodInfo *v35; // x2
  Il2CppObject *Name; // x23
  System_String_o *ClassName; // x0
  UILabel_o *resultLabel; // x22
  Il2CppObject *v39; // x24
  __int64 *v40; // x8
  System_String_o *v41; // x21
  Il2CppObject *v42; // x0
  Il2CppObject *v43; // x0
  const MethodInfo *v44; // x2
  bool v45; // w1
  UILabel_o *v46; // x21
  UILabel_o *v47; // x21
  const MethodInfo *v48; // x1
  EventRewardAnotherPayConfirmDialog_c *v49; // x0
  __int64 v50; // x1
  int32_t v51; // w20
  Il2CppObject *v52; // x0
  const MethodInfo *v53; // x3
  __int64 v54; // x1
  __int64 v55; // x2
  System_Action_o *v56; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4A00569 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, entity);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v10);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__, v13);
    sub_1B640C8(&EventRewardAnotherPayConfirmDialog_TypeInfo, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&string_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_2089/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/, v19);
    sub_1B640C8(&StringLiteral_2088/*"ANOTHER_PAY_PERIOD_END_MSG"*/, v20);
    sub_1B640C8(&StringLiteral_2090/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/, v21);
    byte_4A00569 = 1;
  }
  p_onDecide = &this->fields.onDecide;
  this->fields.onDecide = onDecide;
  sub_1B6406C(
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
  v24 = (ServantEntity_o *)itemIcon;
  eventId = entity->fields.eventId;
  v27 = *((_QWORD *)itemIcon + 2);
  v26 = *((_QWORD *)itemIcon + 3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v27;
  *(_QWORD *)&v57.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v57, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v28, v29);
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
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v34, v24, v35);
  ClassName = ServantEntity__getClassName(v24, 0LL);
  resultLabel = this->fields.resultLabel;
  v39 = (Il2CppObject *)ClassName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isAnotherItemOnly )
      goto LABEL_15;
LABEL_19:
    v40 = &StringLiteral_2090/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
    goto LABEL_20;
  }
  if ( !isAnotherItemOnly )
    goto LABEL_19;
LABEL_15:
  v40 = &StringLiteral_2089/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
LABEL_20:
  v41 = LocalizationManager__Get((System_String_o *)*v40, 0LL);
  v42 = (Il2CppObject *)ShopEntity__getName(entity, 0LL);
  itemIcon = System_String__Format_61389836(v41, v42, v39, Name, 0LL);
  if ( !resultLabel )
    goto LABEL_44;
  UILabel__set_text(resultLabel, (System_String_o *)itemIcon, 0LL);
  itemIcon = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon )
    goto LABEL_44;
  itemIcon = DataManager__GetMasterData_object_(
               (DataManager_o *)itemIcon,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !itemIcon )
    goto LABEL_44;
  v43 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)itemIcon,
          entity->fields.eventId,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( v43 && !EventEntity__IsEventPeriod((EventEntity_o *)v43, 0LL, 0LL) )
  {
    v46 = this->fields.downerLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemIcon = LocalizationManager__Get((System_String_o *)StringLiteral_2088/*"ANOTHER_PAY_PERIOD_END_MSG"*/, 0LL);
    if ( !v46 )
      goto LABEL_44;
    UILabel__set_text(v46, (System_String_o *)itemIcon, 0LL);
    itemIcon = EventRewardAnotherPayConfirmDialog_TypeInfo;
    v47 = this->fields.downerLabel;
    if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    if ( !v47 )
      goto LABEL_44;
    UILabel__set_fontSize(
      v47,
      EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_FONT_SIZE,
      0LL);
    v45 = 0;
  }
  else
  {
    v45 = 1;
  }
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, v45, v44);
  v49 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v49 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v49->static_fields->RESULT_WINDOW_SIZE, v48);
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    itemIcon = ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !itemIcon )
      goto LABEL_44;
    if ( !*((_DWORD *)itemIcon + 6) )
      sub_1B6432C(itemIcon, v50);
    v51 = *((_DWORD *)itemIcon + 8);
  }
  else
  {
    v51 = 0;
  }
  itemIcon = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon
    || (itemIcon = DataManager__GetMasterData_object_(
                     (DataManager_o *)itemIcon,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (v52 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)itemIcon,
                v51,
                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, 0, (ItemEntity_o *)v52, v53),
        (itemIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_44:
    sub_1B64324(itemIcon);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
  v56 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v54, v55);
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
  UnityEngine_GameObject_o *v22; // x19
  EventRewardAnotherPayConfirmDialog_c *v23; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v24; // x9
  _QWORD *p_x; // x8
  int *p_z; // x9
  UnityEngine_GameObject_o *gameObject; // x20
  EventRewardAnotherPayConfirmDialog_c *v28; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x9
  UnityEngine_GameObject_o *v30; // x21
  EventRewardAnotherPayConfirmDialog_c *v31; // x8
  UnityEngine_GameObject_o *v32; // x0
  EventRewardAnotherPayConfirmDialog_c *v33; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v34; // x9
  UnityEngine_GameObject_o *v35; // x0
  EventRewardAnotherPayConfirmDialog_c *v36; // x8
  __int64 v37; // d0 OVERLAPPED
  int v38; // s2
  int v39; // s1

  if ( (byte_4A0056C & 1) == 0 )
  {
    sub_1B640C8(&EventRewardAnotherPayConfirmDialog_TypeInfo, isChoices);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_9260/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v8);
    sub_1B640C8(&StringLiteral_2078/*"ANOTHER_PAY_ANOTHER_BUY"*/, v9);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v10);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v11);
    sub_1B640C8(&StringLiteral_2087/*"ANOTHER_PAY_NORMAL_BUY"*/, v12);
    byte_4A0056C = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_48;
  UILabel__set_text(cancelLabel, decideButton, 0LL);
  decideLabel = this->fields.decideLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_9260/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_48;
  UILabel__set_text(decideLabel, decideButton, 0LL);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_2087/*"ANOTHER_PAY_NORMAL_BUY"*/, 0LL);
  if ( !normalBuyLabel )
    goto LABEL_48;
  UILabel__set_text(normalBuyLabel, decideButton, 0LL);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_2078/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0LL);
  if ( !itemEntity )
    goto LABEL_48;
  v18 = decideButton;
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0LL);
  decideButton = System_String__Format(v18, AnotherPayName, 0LL);
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
            v28 = EventRewardAnotherPayConfirmDialog_TypeInfo;
            if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
              v28 = EventRewardAnotherPayConfirmDialog_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition(gameObject, v28->static_fields->DECIDE_BUTTON_PURCHASED_POS, 0LL);
            decideButton = (System_String_o *)this->fields.cancelButton;
            if ( decideButton )
            {
              v22 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
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
    v21 = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
              v22 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
              v23 = EventRewardAnotherPayConfirmDialog_TypeInfo;
              if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                v23 = EventRewardAnotherPayConfirmDialog_TypeInfo;
              }
              v24 = v23->static_fields;
              p_x = (_QWORD *)&v24->CANCEL_BUTTON_RESULT_POS.fields.x;
              p_z = (int *)&v24->CANCEL_BUTTON_RESULT_POS.fields.z;
              goto LABEL_47;
            }
          }
        }
      }
    }
LABEL_48:
    sub_1B64324(decideButton);
  }
  decideButton = (System_String_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_48;
  v30 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
  v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v30, v31->static_fields->DECIDE_BUTTON_BASE_POS, 0LL);
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
    v32 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
    v33 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    v22 = v32;
    if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
      v33 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    }
    v34 = v33->static_fields;
    p_x = (_QWORD *)&v34->CANCEL_BUTTON_CHOICES_POS.fields.x;
    p_z = (int *)&v34->CANCEL_BUTTON_CHOICES_POS.fields.z;
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
    v35 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
    v36 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    v22 = v35;
    if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
      v36 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    }
    p_x = (_QWORD *)&v36->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
    p_z = (int *)(p_x + 1);
  }
LABEL_47:
  v37 = *p_x;
  v38 = *p_z;
  v39 = HIDWORD(*p_x);
  GameObjectExtensions__SetLocalPosition(v22, *(UnityEngine_Vector3_o *)&v37, 0LL);
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
  __int64 v18; // x21
  DataManager_o *MasterData_object; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Func_object__bool__o *v25; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  Il2CppObject *v27; // x0
  int32_t v28; // w20
  Il2CppObject *Entity; // x21
  SkillLvEntity_o *v30; // x0
  SkillLvEntity_o *v31; // x22
  UILabel_o *skillNameLabel; // x23
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0

  if ( (byte_4A0056A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___, v12);
    sub_1B640C8(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__, v16);
    sub_1B640C8(&EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo, v17);
    byte_4A0056A = 1;
  }
  v18 = sub_1B64314(
          EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&svtId);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_24;
  *(_DWORD *)(v18 + 16) = eventId;
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BB5FA4(v20);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1BB5FA4(v21);
  MasterData_object = **(DataManager_o ***)(v21 + 184);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                            (ServantPassiveSkillMaster_o *)MasterData_object,
                                                                            svtId,
                                                                            0LL);
  v25 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v23, v24);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v18,
    Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__,
    0LL);
  v26 = System_Linq_Enumerable__Where_object_(
          ServantSkillList,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
  v27 = System_Linq_Enumerable__FirstOrDefault_object_(
          v26,
          (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
  v28 = v27 ? HIDWORD(v27[1].monitor) : 0;
  MasterData_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             v28,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  MasterData_object = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  v30 = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v28, 1, 0LL);
  if ( Entity )
  {
    v31 = v30;
    if ( v30 )
    {
      skillNameLabel = this->fields.skillNameLabel;
      MasterData_object = (DataManager_o *)SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
      if ( skillNameLabel )
      {
        UILabel__set_text(skillNameLabel, (System_String_o *)MasterData_object, 0LL);
        skillDetailLabel = this->fields.skillDetailLabel;
        Detail = SkillLvEntity__getDetail(v31, 0, 0LL);
        WrapControlText__textAdjust(skillDetailLabel, Detail, 22, 0, 0, 0LL);
        MasterData_object = (DataManager_o *)this->fields.skillIcon;
        if ( MasterData_object )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)MasterData_object, v28, 0LL);
          return;
        }
      }
LABEL_24:
      sub_1B64324(MasterData_object);
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
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v19; // x8
  float DOWNER_LABEL_CHOICES_POS_Y; // s1
  UnityEngine_GameObject_o *v21; // x20
  EventRewardAnotherPayConfirmDialog_c *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  float DOWNER_LABEL_RESULT_POS_Y; // s0
  UnityEngine_GameObject_o *v27; // x21
  EventRewardAnotherPayConfirmDialog_c *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  EventRewardAnotherPayConfirmDialog_c *v30; // x0
  UnityEngine_GameObject_o *v31; // x20
  UnityEngine_GameObject_o *v32; // x0

  if ( (byte_4A0056B & 1) == 0 )
  {
    sub_1B640C8(&EventRewardAnotherPayConfirmDialog_TypeInfo, isEventPeriod);
    byte_4A0056B = 1;
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
      v9 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v9,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_BASE_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v10 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v10,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_BASE_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v11 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = static_fields->WARN_LABEL_BASE_POS_Y;
      goto LABEL_25;
    case 3:
      v14 = this->fields.skill;
      v15 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v15 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v14, v15->static_fields->SKILL_CHOICES_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_37;
      v16 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v16,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v17 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v17,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_CHOICES_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v18 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v18,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_CHOICES_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v11 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      v19 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = v19->WARN_LABEL_CHOICES_POS_Y;
      DOWNER_LABEL_CHOICES_POS_Y = v19->DOWNER_LABEL_CHOICES_POS_Y;
      goto LABEL_26;
    case 4:
      v21 = this->fields.skill;
      v22 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v22 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v21, v22->static_fields->SKILL_PURCHASED_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_37;
      v23 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v23,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_PURCHASED_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v24 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v24,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_PURCHASED_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v25 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v25,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_PURCHASED_POS_Y,
        0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v11 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = static_fields->WARN_LABEL_PURCHASED_POS_Y;
LABEL_25:
      DOWNER_LABEL_CHOICES_POS_Y = static_fields->DOWNER_LABEL_POS_Y;
LABEL_26:
      DOWNER_LABEL_RESULT_POS_Y = WARN_LABEL_BASE_POS_Y + DOWNER_LABEL_CHOICES_POS_Y;
      goto LABEL_27;
    case 5:
      v27 = this->fields.skill;
      v28 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v28 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v27, v28->static_fields->SKILL_RESULT_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !itemIcon )
        goto LABEL_37;
      v29 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v29,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->RESULT_LABEL_POS_Y,
        0LL);
      if ( isEventPeriod )
        return;
      v30 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v31 = this->fields.skill;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
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
LABEL_37:
        sub_1B64324(itemIcon);
      }
      v11 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      DOWNER_LABEL_RESULT_POS_Y = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_POS_Y;
LABEL_27:
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
  int32_t x; // w1
  int32_t v7; // w1

  window = this->fields.window;
  if ( !window
    || ((y = size.fields.y, size.fields.x != INFINITY) ? (x = (int)size.fields.x) : (x = 0x80000000),
        UIWidget__set_width(window, x, 0LL),
        (window = this->fields.window) == 0LL) )
  {
    sub_1B64324(window);
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
  if ( (byte_4A00572 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15573/*"Window/CancelButton"*/, method);
    byte_4A00572 = 1;
  }
  return (System_String_o *)StringLiteral_15573/*"Window/CancelButton"*/;
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
    sub_1B64324(this);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}