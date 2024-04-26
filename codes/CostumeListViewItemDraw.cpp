void __fastcall CostumeListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct CostumeListViewItemDraw_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct CostumeListViewItemDraw_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_435359B & 1) == 0 )
  {
    sub_B70694(&CostumeListViewItemDraw_TypeInfo);
    sub_B70694(&StringLiteral_19623/*"icon_costume_01"*/);
    sub_B70694(&StringLiteral_19625/*"icon_costume_03"*/);
    sub_B70694(&StringLiteral_19624/*"icon_costume_02"*/);
    byte_435359B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CostumeListViewItemDraw_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_19623/*"icon_costume_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19623/*"icon_costume_01"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = CostumeListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19624/*"icon_costume_02"*/;
  v9->RELEASE_NG_MARK = (struct System_String_o *)StringLiteral_19624/*"icon_costume_02"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->RELEASE_NG_MARK, v10, v11, v12, v13, v14, v15, v16);
  v17 = CostumeListViewItemDraw_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_19625/*"icon_costume_03"*/;
  v17->RELEASE_ALREADY_GET_MARK = (struct System_String_o *)StringLiteral_19625/*"icon_costume_03"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->RELEASE_ALREADY_GET_MARK, v18, v19, v20, v21, v22, v23, v24);
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
  UnityEngine_Object_o *costomIcon; // x21
  __int64 v6; // x1
  UISprite_o *transform; // x0
  int32_t v8; // w20
  int32_t iconId; // t1
  UISprite_o *v10; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0
  float v15; // s1
  int v16; // s2

  if ( (byte_435359A & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_22851/*"svt_costume_icon_"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435359A = 1;
  }
  costomIcon = (UnityEngine_Object_o *)this->fields.costomIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(costomIcon, 0LL, 0LL) )
  {
    transform = this->fields.costomIcon;
    if ( !transform )
      goto LABEL_27;
    UISprite__set_spriteName(transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    transform = this->fields.costomIcon;
    if ( !transform )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v8 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v10 = this->fields.costomIcon;
        v11 = System_Int32__ToString(v8, 0LL);
        v12 = System_String__Concat_44758168((System_String_o *)StringLiteral_22851/*"svt_costume_icon_"*/, v11, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__SetEventSprite(v10, v12, 0LL) )
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
                    v13 = (UnityEngine_Transform_o *)transform;
                    transform = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.canReleaseMark,
                                                0LL);
                    if ( transform )
                    {
                      transform = (UISprite_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                  (UnityEngine_GameObject_o *)transform,
                                                  0LL);
                      if ( v13 )
                      {
                        v14 = -1036779520;
                        v15 = -32.0;
                        v16 = 0;
                        if ( ((unsigned __int8)transform & 1) == 0 )
                          v15 = -45.0;
                        UnityEngine_Transform__set_localPosition(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
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
LABEL_27:
          sub_B7076C(transform, v6);
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
  UnityEngine_Object_o *baseButton; // x21
  __int64 v6; // x1
  UILabel_o *maskOnText; // x0

  if ( (byte_4353599 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353599 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    maskOnText = (UILabel_o *)this->fields.baseButton;
    if ( !maskOnText )
      goto LABEL_21;
    ((void (__fastcall *)(UILabel_o *, __int64, Il2CppMethodPointer))maskOnText->klass->vtable._5_get_isAnchoredVertically.method)(
      maskOnText,
      1LL,
      maskOnText->klass->vtable._6_get_canBeAnchored.methodPtr);
    maskOnText = (UILabel_o *)this->fields.baseButton;
    if ( !maskOnText )
      goto LABEL_21;
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
LABEL_21:
      sub_B7076C(maskOnText, v6);
    }
    maskOnText = (UILabel_o *)this->fields.maskSprite;
    if ( !maskOnText )
      goto LABEL_21;
    maskOnText = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskOnText, 0LL);
    if ( !maskOnText )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskOnText, 0, 0LL);
    maskOnText = this->fields.maskOnText;
    if ( !maskOnText )
      goto LABEL_21;
    UILabel__set_text(maskOnText, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
}


void __fastcall CostumeListViewItemDraw__SetItem(
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

  if ( (byte_4353598 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&CostumeListViewItemDraw_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_370/*"#E6FF00"*/);
    sub_B70694(&StringLiteral_373/*"#FF8E00"*/);
    sub_B70694(&StringLiteral_372/*"#FEEF99"*/);
    sub_B70694(&StringLiteral_3469/*"COSTUME_CAN_RELEASE"*/);
    sub_B70694(&StringLiteral_5662/*"EVENT_COMBINE_COSTUME"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_368/*"#E1A545"*/);
    sub_B70694(&StringLiteral_5663/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4353598 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v33.fields.r = 0LL;
  *(_QWORD *)&v33.fields.b = 0LL;
  *(_QWORD *)&v32.fields.r = 0LL;
  *(_QWORD *)&v32.fields.b = 0LL;
  *(_QWORD *)&v31.fields.r = 0LL;
  *(_QWORD *)&v31.fields.b = 0LL;
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
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      costumeNameLb = (UILabel_o *)UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
                      if ( ((unsigned __int8)costumeNameLb & 1) != 0 )
                      {
                        costumeNameLb = (UILabel_o *)this->fields.baseButton;
                        if ( !costumeNameLb )
                          goto LABEL_92;
                        ((void (__fastcall *)(UILabel_o *, __int64, Il2CppMethodPointer))costumeNameLb->klass->vtable._5_get_isAnchoredVertically.method)(
                          costumeNameLb,
                          1LL,
                          costumeNameLb->klass->vtable._6_get_canBeAnchored.methodPtr);
                        costumeNameLb = (UILabel_o *)this->fields.baseButton;
                        if ( !costumeNameLb )
                          goto LABEL_92;
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
                          v10 = item->fields.costumeEntity;
                          if ( v10 )
                          {
                            WrapControlText__textAdjust(this->fields.costumeDetailLb, v10->fields.detail, 19, 0, 0, 0LL);
                            if ( item->fields.isNotHaveReleaseItem )
                            {
                              WrapControlText__textAdjust(
                                this->fields.maskOnText,
                                item->fields.closedMessage,
                                22,
                                0,
                                0,
                                0LL);
                              costumeNameLb = (UILabel_o *)this->fields.maskSprite;
                              if ( !costumeNameLb )
                                goto LABEL_92;
                              costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)costumeNameLb,
                                                             0LL);
                              if ( !costumeNameLb )
                                goto LABEL_92;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0LL);
                            }
                            else
                            {
                              costumeNameLb = (UILabel_o *)this->fields.maskSprite;
                              if ( !costumeNameLb )
                                goto LABEL_92;
                              costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)costumeNameLb,
                                                             0LL);
                              if ( !costumeNameLb )
                                goto LABEL_92;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 0, 0LL);
                              costumeNameLb = this->fields.maskOnText;
                              if ( !costumeNameLb )
                                goto LABEL_92;
                              UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                              costumeNameLb = (UILabel_o *)this->fields.releaseStatusInfo;
                              if ( !costumeNameLb )
                                goto LABEL_92;
                              costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)costumeNameLb,
                                                             0LL);
                              if ( !costumeNameLb )
                                goto LABEL_92;
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0LL);
                              switch ( item->fields.releaseType )
                              {
                                case 0:
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)costumeNameLb,
                                                                 0LL);
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0LL);
                                  canReleaseMark = this->fields.canReleaseMark;
                                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  }
                                  costumeNameLb = (UILabel_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3469/*"COSTUME_CAN_RELEASE"*/,
                                                                 0LL);
                                  if ( !canReleaseMark )
                                    goto LABEL_92;
                                  UILabel__set_text(canReleaseMark, (System_String_o *)costumeNameLb, 0LL);
                                  releaseStatusInfo = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( (BYTE3(CostumeListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  }
                                  if ( !releaseStatusInfo )
                                    goto LABEL_92;
                                  UISprite__set_spriteName(
                                    releaseStatusInfo,
                                    CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_370/*"#E6FF00"*/,
                                    &color,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_373/*"#FF8E00"*/,
                                    &v33,
                                    0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_gradientBottom(costumeNameLb, color, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_gradientTop(costumeNameLb, v33, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UIWidget__set_width((UIWidget_o *)costumeNameLb, 118, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_fontSize(costumeNameLb, 19, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  gameObject = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)costumeNameLb,
                                                 0LL);
                                  v36.fields.x = -268.9;
                                  v36.fields.y = -40.2;
                                  v36.fields.z = 0.0;
                                  GameObjectExtensions__SetLocalPosition(gameObject, v36, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  v17 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0LL);
                                  GameObjectExtensions__SetLocalScaleX(v17, 1.0, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_spacingX(costumeNameLb, 0, 0LL);
                                  break;
                                case 1:
                                case 5:
                                  v12 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( (BYTE3(CostumeListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  }
                                  if ( !v12 )
                                    goto LABEL_92;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_NG_MARK;
                                  goto LABEL_81;
                                case 3:
                                  v12 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( (BYTE3(CostumeListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  }
                                  if ( !v12 )
                                    goto LABEL_92;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_ALREADY_GET_MARK;
                                  goto LABEL_81;
                                case 4:
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  costumeNameLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)costumeNameLb,
                                                                 0LL);
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeNameLb, 1, 0LL);
                                  v18 = this->fields.canReleaseMark;
                                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  }
                                  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5662/*"EVENT_COMBINE_COSTUME"*/, 0LL);
                                  v20 = (Il2CppObject *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_5663/*"EVENT_COMBINE_COSTUME_ITEM"*/,
                                                          0LL);
                                  costumeNameLb = (UILabel_o *)System_String__Format(v19, v20, 0LL);
                                  if ( !v18 )
                                    goto LABEL_92;
                                  UILabel__set_text(v18, (System_String_o *)costumeNameLb, 0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_368/*"#E1A545"*/,
                                    &v32,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_372/*"#FEEF99"*/,
                                    &v31,
                                    0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_gradientBottom(costumeNameLb, v32, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_gradientTop(costumeNameLb, v31, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))costumeNameLb->klass->vtable._33_MakePixelPerfect.method)(
                                    costumeNameLb,
                                    costumeNameLb->klass->vtable._34_get_minWidth.methodPtr);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UIWidget__set_width((UIWidget_o *)costumeNameLb, 154, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_fontSize(costumeNameLb, 18, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  v21 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0LL);
                                  v37.fields.x = -270.0;
                                  v37.fields.y = -40.0;
                                  v37.fields.z = 0.0;
                                  GameObjectExtensions__SetLocalPosition(v21, v37, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  v22 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0LL);
                                  GameObjectExtensions__SetLocalScaleX(v22, 0.6, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_spacingX(costumeNameLb, -1, 0LL);
                                  v12 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( (BYTE3(CostumeListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  }
                                  if ( !v12 )
                                    goto LABEL_92;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK;
LABEL_81:
                                  UISprite__set_spriteName(v12, RELEASE_NG_MARK, 0LL);
                                  break;
                                default:
                                  break;
                              }
                            }
                            CostumeListViewItemDraw__SetCostumeIcon(this, 0LL, v11);
                            baseSvt = item->fields.baseSvt;
                            if ( !baseSvt )
                              return;
                            faceIcon = this->fields.faceIcon;
                            v26 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
                            v25 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
                            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            }
                            *(_QWORD *)&v35.fields.currentCryptoKey = v26;
                            *(_QWORD *)&v35.fields.fakeValue = v25;
                            costumeNameLb = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                           v35,
                                                           0LL);
                            v27 = item->fields.costumeEntity;
                            if ( v27 )
                            {
                              v28 = (int)costumeNameLb;
                              id = v27->fields.id;
                              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !AtlasManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              }
                              AtlasManager__SetFaceImage(faceIcon, v28, id, 0LL);
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
LABEL_92:
    sub_B7076C(costumeNameLb, item);
  }
}