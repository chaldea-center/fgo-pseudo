void __fastcall CostumeListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct CostumeListViewItemDraw_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct CostumeListViewItemDraw_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42EA7B9 & 1) == 0 )
  {
    sub_B5D5C4(&CostumeListViewItemDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19565/*"icon_costume_01"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19567/*"icon_costume_03"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19566/*"icon_costume_02"*/, v14, v15, v16);
    byte_42EA7B9 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CostumeListViewItemDraw_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_19565/*"icon_costume_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19565/*"icon_costume_01"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = CostumeListViewItemDraw_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_19566/*"icon_costume_02"*/;
  v19->RELEASE_NG_MARK = (struct System_String_o *)StringLiteral_19566/*"icon_costume_02"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->RELEASE_NG_MARK, v20, v21, v22, v23, v24, v25, v26);
  v27 = CostumeListViewItemDraw_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_19567/*"icon_costume_03"*/;
  v27->RELEASE_ALREADY_GET_MARK = (struct System_String_o *)StringLiteral_19567/*"icon_costume_03"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->RELEASE_ALREADY_GET_MARK, v28, v29, v30, v31, v32, v33, v34);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *costomIcon; // x21
  __int64 v16; // x1
  UISprite_o *transform; // x0
  int32_t v18; // w20
  int32_t iconId; // t1
  UISprite_o *v20; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  UnityEngine_Transform_o *v23; // x20
  int v24; // s0
  float v25; // s1
  int v26; // s2

  if ( (byte_42EA7B8 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)svtCostumeEntity, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_22780/*"svt_costume_icon_"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42EA7B8 = 1;
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
      v18 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v20 = this->fields.costomIcon;
        v21 = System_Int32__ToString(v18, 0LL);
        v22 = System_String__Concat_44577788((System_String_o *)StringLiteral_22780/*"svt_costume_icon_"*/, v21, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__SetEventSprite(v20, v22, 0LL) )
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
                    v23 = (UnityEngine_Transform_o *)transform;
                    transform = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.canReleaseMark,
                                                0LL);
                    if ( transform )
                    {
                      transform = (UISprite_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                  (UnityEngine_GameObject_o *)transform,
                                                  0LL);
                      if ( v23 )
                      {
                        v24 = -1036779520;
                        v25 = -32.0;
                        v26 = 0;
                        if ( ((unsigned __int8)transform & 1) == 0 )
                          v25 = -45.0;
                        UnityEngine_Transform__set_localPosition(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
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
          sub_B5D69C(transform, v16);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *baseButton; // x21
  __int64 v10; // x1
  UILabel_o *maskOnText; // x0

  if ( (byte_42EA7B7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42EA7B7 = 1;
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
      sub_B5D69C(maskOnText, v10);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  UILabel_o *costumeNameLb; // x0
  UnityEngine_Object_o *baseButton; // x21
  struct ServantCostumeEntity_o *costumeEntity; // x8
  struct ServantCostumeEntity_o *v46; // x8
  const MethodInfo *v47; // x2
  UISprite_o *v48; // x21
  System_String_o *RELEASE_NG_MARK; // x1
  UILabel_o *canReleaseMark; // x21
  UISprite_o *releaseStatusInfo; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v53; // x0
  UILabel_o *v54; // x21
  System_String_o *v55; // x22
  Il2CppObject *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  struct UserServantEntity_o *baseSvt; // x8
  UISprite_o *faceIcon; // x21
  __int64 v61; // x22
  __int64 v62; // x23
  struct ServantCostumeEntity_o *v63; // x8
  int32_t v64; // w22
  int32_t id; // w23
  const MethodInfo *v66; // x2
  UnityEngine_Color_o v67; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Color_o v68; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o v69; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+30h] [xbp-40h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA7B6 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&CostumeListViewItemDraw_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_366/*"#E6FF00"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_369/*"#FF8E00"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_368/*"#FEEF99"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_3460/*"COSTUME_CAN_RELEASE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_5651/*"EVENT_COMBINE_COSTUME"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_1/*""*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_364/*"#E1A545"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, v40, v41, v42);
    byte_42EA7B6 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v69.fields.r = 0LL;
  *(_QWORD *)&v69.fields.b = 0LL;
  *(_QWORD *)&v68.fields.r = 0LL;
  *(_QWORD *)&v68.fields.b = 0LL;
  *(_QWORD *)&v67.fields.r = 0LL;
  *(_QWORD *)&v67.fields.b = 0LL;
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
                          v46 = item->fields.costumeEntity;
                          if ( v46 )
                          {
                            WrapControlText__textAdjust(this->fields.costumeDetailLb, v46->fields.detail, 19, 0, 0, 0LL);
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
                                                                 (System_String_o *)StringLiteral_3460/*"COSTUME_CAN_RELEASE"*/,
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
                                    (System_String_o *)StringLiteral_366/*"#E6FF00"*/,
                                    &color,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_369/*"#FF8E00"*/,
                                    &v69,
                                    0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_gradientBottom(costumeNameLb, color, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_gradientTop(costumeNameLb, v69, 0LL);
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
                                  v72.fields.x = -268.9;
                                  v72.fields.y = -40.2;
                                  v72.fields.z = 0.0;
                                  GameObjectExtensions__SetLocalPosition(gameObject, v72, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  v53 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0LL);
                                  GameObjectExtensions__SetLocalScaleX(v53, 1.0, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_spacingX(costumeNameLb, 0, 0LL);
                                  break;
                                case 1:
                                case 5:
                                  v48 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( (BYTE3(CostumeListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  }
                                  if ( !v48 )
                                    goto LABEL_92;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_NG_MARK;
                                  goto LABEL_81;
                                case 3:
                                  v48 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( (BYTE3(CostumeListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  }
                                  if ( !v48 )
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
                                  v54 = this->fields.canReleaseMark;
                                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  }
                                  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_COMBINE_COSTUME"*/, 0LL);
                                  v56 = (Il2CppObject *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/,
                                                          0LL);
                                  costumeNameLb = (UILabel_o *)System_String__Format(v55, v56, 0LL);
                                  if ( !v54 )
                                    goto LABEL_92;
                                  UILabel__set_text(v54, (System_String_o *)costumeNameLb, 0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_364/*"#E1A545"*/,
                                    &v68,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_368/*"#FEEF99"*/,
                                    &v67,
                                    0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_gradientBottom(costumeNameLb, v68, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_gradientTop(costumeNameLb, v67, 0LL);
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
                                  v57 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0LL);
                                  v73.fields.x = -270.0;
                                  v73.fields.y = -40.0;
                                  v73.fields.z = 0.0;
                                  GameObjectExtensions__SetLocalPosition(v57, v73, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  v58 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)costumeNameLb,
                                          0LL);
                                  GameObjectExtensions__SetLocalScaleX(v58, 0.6, 0LL);
                                  costumeNameLb = this->fields.canReleaseMark;
                                  if ( !costumeNameLb )
                                    goto LABEL_92;
                                  UILabel__set_spacingX(costumeNameLb, -1, 0LL);
                                  v48 = this->fields.releaseStatusInfo;
                                  costumeNameLb = (UILabel_o *)CostumeListViewItemDraw_TypeInfo;
                                  if ( (BYTE3(CostumeListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  }
                                  if ( !v48 )
                                    goto LABEL_92;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK;
LABEL_81:
                                  UISprite__set_spriteName(v48, RELEASE_NG_MARK, 0LL);
                                  break;
                                default:
                                  break;
                              }
                            }
                            CostumeListViewItemDraw__SetCostumeIcon(this, 0LL, v47);
                            baseSvt = item->fields.baseSvt;
                            if ( !baseSvt )
                              return;
                            faceIcon = this->fields.faceIcon;
                            v62 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
                            v61 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
                            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            }
                            *(_QWORD *)&v71.fields.currentCryptoKey = v62;
                            *(_QWORD *)&v71.fields.fakeValue = v61;
                            costumeNameLb = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                           v71,
                                                           0LL);
                            v63 = item->fields.costumeEntity;
                            if ( v63 )
                            {
                              v64 = (int)costumeNameLb;
                              id = v63->fields.id;
                              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !AtlasManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              }
                              AtlasManager__SetFaceImage(faceIcon, v64, id, 0LL);
                              CostumeListViewItemDraw__SetCostumeIcon(this, item->fields.costumeEntity, v66);
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
    sub_B5D69C(costumeNameLb, item);
  }
}