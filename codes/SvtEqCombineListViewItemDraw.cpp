void __fastcall SvtEqCombineListViewItemDraw___ctor(SvtEqCombineListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SvtEqCombineListViewItemDraw__SetInput(
        SvtEqCombineListViewItemDraw_o *this,
        SvtEqCombineListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  int32_t type; // w8
  bool CanNotSelect; // w21
  UnityEngine_Object_o *baseButton; // x22
  bool v9; // w0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UnityEngine_Component_o *maskSprite; // x0
  bool isLock; // w8
  bool isChoice; // w8
  struct UILabel_o *maskLabel; // x21
  __int64 *v16; // x8
  UnityEngine_Object_o *v17; // x21
  uint32_t cctor_finished; // w8
  System_String_o *v19; // x1

  if ( (byte_4A5ED52 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_9257/*"NONSELECT_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_9258/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ED52 = 1;
  }
  if ( !item )
    goto LABEL_9;
  type = item->fields.type;
  if ( type == 1 )
  {
    CanNotSelect = SvtEqCombineListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item);
    goto LABEL_12;
  }
  if ( type )
  {
LABEL_9:
    CanNotSelect = 0;
    goto LABEL_12;
  }
  CanNotSelect = item->fields.isLvMax && item->fields.isLimitCntMax || item->fields.isSvtEqMaterial;
LABEL_12:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( CanNotSelect )
  {
    if ( v9 )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_67;
      ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))maskSprite->klass[1]._1.namespaze)(
        maskSprite,
        1LL,
        maskSprite->klass[1]._1.byval_arg.data);
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_67;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskSprite->klass[1]._1.implementedInterfaces)(
        maskSprite,
        0LL,
        1LL,
        maskSprite->klass[1]._1.interfaceOffsets);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_67;
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !maskSprite )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
      if ( !item )
        goto LABEL_67;
      if ( item->fields.isMaxNextLv )
      {
        isLock = !item->fields.isLock;
        if ( !item->fields.isSwapLock )
          isLock = item->fields.isLock;
        if ( !isLock )
        {
          isChoice = !item->fields.isChoice;
          if ( !item->fields.isSwapChoice )
            isChoice = item->fields.isChoice;
          if ( !isChoice && !item->fields.isNotSelection )
          {
            maskLabel = this->fields.maskLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v16 = &StringLiteral_9258/*"NONSELECT_MATERIAL_BASE_LVMAX"*/;
LABEL_52:
            maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v16, 0LL);
            if ( maskLabel )
            {
              v19 = (System_String_o *)maskSprite;
              maskSprite = (UnityEngine_Component_o *)maskLabel;
LABEL_65:
              UILabel__set_text((UILabel_o *)maskSprite, v19, 0LL);
              goto LABEL_66;
            }
            goto LABEL_67;
          }
        }
      }
    }
  }
  else
  {
    if ( v9 )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_67;
      ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))maskSprite->klass[1]._1.namespaze)(
        maskSprite,
        1LL,
        maskSprite->klass[1]._1.byval_arg.data);
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_67;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskSprite->klass[1]._1.implementedInterfaces)(
        maskSprite,
        0LL,
        1LL,
        maskSprite->klass[1]._1.interfaceOffsets);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_67;
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !maskSprite )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
    }
    if ( item )
    {
      v17 = (UnityEngine_Object_o *)this->fields.baseButton;
      cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
      if ( item->fields.isMaxSelect )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
        {
          maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskSprite )
            goto LABEL_67;
          ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))maskSprite->klass[1]._1.namespaze)(
            maskSprite,
            1LL,
            maskSprite->klass[1]._1.byval_arg.data);
          maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskSprite )
            goto LABEL_67;
          ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskSprite->klass[1]._1.implementedInterfaces)(
            maskSprite,
            0LL,
            1LL,
            maskSprite->klass[1]._1.interfaceOffsets);
          maskSprite = (UnityEngine_Component_o *)this->fields.statusTextLabel;
          if ( !maskSprite )
            goto LABEL_67;
          maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
          if ( !maskSprite )
            goto LABEL_67;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
          maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !maskSprite )
            goto LABEL_67;
          maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
          if ( !maskSprite )
            goto LABEL_67;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
          maskLabel = this->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v16 = &StringLiteral_9257/*"NONSELECT_MATERIAL"*/;
          goto LABEL_52;
        }
      }
      else
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
        {
          maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( maskSprite )
          {
            ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))maskSprite->klass[1]._1.namespaze)(
              maskSprite,
              1LL,
              maskSprite->klass[1]._1.byval_arg.data);
            maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
            if ( maskSprite )
            {
              ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskSprite->klass[1]._1.implementedInterfaces)(
                maskSprite,
                0LL,
                1LL,
                maskSprite->klass[1]._1.interfaceOffsets);
              maskSprite = (UnityEngine_Component_o *)this->fields.statusTextLabel;
              if ( maskSprite )
              {
                maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
                if ( maskSprite )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
                  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
                  if ( maskSprite )
                  {
                    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
                    if ( maskSprite )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
                      maskSprite = (UnityEngine_Component_o *)this->fields.maskLabel;
                      if ( maskSprite )
                      {
                        v19 = (System_String_o *)StringLiteral_1/*""*/;
                        goto LABEL_65;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_67:
          sub_1B8880C(maskSprite, v10);
        }
      }
    }
  }
