void __fastcall PhotoCampaignListViewItemDraw___ctor(PhotoCampaignListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PhotoCampaignListViewItemDraw__SetInput(
        PhotoCampaignListViewItemDraw_o *this,
        PhotoCampaignListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Component_o *maskLb; // x0
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Object_o *removeObject; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4186AD3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4186AD3 = 1;
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
                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0LL);
          if ( !maskLb )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)maskLb,
            item->fields.isSwapLock != item->fields.isLock,
            0LL);
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
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0LL);
          if ( !maskLb )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)maskLb,
            item->fields.isSwapChoice != item->fields.isChoice,
            0LL);
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
          PhotoCampaignListViewItemDraw__SetMaskInfo(this, item, v15);
          return;
        }
      }
    }
LABEL_50:
    sub_B2C434(maskLb, item);
  }
}


void __fastcall PhotoCampaignListViewItemDraw__SetItem(
        PhotoCampaignListViewItemDraw_o *this,
        PhotoCampaignListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *partyIcon; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Object_o *removeObject; // x21
  const MethodInfo *v14; // x2

  if ( (byte_4186AD2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_4186AD2 = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      ServantFaceIconComponent__Set_30719352(
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
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
                if ( !servantFaceIcon )
                  goto LABEL_52;
                FlashingIconComponent__Set_23093612(
                  (FlashingIconComponent_o *)servantFaceIcon,
                  item->fields.partyIndex >= 0,
                  0LL);
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
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_52;
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)servantFaceIcon,
                  item->fields.isSwapLock != item->fields.isLock,
                  0LL);
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
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_52;
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)servantFaceIcon,
                  item->fields.isSwapChoice != item->fields.isChoice,
                  0LL);
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
                PhotoCampaignListViewItemDraw__SetMaskInfo(this, item, v14);
                return;
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_B2C434(servantFaceIcon, item);
  }
}


void __fastcall PhotoCampaignListViewItemDraw__SetMaskInfo(
        PhotoCampaignListViewItemDraw_o *this,
        PhotoCampaignListViewItem_o *item,
        const MethodInfo *method)
{
  PhotoCampaignListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UILabel_o *maskLb; // x19
  __int64 *v10; // x8

  v4 = this;
  if ( (byte_4186AD4 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&StringLiteral_11620/*"SELECT_CANNOT"*/, v5);
    sub_B2C35C(&StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/, v6);
    this = (PhotoCampaignListViewItemDraw_o *)sub_B2C35C(&StringLiteral_10437/*"PHOTO_SERVANT_SELECTED_SERVANT"*/, v7);
    byte_4186AD4 = 1;
  }
  if ( !item )
    goto LABEL_40;
  if ( !item->fields.isPushMode )
  {
    if ( !PhotoCampaignListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item) )
    {
      if ( (item->fields.selectNum & 0x80000000) == 0 )
      {
        this = (PhotoCampaignListViewItemDraw_o *)v4->fields.maskSprite;
        if ( !this )
          goto LABEL_40;
        this = (PhotoCampaignListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
        if ( !this )
          goto LABEL_40;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (PhotoCampaignListViewItemDraw_o *)v4->fields.maskLb;
        if ( !this )
          goto LABEL_40;
        this = (PhotoCampaignListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
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
        v10 = &StringLiteral_10437/*"PHOTO_SERVANT_SELECTED_SERVANT"*/;
        goto LABEL_35;
      }
      if ( !item->fields.isSelectedSvtId && !item->fields.isSelectedMax )
        return;
    }
LABEL_18:
    this = (PhotoCampaignListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_40;
    this = (PhotoCampaignListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (PhotoCampaignListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_40;
    this = (PhotoCampaignListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
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
    v10 = &StringLiteral_11620/*"SELECT_CANNOT"*/;
    goto LABEL_35;
  }
  userSvtEntity = item->fields.userSvtEntity;
  if ( userSvtEntity && UserServantEntity__IsEventJoin(userSvtEntity, 0LL) )
  {
    this = (PhotoCampaignListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_40;
    this = (PhotoCampaignListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (PhotoCampaignListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_40;
    this = (PhotoCampaignListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
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
    v10 = &StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_35:
    this = (PhotoCampaignListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v10, 0LL);
    if ( maskLb )
    {
      UILabel__set_text(maskLb, (System_String_o *)this, 0LL);
      return;
    }
LABEL_40:
    sub_B2C434(this, item);
  }
  if ( PhotoCampaignListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item) )
    goto LABEL_18;
}