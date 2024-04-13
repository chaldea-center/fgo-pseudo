void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  LODWORD(this->fields.MASK_SIZE_ALL.fields.x) = 550;
  *(_OWORD *)&this->fields.MASK_SIZE_ALL.fields.y = xmmword_32B54D0;
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  void *Component_WebViewObject; // x0
  __int64 v24; // x1
  __int64 *v25; // x8
  UIWidget_o *ComponentInChildren_UIWidget; // x21
  int v27; // w2
  __int64 v28; // x3
  float *v29; // x8
  float v30; // s8
  float v31; // s9
  float v32; // s10
  float v33; // s11
  float *v34; // x8
  float v35; // s12
  float v36; // s13
  float v37; // s14
  float v38; // s15
  float v39; // s3
  float v40; // s2
  float v41; // s1
  float v42; // s0

  if ( (byte_42ECB6D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentInChildren_UILabel___,
      (_DWORD)targetButton,
      (_DWORD)text,
      isSelectedButton);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v20, v21, v22);
    byte_42ECB6D = 1;
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
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_WebViewObject )
      goto LABEL_43;
    v25 = &StringLiteral_17175/*"btn_bg_21"*/;
    if ( !isSelectedButton )
      v25 = &StringLiteral_17174/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_WebViewObject, (System_String_o *)*v25, 0LL);
    ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                     (UnityEngine_Component_o *)targetButton,
                                     (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
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
      if ( !byte_42E563C )
      {
        sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v27, v28);
        byte_42E563C = 1;
      }
      Component_WebViewObject = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Component_WebViewObject = LocalizationManager_TypeInfo;
      }
      v29 = (float *)*((_QWORD *)Component_WebViewObject + 23);
      v30 = v29[20];
      v31 = v29[21];
      v32 = v29[22];
      v33 = v29[23];
      if ( !byte_42E563D )
      {
        sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v27, v28);
        Component_WebViewObject = LocalizationManager_TypeInfo;
        byte_42E563D = 1;
      }
      if ( (*((_BYTE *)Component_WebViewObject + 307) & 4) != 0 && !*((_DWORD *)Component_WebViewObject + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_WebViewObject);
        Component_WebViewObject = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_UIWidget )
      {
        v34 = (float *)*((_QWORD *)Component_WebViewObject + 23);
        v35 = v34[24];
        v36 = v34[25];
        v37 = v34[26];
        v38 = v34[27];
        UILabel__set_text((UILabel_o *)ComponentInChildren_UIWidget, text, 0LL);
        if ( isSelectedButton )
          v39 = v38;
        else
          v39 = v33;
        if ( isSelectedButton )
          v40 = v37;
        else
          v40 = v32;
        if ( isSelectedButton )
          v41 = v36;
        else
          v41 = v31;
        if ( isSelectedButton )
          v42 = v35;
        else
          v42 = v30;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_UIWidget, *(UnityEngine_Color_o *)(&v39 - 3), 0LL);
        return;
      }
