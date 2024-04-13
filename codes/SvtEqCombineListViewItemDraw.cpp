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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int32_t type; // w8
  bool CanNotSelect; // w8
  UnityEngine_Object_o *baseButton; // x21
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Component_o *maskSprite; // x0
  struct UILabel_o *maskLabel; // x21
  __int64 *v25; // x8
  UnityEngine_Object_o *v26; // x21
  System_String_o *v27; // x1

  if ( (byte_42EE4CB & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, isInput, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_9411/*"NONSELECT_MATERIAL"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_9412/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EE4CB = 1;
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
  if ( CanNotSelect )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_71;
      ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))maskSprite->klass[1]._1.namespaze)(
        maskSprite,
        1LL,
        maskSprite->klass[1]._1.byval_arg.data);
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_71;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskSprite->klass[1]._1.implementedInterfaces)(
        maskSprite,
        0LL,
        1LL,
        maskSprite->klass[1]._1.interfaceOffsets);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_71;
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !maskSprite )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
      if ( !item )
        goto LABEL_71;
      if ( item->fields.isMaxNextLv
        && item->fields.isSwapLock == item->fields.isLock
        && item->fields.isSwapChoice == item->fields.isChoice
        && !item->fields.isNotSelection )
      {
        maskLabel = this->fields.maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = &StringLiteral_9412/*"NONSELECT_MATERIAL_BASE_LVMAX"*/;
LABEL_55:
        maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v25, 0LL);
        if ( maskLabel )
        {
          v27 = (System_String_o *)maskSprite;
          maskSprite = (UnityEngine_Component_o *)maskLabel;
LABEL_69:
          UILabel__set_text((UILabel_o *)maskSprite, v27, 0LL);
          goto LABEL_70;
        }
        goto LABEL_71;
      }
    }
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_71;
      ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))maskSprite->klass[1]._1.namespaze)(
        maskSprite,
        1LL,
        maskSprite->klass[1]._1.byval_arg.data);
      maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !maskSprite )
        goto LABEL_71;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskSprite->klass[1]._1.implementedInterfaces)(
        maskSprite,
        0LL,
        1LL,
        maskSprite->klass[1]._1.interfaceOffsets);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_71;
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !maskSprite )
        goto LABEL_71;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
    }
    if ( item )
    {
      v26 = (UnityEngine_Object_o *)this->fields.baseButton;
      if ( item->fields.isMaxSelect )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
        {
          maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskSprite )
            goto LABEL_71;
          ((void (__fastcall *)(UnityEngine_Component_o *, __int64, void *))maskSprite->klass[1]._1.namespaze)(
            maskSprite,
            1LL,
            maskSprite->klass[1]._1.byval_arg.data);
          maskSprite = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskSprite )
            goto LABEL_71;
          ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskSprite->klass[1]._1.implementedInterfaces)(
            maskSprite,
            0LL,
            1LL,
            maskSprite->klass[1]._1.interfaceOffsets);
          maskSprite = (UnityEngine_Component_o *)this->fields.statusTextLabel;
          if ( !maskSprite )
            goto LABEL_71;
          maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
          if ( !maskSprite )
            goto LABEL_71;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
          maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !maskSprite )
            goto LABEL_71;
          maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
          if ( !maskSprite )
            goto LABEL_71;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
          maskLabel = this->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v25 = &StringLiteral_9411/*"NONSELECT_MATERIAL"*/;
          goto LABEL_55;
        }
      }
      else
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
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
                        v27 = (System_String_o *)StringLiteral_1/*""*/;
                        goto LABEL_69;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_71:
          sub_B5D69C(maskSprite, v21);
        }
      }
    }
  }
