void __fastcall CostumeListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct CostumeListViewItemDraw_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CostumeListViewItemDraw_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40FBDC6 & 1) == 0 )
  {
    sub_B16FFC(&CostumeListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19247, v8);
    sub_B16FFC(&StringLiteral_19249, v9);
    sub_B16FFC(&StringLiteral_19248, v10);
    byte_40FBDC6 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CostumeListViewItemDraw_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_19247;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19247;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = CostumeListViewItemDraw_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_19248;
  v13->RELEASE_NG_MARK = (struct System_String_o *)StringLiteral_19248;
  sub_B16F98((BattleServantConfConponent_o *)&v13->RELEASE_NG_MARK, v14, v15, v16, v17, v18, v19, v20);
  v21 = CostumeListViewItemDraw_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_19249;
  v21->RELEASE_ALREADY_GET_MARK = (struct System_String_o *)StringLiteral_19249;
  sub_B16F98((BattleServantConfConponent_o *)&v21->RELEASE_ALREADY_GET_MARK, v22, v23, v24, v25, v26, v27, v28);
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
  UISprite_o *v9; // x0
  UnityEngine_Behaviour_o *v10; // x0
  int32_t v11; // w20
  int32_t iconId; // t1
  UISprite_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  UIWidget_o *v16; // x0
  UIWidget_o *v17; // x0
  UIWidget_o *v18; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v21; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  bool activeInHierarchy; // w0
  int v24; // s0
  float v25; // s1
  int v26; // s2
  UnityEngine_Behaviour_o *v27; // x0

  if ( (byte_40FBDC5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, svtCostumeEntity);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_22382, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FBDC5 = 1;
  }
  costomIcon = (UnityEngine_Object_o *)this->fields.costomIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(costomIcon, 0LL, 0LL) )
  {
    v9 = this->fields.costomIcon;
    if ( !v9 )
      goto LABEL_27;
    UISprite__set_spriteName(v9, (System_String_o *)StringLiteral_1, 0LL);
    v10 = (UnityEngine_Behaviour_o *)this->fields.costomIcon;
    if ( !v10 )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v11 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v13 = this->fields.costomIcon;
        v14 = System_Int32__ToString(v11, 0LL);
        v15 = System_String__Concat_43743732((System_String_o *)StringLiteral_22382, v14, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__SetEventSprite(v13, v15, 0LL) )
        {
          v16 = (UIWidget_o *)this->fields.costomIcon;
          if ( v16 )
          {
            UIWidget__set_width(v16, 26, 0LL);
            v17 = (UIWidget_o *)this->fields.costomIcon;
            if ( v17 )
            {
              UIWidget__set_height(v17, 26, 0LL);
              v18 = (UIWidget_o *)this->fields.costomIcon;
              if ( v18 )
              {
                UIWidget__set_pivot(v18, 6, 0LL);
                v19 = (UnityEngine_Component_o *)this->fields.costomIcon;
                if ( v19 )
                {
                  transform = UnityEngine_Component__get_transform(v19, 0LL);
                  if ( this->fields.canReleaseMark )
                  {
                    v21 = transform;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)this->fields.canReleaseMark,
                                   0LL);
                    if ( gameObject )
                    {
                      activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL);
                      if ( v21 )
                      {
                        v24 = -1036779520;
                        v25 = -32.0;
                        v26 = 0;
                        if ( !activeInHierarchy )
                          v25 = -45.0;
                        UnityEngine_Transform__set_localPosition(v21, *(UnityEngine_Vector3_o *)&v24, 0LL);
                        v27 = (UnityEngine_Behaviour_o *)this->fields.costomIcon;
                        if ( v27 )
                        {
                          UnityEngine_Behaviour__set_enabled(v27, 1, 0LL);
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
          sub_B170D4();
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
  struct UICommonButton_o *v7; // x0
  struct UICommonButton_o *v8; // x0
  UILabel_o *maskOnText; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UILabel_o *v14; // x0

  if ( (byte_40FBDC4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FBDC4 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v7 = this->fields.baseButton;
    if ( !v7 )
      goto LABEL_21;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._5_set_isEnabled.method)(
      v7,
      1LL,
      v7->klass->vtable._6_OnInit.methodPtr);
    v8 = this->fields.baseButton;
    if ( !v8 )
      goto LABEL_21;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v8->klass->vtable._14_SetState.method)(
      v8,
      0LL,
      1LL,
      v8->klass->vtable._15_OnPress.methodPtr);
  }
  if ( item )
  {
    if ( item->fields.isNotHaveReleaseItem )
    {
      maskOnText = this->fields.maskOnText;
      if ( maskOnText )
      {
        UILabel__set_text(maskOnText, item->fields.closedMessage, 0LL);
        maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
        if ( maskSprite )
        {
          gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            return;
          }
        }
      }
LABEL_21:
      sub_B170D4();
    }
    v12 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !v12 )
      goto LABEL_21;
    v13 = UnityEngine_Component__get_gameObject(v12, 0LL);
    if ( !v13 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(v13, 0, 0LL);
    v14 = this->fields.maskOnText;
    if ( !v14 )
      goto LABEL_21;
    UILabel__set_text(v14, (System_String_o *)StringLiteral_1, 0LL);
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
  UILabel_o *costumeDetailLb; // x0
  UILabel_o *maskOnText; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *canReleaseMark; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Component_o *releaseStatusInfo; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Object_o *baseButton; // x21
  struct UICommonButton_o *v29; // x0
  struct UICommonButton_o *v30; // x0
  struct ServantCostumeEntity_o *costumeEntity; // x8
  UILabel_o *v32; // x0
  struct ServantCostumeEntity_o *v33; // x8
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x2
  UnityEngine_Component_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UILabel_o *v39; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UISprite_o *v42; // x21
  System_String_o *RELEASE_NG_MARK; // x1
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UILabel_o *v46; // x21
  System_String_o *v47; // x0
  UISprite_o *v48; // x21
  UILabel_o *v49; // x0
  UILabel_o *v50; // x0
  UIWidget_o *v51; // x0
  UILabel_o *v52; // x0
  UnityEngine_Component_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UILabel_o *v57; // x0
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UILabel_o *v60; // x21
  System_String_o *v61; // x22
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  UILabel_o *v64; // x0
  UILabel_o *v65; // x0
  struct UILabel_o *v66; // x0
  UIWidget_o *v67; // x0
  UILabel_o *v68; // x0
  UnityEngine_Component_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_Component_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UILabel_o *v73; // x0
  struct UserServantEntity_o *baseSvt; // x8
  UISprite_o *faceIcon; // x21
  __int64 v76; // x22
  __int64 v77; // x23
  int32_t v78; // w0
  struct ServantCostumeEntity_o *v79; // x8
  int32_t v80; // w22
  int32_t id; // w23
  const MethodInfo *v82; // x2
  UnityEngine_Color_o v83; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Color_o v84; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o v85; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+30h] [xbp-40h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBDC3 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&CostumeListViewItemDraw_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_359, v11);
    sub_B16FFC(&StringLiteral_362, v12);
    sub_B16FFC(&StringLiteral_361, v13);
    sub_B16FFC(&StringLiteral_3380, v14);
    sub_B16FFC(&StringLiteral_5559, v15);
    sub_B16FFC(&StringLiteral_1, v16);
    sub_B16FFC(&StringLiteral_357, v17);
    sub_B16FFC(&StringLiteral_5560, v18);
    byte_40FBDC3 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v85.fields.r = 0LL;
  *(_QWORD *)&v85.fields.b = 0LL;
  *(_QWORD *)&v84.fields.r = 0LL;
  *(_QWORD *)&v84.fields.b = 0LL;
  *(_QWORD *)&v83.fields.r = 0LL;
  *(_QWORD *)&v83.fields.b = 0LL;
  if ( item && mode )
  {
    costumeNameLb = this->fields.costumeNameLb;
    if ( costumeNameLb )
    {
      UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1, 0LL);
      costumeDetailLb = this->fields.costumeDetailLb;
      if ( costumeDetailLb )
      {
        UILabel__set_text(costumeDetailLb, (System_String_o *)StringLiteral_1, 0LL);
        maskOnText = this->fields.maskOnText;
        if ( maskOnText )
        {
          UILabel__set_text(maskOnText, (System_String_o *)StringLiteral_1, 0LL);
          maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( maskSprite )
          {
            gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
              canReleaseMark = (UnityEngine_Component_o *)this->fields.canReleaseMark;
              if ( canReleaseMark )
              {
                v25 = UnityEngine_Component__get_gameObject(canReleaseMark, 0LL);
                if ( v25 )
                {
                  UnityEngine_GameObject__SetActive(v25, 0, 0LL);
                  releaseStatusInfo = (UnityEngine_Component_o *)this->fields.releaseStatusInfo;
                  if ( releaseStatusInfo )
                  {
                    v27 = UnityEngine_Component__get_gameObject(releaseStatusInfo, 0LL);
                    if ( v27 )
                    {
                      UnityEngine_GameObject__SetActive(v27, 0, 0LL);
                      baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
                      {
                        v29 = this->fields.baseButton;
                        if ( !v29 )
                          goto LABEL_92;
                        ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v29->klass->vtable._5_set_isEnabled.method)(
                          v29,
                          1LL,
                          v29->klass->vtable._6_OnInit.methodPtr);
                        v30 = this->fields.baseButton;
                        if ( !v30 )
                          goto LABEL_92;
                        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v30->klass->vtable._14_SetState.method)(
                          v30,
                          0LL,
                          1LL,
                          v30->klass->vtable._15_OnPress.methodPtr);
                      }
                      costumeEntity = item->fields.costumeEntity;
                      if ( costumeEntity )
                      {
                        v32 = this->fields.costumeNameLb;
                        if ( v32 )
                        {
                          UILabel__set_text(v32, costumeEntity->fields.name, 0LL);
                          v33 = item->fields.costumeEntity;
                          if ( v33 )
                          {
                            WrapControlText__textAdjust(this->fields.costumeDetailLb, v33->fields.detail, 19, 0, 0, 0LL);
                            if ( item->fields.isNotHaveReleaseItem )
                            {
                              WrapControlText__textAdjust(
                                this->fields.maskOnText,
                                item->fields.closedMessage,
                                22,
                                0,
                                0,
                                0LL);
                              v34 = (UnityEngine_Component_o *)this->fields.maskSprite;
                              if ( !v34 )
                                goto LABEL_92;
                              v35 = UnityEngine_Component__get_gameObject(v34, 0LL);
                              if ( !v35 )
                                goto LABEL_92;
                              UnityEngine_GameObject__SetActive(v35, 1, 0LL);
                            }
                            else
                            {
                              v37 = (UnityEngine_Component_o *)this->fields.maskSprite;
                              if ( !v37 )
                                goto LABEL_92;
                              v38 = UnityEngine_Component__get_gameObject(v37, 0LL);
                              if ( !v38 )
                                goto LABEL_92;
                              UnityEngine_GameObject__SetActive(v38, 0, 0LL);
                              v39 = this->fields.maskOnText;
                              if ( !v39 )
                                goto LABEL_92;
                              UILabel__set_text(v39, (System_String_o *)StringLiteral_1, 0LL);
                              v40 = (UnityEngine_Component_o *)this->fields.releaseStatusInfo;
                              if ( !v40 )
                                goto LABEL_92;
                              v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
                              if ( !v41 )
                                goto LABEL_92;
                              UnityEngine_GameObject__SetActive(v41, 1, 0LL);
                              switch ( item->fields.releaseType )
                              {
                                case 0:
                                  v44 = (UnityEngine_Component_o *)this->fields.canReleaseMark;
                                  if ( !v44 )
                                    goto LABEL_92;
                                  v45 = UnityEngine_Component__get_gameObject(v44, 0LL);
                                  if ( !v45 )
                                    goto LABEL_92;
                                  UnityEngine_GameObject__SetActive(v45, 1, 0LL);
                                  v46 = this->fields.canReleaseMark;
                                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  }
                                  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3380, 0LL);
                                  if ( !v46 )
                                    goto LABEL_92;
                                  UILabel__set_text(v46, v47, 0LL);
                                  v48 = this->fields.releaseStatusInfo;
                                  if ( (BYTE3(CostumeListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  }
                                  if ( !v48 )
                                    goto LABEL_92;
                                  UISprite__set_spriteName(
                                    v48,
                                    CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_359,
                                    &color,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_362,
                                    &v85,
                                    0LL);
                                  v49 = this->fields.canReleaseMark;
                                  if ( !v49 )
                                    goto LABEL_92;
                                  UILabel__set_gradientBottom(v49, color, 0LL);
                                  v50 = this->fields.canReleaseMark;
                                  if ( !v50 )
                                    goto LABEL_92;
                                  UILabel__set_gradientTop(v50, v85, 0LL);
                                  v51 = (UIWidget_o *)this->fields.canReleaseMark;
                                  if ( !v51 )
                                    goto LABEL_92;
                                  UIWidget__set_width(v51, 118, 0LL);
                                  v52 = this->fields.canReleaseMark;
                                  if ( !v52 )
                                    goto LABEL_92;
                                  UILabel__set_fontSize(v52, 19, 0LL);
                                  v53 = (UnityEngine_Component_o *)this->fields.canReleaseMark;
                                  if ( !v53 )
                                    goto LABEL_92;
                                  v54 = UnityEngine_Component__get_gameObject(v53, 0LL);
                                  v88.fields.x = -268.9;
                                  v88.fields.y = -40.2;
                                  v88.fields.z = 0.0;
                                  GameObjectExtensions__SetLocalPosition(v54, v88, 0LL);
                                  v55 = (UnityEngine_Component_o *)this->fields.canReleaseMark;
                                  if ( !v55 )
                                    goto LABEL_92;
                                  v56 = UnityEngine_Component__get_gameObject(v55, 0LL);
                                  GameObjectExtensions__SetLocalScaleX(v56, 1.0, 0LL);
                                  v57 = this->fields.canReleaseMark;
                                  if ( !v57 )
                                    goto LABEL_92;
                                  UILabel__set_spacingX(v57, 0, 0LL);
                                  break;
                                case 1:
                                case 5:
                                  v42 = this->fields.releaseStatusInfo;
                                  if ( (BYTE3(CostumeListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  }
                                  if ( !v42 )
                                    goto LABEL_92;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_NG_MARK;
                                  goto LABEL_81;
                                case 3:
                                  v42 = this->fields.releaseStatusInfo;
                                  if ( (BYTE3(CostumeListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  }
                                  if ( !v42 )
                                    goto LABEL_92;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_ALREADY_GET_MARK;
                                  goto LABEL_81;
                                case 4:
                                  v58 = (UnityEngine_Component_o *)this->fields.canReleaseMark;
                                  if ( !v58 )
                                    goto LABEL_92;
                                  v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
                                  if ( !v59 )
                                    goto LABEL_92;
                                  UnityEngine_GameObject__SetActive(v59, 1, 0LL);
                                  v60 = this->fields.canReleaseMark;
                                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  }
                                  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_5559, 0LL);
                                  v62 = (Il2CppObject *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_5560,
                                                          0LL);
                                  v63 = System_String__Format(v61, v62, 0LL);
                                  if ( !v60 )
                                    goto LABEL_92;
                                  UILabel__set_text(v60, v63, 0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_357,
                                    &v84,
                                    0LL);
                                  UnityEngine_ColorUtility__TryParseHtmlString(
                                    (System_String_o *)StringLiteral_361,
                                    &v83,
                                    0LL);
                                  v64 = this->fields.canReleaseMark;
                                  if ( !v64 )
                                    goto LABEL_92;
                                  UILabel__set_gradientBottom(v64, v84, 0LL);
                                  v65 = this->fields.canReleaseMark;
                                  if ( !v65 )
                                    goto LABEL_92;
                                  UILabel__set_gradientTop(v65, v83, 0LL);
                                  v66 = this->fields.canReleaseMark;
                                  if ( !v66 )
                                    goto LABEL_92;
                                  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v66->klass->vtable._33_MakePixelPerfect.method)(
                                    v66,
                                    v66->klass->vtable._34_get_minWidth.methodPtr);
                                  v67 = (UIWidget_o *)this->fields.canReleaseMark;
                                  if ( !v67 )
                                    goto LABEL_92;
                                  UIWidget__set_width(v67, 154, 0LL);
                                  v68 = this->fields.canReleaseMark;
                                  if ( !v68 )
                                    goto LABEL_92;
                                  UILabel__set_fontSize(v68, 18, 0LL);
                                  v69 = (UnityEngine_Component_o *)this->fields.canReleaseMark;
                                  if ( !v69 )
                                    goto LABEL_92;
                                  v70 = UnityEngine_Component__get_gameObject(v69, 0LL);
                                  v89.fields.x = -270.0;
                                  v89.fields.y = -40.0;
                                  v89.fields.z = 0.0;
                                  GameObjectExtensions__SetLocalPosition(v70, v89, 0LL);
                                  v71 = (UnityEngine_Component_o *)this->fields.canReleaseMark;
                                  if ( !v71 )
                                    goto LABEL_92;
                                  v72 = UnityEngine_Component__get_gameObject(v71, 0LL);
                                  GameObjectExtensions__SetLocalScaleX(v72, 0.6, 0LL);
                                  v73 = this->fields.canReleaseMark;
                                  if ( !v73 )
                                    goto LABEL_92;
                                  UILabel__set_spacingX(v73, -1, 0LL);
                                  v42 = this->fields.releaseStatusInfo;
                                  if ( (BYTE3(CostumeListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !CostumeListViewItemDraw_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(CostumeListViewItemDraw_TypeInfo);
                                  }
                                  if ( !v42 )
                                    goto LABEL_92;
                                  RELEASE_NG_MARK = CostumeListViewItemDraw_TypeInfo->static_fields->RELEASE_OK_MARK;
LABEL_81:
                                  UISprite__set_spriteName(v42, RELEASE_NG_MARK, 0LL);
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
                            v77 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
                            v76 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
                            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            }
                            *(_QWORD *)&v87.fields.currentCryptoKey = v77;
                            *(_QWORD *)&v87.fields.fakeValue = v76;
                            v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v87, 0LL);
                            v79 = item->fields.costumeEntity;
                            if ( v79 )
                            {
                              v80 = v78;
                              id = v79->fields.id;
                              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !AtlasManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                              }
                              AtlasManager__SetFaceImage(faceIcon, v80, id, 0LL);
                              CostumeListViewItemDraw__SetCostumeIcon(this, item->fields.costumeEntity, v82);
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
    sub_B170D4();
  }
}