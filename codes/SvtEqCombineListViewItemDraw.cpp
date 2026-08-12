void SvtEqCombineListViewItemDraw___ctor(SvtEqCombineListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewItemDraw__SetInput(
        SvtEqCombineListViewItemDraw_o *this,
        SvtEqCombineListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  int32_t type; // w8
  UnityEngine_Object_o *baseButton; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Component_o *maskSprite; // x0
  __int64 v11; // x1
  bool isLock; // w8
  bool isChoice; // w8
  struct UILabel_o *maskLabel; // x21
  __int64 *v15; // x8
  UnityEngine_Object_o *v16; // x21
  UnityEngine_Object_o *v17; // x21
  int v18; // w8
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x1

  if ( (byte_596A3C0 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9667/*"NONSELECT_MATERIAL"*/);
    sub_2213A60(&StringLiteral_9668/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A3C0 = 1;
  }
  if ( item )
  {
    type = item->fields.type;
    if ( type == 1 )
    {
      if ( SvtEqCombineListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item) )
      {
LABEL_9:
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
        {
          maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskSprite )
            goto LABEL_65;
          ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
            maskSprite,
            1,
            maskSprite->klass[1]._1.namespaze);
          maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskSprite )
            goto LABEL_65;
          ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
            maskSprite,
            0,
            1,
            maskSprite->klass[1]._1.implementedInterfaces);
          maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !maskSprite )
            goto LABEL_65;
          maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
          if ( !maskSprite )
            goto LABEL_65;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
          if ( item->fields.isMaxNextLv )
          {
            isLock = item->fields.isLock;
            if ( item->fields.isSwapLock )
              isLock = !item->fields.isLock;
            if ( !isLock )
            {
              isChoice = item->fields.isChoice;
              if ( item->fields.isSwapChoice )
                isChoice = !item->fields.isChoice;
              if ( !isChoice && !item->fields.isNotSelection )
              {
                maskLabel = this->fields.maskLabel;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v9);
                v15 = &StringLiteral_9668/*"NONSELECT_MATERIAL_BASE_LVMAX"*/;
LABEL_50:
                maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v15, 0);
                if ( maskLabel )
                {
                  v21 = (System_String_o *)maskSprite;
                  maskSprite = (UnityEngine_Component_o *)maskLabel;
LABEL_63:
                  UILabel__set_text((UILabel_o *)maskSprite, v21, 0);
                  goto LABEL_64;
                }
                goto LABEL_65;
              }
            }
          }
        }
        goto LABEL_64;
      }
    }
    else if ( !type && (item->fields.isLvMax && item->fields.isLimitCntMax || item->fields.isSvtEqMaterial) )
    {
      goto LABEL_9;
    }
  }
  v16 = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !maskSprite )
      goto LABEL_65;
    ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
      maskSprite,
      1,
      maskSprite->klass[1]._1.namespaze);
    maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !maskSprite )
      goto LABEL_65;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
      maskSprite,
      0,
      1,
      maskSprite->klass[1]._1.implementedInterfaces);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_65;
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
    if ( !maskSprite )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  }
  if ( item )
  {
    v17 = (UnityEngine_Object_o *)this->fields.baseButton;
    v18 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( item->fields.isMaxSelect )
    {
      if ( !v18 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
      {
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_65;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
          maskSprite,
          1,
          maskSprite->klass[1]._1.namespaze);
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( !maskSprite )
          goto LABEL_65;
        ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
          maskSprite,
          0,
          1,
          maskSprite->klass[1]._1.implementedInterfaces);
        maskSprite = (UnityEngine_Component_o *)this->fields.statusTextLabel;
        if ( !maskSprite )
          goto LABEL_65;
        maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
        if ( !maskSprite )
          goto LABEL_65;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
        maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
        if ( !maskSprite )
          goto LABEL_65;
        maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
        if ( !maskSprite )
          goto LABEL_65;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
        maskLabel = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
        v15 = &StringLiteral_9667/*"NONSELECT_MATERIAL"*/;
        goto LABEL_50;
      }
    }
    else
    {
      if ( !v18 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
      {
        maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
        if ( maskSprite )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, __int64, const char *))maskSprite->klass[1]._1.name)(
            maskSprite,
            1,
            maskSprite->klass[1]._1.namespaze);
          maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( maskSprite )
          {
            ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskSprite->klass[1]._1.nestedTypes)(
              maskSprite,
              0,
              1,
              maskSprite->klass[1]._1.implementedInterfaces);
            maskSprite = (UnityEngine_Component_o *)this->fields.statusTextLabel;
            if ( maskSprite )
            {
              maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
              if ( maskSprite )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
                maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
                if ( maskSprite )
                {
                  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
                  if ( maskSprite )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
                    maskSprite = (UnityEngine_Component_o *)this->fields.maskLabel;
                    if ( maskSprite )
                    {
                      v21 = (System_String_o *)StringLiteral_1/*""*/;
                      goto LABEL_63;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_65:
        sub_2213CDC(maskSprite, v8);
      }
    }
  }
