void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_POS_ALL.fields.y = 0.0;
  this->fields.MASK_LABEL_POS_ALL.fields.x = 0.0;
  *(_OWORD *)&this->fields.MASK_LABEL_MAX_WIDTH = xmmword_BD38E0;
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  void *Component_object; // x0
  __int64 v19; // x1
  __int64 *v20; // x8
  __int64 v21; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x21
  __int64 v23; // x2
  float *v24; // x8
  float v25; // s10
  float v26; // s11
  float v27; // s8
  float v28; // s9
  float *v29; // x8
  float v30; // s12
  float v31; // s13
  float v32; // s14
  float v33; // s15
  float v34; // s0
  float v35; // s1
  float v36; // s2
  float v37; // s3

  if ( (byte_4B13216 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, targetButton, text);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v16, v17);
    byte_4B13216 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetButton);
  Component_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)targetButton, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !targetButton )
      goto LABEL_38;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)targetButton,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_object )
      goto LABEL_38;
    v20 = &StringLiteral_17653/*"btn_bg_21"*/;
    if ( !isSelectedButton )
      v20 = &StringLiteral_17652/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v20, 0LL);
    ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                             (UnityEngine_Component_o *)targetButton,
                                             (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__49322392, 0LL, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      if ( !byte_4B11133 )
      {
        sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v23);
        byte_4B11133 = 1;
      }
      Component_object = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
        Component_object = LocalizationManager_TypeInfo;
      }
      v24 = (float *)*((_QWORD *)Component_object + 23);
      v26 = v24[20];
      v25 = v24[21];
      v28 = v24[22];
      v27 = v24[23];
      if ( !byte_4B11134 )
      {
        sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v23);
        Component_object = LocalizationManager_TypeInfo;
        byte_4B11134 = 1;
      }
      if ( !*((_DWORD *)Component_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_object, v19);
        Component_object = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_object__49322392 )
      {
        v29 = (float *)*((_QWORD *)Component_object + 23);
        v30 = v29[24];
        v31 = v29[25];
        v32 = v29[26];
        v33 = v29[27];
        UILabel__set_text((UILabel_o *)ComponentInChildren_object__49322392, text, 0LL);
        if ( isSelectedButton )
          v34 = v30;
        else
          v34 = v26;
        if ( isSelectedButton )
          v35 = v31;
        else
          v35 = v25;
        if ( isSelectedButton )
          v36 = v32;
        else
          v36 = v28;
        if ( isSelectedButton )
          v37 = v33;
        else
          v37 = v27;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_object__49322392, *(UnityEngine_Color_o *)&v34, 0LL);
        return;
      }
LABEL_38:
      sub_1BCAA3C(Component_object, v19);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *myServantInfo; // x22
  int32_t ownRandomSettingButtonIndex; // w21
  System_String_o *v15; // x23
  System_String_o *v16; // x0
  ServantStatusListViewItem_o *v17; // x2
  const MethodInfo *v18; // x6
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *supportServantInfo; // x21
  int32_t SupportRandomSettingParam; // w22
  System_String_o *v21; // x23
  System_String_o *v22; // x0
  ServantStatusListViewItem_o *v23; // x2
  const MethodInfo *v24; // x6
  const MethodInfo *v25; // x2

  if ( (byte_4B13214 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, method);
    sub_1BCA7E0(&StringLiteral_12054/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_12055/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_12058/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_12059/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, v11, v12);
    byte_4B13214 = 1;
  }
  if ( item )
  {
    myServantInfo = this->fields.myServantInfo;
    ownRandomSettingButtonIndex = item->fields.ownRandomSettingButtonIndex;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, 0LL);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      myServantInfo,
      v17,
      ownRandomSettingButtonIndex,
      v15,
      v16,
      v18);
    supportServantInfo = this->fields.supportServantInfo;
    SupportRandomSettingParam = ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0LL);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12058/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, 0LL);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12059/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      supportServantInfo,
      v23,
      SupportRandomSettingParam,
      v21,
      v22,
      v24);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask(this, item, v25);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *NameTxt; // x24
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x4
  System_String_o *v30; // x2
  __int64 v31; // x1
  bool RandomLimitCountOwn; // w23
  System_String_o **v33; // x8
  __int64 v34; // x1
  bool RandomLimitCountFriend; // w22
  System_String_o **v36; // x8
  __int64 v37; // x1
  UICommonButton_o *SettingRandomOn; // x22
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v39; // x0
  const MethodInfo *v40; // x4
  __int64 v41; // x1
  UICommonButton_o *SettingRandomOff; // x22
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v43; // x0
  const MethodInfo *v44; // x4
  __int64 v45; // x1
  UnityEngine_Object_o *explanationLabel; // x21

  v11 = this;
  if ( (byte_4B13215 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, target, item);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&OptionManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_12057/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_12052/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12056/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1BCA7E0(&StringLiteral_12051/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/, v24, v25);
    byte_4B13215 = 1;
  }
  if ( !target )
    goto LABEL_35;
  NameTxt = (UnityEngine_Object_o *)target->fields.NameTxt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target);
  if ( !UnityEngine_Object__op_Equality(NameTxt, 0LL, 0LL) )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.NameTxt;
    if ( !this )
      goto LABEL_35;
    UILabel__set_text((UILabel_o *)this, buttonText, 0LL);
    if ( target == v11->fields.myServantInfo )
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v28);
      RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
      v33 = (System_String_o **)&StringLiteral_12052/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      if ( !RandomLimitCountOwn )
        v33 = (System_String_o **)&StringLiteral_12051/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      v27 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(*v33, 0LL);
      v30 = (System_String_o *)v27;
    }
    else
    {
      v30 = (System_String_o *)StringLiteral_1/*""*/;
    }
    if ( target == v11->fields.supportServantInfo )
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v28);
      RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend(0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
      v36 = (System_String_o **)&StringLiteral_12052/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      if ( !RandomLimitCountFriend )
        v36 = (System_String_o **)&StringLiteral_12051/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      v27 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(*v36, 0LL);
      v30 = (System_String_o *)v27;
    }
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v27,
      target->fields.SettingAll,
      v30,
      selectedButtonIndex == 0,
      v29);
    SettingRandomOn = target->fields.SettingRandomOn;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
    v39 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_12057/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/,
                                                                      0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v39,
      SettingRandomOn,
      (System_String_o *)v39,
      selectedButtonIndex == 1,
      v40);
    SettingRandomOff = target->fields.SettingRandomOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
    v43 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_12056/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/,
                                                                      0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v43,
      SettingRandomOff,
      (System_String_o *)v43,
      selectedButtonIndex == 2,
      v44);
    explanationLabel = (UnityEngine_Object_o *)target->fields.explanationLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
    if ( UnityEngine_Object__op_Inequality(explanationLabel, 0LL, 0LL) )
    {
      this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.explanationLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, explanationText, 0LL);
        return;
      }
