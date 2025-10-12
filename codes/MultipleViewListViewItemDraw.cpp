void MultipleViewListViewItemDraw___ctor(MultipleViewListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MultipleViewListViewItemDraw__Awake(MultipleViewListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UISprite_o *v9; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3);
  v9 = this->fields.maskSprite;
  if ( v9 )
    mSpriteName = v9->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.defaultMaskName, (int32_t)mSpriteName, v7, v8);
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
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Object_o *removeObject; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4C32C4A & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32C4A = 1;
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
            goto LABEL_50;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                maskLb,
                                                (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !maskLb )
            goto LABEL_50;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskLb, isInput, 0);
          maskLb = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskLb )
            goto LABEL_50;
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
            goto LABEL_50;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0);
          if ( !maskLb )
            goto LABEL_50;
          if ( item->fields.isSwapLock )
            isLock = !item->fields.isLock;
          else
            isLock = item->fields.isLock;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, isLock, 0);
        }
        choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.choiceSprite;
          if ( !maskLb )
            goto LABEL_50;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0);
          if ( !maskLb )
            goto LABEL_50;
          if ( item->fields.isSwapChoice )
            isChoice = !item->fields.isChoice;
          else
            isChoice = item->fields.isChoice;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, isChoice, 0);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.pushSprite;
          if ( !maskLb )
            goto LABEL_50;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0);
          if ( !maskLb )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, item->fields.isPush, 0);
        }
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !maskLb )
            goto LABEL_50;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0);
          if ( !maskLb )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, 0, 0);
        }
        removeObject = (UnityEngine_Object_o *)this->fields.removeObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(removeObject, 0, 0) )
          goto LABEL_48;
        maskLb = (UnityEngine_Component_o *)this->fields.removeObject;
        if ( maskLb )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, item->fields.selectNum >= 0, 0);
LABEL_48:
          MultipleViewListViewItemDraw__SetMaskInfo(this, item, v16);
          return;
        }
      }
    }
LABEL_50:
    sub_1C32E7C(maskLb);
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
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Object_o *removeObject; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4C32C49 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32C49 = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      ServantFaceIconComponent__Set_40905852(
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
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
                  if ( !servantFaceIcon )
                    goto LABEL_53;
                  FlashingIconComponent__Set_40801560(
                    (FlashingIconComponent_o *)servantFaceIcon,
                    item->fields.partyIndex >= 0,
                    0);
                }
                lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
                {
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
                  if ( !servantFaceIcon )
                    goto LABEL_53;
                  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                                    0);
                  if ( !servantFaceIcon )
                    goto LABEL_53;
                  if ( item->fields.isSwapLock )
                    isLock = !item->fields.isLock;
                  else
                    isLock = item->fields.isLock;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isLock, 0);
                }
                choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
                {
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
                  if ( !servantFaceIcon )
                    goto LABEL_53;
                  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                                    0);
                  if ( !servantFaceIcon )
                    goto LABEL_53;
                  if ( item->fields.isSwapChoice )
                    isChoice = !item->fields.isChoice;
                  else
                    isChoice = item->fields.isChoice;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isChoice, 0);
                }
                pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
                {
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
                  if ( !servantFaceIcon )
                    goto LABEL_53;
                  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                                    0);
                  if ( !servantFaceIcon )
                    goto LABEL_53;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0);
                }
                maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
                {
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
                  if ( !servantFaceIcon )
                    goto LABEL_53;
                  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                                    0);
                  if ( !servantFaceIcon )
                    goto LABEL_53;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
                }
                removeObject = (UnityEngine_Object_o *)this->fields.removeObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(removeObject, 0, 0) )
                  goto LABEL_51;
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.removeObject;
                if ( servantFaceIcon )
                {
                  UnityEngine_GameObject__SetActive(
                    (UnityEngine_GameObject_o *)servantFaceIcon,
                    item->fields.selectNum >= 0,
                    0);
LABEL_51:
                  MultipleViewListViewItemDraw__SetMaskInfo(this, item, v16);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_1C32E7C(servantFaceIcon);
  }
}


void MultipleViewListViewItemDraw__SetMaskInfo(
        MultipleViewListViewItemDraw_o *this,
        MultipleViewListViewItem_o *item,
        const MethodInfo *method)
{
  MultipleViewListViewItemDraw_o *v4; // x19
  UserServantEntity_o *userSvtEntity; // x0
  UILabel_o *maskLb; // x19
  __int64 *v7; // x8
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x20
  int32_t selectNum; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C32C4B & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11520/*"SELECT_CANNOT"*/);
    sub_1C32C20(&StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/);
    this = (MultipleViewListViewItemDraw_o *)sub_1C32C20(&StringLiteral_8818/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/);
    byte_4C32C4B = 1;
  }
  if ( !item )
    goto LABEL_39;
  if ( item->fields.isPushMode )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity && UserServantEntity__IsEventJoin(userSvtEntity, 0) )
    {
      this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
      if ( !this )
        goto LABEL_39;
      this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
      if ( !this )
        goto LABEL_39;
      this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      maskLb = v4->fields.maskLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11552/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_24:
      v8 = (System_String_o *)*v7;
LABEL_25:
      this = (MultipleViewListViewItemDraw_o *)LocalizationManager__Get(v8, 0);
      if ( maskLb )
      {
        UILabel__set_text(maskLb, (System_String_o *)this, 0);
        return;
      }
LABEL_39:
      sub_1C32E7C(this);
    }
    if ( !MultipleViewListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item) )
      return;
LABEL_17:
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_39;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_39;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    maskLb = v4->fields.maskLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_11520/*"SELECT_CANNOT"*/;
    goto LABEL_24;
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item) )
    goto LABEL_17;
  if ( (item->fields.selectNum & 0x80000000) == 0 )
  {
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_39;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_39;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    maskLb = v4->fields.maskLb;
    selectNum = item->fields.selectNum;
    v9 = System_Int32__ToString((int32_t)&selectNum, 0);
    v10 = System_String__Concat_63518544((System_String_o *)StringLiteral_8818/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/, v9, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = v10;
    goto LABEL_25;
  }
  if ( item->fields.isSelectedSvtId || item->fields.isSelectedMax )
    goto LABEL_17;
}