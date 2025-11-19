void ServantStatusListViewItemDrawRandomLimitCountSetting___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_POS_ALL.fields.y = 0.0;
  this->fields.MASK_LABEL_POS_ALL.fields.x = 0.0;
  *(_OWORD *)&this->fields.MASK_LABEL_MAX_WIDTH = xmmword_CED480;
  this->fields.MASK_LABEL_POS_ALL.fields.y = -11.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ServantStatusListViewItemDrawRandomLimitCountSetting__GetKind(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  return 19;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        UICommonButton_o *targetButton,
        System_String_o *text,
        bool isSelectedButton,
        const MethodInfo *method)
{
  void *Component_object; // x0
  __int64 v9; // x1
  __int64 *v10; // x8
  Il2CppObject *ComponentInChildren_object__51584412; // x21
  float *v12; // x8
  float v13; // s10
  float v14; // s11
  float v15; // s8
  float v16; // s9
  float *v17; // x8
  float v18; // s12
  float v19; // s13
  float v20; // s14
  float v21; // s15
  float v22; // s0 OVERLAPPED
  float v23; // s1
  float v24; // s2
  float v25; // s3

  if ( (byte_4CB2E80 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_17462/*"btn_bg_20"*/);
    sub_1C6BA08(&StringLiteral_17463/*"btn_bg_21"*/);
    byte_4CB2E80 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)targetButton, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !targetButton )
      goto LABEL_38;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)targetButton,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_object )
      goto LABEL_38;
    v10 = &StringLiteral_17463/*"btn_bg_21"*/;
    if ( !isSelectedButton )
      v10 = &StringLiteral_17462/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v10, 0);
    ComponentInChildren_object__51584412 = UnityEngine_Component__GetComponentInChildren_object__51584412(
                                             (UnityEngine_Component_o *)targetButton,
                                             (const MethodInfo_3131D9C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__51584412, 0, 0) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4CB0A46 )
      {
        sub_1C6BA08(&LocalizationManager_TypeInfo);
        byte_4CB0A46 = 1;
      }
      Component_object = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Component_object = LocalizationManager_TypeInfo;
      }
      v12 = (float *)*((_QWORD *)Component_object + 23);
      v14 = v12[20];
      v13 = v12[21];
      v16 = v12[22];
      v15 = v12[23];
      if ( !byte_4CB0A47 )
      {
        sub_1C6BA08(&LocalizationManager_TypeInfo);
        Component_object = LocalizationManager_TypeInfo;
        byte_4CB0A47 = 1;
      }
      if ( !*((_DWORD *)Component_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_object);
        Component_object = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_object__51584412 )
      {
        v17 = (float *)*((_QWORD *)Component_object + 23);
        v18 = v17[24];
        v19 = v17[25];
        v20 = v17[26];
        v21 = v17[27];
        UILabel__set_text((UILabel_o *)ComponentInChildren_object__51584412, text, 0);
        if ( isSelectedButton )
          v22 = v18;
        else
          v22 = v14;
        if ( isSelectedButton )
          v23 = v19;
        else
          v23 = v13;
        if ( isSelectedButton )
          v24 = v20;
        else
          v24 = v16;
        if ( isSelectedButton )
          v25 = v21;
        else
          v25 = v15;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_object__51584412, *(UnityEngine_Color_o *)&v22, 0);
        return;
      }
LABEL_38:
      sub_1C6BC60(Component_object, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSetting__SetItem(
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


void ServantStatusListViewItemDrawRandomLimitCountSetting__Setup(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *myServantInfo; // x22
  int32_t ownRandomSettingButtonIndex; // w21
  System_String_o *v7; // x23
  System_String_o *v8; // x0
  ServantStatusListViewItem_o *v9; // x2
  const MethodInfo *v10; // x6
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *supportServantInfo; // x21
  int32_t SupportRandomSettingParam; // w22
  System_String_o *v13; // x23
  System_String_o *v14; // x0
  ServantStatusListViewItem_o *v15; // x2
  const MethodInfo *v16; // x6
  const MethodInfo *v17; // x2

  if ( (byte_4CB2E7E & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11971/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/);
    sub_1C6BA08(&StringLiteral_11972/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/);
    sub_1C6BA08(&StringLiteral_11975/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/);
    sub_1C6BA08(&StringLiteral_11976/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/);
    byte_4CB2E7E = 1;
  }
  if ( item )
  {
    myServantInfo = this->fields.myServantInfo;
    ownRandomSettingButtonIndex = item->fields.ownRandomSettingButtonIndex;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11971/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, 0);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11972/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, 0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      myServantInfo,
      v9,
      ownRandomSettingButtonIndex,
      v7,
      v8,
      v10);
    supportServantInfo = this->fields.supportServantInfo;
    SupportRandomSettingParam = ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11975/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, 0);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11976/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, 0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      supportServantInfo,
      v15,
      SupportRandomSettingParam,
      v13,
      v14,
      v16);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask(this, item, v17);
  }
}


void ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *target,
        ServantStatusListViewItem_o *item,
        int32_t selectedButtonIndex,
        System_String_o *buttonText,
        System_String_o *explanationText,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v11; // x22
  UnityEngine_Object_o *NameTxt; // x24
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v13; // x0
  const MethodInfo *v14; // x4
  System_String_o *v15; // x2
  bool RandomLimitCountOwn; // w23
  System_String_o **v17; // x8
  bool RandomLimitCountFriend; // w22
  System_String_o **v19; // x8
  UICommonButton_o *SettingRandomOn; // x22
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v21; // x0
  const MethodInfo *v22; // x4
  UICommonButton_o *SettingRandomOff; // x22
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v24; // x0
  const MethodInfo *v25; // x4
  UnityEngine_Object_o *explanationLabel; // x21

  v11 = this;
  if ( (byte_4CB2E7F & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&OptionManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11974/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_11969/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_11973/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1C6BA08(&StringLiteral_11968/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/);
    byte_4CB2E7F = 1;
  }
  if ( !target )
    goto LABEL_35;
  NameTxt = (UnityEngine_Object_o *)target->fields.NameTxt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(NameTxt, 0, 0) )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.NameTxt;
    if ( !this )
      goto LABEL_35;
    UILabel__set_text((UILabel_o *)this, buttonText, 0);
    if ( target == v11->fields.myServantInfo )
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = (System_String_o **)&StringLiteral_11969/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      if ( !RandomLimitCountOwn )
        v17 = (System_String_o **)&StringLiteral_11968/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      v13 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(*v17, 0);
      v15 = (System_String_o *)v13;
    }
    else
    {
      v15 = (System_String_o *)StringLiteral_1/*""*/;
    }
    if ( target == v11->fields.supportServantInfo )
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend(0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = (System_String_o **)&StringLiteral_11969/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      if ( !RandomLimitCountFriend )
        v19 = (System_String_o **)&StringLiteral_11968/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      v13 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(*v19, 0);
      v15 = (System_String_o *)v13;
    }
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v13,
      target->fields.SettingAll,
      v15,
      selectedButtonIndex == 0,
      v14);
    SettingRandomOn = target->fields.SettingRandomOn;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_11974/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/,
                                                                      0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v21,
      SettingRandomOn,
      (System_String_o *)v21,
      selectedButtonIndex == 1,
      v22);
    SettingRandomOff = target->fields.SettingRandomOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_11973/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/,
                                                                      0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v24,
      SettingRandomOff,
      (System_String_o *)v24,
      selectedButtonIndex == 2,
      v25);
    explanationLabel = (UnityEngine_Object_o *)target->fields.explanationLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(explanationLabel, 0, 0) )
    {
      this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.explanationLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, explanationText, 0);
        return;
      }
LABEL_35:
      sub_1C6BC60(this, target);
    }
  }
}


void ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4CB2E81 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB2E81 = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v9, 0) == 0;
    }
    else
    {
      v8 = 1;
    }
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_36549840(this, v8, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_36549840(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v4; // x19
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v6; // x21
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v8; // x21
  struct UnityEngine_Vector2_StaticFields *v9; // x8
  float y; // s8
  float x; // s10
  float v12; // s9
  float v13; // s11
  System_String_o *Empty; // x21
  float v15; // s12
  float v16; // s13
  int32_t v17; // w1
  int32_t v18; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CB2E82 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1C6BA08(&StringLiteral_11970/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/);
    byte_4CB2E82 = 1;
  }
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
  v6 = this;
  if ( !byte_4CAFAE9 )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1C6BA08(&UnityEngine_Vector2_TypeInfo);
    byte_4CAFAE9 = 1;
  }
  if ( !v6 )
    goto LABEL_40;
  v23.fields.z = 0.0;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v23.fields.x = static_fields->zeroVector.fields.x;
  v23.fields.y = static_fields->zeroVector.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v6, v23, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
  v8 = this;
  if ( !byte_4CAFC09 )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v8 )
    goto LABEL_40;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v8,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_40;
  if ( !maskType )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.lineSprite;
  if ( !this )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
  if ( !this )
    goto LABEL_40;
  UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  if ( !byte_4CAFAE9 )
  {
    sub_1C6BA08(&UnityEngine_Vector2_TypeInfo);
    byte_4CAFAE9 = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this )
    goto LABEL_40;
  v9 = UnityEngine_Vector2_TypeInfo->static_fields;
  x = v9->zeroVector.fields.x;
  y = v9->zeroVector.fields.y;
  v12 = v9->zeroVector.fields.x;
  v13 = y;
  Empty = string_TypeInfo->static_fields->Empty;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
  if ( maskType == 1 )
  {
    v16 = v4->fields.MASK_SIZE_ALL.fields.x;
    v15 = v4->fields.MASK_SIZE_ALL.fields.y;
    x = v4->fields.MASK_POS_ALL.fields.x;
    v13 = v4->fields.MASK_POS_ALL.fields.y;
    v12 = v4->fields.MASK_LABEL_POS_ALL.fields.x;
    y = v4->fields.MASK_LABEL_POS_ALL.fields.y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_11970/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, 0);
  }
  else
  {
    v15 = y;
    v16 = x;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  v17 = v16 == INFINITY ? 0x80000000 : (int)v16;
  UIWidget__set_width((UIWidget_o *)this, v17, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  v18 = v15 == INFINITY ? 0x80000000 : (int)v15;
  UIWidget__set_height((UIWidget_o *)this, v18, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v21.fields.x = x;
  v21.fields.y = v13;
  GameObjectExtensions__SetLocalPosition_36356036(gameObject, v21, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this
    || (v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        v22.fields.x = v12,
        v22.fields.y = y,
        GameObjectExtensions__SetLocalPosition_36356036(v20, v22, 0),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel) == 0)
    || (UILabel__set_text((UILabel_o *)this, Empty, 0),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel) == 0) )
  {
LABEL_40:
    sub_1C6BC60(this, *(_QWORD *)&maskType);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.MASK_LABEL_MAX_WIDTH, 0, 0);
}


void ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}