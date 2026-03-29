void PhotoCampaignListViewItemDraw___ctor(PhotoCampaignListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PhotoCampaignListViewItemDraw__Awake(PhotoCampaignListViewItemDraw_o *this, const MethodInfo *method)
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


void PhotoCampaignListViewItemDraw__SetInput(
        PhotoCampaignListViewItemDraw_o *this,
        PhotoCampaignListViewItem_o *item,
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
  const MethodInfo *v15; // x2

  if ( (byte_4D2BE4F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BE4F = 1;
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
            goto LABEL_45;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                maskLb,
                                                (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
          if ( !maskLb )
            goto LABEL_45;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskLb, isInput, 0);
          maskLb = (UnityEngine_Component_o *)this->fields.baseButton;
          if ( !maskLb )
            goto LABEL_45;
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
            goto LABEL_45;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0);
          if ( !maskLb )
            goto LABEL_45;
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
            goto LABEL_45;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0);
          if ( !maskLb )
            goto LABEL_45;
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
            goto LABEL_45;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0);
          if ( !maskLb )
            goto LABEL_45;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, item->fields.isPush, 0);
        }
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
          goto LABEL_43;
        maskLb = (UnityEngine_Component_o *)this->fields.maskSprite;
        if ( maskLb )
        {
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskLb, 0);
          if ( maskLb )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskLb, 0, 0);
LABEL_43:
            PhotoCampaignListViewItemDraw__SetMaskInfo(this, item, v15);
            return;
          }
        }
      }
    }
LABEL_45:
    sub_1C93D2C(maskLb, item);
  }
}


void PhotoCampaignListViewItemDraw__SetItem(
        PhotoCampaignListViewItemDraw_o *this,
        PhotoCampaignListViewItem_o *item,
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
  const MethodInfo *v15; // x2

  if ( (byte_4D2BE4E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BE4E = 1;
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
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
                  if ( !servantFaceIcon )
                    goto LABEL_48;
                  FlashingIconComponent__Set_41619952(
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
                    goto LABEL_48;
                  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                                    0);
                  if ( !servantFaceIcon )
                    goto LABEL_48;
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
                    goto LABEL_48;
                  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                                    0);
                  if ( !servantFaceIcon )
                    goto LABEL_48;
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
                    goto LABEL_48;
                  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                                    0);
                  if ( !servantFaceIcon )
                    goto LABEL_48;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0);
                }
                maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
                  goto LABEL_46;
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
                if ( servantFaceIcon )
                {
                  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                                    0);
                  if ( servantFaceIcon )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
LABEL_46:
                    PhotoCampaignListViewItemDraw__SetMaskInfo(this, item, v15);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_48:
    sub_1C93D2C(servantFaceIcon, item);
  }
}


void PhotoCampaignListViewItemDraw__SetMaskInfo(
        PhotoCampaignListViewItemDraw_o *this,
        PhotoCampaignListViewItem_o *item,
        const MethodInfo *method)
{
  PhotoCampaignListViewItemDraw_o *v4; // x19
  UserServantEntity_o *userSvtEntity; // x0
  UILabel_o *maskLb; // x19
  __int64 *v7; // x8

  v4 = this;
  if ( (byte_4D2BE50 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11608/*"SELECT_CANNOT"*/);
    this = (PhotoCampaignListViewItemDraw_o *)sub_1C93AD4(&StringLiteral_11640/*"SELECT_SERVANT_EVENT_JOIN"*/);
    byte_4D2BE50 = 1;
  }
  if ( !item )
    goto LABEL_28;
  if ( !item->fields.isPushMode )
  {
    if ( !PhotoCampaignListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item)
      && !item->fields._IsCannotSelectSvt_k__BackingField )
    {
      return;
    }
LABEL_18:
    this = (PhotoCampaignListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_28;
    this = (PhotoCampaignListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (PhotoCampaignListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_28;
    this = (PhotoCampaignListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    maskLb = v4->fields.maskLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_11608/*"SELECT_CANNOT"*/;
    goto LABEL_25;
  }
  userSvtEntity = item->fields.userSvtEntity;
  if ( userSvtEntity && UserServantEntity__IsEventJoin(userSvtEntity, 0) )
  {
    this = (PhotoCampaignListViewItemDraw_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_28;
    this = (PhotoCampaignListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (PhotoCampaignListViewItemDraw_o *)v4->fields.maskLb;
    if ( !this )
      goto LABEL_28;
    this = (PhotoCampaignListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    maskLb = v4->fields.maskLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_11640/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_25:
    this = (PhotoCampaignListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v7, 0);
    if ( maskLb )
    {
      UILabel__set_text(maskLb, (System_String_o *)this, 0);
      return;
    }
LABEL_28:
    sub_1C93D2C(this, item);
  }
  if ( PhotoCampaignListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item) )
    goto LABEL_18;
}