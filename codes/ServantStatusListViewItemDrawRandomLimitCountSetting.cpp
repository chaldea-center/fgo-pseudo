void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_POS_ALL.fields.y = 0.0;
  this->fields.MASK_LABEL_POS_ALL.fields.x = 0.0;
  *(_OWORD *)&this->fields.MASK_LABEL_MAX_WIDTH = xmmword_BA4270;
  this->fields.MASK_LABEL_POS_ALL.fields.y = -11.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__GetKind(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  return 19;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        UICommonButton_o *targetButton,
        System_String_o *text,
        bool isSelectedButton,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *Component_object; // x0
  __int64 v14; // x1
  __int64 *v15; // x8
  Il2CppObject *ComponentInChildren_object__48440272; // x21
  float *v17; // x8
  float v18; // s10
  float v19; // s11
  float v20; // s8
  float v21; // s9
  float *v22; // x8
  float v23; // s12
  float v24; // s13
  float v25; // s14
  float v26; // s15
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s3

  if ( (byte_49FB37B & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, targetButton);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UISprite___, v8);
    sub_1B64870(&LocalizationManager_TypeInfo, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&StringLiteral_17411/*"btn_bg_20"*/, v11);
    sub_1B64870(&StringLiteral_17412/*"btn_bg_21"*/, v12);
    byte_49FB37B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)targetButton, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !targetButton )
      goto LABEL_38;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)targetButton,
                         (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_object )
      goto LABEL_38;
    v15 = &StringLiteral_17412/*"btn_bg_21"*/;
    if ( !isSelectedButton )
      v15 = &StringLiteral_17411/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v15, 0LL);
    ComponentInChildren_object__48440272 = UnityEngine_Component__GetComponentInChildren_object__48440272(
                                             (UnityEngine_Component_o *)targetButton,
                                             (const MethodInfo_2E323D0 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__48440272, 0LL, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_49F988B )
      {
        sub_1B64870(&LocalizationManager_TypeInfo, v14);
        byte_49F988B = 1;
      }
      Component_object = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Component_object = LocalizationManager_TypeInfo;
      }
      v17 = (float *)*((_QWORD *)Component_object + 23);
      v19 = v17[20];
      v18 = v17[21];
      v21 = v17[22];
      v20 = v17[23];
      if ( !byte_49F988C )
      {
        sub_1B64870(&LocalizationManager_TypeInfo, v14);
        Component_object = LocalizationManager_TypeInfo;
        byte_49F988C = 1;
      }
      if ( !*((_DWORD *)Component_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_object);
        Component_object = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_object__48440272 )
      {
        v22 = (float *)*((_QWORD *)Component_object + 23);
        v23 = v22[24];
        v24 = v22[25];
        v25 = v22[26];
        v26 = v22[27];
        UILabel__set_text((UILabel_o *)ComponentInChildren_object__48440272, text, 0LL);
        if ( isSelectedButton )
          v27 = v23;
        else
          v27 = v19;
        if ( isSelectedButton )
          v28 = v24;
        else
          v28 = v18;
        if ( isSelectedButton )
          v29 = v25;
        else
          v29 = v21;
        if ( isSelectedButton )
          v30 = v26;
        else
          v30 = v20;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_object__48440272, *(UnityEngine_Color_o *)&v27, 0LL);
        return;
      }
