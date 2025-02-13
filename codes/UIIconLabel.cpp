void __fastcall UIIconLabel___ctor(UIIconLabel_o *this, const MethodInfo *method)
{
  this->fields.blankSize = 2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIIconLabel__Clear(UIIconLabel_o *this, const MethodInfo *method)
{
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_4BDBAD5 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDBAD5 = 1;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
  {
    textLabel = this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_15;
    UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      UISprite__set_spriteName((UISprite_o *)textLabel, 0LL, 0LL);
      return;
    }
LABEL_15:
    sub_1C22094(textLabel, method);
  }
}


int32_t __fastcall UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C22094(this, method);
  return textLabel->fields.mFontSize;
}


UnityEngine_Vector2_o __fastcall UIIconLabel__GetIconSize(UIIconLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0
  float x; // s0
  float y; // s1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4BDBAD8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDBAD8 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      sub_1C22094(0LL, v4);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._22_get_localSize.method)(
      v5,
      v5->klass->vtable._23_get_drawingDimensions.methodPtr);
  }
  else
  {
    if ( !byte_4BD6AAA )
    {
      sub_1C21E38(&UnityEngine_Vector2_TypeInfo);
      byte_4BD6AAA = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
  }
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Color_o __fastcall UIIconLabel__GetPurchaseDecisionColor(
        UIIconLabel_o *this,
        int32_t dispData,
        int32_t compareData,
        int32_t iconKind,
        const MethodInfo *method)
{
  _BOOL4 v5; // w8
  float v6; // s0
  float v7; // s1
  float v8; // s3
  float v9; // s1
  float v10; // s2
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = compareData >= 0;
  v6 = 0.5;
  v7 = 1.0;
  if ( !v5 && iconKind == 28 )
    v7 = 0.5;
  if ( !v5 || dispData <= compareData )
    v6 = v7;
  v8 = 1.0;
  v9 = v6;
  v10 = v6;
  result.fields.a = v8;
  result.fields.b = v10;
  result.fields.g = v9;
  result.fields.r = v6;
  return result;
}


UnityEngine_Vector2Int_o __fastcall UIIconLabel__GetTextLabelSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C22094(this, method);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void __fastcall UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+8h] [xbp-18h]

  if ( info )
    UIIconLabel__Set_39480396(
      this,
      info->fields.iconKind,
      info->fields.data,
      info->fields.adjustData,
      info->fields.equipData,
      info->fields.time,
      info->fields.isHide,
      info->fields.isMaxHide,
      info->fields.lv,
      v3);
  else
    UIIconLabel__Clear(this, 0LL);
}


void __fastcall UIIconLabel__SetAlpha(UIIconLabel_o *this, float alpha, const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDBAD9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDBAD9 = 1;
  }
  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  v8.fields.r = textLabel->fields.mColor.fields.r;
  v8.fields.g = textLabel->fields.mColor.fields.g;
  v8.fields.b = textLabel->fields.mColor.fields.b;
  v8.fields.a = alpha;
  UIWidget__set_color(textLabel, v8, 0LL);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
  {
    textLabel = (UIWidget_o *)this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_15;
    v9.fields.r = textLabel->fields.mColor.fields.r;
    v9.fields.g = textLabel->fields.mColor.fields.g;
    v9.fields.b = textLabel->fields.mColor.fields.b;
    v9.fields.a = alpha;
    UIWidget__set_color(textLabel, v9, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    textLabel = (UIWidget_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      v10.fields.r = textLabel->fields.mColor.fields.r;
      v10.fields.g = textLabel->fields.mColor.fields.g;
      v10.fields.b = textLabel->fields.mColor.fields.b;
      v10.fields.a = alpha;
      UIWidget__set_color(textLabel, v10, 0LL);
      return;
    }
LABEL_15:
    sub_1C22094(textLabel, method);
  }
}