LABEL_35:
      sub_1BCAA3C(this, target);
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

  if ( (byte_4B13217 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item, method);
    byte_4B13217 = 1;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
      *(_QWORD *)&v9.fields.currentCryptoKey = v7;
      *(_QWORD *)&v9.fields.fakeValue = v6;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL) == 0;
    }
    else
    {
      v8 = 1;
    }
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_34786456(this, v8, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_34786456(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct UISprite_o *baseSprite; // x8
  __int64 v10; // x2
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v11; // x21
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  __int64 v13; // x2
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v14; // x21
  __int64 v15; // x2
  struct UnityEngine_Vector2_StaticFields *v16; // x8
  float y; // s8
  float x; // s10
  float v19; // s9
  float v20; // s11
  System_String_o *Empty; // x21
  float v22; // s12
  float v23; // s13
  int32_t v24; // w1
  int32_t v25; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Vector2_o v28; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B13218 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&maskType, method);
    sub_1BCA7E0(&string_TypeInfo, v5, v6);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1BCA7E0(&StringLiteral_12053/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, v7, v8);
    byte_4B13218 = 1;
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
  v11 = this;
  if ( !byte_4B108BA )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1BCA7E0(
                                                                       &UnityEngine_Vector2_TypeInfo,
                                                                       *(_QWORD *)&maskType,
                                                                       v10);
    byte_4B108BA = 1;
  }
  if ( !v11 )
    goto LABEL_40;
  v30.fields.z = 0.0;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v30.fields.x = static_fields->zeroVector.fields.x;
  v30.fields.y = static_fields->zeroVector.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v11, v30, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  v14 = this;
  if ( !byte_4B109C1 )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1BCA7E0(
                                                                       &UnityEngine_Vector3_TypeInfo,
                                                                       *(_QWORD *)&maskType,
                                                                       v13);
    byte_4B109C1 = 1;
  }
  if ( !v14 )
    goto LABEL_40;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v14,
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
  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, *(_QWORD *)&maskType, v15);
    byte_4B108BA = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this )
    goto LABEL_40;
  v16 = UnityEngine_Vector2_TypeInfo->static_fields;
  x = v16->zeroVector.fields.x;
  y = v16->zeroVector.fields.y;
  v19 = v16->zeroVector.fields.x;
  v20 = y;
  Empty = string_TypeInfo->static_fields->Empty;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  if ( maskType == 1 )
  {
    v23 = v4->fields.MASK_SIZE_ALL.fields.x;
    v22 = v4->fields.MASK_SIZE_ALL.fields.y;
    x = v4->fields.MASK_POS_ALL.fields.x;
    v20 = v4->fields.MASK_POS_ALL.fields.y;
    v19 = v4->fields.MASK_LABEL_POS_ALL.fields.x;
    y = v4->fields.MASK_LABEL_POS_ALL.fields.y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&maskType);
    Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12053/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, 0LL);
  }
  else
  {
    v22 = y;
    v23 = x;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  v24 = v23 == INFINITY ? 0x80000000 : (int)v23;
  UIWidget__set_width((UIWidget_o *)this, v24, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  v25 = v22 == INFINITY ? 0x80000000 : (int)v22;
  UIWidget__set_height((UIWidget_o *)this, v25, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v28.fields.x = x;
  v28.fields.y = v20;
  GameObjectExtensions__SetLocalPosition_34330940(gameObject, v28, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this
    || (v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        v29.fields.x = v19,
        v29.fields.y = y,
        GameObjectExtensions__SetLocalPosition_34330940(v27, v29, 0LL),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)this, Empty, 0LL),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel) == 0LL) )
  {
LABEL_40:
    sub_1BCAA3C(this, *(_QWORD *)&maskType);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v4->fields.MASK_LABEL_MAX_WIDTH, 0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}