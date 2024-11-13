void __fastcall EventRewardAnotherPayConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  EventRewardAnotherPayConfirmDialog_c *v4; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v5; // x10
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v6; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v7; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v8; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v9; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v10; // x8

  if ( (byte_4B1115C & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardAnotherPayConfirmDialog_TypeInfo, v1, v2);
    byte_4B1115C = 1;
  }
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CANCEL_BUTTON_BASE_POS.fields.x = 0xC3600000C3200000LL;
  static_fields->CANCEL_BUTTON_BASE_POS.fields.z = 0.0;
  v4 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  v5 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(int32x2_t *)&v5->CANCEL_BUTTON_CHOICES_POS.fields.x = vdup_n_s32(0xC3600000);
  v5->CANCEL_BUTTON_CHOICES_POS.fields.z = 0.0;
  v6 = v4->static_fields;
  *(_QWORD *)&v6->CANCEL_BUTTON_PURCHASED_POS.fields.x = 0xC3700000C3200000LL;
  v6->CANCEL_BUTTON_PURCHASED_POS.fields.z = 0.0;
  v7 = v4->static_fields;
  *(_QWORD *)&v7->CANCEL_BUTTON_RESULT_POS.fields.x = 0xC31B000000000000LL;
  v7->CANCEL_BUTTON_RESULT_POS.fields.z = 0.0;
  v8 = v4->static_fields;
  *(_QWORD *)&v8->DECIDE_BUTTON_BASE_POS.fields.x = 0xC360000043200000LL;
  v8->DECIDE_BUTTON_BASE_POS.fields.z = 0.0;
  v9 = v4->static_fields;
  *(_QWORD *)&v9->DECIDE_BUTTON_PURCHASED_POS.fields.x = -4363988037795840000LL;
  v9->DECIDE_BUTTON_PURCHASED_POS.fields.z = 0.0;
  v4->static_fields->CONFIRM_WINDOW_SIZE = (struct UnityEngine_Vector2_o)0x4416000044430000LL;
  v4->static_fields->RESULT_WINDOW_SIZE = (struct UnityEngine_Vector2_o)0x43F0000044430000LL;
  v10 = v4->static_fields;
  *(_OWORD *)&v10->SKILL_BASE_POS_Y = xmmword_BD3290;
  *(_OWORD *)&v10->SKILL_RESULT_END_POS_Y = xmmword_BD28C0;
  *(_OWORD *)&v10->UPPER_LABEL_POS_Y = xmmword_BD26C0;
  *(_OWORD *)&v10->WARN_LABEL_PURCHASED_POS_Y = xmmword_BD2B80;
  *(_QWORD *)&v10->RESULT_LABEL_POS_Y = 0x42F0000042C80000LL;
  *(_QWORD *)&v10->DOWNER_LABEL_FONT_SIZE = 0x1600000014LL;
}