LABEL_64:
  SvtEqCombineListViewItemDraw__SetSelectDisp(this, item, v9);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineListViewItemDraw__SetItem(
        SvtEqCombineListViewItemDraw_o *this,
        SvtEqCombineListViewItem_o *item,
        int32_t mode,
        int32_t modeKind,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v7; // x20
  SvtEqCombineListViewItemDraw_o *v8; // x19
  ServantFaceIconComponent_o *servantface; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v11; // q1
  struct UserServantEntity_o *v12; // x8
  __int128 v13; // q1
  bool IsClear; // w8
  bool v15; // w1
  int32_t type; // w8
  __int64 v17; // x2
  _BOOL4 isLock; // w8
  UnityEngine_Object_o *v19; // x22
  SvtEqCombineListViewItemDraw_o *v20; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  SvtEqCombineListViewItemDraw_o *maskLabel; // x22
  const MethodInfo *v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *statusTextLabel; // x22
  _BOOL4 v29; // w8
  __int64 v30; // x1
  __int64 v31; // x2
  UILabel_o *v32; // x22
  UILabel_o *v33; // x22
  _BOOL4 isChoice; // w8
  UILabel_o *v35; // x22
  const MethodInfo *v36; // x1
  __int64 v37; // x1
  __int64 v38; // x2
  bool CanNotSelect; // w8
  UnityEngine_Object_o *v40; // x22
  int v41; // w9
  __int64 v42; // x2
  bool v43; // w8
  bool v44; // w8
  SvtEqCombineListViewItemDraw_o *v45; // x22
  __int64 *v46; // x8
  __int64 v47; // x2
  UnityEngine_Object_o *v48; // x22
  int v49; // w8
  __int64 v50; // x1
  __int64 v51; // x2
  SvtEqCombineListViewItemDraw_o *v52; // x1
  __int64 v53; // x1
  __int64 v54; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+60h] [xbp-60h]

  v7 = item;
  v8 = this;
  if ( (byte_596A3BF & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&StringLiteral_9667/*"NONSELECT_MATERIAL"*/);
    sub_2213A60(&StringLiteral_9668/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_2213A60(&StringLiteral_9160/*"MSG_ABLED_SVTEP_LIMITUP"*/);
    sub_2213A60(&StringLiteral_8665/*"LOCKMODE_SELECTED_SERVANT"*/);
    sub_2213A60(&StringLiteral_3494/*"CHOICE_SERVANT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    this = (SvtEqCombineListViewItemDraw_o *)sub_2213A60(&StringLiteral_8666/*"LOCK_SERVANT"*/);
    byte_596A3BF = 1;
  }
  if ( !v7 || !mode )
    return;
  servantface = v8->fields.servantface;
  userSvtEntity = v7->fields.userSvtEntity;
  if ( v7->fields.type )
  {
    if ( !userSvtEntity )
      goto LABEL_200;
    v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v57.fields.fakeValue = v11;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item, *(_QWORD *)&mode);
    v55 = v57;
    this = (SvtEqCombineListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                               &v55,
                                               0);
    if ( !servantface )
      goto LABEL_200;
    ServantFaceIconComponent__Set_48049308(
      servantface,
      (int64_t)this,
      v7->fields.iconLabelInfo1,
      v7->fields.iconLabelInfo2,
      0);
    v12 = v7->fields.userSvtEntity;
    if ( !v12 )
      goto LABEL_200;
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.subIconLabel;
    if ( !this )
      goto LABEL_200;
    goto LABEL_21;
  }
  if ( !userSvtEntity )
    goto LABEL_200;
  v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v13;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item, *(_QWORD *)&mode);
  v56 = v57;
  this = (SvtEqCombineListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v56, 0);
  if ( !servantface
    || (ServantFaceIconComponent__Set_48049308(servantface, (int64_t)this, v7->fields.iconLabelInfo1, 0, 0),
        (this = (SvtEqCombineListViewItemDraw_o *)v7->fields.iconLabelInfo2) == 0) )
  {
LABEL_200:
    sub_2213CDC(this, item);
  }
  IsClear = IconLabelInfo__IsClear((IconLabelInfo_o *)this, 0);
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.subIconLabel;
  if ( IsClear )
  {
    v12 = v7->fields.userSvtEntity;
    if ( !v12 || !this )
      goto LABEL_200;
LABEL_21:
    UIIconLabel__Set_48071660(
      (UIIconLabel_o *)this,
      36,
      v7->fields.rarity,
      v12->fields.exceedCount,
      0,
      0,
      0,
      0,
      0,
      0,
      0);
    goto LABEL_22;
  }
  if ( !this )
    goto LABEL_200;
  UIIconLabel__Set((UIIconLabel_o *)this, v7->fields.iconLabelInfo2, 0);