void __fastcall UIIconLabel__SetCombineResTxt(
        UIIconLabel_o *this,
        int32_t data,
        int32_t adjustData,
        bool isLimit,
        const MethodInfo *method)
{
  Il2CppObject *NumberFormat; // x22
  System_String_o *v10; // x0
  System_String_o **v11; // x9
  System_String_o *v12; // x21
  UILabel_o *textLabel; // x19
  Il2CppObject *v14; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1

  if ( (byte_4BDBAD7 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3745/*"COMBINE_RES_INFO"*/);
    sub_1C21E38(&StringLiteral_3735/*"COMBINE_LIMIT_INFO"*/);
    byte_4BDBAD7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0LL);
  v10 = LocalizationManager__GetNumberFormat(adjustData, 0LL);
  if ( isLimit )
    v11 = (System_String_o **)&StringLiteral_3735/*"COMBINE_LIMIT_INFO"*/;
  else
    v11 = (System_String_o **)&StringLiteral_3745/*"COMBINE_RES_INFO"*/;
  v12 = *v11;
  textLabel = this->fields.textLabel;
  v14 = (Il2CppObject *)v10;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get(v12, 0LL);
  v16 = System_String__Format_63129848(v15, NumberFormat, v14, 0LL);
  if ( !textLabel )
    sub_1C22094(v16, v17);
  UILabel__set_text(textLabel, v16, 0LL);
}


void __fastcall UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+8h] [xbp-18h]

  UIIconLabel__Set_39480396(this, 27, 0, 0, 0, 0LL, 1, 0, 0, v2);
}


void __fastcall UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+8h] [xbp-18h]

  UIIconLabel__Set_39480396(this, iconKind, price, holdCount, 0, 0LL, 0, 0, 0, v5);
}


void __fastcall UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C22094(0LL, method);
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))textLabel->klass->vtable._33_MakePixelPerfect.method)(
    textLabel,
    textLabel->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall UIIconLabel__SetTextLabelSize(
        UIIconLabel_o *this,
        UnityEngine_Vector2Int_o size,
        const MethodInfo *method)
{
  UIWidget_o *textLabel; // x0
  int32_t m_Y; // x19^4

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel
    || (m_Y = size.fields.m_Y,
        UIWidget__set_width(textLabel, size.fields.m_X, 0LL),
        (textLabel = (UIWidget_o *)this->fields.textLabel) == 0LL) )
  {
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C22094)(textLabel, size);
  }
  UIWidget__set_height(textLabel, m_Y, 0LL);
}


