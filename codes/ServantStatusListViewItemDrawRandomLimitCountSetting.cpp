void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_POS_BOTTOM.fields.y = 0.0;
  *(_OWORD *)&this->fields.MASK_SIZE_ALL.fields.y = xmmword_31485C0;
  *(_OWORD *)&this->fields.MASK_LABEL_POS_ALL.fields.y = xmmword_31485D0;
  LODWORD(this->fields.MASK_SIZE_ALL.fields.x) = 550;
  *(_OWORD *)&this->fields.MASK_POS_TOP.fields.y = xmmword_31485E0;
  *(_QWORD *)&this->fields.MASK_SIZE_BOTTOM.fields.y = 0x430C000044110000LL;
  this->fields.MASK_LABEL_POS_BOTTOM = (struct UnityEngine_Vector2_o)3264479232LL;
  *((_DWORD *)&this->fields.MASK_LABEL_POS_BOTTOM + 2) = -1030488064;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__GetKind(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  return 19;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetItem(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = mode;
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

  if ( (byte_40FDEAF & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_11973, v5);
    sub_B16FFC(&StringLiteral_11974, v6);
    sub_B16FFC(&StringLiteral_11975, v7);
    sub_B16FFC(&StringLiteral_11976, v8);
    byte_40FDEAF = 1;
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
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11973, 0LL);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11974, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v12,
      myServantInfo,
      isEnableOwnRandomSetting,
      v11,
      v12,
      v13);
    supportServantInfo = this->fields.supportServantInfo;
    isEnableSupportRandomSetting = item->fields.isEnableSupportRandomSetting;
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11975, 0LL);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11976, 0LL);
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
  UIButton_o *button; // x0
  __int64 *v12; // x8
  UILabel_o *buttonLabel; // x0
  UILabel_o *explanationLabel; // x0

  if ( (byte_40FDEB0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, target);
    sub_B16FFC(&StringLiteral_16939, v10);
    byte_40FDEB0 = 1;
  }
  if ( !target )
    goto LABEL_10;
  button = target->fields.button;
  if ( !button )
    goto LABEL_10;
  v12 = &StringLiteral_16940;
  if ( !isButtonOn )
    v12 = &StringLiteral_16939;
  UIButton__set_normalSprite(button, (System_String_o *)*v12, 0LL);
  buttonLabel = target->fields.buttonLabel;
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, buttonText, 0LL), (explanationLabel = target->fields.explanationLabel) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UILabel__set_text(explanationLabel, explanationText, 0LL);
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

  if ( (byte_40FDEB1 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
    sub_B16FFC(&OptionManager_TypeInfo, v5);
    byte_40FDEB1 = 1;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL) )
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
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_32636512(v10, v9, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_32636512(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UISprite_o *baseSprite; // x8
  UIWidget_o *maskSprite; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Vector2_o zero; // kr00_8
  int v15; // s2
  UnityEngine_Component_o *informationLabel; // x0
  UnityEngine_Transform_o *v17; // x21
  int v18; // s0
  UnityEngine_GameObject_o *maskBase; // x0
  UnityEngine_Component_o *lineSprite; // x0
  UnityEngine_Transform_o *v23; // x0
  float y; // s12
  float x; // s13
  UnityEngine_Vector2_o v26; // kr08_8
  float v27; // s10
  float v28; // s11
  UnityEngine_Vector2_o v29; // kr10_8
  UnityEngine_Vector2_o v30; // kr18_8
  UILabel_o *v31; // x0
  float v32; // s8
  float v33; // s9
  System_String_o *Empty; // x21
  __int64 *v35; // x8
  UIWidget_o *v36; // x0
  double v37; // d0
  UIWidget_o *v38; // x0
  double v39; // d0
  UIWidget_o *v40; // x0
  UnityEngine_Component_o *v41; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UILabel_o *v45; // x0
  UILabel_o *v46; // x0
  UnityEngine_Vector2_o v47; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v48; // 0:s0.4,4:s1.4

  if ( (byte_40FDEB2 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&maskType);
    sub_B16FFC(&string_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11972, v6);
    sub_B16FFC(&StringLiteral_11969, v7);
    sub_B16FFC(&StringLiteral_11970, v8);
    sub_B16FFC(&StringLiteral_11971, v9);
    byte_40FDEB2 = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_46;
  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_46;
  UIWidget__set_height(maskSprite, baseSprite->fields.mHeight, 0LL);
  v12 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v12 )
    goto LABEL_46;
  transform = UnityEngine_Component__get_transform(v12, 0LL);
  zero = UnityEngine_Vector2__get_zero(0LL);
  if ( !transform )
    goto LABEL_46;
  v15 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&zero.fields.x, 0LL);
  informationLabel = (UnityEngine_Component_o *)this->fields.informationLabel;
  if ( !informationLabel )
    goto LABEL_46;
  v17 = UnityEngine_Component__get_transform(informationLabel, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v17 )
    goto LABEL_46;
  UnityEngine_Transform__set_localPosition(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  maskBase = this->fields.maskBase;
  if ( !maskBase )
    goto LABEL_46;
  if ( !maskType )
  {
    UnityEngine_GameObject__SetActive(maskBase, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(maskBase, 1, 0LL);
  lineSprite = (UnityEngine_Component_o *)this->fields.lineSprite;
  if ( !lineSprite )
    goto LABEL_46;
  v23 = UnityEngine_Component__get_transform(lineSprite, 0LL);
  if ( !v23 )
    goto LABEL_46;
  UnityEngine_Transform__get_localPosition(v23, 0LL);
  v26 = UnityEngine_Vector2__get_zero(0LL);
  y = v26.fields.y;
  x = v26.fields.x;
  v29 = UnityEngine_Vector2__get_zero(0LL);
  v28 = v29.fields.y;
  v27 = v29.fields.x;
  v30 = UnityEngine_Vector2__get_zero(0LL);
  v31 = this->fields.informationLabel;
  if ( !v31 )
    goto LABEL_46;
  v32 = v30.fields.x;
  v33 = v30.fields.y;
  Empty = string_TypeInfo->static_fields->Empty;
  UILabel__set_overflowMethod(v31, 2, 0LL);
  switch ( maskType )
  {
    case 1:
    case 4:
      x = this->fields.MASK_SIZE_ALL.fields.y;
      y = this->fields.MASK_POS_ALL.fields.x;
      v27 = this->fields.MASK_POS_ALL.fields.y;
      v28 = this->fields.MASK_LABEL_POS_ALL.fields.x;
      v32 = this->fields.MASK_LABEL_POS_ALL.fields.y;
      v33 = this->fields.MASK_SIZE_TOP.fields.x;
      if ( maskType == 4 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v35 = &StringLiteral_11969;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v35 = &StringLiteral_11972;
      }
      goto LABEL_33;
    case 2:
      x = this->fields.MASK_SIZE_TOP.fields.y;
      y = this->fields.MASK_POS_TOP.fields.x;
      v27 = this->fields.MASK_POS_TOP.fields.y;
      v28 = this->fields.MASK_LABEL_POS_TOP.fields.x;
      v32 = this->fields.MASK_LABEL_POS_TOP.fields.y;
      v33 = this->fields.MASK_SIZE_BOTTOM.fields.x;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = &StringLiteral_11970;
      goto LABEL_33;
    case 3:
      x = this->fields.MASK_SIZE_BOTTOM.fields.y;
      y = this->fields.MASK_POS_BOTTOM.fields.x;
      v27 = this->fields.MASK_POS_BOTTOM.fields.y;
      v28 = this->fields.MASK_LABEL_POS_BOTTOM.fields.x;
      v32 = this->fields.MASK_LABEL_POS_BOTTOM.fields.y;
      v33 = *((float *)&this->fields.MASK_LABEL_POS_BOTTOM + 2);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = &StringLiteral_11971;
LABEL_33:
      Empty = LocalizationManager__Get((System_String_o *)*v35, 0LL);
      break;
    default:
      break;
  }
  v36 = (UIWidget_o *)this->fields.maskSprite;
  if ( !v36 )
    goto LABEL_46;
  v37 = x;
  if ( x == INFINITY )
    v37 = -x;
  UIWidget__set_width(v36, (int)v37, 0LL);
  v38 = (UIWidget_o *)this->fields.maskSprite;
  if ( !v38 )
    goto LABEL_46;
  v39 = y;
  if ( y == INFINITY )
    v39 = -INFINITY;
  UIWidget__set_height(v38, (int)v39, 0LL);
  v40 = (UIWidget_o *)this->fields.maskSprite;
  if ( !v40 )
    goto LABEL_46;
  UIWidget__ResizeCollider(v40, 0LL);
  v41 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v41 )
    goto LABEL_46;
  gameObject = UnityEngine_Component__get_gameObject(v41, 0LL);
  v47.fields.x = v27;
  v47.fields.y = v28;
  GameObjectExtensions__SetLocalPosition_27419860(gameObject, v47, 0LL);
  v43 = (UnityEngine_Component_o *)this->fields.informationLabel;
  if ( !v43
    || (v44 = UnityEngine_Component__get_gameObject(v43, 0LL),
        v48.fields.x = v32,
        v48.fields.y = v33,
        GameObjectExtensions__SetLocalPosition_27419860(v44, v48, 0LL),
        (v45 = this->fields.informationLabel) == 0LL)
    || (UILabel__set_text(v45, Empty, 0LL), (v46 = this->fields.informationLabel) == 0LL) )
  {
LABEL_46:
    sub_B170D4();
  }
  UILabel__SetCondensedScale(v46, LODWORD(this->fields.MASK_SIZE_ALL.fields.x), 0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}