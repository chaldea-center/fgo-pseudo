void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_POS_BOTTOM.fields.y = 0.0;
  *(_OWORD *)&this->fields.MASK_SIZE_ALL.fields.y = xmmword_31B35C0;
  *(_OWORD *)&this->fields.MASK_LABEL_POS_ALL.fields.y = xmmword_31B35D0;
  LODWORD(this->fields.MASK_SIZE_ALL.fields.x) = 550;
  *(_OWORD *)&this->fields.MASK_POS_TOP.fields.y = xmmword_31B35E0;
  *(_QWORD *)&this->fields.MASK_SIZE_BOTTOM.fields.y = 0x430C000044110000LL;
  this->fields.MASK_LABEL_POS_BOTTOM = (struct UnityEngine_Vector2_o)3264479232LL;
  *((_DWORD *)&this->fields.MASK_LABEL_POS_BOTTOM + 2) = -1030488064;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__GetKind(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  return 19;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *myServantInfo; // x21
  _BOOL4 isEnableOwnRandomSetting; // w22
  System_String_o *v11; // x23
  System_String_o *v12; // x0
  const MethodInfo *v13; // x5
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *supportServantInfo; // x21
  bool isEnableSupportRandomSetting; // w22
  System_String_o *v16; // x23
  System_String_o *v17; // x0
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x2

  if ( (byte_418A7D7 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&StringLiteral_12023/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, v5);
    sub_B2C35C(&StringLiteral_12024/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, v6);
    sub_B2C35C(&StringLiteral_12025/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, v7);
    sub_B2C35C(&StringLiteral_12026/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, v8);
    byte_418A7D7 = 1;
  }
  if ( item )
  {
    myServantInfo = this->fields.myServantInfo;
    isEnableOwnRandomSetting = item->fields.isEnableOwnRandomSetting;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12023/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, 0LL);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12024/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v12,
      myServantInfo,
      isEnableOwnRandomSetting,
      v11,
      v12,
      v13);
    supportServantInfo = this->fields.supportServantInfo;
    isEnableSupportRandomSetting = item->fields.isEnableSupportRandomSetting;
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12025/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, 0LL);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12026/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v17,
      supportServantInfo,
      isEnableSupportRandomSetting,
      v16,
      v17,
      v18);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask(this, item, v19);
  }
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *target,
        bool isButtonOn,
        System_String_o *buttonText,
        System_String_o *explanationText,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 *v11; // x8

  if ( (byte_418A7D8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, target);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v10);
    byte_418A7D8 = 1;
  }
  if ( !target )
    goto LABEL_10;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.button;
  if ( !this )
    goto LABEL_10;
  v11 = &StringLiteral_17006/*"btn_on"*/;
  if ( !isButtonOn )
    v11 = &StringLiteral_17005/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)*v11, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.buttonLabel;
  if ( !this
    || (UILabel__set_text((UILabel_o *)this, buttonText, 0LL),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.explanationLabel) == 0LL) )
  {
LABEL_10:
    sub_B2C434(this, target);
  }
  UILabel__set_text((UILabel_o *)this, explanationText, 0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v7; // x20
  __int64 v8; // x21
  int32_t v9; // w1
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v10; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_418A7D9 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
    sub_B2C35C(&OptionManager_TypeInfo, v5);
    byte_418A7D9 = 1;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_18;
    v8 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v11.fields.currentCryptoKey = v8;
    *(_QWORD *)&v11.fields.fakeValue = v7;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v11, 0LL) )
    {
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetRandomLimitCountOwn(0LL) )
        goto LABEL_35;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetRandomLimitCountFriend(0LL) )
      {
        v9 = 4;
      }
      else
      {
LABEL_35:
        if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OptionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        }
        if ( OptionManager__GetRandomLimitCountOwn(0LL) )
        {
          v9 = 2;
        }
        else
        {
          if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !OptionManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
          }
          if ( !OptionManager__GetRandomLimitCountFriend(0LL) )
          {
            v10 = this;
            v9 = 0;
            goto LABEL_20;
          }
          v9 = 3;
        }
      }
    }
    else
    {
LABEL_18:
      v9 = 1;
    }
    v10 = this;