void __fastcall UIIconLabel__SetTextLabelStrikeout(UIIconLabel_o *this, const MethodInfo *method)
{
  UIIconLabel_o *v2; // x19
  UILabel_o *textLabel; // x19
  System_String_o *v4; // x1

  v2 = this;
  if ( (byte_4BDBADA & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16116/*"[/s]"*/);
    this = (UIIconLabel_o *)sub_1C21E38(&StringLiteral_16285/*"[s]"*/);
    byte_4BDBADA = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    sub_1C22094(this, method);
  v4 = System_String__Concat_63126736(
         (System_String_o *)StringLiteral_16285/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_16116/*"[/s]"*/,
         0LL);
  UILabel__set_text(textLabel, v4, 0LL);
}


void __fastcall UIIconLabel__Set_39480396(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t data,
        int32_t adjustData,
        int32_t equipData,
        int64_t time,
        bool isHide,
        bool isMaxHide,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *v17; // x0
  __int64 v18; // x1
  int v19; // w29
  System_String_o *v20; // x21
  float v21; // s8
  System_String_o *v22; // x25
  float v23; // s10
  float v24; // s11
  float v25; // s9
  int v26; // w20
  char v27; // w22
  System_String_o *v28; // x23
  System_String_o *v29; // x0
  System_String_o *PriceInfo; // x0
  int32_t v31; // w20
  System_String_o *v32; // x0
  System_String_o **v33; // x8
  __int64 v34; // x8
  System_String_o *v35; // x22
  System_String_o *v36; // x0
  __int64 *v37; // x8
  System_String_o *v38; // x0
  System_String_o *v39; // x23
  System_String_o *v40; // x0
  __int64 *v41; // x8
  __int64 *v42; // x8
  System_String_o *v43; // x22
  Il2CppObject *v44; // x0
  System_String_o *v45; // x22
  Il2CppObject *v46; // x0
  int32_t v47; // w22
  System_String_o *v48; // x22
  Il2CppObject *v49; // x0
  System_String_o *v50; // x22
  Il2CppObject *v51; // x0
  System_String_o *v52; // x22
  Il2CppObject *v53; // x0
  System_String_o *v54; // x22
  Il2CppObject *v55; // x0
  System_String_o *v56; // x22
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  bool v59; // cc
  System_String_o *v60; // x0
  bool v61; // cc
  System_String_o *v62; // x0
  bool v63; // cc
  float v64; // s1
  bool v65; // cc
  System_String_o *v66; // x0
  bool v67; // cc
  System_String_o *v68; // x0
  bool v69; // cc
  BalanceConfig_c *v70; // x0
  bool v71; // cc
  __int64 v72; // x20
  UIWidget_o *iconSprite; // x0
  int32_t v74; // w1
  System_String_o *v75; // x23
  System_String_o *v76; // x0
  int32_t v77; // w22
  int32_t v78; // w22
  int32_t RarityIcon; // w24
  __int64 *v80; // x8
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  __int64 *v84; // x8
  System_String_o *v85; // x23
  System_String_o *v86; // x0
  System_String_o *v87; // x23
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  Il2CppObject *v91; // x0
  System_String_o *NumberFormat_39642888; // x0
  bool v93; // cc
  System_String_o *v94; // x0
  UnityEngine_Object_o *extentionTextLabel; // x25
  UnityEngine_Object_o *v96; // x21
  UISprite_o *v97; // x20
  System_String_o *v98; // x20
  struct UISprite_o *v99; // x20
  UISprite_o *v100; // x0
  UISprite_o *v101; // x20
  UnityEngine_Object_o *v102; // x20
  UnityEngine_Object_o *transform; // x21
  float v104; // s0
  float v105; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *textLabel; // x8
  int32_t mAlignment; // w8
  float v110; // s0
  float v111; // s10
  System_String_o *spriteName; // [xsp+0h] [xbp-A0h]
  int32_t v113; // [xsp+8h] [xbp-98h]
  int32_t v114; // [xsp+Ch] [xbp-94h] BYREF
  int v115; // [xsp+10h] [xbp-90h] BYREF
  int32_t v116; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t exceedCount; // [xsp+18h] [xbp-88h] BYREF
  int32_t price; // [xsp+1Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  exceedCount = adjustData;
  price = data;
  v116 = equipData;
  if ( (byte_4BDBAD6 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Rarity_TypeInfo);
    sub_1C21E38(&StringLiteral_20696/*"img_list_atk"*/);
    sub_1C21E38(&StringLiteral_5763/*"EVENT_ITEM_UNIT"*/);
    sub_1C21E38(&StringLiteral_11029/*"QP_UNIT"*/);
    sub_1C21E38(&StringLiteral_858/*"+"*/);
    sub_1C21E38(&StringLiteral_20709/*"img_list_not_clear_cond"*/);
    sub_1C21E38(&StringLiteral_9479/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/);
    sub_1C21E38(&StringLiteral_12509/*"STONE_FRAGMENTS_UNIT"*/);
    sub_1C21E38(&StringLiteral_6657/*"FRIENDSHIP_UNIT"*/);
    sub_1C21E38(&StringLiteral_6599/*"FOLLOWER_SELECT_TYPE_POINT"*/);
    sub_1C21E38(&StringLiteral_20880/*"img_txt_bondslevel"*/);
    sub_1C21E38(&StringLiteral_20702/*"img_list_cost"*/);
    sub_1C21E38(&StringLiteral_20710/*"img_list_not_release_costume"*/);
    sub_1C21E38(&StringLiteral_20705/*"img_list_limit_cnt"*/);
    sub_1C21E38(&StringLiteral_20516/*"icon_nplv"*/);
    sub_1C21E38(&StringLiteral_1879/*"?"*/);
    sub_1C21E38(&StringLiteral_20707/*"img_list_lv"*/);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    sub_1C21E38(&StringLiteral_8692/*"MANA_UNIT"*/);
    sub_1C21E38(&StringLiteral_426/*"#,0"*/);
    sub_1C21E38(&StringLiteral_20704/*"img_list_hp"*/);
    sub_1C21E38(&StringLiteral_20703/*"img_list_costume_num"*/);
    sub_1C21E38(&StringLiteral_693/*"("*/);
    sub_1C21E38(&StringLiteral_2081/*"ANONYMOUS_UNIT"*/);
    sub_1C21E38(&StringLiteral_20913/*"img_txt_fp"*/);
    sub_1C21E38(&StringLiteral_812/*")"*/);
    sub_1C21E38(&StringLiteral_12543/*"STONE_UNIT"*/);
    sub_1C21E38(&StringLiteral_1884/*"??/??"*/);
    sub_1C21E38(&StringLiteral_714/*"(+"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_6652/*"FREE_NAME"*/);
    sub_1C21E38(&StringLiteral_1883/*"??"*/);
    sub_1C21E38(&StringLiteral_20711/*"img_list_release_num"*/);
    sub_1C21E38(&StringLiteral_20734/*"img_nplv"*/);
    sub_1C21E38(&StringLiteral_11165/*"RARE_PRI_UNIT"*/);
    sub_1C21E38(&StringLiteral_20706/*"img_list_limitcount"*/);
    sub_1C21E38(&StringLiteral_1885/*"???"*/);
    sub_1C21E38(&StringLiteral_20708/*"img_list_no"*/);
    byte_4BDBAD6 = 1;
  }
  v115 = equipData + data;
  v17 = System_Int32__ToString((int32_t)&v115, 0LL);
  v19 = exceedCount;
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  v21 = 1.0;
  v22 = v17;
  if ( exceedCount <= 0 )
    v23 = 1.0;
  else
    v23 = 0.92157;
  if ( exceedCount <= 0 )
    v24 = 1.0;
  else
    v24 = 0.015686;
  v25 = 1.0;
  v113 = iconKind;
  spriteName = 0LL;
  v26 = 0;
  v27 = 0;
  v28 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( iconKind )
  {
    case 0:
      goto LABEL_245;
    case 2:
      if ( price < 1 )
        goto LABEL_165;
      spriteName = (System_String_o *)StringLiteral_20707/*"img_list_lv"*/;
      if ( exceedCount < 1 )
      {
        v26 = 0;
        v27 = 0;
        iconKind = 0;
        if ( isHide )
          v28 = (System_String_o *)StringLiteral_1883/*"??"*/;
        else
          v28 = v17;
        goto LABEL_245;
      }
      if ( isHide )
      {
        v26 = 0;
        v27 = 0;
        iconKind = 0;
        v28 = (System_String_o *)StringLiteral_1884/*"??/??"*/;
        goto LABEL_202;
      }
      v28 = System_Int32__ToString((int32_t)&price, 0LL);
      v21 = 1.0;
      if ( !isMaxHide )
      {
        v94 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
        v28 = System_String__Concat_63126736(v28, (System_String_o *)StringLiteral_1123/*"/"*/, v94, 0LL);
      }
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      goto LABEL_203;
    case 3:
      v37 = &StringLiteral_20704/*"img_list_hp"*/;
      goto LABEL_38;
    case 5:
      v37 = &StringLiteral_20696/*"img_list_atk"*/;
LABEL_38:
      spriteName = (System_String_o *)*v37;
      v115 = v116 + price;
      v38 = System_Int32__ToString_63921084((int32_t)&v115, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      if ( isHide )
        v28 = (System_String_o *)StringLiteral_1885/*"???"*/;
      else
        v28 = v38;
      goto LABEL_245;
    case 7:
      spriteName = (System_String_o *)StringLiteral_20702/*"img_list_cost"*/;
      if ( v116 < 1 )
      {
        v26 = 0;
        v27 = 0;
        iconKind = 0;
        goto LABEL_244;
      }
      v39 = System_Int32__ToString((int32_t)&price, 0LL);
      v40 = System_Int32__ToString((int32_t)&v116, 0LL);
      v28 = System_String__Concat_63126736(v39, (System_String_o *)StringLiteral_858/*"+"*/, v40, 0LL);
LABEL_228:
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      goto LABEL_245;
    case 8:
    case 57:
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      v34 = StringLiteral_20708/*"img_list_no"*/;
      v28 = v17;
      goto LABEL_49;
    case 9:
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      if ( price >= 1 )
        v28 = v17;
      else
        v28 = (System_String_o *)StringLiteral_1/*""*/;
      if ( price >= 1 )
        v34 = StringLiteral_20706/*"img_list_limitcount"*/;
      else
        v34 = 0LL;
LABEL_49:
      spriteName = (System_String_o *)v34;
      goto LABEL_245;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = &StringLiteral_6652/*"FREE_NAME"*/;
      goto LABEL_212;
    case 11:
    case 27:
      if ( isHide )
      {
        v28 = (System_String_o *)StringLiteral_1879/*"?"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormat_39642888 = LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
        v19 = exceedCount;
        v28 = NumberFormat_39642888;
      }
      v25 = 1.0;
      v93 = price <= v19 || v19 <= -1;
      v26 = 0;
      iconKind = 0;
      if ( v93 )
        v21 = 1.0;
      else
        v21 = 0.5;
      spriteName = 0LL;
      goto LABEL_224;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = &StringLiteral_12543/*"STONE_UNIT"*/;
      goto LABEL_77;
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_8692/*"MANA_UNIT"*/, 0LL);
      v44 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v28 = System_String__Format(v43, v44, 0LL);
      v26 = 0;
      spriteName = 0LL;
      iconKind = 7;
      goto LABEL_84;
    case 14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"QP_UNIT"*/, 0LL);
      v46 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v28 = System_String__Format(v45, v46, 0LL);
      v26 = 0;
      spriteName = 0LL;
      iconKind = 5;
      goto LABEL_84;
    case 15:
      v47 = price;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetPriceInfo(v47, 0LL);
      goto LABEL_213;
    case 16:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_6657/*"FRIENDSHIP_UNIT"*/, 0LL);
      v49 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      PriceInfo = System_String__Format(v48, v49, 0LL);
      goto LABEL_213;
    case 17:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      goto LABEL_213;
    case 18:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_5763/*"EVENT_ITEM_UNIT"*/, 0LL);
      v51 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v28 = System_String__Format(v50, v51, 0LL);
      v26 = 0;
      iconKind = 0;
      spriteName = 0LL;
      goto LABEL_84;
    case 19:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = &StringLiteral_12509/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_77:
      v52 = LocalizationManager__Get((System_String_o *)*v42, 0LL);
      v53 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v28 = System_String__Format(v52, v53, 0LL);
      v26 = 0;
      spriteName = 0LL;
      iconKind = 6;
      goto LABEL_84;
    case 20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_2081/*"ANONYMOUS_UNIT"*/, 0LL);
      v55 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v28 = System_String__Format(v54, v55, 0LL);
      v26 = 0;
      spriteName = 0LL;
      iconKind = 17;
      goto LABEL_84;
    case 21:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11165/*"RARE_PRI_UNIT"*/, 0LL);
      v57 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v28 = System_String__Format(v56, v57, 0LL);
      v26 = 0;
      spriteName = 0LL;
      iconKind = 18;
