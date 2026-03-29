void MultipleViewListViewItemDraw___ctor(MultipleViewListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MultipleViewListViewItemDraw__Awake(MultipleViewListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3, v4, v5, v6, v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskName,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void MultipleViewListViewItemDraw__SetInput(
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

  if ( (byte_4D2BC32 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BC32 = 1;
  }
  if ( item )
  {
    maskLb = (UnityEngine_Component_o *)this->fields.maskLb;
    if ( maskLb )
    {
      maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0);
      if ( maskLb )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, 0, 0);
        baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskLb )
            goto LABEL_44;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                maskLb,
                                                (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !maskLb )
            goto LABEL_44;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskLb, isInput, 0);
          maskLb = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskLb )
            goto LABEL_44;
          ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))maskLb->klass[1]._1.nestedTypes)(
            maskLb,
            0,
            1,
            maskLb->klass[1]._1.implementedInterfaces);
        }
        lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.lockSprite;
          if ( !maskLb )
            goto LABEL_44;
          gameObject = UnityEngine_Component__get_gameObject(maskLb, 0);
          maskLb = (UnityEngine_Component_o *)MultipleViewListViewItem__get_IsDispLock(item, 0);
          if ( !gameObject )
            goto LABEL_44;
          UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)maskLb & 1, 0);
        }
        choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.choiceSprite;
          if ( !maskLb )
            goto LABEL_44;
          v12 = UnityEngine_Component__get_gameObject(maskLb, 0);
          maskLb = (UnityEngine_Component_o *)MultipleViewListViewItem__get_IsDispChoice(item, 0);
          if ( !v12 )
            goto LABEL_44;
          UnityEngine_GameObject__SetActive(v12, (unsigned __int8)maskLb & 1, 0);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.pushSprite;
          if ( !maskLb )
            goto LABEL_44;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0);
          if ( !maskLb )
            goto LABEL_44;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, item->fields.isPush, 0);
        }
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !maskLb )
            goto LABEL_44;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0);
          if ( !maskLb )
            goto LABEL_44;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, 0, 0);
        }
        removeObject = (UnityEngine_Object_o *)this->fields.removeObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(removeObject, 0, 0) )
          goto LABEL_42;
        maskLb = (UnityEngine_Component_o *)this->fields.removeObject;
        if ( maskLb )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, item->fields.selectNum >= 0, 0);
LABEL_42:
          MultipleViewListViewItemDraw__SetMaskInfo(this, item, v16);
          return;
        }
      }
    }
LABEL_44:
    sub_1C93D2C(maskLb, item);
  }
}


void MultipleViewListViewItemDraw__SetItem(
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

  if ( (byte_4D2BC31 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BC31 = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      ServantFaceIconComponent__Set_41811860(
        servantFaceIcon,
        item->fields.userSvtEntity,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        0);
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( servantFaceIcon )
      {
        ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
          servantFaceIcon,
          this->fields.maskSprite,
          this->fields.defaultMaskName,
          this->fields.defaultMaskAtlas,
          0);
        servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.statusLb;
        if ( servantFaceIcon )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)servantFaceIcon,
                                                            0);
          if ( servantFaceIcon )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
            servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskLb;
            if ( servantFaceIcon )
            {
              servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)servantFaceIcon,
                                                                0);
              if ( servantFaceIcon )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
                partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(partyIcon, 0, 0) )
                {
                  v9 = this->fields.partyIcon;
                  servantFaceIcon = (ServantFaceIconComponent_o *)MultipleViewListViewItem__get_IsParty(item, 0);
                  if ( !v9 )
                    goto LABEL_47;
                  FlashingIconComponent__Set_41619952(v9, (unsigned __int8)servantFaceIcon & 1, 0);
                }
                lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
                {
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
                  if ( !servantFaceIcon )
                    goto LABEL_47;
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
                  servantFaceIcon = (ServantFaceIconComponent_o *)MultipleViewListViewItem__get_IsDispLock(item, 0);
                  if ( !gameObject )
                    goto LABEL_47;
                  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)servantFaceIcon & 1, 0);
                }
                choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
                {
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
                  if ( !servantFaceIcon )
                    goto LABEL_47;
                  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
                  servantFaceIcon = (ServantFaceIconComponent_o *)MultipleViewListViewItem__get_IsDispChoice(item, 0);
                  if ( !v13 )
                    goto LABEL_47;
                  UnityEngine_GameObject__SetActive(v13, (unsigned __int8)servantFaceIcon & 1, 0);
                }
                pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
                {
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
                  if ( !servantFaceIcon )
                    goto LABEL_47;
                  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                                    0);
                  if ( !servantFaceIcon )
                    goto LABEL_47;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0);
                }
                maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
                {
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
                  if ( !servantFaceIcon )
                    goto LABEL_47;
                  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                                    0);
                  if ( !servantFaceIcon )
                    goto LABEL_47;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
                }
                removeObject = (UnityEngine_Object_o *)this->fields.removeObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(removeObject, 0, 0) )
                  goto LABEL_45;
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.removeObject;
                if ( servantFaceIcon )
                {
                  UnityEngine_GameObject__SetActive(
                    (UnityEngine_GameObject_o *)servantFaceIcon,
                    item->fields.selectNum >= 0,
                    0);
LABEL_45:
                  MultipleViewListViewItemDraw__SetMaskInfo(this, item, v17);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_47:
    sub_1C93D2C(servantFaceIcon, item);
  }
}


void MultipleViewListViewItemDraw__SetMaskInfo(
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
  int32_t selectNum; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4D2BC33 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11608/*"SELECT_CANNOT"*/);
    sub_1C93AD4(&StringLiteral_11640/*"SELECT_SERVANT_EVENT_JOIN"*/);
    this = (MultipleViewListViewItemDraw_o *)sub_1C93AD4(&StringLiteral_8870/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/);
    byte_4D2BC33 = 1;
  }
  if ( !item )
    goto LABEL_37;
  if ( item->fields.isPushMode )
  {
    if ( MultipleViewListViewItem__get_IsEventJoin(item, 0) )
    {
      this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
      if ( !this )
        goto LABEL_37;
      this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
      if ( !this )
        goto LABEL_37;
      this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      maskLb = v4->fields.maskLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_11640/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_33:
      v9 = (System_String_o *)*v6;
LABEL_34:
      this = (MultipleViewListViewItemDraw_o *)LocalizationManager__Get(v9, 0);
      if ( maskLb )
      {
        UILabel__set_text(maskLb, (System_String_o *)this, 0);
        return;
      }
LABEL_37:
      sub_1C93D2C(this, item);
    }
    if ( !MultipleViewListViewItem__get_IsHerioneReave(item, 0) )
      return;
LABEL_26:
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_37;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_37;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    maskLb = v4->fields.maskLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11608/*"SELECT_CANNOT"*/;
    goto LABEL_33;
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave(item, 0) )
    goto LABEL_26;
  if ( (item->fields.selectNum & 0x80000000) == 0 )
  {
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_37;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_37;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    maskLb = v4->fields.maskLb;
    selectNum = item->fields.selectNum;
    v7 = System_Int32__ToString((int32_t)&selectNum, 0);
    v8 = System_String__Concat_64425724((System_String_o *)StringLiteral_8870/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/, v7, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = v8;
    goto LABEL_34;
  }
  if ( item->fields.isSelectedSvtId || item->fields.isSelectedMax )
    goto LABEL_26;
}