LABEL_38:
      sub_1B64ACC(Component_object, v14);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetItem(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  this->fields.dispMode = mode;
  if ( item )
  {
    if ( mode )
      ServantStatusListViewItemDrawRandomLimitCountSetting__Setup(this, item, *(const MethodInfo **)&mode);
  }
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__Setup(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *myServantInfo; // x22
  int32_t ownRandomSettingButtonIndex; // w21
  System_String_o *v11; // x23
  System_String_o *v12; // x0
  ServantStatusListViewItem_o *v13; // x2
  const MethodInfo *v14; // x6
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *supportServantInfo; // x21
  int32_t SupportRandomSettingParam; // w22
  System_String_o *v17; // x23
  System_String_o *v18; // x0
  ServantStatusListViewItem_o *v19; // x2
  const MethodInfo *v20; // x6
  const MethodInfo *v21; // x2

  if ( (byte_49FB379 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, item);
    sub_1B64870(&StringLiteral_11864/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, v5);
    sub_1B64870(&StringLiteral_11865/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, v6);
    sub_1B64870(&StringLiteral_11868/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, v7);
    sub_1B64870(&StringLiteral_11869/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, v8);
    byte_49FB379 = 1;
  }
  if ( item )
  {
    myServantInfo = this->fields.myServantInfo;
    ownRandomSettingButtonIndex = item->fields.ownRandomSettingButtonIndex;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11864/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, 0LL);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11865/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      myServantInfo,
      v13,
      ownRandomSettingButtonIndex,
      v11,
      v12,
      v14);
    supportServantInfo = this->fields.supportServantInfo;
    SupportRandomSettingParam = ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0LL);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11868/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, 0LL);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11869/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      supportServantInfo,
      v19,
      SupportRandomSettingParam,
      v17,
      v18,
      v20);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask(this, item, v21);
  }
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *target,
        ServantStatusListViewItem_o *item,
        int32_t selectedButtonIndex,
        System_String_o *buttonText,
        System_String_o *explanationText,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *NameTxt; // x24
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v20; // x0
  const MethodInfo *v21; // x4
  System_String_o *v22; // x2
  bool RandomLimitCountOwn; // w23
  System_String_o **v24; // x8
  bool RandomLimitCountFriend; // w22
  System_String_o **v26; // x8
  UICommonButton_o *SettingRandomOn; // x22
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v28; // x0
  const MethodInfo *v29; // x4
  UICommonButton_o *SettingRandomOff; // x22
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v31; // x0
  const MethodInfo *v32; // x4
  UnityEngine_Object_o *explanationLabel; // x21

  v11 = this;
  if ( (byte_49FB37A & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, target);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v12);
    sub_1B64870(&OptionManager_TypeInfo, v13);
    sub_1B64870(&StringLiteral_11867/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/, v14);
    sub_1B64870(&StringLiteral_11862/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/, v15);
    sub_1B64870(&StringLiteral_11866/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, v16);
    sub_1B64870(&StringLiteral_1/*""*/, v17);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1B64870(&StringLiteral_11861/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/, v18);
    byte_49FB37A = 1;
  }
  if ( !target )
    goto LABEL_35;
  NameTxt = (UnityEngine_Object_o *)target->fields.NameTxt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(NameTxt, 0LL, 0LL) )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.NameTxt;
    if ( !this )
      goto LABEL_35;
    UILabel__set_text((UILabel_o *)this, buttonText, 0LL);
    if ( target == v11->fields.myServantInfo )
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = (System_String_o **)&StringLiteral_11862/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      if ( !RandomLimitCountOwn )
        v24 = (System_String_o **)&StringLiteral_11861/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      v20 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(*v24, 0LL);
      v22 = (System_String_o *)v20;
    }
    else
    {
      v22 = (System_String_o *)StringLiteral_1/*""*/;
    }
    if ( target == v11->fields.supportServantInfo )
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend(0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = (System_String_o **)&StringLiteral_11862/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      if ( !RandomLimitCountFriend )
        v26 = (System_String_o **)&StringLiteral_11861/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      v20 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(*v26, 0LL);
      v22 = (System_String_o *)v20;
    }
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v20,
      target->fields.SettingAll,
      v22,
      selectedButtonIndex == 0,
      v21);
    SettingRandomOn = target->fields.SettingRandomOn;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_11867/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/,
                                                                      0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v28,
      SettingRandomOn,
      (System_String_o *)v28,
      selectedButtonIndex == 1,
      v29);
    SettingRandomOff = target->fields.SettingRandomOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_11866/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/,
                                                                      0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v31,
      SettingRandomOff,
      (System_String_o *)v31,
      selectedButtonIndex == 2,
      v32);
    explanationLabel = (UnityEngine_Object_o *)target->fields.explanationLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(explanationLabel, 0LL, 0LL) )
    {
      this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.explanationLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, explanationText, 0LL);
        return;
      }