LABEL_84:
      v27 = 1;
      goto LABEL_245;
    case 22:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v58 = LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v25 = 1.0;
      v59 = price <= exceedCount || exceedCount <= -1;
      v28 = v58;
      v26 = 0;
      spriteName = 0LL;
      if ( v59 )
        v21 = 1.0;
      else
        v21 = 0.5;
      iconKind = 6;
      goto LABEL_224;
    case 23:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v60 = LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v25 = 1.0;
      v61 = price <= exceedCount || exceedCount <= -1;
      v28 = v60;
      v26 = 0;
      spriteName = 0LL;
      if ( v61 )
        v21 = 1.0;
      else
        v21 = 0.5;
      iconKind = 7;
      goto LABEL_224;
    case 24:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v62 = LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v25 = 1.0;
      v63 = price <= exceedCount || exceedCount <= -1;
      v28 = v62;
      v26 = 0;
      spriteName = 0LL;
      if ( v63 )
        v21 = 1.0;
      else
        v21 = 0.5;
      iconKind = 5;
      goto LABEL_224;
    case 25:
    case 26:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      goto LABEL_147;
    case 28:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = 1.0;
      v28 = LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      if ( exceedCount < 0 )
        v64 = 0.5;
      else
        v64 = 1.0;
      v65 = price <= exceedCount || exceedCount <= -1;
      v26 = 0;
      spriteName = 0LL;
      if ( v65 )
        v21 = v64;
      else
        v21 = 0.5;
      iconKind = 16;
      goto LABEL_224;
    case 29:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v66 = LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v25 = 1.0;
      v67 = price <= exceedCount || exceedCount <= -1;
      v28 = v66;
      v26 = 0;
      spriteName = 0LL;
      if ( v67 )
        v21 = 1.0;
      else
        v21 = 0.5;
      iconKind = 17;
      goto LABEL_224;
    case 30:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v68 = LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v25 = 1.0;
      v69 = price <= exceedCount || exceedCount <= -1;
      v28 = v68;
      v26 = 0;
      spriteName = 0LL;
      if ( v69 )
        v21 = 1.0;
      else
        v21 = 0.5;
      iconKind = 18;