void __fastcall EventRewardAnotherPayConfirmDialog___ctor(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1115B & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1115B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v15; // x1
  int64_t v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  __int64 v19; // x1
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x21
  __int64 v23; // x22
  ServantLimitImageMaster_o *v24; // x20
  int32_t v25; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4B11159 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, svtEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    byte_4B11159 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, svtEntity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !svtEntity )
    goto LABEL_24;
  v16 = UserId;
  v18 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
  *(_QWORD *)&v28.fields.currentCryptoKey = v18;
  *(_QWORD *)&v28.fields.fakeValue = v17;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v28, 0LL);
  if ( !Master_object )
    goto LABEL_24;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)Master_object,
          &entity,
          v16,
          UserId,
          0LL) )
  {
    v25 = -1;
    return ServantEntity__getName(svtEntity, v25, -1, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
  v20 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v23 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v24 = (ServantLimitImageMaster_o *)v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
  *(_QWORD *)&v29.fields.currentCryptoKey = v23;
  *(_QWORD *)&v29.fields.fakeValue = v22;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v29, 0LL);
  if ( !entity
    || !v24
    || (UserId = ServantLimitImageMaster__GetServantLimitCountSealAfter(v24, UserId, entity->fields.maxLimitCount, 0LL),
        !entity) )
  {
LABEL_24:
    sub_1BCAA3C(UserId, v15);
  }
  if ( (_DWORD)UserId == entity->fields.maxLimitCount )
    v25 = -1;
  else
    v25 = UserId;
  return ServantEntity__getName(svtEntity, v25, -1, 0LL);
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
    sub_1BCAA3C(itemIcon, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_1BCA784(&this->fields.onDecide, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickAnotherBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x8

  if ( (byte_4B11158 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__, method, v2);
    byte_4B11158 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1BCAA3C(v6, v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *mText; // x0
  System_String_o *v9; // x1
  struct UILabel_o *cancelLabel; // x8
  bool v11; // w20
  _QWORD *v12; // x8
  System_Reflection_MethodBase_o *v13; // x0
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x8

  if ( (byte_4B11155 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v6, v7);
    byte_4B11155 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    mText = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    cancelLabel = this->fields.cancelLabel;
    if ( !cancelLabel )
      goto LABEL_13;
    v9 = mText;
    mText = cancelLabel->fields.mText;
    if ( !mText )
      goto LABEL_13;
    v11 = System_String__Equals_62409536(mText, v9, 0LL);
    v12 = Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, !v11, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
LABEL_13:
      sub_1BCAA3C(mText, v9);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x8

  if ( (byte_4B11156 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__, method, v2);
    byte_4B11156 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1BCAA3C(v6, v7);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x8

  if ( (byte_4B11157 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__, method, v2);
    byte_4B11157 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1BCAA3C(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      2LL,
      *(_QWORD *)&onDecide->fields.extra_arg);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x26
  DataManager_o *AnotherPayItemIds; // x0
  __int64 v47; // x1
  int32_t v48; // w24
  Il2CppObject *v49; // x21
  ServantEntity_o *v50; // x25
  int32_t v51; // w8
  __int64 v52; // x1
  int32_t eventId; // w24
  __int64 v54; // x26
  __int64 v55; // x27
  int32_t v56; // w0
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x2
  EventRewardAnotherPayConfirmDialog_o *v59; // x0
  const MethodInfo *v60; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  __int64 v63; // x1
  UILabel_o *warnLabel; // x26
  Il2CppObject *v65; // x25
  System_String_o *v66; // x27
  Il2CppObject *AnotherPayName; // x0
  UILabel_o *downerLabel; // x26
  __int64 v69; // x1
  UILabel_o *titleLabel; // x26
  System_String_o *v71; // x22
  Il2CppObject *v72; // x0
  UILabel_o *v73; // x22
  System_String_o *v74; // x23
  Il2CppObject *v75; // x0
  struct UILabel_o *v76; // x22
  System_String_o *v77; // x23
  Il2CppObject *v78; // x0
  System_String_o *v79; // x1
  UILabel_o *v80; // x0
  System_String_o *v81; // x27
  Il2CppObject *v82; // x0
  UILabel_o *v83; // x26
  System_String_o *v84; // x0
  __int64 v85; // x1
  struct UILabel_o *upperLabel; // x26
  System_String_o *v87; // x0
  System_String_o *v88; // x23
  Il2CppObject *monitor; // x28
  System_Object_array *v90; // x27
  Il2CppObject *v91; // x22
  const MethodInfo *v92; // x1
  EventRewardAnotherPayConfirmDialog_c *v93; // x0
  const MethodInfo *v94; // x3
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  System_Action_o *v98; // x20
  __int64 v99; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16

  if ( (byte_4B11150 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, isChoices);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__, v15, v16);
    sub_1BCA7E0(&EventRewardAnotherPayConfirmDialog_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&object___TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&string_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_2081/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_2080/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_2074/*"ANOTHER_PAY_CONFIRM_TITLE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_2076/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_2079/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_2077/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_2075/*"ANOTHER_PAY_INFO_TITLE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_2078/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, v43, v44);
    byte_4B11150 = 1;
  }
  p_onDecide = &this->fields.onDecide;
  this->fields.onDecide = onDecide;
  AnotherPayItemIds = (DataManager_o *)sub_1BCA784(&this->fields.onDecide, onDecide);
  if ( !entity )
    goto LABEL_65;
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    AnotherPayItemIds = (DataManager_o *)ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !AnotherPayItemIds )
      goto LABEL_65;
    if ( !LODWORD(AnotherPayItemIds->fields.m_CancellationTokenSource) )
      goto LABEL_66;
    v48 = *(_DWORD *)&AnotherPayItemIds->fields._DispLog;
  }
  else
  {
    v48 = 0;
  }
  AnotherPayItemIds = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  AnotherPayItemIds = (DataManager_o *)DataManager__GetMasterData_object_(
                                         AnotherPayItemIds,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  v49 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)AnotherPayItemIds,
          v48,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  AnotherPayItemIds = (DataManager_o *)ShopEntity__GetRelateServantEntity(entity, 0LL);
  if ( !v49 || (v50 = (ServantEntity_o *)AnotherPayItemIds) == 0LL )
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
    sub_1BCAA3C(AnotherPayItemIds, v47);
  }
  AnotherPayItemIds = (DataManager_o *)this->fields.itemIcon;
  if ( isReconfirm )
    v51 = 2;
  else
    v51 = 4;
  if ( isChoices )
    v51 = 3;
  this->fields.state = v51;
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
  ItemIconComponent__SetItem((ItemIconComponent_o *)AnotherPayItemIds, v48, -1, 0LL);
  eventId = entity->fields.eventId;
  v55 = *(_QWORD *)&v50->fields.id.fields.currentCryptoKey;
  v54 = *(_QWORD *)&v50->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
  *(_QWORD *)&v100.fields.currentCryptoKey = v55;
  *(_QWORD *)&v100.fields.fakeValue = v54;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v100, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v56, v57);
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, 1, v58);
  AnotherPayItemIds = (DataManager_o *)this->fields.resultLabel;
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  UILabel__set_text((UILabel_o *)AnotherPayItemIds, string_TypeInfo->static_fields->Empty, 0LL);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v59, v50, v60);
  ClassName = ServantEntity__getClassName(v50, 0LL);
  warnLabel = this->fields.warnLabel;
  v65 = (Il2CppObject *)ClassName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63);
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_2080/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, 0LL);
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v49, 0LL);
  AnotherPayItemIds = (DataManager_o *)System_String__Format(v66, AnotherPayName, 0LL);
  if ( !warnLabel )
    goto LABEL_65;
  UILabel__set_text(warnLabel, (System_String_o *)AnotherPayItemIds, 0LL);
  downerLabel = this->fields.downerLabel;
  AnotherPayItemIds = (DataManager_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v47);
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
    v81 = LocalizationManager__Get((System_String_o *)StringLiteral_2074/*"ANOTHER_PAY_CONFIRM_TITLE"*/, 0LL);
    v82 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v49, 0LL);
    AnotherPayItemIds = (DataManager_o *)System_String__Format(v81, v82, 0LL);
    if ( !titleLabel )
      goto LABEL_65;
    UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
    v83 = this->fields.downerLabel;
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_2079/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/, 0LL);
    AnotherPayItemIds = (DataManager_o *)System_String__Format(v84, (Il2CppObject *)v49[1].monitor, 0LL);
    if ( !v83 )
      goto LABEL_65;
    UILabel__set_text(v83, (System_String_o *)AnotherPayItemIds, 0LL);
    upperLabel = this->fields.upperLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isReconfirm )
        goto LABEL_43;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v85);
      if ( isReconfirm )
      {
LABEL_43:
        v87 = LocalizationManager__Get((System_String_o *)StringLiteral_2081/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/, 0LL);
        AnotherPayItemIds = (DataManager_o *)System_String__Format_62415660(
                                               v87,
                                               (Il2CppObject *)v49[1].monitor,
                                               v65,
                                               Name,
                                               0LL);
        if ( !upperLabel )
          goto LABEL_65;
        goto LABEL_60;
      }
    }
    v88 = LocalizationManager__Get((System_String_o *)StringLiteral_2078/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/, 0LL);
    AnotherPayItemIds = (DataManager_o *)sub_1BCA888(object___TypeInfo, 4LL);
    if ( !AnotherPayItemIds )
      goto LABEL_65;
    monitor = (Il2CppObject *)v49[1].monitor;
    v90 = (System_Object_array *)AnotherPayItemIds;
    if ( monitor )
    {
      AnotherPayItemIds = (DataManager_o *)sub_1BCA91C(v49[1].monitor, AnotherPayItemIds->klass->_1.element_class);
      if ( !AnotherPayItemIds )
        goto LABEL_67;
    }
    if ( !v90->max_length )
      goto LABEL_66;
    v90->m_Items[0] = monitor;
    AnotherPayItemIds = (DataManager_o *)sub_1BCA784(v90->m_Items, monitor);
    if ( v65 )
    {
      AnotherPayItemIds = (DataManager_o *)sub_1BCA91C(v65, v90->obj.klass->_1.element_class);
      if ( !AnotherPayItemIds )
        goto LABEL_67;
    }
    if ( v90->max_length <= 1 )
      goto LABEL_66;
    v90->m_Items[1] = v65;
    AnotherPayItemIds = (DataManager_o *)sub_1BCA784(&v90->m_Items[1], v65);
    if ( Name )
    {
      AnotherPayItemIds = (DataManager_o *)sub_1BCA91C(Name, v90->obj.klass->_1.element_class);
      if ( !AnotherPayItemIds )
        goto LABEL_67;
    }
    if ( v90->max_length <= 2 )
      goto LABEL_66;
    v90->m_Items[2] = Name;
    sub_1BCA784(&v90->m_Items[2], Name);
    AnotherPayItemIds = (DataManager_o *)ShopEntity__getName(entity, 0LL);
    v91 = (Il2CppObject *)AnotherPayItemIds;
    if ( AnotherPayItemIds )
    {
      AnotherPayItemIds = (DataManager_o *)sub_1BCA91C(AnotherPayItemIds, v90->obj.klass->_1.element_class);
      if ( !AnotherPayItemIds )
      {
LABEL_67:
        v99 = sub_1BCAA60();
        sub_1BCA908(v99, 0LL);
      }
    }
    if ( v90->max_length > 3 )
    {
      v90->m_Items[3] = v91;
      sub_1BCA784(&v90->m_Items[3], v91);
      AnotherPayItemIds = (DataManager_o *)System_String__Format_62415728(v88, v90, 0LL);
      if ( !upperLabel )
        goto LABEL_65;
LABEL_60:
      v79 = (System_String_o *)AnotherPayItemIds;
      v80 = upperLabel;
      goto LABEL_61;
    }
LABEL_66:
    sub_1BCAA44(AnotherPayItemIds, v47);
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69);
  if ( !isChoices )
    goto LABEL_39;
LABEL_32:
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2075/*"ANOTHER_PAY_INFO_TITLE"*/, 0LL);
  v72 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v49, 0LL);
  AnotherPayItemIds = (DataManager_o *)System_String__Format(v71, v72, 0LL);
  if ( !titleLabel )
    goto LABEL_65;
  UILabel__set_text(titleLabel, (System_String_o *)AnotherPayItemIds, 0LL);
  v73 = this->fields.upperLabel;
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_2076/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0LL);
  v75 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v49, 0LL);
  AnotherPayItemIds = (DataManager_o *)System_String__Format(v74, v75, 0LL);
  if ( !v73 )
    goto LABEL_65;
  UILabel__set_text(v73, (System_String_o *)AnotherPayItemIds, 0LL);
  v76 = this->fields.downerLabel;
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_2077/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0LL);
  v78 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v49, 0LL);
  AnotherPayItemIds = (DataManager_o *)System_String__Format(v77, v78, 0LL);
  if ( !v76 )
    goto LABEL_65;
  v79 = (System_String_o *)AnotherPayItemIds;
  v80 = v76;
