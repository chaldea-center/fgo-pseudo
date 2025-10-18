void CostumeListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct CostumeListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct CostumeListViewItemDraw_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C4713E & 1) == 0 )
  {
    sub_1C37058(&CostumeListViewItemDraw_TypeInfo);
    sub_1C37058(&StringLiteral_20175/*"icon_costume_01"*/);
    sub_1C37058(&StringLiteral_20177/*"icon_costume_03"*/);
    sub_1C37058(&StringLiteral_20176/*"icon_costume_02"*/);
    byte_4C4713E = 1;
  }
  CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK = (struct System_String_o *)StringLiteral_20175/*"icon_costume_01"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)CostumeListViewItemDraw_TypeInfo->static_fields, StringLiteral_20175/*"icon_costume_01"*/, v1, v2);
  v3 = StringLiteral_20176/*"icon_costume_02"*/;
  static_fields = CostumeListViewItemDraw_TypeInfo->static_fields;
  static_fields->RELEASE_NG_MARK = (struct System_String_o *)StringLiteral_20176/*"icon_costume_02"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->RELEASE_NG_MARK, v3, v5, v6);
  v7 = StringLiteral_20177/*"icon_costume_03"*/;
  v8 = CostumeListViewItemDraw_TypeInfo->static_fields;
  v8->RELEASE_ALREADY_GET_MARK = (struct System_String_o *)StringLiteral_20177/*"icon_costume_03"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->RELEASE_ALREADY_GET_MARK, v7, v9, v10);
}


void CostumeListViewItemDraw___ctor(CostumeListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CostumeListViewItemDraw__SetCostumeIcon(
        CostumeListViewItemDraw_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *costomIcon; // x21
  UISprite_o *transform; // x0
  int32_t v7; // w20
  int32_t iconId; // t1
  UISprite_o *v9; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20
  int v13; // s0 OVERLAPPED
  float v14; // s1
  int v15; // s2

  if ( (byte_4C4713D & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_23877/*"svt_costume_icon_"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4713D = 1;
  }
  costomIcon = (UnityEngine_Object_o *)this->fields.costomIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v7 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v9 = this->fields.costomIcon;
        v10 = System_Int32__ToString(v7, 0);
        v11 = System_String__Concat_63561656((System_String_o *)StringLiteral_23877/*"svt_costume_icon_"*/, v10, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( AtlasManager__SetEventSprite(v9, v11, 0) )
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
                    v12 = (UnityEngine_Transform_o *)transform;
                    transform = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.canReleaseMark,
                                                0);
                    if ( transform )
                    {
                      transform = (UISprite_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                  (UnityEngine_GameObject_o *)transform,
                                                  0);
                      if ( v12 )
                      {
                        v13 = -1036779520;
                        v14 = -32.0;
                        if ( ((unsigned __int8)transform & 1) == 0 )
                          v14 = -45.0;
                        v15 = 0;
                        UnityEngine_Transform__set_localPosition(v12, *(UnityEngine_Vector3_o *)&v13, 0);
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
          sub_1C372B4(transform);
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
  UILabel_o *maskOnText; // x0

  if ( (byte_4C4713C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4713C = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C372B4(maskOnText);
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
  UnityEngine_Object_o *baseButton; // x21
  struct ServantCostumeEntity_o *costumeEntity; // x8
  struct ServantCostumeEntity_o *v10; // x8
  const MethodInfo *v11; // x2
  UISprite_o *v12; // x21
  System_String_o *RELEASE_NG_MARK; // x1
  UILabel_o *canReleaseMark; // x21
  UISprite_o *releaseStatusInfo; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x0
  UILabel_o *v18; // x21
  System_String_o *v19; // x22
  Il2CppObject *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  struct UserServantEntity_o *baseSvt; // x8
  UISprite_o *faceIcon; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  struct ServantCostumeEntity_o *v27; // x8
  int32_t v28; // w22
  int32_t id; // w23
  const MethodInfo *v30; // x2
  UnityEngine_Color_o v31; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Color_o v32; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o v33; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+30h] [xbp-40h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4713B & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&CostumeListViewItemDraw_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&StringLiteral_422/*"#E6FF00"*/);
    sub_1C37058(&StringLiteral_425/*"#FF8E00"*/);
    sub_1C37058(&StringLiteral_424/*"#FEEF99"*/);
    sub_1C37058(&StringLiteral_3834/*"COSTUME_CAN_RELEASE"*/);
    sub_1C37058(&StringLiteral_5542/*"EVENT_COMBINE_COSTUME"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_419/*"#E1A545"*/);
    sub_1C37058(&StringLiteral_5543/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4C4713B = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)&v33.fields.r = 0;
  *(_QWORD *)&v33.fields.b = 0;
  *(_QWORD *)&v32.fields.r = 0;
  *(_QWORD *)&v32.fields.b = 0;
  *(_QWORD *)&v31.fields.r = 0;
  *(_QWORD *)&v31.fields.b = 0;
  if ( item && mode )
  {
    costumeNameLb = this->fields.costumeNameLb;
    if ( costumeNameLb )
    {
      UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0);
      costumeNameLb = this->fields.costumeDetailLb;
      if ( costumeNameLb )
      {
        UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0);
        costumeNameLb = this->fields.maskOnText;
        if ( costumeNameLb )
        {
          UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0);
          costumeNameLb = (UILabel_o *)this->fields.maskSprite;
          if ( costumeNameLb )
          {
            costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)costumeNameLb,
                                           0);
            if ( costumeNameLb )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0);
              costumeNameLb = this->fields.canReleaseMark;
              if ( costumeNameLb )
              {
                costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)costumeNameLb,
                                               0);
                if ( costumeNameLb )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0);
                  costumeNameLb = (UILabel_o *)this->fields.releaseStatusInfo;
                  if ( costumeNameLb )
                  {
                    costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)costumeNameLb,
                                                   0);
                    if ( costumeNameLb )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0);
                      baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      costumeNameLb = (UILabel_o *)UnityEngine_Object__op_Inequality(baseButton, 0, 0);
                      if ( ((unsigned __int8)costumeNameLb & 1) != 0 )
                      {
                        costumeNameLb = (UILabel_o *)this->fields.baseButton;
                        if ( !costumeNameLb )
                          goto LABEL_83;
                        ((void (__fastcall *)(UILabel_o *, __int64, const MethodInfo *))costumeNameLb->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
                          costumeNameLb,
                          1,
                          costumeNameLb->klass->vtable._5_get_isAnchoredVertically.method);
                        costumeNameLb = (UILabel_o *)this->fields.baseButton;
                        if ( !costumeNameLb )
                          goto LABEL_83;
                        costumeNameLb = (UILabel_o *)((__int64 (__fastcall *)(UILabel_o *, _QWORD, __int64, const MethodInfo *))costumeNameLb->klass->vtable._14_OnEnable.methodPtr)(
                                                       costumeNameLb,
                                                       0,
                                                       1,
                                                       costumeNameLb->klass->vtable._14_OnEnable.method);
                      }
                      costumeEntity = item->fields.costumeEntity;
                      if ( costumeEntity )
                      {
                        costumeNameLb = this->fields.costumeNameLb;
                        if ( costumeNameLb )
                        {
                          UILabel__set_text(costumeNameLb, costumeEntity->fields.name, 0);
                          v10 = item->fields.costumeEntity;
                          if ( v10 )
                          {
                            WrapControlText__textAdjust(this->fields.costumeDetailLb, v10->fields.detail, 19, 0, 0);
                            if ( item->fields.isNotHaveReleaseItem )
                            {
                              WrapControlText__textAdjust(this->fields.maskOnText, item->fields.closedMessage, 22, 0, 0);
                              costumeNameLb = (UILabel_o *)this->fields.maskSprite;
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)costumeNameLb,
                                                             0);
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0);
                            }
                            else
                            {
                              costumeNameLb = (UILabel_o *)this->fields.maskSprite;
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)costumeNameLb,
                                                             0);
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0);
                              costumeNameLb = this->fields.maskOnText;
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0);
                              costumeNameLb = (UILabel_o *)this->fields.releaseStatusInfo;
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)costumeNameLb,
                                                             0);
                              if ( !costumeNameLb )
                                goto LABEL_83;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0);
                              switch ( item->fields.releaseType )
                              {
                                case 0:
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)costumeNameLb,
                                                                 0);
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0);
                                  canReleaseMark = this->fields.canReleaseMark;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  costumeNameLb = (UILabel_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3834/*"COSTUME_CAN_RELEASE"*/,
                                                                 0);
                                  if ( !canReleaseMark )
                                    goto LABEL_83;
                                  UILabel__set_text(canReleaseMark, (System_String_o *)costumeNameLb, 0);
                                  releaseStatusInfo = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  if ( !releaseStatusInfo )
                                    goto LABEL_83;
                                  UISprite__set_spriteName(
                                    releaseStatusInfo,
                                    CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK,
                                    0);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_422/*"#E6FF00"*/,
                                    &color,
                                    0);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_425/*"#FF8E00"*/,
                                    &v33,
                                    0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_gradientBottom(costumeNameLb, color, 0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_gradientTop(costumeNameLb, v33, 0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UIWidget__set_width((UIWidget_o *)costumeNameLb, 118, 0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_fontSize(costumeNameLb, 19, 0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  gameObject = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)costumeNameLb,
                                                 0);
                                  v36.fields.x = -268.9;
                                  v36.fields.y = -40.2;
                                  v36.fields.z = 0.0;
                                  GameObjectExtensions__SetLocalPosition(gameObject, v36, 0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  v17 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0);
                                  GameObjectExtensions__SetLocalScaleX(v17, 1.0, 0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_spacingX(costumeNameLb, 0, 0);
                                  break;
                                case 1:
                                case 5:
                                  v12 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  if ( !v12 )
                                    goto LABEL_83;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_NG_MARK;
                                  goto LABEL_74;
                                case 3:
                                  v12 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  if ( !v12 )
                                    goto LABEL_83;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_ALREADY_GET_MARK;
                                  goto LABEL_74;
                                case 4:
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)costumeNameLb,
                                                                 0);
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0);
                                  v18 = this->fields.canReleaseMark;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_COMBINE_COSTUME"*/, 0);
                                  v20 = (Il2CppObject *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_5543/*"EVENT_COMBINE_COSTUME_ITEM"*/,
                                                          0);
                                  costumeNameLb = (UILabel_o *)System_String__Format(v19, v20, 0);
                                  if ( !v18 )
                                    goto LABEL_83;
                                  UILabel__set_text(v18, (System_String_o *)costumeNameLb, 0);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_419/*"#E1A545"*/,
                                    &v32,
                                    0);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_424/*"#FEEF99"*/,
                                    &v31,
                                    0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_gradientBottom(costumeNameLb, v32, 0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_gradientTop(costumeNameLb, v31, 0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))costumeNameLb->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                    costumeNameLb,
                                    costumeNameLb->klass->vtable._33_MakePixelPerfect.method);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UIWidget__set_width((UIWidget_o *)costumeNameLb, 154, 0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_fontSize(costumeNameLb, 18, 0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  v21 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0);
                                  v37.fields.z = 0.0;
                                  v37.fields.x = -270.0;
                                  v37.fields.y = -40.0;
                                  GameObjectExtensions__SetLocalPosition(v21, v37, 0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  v22 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0);
                                  GameObjectExtensions__SetLocalScaleX(v22, 0.6, 0);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_spacingX(costumeNameLb, -1, 0);
                                  v12 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  if ( !v12 )
                                    goto LABEL_83;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK;
LABEL_74:
                                  UISprite__set_spriteName(v12, RELEASE_NG_MARK, 0);
                                  break;
                                default:
                                  break;
                              }
                            }
                            CostumeListViewItemDraw__SetCostumeIcon(this, 0, v11);
                            baseSvt = item->fields.baseSvt;
                            if ( !baseSvt )
                              return;
                            faceIcon = this->fields.faceIcon;
                            v26 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
                            v25 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            *(_QWORD *)&v35.fields.currentCryptoKey = v26;
                            *(_QWORD *)&v35.fields.fakeValue = v25;
                            costumeNameLb = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                           v35,
                                                           0);
                            v27 = item->fields.costumeEntity;
                            if ( v27 )
                            {
                              v28 = (int)costumeNameLb;
                              id = v27->fields.id;
                              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              AtlasManager__SetFaceImage(faceIcon, v28, id, 1, 0, 0);
                              CostumeListViewItemDraw__SetCostumeIcon(this, item->fields.costumeEntity, v30);
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
    sub_1C372B4(costumeNameLb);
  }
}