LABEL_224:
      v27 = 1;
      goto LABEL_225;
    case 31:
      v70 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v70 = BalanceConfig_TypeInfo;
      }
      iconKind = v70->static_fields->LvExceedDewDropItemId;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = LocalizationManager__GetNumberFormat_39642888(v22, 0LL);
      v26 = 0;
      v27 = 0;
LABEL_147:
      v25 = 1.0;
      v71 = price <= exceedCount || exceedCount <= -1;
      spriteName = 0LL;
      if ( v71 )
        v21 = 1.0;
      else
        v21 = 0.5;
LABEL_225:
      v23 = v21;
      v24 = v21;
      goto LABEL_245;
    case 32:
      if ( (price & 0x80000000) != 0 )
        goto LABEL_165;
      v72 = StringLiteral_20880/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_20880/*"img_txt_bondslevel"*/ )
        goto LABEL_163;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      v74 = 40;
      goto LABEL_161;
    case 33:
      if ( price < 1 )
        goto LABEL_165;
      v72 = StringLiteral_20734/*"img_nplv"*/;
      if ( !StringLiteral_20734/*"img_nplv"*/ )
        goto LABEL_163;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      v74 = 55;
LABEL_161:
      UIWidget__set_width(iconSprite, v74, 0LL);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      UIWidget__set_height(iconSprite, 18, 0LL);
      v19 = exceedCount;