LABEL_61:
  UILabel__set_text(v80, v79, 0LL);
  v93 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v92);
    v93 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v93->static_fields->CONFIRM_WINDOW_SIZE, v92);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, isChoices, (ItemEntity_o *)v49, v94);
  AnotherPayItemIds = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !AnotherPayItemIds )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AnotherPayItemIds, 1, 0LL);
  v98 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v95, v96, v97);
  System_Action___ctor(v98, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v98, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__OpenResult(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *entity,
        bool isAnotherItemOnly,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x23
  void *itemIcon; // x0
  __int64 v37; // x1
  ServantEntity_o *v38; // x22
  int32_t eventId; // w23
  __int64 v40; // x24
  __int64 v41; // x25
  int32_t v42; // w0
  const MethodInfo *v43; // x3
  UILabel_o *titleLabel; // x23
  UILabel_o *upperLabel; // x25
  UILabel_o *downerLabel; // x26
  System_String_o *Empty; // x24
  EventRewardAnotherPayConfirmDialog_o *v48; // x0
  const MethodInfo *v49; // x2
  Il2CppObject *Name; // x23
  System_String_o *ClassName; // x0
  __int64 v52; // x1
  UILabel_o *resultLabel; // x22
  Il2CppObject *v54; // x24
  __int64 *v55; // x8
  System_String_o *v56; // x21
  Il2CppObject *v57; // x0
  Il2CppObject *v58; // x0
  const MethodInfo *v59; // x2
  __int64 v60; // x1
  bool v61; // w1
  UILabel_o *v62; // x21
  UILabel_o *v63; // x21
  const MethodInfo *v64; // x1
  EventRewardAnotherPayConfirmDialog_c *v65; // x0
  int32_t v66; // w20
  Il2CppObject *v67; // x0
  const MethodInfo *v68; // x3
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Action_o *v72; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4B11151 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, isAnotherItemOnly);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__, v17, v18);
    sub_1BCA7E0(&EventRewardAnotherPayConfirmDialog_TypeInfo, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&string_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_2084/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_2083/*"ANOTHER_PAY_PERIOD_END_MSG"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_2085/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/, v33, v34);
    byte_4B11151 = 1;
  }
  p_onDecide = &this->fields.onDecide;
  this->fields.onDecide = onDecide;
  itemIcon = (void *)sub_1BCA784(&this->fields.onDecide, onDecide);
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
  v38 = (ServantEntity_o *)itemIcon;
  eventId = entity->fields.eventId;
  v41 = *((_QWORD *)itemIcon + 2);
  v40 = *((_QWORD *)itemIcon + 3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
  *(_QWORD *)&v73.fields.currentCryptoKey = v41;
  *(_QWORD *)&v73.fields.fakeValue = v40;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v73, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v42, v43);
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
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v48, v38, v49);
  ClassName = ServantEntity__getClassName(v38, 0LL);
  resultLabel = this->fields.resultLabel;
  v54 = (Il2CppObject *)ClassName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
    if ( isAnotherItemOnly )
      goto LABEL_15;
LABEL_19:
    v55 = &StringLiteral_2085/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
    goto LABEL_20;
  }
  if ( !isAnotherItemOnly )
    goto LABEL_19;
LABEL_15:
  v55 = &StringLiteral_2084/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
LABEL_20:
  v56 = LocalizationManager__Get((System_String_o *)*v55, 0LL);
  v57 = (Il2CppObject *)ShopEntity__getName(entity, 0LL);
  itemIcon = System_String__Format_62415660(v56, v57, v54, Name, 0LL);
  if ( !resultLabel )
    goto LABEL_44;
  UILabel__set_text(resultLabel, (System_String_o *)itemIcon, 0LL);
  itemIcon = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon )
    goto LABEL_44;
  itemIcon = DataManager__GetMasterData_object_(
               (DataManager_o *)itemIcon,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !itemIcon )
    goto LABEL_44;
  v58 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)itemIcon,
          entity->fields.eventId,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( v58 && !EventEntity__IsEventPeriod((EventEntity_o *)v58, 0LL, 0LL) )
  {
    v62 = this->fields.downerLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60);
    itemIcon = LocalizationManager__Get((System_String_o *)StringLiteral_2083/*"ANOTHER_PAY_PERIOD_END_MSG"*/, 0LL);
    if ( !v62 )
      goto LABEL_44;
    UILabel__set_text(v62, (System_String_o *)itemIcon, 0LL);
    itemIcon = EventRewardAnotherPayConfirmDialog_TypeInfo;
    v63 = this->fields.downerLabel;
    if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v37);
    if ( !v63 )
      goto LABEL_44;
    UILabel__set_fontSize(
      v63,
      EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_FONT_SIZE,
      0LL);
    v61 = 0;
  }
  else
  {
    v61 = 1;
  }
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, v61, v59);
  v65 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v64);
    v65 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v65->static_fields->RESULT_WINDOW_SIZE, v64);
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    itemIcon = ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !itemIcon )
      goto LABEL_44;
    if ( !*((_DWORD *)itemIcon + 6) )
      sub_1BCAA44(itemIcon, v37);
    v66 = *((_DWORD *)itemIcon + 8);
  }
  else
  {
    v66 = 0;
  }
  itemIcon = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemIcon
    || (itemIcon = DataManager__GetMasterData_object_(
                     (DataManager_o *)itemIcon,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (v67 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)itemIcon,
                v66,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, 0, (ItemEntity_o *)v67, v68),
        (itemIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_44:
    sub_1BCAA3C(itemIcon, v37);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
  v72 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v69, v70, v71);
  System_Action___ctor(v72, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v72, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetButtonDisp(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isChoices,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *cancelLabel; // x22
  System_String_o *decideButton; // x0
  __int64 v21; // x1
  UILabel_o *decideLabel; // x22
  UILabel_o *normalBuyLabel; // x22
  UILabel_o *anotherBuyLabel; // x22
  System_String_o *v25; // x23
  Il2CppObject *AnotherPayName; // x0
  int32_t state; // w8
  UILabel_o *v28; // x20
  __int64 v29; // x1
  UnityEngine_GameObject_o *v30; // x19
  EventRewardAnotherPayConfirmDialog_c *v31; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v32; // x9
  _QWORD *p_x; // x8
  int *p_z; // x9
  __int64 v35; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  EventRewardAnotherPayConfirmDialog_c *v37; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x9
  __int64 v39; // x1
  UnityEngine_GameObject_o *v40; // x21
  EventRewardAnotherPayConfirmDialog_c *v41; // x8
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x1
  EventRewardAnotherPayConfirmDialog_c *v44; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v45; // x9
  UnityEngine_GameObject_o *v46; // x0
  __int64 v47; // x1
  EventRewardAnotherPayConfirmDialog_c *v48; // x8
  __int64 v49; // d0 OVERLAPPED
  int v50; // s2
  int v51; // s1

  if ( (byte_4B11154 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardAnotherPayConfirmDialog_TypeInfo, isChoices, itemEntity);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_9434/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_2073/*"ANOTHER_PAY_ANOTHER_BUY"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_2082/*"ANOTHER_PAY_NORMAL_BUY"*/, v17, v18);
    byte_4B11154 = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isChoices);
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_48;
  UILabel__set_text(cancelLabel, decideButton, 0LL);
  decideLabel = this->fields.decideLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_9434/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_48;
  UILabel__set_text(decideLabel, decideButton, 0LL);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_2082/*"ANOTHER_PAY_NORMAL_BUY"*/, 0LL);
  if ( !normalBuyLabel )
    goto LABEL_48;
  UILabel__set_text(normalBuyLabel, decideButton, 0LL);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_2073/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0LL);
  if ( !itemEntity )
    goto LABEL_48;
  v25 = decideButton;
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0LL);
  decideButton = System_String__Format(v25, AnotherPayName, 0LL);
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
            v37 = EventRewardAnotherPayConfirmDialog_TypeInfo;
            if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v35);
              v37 = EventRewardAnotherPayConfirmDialog_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition(gameObject, v37->static_fields->DECIDE_BUTTON_PURCHASED_POS, 0LL);
            decideButton = (System_String_o *)this->fields.cancelButton;
            if ( decideButton )
            {
              v30 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
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
    v28 = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v28 )
    {
      UILabel__set_text(v28, decideButton, 0LL);
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
              v30 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
              v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
              if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v29);
                v31 = EventRewardAnotherPayConfirmDialog_TypeInfo;
              }
              v32 = v31->static_fields;
              p_x = (_QWORD *)&v32->CANCEL_BUTTON_RESULT_POS.fields.x;
              p_z = (int *)&v32->CANCEL_BUTTON_RESULT_POS.fields.z;
              goto LABEL_47;
            }
          }
        }
      }
    }