LABEL_66:
  SvtEqCombineListViewItemDraw__SetSelectDisp(this, item, v11);
}


void __fastcall SvtEqCombineListViewItemDraw__SetItem(
        SvtEqCombineListViewItemDraw_o *this,
        SvtEqCombineListViewItem_o *item,
        int32_t mode,
        int32_t modeKind,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v7; // x20
  SvtEqCombineListViewItemDraw_o *v8; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  ServantFaceIconComponent_o *servantface; // x22
  __int128 v11; // q1
  struct UserServantEntity_o *v12; // x8
  __int128 v13; // q1
  UIIconLabel_o *subIconLabel; // x8
  struct UserServantEntity_o *v15; // x9
  bool v16; // w1
  int32_t type; // w8
  _BOOL4 v18; // w8
  _BOOL4 v19; // w23
  UnityEngine_Object_o *v20; // x22
  bool v21; // w0
  SvtEqCombineListViewItemDraw_o *v22; // x22
  SvtEqCombineListViewItemDraw_o *v23; // x1
  const MethodInfo *v24; // x2
  UILabel_o *statusTextLabel; // x22
  _BOOL4 isLock; // w8
  UILabel_o *maskLabel; // x22
  UILabel_o *v28; // x22
  _BOOL4 isChoice; // w8
  UILabel_o *v30; // x22
  const MethodInfo *v31; // x1
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x23
  bool v34; // w22
  bool v35; // w0
  bool v36; // w8
  bool v37; // w8
  SvtEqCombineListViewItemDraw_o *v38; // x22
  __int64 *v39; // x8
  UnityEngine_Object_o *v40; // x22
  uint32_t cctor_finished; // w8
  SvtEqCombineListViewItemDraw_o *v42; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+50h] [xbp-60h]

  v7 = item;
  v8 = this;
  if ( (byte_4A5ED51 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&StringLiteral_9257/*"NONSELECT_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_9258/*"NONSELECT_MATERIAL_BASE_LVMAX"*/);
    sub_1B885B0(&StringLiteral_8754/*"MSG_ABLED_SVTEP_LIMITUP"*/);
    sub_1B885B0(&StringLiteral_8290/*"LOCKMODE_SELECTED_SERVANT"*/);
    sub_1B885B0(&StringLiteral_3465/*"CHOICE_SERVANT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    this = (SvtEqCombineListViewItemDraw_o *)sub_1B885B0(&StringLiteral_8291/*"LOCK_SERVANT"*/);
    byte_4A5ED51 = 1;
  }
  if ( v7 && mode )
  {
    userSvtEntity = v7->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_197;
    servantface = v8->fields.servantface;
    if ( v7->fields.type )
    {
      v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v45.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v43 = v45;
      this = (SvtEqCombineListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                 &v43,
                                                 0LL);
      if ( !servantface )
        goto LABEL_197;
      ServantFaceIconComponent__Set_38220052(
        servantface,
        (int64_t)this,
        v7->fields.iconLabelInfo1,
        v7->fields.iconLabelInfo2,
        0LL);
      v12 = v7->fields.userSvtEntity;
      if ( !v12 )
        goto LABEL_197;
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.subIconLabel;
      if ( !this )
        goto LABEL_197;
      UIIconLabel__Set_38235604(
        (UIIconLabel_o *)this,
        36,
        v7->fields.rarity,
        v12->fields.exceedCount,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
    }
    else
    {
      v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v45.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v44 = v45;
      this = (SvtEqCombineListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                 &v44,
                                                 0LL);
      if ( !servantface )
        goto LABEL_197;
      ServantFaceIconComponent__Set_38220052(servantface, (int64_t)this, v7->fields.iconLabelInfo1, 0LL, 0LL);
      this = (SvtEqCombineListViewItemDraw_o *)v7->fields.iconLabelInfo2;
      if ( !this )
        goto LABEL_197;
      this = (SvtEqCombineListViewItemDraw_o *)IconLabelInfo__IsClear((IconLabelInfo_o *)this, 0LL);
      subIconLabel = v8->fields.subIconLabel;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v15 = v7->fields.userSvtEntity;
        if ( !v15 || !subIconLabel )
          goto LABEL_197;
        UIIconLabel__Set_38235604(subIconLabel, 36, v7->fields.rarity, v15->fields.exceedCount, 0, 0LL, 0, 0, 0, 0LL);
      }
      else
      {
        if ( !subIconLabel )
          goto LABEL_197;
        UIIconLabel__Set(v8->fields.subIconLabel, v7->fields.iconLabelInfo2, 0LL);
      }
    }
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.lockImg;
    if ( !this )
      goto LABEL_197;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.partyIcon;
    if ( !this )
      goto LABEL_197;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.removeImg;
    if ( !this )
      goto LABEL_197;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.equipSprite;
    if ( !this )
      goto LABEL_197;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
    if ( !this )
      goto LABEL_197;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
    if ( !this )
      goto LABEL_197;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
    if ( !this )
      goto LABEL_197;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
    if ( !this )
      goto LABEL_197;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.limitCountIcon;
    if ( !this )
      goto LABEL_197;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)this, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.choiceImg;
    if ( !this )
      goto LABEL_197;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_197;
    v16 = v7->fields.isSwapChoice ? !v7->fields.isChoice : v7->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v16, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.friendShipImg;
    if ( !this )
      goto LABEL_197;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isFriendShipSvtEq, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.chocolateSprite;
    if ( !this )
      goto LABEL_197;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isChocolateSvtEquip, 0LL);
    type = v7->fields.type;
    if ( type )
    {
LABEL_89:
      if ( type != 1 )
        goto LABEL_186;
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.limitCountIcon;
      if ( !this )
        goto LABEL_197;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)this,
        v7->fields.currentLimitCnt,
        v7->fields.maxLimitCnt,
        0LL);
      if ( v7->fields.isLimitCntTarget )
      {
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
        if ( !this )
          goto LABEL_197;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_197;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        statusTextLabel = v8->fields.statusTextLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8754/*"MSG_ABLED_SVTEP_LIMITUP"*/, 0LL);
        if ( !statusTextLabel )
          goto LABEL_197;
        UILabel__set_text(statusTextLabel, (System_String_o *)this, 0LL);
      }
      if ( v7->fields.isEquiped || v7->fields.isUseSupportEquip || v7->fields.isUseRecommendSupportEquip )
      {
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.equipSprite;
        if ( !this )
          goto LABEL_197;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_197;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
        if ( !this )
          goto LABEL_197;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_197;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      isLock = !v7->fields.isLock;
      if ( !v7->fields.isSwapLock )
        isLock = v7->fields.isLock;
      if ( isLock )
      {
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.lockImg;
        if ( !this )
          goto LABEL_197;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_197;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        maskLabel = v8->fields.maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8291/*"LOCK_SERVANT"*/, 0LL);
        if ( !maskLabel )
          goto LABEL_197;
        UILabel__set_text(maskLabel, (System_String_o *)this, 0LL);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
        if ( !this )
          goto LABEL_197;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_197;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      if ( v7->fields.isNotSelection )
      {
        v28 = v8->fields.maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9257/*"NONSELECT_MATERIAL"*/, 0LL);
        if ( !v28 )
          goto LABEL_197;
        UILabel__set_text(v28, (System_String_o *)this, 0LL);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
        if ( !this )
          goto LABEL_197;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_197;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      isChoice = !v7->fields.isChoice;
      if ( !v7->fields.isSwapChoice )
        isChoice = v7->fields.isChoice;
      if ( isChoice )
      {
        v30 = v8->fields.maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3465/*"CHOICE_SERVANT"*/, 0LL);
        if ( !v30 )
          goto LABEL_197;
        UILabel__set_text(v30, (System_String_o *)this, 0LL);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
        if ( !this )
          goto LABEL_197;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_197;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      SvtEqCombineListViewItemDraw__SetSelectDisp(v8, v7, v24);
      CanNotSelect = SvtEqCombineListViewItem__get_IsCanNotSelect(v7, v31);
      baseButton = (UnityEngine_Object_o *)v8->fields.baseButton;
      v34 = CanNotSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v35 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
      if ( v34 )
      {
        if ( !v35 )
          goto LABEL_186;
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_197;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, void *))this->klass[1]._1.namespaze)(
          this,
          1LL,
          this->klass[1]._1.byval_arg.data);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_197;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
          this,
          0LL,
          1LL,
          this->klass[1]._1.interfaceOffsets);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_197;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_197;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !v7->fields.isMaxNextLv && !v7->fields.isBaseLvMax )
          goto LABEL_186;
        v36 = !v7->fields.isLock;
        if ( !v7->fields.isSwapLock )
          v36 = v7->fields.isLock;
        if ( v36 )
          goto LABEL_186;
        v37 = !v7->fields.isChoice;
        if ( !v7->fields.isSwapChoice )
          v37 = v7->fields.isChoice;
        if ( v37 || v7->fields.isNotSelection )
          goto LABEL_186;
        v38 = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v39 = &StringLiteral_9258/*"NONSELECT_MATERIAL_BASE_LVMAX"*/;
        goto LABEL_172;
      }
      if ( v35 )
      {
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_197;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, void *))this->klass[1]._1.namespaze)(
          this,
          1LL,
          this->klass[1]._1.byval_arg.data);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_197;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
          this,
          0LL,
          1LL,
          this->klass[1]._1.interfaceOffsets);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_197;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_197;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      v40 = (UnityEngine_Object_o *)v8->fields.baseButton;
      cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
      if ( v7->fields.isMaxSelect )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
        {
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
          if ( !this )
            goto LABEL_197;
          ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, void *))this->klass[1]._1.namespaze)(
            this,
            1LL,
            this->klass[1]._1.byval_arg.data);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
          if ( !this )
            goto LABEL_197;
          ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
            this,
            0LL,
            1LL,
            this->klass[1]._1.interfaceOffsets);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
          if ( !this )
            goto LABEL_197;
          this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
          if ( !this )
            goto LABEL_197;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
          if ( !this )
            goto LABEL_197;
          this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
          if ( !this )
            goto LABEL_197;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v38 = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v39 = &StringLiteral_9257/*"NONSELECT_MATERIAL"*/;