LABEL_163:
      spriteName = (System_String_o *)v72;
      if ( v19 < 1 )
      {
        v26 = 0;
        iconKind = 0;
        goto LABEL_243;
      }
      v75 = System_Int32__ToString((int32_t)&price, 0LL);
      v76 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
      v28 = System_String__Concat_63126736(v75, (System_String_o *)StringLiteral_1123/*"/"*/, v76, 0LL);
      v26 = 0;
      iconKind = 0;
      v27 = 1;
LABEL_202:
      v21 = 1.0;
LABEL_203:
      v23 = 1.0;
      goto LABEL_204;
    case 34:
      if ( price < 1 )
      {
        v26 = 0;
        v27 = 0;
        iconKind = 0;
        spriteName = 0LL;
        v21 = 1.0;
        v23 = 1.0;
        v24 = 1.0;
        v25 = 1.0;
        goto LABEL_166;
      }
      if ( exceedCount )
      {
        if ( (unsigned int)(exceedCount - 1) < 0x62 )
        {
          v24 = 0.31373;
          v23 = 0.94118;
          v21 = 0.98824;
        }
        else
        {
          if ( exceedCount != 99 )
            goto LABEL_242;
          v24 = 0.058824;
          v23 = 0.45098;
          v21 = 1.0;
        }
      }
      else
      {
        v21 = 1.0;
        v23 = 1.0;
        v24 = 1.0;
      }
      v25 = 1.0;
LABEL_242:
      v26 = 0;
      iconKind = 0;
      spriteName = (System_String_o *)StringLiteral_20516/*"icon_nplv"*/;
LABEL_243:
      v27 = 1;
