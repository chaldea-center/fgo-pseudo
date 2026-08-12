void PhotoCampaignListViewItemDraw___ctor(PhotoCampaignListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PhotoCampaignListViewItemDraw__Awake(PhotoCampaignListViewItemDraw_o *this, const MethodInfo *method)
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


void PhotoCampaignListViewItemDraw__SetInput(
        PhotoCampaignListViewItemDraw_o *this,
        PhotoCampaignListViewItem_o *item,
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
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  __int64 v16; // x2
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  __int64 v19; // x2
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v21; // x2

  if ( (byte_596BBAD & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BBAD = 1;
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
            goto LABEL_45;
          maskLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                maskLb,
                                                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v11);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v13);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v16);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v19);
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
            PhotoCampaignListViewItemDraw__SetMaskInfo(this, item, v21);
            return;
          }
        }
      }
    }
LABEL_45:
    sub_2213CDC(maskLb, item);
  }
}


void PhotoCampaignListViewItemDraw__SetItem(
        PhotoCampaignListViewItemDraw_o *this,
        PhotoCampaignListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *partyIcon; // x21
  __int64 v11; // x2
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v13; // x2
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  __int64 v16; // x2
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  __int64 v19; // x2
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v21; // x2

  if ( (byte_596BBAC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BBAC = 1;
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
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
                  if ( !servantFaceIcon )
                    goto LABEL_48;
                  FlashingIconComponent__Set_47864696(
                    (FlashingIconComponent_o *)servantFaceIcon,
                    item->fields.partyIndex >= 0,
                    0);
                }
                lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v11);
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
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v13);
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
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v16);
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
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v19);
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
                    PhotoCampaignListViewItemDraw__SetMaskInfo(this, item, v21);
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
    sub_2213CDC(servantFaceIcon, item);
  }
}


void PhotoCampaignListViewItemDraw__SetMaskInfo(
        PhotoCampaignListViewItemDraw_o *this,
        PhotoCampaignListViewItem_o *item,
        const MethodInfo *method)
{
  PhotoCampaignListViewItemDraw_o *v4; // x19
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *maskLb; // x19
  __int64 *v9; // x8
  __int64 v10; // x1
  __int64 v11; // x2

  v4 = this;
  if ( (byte_596BBAE & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12029/*"SELECT_CANNOT"*/);
    this = (PhotoCampaignListViewItemDraw_o *)sub_2213A60(&StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/);
    byte_596BBAE = 1;
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
    v9 = &StringLiteral_12029/*"SELECT_CANNOT"*/;
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    v9 = &StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_25:
    this = (PhotoCampaignListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)*v9, 0);
    if ( maskLb )
    {
      UILabel__set_text(maskLb, (System_String_o *)this, 0);
      return;
    }
LABEL_28:
    sub_2213CDC(this, item);
  }
  if ( PhotoCampaignListViewItem__get_IsHerioneReave(item, (const MethodInfo *)item) )
    goto LABEL_18;
}