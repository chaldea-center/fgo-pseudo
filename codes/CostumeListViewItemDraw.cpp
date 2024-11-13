void __fastcall CostumeListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct CostumeListViewItemDraw_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct CostumeListViewItemDraw_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B19D54 & 1) == 0 )
  {
    sub_1BCA7E0(&CostumeListViewItemDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20339/*"icon_costume_01"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_20341/*"icon_costume_03"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_20340/*"icon_costume_02"*/, v12, v13);
    byte_4B19D54 = 1;
  }
  CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK = (struct System_String_o *)StringLiteral_20339/*"icon_costume_01"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CostumeListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_20339/*"icon_costume_01"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_20340/*"icon_costume_02"*/;
  static_fields = CostumeListViewItemDraw_TypeInfo->static_fields;
  static_fields->RELEASE_NG_MARK = (struct System_String_o *)StringLiteral_20340/*"icon_costume_02"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->RELEASE_NG_MARK, v14, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_20341/*"icon_costume_03"*/;
  v23 = CostumeListViewItemDraw_TypeInfo->static_fields;
  v23->RELEASE_ALREADY_GET_MARK = (struct System_String_o *)StringLiteral_20341/*"icon_costume_03"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->RELEASE_ALREADY_GET_MARK, v22, v24, v25, v26, v27, v28, v29);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *costomIcon; // x21
  __int64 v12; // x1
  UISprite_o *transform; // x0
  int32_t v14; // w20
  int32_t iconId; // t1
  UISprite_o *v16; // x21
  System_String_o *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x20
  UnityEngine_Transform_o *v20; // x20
  int v21; // s0
  float v22; // s1
  int v23; // s2

  if ( (byte_4B19D53 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, svtCostumeEntity, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_23963/*"svt_costume_icon_"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B19D53 = 1;
  }
  costomIcon = (UnityEngine_Object_o *)this->fields.costomIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtCostumeEntity);
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
      v14 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v16 = this->fields.costomIcon;
        v17 = System_Int32__ToString(v14, 0LL);
        v19 = System_String__Concat_62401220((System_String_o *)StringLiteral_23963/*"svt_costume_icon_"*/, v17, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
        if ( AtlasManager__SetEventSprite(v16, v19, 0LL) )
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
                    v20 = (UnityEngine_Transform_o *)transform;
                    transform = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.canReleaseMark,
                                                0LL);
                    if ( transform )
                    {
                      transform = (UISprite_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                  (UnityEngine_GameObject_o *)transform,
                                                  0LL);
                      if ( v20 )
                      {
                        v21 = -1036779520;
                        v22 = -32.0;
                        if ( ((unsigned __int8)transform & 1) == 0 )
                          v22 = -45.0;
                        v23 = 0;
                        UnityEngine_Transform__set_localPosition(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
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
          sub_1BCAA3C(transform, v12);
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
  __int64 v6; // x2
  UnityEngine_Object_o *baseButton; // x21
  __int64 v8; // x1
  UILabel_o *maskOnText; // x0

  if ( (byte_4B19D52 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B19D52 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
      sub_1BCAA3C(maskOnText, v8);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CostumeListViewItemDraw__SetItem(
        CostumeListViewItemDraw_o *this,
        CostumeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  UILabel_o *costumeNameLb; // x0
  __int64 v32; // x1
  UnityEngine_Object_o *baseButton; // x21
  struct ServantCostumeEntity_o *costumeEntity; // x8
  struct ServantCostumeEntity_o *v35; // x8
  const MethodInfo *v36; // x2
  UISprite_o *v37; // x21
  System_String_o *RELEASE_NG_MARK; // x1
  __int64 v39; // x1
  UILabel_o *canReleaseMark; // x21
  UISprite_o *releaseStatusInfo; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v43; // x0
  __int64 v44; // x1
  UILabel_o *v45; // x21
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  __int64 v50; // x1
  struct UserServantEntity_o *baseSvt; // x8
  UISprite_o *faceIcon; // x21
  __int64 v53; // x22
  __int64 v54; // x23
  struct ServantCostumeEntity_o *v55; // x8
  int32_t v56; // w22
  int32_t id; // w23
  const MethodInfo *v58; // x2
  UnityEngine_Color_o v59; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Color_o v60; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o v61; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+30h] [xbp-40h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19D51 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&CostumeListViewItemDraw_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_447/*"#E6FF00"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_450/*"#FF8E00"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_449/*"#FEEF99"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3924/*"COSTUME_CAN_RELEASE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_5643/*"EVENT_COMBINE_COSTUME"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_444/*"#E1A545"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, v29, v30);
    byte_4B19D51 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v61.fields.r = 0LL;
  *(_QWORD *)&v61.fields.b = 0LL;
  *(_QWORD *)&v60.fields.r = 0LL;
  *(_QWORD *)&v60.fields.b = 0LL;
  *(_QWORD *)&v59.fields.r = 0LL;
  *(_QWORD *)&v59.fields.b = 0LL;
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
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
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
                          v35 = item->fields.costumeEntity;
                          if ( v35 )
                          {
                            WrapControlText__textAdjust(this->fields.costumeDetailLb, v35->fields.detail, 19, 0, 0, 0LL);
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
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
                                  costumeNameLb = (UILabel_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3924/*"COSTUME_CAN_RELEASE"*/,
                                                                 0LL);
                                  if ( !canReleaseMark )
                                    goto LABEL_83;
                                  UILabel__set_text(canReleaseMark, (System_String_o *)costumeNameLb, 0LL);
                                  releaseStatusInfo = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo, item);
                                  if ( !releaseStatusInfo )
                                    goto LABEL_83;
                                  UISprite__set_spriteName(
                                    releaseStatusInfo,
                                    CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_447/*"#E6FF00"*/,
                                    &color,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_450/*"#FF8E00"*/,
                                    &v61,
                                    0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_gradientBottom(costumeNameLb, color, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_gradientTop(costumeNameLb, v61, 0LL);
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
                                  v64.fields.x = -268.9;
                                  v64.fields.y = -40.2;
                                  v64.fields.z = 0.0;
                                  GameObjectExtensions__SetLocalPosition(gameObject, v64, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  v43 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0LL);
                                  GameObjectExtensions__SetLocalScaleX(v43, 1.0, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_spacingX(costumeNameLb, 0, 0LL);
                                  break;
                                case 1:
                                case 5:
                                  v37 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo, item);
                                  if ( !v37 )
                                    goto LABEL_83;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_NG_MARK;
                                  goto LABEL_74;
                                case 3:
                                  v37 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo, item);
                                  if ( !v37 )
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
                                  v45 = this->fields.canReleaseMark;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
                                  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_5643/*"EVENT_COMBINE_COSTUME"*/, 0LL);
                                  v47 = (Il2CppObject *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/,
                                                          0LL);
                                  costumeNameLb = (UILabel_o *)System_String__Format(v46, v47, 0LL);
                                  if ( !v45 )
                                    goto LABEL_83;
                                  UILabel__set_text(v45, (System_String_o *)costumeNameLb, 0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_444/*"#E1A545"*/,
                                    &v60,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_449/*"#FEEF99"*/,
                                    &v59,
                                    0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_gradientBottom(costumeNameLb, v60, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_gradientTop(costumeNameLb, v59, 0LL);
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
                                  v48 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0LL);
                                  v65.fields.z = 0.0;
                                  v65.fields.x = -270.0;
                                  v65.fields.y = -40.0;
                                  GameObjectExtensions__SetLocalPosition(v48, v65, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  v49 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0LL);
                                  GameObjectExtensions__SetLocalScaleX(v49, 0.6, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_83;
                                  UILabel__set_spacingX(costumeNameLb, -1, 0LL);
                                  v37 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo, item);
                                  if ( !v37 )
                                    goto LABEL_83;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK;
LABEL_74:
                                  UISprite__set_spriteName(v37, RELEASE_NG_MARK, 0LL);
                                  break;
                                default:
                                  break;
                              }
                            }
                            CostumeListViewItemDraw__SetCostumeIcon(this, 0LL, v36);
                            baseSvt = item->fields.baseSvt;
                            if ( !baseSvt )
                              return;
                            faceIcon = this->fields.faceIcon;
                            v54 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
                            v53 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50);
                            *(_QWORD *)&v63.fields.currentCryptoKey = v54;
                            *(_QWORD *)&v63.fields.fakeValue = v53;
                            costumeNameLb = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                           v63,
                                                           0LL);
                            v55 = item->fields.costumeEntity;
                            if ( v55 )
                            {
                              v56 = (int)costumeNameLb;
                              id = v55->fields.id;
                              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
                              AtlasManager__SetFaceImage(faceIcon, v56, id, 0LL);
                              CostumeListViewItemDraw__SetCostumeIcon(this, item->fields.costumeEntity, v58);
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
    sub_1BCAA3C(costumeNameLb, item);
  }
}