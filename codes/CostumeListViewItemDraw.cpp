void CostumeListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct CostumeListViewItemDraw_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct CostumeListViewItemDraw_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596A254 & 1) == 0 )
  {
    sub_2213A60(&CostumeListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_21146/*"icon_costume_01"*/);
    sub_2213A60(&StringLiteral_21148/*"icon_costume_03"*/);
    sub_2213A60(&StringLiteral_21147/*"icon_costume_02"*/);
    byte_596A254 = 1;
  }
  v7 = StringLiteral_21146/*"icon_costume_01"*/;
  CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK = (struct System_String_o *)StringLiteral_21146/*"icon_costume_01"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CostumeListViewItemDraw_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_21147/*"icon_costume_02"*/;
  static_fields = CostumeListViewItemDraw_TypeInfo->static_fields;
  static_fields->RELEASE_NG_MARK = (struct System_String_o *)StringLiteral_21147/*"icon_costume_02"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->RELEASE_NG_MARK, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_21148/*"icon_costume_03"*/;
  v17 = CostumeListViewItemDraw_TypeInfo->static_fields;
  v17->RELEASE_ALREADY_GET_MARK = (struct System_String_o *)StringLiteral_21148/*"icon_costume_03"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->RELEASE_ALREADY_GET_MARK, v16, v18, v19, v20, v21, v22, v23);
}


void CostumeListViewItemDraw___ctor(CostumeListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CostumeListViewItemDraw__SetCostumeIcon(
        CostumeListViewItemDraw_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *costomIcon; // x21
  __int64 v6; // x1
  UISprite_o *transform; // x0
  int32_t v8; // w20
  int32_t iconId; // t1
  UISprite_o *v10; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x20
  UnityEngine_Transform_o *v15; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A253 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_25148/*"svt_costume_icon_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A253 = 1;
  }
  costomIcon = (UnityEngine_Object_o *)this->fields.costomIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtCostumeEntity, method);
  if ( UnityEngine_Object__op_Inequality(costomIcon, 0, 0) )
  {
    transform = this->fields.costomIcon;
    if ( !transform )
      goto LABEL_25;
    UISprite__set_spriteName(transform, (System_String_o *)StringLiteral_1/*""*/, 0);
    transform = this->fields.costomIcon;
    if ( !transform )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v8 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v10 = this->fields.costomIcon;
        v11 = System_Int32__ToString(v8, 0);
        v14 = System_String__Concat_75651716((System_String_o *)StringLiteral_25148/*"svt_costume_icon_"*/, v11, 0);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
        if ( AtlasManager__SetEventSprite(v10, v14, 0) )
        {
          transform = this->fields.costomIcon;
          if ( transform )
          {
            UIWidget__set_width((UIWidget_o *)transform, 26, 0);
            transform = this->fields.costomIcon;
            if ( transform )
            {
              UIWidget__set_height((UIWidget_o *)transform, 26, 0);
              transform = this->fields.costomIcon;
              if ( transform )
              {
                UIWidget__set_pivot((UIWidget_o *)transform, 6, 0);
                transform = this->fields.costomIcon;
                if ( transform )
                {
                  transform = (UISprite_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0);
                  if ( this->fields.canReleaseMark )
                  {
                    v15 = (UnityEngine_Transform_o *)transform;
                    transform = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.canReleaseMark,
                                                0);
                    if ( transform )
                    {
                      transform = (UISprite_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                  (UnityEngine_GameObject_o *)transform,
                                                  0);
                      if ( v15 )
                      {
                        v18.fields.y = -32.0;
                        v18.fields.x = -45.0;
                        v18.fields.z = 0.0;
                        if ( ((unsigned __int8)transform & 1) == 0 )
                          v18.fields.y = -45.0;
                        UnityEngine_Transform__set_localPosition(v15, v18, 0);
                        transform = this->fields.costomIcon;
                        if ( transform )
                        {
                          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_25:
          sub_2213CDC(transform, v6);
        }
      }
    }
  }
}


void CostumeListViewItemDraw__SetInput(
        CostumeListViewItemDraw_o *this,
        CostumeListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v6; // x1
  UILabel_o *maskOnText; // x0

  if ( (byte_596A252 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A252 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    maskOnText = (UILabel_o *)this->fields.baseButton;
    if ( !maskOnText )
      goto LABEL_20;
    ((void (__fastcall *)(UILabel_o *, __int64, const MethodInfo *))maskOnText->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
      maskOnText,
      1,
      maskOnText->klass->vtable._5_get_isAnchoredVertically.method);
    maskOnText = (UILabel_o *)this->fields.baseButton;
    if ( !maskOnText )
      goto LABEL_20;
    ((void (__fastcall *)(UILabel_o *, _QWORD, __int64, const MethodInfo *))maskOnText->klass->vtable._14_OnEnable.methodPtr)(
      maskOnText,
      0,
      1,
      maskOnText->klass->vtable._14_OnEnable.method);
  }
  if ( item )
  {
    if ( item->fields.isNotHaveReleaseItem )
    {
      maskOnText = this->fields.maskOnText;
      if ( maskOnText )
      {
        UILabel__set_text(maskOnText, item->fields.closedMessage, 0);
        maskOnText = (UILabel_o *)this->fields.maskSprite;
        if ( maskOnText )
        {
          maskOnText = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskOnText, 0);
          if ( maskOnText )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskOnText, 1, 0);
            return;
          }
        }
      }
LABEL_20:
      sub_2213CDC(maskOnText, v6);
    }
    maskOnText = (UILabel_o *)this->fields.maskSprite;
    if ( !maskOnText )
      goto LABEL_20;
    maskOnText = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskOnText, 0);
    if ( !maskOnText )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskOnText, 0, 0);
    maskOnText = this->fields.maskOnText;
    if ( !maskOnText )
      goto LABEL_20;
    UILabel__set_text(maskOnText, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
}


void CostumeListViewItemDraw__SetItem(
        CostumeListViewItemDraw_o *this,
        CostumeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *costumeNameLb; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *baseButton; // x21
  struct ServantCostumeEntity_o *costumeEntity; // x8
  struct ServantCostumeEntity_o *v12; // x8
  const MethodInfo *v13; // x2
  int32_t releaseType; // w8
  UISprite_o *v15; // x21
  System_String_o *RELEASE_OK_MARK; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *v19; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x2
  __int64 v25; // x2
  struct ServantCostumeEntity_o *v26; // x8
  UISprite_o *faceIcon; // x21
  int32_t svtId; // w22
  int32_t id; // w23
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  UILabel_o *canReleaseMark; // x21
  __int64 v34; // x2
  UISprite_o *releaseStatusInfo; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Color_o v38; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o v40; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Color_o v41; // [xsp+30h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A251 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&CostumeListViewItemDraw_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_448/*"#E6FF00"*/);
    sub_2213A60(&StringLiteral_451/*"#FF8E00"*/);
    sub_2213A60(&StringLiteral_450/*"#FEEF99"*/);
    sub_2213A60(&StringLiteral_3978/*"COSTUME_CAN_RELEASE"*/);
    sub_2213A60(&StringLiteral_5742/*"EVENT_COMBINE_COSTUME"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_445/*"#E1A545"*/);
    sub_2213A60(&StringLiteral_5743/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_596A251 = 1;
  }
  *(_QWORD *)&v41.fields.r = 0;
  *(_QWORD *)&v41.fields.b = 0;
  *(_QWORD *)&v40.fields.r = 0;
  *(_QWORD *)&v40.fields.b = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)&v38.fields.r = 0;
  *(_QWORD *)&v38.fields.b = 0;
  if ( item && mode )
  {
    costumeNameLb = this->fields.costumeNameLb;
    if ( !costumeNameLb )
      goto LABEL_86;
    UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0);
    costumeNameLb = this->fields.costumeDetailLb;
    if ( !costumeNameLb )
      goto LABEL_86;
    UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0);
    costumeNameLb = this->fields.maskOnText;
    if ( !costumeNameLb )
      goto LABEL_86;
    UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0);
    costumeNameLb = (UILabel_o *)this->fields.maskSprite;
    if ( !costumeNameLb )
      goto LABEL_86;
    costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costumeNameLb, 0);
    if ( !costumeNameLb )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0);
    costumeNameLb = this->fields.canReleaseMark;
    if ( !costumeNameLb )
      goto LABEL_86;
    costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costumeNameLb, 0);
    if ( !costumeNameLb )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0);
    costumeNameLb = (UILabel_o *)this->fields.releaseStatusInfo;
    if ( !costumeNameLb )
      goto LABEL_86;
    costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costumeNameLb, 0);
    if ( !costumeNameLb )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    costumeNameLb = (UILabel_o *)UnityEngine_Object__op_Inequality(baseButton, 0, 0);
    if ( ((unsigned __int8)costumeNameLb & 1) != 0 )
    {
      costumeNameLb = (UILabel_o *)this->fields.baseButton;
      if ( !costumeNameLb )
        goto LABEL_86;
      ((void (__fastcall *)(UILabel_o *, __int64, const MethodInfo *))costumeNameLb->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
        costumeNameLb,
        1,
        costumeNameLb->klass->vtable._5_get_isAnchoredVertically.method);
      costumeNameLb = (UILabel_o *)this->fields.baseButton;
      if ( !costumeNameLb )
        goto LABEL_86;
      costumeNameLb = (UILabel_o *)((__int64 (__fastcall *)(UILabel_o *, _QWORD, __int64, const MethodInfo *))costumeNameLb->klass->vtable._14_OnEnable.methodPtr)(
                                     costumeNameLb,
                                     0,
                                     1,
                                     costumeNameLb->klass->vtable._14_OnEnable.method);
    }
    costumeEntity = item->fields.costumeEntity;
    if ( !costumeEntity )
      goto LABEL_86;
    costumeNameLb = this->fields.costumeNameLb;
    if ( !costumeNameLb )
      goto LABEL_86;
    UILabel__set_text(costumeNameLb, costumeEntity->fields.name, 0);
    v12 = item->fields.costumeEntity;
    if ( !v12 )
      goto LABEL_86;
    WrapControlText__textAdjust(this->fields.costumeDetailLb, v12->fields.detail, 19, 0, 0);
    if ( item->fields.isNotHaveReleaseItem )
    {
      WrapControlText__textAdjust(this->fields.maskOnText, item->fields.closedMessage, 22, 0, 0);
      costumeNameLb = (UILabel_o *)this->fields.maskSprite;
      if ( !costumeNameLb )
        goto LABEL_86;
      costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costumeNameLb, 0);
      if ( !costumeNameLb )
        goto LABEL_86;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0);
      goto LABEL_64;
    }
    costumeNameLb = (UILabel_o *)this->fields.maskSprite;
    if ( !costumeNameLb )
      goto LABEL_86;
    costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costumeNameLb, 0);
    if ( !costumeNameLb )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0);
    costumeNameLb = this->fields.maskOnText;
    if ( !costumeNameLb )
      goto LABEL_86;
    UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0);
    costumeNameLb = (UILabel_o *)this->fields.releaseStatusInfo;
    if ( !costumeNameLb )
      goto LABEL_86;
    costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costumeNameLb, 0);
    if ( !costumeNameLb )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0);
    releaseType = item->fields.releaseType;
    if ( releaseType <= 2 )
    {
      if ( !releaseType )
      {
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costumeNameLb, 0);
        if ( !costumeNameLb )
          goto LABEL_86;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0);
        canReleaseMark = this->fields.canReleaseMark;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
        costumeNameLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3978/*"COSTUME_CAN_RELEASE"*/, 0);
        if ( !canReleaseMark )
          goto LABEL_86;
        UILabel__set_text(canReleaseMark, (System_String_o *)costumeNameLb, 0);
        releaseStatusInfo = this->fields.releaseStatusInfo;
        costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
        if ( !*(&CostumeListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo, item, v34);
        if ( !releaseStatusInfo )
          goto LABEL_86;
        UISprite__set_spriteName(releaseStatusInfo, CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK, 0);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_448/*"#E6FF00"*/, &v41, 0);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_451/*"#FF8E00"*/, &v40, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        UILabel__set_gradientBottom(costumeNameLb, v41, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        UILabel__set_gradientTop(costumeNameLb, v40, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        UIWidget__set_width((UIWidget_o *)costumeNameLb, 118, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        UILabel__set_fontSize(costumeNameLb, 19, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costumeNameLb, 0);
        v43.fields.z = 0.0;
        v43.fields.x = -268.9;
        v43.fields.y = -40.2;
        GameObjectExtensions__SetLocalPosition(gameObject, v43, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costumeNameLb, 0);
        GameObjectExtensions__SetLocalScaleX(v37, 1.0, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        UILabel__set_spacingX(costumeNameLb, 0, 0);
LABEL_64:
        CostumeListViewItemDraw__SetCostumeIcon(this, 0, v13);
        if ( !item->fields.baseSvt )
          return;
        v26 = item->fields.costumeEntity;
        if ( v26 )
        {
          faceIcon = this->fields.faceIcon;
          svtId = v26->fields.svtId;
          id = v26->fields.id;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v25);
          AtlasManager__SetFaceImage(faceIcon, svtId, id, 1, 0, 0, 0);
          CostumeListViewItemDraw__SetCostumeIcon(this, item->fields.costumeEntity, v30);
          return;
        }
LABEL_86:
        sub_2213CDC(costumeNameLb, item);
      }
      if ( releaseType != 1 )
        goto LABEL_64;
    }
    else if ( releaseType != 5 )
    {
      if ( releaseType == 4 )
      {
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costumeNameLb, 0);
        if ( !costumeNameLb )
          goto LABEL_86;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0);
        v19 = this->fields.canReleaseMark;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5742/*"EVENT_COMBINE_COSTUME"*/, 0);
        v21 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5743/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
        costumeNameLb = (UILabel_o *)System_String__Format(v20, v21, 0);
        if ( !v19 )
          goto LABEL_86;
        UILabel__set_text(v19, (System_String_o *)costumeNameLb, 0);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_445/*"#E1A545"*/, &color, 0);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_450/*"#FEEF99"*/, &v38, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        UILabel__set_gradientBottom(costumeNameLb, color, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        UILabel__set_gradientTop(costumeNameLb, v38, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        ((void (__fastcall *)(UILabel_o *, const MethodInfo *))costumeNameLb->klass->vtable._33_MakePixelPerfect.methodPtr)(
          costumeNameLb,
          costumeNameLb->klass->vtable._33_MakePixelPerfect.method);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        UIWidget__set_width((UIWidget_o *)costumeNameLb, 154, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        UILabel__set_fontSize(costumeNameLb, 18, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costumeNameLb, 0);
        v42.fields.z = 0.0;
        v42.fields.x = -270.0;
        v42.fields.y = -40.0;
        GameObjectExtensions__SetLocalPosition(v22, v42, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costumeNameLb, 0);
        GameObjectExtensions__SetLocalScaleX(v23, 0.6, 0);
        costumeNameLb = this->fields.canReleaseMark;
        if ( !costumeNameLb )
          goto LABEL_86;
        UILabel__set_spacingX(costumeNameLb, -1, 0);
        v15 = this->fields.releaseStatusInfo;
        costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
        if ( !*(&CostumeListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo, item, v24);
        if ( !v15 )
          goto LABEL_86;
        RELEASE_OK_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK;
      }
      else
      {
        if ( releaseType != 3 )
          goto LABEL_64;
        v15 = this->fields.releaseStatusInfo;
        costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
        if ( !*(&CostumeListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo, item, v13);
        if ( !v15 )
          goto LABEL_86;
        RELEASE_OK_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_ALREADY_GET_MARK;
      }
      goto LABEL_63;
    }
    v15 = this->fields.releaseStatusInfo;
    costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
    if ( !*(&CostumeListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo, item, v13);
    if ( !v15 )
      goto LABEL_86;
    RELEASE_OK_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_NG_MARK;
LABEL_63:
    UISprite__set_spriteName(v15, RELEASE_OK_MARK, 0);
    goto LABEL_64;
  }
}