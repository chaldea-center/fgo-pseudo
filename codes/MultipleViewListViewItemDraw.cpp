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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UnityEngine_Component_o *maskLb; // x0
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Object_o *removeObject; // x21
  const MethodInfo *v19; // x2

  if ( (byte_42E9D4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)item, isInput, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E9D4A = 1;
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
                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
          v15 = UnityEngine_Component__get_gameObject(maskLb, 0LL);
          maskLb = (UnityEngine_Component_o *)MultipleViewListViewItem__get_IsDispChoice(item, 0LL);
          if ( !v15 )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive(v15, (unsigned __int8)maskLb & 1, 0LL);
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
          MultipleViewListViewItemDraw__SetMaskInfo(this, item, v19);
          return;
        }
      }
    }
LABEL_50:
    sub_B5D69C(maskLb, item);
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

  if ( (byte_42E9D49 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, mode, method);
    byte_42E9D49 = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      ServantFaceIconComponent__Set_30775392(
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
                FlashingIconComponent__Set_21625204(v9, (unsigned __int8)servantFaceIcon & 1, 0LL);
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
    sub_B5D69C(servantFaceIcon, item);
  }
}


void __fastcall MultipleViewListViewItemDraw__SetMaskInfo(
        MultipleViewListViewItemDraw_o *this,
        MultipleViewListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MultipleViewListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UILabel_o *maskLb; // x19
  __int64 *v16; // x8
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  int32_t selectNum; // [xsp+Ch] [xbp-14h] BYREF

  v5 = this;
  if ( (byte_42E9D4B & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, v9, v10, v11);
    this = (MultipleViewListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_8944/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/, v12, v13, v14);
    byte_42E9D4B = 1;
  }
  selectNum = 0;
  if ( !item )
    goto LABEL_40;
  if ( item->fields.isPushMode )
  {
    if ( MultipleViewListViewItem__get_IsEventJoin(item, 0LL) )
    {
      this = (MultipleViewListViewItemDraw_o *)v5->fields.maskSprite;
      if ( !this )
        goto LABEL_40;
      this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MultipleViewListViewItemDraw_o *)v5->fields.maskLb;
      if ( !this )
        goto LABEL_40;
      this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      maskLb = v5->fields.maskLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_36:
      v19 = (System_String_o *)*v16;
LABEL_37:
      this = (MultipleViewListViewItemDraw_o *)LocalizationManager__Get(v19, 0LL);
      if ( maskLb )
      {
        UILabel__set_text(maskLb, (System_String_o *)this, 0LL);
        return;
      }
LABEL_40:
      sub_B5D69C(this, item);
    }
    if ( !MultipleViewListViewItem__get_IsHerioneReave(item, 0LL) )
      return;
LABEL_28:
    this = (MultipleViewListViewItemDraw_o *)v5->fields.maskSprite;
    if ( !this )
      goto LABEL_40;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (MultipleViewListViewItemDraw_o *)v5->fields.maskLb;
    if ( !this )
      goto LABEL_40;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    maskLb = v5->fields.maskLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
    goto LABEL_36;
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave(item, 0LL) )
    goto LABEL_28;
  if ( (item->fields.selectNum & 0x80000000) == 0 )
  {
    this = (MultipleViewListViewItemDraw_o *)v5->fields.maskSprite;
    if ( !this )
      goto LABEL_40;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (MultipleViewListViewItemDraw_o *)v5->fields.maskLb;
    if ( !this )
      goto LABEL_40;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    maskLb = v5->fields.maskLb;
    selectNum = item->fields.selectNum;
    v17 = System_Int32__ToString((int32_t)&selectNum, 0LL);
    v18 = System_String__Concat_44577788((System_String_o *)StringLiteral_8944/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/, v17, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = v18;
    goto LABEL_37;
  }
  if ( item->fields.isSelectedSvtId || item->fields.isSelectedMax )
    goto LABEL_28;
}