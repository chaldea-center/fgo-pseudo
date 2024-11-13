void __fastcall SvtEqCombineListViewItemDraw___ctor(SvtEqCombineListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewItemDraw__SetInput(
        SvtEqCombineListViewItemDraw_o *this,
        SvtEqCombineListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t type; // w8
  bool CanNotSelect; // w21
  UnityEngine_Object_o *baseButton; // x22
  bool v17; // w0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  UnityEngine_Component_o *maskSprite; // x0
  bool isLock; // w8
  bool isChoice; // w8
  struct UILabel_o *maskLabel; // x21
  __int64 *v24; // x8
  UnityEngine_Object_o *v25; // x21
  uint32_t cctor_finished; // w8
  __int64 v27; // x1
  System_String_o *v28; // x1

  if ( (byte_4B19EC2 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, isInput);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_9388/*"NONSELECT_MATERIAL"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9389/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B19EC2 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  v17 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( CanNotSelect )
  {
    if ( v17 )
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
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
            v24 = &StringLiteral_9389/*"NONSELECT_MATERIAL_BASE_LVMAX"*/;
LABEL_52:
            maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v24, 0LL);
            if ( maskLabel )
            {
              v28 = (System_String_o *)maskSprite;
              maskSprite = (UnityEngine_Component_o *)maskLabel;
LABEL_65:
              UILabel__set_text((UILabel_o *)maskSprite, v28, 0LL);
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
    if ( v17 )
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
      v25 = (UnityEngine_Object_o *)this->fields.baseButton;
      cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
      if ( item->fields.isMaxSelect )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
        if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
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
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
          v24 = &StringLiteral_9388/*"NONSELECT_MATERIAL"*/;
          goto LABEL_52;
        }
      }
      else
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
        if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
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
                        v28 = (System_String_o *)StringLiteral_1/*""*/;
                        goto LABEL_65;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_67:
          sub_1BCAA3C(maskSprite, v18);
        }
      }
    }
  }
