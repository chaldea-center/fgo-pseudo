void __fastcall MultipleViewListViewItemDraw___ctor(MultipleViewListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MultipleViewListViewItemDraw__SetInput(
        MultipleViewListViewItemDraw_o *this,
        MultipleViewListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Component_o *maskLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UICommonButton_o *v13; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Object_o *removeObject; // x21
  const MethodInfo *v27; // x2
  UnityEngine_GameObject_o *v28; // x0

  if ( (byte_40FC011 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FC011 = 1;
  }
  if ( item )
  {
    maskLb = (UnityEngine_Component_o *)this->fields.maskLb;
    if ( maskLb )
    {
      gameObject = UnityEngine_Component__get_gameObject(maskLb, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          v11 = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !v11 )
            goto LABEL_50;
          Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                v11,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !Component_WebViewObject )
            goto LABEL_50;
          UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL);
          v13 = this->fields.baseButton;
          if ( !v13 )
            goto LABEL_50;
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v13->klass->vtable._14_SetState.method)(
            v13,
            0LL,
            1LL,
            v13->klass->vtable._15_OnPress.methodPtr);
        }
        lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
        {
          v15 = (UnityEngine_Component_o *)this->fields.lockSprite;
          if ( !v15 )
            goto LABEL_50;
          v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
          if ( !v16 )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive(v16, item->fields.isSwapLock != item->fields.isLock, 0LL);
        }
        choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
        {
          v18 = (UnityEngine_Component_o *)this->fields.choiceSprite;
          if ( !v18 )
            goto LABEL_50;
          v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
          if ( !v19 )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive(v19, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
        {
          v21 = (UnityEngine_Component_o *)this->fields.pushSprite;
          if ( !v21 )
            goto LABEL_50;
          v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
          if ( !v22 )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive(v22, item->fields.isPush, 0LL);
        }
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
        {
          v24 = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !v24 )
            goto LABEL_50;
          v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
          if ( !v25 )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive(v25, 0, 0LL);
        }
        removeObject = (UnityEngine_Object_o *)this->fields.removeObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(removeObject, 0LL, 0LL) )
          goto LABEL_48;
        v28 = this->fields.removeObject;
        if ( v28 )
        {
          UnityEngine_GameObject__SetActive(v28, item->fields.selectNum >= 0, 0LL);
LABEL_48:
          MultipleViewListViewItemDraw__SetMaskInfo(this, item, v27);
          return;
        }
      }
    }
LABEL_50:
    sub_B170D4();
  }
}