LABEL_48:
    sub_1BCAA3C(decideButton, v21);
  }
  decideButton = (System_String_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_48;
  v40 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
  v41 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v39);
    v41 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v40, v41->static_fields->DECIDE_BUTTON_BASE_POS, 0LL);
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
    v42 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
    v44 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    v30 = v42;
    if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v43);
      v44 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    }
    v45 = v44->static_fields;
    p_x = (_QWORD *)&v45->CANCEL_BUTTON_CHOICES_POS.fields.x;
    p_z = (int *)&v45->CANCEL_BUTTON_CHOICES_POS.fields.z;
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
    v46 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)decideButton, 0LL);
    v48 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    v30 = v46;
    if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v47);
      v48 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    }
    p_x = (_QWORD *)&v48->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
    p_z = (int *)(p_x + 1);
  }
LABEL_47:
  v49 = *p_x;
  v50 = *p_z;
  v51 = HIDWORD(*p_x);
  GameObjectExtensions__SetLocalPosition(v30, *(UnityEngine_Vector3_o *)&v49, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(
        EventRewardAnotherPayConfirmDialog_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x21
  DataManager_o *MasterData_object; // x0
  __int64 v31; // x1
  __int64 v32; // x0
  __int64 v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Func_object__bool__o *v38; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  Il2CppObject *v40; // x0
  int32_t v41; // w20
  __int64 v42; // x1
  Il2CppObject *Entity; // x21
  SkillLvEntity_o *v44; // x0
  SkillLvEntity_o *v45; // x22
  UILabel_o *skillNameLabel; // x23
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0

  if ( (byte_4B11152 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, *(_QWORD *)&eventId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___, v17, v18);
    sub_1BCA7E0(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(
      &Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__,
      v25,
      v26);
    sub_1BCA7E0(&EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo, v27, v28);
    byte_4B11152 = 1;
  }
  v29 = sub_1BCAA2C(
          EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&svtId,
          method);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_24;
  *(_DWORD *)(v29 + 16) = eventId;
  v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1C1C6BC();
  v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C1C6BC();
  MasterData_object = **(DataManager_o ***)(v33 + 184);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                            (ServantPassiveSkillMaster_o *)MasterData_object,
                                                                            svtId,
                                                                            0LL);
  v38 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v35, v36, v37);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)v29,
    Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__,
    0LL);
  v39 = System_Linq_Enumerable__Where_object_(
          ServantSkillList,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
  v40 = System_Linq_Enumerable__FirstOrDefault_object_(
          v39,
          (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
  v41 = v40 ? HIDWORD(v40[1].monitor) : 0;
  MasterData_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             v41,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
  MasterData_object = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  v44 = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v41, 1, 0LL);
  if ( Entity )
  {
    v45 = v44;
    if ( v44 )
    {
      skillNameLabel = this->fields.skillNameLabel;
      MasterData_object = (DataManager_o *)SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
      if ( skillNameLabel )
      {
        UILabel__set_text(skillNameLabel, (System_String_o *)MasterData_object, 0LL);
        skillDetailLabel = this->fields.skillDetailLabel;
        Detail = SkillLvEntity__getDetail(v45, 0, 0LL);
        WrapControlText__textAdjust(skillDetailLabel, Detail, 22, 0, 0, 0LL);
        MasterData_object = (DataManager_o *)this->fields.skillIcon;
        if ( MasterData_object )
        {
          SkillIconComponent__Set((SkillIconComponent_o *)MasterData_object, v41, 0LL);
          return;
        }
      }
LABEL_24:
      sub_1BCAA3C(MasterData_object, v31);
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
  __int64 v31; // x1
  EventRewardAnotherPayConfirmDialog_c *v32; // x0
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_GameObject_o *v34; // x0

  if ( (byte_4B11153 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardAnotherPayConfirmDialog_TypeInfo, isEventPeriod, method);
    byte_4B11153 = 1;
  }
  switch ( this->fields.state )
  {
    case 2:
      skill = this->fields.skill;
      v6 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, isEventPeriod);
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
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, isEventPeriod);
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
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, isEventPeriod);
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
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, isEventPeriod);
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
      v32 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v33 = this->fields.skill;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v31);
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
LABEL_37:
        sub_1BCAA3C(itemIcon, v7);
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
    sub_1BCAA3C(window, method);
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
  __int64 v2; // x2

  if ( (byte_4B1115A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, method, v2);
    byte_4B1115A = 1;
  }
  return (System_String_o *)StringLiteral_15808/*"Window/CancelButton"*/;
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
    sub_1BCAA3C(this, 0LL);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}