LABEL_172:
          this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v39, 0LL);
          if ( !v38 )
            goto LABEL_197;
          v42 = this;
          this = v38;
LABEL_185:
          UILabel__set_text((UILabel_o *)this, (System_String_o *)v42, 0LL);
        }
      }
      else
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
        {
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
          if ( !this )
            goto LABEL_197;
          ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, void *))this->klass[1]._1.namespaze)(
            this,
            1LL,
            this->klass[1]._1.byval_arg.data);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
          if ( !this )
            goto LABEL_197;
          ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
            this,
            0LL,
            1LL,
            this->klass[1]._1.interfaceOffsets);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
          if ( !this )
            goto LABEL_197;
          this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
          if ( !this )
            goto LABEL_197;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
          if ( !this )
            goto LABEL_197;
          this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
          if ( !this )
            goto LABEL_197;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
          if ( !this )
            goto LABEL_197;
          v42 = (SvtEqCombineListViewItemDraw_o *)StringLiteral_1/*""*/;
          goto LABEL_185;
        }
      }
LABEL_186:
      if ( (unsigned int)(modeKind - 1) > 1 )
        return;
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
      if ( this )
      {
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isCanNotLock, 0LL);
          if ( v7->fields.isCanNotLock )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            item = (SvtEqCombineListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8290/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
          }
          else
          {
            item = (SvtEqCombineListViewItem_o *)StringLiteral_1/*""*/;
          }
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, (System_String_o *)item, 0LL);
            return;
          }
        }
      }
