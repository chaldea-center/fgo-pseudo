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
  UnityEngine_Component_o *maskLb; // x0
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Object_o *removeObject; // x21
  const MethodInfo *v16; // x2

  if ( (byte_42B12BB & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B12BB = 1;
  }
  if ( item )
  {
    maskLb = (UnityEngine_Component_o *)this->fields.maskLb;
    if ( maskLb )
    {
      maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0LL);
      if ( maskLb )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, 0, 0LL);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskLb )
            goto LABEL_50;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                maskLb,
                                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !maskLb )
            goto LABEL_50;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskLb, isInput, 0LL);
          maskLb = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskLb )
            goto LABEL_50;
          ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskLb->klass[1]._1.implementedInterfaces)(
            maskLb,
            0LL,
            1LL,
            maskLb->klass[1]._1.interfaceOffsets);
        }
        lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.lockSprite;
          if ( !maskLb )
            goto LABEL_50;
          gameObject = UnityEngine_Component__get_gameObject(maskLb, 0LL);
          maskLb = (UnityEngine_Component_o *)MultipleViewListViewItem__get_IsDispLock(item, 0LL);
          if ( !gameObject )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)maskLb & 1, 0LL);
        }
        choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.choiceSprite;
          if ( !maskLb )
            goto LABEL_50;
          v12 = UnityEngine_Component__get_gameObject(maskLb, 0LL);
          maskLb = (UnityEngine_Component_o *)MultipleViewListViewItem__get_IsDispChoice(item, 0LL);
          if ( !v12 )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive(v12, (unsigned __int8)maskLb & 1, 0LL);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.pushSprite;
          if ( !maskLb )
            goto LABEL_50;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0LL);
          if ( !maskLb )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, item->fields.isPush, 0LL);
        }
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !maskLb )
            goto LABEL_50;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0LL);
          if ( !maskLb )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, 0, 0LL);
        }
        removeObject = (UnityEngine_Object_o *)this->fields.removeObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(removeObject, 0LL, 0LL) )
          goto LABEL_48;
        maskLb = (UnityEngine_Component_o *)this->fields.removeObject;
        if ( maskLb )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, item->fields.selectNum >= 0, 0LL);
LABEL_48:
          MultipleViewListViewItemDraw__SetMaskInfo(this, item, v16);
          return;
        }
      }
    }
LABEL_50:
    sub_B52A5C(maskLb, item);
  }
}


void __fastcall MultipleViewListViewItemDraw__SetItem(
        MultipleViewListViewItemDraw_o *this,
        MultipleViewListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *partyIcon; // x21
  FlashingIconComponent_o *v9; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Object_o *removeObject; // x21
  const MethodInfo *v17; // x2

  if ( (byte_42B12BA & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B12BA = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      ServantFaceIconComponent__Set_30396076(
        servantFaceIcon,
        item->fields.userSvtEntity,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.statusLb;
      if ( servantFaceIcon )
      {
        servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)servantFaceIcon,
                                                          0LL);
        if ( servantFaceIcon )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskLb;
          if ( servantFaceIcon )
          {
            servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)servantFaceIcon,
                                                              0LL);
            if ( servantFaceIcon )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
              partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
              {
                v9 = this->fields.partyIcon;
                servantFaceIcon = (ServantFaceIconComponent_o *)MultipleViewListViewItem__get_IsParty(item, 0LL);
                if ( !v9 )
                  goto LABEL_52;
                FlashingIconComponent__Set_22571356(v9, (unsigned __int8)servantFaceIcon & 1, 0LL);
              }
              lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
                if ( !servantFaceIcon )
                  goto LABEL_52;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)MultipleViewListViewItem__get_IsDispLock(item, 0LL);
                if ( !gameObject )
                  goto LABEL_52;
                UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)servantFaceIcon & 1, 0LL);
              }
              choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
                if ( !servantFaceIcon )
                  goto LABEL_52;
                v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)MultipleViewListViewItem__get_IsDispChoice(item, 0LL);
                if ( !v13 )
                  goto LABEL_52;
                UnityEngine_GameObject__SetActive(v13, (unsigned __int8)servantFaceIcon & 1, 0LL);
              }
              pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
                if ( !servantFaceIcon )
                  goto LABEL_52;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_52;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0LL);
              }
              maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
                if ( !servantFaceIcon )
                  goto LABEL_52;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_52;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
              }
              removeObject = (UnityEngine_Object_o *)this->fields.removeObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(removeObject, 0LL, 0LL) )
                goto LABEL_50;
              servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.removeObject;
              if ( servantFaceIcon )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)servantFaceIcon,
                  item->fields.selectNum >= 0,
                  0LL);
LABEL_50:
                MultipleViewListViewItemDraw__SetMaskInfo(this, item, v17);
                return;
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_B52A5C(servantFaceIcon, item);
  }
}


void __fastcall MultipleViewListViewItemDraw__SetMaskInfo(
        MultipleViewListViewItemDraw_o *this,
        MultipleViewListViewItem_o *item,
        const MethodInfo *method)
{
  MultipleViewListViewItemDraw_o *v4; // x19
  UILabel_o *maskLb; // x19
  __int64 *v6; // x8
  System_String_o *v7; // x0
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  int32_t selectNum; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42B12BC & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11707/*"SELECT_CANNOT"*/);
    sub_B52984(&StringLiteral_11730/*"SELECT_SERVANT_EVENT_JOIN"*/);
    this = (MultipleViewListViewItemDraw_o *)sub_B52984(&StringLiteral_8907/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/);
    byte_42B12BC = 1;
  }
  selectNum = 0;
  if ( !item )
    goto LABEL_40;
  if ( item->fields.isPushMode )
  {
    if ( MultipleViewListViewItem__get_IsEventJoin(item, 0LL) )
    {
      this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
      if ( !this )
        goto LABEL_40;
      this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
      if ( !this )
        goto LABEL_40;
      this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      maskLb = v4->fields.maskLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = &StringLiteral_11730/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_36:
      v9 = (System_String_o *)*v6;
LABEL_37:
      this = (MultipleViewListViewItemDraw_o *)LocalizationManager__Get(v9, 0LL);
      if ( maskLb )
      {
        UILabel__set_text(maskLb, (System_String_o *)this, 0LL);
        return;
      }
LABEL_40:
      sub_B52A5C(this, item);
    }
    if ( !MultipleViewListViewItem__get_IsHerioneReave(item, 0LL) )
      return;
LABEL_28:
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_40;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_40;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    maskLb = v4->fields.maskLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_11707/*"SELECT_CANNOT"*/;
    goto LABEL_36;
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave(item, 0LL) )
    goto LABEL_28;
  if ( (item->fields.selectNum & 0x80000000) == 0 )
  {
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_40;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_40;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    maskLb = v4->fields.maskLb;
    selectNum = item->fields.selectNum;
    v7 = System_Int32__ToString((int32_t)&selectNum, 0LL);
    v8 = System_String__Concat_44568316((System_String_o *)StringLiteral_8907/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/, v7, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = v8;
    goto LABEL_37;
  }
  if ( item->fields.isSelectedSvtId || item->fields.isSelectedMax )
    goto LABEL_28;
}