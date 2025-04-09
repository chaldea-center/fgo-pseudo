void __fastcall CostumeListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct CostumeListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct CostumeListViewItemDraw_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_49BEBB2 & 1) == 0 )
  {
    sub_1B4CF90(&CostumeListViewItemDraw_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_19823/*"icon_costume_01"*/, v4);
    sub_1B4CF90(&StringLiteral_19825/*"icon_costume_03"*/, v5);
    sub_1B4CF90(&StringLiteral_19824/*"icon_costume_02"*/, v6);
    byte_49BEBB2 = 1;
  }
  CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK = (struct System_String_o *)StringLiteral_19823/*"icon_costume_01"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)CostumeListViewItemDraw_TypeInfo->static_fields, StringLiteral_19823/*"icon_costume_01"*/, v2, v3);
  v7 = StringLiteral_19824/*"icon_costume_02"*/;
  static_fields = CostumeListViewItemDraw_TypeInfo->static_fields;
  static_fields->RELEASE_NG_MARK = (struct System_String_o *)StringLiteral_19824/*"icon_costume_02"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->RELEASE_NG_MARK, v7, v9, v10);
  v11 = StringLiteral_19825/*"icon_costume_03"*/;
  v12 = CostumeListViewItemDraw_TypeInfo->static_fields;
  v12->RELEASE_ALREADY_GET_MARK = (struct System_String_o *)StringLiteral_19825/*"icon_costume_03"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v12->RELEASE_ALREADY_GET_MARK, v11, v13, v14);
}


void __fastcall CostumeListViewItemDraw___ctor(CostumeListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CostumeListViewItemDraw__SetCostumeIcon(
        CostumeListViewItemDraw_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *costomIcon; // x21
  __int64 v9; // x1
  UISprite_o *transform; // x0
  int32_t v11; // w20
  int32_t iconId; // t1
  UISprite_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  UnityEngine_Transform_o *v16; // x20
  int v17; // s0
  float v18; // s1
  int v19; // s2

  if ( (byte_49BEBB1 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, svtCostumeEntity);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_23433/*"svt_costume_icon_"*/, v6);
    sub_1B4CF90(&StringLiteral_1/*""*/, v7);
    byte_49BEBB1 = 1;
  }
  costomIcon = (UnityEngine_Object_o *)this->fields.costomIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(costomIcon, 0LL, 0LL) )
  {
    transform = this->fields.costomIcon;
    if ( !transform )
      goto LABEL_25;
    UISprite__set_spriteName(transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    transform = this->fields.costomIcon;
    if ( !transform )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v11 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v13 = this->fields.costomIcon;
        v14 = System_Int32__ToString(v11, 0LL);
        v15 = System_String__Concat_61093468((System_String_o *)StringLiteral_23433/*"svt_costume_icon_"*/, v14, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( AtlasManager__SetEventSprite(v13, v15, 0LL) )
        {
          transform = this->fields.costomIcon;
          if ( transform )
          {
            UIWidget__set_width((UIWidget_o *)transform, 26, 0LL);
            transform = this->fields.costomIcon;
            if ( transform )
            {
              UIWidget__set_height((UIWidget_o *)transform, 26, 0LL);
              transform = this->fields.costomIcon;
              if ( transform )
              {
                UIWidget__set_pivot((UIWidget_o *)transform, 6, 0LL);
                transform = this->fields.costomIcon;
                if ( transform )
                {
                  transform = (UISprite_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0LL);
                  if ( this->fields.canReleaseMark )
                  {
                    v16 = (UnityEngine_Transform_o *)transform;
                    transform = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.canReleaseMark,
                                                0LL);
                    if ( transform )
                    {
                      transform = (UISprite_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                  (UnityEngine_GameObject_o *)transform,
                                                  0LL);
                      if ( v16 )
                      {
                        v17 = -1036779520;
                        v18 = -32.0;
                        if ( ((unsigned __int8)transform & 1) == 0 )
                          v18 = -45.0;
                        v19 = 0;
                        UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
                        transform = this->fields.costomIcon;
                        if ( transform )
                        {
                          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0LL);
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
          sub_1B4D1EC(transform, v9);
        }
      }
    }
  }
}


void __fastcall CostumeListViewItemDraw__SetInput(
        CostumeListViewItemDraw_o *this,
        CostumeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *baseButton; // x21
  __int64 v7; // x1
  UILabel_o *maskOnText; // x0

  if ( (byte_49BEBB0 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, item);
    sub_1B4CF90(&StringLiteral_1/*""*/, v5);
    byte_49BEBB0 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    maskOnText = (UILabel_o *)this->fields.baseButton;
    if ( !maskOnText )
      goto LABEL_20;
    ((void (__fastcall *)(UILabel_o *, __int64, Il2CppMethodPointer))maskOnText->klass->vtable._5_get_isAnchoredVertically.method)(
      maskOnText,
      1LL,
      maskOnText->klass->vtable._6_get_canBeAnchored.methodPtr);
    maskOnText = (UILabel_o *)this->fields.baseButton;
    if ( !maskOnText )
      goto LABEL_20;
    ((void (__fastcall *)(UILabel_o *, _QWORD, __int64, Il2CppMethodPointer))maskOnText->klass->vtable._14_OnEnable.method)(
      maskOnText,
      0LL,
      1LL,
      maskOnText->klass->vtable._15_OnInit.methodPtr);
  }
  if ( item )
  {
    if ( item->fields.isNotHaveReleaseItem )
    {
      maskOnText = this->fields.maskOnText;
      if ( maskOnText )
      {
        UILabel__set_text(maskOnText, item->fields.closedMessage, 0LL);
        maskOnText = (UILabel_o *)this->fields.maskSprite;
        if ( maskOnText )
        {
          maskOnText = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskOnText, 0LL);
          if ( maskOnText )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskOnText, 1, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_1B4D1EC(maskOnText, v7);
    }
    maskOnText = (UILabel_o *)this->fields.maskSprite;
    if ( !maskOnText )
      goto LABEL_20;
    maskOnText = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskOnText, 0LL);
    if ( !maskOnText )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskOnText, 0, 0LL);
    maskOnText = this->fields.maskOnText;
    if ( !maskOnText )
      goto LABEL_20;
    UILabel__set_text(maskOnText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
}


void __fastcall CostumeListViewItemDraw__SetItem(
        CostumeListViewItemDraw_o *this,
        CostumeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UILabel_o *costumeNameLb; // x0
  UnityEngine_Object_o *baseButton; // x21
  struct ServantCostumeEntity_o *costumeEntity; // x8
  struct ServantCostumeEntity_o *v22; // x8
  const MethodInfo *v23; // x2
  UISprite_o *v24; // x21
  System_String_o *RELEASE_NG_MARK; // x1
  UILabel_o *canReleaseMark; // x21
  UISprite_o *releaseStatusInfo; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x0
  UILabel_o *v30; // x21
  System_String_o *v31; // x22
  Il2CppObject *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  struct UserServantEntity_o *baseSvt; // x8
  UISprite_o *faceIcon; // x21
  __int64 v37; // x22
  __int64 v38; // x23
  struct ServantCostumeEntity_o *v39; // x8
  int32_t v40; // w22
  int32_t id; // w23
  const MethodInfo *v42; // x2
  UnityEngine_Color_o v43; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Color_o v44; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o v45; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+30h] [xbp-40h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49BEBAF & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, item);
    sub_1B4CF90(&CostumeListViewItemDraw_TypeInfo, v7);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B4CF90(&StringLiteral_420/*"#E6FF00"*/, v11);
    sub_1B4CF90(&StringLiteral_423/*"#FF8E00"*/, v12);
    sub_1B4CF90(&StringLiteral_422/*"#FEEF99"*/, v13);
    sub_1B4CF90(&StringLiteral_3796/*"COSTUME_CAN_RELEASE"*/, v14);
    sub_1B4CF90(&StringLiteral_5458/*"EVENT_COMBINE_COSTUME"*/, v15);
    sub_1B4CF90(&StringLiteral_1/*""*/, v16);
    sub_1B4CF90(&StringLiteral_417/*"#E1A545"*/, v17);
    sub_1B4CF90(&StringLiteral_5459/*"EVENT_COMBINE_COSTUME_ITEM"*/, v18);
    byte_49BEBAF = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v45.fields.r = 0LL;
  *(_QWORD *)&v45.fields.b = 0LL;
  *(_QWORD *)&v44.fields.r = 0LL;
  *(_QWORD *)&v44.fields.b = 0LL;
  *(_QWORD *)&v43.fields.r = 0LL;
  *(_QWORD *)&v43.fields.b = 0LL;
  if ( item && mode )
  {
    costumeNameLb = this->fields.costumeNameLb;
    if ( costumeNameLb )
    {
      UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      costumeNameLb = this->fields.costumeDetailLb;
      if ( costumeNameLb )
      {
        UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        costumeNameLb = this->fields.maskOnText;
        if ( costumeNameLb )
        {
          UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          costumeNameLb = (UILabel_o *)this->fields.maskSprite;
          if ( costumeNameLb )
          {
            costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)costumeNameLb,
                                           0LL);
            if ( costumeNameLb )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0LL);
              costumeNameLb = this->fields.canReleaseMark;
              if ( costumeNameLb )
              {
                costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)costumeNameLb,
                                               0LL);
                if ( costumeNameLb )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0LL);
                  costumeNameLb = (UILabel_o *)this->fields.releaseStatusInfo;
                  if ( costumeNameLb )
                  {
                    costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)costumeNameLb,
                                                   0LL);
                    if ( costumeNameLb )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0LL);
                      baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      costumeNameLb = (UILabel_o *)UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
                      if ( ((unsigned __int8)costumeNameLb & 1) != 0 )
                      {
                        costumeNameLb = (UILabel_o *)this->fields.baseButton;
                        if ( !costumeNameLb )
                          goto LABEL_83;
                        ((void (__fastcall *)(UILabel_o *, __int64, Il2CppMethodPointer))costumeNameLb->klass->vtable._5_get_isAnchoredVertically.method)(
                          costumeNameLb,
                          1LL,
                          costumeNameLb->klass->vtable._6_get_canBeAnchored.methodPtr);
                        costumeNameLb = (UILabel_o *)this->fields.baseButton;
                        if ( !costumeNameLb )
                          goto LABEL_83;
                        costumeNameLb = (UILabel_o *)((__int64 (__fastcall *)(UILabel_o *, _QWORD, __int64, Il2CppMethodPointer))costumeNameLb->klass->vtable._14_OnEnable.method)(
                                                       costumeNameLb,
                                                       0LL,
                                                       1LL,
                                                       costumeNameLb->klass->vtable._15_OnInit.methodPtr);
                      }
                      costumeEntity = item->fields.costumeEntity;
                      if ( costumeEntity )
                      {
                        costumeNameLb = this->fields.costumeNameLb;
                        if ( costumeNameLb )
                        {
                          UILabel__set_text(costumeNameLb, costumeEntity->fields.name, 0LL);
                          v22 = item->fields.costumeEntity;
                          if ( v22 )
                          {
                            WrapControlText__textAdjust(this->fields.costumeDetailLb, v22->fields.detail, 19, 0, 0LL);
                            if ( item->fields.isNotHaveReleaseItem )
                            {
                              WrapControlText__textAdjust(
                                this->fields.maskOnText,
                                item->fields.closedMessage,
                                22,
                                0,
                                0LL);
                              costumeNameLb = (UILabel_o *)this->fields.maskSprite;
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)costumeNameLb,
                                                             0LL);
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0LL);
                            }
                            else
                            {
                              costumeNameLb = (UILabel_o *)this->fields.maskSprite;
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)costumeNameLb,
                                                             0LL);
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0LL);
                              costumeNameLb = this->fields.maskOnText;
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                              costumeNameLb = (UILabel_o *)this->fields.releaseStatusInfo;
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)costumeNameLb,
                                                             0LL);
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0LL);
                              switch ( item->fields.releaseType )
                              {
                                case 0:
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)costumeNameLb,
                                                                 0LL);
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0LL);
                                  canReleaseMark = this->fields.canReleaseMark;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  costumeNameLb = (UILabel_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3796/*"COSTUME_CAN_RELEASE"*/,
                                                                 0LL);
                                  if ( !canReleaseMark )
                                    goto LABEL_83;
                                  UILabel__set_text(canReleaseMark, (System_String_o *)costumeNameLb, 0LL);
                                  releaseStatusInfo = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  if ( !releaseStatusInfo )
                                    goto LABEL_83;
                                  UISprite__set_spriteName(
                                    releaseStatusInfo,
                                    CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_420/*"#E6FF00"*/,
                                    &color,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_423/*"#FF8E00"*/,
                                    &v45,
                                    0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_gradientBottom(costumeNameLb, color, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_gradientTop(costumeNameLb, v45, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UIWidget__set_width((UIWidget_o *)costumeNameLb, 118, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_fontSize(costumeNameLb, 19, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  gameObject = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)costumeNameLb,
                                                 0LL);
                                  v48.fields.x = -268.9;
                                  v48.fields.y = -40.2;
                                  v48.fields.z = 0.0;
                                  GameObjectExtensions__SetLocalPosition(gameObject, v48, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  v29 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0LL);
                                  GameObjectExtensions__SetLocalScaleX(v29, 1.0, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_spacingX(costumeNameLb, 0, 0LL);
                                  break;
                                case 1:
                                case 5:
                                  v24 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  if ( !v24 )
                                    goto LABEL_83;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_NG_MARK;
                                  goto LABEL_74;
                                case 3:
                                  v24 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  if ( !v24 )
                                    goto LABEL_83;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_ALREADY_GET_MARK;
                                  goto LABEL_74;
                                case 4:
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)costumeNameLb,
                                                                 0LL);
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0LL);
                                  v30 = this->fields.canReleaseMark;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5458/*"EVENT_COMBINE_COSTUME"*/, 0LL);
                                  v32 = (Il2CppObject *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_5459/*"EVENT_COMBINE_COSTUME_ITEM"*/,
                                                          0LL);
                                  costumeNameLb = (UILabel_o *)System_String__Format(v31, v32, 0LL);
                                  if ( !v30 )
                                    goto LABEL_83;
                                  UILabel__set_text(v30, (System_String_o *)costumeNameLb, 0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_417/*"#E1A545"*/,
                                    &v44,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_422/*"#FEEF99"*/,
                                    &v43,
                                    0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_gradientBottom(costumeNameLb, v44, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_gradientTop(costumeNameLb, v43, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))costumeNameLb->klass->vtable._33_MakePixelPerfect.method)(
                                    costumeNameLb,
                                    costumeNameLb->klass->vtable._34_get_minWidth.methodPtr);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UIWidget__set_width((UIWidget_o *)costumeNameLb, 154, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_fontSize(costumeNameLb, 18, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  v33 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0LL);
                                  v49.fields.z = 0.0;
                                  v49.fields.x = -270.0;
                                  v49.fields.y = -40.0;
                                  GameObjectExtensions__SetLocalPosition(v33, v49, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  v34 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0LL);
                                  GameObjectExtensions__SetLocalScaleX(v34, 0.6, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_spacingX(costumeNameLb, -1, 0LL);
                                  v24 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  if ( !v24 )
                                    goto LABEL_83;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK;
LABEL_74:
                                  UISprite__set_spriteName(v24, RELEASE_NG_MARK, 0LL);
                                  break;
                                default:
                                  break;
                              }
                            }
                            CostumeListViewItemDraw__SetCostumeIcon(this, 0LL, v23);
                            baseSvt = item->fields.baseSvt;
                            if ( !baseSvt )
                              return;
                            faceIcon = this->fields.faceIcon;
                            v38 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
                            v37 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            *(_QWORD *)&v47.fields.currentCryptoKey = v38;
                            *(_QWORD *)&v47.fields.fakeValue = v37;
                            costumeNameLb = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                           v47,
                                                           0LL);
                            v39 = item->fields.costumeEntity;
                            if ( v39 )
                            {
                              v40 = (int)costumeNameLb;
                              id = v39->fields.id;
                              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              AtlasManager__SetFaceImage(faceIcon, v40, id, 1, 0LL, 0LL);
                              CostumeListViewItemDraw__SetCostumeIcon(this, item->fields.costumeEntity, v42);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_83:
    sub_1B4D1EC(costumeNameLb, item);
  }
}