LABEL_22:
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.lockImg;
  if ( !this )
    goto LABEL_200;
  this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_200;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.partyIcon;
  if ( !this )
    goto LABEL_200;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0);
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.removeImg;
  if ( !this )
    goto LABEL_200;
  this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_200;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.equipSprite;
  if ( !this )
    goto LABEL_200;
  this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_200;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
  if ( !this )
    goto LABEL_200;
  this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_200;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
  if ( !this )
    goto LABEL_200;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
  if ( !this )
    goto LABEL_200;
  this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_200;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
  if ( !this )
    goto LABEL_200;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.limitCountIcon;
  if ( !this )
    goto LABEL_200;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)this, 0);
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.choiceImg;
  if ( !this )
    goto LABEL_200;
  this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_200;
  v15 = v7->fields.isSwapChoice ? !v7->fields.isChoice : v7->fields.isChoice;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v15, 0);
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.friendShipImg;
  if ( !this )
    goto LABEL_200;
  this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_200;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isFriendShipSvtEq, 0);
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.chocolateSprite;
  if ( !this )
    goto LABEL_200;
  this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_200;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isChocolateSvtEquip, 0);
  type = v7->fields.type;
  if ( !type )
  {
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.limitCountIcon;
    if ( !this )
      goto LABEL_200;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)this,
      v7->fields.currentLimitCnt,
      v7->fields.maxLimitCnt,
      0);
    if ( v7->fields.isEquiped )
    {
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.equipSprite;
      if ( !this )
        goto LABEL_200;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_200;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    }
    isLock = v7->fields.isLock;
    if ( v7->fields.isSwapLock )
      isLock = !v7->fields.isLock;
    if ( isLock )
    {
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.lockImg;
      if ( !this )
        goto LABEL_200;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_200;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    }
    if ( !v7->fields.type && (v7->fields.isLvMax && v7->fields.isLimitCntMax || v7->fields.isSvtEqMaterial) )
    {
      baseButton = (UnityEngine_Object_o *)v8->fields.baseButton;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v17);
      if ( !UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
        goto LABEL_84;
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_200;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, const char *))this->klass[1]._1.name)(
        this,
        1,
        this->klass[1]._1.namespaze);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_200;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        0,
        1,
        this->klass[1]._1.implementedInterfaces);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
      if ( !this )
        goto LABEL_200;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_200;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      maskLabel = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
      this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9668/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0);
      if ( !maskLabel )
        goto LABEL_200;
      v20 = this;
      this = maskLabel;
    }
    else
    {
      v19 = (UnityEngine_Object_o *)v8->fields.baseButton;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v17);
      if ( !UnityEngine_Object__op_Inequality(v19, 0, 0) )
        goto LABEL_84;
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_200;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, const char *))this->klass[1]._1.name)(
        this,
        1,
        this->klass[1]._1.namespaze);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_200;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        0,
        1,
        this->klass[1]._1.implementedInterfaces);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
      if ( !this )
        goto LABEL_200;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_200;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
      if ( !this )
        goto LABEL_200;
      v20 = (SvtEqCombineListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)this, (System_String_o *)v20, 0);
