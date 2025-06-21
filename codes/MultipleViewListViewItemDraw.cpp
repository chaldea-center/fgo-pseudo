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
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Object_o *removeObject; // x21
  const MethodInfo *v17; // x2

  if ( (byte_4B1784C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B1784C = 1;
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
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskLb )
            goto LABEL_44;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                maskLb,
                                                (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !maskLb )
            goto LABEL_44;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskLb, isInput, 0LL);
          maskLb = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskLb )
            goto LABEL_44;
          ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))maskLb->klass[1]._1.implementedInterfaces)(
            maskLb,
            0LL,
            1LL,
            maskLb->klass[1]._1.interfaceOffsets);
        }
        lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.lockSprite;
          if ( !maskLb )
            goto LABEL_44;
          gameObject = UnityEngine_Component__get_gameObject(maskLb, 0LL);
          maskLb = (UnityEngine_Component_o *)MultipleViewListViewItem__get_IsDispLock(item, 0LL);
          if ( !gameObject )
            goto LABEL_44;
          UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)maskLb & 1, 0LL);
        }
        choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.choiceSprite;
          if ( !maskLb )
            goto LABEL_44;
          v13 = UnityEngine_Component__get_gameObject(maskLb, 0LL);
          maskLb = (UnityEngine_Component_o *)MultipleViewListViewItem__get_IsDispChoice(item, 0LL);
          if ( !v13 )
            goto LABEL_44;
          UnityEngine_GameObject__SetActive(v13, (unsigned __int8)maskLb & 1, 0LL);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.pushSprite;
          if ( !maskLb )
            goto LABEL_44;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0LL);
          if ( !maskLb )
            goto LABEL_44;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, item->fields.isPush, 0LL);
        }
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !maskLb )
            goto LABEL_44;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0LL);
          if ( !maskLb )
            goto LABEL_44;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, 0, 0LL);
        }
        removeObject = (UnityEngine_Object_o *)this->fields.removeObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(removeObject, 0LL, 0LL) )
          goto LABEL_42;
        maskLb = (UnityEngine_Component_o *)this->fields.removeObject;
        if ( maskLb )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, item->fields.selectNum >= 0, 0LL);
LABEL_42:
          MultipleViewListViewItemDraw__SetMaskInfo(this, item, v17);
          return;
        }
      }
    }
LABEL_44:
    sub_1BCB254(maskLb, item);
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

  if ( (byte_4B1784B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, item);
    byte_4B1784B = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      ServantFaceIconComponent__Set_40190236(
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
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
              {
                v9 = this->fields.partyIcon;
                servantFaceIcon = (ServantFaceIconComponent_o *)MultipleViewListViewItem__get_IsParty(item, 0LL);
                if ( !v9 )
                  goto LABEL_46;
                FlashingIconComponent__Set_40087648(v9, (unsigned __int8)servantFaceIcon & 1, 0LL);
              }
              lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
                if ( !servantFaceIcon )
                  goto LABEL_46;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)MultipleViewListViewItem__get_IsDispLock(item, 0LL);
                if ( !gameObject )
                  goto LABEL_46;
                UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)servantFaceIcon & 1, 0LL);
              }
              choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
                if ( !servantFaceIcon )
                  goto LABEL_46;
                v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)MultipleViewListViewItem__get_IsDispChoice(item, 0LL);
                if ( !v13 )
                  goto LABEL_46;
                UnityEngine_GameObject__SetActive(v13, (unsigned __int8)servantFaceIcon & 1, 0LL);
              }
              pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
                if ( !servantFaceIcon )
                  goto LABEL_46;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_46;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0LL);
              }
              maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
                if ( !servantFaceIcon )
                  goto LABEL_46;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_46;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
              }
              removeObject = (UnityEngine_Object_o *)this->fields.removeObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(removeObject, 0LL, 0LL) )
                goto LABEL_44;
              servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.removeObject;
              if ( servantFaceIcon )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)servantFaceIcon,
                  item->fields.selectNum >= 0,
                  0LL);
LABEL_44:
                MultipleViewListViewItemDraw__SetMaskInfo(this, item, v17);
                return;
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_1BCB254(servantFaceIcon, item);
  }
}


void __fastcall MultipleViewListViewItemDraw__SetMaskInfo(
        MultipleViewListViewItemDraw_o *this,
        MultipleViewListViewItem_o *item,
        const MethodInfo *method)
{
  MultipleViewListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *maskLb; // x19
  __int64 *v9; // x8
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  int32_t selectNum; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4B1784D & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, item);
    sub_1BCAFF8(&StringLiteral_11417/*"SELECT_CANNOT"*/, v5);
    sub_1BCAFF8(&StringLiteral_11448/*"SELECT_SERVANT_EVENT_JOIN"*/, v6);
    this = (MultipleViewListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_8748/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/, v7);
    byte_4B1784D = 1;
  }
  if ( !item )
    goto LABEL_37;
  if ( item->fields.isPushMode )
  {
    if ( MultipleViewListViewItem__get_IsEventJoin(item, 0LL) )
    {
      this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
      if ( !this )
        goto LABEL_37;
      this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
      if ( !this )
        goto LABEL_37;
      this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( !this )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      maskLb = v4->fields.maskLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_11448/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_33:
      v12 = (System_String_o *)*v9;
LABEL_34:
      this = (MultipleViewListViewItemDraw_o *)LocalizationManager__Get(v12, 0LL);
      if ( maskLb )
      {
        UILabel__set_text(maskLb, (System_String_o *)this, 0LL);
        return;
      }
LABEL_37:
      sub_1BCB254(this, item);
    }
    if ( !MultipleViewListViewItem__get_IsHerioneReave(item, 0LL) )
      return;
LABEL_26:
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_37;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_37;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    maskLb = v4->fields.maskLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_11417/*"SELECT_CANNOT"*/;
    goto LABEL_33;
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave(item, 0LL) )
    goto LABEL_26;
  if ( (item->fields.selectNum & 0x80000000) == 0 )
  {
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_37;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_37;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    maskLb = v4->fields.maskLb;
    selectNum = item->fields.selectNum;
    v10 = System_Int32__ToString((int32_t)&selectNum, 0LL);
    v11 = System_String__Concat_62450424((System_String_o *)StringLiteral_8748/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/, v10, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = v11;
    goto LABEL_34;
  }
  if ( item->fields.isSelectedSvtId || item->fields.isSelectedMax )
    goto LABEL_26;
}