void MultipleViewListViewItemDraw___ctor(MultipleViewListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MultipleViewListViewItemDraw__Awake(MultipleViewListViewItemDraw_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskAtlas,
    (int32_t)mAtlas,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskName,
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *baseButton; // x22
  __int64 v11; // x2
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v13; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  __int64 v16; // x2
  UnityEngine_GameObject_o *v17; // x21
  UnityEngine_Object_o *pushSprite; // x21
  __int64 v19; // x2
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v21; // x2
  UnityEngine_Object_o *removeObject; // x21
  const MethodInfo *v23; // x2

  if ( (byte_596B898 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B898 = 1;
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
        if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskLb )
            goto LABEL_44;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                maskLb,
                                                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v11);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v13);
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.choiceSprite;
          if ( !maskLb )
            goto LABEL_44;
          v17 = UnityEngine_Component__get_gameObject(maskLb, 0);
          maskLb = (UnityEngine_Component_o *)MultipleViewListViewItem__get_IsDispChoice(item, 0);
          if ( !v17 )
            goto LABEL_44;
          UnityEngine_GameObject__SetActive(v17, (unsigned __int8)maskLb & 1, 0);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v16);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v19);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v21);
        if ( !UnityEngine_Object__op_Inequality(removeObject, 0, 0) )
          goto LABEL_42;
        maskLb = (UnityEngine_Component_o *)this->fields.removeObject;
        if ( maskLb )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, item->fields.selectNum >= 0, 0);
LABEL_42:
          MultipleViewListViewItemDraw__SetMaskInfo(this, item, v23);
          return;
        }
      }
    }
LABEL_44:
    sub_2213CDC(maskLb, item);
  }
}


void MultipleViewListViewItemDraw__SetItem(
        MultipleViewListViewItemDraw_o *this,
        MultipleViewListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *partyIcon; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  FlashingIconComponent_o *v13; // x21
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v15; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  __int64 v18; // x2
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_Object_o *pushSprite; // x21
  __int64 v21; // x2
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v23; // x2
  UnityEngine_Object_o *removeObject; // x21
  const MethodInfo *v25; // x2

  if ( (byte_596B897 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B897 = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      ServantFaceIconComponent__Set_48049524(
        servantFaceIcon,
        item->fields.userSvtEntity,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        1,
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
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
                if ( UnityEngine_Object__op_Inequality(partyIcon, 0, 0) )
                {
                  v13 = this->fields.partyIcon;
                  servantFaceIcon = (ServantFaceIconComponent_o *)MultipleViewListViewItem__get_IsParty(item, 0);
                  if ( !v13 )
                    goto LABEL_47;
                  FlashingIconComponent__Set_47864696(v13, (unsigned __int8)servantFaceIcon & 1, 0);
                }
                lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
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
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v15);
                if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
                {
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
                  if ( !servantFaceIcon )
                    goto LABEL_47;
                  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
                  servantFaceIcon = (ServantFaceIconComponent_o *)MultipleViewListViewItem__get_IsDispChoice(item, 0);
                  if ( !v19 )
                    goto LABEL_47;
                  UnityEngine_GameObject__SetActive(v19, (unsigned __int8)servantFaceIcon & 1, 0);
                }
                pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v18);
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
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v21);
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
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v23);
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
                  MultipleViewListViewItemDraw__SetMaskInfo(this, item, v25);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_47:
    sub_2213CDC(servantFaceIcon, item);
  }
}


void MultipleViewListViewItemDraw__SetMaskInfo(
        MultipleViewListViewItemDraw_o *this,
        MultipleViewListViewItem_o *item,
        const MethodInfo *method)
{
  MultipleViewListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *v7; // x19
  __int64 *v8; // x8
  UILabel_o *maskLb; // x19
  System_String_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t selectNum; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_596B899 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12029/*"SELECT_CANNOT"*/);
    sub_2213A60(&StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/);
    this = (MultipleViewListViewItemDraw_o *)sub_2213A60(&StringLiteral_9184/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/);
    byte_596B899 = 1;
  }
  selectNum = 0;
  if ( !item )
    goto LABEL_36;
  if ( !item->fields.isPushMode )
  {
    if ( !MultipleViewListViewItem__get_IsHerioneReave(item, 0) )
    {
      if ( (item->fields.selectNum & 0x80000000) == 0 )
      {
        this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
        if ( this )
        {
          this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
            if ( this )
            {
              this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                maskLb = v4->fields.maskLb;
                selectNum = item->fields.selectNum;
                v10 = System_Int32__ToString((int32_t)&selectNum, 0);
                v13 = System_String__Concat_75651716((System_String_o *)StringLiteral_9184/*"MULTIPLE_SERVANT_SELECTED_SERVANT_"*/, v10, 0);
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
                this = (MultipleViewListViewItemDraw_o *)LocalizationManager__Get(v13, 0);
                if ( maskLb )
                {
                  UILabel__set_text(maskLb, (System_String_o *)this, 0);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_36;
      }
      if ( !item->fields.isSelectedSvtId && !item->fields.isSelectedMax )
        return;
    }
LABEL_27:
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_36;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_36;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v7 = v4->fields.maskLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
    v8 = &StringLiteral_12029/*"SELECT_CANNOT"*/;
    goto LABEL_34;
  }
  if ( MultipleViewListViewItem__get_IsEventJoin(item, 0) )
  {
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_36;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (MultipleViewListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_36;
    this = (MultipleViewListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v7 = v4->fields.maskLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    v8 = &StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_34:
    this = (MultipleViewListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v8, 0);
    if ( v7 )
    {
      UILabel__set_text(v7, (System_String_o *)this, 0);
      return;
    }
LABEL_36:
    sub_2213CDC(this, item);
  }
  if ( MultipleViewListViewItem__get_IsHerioneReave(item, 0) )
    goto LABEL_27;
}