LABEL_84:
    if ( v7->fields.isBaseSvt )
    {
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.removeImg;
      if ( !this )
        goto LABEL_200;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_200;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    }
    type = v7->fields.type;
  }
  if ( type != 1 )
    goto LABEL_189;
  this = (SvtEqCombineListViewItemDraw_o *)v8->fields.limitCountIcon;
  if ( !this )
    goto LABEL_200;
  LimitCountIconComponent__Set((LimitCountIconComponent_o *)this, v7->fields.currentLimitCnt, v7->fields.maxLimitCnt, 0);
  if ( v7->fields.isLimitCntTarget )
  {
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
    if ( !this )
      goto LABEL_200;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    statusTextLabel = v8->fields.statusTextLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
    this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9160/*"MSG_ABLED_SVTEP_LIMITUP"*/, 0);
    if ( !statusTextLabel )
      goto LABEL_200;
    UILabel__set_text(statusTextLabel, (System_String_o *)this, 0);
  }
  if ( v7->fields.isEquiped
    || v7->fields.isUseSupportEquip
    || v7->fields.isUseRecommendSupportEquip
    || v7->fields.isUseGrandServantEquip )
  {
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.equipSprite;
    if ( !this )
      goto LABEL_200;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
    if ( !this )
      goto LABEL_200;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  v29 = v7->fields.isLock;
  if ( v7->fields.isSwapLock )
    v29 = !v7->fields.isLock;
  if ( v29 )
  {
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.lockImg;
    if ( !this )
      goto LABEL_200;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v32 = v8->fields.maskLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
    this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8666/*"LOCK_SERVANT"*/, 0);
    if ( !v32 )
      goto LABEL_200;
    UILabel__set_text(v32, (System_String_o *)this, 0);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
    if ( !this )
      goto LABEL_200;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  if ( v7->fields.isNotSelection )
  {
    v33 = v8->fields.maskLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v25);
    this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9667/*"NONSELECT_MATERIAL"*/, 0);
    if ( !v33 )
      goto LABEL_200;
    UILabel__set_text(v33, (System_String_o *)this, 0);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
    if ( !this )
      goto LABEL_200;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  isChoice = v7->fields.isChoice;
  if ( v7->fields.isSwapChoice )
    isChoice = !v7->fields.isChoice;
  if ( isChoice )
  {
    v35 = v8->fields.maskLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v25);
    this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3494/*"CHOICE_SERVANT"*/, 0);
    if ( !v35 )
      goto LABEL_200;
    UILabel__set_text(v35, (System_String_o *)this, 0);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
    if ( !this )
      goto LABEL_200;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  SvtEqCombineListViewItemDraw__SetSelectDisp(v8, v7, v25);
  CanNotSelect = SvtEqCombineListViewItem__get_IsCanNotSelect(v7, v36);
  v40 = (UnityEngine_Object_o *)v8->fields.baseButton;
  v41 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( CanNotSelect )
  {
    if ( !v41 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
    if ( UnityEngine_Object__op_Inequality(v40, 0, 0) )
    {
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_200;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, const char *))this->klass[1]._1.name)(
        this,
        1,
        this->klass[1]._1.namespaze);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_200;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        0,
        1,
        this->klass[1]._1.implementedInterfaces);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
      if ( !this )
        goto LABEL_200;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_200;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      if ( v7->fields.isMaxNextLv || v7->fields.isBaseLvMax )
      {
        v43 = v7->fields.isLock;
        if ( v7->fields.isSwapLock )
          v43 = !v7->fields.isLock;
        if ( !v43 )
        {
          v44 = v7->fields.isChoice;
          if ( v7->fields.isSwapChoice )
            v44 = !v7->fields.isChoice;
          if ( !v44 && !v7->fields.isNotSelection )
          {
            v45 = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v42);
            v46 = &StringLiteral_9668/*"NONSELECT_MATERIAL_BASE_LVMAX"*/;
LABEL_175:
            this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v46, 0);
            if ( !v45 )
              goto LABEL_200;
            v52 = this;
            this = v45;
LABEL_188:
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v52, 0);
          }
        }
      }
    }
  }
  else
  {
    if ( !v41 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
    if ( UnityEngine_Object__op_Inequality(v40, 0, 0) )
    {
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_200;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, const char *))this->klass[1]._1.name)(
        this,
        1,
        this->klass[1]._1.namespaze);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_200;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        0,
        1,
        this->klass[1]._1.implementedInterfaces);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
      if ( !this )
        goto LABEL_200;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_200;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    v48 = (UnityEngine_Object_o *)v8->fields.baseButton;
    v49 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( v7->fields.isMaxSelect )
    {
      if ( !v49 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v47);
      if ( UnityEngine_Object__op_Inequality(v48, 0, 0) )
      {
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_200;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, const char *))this->klass[1]._1.name)(
          this,
          1,
          this->klass[1]._1.namespaze);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_200;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
          this,
          0,
          1,
          this->klass[1]._1.implementedInterfaces);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
        if ( !this )
          goto LABEL_200;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( !this )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_200;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( !this )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v45 = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50, v51);
        v46 = &StringLiteral_9667/*"NONSELECT_MATERIAL"*/;
        goto LABEL_175;
      }
    }
    else
    {
      if ( !v49 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v47);
      if ( UnityEngine_Object__op_Inequality(v48, 0, 0) )
      {
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_200;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, const char *))this->klass[1]._1.name)(
          this,
          1,
          this->klass[1]._1.namespaze);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_200;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
          this,
          0,
          1,
          this->klass[1]._1.implementedInterfaces);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
        if ( !this )
          goto LABEL_200;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( !this )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_200;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( !this )
          goto LABEL_200;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
        if ( !this )
          goto LABEL_200;
        v52 = (SvtEqCombineListViewItemDraw_o *)StringLiteral_1/*""*/;
        goto LABEL_188;
      }
    }
  }
LABEL_189:
  if ( (unsigned int)(modeKind - 1) <= 1 )
  {
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
    if ( !this )
      goto LABEL_200;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isCanNotLock, 0);
    if ( v7->fields.isCanNotLock )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53, v54);
      item = (SvtEqCombineListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8665/*"LOCKMODE_SELECTED_SERVANT"*/, 0);
    }
    else
    {
      item = (SvtEqCombineListViewItem_o *)StringLiteral_1/*""*/;
    }
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
    if ( !this )
      goto LABEL_200;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)item, 0);
  }
}


void SvtEqCombineListViewItemDraw__SetSelectDisp(
        SvtEqCombineListViewItemDraw_o *this,
        SvtEqCombineListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSelect; // x21
  __int64 v6; // x1
  DragSelectComponent_o *v7; // x0
  int32_t dragSelectNum; // w2
  int32_t selectNum; // w1

  if ( (byte_596A3C1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A3C1 = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0, 0) )
  {
    v7 = this->fields.dragSelect;
    if ( item )
    {
      if ( v7 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_11:
        DragSelectComponent__Set(v7, selectNum, dragSelectNum, 0);
        return;
      }
    }
    else if ( v7 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_11;
    }
    sub_2213CDC(v7, v6);
  }
}