void __fastcall MultipleViewListViewItemDraw__SetItem(
        MultipleViewListViewItemDraw_o *this,
        MultipleViewListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Component_o *statusLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *maskLb; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Object_o *partyIcon; // x21
  FlashingIconComponent_o *v13; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Object_o *removeObject; // x21
  const MethodInfo *v27; // x2
  UnityEngine_GameObject_o *v28; // x0

  if ( (byte_40FC010 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FC010 = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      ServantFaceIconComponent__Set_30631556(
        servantFaceIcon,
        item->fields.userSvtEntity,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        0LL);
      statusLb = (UnityEngine_Component_o *)this->fields.statusLb;
      if ( statusLb )
      {
        gameObject = UnityEngine_Component__get_gameObject(statusLb, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          maskLb = (UnityEngine_Component_o *)this->fields.maskLb;
          if ( maskLb )
          {
            v11 = UnityEngine_Component__get_gameObject(maskLb, 0LL);
            if ( v11 )
            {
              UnityEngine_GameObject__SetActive(v11, 0, 0LL);
              partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
              {
                v13 = this->fields.partyIcon;
                if ( !v13 )
                  goto LABEL_52;
                FlashingIconComponent__Set_23222596(v13, item->fields.partyIndex >= 0, 0LL);
              }
              lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
              {
                v15 = (UnityEngine_Component_o *)this->fields.lockSprite;
                if ( !v15 )
                  goto LABEL_52;
                v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
                if ( !v16 )
                  goto LABEL_52;
                UnityEngine_GameObject__SetActive(v16, item->fields.isSwapLock != item->fields.isLock, 0LL);
              }
              choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
              {
                v18 = (UnityEngine_Component_o *)this->fields.choiceSprite;
                if ( !v18 )
                  goto LABEL_52;
                v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
                if ( !v19 )
                  goto LABEL_52;
                UnityEngine_GameObject__SetActive(v19, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
              }
              pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
              {
                v21 = (UnityEngine_Component_o *)this->fields.pushSprite;
                if ( !v21 )
                  goto LABEL_52;
                v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
                if ( !v22 )
                  goto LABEL_52;
                UnityEngine_GameObject__SetActive(v22, item->fields.isPush, 0LL);
              }
              maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
              {
                v24 = (UnityEngine_Component_o *)this->fields.maskSprite;
                if ( !v24 )
                  goto LABEL_52;
                v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
                if ( !v25 )
                  goto LABEL_52;
                UnityEngine_GameObject__SetActive(v25, 0, 0LL);
              }
              removeObject = (UnityEngine_Object_o *)this->fields.removeObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(removeObject, 0LL, 0LL) )
                goto LABEL_50;
              v28 = this->fields.removeObject;
              if ( v28 )
              {
                UnityEngine_GameObject__SetActive(v28, item->fields.selectNum >= 0, 0LL);
LABEL_50:
                MultipleViewListViewItemDraw__SetMaskInfo(this, item, v27);
                return;
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_B170D4();
  }
}


void __fastcall MultipleViewListViewItemDraw__SetMaskInfo(
        MultipleViewListViewItemDraw_o *this,
        MultipleViewListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UILabel_o *v13; // x19
  __int64 *v14; // x8
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *maskLb; // x0
  UnityEngine_GameObject_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x20
  int32_t selectNum; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FC012 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_11584/*"SELECT_CANNOT"*/, v5);
    sub_B16FFC(&StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/, v6);
    sub_B16FFC(&StringLiteral_8824/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/, v7);
    byte_40FC012 = 1;
  }
  selectNum = 0;
  if ( !item )
    goto LABEL_41;
  if ( !item->fields.isPushMode )
  {
    if ( !MultipleViewListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item) )
    {
      if ( (item->fields.selectNum & 0x80000000) == 0 )
      {
        maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
        if ( !maskSprite )
          goto LABEL_41;
        gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
        if ( !gameObject )
          goto LABEL_41;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        maskLb = (UnityEngine_Component_o *)this->fields.maskLb;
        if ( !maskLb )
          goto LABEL_41;
        v24 = UnityEngine_Component__get_gameObject(maskLb, 0LL);
        if ( !v24 )
          goto LABEL_41;
        UnityEngine_GameObject__SetActive(v24, 1, 0LL);
        v13 = this->fields.maskLb;
        selectNum = item->fields.selectNum;
        v25 = System_Int32__ToString((int32_t)&selectNum, 0LL);
        v26 = System_String__Concat_43743732((System_String_o *)StringLiteral_8824/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/, v25, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = v26;
        goto LABEL_27;
      }
      if ( !item->fields.isSelectedSvtId && !item->fields.isSelectedMax )
        return;
    }
LABEL_18:
    v15 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !v15 )
      goto LABEL_41;
    v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !v16 )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(v16, 1, 0LL);
    v17 = (UnityEngine_Component_o *)this->fields.maskLb;
    if ( !v17 )
      goto LABEL_41;
    v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !v18 )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(v18, 1, 0LL);
    v13 = this->fields.maskLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_11584/*"SELECT_CANNOT"*/;
    goto LABEL_26;
  }
  userSvtEntity = item->fields.userSvtEntity;
  if ( userSvtEntity && UserServantEntity__IsEventJoin(userSvtEntity, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !v9 )
      goto LABEL_41;
    v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
    if ( !v10 )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(v10, 1, 0LL);
    v11 = (UnityEngine_Component_o *)this->fields.maskLb;
    if ( !v11 )
      goto LABEL_41;
    v12 = UnityEngine_Component__get_gameObject(v11, 0LL);
    if ( !v12 )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(v12, 1, 0LL);
    v13 = this->fields.maskLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_26:
    v19 = (System_String_o *)*v14;
LABEL_27:
    v20 = LocalizationManager__Get(v19, 0LL);
    if ( v13 )
    {
      UILabel__set_text(v13, v20, 0LL);
      return;
    }
LABEL_41:
    sub_B170D4();
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item) )
    goto LABEL_18;
}