LABEL_244:
      v28 = v22;
      goto LABEL_245;
    case 35:
      v77 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon(v77, 0LL);
      goto LABEL_183;
    case 36:
      v78 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon_38945792(v78, v19, lv, 0LL);
      if ( exceedCount < 1 )
        goto LABEL_183;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_298;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)iconSprite, price, exceedCount, 0, 0LL);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_298;
      if ( ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)iconSprite, price, lv, RarityIcon, 0LL) > 2 )
        v26 = 1;
      else
LABEL_183:
        v26 = 0;
      v27 = 0;
      iconKind = 0;
      v28 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_245;
    case 38:
    case 39:
    case 40:
      if ( price >= 1 )
      {
        v29 = System_Int32__ToString_63921084((int32_t)&price, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
        PriceInfo = System_String__Concat_63115476((System_String_o *)StringLiteral_858/*"+"*/, v29, 0LL);
LABEL_213:
        v28 = PriceInfo;
        v26 = 0;
        v27 = 0;
        iconKind = 0;
        spriteName = 0LL;
        goto LABEL_245;
      }
      if ( (price & 0x80000000) != 0 )
      {
        PriceInfo = System_Int32__ToString_63921084((int32_t)&price, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
        goto LABEL_213;
      }
LABEL_165:
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      spriteName = 0LL;
LABEL_166:
      v28 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_245:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_298;
      UILabel__set_text((UILabel_o *)iconSprite, v28, 0LL);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_298;
      v121.fields.r = v21;
      v121.fields.g = v23;
      v121.fields.b = v24;
      v121.fields.a = v25;
      UIWidget__set_color(iconSprite, v121, 0LL);
      extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
        goto LABEL_252;
      iconSprite = (UIWidget_o *)this->fields.extentionTextLabel;
      if ( !iconSprite )
        goto LABEL_298;
      UILabel__set_text((UILabel_o *)iconSprite, v20, 0LL);
LABEL_252:
      v96 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v96, 0LL, 0LL) )
        return;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_298;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, v113 != 56, 0LL);
      if ( iconKind < 1 )
      {
        if ( v26 )
        {
          v99 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          v100 = v99;
          v98 = spriteName;
          AtlasManager__SetEventSprite(v100, spriteName, 0LL);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v101 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommon(v101, 0LL);
          v98 = spriteName;
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_298;
        UISprite__set_spriteName((UISprite_o *)iconSprite, v98, 0LL);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v97 = this->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v97, iconKind, 0LL);
        v98 = spriteName;
      }
      if ( !(v27 & 1 | (v98 == 0LL)) )
      {
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_298;
        ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))iconSprite->klass->vtable._33_MakePixelPerfect.method)(
          iconSprite,
          iconSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_298;
      iconSprite = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)iconSprite, 0LL);
      if ( !this->fields.textLabel )
        goto LABEL_298;
      v102 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v102, transform, 0LL) )
      {
        iconSprite = (UIWidget_o *)this->fields.textLabel;
        if ( !iconSprite )
          goto LABEL_298;
        LODWORD(v104) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)iconSprite, 0LL);
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_298;
        v105 = v104;
        iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
        if ( !iconSprite )
          goto LABEL_298;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        iconSprite = (UIWidget_o *)System_String__op_Equality(v28, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        textLabel = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !textLabel )
            goto LABEL_298;
          v105 = v105 - (float)textLabel->fields.mSpacingX;
        }
        else if ( !textLabel )
        {
          goto LABEL_298;
        }
        mAlignment = textLabel->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v110 = (float)(v105 * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v111 = (float)-this->fields.blankSize;
            goto LABEL_294;
          }
          v110 = v105 + (float)this->fields.blankSize;
        }
        v111 = -v110;
LABEL_294:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
          if ( iconSprite )
          {
            v120.fields.x = v111;
            v120.fields.y = y;
            v120.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v120, 0LL);
            return;
          }
        }
