void __fastcall FavoriteChangeListViewItemDraw___ctor(FavoriteChangeListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FavoriteChangeListViewItemDraw__SetInput(
        FavoriteChangeListViewItemDraw_o *this,
        FavoriteChangeListViewItem_o *item,
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
  const MethodInfo *v24; // x2
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Component_o *statusLb; // x0
  UnityEngine_GameObject_o *v28; // x0

  if ( (byte_40F9FB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F9FB6 = 1;
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
            goto LABEL_48;
          Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                v11,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !Component_WebViewObject )
            goto LABEL_48;
          UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL);
          v13 = this->fields.baseButton;
          if ( !v13 )
            goto LABEL_48;
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
            goto LABEL_48;
          v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
          if ( !v16 )
            goto LABEL_48;
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
            goto LABEL_48;
          v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
          if ( !v19 )
            goto LABEL_48;
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
            goto LABEL_48;
          v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
          if ( !v22 )
            goto LABEL_48;
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
          v25 = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !v25 )
            goto LABEL_48;
          v26 = UnityEngine_Component__get_gameObject(v25, 0LL);
          if ( !v26 )
            goto LABEL_48;
          UnityEngine_GameObject__SetActive(v26, 0, 0LL);
        }
        if ( !item->fields.isFavorite )
        {
LABEL_46:
          FavoriteChangeListViewItemDraw__SetMaskInfo(this, item, v24);
          return;
        }
        statusLb = (UnityEngine_Component_o *)this->fields.statusLb;
        if ( statusLb )
        {
          v28 = UnityEngine_Component__get_gameObject(statusLb, 0LL);
          if ( v28 )
          {
            UnityEngine_GameObject__SetActive(v28, 1, 0LL);
            goto LABEL_46;
          }
        }
      }
    }
LABEL_48:
    sub_B170D4();
  }
}


void __fastcall FavoriteChangeListViewItemDraw__SetItem(
        FavoriteChangeListViewItemDraw_o *this,
        FavoriteChangeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Component_o *statusLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *maskLb; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Object_o *partyIcon; // x21
  FlashingIconComponent_o *v15; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v26; // x2
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UILabel_o *v31; // x21
  System_String_o *v32; // x0

  if ( (byte_40F9FB5 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_8829, v8);
    byte_40F9FB5 = 1;
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
            v13 = UnityEngine_Component__get_gameObject(maskLb, 0LL);
            if ( v13 )
            {
              UnityEngine_GameObject__SetActive(v13, 0, 0LL);
              partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
              {
                v15 = this->fields.partyIcon;
                if ( !v15 )
                  goto LABEL_54;
                FlashingIconComponent__Set_23222596(v15, item->fields.partyIndex >= 0, 0LL);
              }
              lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
              {
                v17 = (UnityEngine_Component_o *)this->fields.lockSprite;
                if ( !v17 )
                  goto LABEL_54;
                v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
                if ( !v18 )
                  goto LABEL_54;
                UnityEngine_GameObject__SetActive(v18, item->fields.isSwapLock != item->fields.isLock, 0LL);
              }
              choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
              {
                v20 = (UnityEngine_Component_o *)this->fields.choiceSprite;
                if ( !v20 )
                  goto LABEL_54;
                v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
                if ( !v21 )
                  goto LABEL_54;
                UnityEngine_GameObject__SetActive(v21, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
              }
              pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
              {
                v23 = (UnityEngine_Component_o *)this->fields.pushSprite;
                if ( !v23 )
                  goto LABEL_54;
                v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
                if ( !v24 )
                  goto LABEL_54;
                UnityEngine_GameObject__SetActive(v24, item->fields.isPush, 0LL);
              }
              maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
              {
                v27 = (UnityEngine_Component_o *)this->fields.maskSprite;
                if ( !v27 )
                  goto LABEL_54;
                v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
                if ( !v28 )
                  goto LABEL_54;
                UnityEngine_GameObject__SetActive(v28, 0, 0LL);
              }
              if ( !item->fields.isFavorite )
              {
LABEL_52:
                FavoriteChangeListViewItemDraw__SetMaskInfo(this, item, v26);
                return;
              }
              v29 = (UnityEngine_Component_o *)this->fields.statusLb;
              if ( v29 )
              {
                v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
                if ( v30 )
                {
                  UnityEngine_GameObject__SetActive(v30, 1, 0LL);
                  v31 = this->fields.statusLb;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8829, 0LL);
                  if ( v31 )
                  {
                    UILabel__set_text(v31, v32, 0LL);
                    goto LABEL_52;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_54:
    sub_B170D4();
  }
}


void __fastcall FavoriteChangeListViewItemDraw__SetMaskInfo(
        FavoriteChangeListViewItemDraw_o *this,
        FavoriteChangeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UnityEngine_Component_o *statusLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Component_o *maskLb; // x0
  UnityEngine_GameObject_o *v13; // x0
  UILabel_o *v14; // x19
  __int64 *v15; // x8
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  System_String_o *v24; // x0

  if ( (byte_40F9FB7 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_11584, v5);
    sub_B16FFC(&StringLiteral_11607, v6);
    byte_40F9FB7 = 1;
  }
  if ( !item )
    goto LABEL_40;
  if ( item->fields.isPushMode )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity && UserServantEntity__IsEventJoin(userSvtEntity, 0LL) )
    {
      if ( item->fields.isFavorite )
      {
        statusLb = (UnityEngine_Component_o *)this->fields.statusLb;
        if ( !statusLb )
          goto LABEL_40;
        gameObject = UnityEngine_Component__get_gameObject(statusLb, 0LL);
        if ( !gameObject )
          goto LABEL_40;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_40;
      v11 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !v11 )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive(v11, 1, 0LL);
      maskLb = (UnityEngine_Component_o *)this->fields.maskLb;
      if ( !maskLb )
        goto LABEL_40;
      v13 = UnityEngine_Component__get_gameObject(maskLb, 0LL);
      if ( !v13 )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive(v13, 1, 0LL);
      v14 = this->fields.maskLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_11607;
LABEL_38:
      v24 = LocalizationManager__Get((System_String_o *)*v15, 0LL);
      if ( v14 )
      {
        UILabel__set_text(v14, v24, 0LL);
        return;
      }
LABEL_40:
      sub_B170D4();
    }
    if ( FavoriteChangeListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item) )
    {
      if ( item->fields.isFavorite )
      {
        v16 = (UnityEngine_Component_o *)this->fields.statusLb;
        if ( !v16 )
          goto LABEL_40;
        v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
        if ( !v17 )
          goto LABEL_40;
        UnityEngine_GameObject__SetActive(v17, 0, 0LL);
      }
      v18 = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !v18 )
        goto LABEL_40;
      v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
      if ( !v19 )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive(v19, 1, 0LL);
LABEL_32:
      v22 = (UnityEngine_Component_o *)this->fields.maskLb;
      if ( !v22 )
        goto LABEL_40;
      v23 = UnityEngine_Component__get_gameObject(v22, 0LL);
      if ( !v23 )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive(v23, 1, 0LL);
      v14 = this->fields.maskLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_11584;
      goto LABEL_38;
    }
  }
  else if ( FavoriteChangeListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item) )
  {
    v20 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !v20 )
      goto LABEL_40;
    v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !v21 )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive(v21, 1, 0LL);
    if ( !item->fields.isFavorite )
      goto LABEL_32;
  }
}