void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  LODWORD(this->fields.MASK_SIZE_ALL.fields.x) = 550;
  *(_OWORD *)&this->fields.MASK_SIZE_ALL.fields.y = xmmword_3330690;
  *(_QWORD *)&this->fields.MASK_LABEL_POS_ALL.fields.y = 0xC130000000000000LL;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
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
  void *Component_WebViewObject; // x0
  __int64 v9; // x1
  __int64 *v10; // x8
  UIWidget_o *ComponentInChildren_UIWidget; // x21
  float *v12; // x8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s11
  float *v17; // x8
  float v18; // s12
  float v19; // s13
  float v20; // s14
  float v21; // s15
  float v22; // s3
  float v23; // s2
  float v24; // s1
  float v25; // s0

  if ( (byte_438F2E3 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17304/*"btn_bg_20"*/);
    sub_B775C4(&StringLiteral_17305/*"btn_bg_21"*/);
    byte_438F2E3 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_WebViewObject = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)targetButton, 0LL, 0LL);
  if ( ((unsigned __int8)Component_WebViewObject & 1) != 0 )
  {
    if ( !targetButton )
      goto LABEL_43;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)targetButton,
                                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_WebViewObject )
      goto LABEL_43;
    v10 = &StringLiteral_17305/*"btn_bg_21"*/;
    if ( !isSelectedButton )
      v10 = &StringLiteral_17304/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_WebViewObject, (System_String_o *)*v10, 0LL);
    ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                     (UnityEngine_Component_o *)targetButton,
                                     (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_UIWidget, 0LL, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_4387FCE )
      {
        sub_B775C4(&LocalizationManager_TypeInfo);
        byte_4387FCE = 1;
      }
      Component_WebViewObject = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Component_WebViewObject = LocalizationManager_TypeInfo;
      }
      v12 = (float *)*((_QWORD *)Component_WebViewObject + 23);
      v13 = v12[20];
      v14 = v12[21];
      v15 = v12[22];
      v16 = v12[23];
      if ( !byte_4387FCF )
      {
        sub_B775C4(&LocalizationManager_TypeInfo);
        Component_WebViewObject = LocalizationManager_TypeInfo;
        byte_4387FCF = 1;
      }
      if ( (*((_BYTE *)Component_WebViewObject + 307) & 4) != 0 && !*((_DWORD *)Component_WebViewObject + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_WebViewObject);
        Component_WebViewObject = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_UIWidget )
      {
        v17 = (float *)*((_QWORD *)Component_WebViewObject + 23);
        v18 = v17[24];
        v19 = v17[25];
        v20 = v17[26];
        v21 = v17[27];
        UILabel__set_text((UILabel_o *)ComponentInChildren_UIWidget, text, 0LL);
        if ( isSelectedButton )
          v22 = v21;
        else
          v22 = v16;
        if ( isSelectedButton )
          v23 = v20;
        else
          v23 = v15;
        if ( isSelectedButton )
          v24 = v19;
        else
          v24 = v14;
        if ( isSelectedButton )
          v25 = v18;
        else
          v25 = v13;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_UIWidget, *(UnityEngine_Color_o *)(&v22 - 3), 0LL);
        return;
      }
LABEL_43:
      sub_B7769C(Component_WebViewObject, v9);
    }
  }
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetItem(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item )
  {
    if ( mode )
      ServantStatusListViewItemDrawRandomLimitCountSetting__Setup(this, item, v7);
  }
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__Setup(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *myServantInfo; // x21
  int32_t ownRandomSettingButtonIndex; // w22
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

  if ( (byte_438F2E1 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_12253/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/);
    sub_B775C4(&StringLiteral_12254/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_12257/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/);
    sub_B775C4(&StringLiteral_12258/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/);
    byte_438F2E1 = 1;
  }
  if ( item )
  {
    myServantInfo = this->fields.myServantInfo;
    ownRandomSettingButtonIndex = item->fields.ownRandomSettingButtonIndex;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12253/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, 0LL);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12254/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      myServantInfo,
      v9,
      ownRandomSettingButtonIndex,
      v7,
      v8,
      v10);
    supportServantInfo = this->fields.supportServantInfo;
    SupportRandomSettingParam = ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0LL);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12257/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, 0LL);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12258/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, 0LL);
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
  UnityEngine_Object_o *NameTxt; // x24
  System_String_o *v13; // x0
  const MethodInfo *v14; // x4
  System_String_o *v15; // x2
  __int64 *v16; // x8
  __int64 *v17; // x8
  UICommonButton_o *SettingRandomOn; // x22
  System_String_o *v19; // x0
  const MethodInfo *v20; // x4
  UICommonButton_o *SettingRandomOff; // x22
  System_String_o *v22; // x0
  const MethodInfo *v23; // x4
  UnityEngine_Object_o *explanationLabel; // x21

  v11 = this;
  if ( (byte_438F2E2 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&StringLiteral_12256/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/);
    sub_B775C4(&StringLiteral_12251/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/);
    sub_B775C4(&StringLiteral_12255/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_B775C4(&StringLiteral_12250/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/);
    byte_438F2E2 = 1;
  }
  if ( !target )
    goto LABEL_51;
  NameTxt = (UnityEngine_Object_o *)target->fields.NameTxt;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(NameTxt, 0LL, 0LL) )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.NameTxt;
    if ( !this )
      goto LABEL_51;
    UILabel__set_text((UILabel_o *)this, buttonText, 0LL);
    if ( v11->fields.myServantInfo == target )
    {
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetRandomLimitCountOwn(0LL) )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = &StringLiteral_12251/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = &StringLiteral_12250/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      }
      v13 = LocalizationManager__Get((System_String_o *)*v16, 0LL);
      v15 = v13;
    }
    else
    {
      v15 = (System_String_o *)StringLiteral_1/*""*/;
    }
    if ( v11->fields.supportServantInfo == target )
    {
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetRandomLimitCountFriend(0LL) )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_12251/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_12250/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      }
      v13 = LocalizationManager__Get((System_String_o *)*v17, 0LL);
      v15 = v13;
    }
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v13,
      target->fields.SettingAll,
      v15,
      selectedButtonIndex == 0,
      v14);
    SettingRandomOn = target->fields.SettingRandomOn;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12256/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v19,
      SettingRandomOn,
      v19,
      selectedButtonIndex == 1,
      v20);
    SettingRandomOff = target->fields.SettingRandomOff;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12255/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v22,
      SettingRandomOff,
      v22,
      selectedButtonIndex == 2,
      v23);
    explanationLabel = (UnityEngine_Object_o *)target->fields.explanationLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(explanationLabel, 0LL, 0LL) )
    {
      this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.explanationLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, explanationText, 0LL);
        return;
      }