LABEL_20:
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_30308592(v10, v9, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_30308592(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UISprite_o *baseSprite; // x8
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Vector2_o zero; // kr00_8
  int v13; // s2
  UnityEngine_Transform_o *v14; // x21
  int v15; // s0
  float y; // s12
  float x; // s13
  UnityEngine_Vector2_o v20; // kr08_8
  float v21; // s10
  float v22; // s11
  UnityEngine_Vector2_o v23; // kr10_8
  UnityEngine_Vector2_o v24; // kr18_8
  float v25; // s8
  float v26; // s9
  System_String_o *Empty; // x21
  __int64 *v28; // x8
  double v29; // d0
  double v30; // d0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Vector2_o v33; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v34; // 0:s0.4,4:s1.4

  v4 = this;
  if ( (byte_418A7DA & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&maskType);
    sub_B2C35C(&string_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_12022/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, v6);
    sub_B2C35C(&StringLiteral_12019/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_ALL"*/, v7);
    sub_B2C35C(&StringLiteral_12020/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_ALL_OWN"*/, v8);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_B2C35C(&StringLiteral_12021/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_ALL_SUPPORT"*/, v9);
    byte_418A7DA = 1;
  }
  baseSprite = v4->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_46;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_46;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_46;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  zero = UnityEngine_Vector2__get_zero(0LL);
  if ( !transform )
    goto LABEL_46;
  v13 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&zero.fields.x, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this )
    goto LABEL_46;
  v14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v14 )
    goto LABEL_46;
  UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskBase;
  if ( !this )
    goto LABEL_46;
  if ( !maskType )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.lineSprite;
  if ( !this )
    goto LABEL_46;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  if ( !this )
    goto LABEL_46;
  UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v20 = UnityEngine_Vector2__get_zero(0LL);
  y = v20.fields.y;
  x = v20.fields.x;
  v23 = UnityEngine_Vector2__get_zero(0LL);
  v22 = v23.fields.y;
  v21 = v23.fields.x;
  v24 = UnityEngine_Vector2__get_zero(0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this )
    goto LABEL_46;
  v25 = v24.fields.x;
  v26 = v24.fields.y;
  Empty = string_TypeInfo->static_fields->Empty;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
  switch ( maskType )
  {
    case 1:
    case 4:
      x = v4->fields.MASK_SIZE_ALL.fields.y;
      y = v4->fields.MASK_POS_ALL.fields.x;
      v21 = v4->fields.MASK_POS_ALL.fields.y;
      v22 = v4->fields.MASK_LABEL_POS_ALL.fields.x;
      v25 = v4->fields.MASK_LABEL_POS_ALL.fields.y;
      v26 = v4->fields.MASK_SIZE_TOP.fields.x;
      if ( maskType == 4 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v28 = &StringLiteral_12019/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_ALL"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v28 = &StringLiteral_12022/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/;
      }
      goto LABEL_33;
    case 2:
      x = v4->fields.MASK_SIZE_TOP.fields.y;
      y = v4->fields.MASK_POS_TOP.fields.x;
      v21 = v4->fields.MASK_POS_TOP.fields.y;
      v22 = v4->fields.MASK_LABEL_POS_TOP.fields.x;
      v25 = v4->fields.MASK_LABEL_POS_TOP.fields.y;
      v26 = v4->fields.MASK_SIZE_BOTTOM.fields.x;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = &StringLiteral_12020/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_ALL_OWN"*/;
      goto LABEL_33;
    case 3:
      x = v4->fields.MASK_SIZE_BOTTOM.fields.y;
      y = v4->fields.MASK_POS_BOTTOM.fields.x;
      v21 = v4->fields.MASK_POS_BOTTOM.fields.y;
      v22 = v4->fields.MASK_LABEL_POS_BOTTOM.fields.x;
      v25 = v4->fields.MASK_LABEL_POS_BOTTOM.fields.y;
      v26 = *((float *)&v4->fields.MASK_LABEL_POS_BOTTOM + 2);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = &StringLiteral_12021/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_ALL_SUPPORT"*/;
LABEL_33:
      Empty = LocalizationManager__Get((System_String_o *)*v28, 0LL);
      break;
    default:
      break;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_46;
  v29 = x;
  if ( x == INFINITY )
    v29 = -x;
  UIWidget__set_width((UIWidget_o *)this, (int)v29, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_46;
  v30 = y;
  if ( y == INFINITY )
    v30 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)this, (int)v30, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_46;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_46;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v33.fields.x = v21;
  v33.fields.y = v22;
  GameObjectExtensions__SetLocalPosition_31325816(gameObject, v33, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel;
  if ( !this
    || (v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        v34.fields.x = v25,
        v34.fields.y = v26,
        GameObjectExtensions__SetLocalPosition_31325816(v32, v34, 0LL),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)this, Empty, 0LL),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v4->fields.informationLabel) == 0LL) )
  {
LABEL_46:
    sub_B2C434(this, *(_QWORD *)&maskType);
  }
  UILabel__SetCondensedScale((UILabel_o *)this, LODWORD(v4->fields.MASK_SIZE_ALL.fields.x), 0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}