LABEL_66:
  SvtEqCombineListViewItemDraw__SetSelectDisp(this, item, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineListViewItemDraw__SetItem(
        SvtEqCombineListViewItemDraw_o *this,
        SvtEqCombineListViewItem_o *item,
        int32_t mode,
        int32_t modeKind,
        const MethodInfo *method)
{
  SvtEqCombineListViewItem_o *v7; // x20
  SvtEqCombineListViewItemDraw_o *v8; // x19
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
  struct UserServantEntity_o *userSvtEntity; // x8
  ServantFaceIconComponent_o *servantface; // x22
  __int128 v29; // q1
  struct UserServantEntity_o *v30; // x8
  __int128 v31; // q1
  UIIconLabel_o *subIconLabel; // x8
  struct UserServantEntity_o *v33; // x9
  bool v34; // w1
  int32_t type; // w8
  _BOOL4 v36; // w8
  _BOOL4 v37; // w23
  UnityEngine_Object_o *v38; // x22
  bool v39; // w0
  __int64 v40; // x1
  SvtEqCombineListViewItemDraw_o *v41; // x22
  SvtEqCombineListViewItemDraw_o *v42; // x1
  const MethodInfo *v43; // x2
  __int64 v44; // x1
  UILabel_o *statusTextLabel; // x22
  _BOOL4 isLock; // w8
  __int64 v47; // x1
  UILabel_o *maskLabel; // x22
  UILabel_o *v49; // x22
  _BOOL4 isChoice; // w8
  UILabel_o *v51; // x22
  const MethodInfo *v52; // x1
  bool CanNotSelect; // w0
  __int64 v54; // x1
  UnityEngine_Object_o *baseButton; // x23
  bool v56; // w22
  bool v57; // w0
  bool v58; // w8
  bool v59; // w8
  SvtEqCombineListViewItemDraw_o *v60; // x22
  __int64 *v61; // x8
  UnityEngine_Object_o *v62; // x22
  uint32_t cctor_finished; // w8
  __int64 v64; // x1
  SvtEqCombineListViewItemDraw_o *v65; // x1
  __int64 v66; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+50h] [xbp-60h]

  v7 = item;
  v8 = this;
  if ( (byte_4B19EC1 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_9388/*"NONSELECT_MATERIAL"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_9389/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_8882/*"MSG_ABLED_SVTEP_LIMITUP"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_8416/*"LOCKMODE_SELECTED_SERVANT"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3491/*"CHOICE_SERVANT"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    this = (SvtEqCombineListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_8417/*"LOCK_SERVANT"*/, v25, v26);
    byte_4B19EC1 = 1;
  }
  if ( v7 && mode )
  {
    userSvtEntity = v7->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_197;
    servantface = v8->fields.servantface;
    if ( v7->fields.type )
    {
      v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v69.fields.fakeValue = v29;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
      v67 = v69;
      this = (SvtEqCombineListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                 &v67,
                                                 0LL);
      if ( !servantface )
        goto LABEL_197;
      ServantFaceIconComponent__Set_38931044(
        servantface,
        (int64_t)this,
        v7->fields.iconLabelInfo1,
        v7->fields.iconLabelInfo2,
        0LL);
      v30 = v7->fields.userSvtEntity;
      if ( !v30 )
        goto LABEL_197;
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.subIconLabel;
      if ( !this )
        goto LABEL_197;
      UIIconLabel__Set_38947284(
        (UIIconLabel_o *)this,
        36,
        v7->fields.rarity,
        v30->fields.exceedCount,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
    }
    else
    {
      v31 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v69.fields.fakeValue = v31;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
      v68 = v69;
      this = (SvtEqCombineListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                 &v68,
                                                 0LL);
      if ( !servantface )
        goto LABEL_197;
      ServantFaceIconComponent__Set_38931044(servantface, (int64_t)this, v7->fields.iconLabelInfo1, 0LL, 0LL);
      this = (SvtEqCombineListViewItemDraw_o *)v7->fields.iconLabelInfo2;
      if ( !this )
        goto LABEL_197;
      this = (SvtEqCombineListViewItemDraw_o *)IconLabelInfo__IsClear((IconLabelInfo_o *)this, 0LL);
      subIconLabel = v8->fields.subIconLabel;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v33 = v7->fields.userSvtEntity;
        if ( !v33 || !subIconLabel )
          goto LABEL_197;
        UIIconLabel__Set_38947284(subIconLabel, 36, v7->fields.rarity, v33->fields.exceedCount, 0, 0LL, 0, 0, 0, 0LL);
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
    v34 = v7->fields.isSwapChoice ? !v7->fields.isChoice : v7->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v34, 0LL);
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8882/*"MSG_ABLED_SVTEP_LIMITUP"*/, 0LL);
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8417/*"LOCK_SERVANT"*/, 0LL);
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
        v49 = v8->fields.maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9388/*"NONSELECT_MATERIAL"*/, 0LL);
        if ( !v49 )
          goto LABEL_197;
        UILabel__set_text(v49, (System_String_o *)this, 0LL);
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
        v51 = v8->fields.maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3491/*"CHOICE_SERVANT"*/, 0LL);
        if ( !v51 )
          goto LABEL_197;
        UILabel__set_text(v51, (System_String_o *)this, 0LL);
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
      SvtEqCombineListViewItemDraw__SetSelectDisp(v8, v7, v43);
      CanNotSelect = SvtEqCombineListViewItem__get_IsCanNotSelect(v7, v52);
      baseButton = (UnityEngine_Object_o *)v8->fields.baseButton;
      v56 = CanNotSelect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
      v57 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
      if ( v56 )
      {
        if ( !v57 )
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
        v58 = !v7->fields.isLock;
        if ( !v7->fields.isSwapLock )
          v58 = v7->fields.isLock;
        if ( v58 )
          goto LABEL_186;
        v59 = !v7->fields.isChoice;
        if ( !v7->fields.isSwapChoice )
          v59 = v7->fields.isChoice;
        if ( v59 || v7->fields.isNotSelection )
          goto LABEL_186;
        v60 = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        v61 = &StringLiteral_9389/*"NONSELECT_MATERIAL_BASE_LVMAX"*/;
        goto LABEL_172;
      }
      if ( v57 )
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
      v62 = (UnityEngine_Object_o *)v8->fields.baseButton;
      cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
      if ( v7->fields.isMaxSelect )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
        if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
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
          v60 = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
          v61 = &StringLiteral_9388/*"NONSELECT_MATERIAL"*/;
LABEL_172:
          this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v61, 0LL);
          if ( !v60 )
            goto LABEL_197;
          v65 = this;
          this = v60;
LABEL_185:
          UILabel__set_text((UILabel_o *)this, (System_String_o *)v65, 0LL);
        }
      }
      else
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
        if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
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
          v65 = (SvtEqCombineListViewItemDraw_o *)StringLiteral_1/*""*/;
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
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
            item = (SvtEqCombineListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8416/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
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
      sub_1BCAA3C(this, item);
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
    v36 = !v7->fields.isLock;
    if ( !v7->fields.isSwapLock )
      v36 = v7->fields.isLock;
    if ( v36 )
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
      v37 = 0;
    else
      v37 = v7->fields.isLvMax && v7->fields.isLimitCntMax || v7->fields.isSvtEqMaterial;
    v38 = (UnityEngine_Object_o *)v8->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    v39 = UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
    if ( v37 )
    {
      if ( v39 )
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
        v41 = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9389/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
        if ( !v41 )
          goto LABEL_197;
        v42 = this;
        this = v41;
        goto LABEL_83;
      }
    }
    else if ( v39 )
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
      v42 = (SvtEqCombineListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_83:
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v42, 0LL);
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

  if ( (byte_4B19EC3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    byte_4B19EC3 = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
    sub_1BCAA3C(v7, v6);
  }
}