LABEL_51:
      sub_B7769C(this, target);
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
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v8; // x0
  int32_t v9; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_438F2E4 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438F2E4 = 1;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_10;
    v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v10, 0LL) )
    {
      v8 = this;
      v9 = 0;
    }
    else
    {
LABEL_10:
      v9 = 1;
      v8 = this;
    }
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_32983692(v8, v9, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_32983692(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v4; // x19
  struct UISprite_o *baseSprite; // x8
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Vector2_o zero; // kr00_8
  int v8; // s2
  UnityEngine_Transform_o *v9; // x21
  int v10; // s0
  float y; // s12
  float x; // s13
  UnityEngine_Vector2_o v15; // kr08_8
  float v16; // s10
  float v17; // s11
  UnityEngine_Vector2_o v18; // kr10_8
  UnityEngine_Vector2_o v19; // kr18_8
  float v20; // s8
  float v21; // s9
  System_String_o *Empty; // x21
  double v23; // d0
  double v24; // d0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Vector2_o v27; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v28; // 0:s0.4,4:s1.4

  v4 = this;
  if ( (byte_438F2E5 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_B775C4(&StringLiteral_12252/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/);
    byte_438F2E5 = 1;
  }
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_32;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_32;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_32;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  zero = UnityEngine_Vector2__get_zero(0LL);
  if ( !transform )
    goto LABEL_32;
  v8 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&zero.fields.x, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this )
    goto LABEL_32;
  v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v9 )
    goto LABEL_32;
  UnityEngine_Transform__set_localPosition(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_32;
  if ( maskType )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.lineSprite;
    if ( this )
    {
      this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
      if ( this )
      {
        UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        v15 = UnityEngine_Vector2__get_zero(0LL);
        y = v15.fields.y;
        x = v15.fields.x;
        v18 = UnityEngine_Vector2__get_zero(0LL);
        v17 = v18.fields.y;
        v16 = v18.fields.x;
        v19 = UnityEngine_Vector2__get_zero(0LL);
        this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
        if ( this )
        {
          v20 = v19.fields.x;
          v21 = v19.fields.y;
          Empty = string_TypeInfo->static_fields->Empty;
          UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
          if ( maskType == 1 )
          {
            x = v4->fields.MASK_SIZE_ALL.fields.y;
            y = v4->fields.MASK_POS_ALL.fields.x;
            v16 = v4->fields.MASK_POS_ALL.fields.y;
            v17 = v4->fields.MASK_LABEL_POS_ALL.fields.x;
            v20 = v4->fields.MASK_LABEL_POS_ALL.fields.y;
            v21 = *((float *)&v4->fields.MASK_LABEL_POS_ALL + 2);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12252/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, 0LL);
          }
          this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
          if ( this )
          {
            v23 = x;
            if ( x == INFINITY )
              v23 = -x;
            UIWidget__set_width((UIWidget_o *)this, (int)v23, 0LL);
            this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
            if ( this )
            {
              v24 = y;
              if ( y == INFINITY )
                v24 = -INFINITY;
              UIWidget__set_height((UIWidget_o *)this, (int)v24, 0LL);
              this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
              if ( this )
              {
                UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
                this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
                if ( this )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  v27.fields.x = v16;
                  v27.fields.y = v17;
                  GameObjectExtensions__SetLocalPosition_32807552(gameObject, v27, 0LL);
                  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
                  if ( this )
                  {
                    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    v28.fields.x = v20;
                    v28.fields.y = v21;
                    GameObjectExtensions__SetLocalPosition_32807552(v26, v28, 0LL);
                    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, Empty, 0LL);
                      this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
                      if ( this )
                      {
                        UILabel__SetCondensedScale((UILabel_o *)this, LODWORD(v4->fields.MASK_SIZE_ALL.fields.x), 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B7769C(this, *(_QWORD *)&maskType);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}