LABEL_298:
        sub_1C22094(iconSprite, v18);
      }
      return;
    case 41:
    case 42:
    case 43:
      v31 = price;
      v32 = System_Int32__ToString_63921084((int32_t)&price, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
      v33 = (System_String_o **)&StringLiteral_693/*"("*/;
      if ( v31 >= 0 )
        v33 = (System_String_o **)&StringLiteral_714/*"(+"*/;
      v28 = System_String__Concat_63126736(*v33, v32, (System_String_o *)StringLiteral_812/*")"*/, 0LL);
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      if ( price <= exceedCount )
      {
        v21 = 1.0;
        if ( price >= exceedCount )
          v23 = 1.0;
        else
          v23 = 0.0;
        spriteName = 0LL;
        v24 = v23;
      }
      else
      {
        spriteName = 0LL;
        v23 = 1.0;
        v21 = 0.0;
LABEL_204:
        v24 = 1.0;
      }
      v25 = 1.0;
      goto LABEL_245;
    case 44:
    case 45:
      if ( (price & 0x80000000) != 0 )
        goto LABEL_165;
      if ( exceedCount < 1 )
        goto LABEL_29;
      v35 = System_Int32__ToString_63921084((int32_t)&price, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
      v36 = System_Int32__ToString_63921084((int32_t)&exceedCount, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
      v28 = System_String__Concat_63126736(v35, (System_String_o *)StringLiteral_1123/*"/"*/, v36, 0LL);
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      spriteName = 0LL;
      goto LABEL_202;
    case 46:
      v80 = &StringLiteral_20704/*"img_list_hp"*/;
      goto LABEL_187;
    case 47:
      v80 = &StringLiteral_20696/*"img_list_atk"*/;
LABEL_187:
      spriteName = (System_String_o *)*v80;
      v28 = System_Int32__ToString_63921084((int32_t)&price, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
      if ( (v116 & 0x80000000) != 0 )
      {
        v82 = System_Int32__ToString((int32_t)&v116, 0LL);
      }
      else
      {
        v81 = System_Int32__ToString_63921084((int32_t)&v116, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
        v82 = System_String__Concat_63115476((System_String_o *)StringLiteral_858/*"+"*/, v81, 0LL);
      }
      v20 = v82;
      goto LABEL_228;
    case 48:
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      spriteName = 0LL;
      if ( price <= 0 )
        v28 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v28 = v17;
      goto LABEL_245;
    case 49:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetDate(time, 0LL);
      goto LABEL_213;
    case 50:
      spriteName = (System_String_o *)StringLiteral_20703/*"img_list_costume_num"*/;
      v83 = System_Int32__ToString((int32_t)&price, 0LL);
      goto LABEL_201;
    case 51:
      v84 = &StringLiteral_20711/*"img_list_release_num"*/;
      goto LABEL_200;
    case 52:
      v84 = &StringLiteral_20710/*"img_list_not_release_costume"*/;
      goto LABEL_200;
    case 53:
      v84 = &StringLiteral_20709/*"img_list_not_clear_cond"*/;
      goto LABEL_200;
    case 54:
      v84 = &StringLiteral_20705/*"img_list_limit_cnt"*/;
LABEL_200:
      spriteName = (System_String_o *)*v84;
      v85 = System_Int32__ToString((int32_t)&price, 0LL);
      v86 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
      v83 = System_String__Concat_63126736(v85, (System_String_o *)StringLiteral_1123/*"/"*/, v86, 0LL);
      goto LABEL_201;
    case 55:
      spriteName = (System_String_o *)StringLiteral_20913/*"img_txt_fp"*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_6599/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0LL);
      v114 = price;
      v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v114, v88, v89, v90);
      v83 = System_String__Format(v87, v91, 0LL);
LABEL_201:
      v28 = v83;
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      goto LABEL_202;
    case 56:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = &StringLiteral_9479/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_212:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v41, 0LL);
      goto LABEL_213;
    default:
LABEL_29:
      v26 = 0;
      v27 = 0;
      iconKind = 0;
      spriteName = 0LL;
      goto LABEL_244;
  }
}


void __fastcall UIIconLabel__Set_39507540(
        UIIconLabel_o *this,
        IconLabelInfo_o *info,
        bool isHide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  if ( info )
    UIIconLabel__Set_39480396(
      this,
      info->fields.iconKind,
      info->fields.data,
      info->fields.adjustData,
      info->fields.equipData,
      info->fields.time,
      isHide,
      info->fields.isMaxHide,
      info->fields.lv,
      v4);
  else
    UIIconLabel__Clear(this, 0LL);
}