LABEL_197:
      sub_1B8880C(this, item);
    }
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.limitCountIcon;
    if ( !this )
      goto LABEL_197;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)this,
      v7->fields.currentLimitCnt,
      v7->fields.maxLimitCnt,
      0LL);
    if ( v7->fields.isEquiped )
    {
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.equipSprite;
      if ( !this )
        goto LABEL_197;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_197;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    v18 = !v7->fields.isLock;
    if ( !v7->fields.isSwapLock )
      v18 = v7->fields.isLock;
    if ( v18 )
    {
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.lockImg;
      if ( !this )
        goto LABEL_197;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_197;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    if ( v7->fields.type )
      v19 = 0;
    else
      v19 = v7->fields.isLvMax && v7->fields.isLimitCntMax || v7->fields.isSvtEqMaterial;
    v20 = (UnityEngine_Object_o *)v8->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( v19 )
    {
      if ( v21 )
      {
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_197;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, void *))this->klass[1]._1.namespaze)(
          this,
          1LL,
          this->klass[1]._1.byval_arg.data);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_197;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
          this,
          0LL,
          1LL,
          this->klass[1]._1.interfaceOffsets);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_197;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_197;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v22 = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9258/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
        if ( !v22 )
          goto LABEL_197;
        v23 = this;
        this = v22;
        goto LABEL_83;
      }
    }
    else if ( v21 )
    {
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_197;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, void *))this->klass[1]._1.namespaze)(
        this,
        1LL,
        this->klass[1]._1.byval_arg.data);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_197;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        0LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
      if ( !this )
        goto LABEL_197;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_197;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
      if ( !this )
        goto LABEL_197;
      v23 = (SvtEqCombineListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_83:
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v23, 0LL);
    }
    if ( v7->fields.isBaseSvt )
    {
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.removeImg;
      if ( !this )
        goto LABEL_197;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_197;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    type = v7->fields.type;
    goto LABEL_89;
  }
}


void __fastcall SvtEqCombineListViewItemDraw__SetSelectDisp(
        SvtEqCombineListViewItemDraw_o *this,
        SvtEqCombineListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSelect; // x21
  __int64 v6; // x1
  DragSelectComponent_o *v7; // x0
  int32_t dragSelectNum; // w2
  int32_t selectNum; // w1

  if ( (byte_4A5ED53 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5ED53 = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0LL, 0LL) )
  {
    v7 = this->fields.dragSelect;
    if ( item )
    {
      if ( v7 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_11:
        DragSelectComponent__Set(v7, selectNum, dragSelectNum, 0LL);
        return;
      }
    }
    else if ( v7 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_11;
    }
    sub_1B8880C(v7, v6);
  }
}