LABEL_43:
      sub_B5D69C(Component_WebViewObject, v24);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *myServantInfo; // x21
  int32_t ownRandomSettingButtonIndex; // w22
  System_String_o *v20; // x23
  System_String_o *v21; // x0
  ServantStatusListViewItem_o *v22; // x2
  const MethodInfo *v23; // x6
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *supportServantInfo; // x21
  int32_t SupportRandomSettingParam; // w22
  System_String_o *v26; // x23
  System_String_o *v27; // x0
  ServantStatusListViewItem_o *v28; // x2
  const MethodInfo *v29; // x6
  const MethodInfo *v30; // x2

  if ( (byte_42ECB6B & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12168/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_12169/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_12172/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12173/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, v15, v16, v17);
    byte_42ECB6B = 1;
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
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12168/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, 0LL);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12169/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      myServantInfo,
      v22,
      ownRandomSettingButtonIndex,
      v20,
      v21,
      v23);
    supportServantInfo = this->fields.supportServantInfo;
    SupportRandomSettingParam = ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0LL);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12172/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, 0LL);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12173/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      supportServantInfo,
      v28,
      SupportRandomSettingParam,
      v26,
      v27,
      v29);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask(this, item, v30);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  UnityEngine_Object_o *NameTxt; // x24
  System_String_o *v34; // x0
  const MethodInfo *v35; // x4
  System_String_o *v36; // x2
  __int64 *v37; // x8
  __int64 *v38; // x8
  UICommonButton_o *SettingRandomOn; // x22
  System_String_o *v40; // x0
  const MethodInfo *v41; // x4
  UICommonButton_o *SettingRandomOff; // x22
  System_String_o *v43; // x0
  const MethodInfo *v44; // x4
  UnityEngine_Object_o *explanationLabel; // x21

  v11 = this;
  if ( (byte_42ECB6C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)target, (_DWORD)item, *(_QWORD *)&selectedButtonIndex);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&OptionManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12171/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12166/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12170/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1/*""*/, v27, v28, v29);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_B5D5C4(&StringLiteral_12165/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/, v30, v31, v32);
    byte_42ECB6C = 1;
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
        v37 = &StringLiteral_12166/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v37 = &StringLiteral_12165/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      }
      v34 = LocalizationManager__Get((System_String_o *)*v37, 0LL);
      v36 = v34;
    }
    else
    {
      v36 = (System_String_o *)StringLiteral_1/*""*/;
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
        v38 = &StringLiteral_12166/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v38 = &StringLiteral_12165/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      }
      v34 = LocalizationManager__Get((System_String_o *)*v38, 0LL);
      v36 = v34;
    }
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v34,
      target->fields.SettingAll,
      v36,
      selectedButtonIndex == 0,
      v35);
    SettingRandomOn = target->fields.SettingRandomOn;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12171/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v40,
      SettingRandomOn,
      v40,
      selectedButtonIndex == 1,
      v41);
    SettingRandomOff = target->fields.SettingRandomOff;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12170/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v43,
      SettingRandomOff,
      v43,
      selectedButtonIndex == 2,
      v44);
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
      sub_B5D69C(this, target);
    }
  }
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v7; // x20
  __int64 v8; // x21
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v9; // x0
  int32_t v10; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42ECB6E & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42ECB6E = 1;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_10;
    v8 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v11.fields.currentCryptoKey = v8;
    *(_QWORD *)&v11.fields.fakeValue = v7;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL) )
    {
      v9 = this;
      v10 = 0;
    }
    else
    {
LABEL_10:
      v10 = 1;
      v9 = this;
    }
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_33226436(v9, v10, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_33226436(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct UISprite_o *baseSprite; // x8
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Vector2_o zero; // kr00_8
  int v15; // s2
  UnityEngine_Transform_o *v16; // x21
  int v17; // s0
  float y; // s12
  float x; // s13
  UnityEngine_Vector2_o v22; // kr08_8
  float v23; // s10
  float v24; // s11
  UnityEngine_Vector2_o v25; // kr10_8
  UnityEngine_Vector2_o v26; // kr18_8
  float v27; // s8
  float v28; // s9
  System_String_o *Empty; // x21
  double v30; // d0
  double v31; // d0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Vector2_o v34; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v35; // 0:s0.4,4:s1.4

  v5 = this;
  if ( (byte_42ECB6F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, maskType, (_DWORD)method, v3);
    sub_B5D5C4(&string_TypeInfo, v6, v7, v8);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_B5D5C4(&StringLiteral_12167/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, v9, v10, v11);
    byte_42ECB6F = 1;
  }
  baseSprite = v5->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_32;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_32;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_32;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  zero = UnityEngine_Vector2__get_zero(0LL);
  if ( !transform )
    goto LABEL_32;
  v15 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&zero.fields.x, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.informationLabel;
  if ( !this )
    goto LABEL_32;
  v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v16 )
    goto LABEL_32;
  UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.maskBase;
  if ( !this )
    goto LABEL_32;
  if ( maskType )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.lineSprite;
    if ( this )
    {
      this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
      if ( this )
      {
        UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        v22 = UnityEngine_Vector2__get_zero(0LL);
        y = v22.fields.y;
        x = v22.fields.x;
        v25 = UnityEngine_Vector2__get_zero(0LL);
        v24 = v25.fields.y;
        v23 = v25.fields.x;
        v26 = UnityEngine_Vector2__get_zero(0LL);
        this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.informationLabel;
        if ( this )
        {
          v27 = v26.fields.x;
          v28 = v26.fields.y;
          Empty = string_TypeInfo->static_fields->Empty;
          UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
          if ( maskType == 1 )
          {
            x = v5->fields.MASK_SIZE_ALL.fields.y;
            y = v5->fields.MASK_POS_ALL.fields.x;
            v23 = v5->fields.MASK_POS_ALL.fields.y;
            v24 = v5->fields.MASK_LABEL_POS_ALL.fields.x;
            v27 = v5->fields.MASK_LABEL_POS_ALL.fields.y;
            v28 = *((float *)&v5->fields.MASK_LABEL_POS_ALL + 2);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12167/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, 0LL);
          }
          this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.maskSprite;
          if ( this )
          {
            v30 = x;
            if ( x == INFINITY )
              v30 = -x;
            UIWidget__set_width((UIWidget_o *)this, (int)v30, 0LL);
            this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.maskSprite;
            if ( this )
            {
              v31 = y;
              if ( y == INFINITY )
                v31 = -INFINITY;
              UIWidget__set_height((UIWidget_o *)this, (int)v31, 0LL);
              this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.maskSprite;
              if ( this )
              {
                UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
                this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.maskSprite;
                if ( this )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  v34.fields.x = v23;
                  v34.fields.y = v24;
                  GameObjectExtensions__SetLocalPosition_32430388(gameObject, v34, 0LL);
                  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.informationLabel;
                  if ( this )
                  {
                    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    v35.fields.x = v27;
                    v35.fields.y = v28;
                    GameObjectExtensions__SetLocalPosition_32430388(v33, v35, 0LL);
                    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.informationLabel;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, Empty, 0LL);
                      this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v5->fields.informationLabel;
                      if ( this )
                      {
                        UILabel__SetCondensedScale((UILabel_o *)this, LODWORD(v5->fields.MASK_SIZE_ALL.fields.x), 0LL);
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
    sub_B5D69C(this, *(_QWORD *)&maskType);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}