LABEL_70:
  SvtEqCombineListViewItemDraw__SetSelectDisp(this, item, v22);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
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
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  ServantFaceIconComponent_o *servantface; // x22
  __int128 v38; // q1
  struct UserServantEntity_o *v39; // x8
  __int128 v40; // q1
  UIIconLabel_o *subIconLabel; // x8
  struct UserServantEntity_o *v42; // x9
  int32_t type; // w8
  _BOOL4 v44; // w8
  UnityEngine_Object_o *v45; // x22
  SvtEqCombineListViewItemDraw_o *v46; // x22
  System_String_o *v47; // x1
  const MethodInfo *v48; // x2
  UILabel_o *statusTextLabel; // x22
  UILabel_o *maskLabel; // x22
  UILabel_o *v51; // x22
  UILabel_o *v52; // x22
  const MethodInfo *v53; // x1
  bool CanNotSelect; // w0
  UnityEngine_Object_o *baseButton; // x22
  SvtEqCombineListViewItemDraw_o *v56; // x22
  __int64 *v57; // x8
  UnityEngine_Object_o *v58; // x22
  System_String_o *v59; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+50h] [xbp-50h]

  v7 = item;
  v8 = this;
  if ( (byte_42EE4CA & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, *(_QWORD *)&modeKind);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_9411/*"NONSELECT_MATERIAL"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_9412/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_8921/*"MSG_ABLED_SVTEP_LIMITUP"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_8515/*"LOCKMODE_SELECTED_SERVANT"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3040/*"CHOICE_SERVANT"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    this = (SvtEqCombineListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_8516/*"LOCK_SERVANT"*/, v33, v34, v35);
    byte_42EE4CA = 1;
  }
  if ( v7 && mode )
  {
    userSvtEntity = v7->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_203;
    servantface = v8->fields.servantface;
    if ( v7->fields.type )
    {
      v38 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v62.fields.fakeValue = v38;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v60 = v62;
      this = (SvtEqCombineListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                 &v60,
                                                 0LL);
      if ( !servantface )
        goto LABEL_203;
      ServantFaceIconComponent__Set_30849484(
        servantface,
        (int64_t)this,
        v7->fields.iconLabelInfo1,
        v7->fields.iconLabelInfo2,
        0LL);
      v39 = v7->fields.userSvtEntity;
      if ( !v39 )
        goto LABEL_203;
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.subIconLabel;
      if ( !this )
        goto LABEL_203;
      UIIconLabel__Set_41886452(
        (UIIconLabel_o *)this,
        36,
        v7->fields.rarity,
        v39->fields.exceedCount,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
    }
    else
    {
      v40 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v62.fields.fakeValue = v40;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v61 = v62;
      this = (SvtEqCombineListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                 &v61,
                                                 0LL);
      if ( !servantface )
        goto LABEL_203;
      ServantFaceIconComponent__Set_30849484(servantface, (int64_t)this, v7->fields.iconLabelInfo1, 0LL, 0LL);
      this = (SvtEqCombineListViewItemDraw_o *)v7->fields.iconLabelInfo2;
      if ( !this )
        goto LABEL_203;
      this = (SvtEqCombineListViewItemDraw_o *)IconLabelInfo__IsClear((IconLabelInfo_o *)this, 0LL);
      subIconLabel = v8->fields.subIconLabel;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v42 = v7->fields.userSvtEntity;
        if ( !v42 || !subIconLabel )
          goto LABEL_203;
        UIIconLabel__Set_41886452(subIconLabel, 36, v7->fields.rarity, v42->fields.exceedCount, 0, 0LL, 0, 0, 0, 0LL);
      }
      else
      {
        if ( !subIconLabel )
          goto LABEL_203;
        UIIconLabel__Set(v8->fields.subIconLabel, v7->fields.iconLabelInfo2, 0LL);
      }
    }
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.lockImg;
    if ( !this )
      goto LABEL_203;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.partyIcon;
    if ( !this )
      goto LABEL_203;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.removeImg;
    if ( !this )
      goto LABEL_203;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.equipSprite;
    if ( !this )
      goto LABEL_203;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
    if ( !this )
      goto LABEL_203;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
    if ( !this )
      goto LABEL_203;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
    if ( !this )
      goto LABEL_203;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
    if ( !this )
      goto LABEL_203;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.limitCountIcon;
    if ( !this )
      goto LABEL_203;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)this, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.choiceImg;
    if ( !this )
      goto LABEL_203;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      v7->fields.isSwapChoice != v7->fields.isChoice,
      0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.friendShipImg;
    if ( !this )
      goto LABEL_203;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isFriendShipSvtEq, 0LL);
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.chocolateSprite;
    if ( !this )
      goto LABEL_203;
    this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isChocolateSvtEquip, 0LL);
    type = v7->fields.type;
    if ( type )
    {
LABEL_91:
      if ( type != 1 )
        goto LABEL_191;
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.limitCountIcon;
      if ( !this )
        goto LABEL_203;
      LimitCountIconComponent__Set(
        (LimitCountIconComponent_o *)this,
        v7->fields.currentLimitCnt,
        v7->fields.maxLimitCnt,
        0LL);
      if ( v7->fields.isLimitCntTarget )
      {
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
        if ( !this )
          goto LABEL_203;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        statusTextLabel = v8->fields.statusTextLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8921/*"MSG_ABLED_SVTEP_LIMITUP"*/, 0LL);
        if ( !statusTextLabel )
          goto LABEL_203;
        UILabel__set_text(statusTextLabel, (System_String_o *)this, 0LL);
      }
      if ( v7->fields.isEquiped || v7->fields.isUseSupportEquip )
      {
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.equipSprite;
        if ( !this )
          goto LABEL_203;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
        if ( !this )
          goto LABEL_203;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      if ( v7->fields.isSwapLock != v7->fields.isLock )
      {
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.lockImg;
        if ( !this )
          goto LABEL_203;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        maskLabel = v8->fields.maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8516/*"LOCK_SERVANT"*/, 0LL);
        if ( !maskLabel )
          goto LABEL_203;
        UILabel__set_text(maskLabel, (System_String_o *)this, 0LL);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
        if ( !this )
          goto LABEL_203;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      if ( v7->fields.isNotSelection )
      {
        v51 = v8->fields.maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9411/*"NONSELECT_MATERIAL"*/, 0LL);
        if ( !v51 )
          goto LABEL_203;
        UILabel__set_text(v51, (System_String_o *)this, 0LL);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
        if ( !this )
          goto LABEL_203;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      if ( v7->fields.isSwapChoice != v7->fields.isChoice )
      {
        v52 = v8->fields.maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3040/*"CHOICE_SERVANT"*/, 0LL);
        if ( !v52 )
          goto LABEL_203;
        UILabel__set_text(v52, (System_String_o *)this, 0LL);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
        if ( !this )
          goto LABEL_203;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      SvtEqCombineListViewItemDraw__SetSelectDisp(v8, v7, v48);
      CanNotSelect = SvtEqCombineListViewItem__get_IsCanNotSelect(v7, v53);
      baseButton = (UnityEngine_Object_o *)v8->fields.baseButton;
      if ( CanNotSelect )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
          goto LABEL_191;
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_203;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, void *))this->klass[1]._1.namespaze)(
          this,
          1LL,
          this->klass[1]._1.byval_arg.data);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_203;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
          this,
          0LL,
          1LL,
          this->klass[1]._1.interfaceOffsets);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_203;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !v7->fields.isMaxNextLv && !v7->fields.isBaseLvMax )
          goto LABEL_191;
        if ( v7->fields.isSwapLock != v7->fields.isLock
          || v7->fields.isSwapChoice != v7->fields.isChoice
          || v7->fields.isNotSelection )
        {
          goto LABEL_191;
        }
        v56 = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v57 = &StringLiteral_9412/*"NONSELECT_MATERIAL_BASE_LVMAX"*/;
        goto LABEL_176;
      }
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
      {
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_203;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, void *))this->klass[1]._1.namespaze)(
          this,
          1LL,
          this->klass[1]._1.byval_arg.data);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
        if ( !this )
          goto LABEL_203;
        ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
          this,
          0LL,
          1LL,
          this->klass[1]._1.interfaceOffsets);
        this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_203;
        this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !this )
          goto LABEL_203;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      v58 = (UnityEngine_Object_o *)v8->fields.baseButton;
      if ( v7->fields.isMaxSelect )
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v58, 0LL, 0LL) )
        {
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
          if ( !this )
            goto LABEL_203;
          ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, void *))this->klass[1]._1.namespaze)(
            this,
            1LL,
            this->klass[1]._1.byval_arg.data);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
          if ( !this )
            goto LABEL_203;
          ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
            this,
            0LL,
            1LL,
            this->klass[1]._1.interfaceOffsets);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
          if ( !this )
            goto LABEL_203;
          this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
          if ( !this )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
          if ( !this )
            goto LABEL_203;
          this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
          if ( !this )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v56 = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v57 = &StringLiteral_9411/*"NONSELECT_MATERIAL"*/;