LABEL_35:
      sub_1B64ACC(this, target);
    }
  }
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  _BOOL4 v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_49FB37C & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
    byte_49FB37C = 1;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v9.fields.currentCryptoKey = v7;
      *(_QWORD *)&v9.fields.fakeValue = v6;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v9, 0LL) == 0;
    }
    else
    {
      v8 = 1;
    }
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_33470496(this, v8, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_33470496(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v8; // x21
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v10; // x21
  struct UnityEngine_Vector2_StaticFields *v11; // x8
  float y; // s8
  float x; // s10
  float v14; // s9
  float v15; // s11
  System_String_o *Empty; // x21
  float v17; // s12
  float v18; // s13
  int32_t v19; // w1
  int32_t v20; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Vector2_o v23; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v24; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49FB37D & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, *(_QWORD *)&maskType);
    sub_1B64870(&string_TypeInfo, v5);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1B64870(&StringLiteral_11863/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, v6);
    byte_49FB37D = 1;
  }
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  v8 = this;
  if ( !byte_49F90FA )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1B64870(
                                                                       &UnityEngine_Vector2_TypeInfo,
                                                                       *(_QWORD *)&maskType);
    byte_49F90FA = 1;
  }
  if ( !v8 )
    goto LABEL_40;
  v25.fields.z = 0.0;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v25.fields.x = static_fields->zeroVector.fields.x;
  v25.fields.y = static_fields->zeroVector.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v8, v25, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  v10 = this;
  if ( !byte_49F9201 )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1B64870(
                                                                       &UnityEngine_Vector3_TypeInfo,
                                                                       *(_QWORD *)&maskType);
    byte_49F9201 = 1;
  }
  if ( !v10 )
    goto LABEL_40;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v10,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_40;
  if ( !maskType )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.lineSprite;
  if ( !this )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  if ( !this )
    goto LABEL_40;
  UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !byte_49F90FA )
  {
    sub_1B64870(&UnityEngine_Vector2_TypeInfo, *(_QWORD *)&maskType);
    byte_49F90FA = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this )
    goto LABEL_40;
  v11 = UnityEngine_Vector2_TypeInfo->static_fields;
  x = v11->zeroVector.fields.x;
  y = v11->zeroVector.fields.y;
  v14 = v11->zeroVector.fields.x;
  v15 = y;
  Empty = string_TypeInfo->static_fields->Empty;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  if ( maskType == 1 )
  {
    v18 = v4->fields.MASK_SIZE_ALL.fields.x;
    v17 = v4->fields.MASK_SIZE_ALL.fields.y;
    x = v4->fields.MASK_POS_ALL.fields.x;
    v15 = v4->fields.MASK_POS_ALL.fields.y;
    v14 = v4->fields.MASK_LABEL_POS_ALL.fields.x;
    y = v4->fields.MASK_LABEL_POS_ALL.fields.y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_11863/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, 0LL);
  }
  else
  {
    v17 = y;
    v18 = x;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  v19 = v18 == INFINITY ? 0x80000000 : (int)v18;
  UIWidget__set_width((UIWidget_o *)this, v19, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  v20 = v17 == INFINITY ? 0x80000000 : (int)v17;
  UIWidget__set_height((UIWidget_o *)this, v20, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v23.fields.x = x;
  v23.fields.y = v15;
  GameObjectExtensions__SetLocalPosition_33376392(gameObject, v23, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this
    || (v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        v24.fields.x = v14,
        v24.fields.y = y,
        GameObjectExtensions__SetLocalPosition_33376392(v22, v24, 0LL),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)this, Empty, 0LL),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel) == 0LL) )
  {
LABEL_40:
    sub_1B64ACC(this, *(_QWORD *)&maskType);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.MASK_LABEL_MAX_WIDTH, 0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}