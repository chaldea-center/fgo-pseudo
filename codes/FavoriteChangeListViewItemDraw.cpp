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
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4B3FADB & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B3FADB = 1;
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
            goto LABEL_49;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                maskLb,
                                                (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !maskLb )
            goto LABEL_49;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskLb, isInput, 0LL);
          maskLb = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskLb )
            goto LABEL_49;
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
            goto LABEL_49;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0LL);
          if ( !maskLb )
            goto LABEL_49;
          if ( item->fields.isSwapLock )
            isLock = !item->fields.isLock;
          else
            isLock = item->fields.isLock;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, isLock, 0LL);
        }
        choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.choiceSprite;
          if ( !maskLb )
            goto LABEL_49;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0LL);
          if ( !maskLb )
            goto LABEL_49;
          if ( item->fields.isSwapChoice )
            isChoice = !item->fields.isChoice;
          else
            isChoice = item->fields.isChoice;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, isChoice, 0LL);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.pushSprite;
          if ( !maskLb )
            goto LABEL_49;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0LL);
          if ( !maskLb )
            goto LABEL_49;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, item->fields.isPush, 0LL);
        }
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
        {
          maskLb = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !maskLb )
            goto LABEL_49;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0LL);
          if ( !maskLb )
            goto LABEL_49;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, 0, 0LL);
        }
        if ( !item->fields.isFavorite )
        {
LABEL_47:
          FavoriteChangeListViewItemDraw__SetMaskInfo(this, item, v16);
          return;
        }
        maskLb = (UnityEngine_Component_o *)this->fields.statusLb;
        if ( maskLb )
        {
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0LL);
          if ( maskLb )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, 1, 0LL);
            goto LABEL_47;
          }
        }
      }
    }
LABEL_49:
    sub_1BDBAD4(maskLb, item);
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
  UnityEngine_Object_o *partyIcon; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v17; // x2
  UILabel_o *statusLb; // x21

  if ( (byte_4B3FADA & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, item);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_8815/*"MYROOM_FAVORITE_STATUS"*/, v8);
    byte_4B3FADA = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      ServantFaceIconComponent__Set_40018236(
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
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
                if ( !servantFaceIcon )
                  goto LABEL_54;
                FlashingIconComponent__Set_39913908(
                  (FlashingIconComponent_o *)servantFaceIcon,
                  item->fields.partyIndex >= 0,
                  0LL);
              }
              lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
                if ( !servantFaceIcon )
                  goto LABEL_54;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_54;
                if ( item->fields.isSwapLock )
                  isLock = !item->fields.isLock;
                else
                  isLock = item->fields.isLock;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isLock, 0LL);
              }
              choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
                if ( !servantFaceIcon )
                  goto LABEL_54;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_54;
                if ( item->fields.isSwapChoice )
                  isChoice = !item->fields.isChoice;
                else
                  isChoice = item->fields.isChoice;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isChoice, 0LL);
              }
              pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
                if ( !servantFaceIcon )
                  goto LABEL_54;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_54;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0LL);
              }
              maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
                if ( !servantFaceIcon )
                  goto LABEL_54;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_54;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
              }
              if ( !item->fields.isFavorite )
              {
LABEL_52:
                FavoriteChangeListViewItemDraw__SetMaskInfo(this, item, v17);
                return;
              }
              servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.statusLb;
              if ( servantFaceIcon )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( servantFaceIcon )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
                  statusLb = this->fields.statusLb;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_8815/*"MYROOM_FAVORITE_STATUS"*/,
                                                                    0LL);
                  if ( statusLb )
                  {
                    UILabel__set_text(statusLb, (System_String_o *)servantFaceIcon, 0LL);
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
    sub_1BDBAD4(servantFaceIcon, item);
  }
}


void __fastcall FavoriteChangeListViewItemDraw__SetMaskInfo(
        FavoriteChangeListViewItemDraw_o *this,
        FavoriteChangeListViewItem_o *item,
        const MethodInfo *method)
{
  FavoriteChangeListViewItemDraw_o **v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UILabel_o *v8; // x19
  __int64 *v9; // x8

  v4 = (FavoriteChangeListViewItemDraw_o **)this;
  if ( (byte_4B3FADC & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, item);
    sub_1BDB878(&StringLiteral_11491/*"SELECT_CANNOT"*/, v5);
    this = (FavoriteChangeListViewItemDraw_o *)sub_1BDB878(&StringLiteral_11522/*"SELECT_SERVANT_EVENT_JOIN"*/, v6);
    byte_4B3FADC = 1;
  }
  if ( !item )
    goto LABEL_38;
  if ( item->fields.isPushMode )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity && UserServantEntity__IsEventJoin(userSvtEntity, 0LL) )
    {
      if ( item->fields.isFavorite )
      {
        this = v4[10];
        if ( !this )
          goto LABEL_38;
        this = (FavoriteChangeListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_38;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      this = v4[11];
      if ( !this )
        goto LABEL_38;
      this = (FavoriteChangeListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = v4[12];
      if ( !this )
        goto LABEL_38;
      this = (FavoriteChangeListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v8 = (UILabel_o *)v4[12];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_11522/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_36:
      this = (FavoriteChangeListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v9, 0LL);
      if ( v8 )
      {
        UILabel__set_text(v8, (System_String_o *)this, 0LL);
        return;
      }
LABEL_38:
      sub_1BDBAD4(this, item);
    }
    if ( FavoriteChangeListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item) )
    {
      if ( item->fields.isFavorite )
      {
        this = v4[10];
        if ( !this )
          goto LABEL_38;
        this = (FavoriteChangeListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_38;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      this = v4[11];
      if ( !this )
        goto LABEL_38;
      this = (FavoriteChangeListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_31:
      this = v4[12];
      if ( !this )
        goto LABEL_38;
      this = (FavoriteChangeListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v8 = (UILabel_o *)v4[12];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = &StringLiteral_11491/*"SELECT_CANNOT"*/;
      goto LABEL_36;
    }
  }
  else if ( FavoriteChangeListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item) )
  {
    this = v4[11];
    if ( !this )
      goto LABEL_38;
    this = (FavoriteChangeListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !this )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    if ( !item->fields.isFavorite )
      goto LABEL_31;
  }
}