LABEL_176:
          this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v57, 0LL);
          if ( !v56 )
            goto LABEL_203;
          v59 = (System_String_o *)this;
          this = v56;
LABEL_190:
          UILabel__set_text((UILabel_o *)this, v59, 0LL);
        }
      }
      else
      {
        if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v58, 0LL, 0LL) )
        {
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
          if ( !this )
            goto LABEL_203;
          ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, void *))this->klass[1]._1.namespaze)(
            this,
            1LL,
            this->klass[1]._1.byval_arg.data);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
          if ( !this )
            goto LABEL_203;
          ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
            this,
            0LL,
            1LL,
            this->klass[1]._1.interfaceOffsets);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.statusTextLabel;
          if ( !this )
            goto LABEL_203;
          this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
          if ( !this )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
          if ( !this )
            goto LABEL_203;
          this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
          if ( !this )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
          if ( !this )
            goto LABEL_203;
          v59 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_190;
        }
      }
LABEL_191:
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
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            item = (SvtEqCombineListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8515/*"LOCKMODE_SELECTED_SERVANT"*/, 0LL);
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
LABEL_203:
      sub_B5D69C(this, item);
    }
    this = (SvtEqCombineListViewItemDraw_o *)v8->fields.limitCountIcon;
    if ( !this )
      goto LABEL_203;
    LimitCountIconComponent__Set(
      (LimitCountIconComponent_o *)this,
      v7->fields.currentLimitCnt,
      v7->fields.maxLimitCnt,
      0LL);
    if ( v7->fields.isEquiped )
    {
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.equipSprite;
      if ( !this )
        goto LABEL_203;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    if ( v7->fields.isSwapLock != v7->fields.isLock )
    {
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.lockImg;
      if ( !this )
        goto LABEL_203;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    if ( v7->fields.type )
      v44 = 0;
    else
      v44 = v7->fields.isLvMax && v7->fields.isLimitCntMax || v7->fields.isSvtEqMaterial;
    v45 = (UnityEngine_Object_o *)v8->fields.baseButton;
    if ( v44 )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
        goto LABEL_86;
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_203;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, void *))this->klass[1]._1.namespaze)(
        this,
        1LL,
        this->klass[1]._1.byval_arg.data);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_203;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        0LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
      if ( !this )
        goto LABEL_203;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v46 = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (SvtEqCombineListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9412/*"NONSELECT_MATERIAL_BASE_LVMAX"*/, 0LL);
      if ( !v46 )
        goto LABEL_203;
      v47 = (System_String_o *)this;
      this = v46;
    }
    else
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
        goto LABEL_86;
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_203;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, __int64, void *))this->klass[1]._1.namespaze)(
        this,
        1LL,
        this->klass[1]._1.byval_arg.data);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.baseButton;
      if ( !this )
        goto LABEL_203;
      ((void (__fastcall *)(SvtEqCombineListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        0LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskSprite;
      if ( !this )
        goto LABEL_203;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.maskLabel;
      if ( !this )
        goto LABEL_203;
      v47 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)this, v47, 0LL);
LABEL_86:
    if ( v7->fields.isBaseSvt )
    {
      this = (SvtEqCombineListViewItemDraw_o *)v8->fields.removeImg;
      if ( !this )
        goto LABEL_203;
      this = (SvtEqCombineListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_203;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    type = v7->fields.type;
    goto LABEL_91;
  }
}


void __fastcall SvtEqCombineListViewItemDraw__SetSelectDisp(
        SvtEqCombineListViewItemDraw_o *this,
        SvtEqCombineListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *dragSelect; // x21
  __int64 v7; // x1
  DragSelectComponent_o *v8; // x0
  int32_t dragSelectNum; // w2
  int32_t selectNum; // w1

  if ( (byte_42EE4CC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42EE4CC = 1;
  }
  dragSelect = (UnityEngine_Object_o *)this->fields.dragSelect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(dragSelect, 0LL, 0LL) )
  {
    v8 = this->fields.dragSelect;
    if ( item )
    {
      if ( v8 )
      {
        dragSelectNum = item->fields.dragSelectNum;
        selectNum = item->fields.selectNum;
LABEL_12:
        DragSelectComponent__Set(v8, selectNum, dragSelectNum, 0LL);
        return;
      }
    }
    else if ( v8 )
    {
      selectNum = -1;
      dragSelectNum = -1;
      goto LABEL_12;
    }
    sub_B5D69C(v8, v7);
  }
}