void __fastcall UIIconLabel___ctor(UIIconLabel_o *this, const MethodInfo *method)
{
  this->fields.blankSize = 2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UIIconLabel__Clear(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x20
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_4396251 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4396251 = 1;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_17;
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, v2);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
  {
    textLabel = this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_17;
    UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, v6);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      UISprite__set_spriteName((UISprite_o *)textLabel, 0LL, 0LL);
      return;
    }
LABEL_17:
    sub_B7769C(textLabel, method);
  }
}


int32_t __fastcall UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B7769C(this, method);
  return textLabel->fields.mFontSize;
}


UnityEngine_Vector2_o __fastcall UIIconLabel__GetIconSize(UIIconLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o zero; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4396254 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4396254 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      sub_B7769C(0LL, v4);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._22_get_localSize.method)(
      v5,
      v5->klass->vtable._23_get_drawingDimensions.methodPtr);
  }
  else
  {
    zero = UnityEngine_Vector2__get_zero(0LL);
    y = zero.fields.y;
    x = zero.fields.x;
  }
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall UIIconLabel__GetPurchaseDecisionColor(
        UIIconLabel_o *this,
        int32_t dispData,
        int32_t compareData,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (compareData & 0x80000000) != 0 || dispData <= compareData )
    *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_white(0LL);
  else
    *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_gray(0LL);
  result.fields.a = v7;
  result.fields.b = v6;
  result.fields.g = v5;
  result.fields.r = v4;
  return result;
}


UnityEngine_Vector2Int_o __fastcall UIIconLabel__GetTextLabelSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B7769C(this, method);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void __fastcall UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+8h] [xbp-8h]

  if ( info )
    UIIconLabel__Set_41716724(
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

  if ( (byte_4396255 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4396255 = 1;
  }
  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_17;
  v8.fields.r = textLabel->fields.mColor.fields.r;
  v8.fields.g = textLabel->fields.mColor.fields.g;
  v8.fields.b = textLabel->fields.mColor.fields.b;
  v8.fields.a = alpha;
  UIWidget__set_color(textLabel, v8, 0LL);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
  {
    textLabel = (UIWidget_o *)this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_17;
    v9.fields.r = textLabel->fields.mColor.fields.r;
    v9.fields.g = textLabel->fields.mColor.fields.g;
    v9.fields.b = textLabel->fields.mColor.fields.b;
    v9.fields.a = alpha;
    UIWidget__set_color(textLabel, v9, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_17:
    sub_B7769C(textLabel, method);
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
  bool v12; // zf
  UILabel_o *textLabel; // x19
  System_String_o *v14; // x21
  Il2CppObject *v15; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_4396253 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3322/*"COMBINE_RES_INFO"*/);
    sub_B775C4(&StringLiteral_3312/*"COMBINE_LIMIT_INFO"*/);
    byte_4396253 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0LL);
  v10 = LocalizationManager__GetNumberFormat(adjustData, 0LL);
  v11 = (System_String_o **)&StringLiteral_3312/*"COMBINE_LIMIT_INFO"*/;
  v12 = !isLimit;
  textLabel = this->fields.textLabel;
  if ( v12 )
    v11 = (System_String_o **)&StringLiteral_3322/*"COMBINE_RES_INFO"*/;
  v14 = *v11;
  v15 = (Il2CppObject *)v10;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get(v14, 0LL);
  v17 = System_String__Format_44897472(v16, NumberFormat, v15, 0LL);
  if ( !textLabel )
    sub_B7769C(v17, v18);
  UILabel__set_text(textLabel, v17, v19);
}


void __fastcall UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+8h] [xbp-8h]

  UIIconLabel__Set_41716724(this, 27, 0, 0, 0, 0LL, 1, 0, 0, v2);
}


void __fastcall UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+8h] [xbp-8h]

  UIIconLabel__Set_41716724(this, iconKind, price, holdCount, 0, 0LL, 0, 0, 0, v5);
}


void __fastcall UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B7769C(0LL, method);
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
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(textLabel, size);
  }
  UIWidget__set_height(textLabel, m_Y, 0LL);
}


void __fastcall UIIconLabel__SetTextLabelStrikeout(UIIconLabel_o *this, const MethodInfo *method)
{
  UIIconLabel_o *v2; // x19
  UILabel_o *textLabel; // x19
  System_String_o *v4; // x1
  const MethodInfo *v5; // x2

  v2 = this;
  if ( (byte_4396256 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_15946/*"[/s]"*/);
    this = (UIIconLabel_o *)sub_B775C4(&StringLiteral_16105/*"[s]"*/);
    byte_4396256 = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    sub_B7769C(this, method);
  v4 = System_String__Concat_44904220(
         (System_String_o *)StringLiteral_16105/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_15946/*"[/s]"*/,
         0LL);
  UILabel__set_text(textLabel, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__Set_41716724(
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
  System_String_o *v17; // x21
  System_String_o *NumberFormat_34382772; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  int v22; // s0
  float v23; // s1
  unsigned int v24; // s2
  unsigned int v25; // s3
  float v26; // s4
  float v27; // s5
  float v28; // s6
  float v29; // s7
  System_String_o *Icon; // x23
  int v31; // w24
  char v32; // w22
  int32_t LvExceedDewDropItemId; // w28
  System_String_o *v34; // x0
  System_String_o *PriceInfo; // x0
  int v36; // w22
  System_String_o *v37; // x0
  System_String_o **v38; // x8
  int v39; // s0
  float v40; // s1
  unsigned int v41; // s2
  unsigned int v42; // s3
  __int64 *v43; // x8
  const MethodInfo *v44; // x3
  System_String_o *v45; // x22
  System_String_o *v46; // x0
  const MethodInfo *v47; // x3
  int v48; // s1
  int v49; // s2
  int v50; // s0
  float v51; // s3
  __int64 *v52; // x8
  __int64 *v53; // x8
  __int64 *v54; // x8
  __int64 *v55; // x8
  System_String_o *v56; // x0
  System_String_o *v57; // x22
  System_String_o *v58; // x0
  __int64 *v59; // x8
  System_String_o *v60; // x23
  Il2CppObject *v61; // x0
  System_String_o *v62; // x23
  Il2CppObject *v63; // x0
  int32_t v64; // w22
  System_String_o *v65; // x23
  Il2CppObject *v66; // x0
  System_String_o *v67; // x23
  Il2CppObject *v68; // x0
  System_String_o *v69; // x23
  Il2CppObject *v70; // x0
  System_String_o *v71; // x23
  Il2CppObject *v72; // x0
  System_String_o *v73; // x23
  Il2CppObject *v74; // x0
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x3
  const MethodInfo *v79; // x3
  BalanceConfig_c *v80; // x0
  const MethodInfo *v81; // x3
  UIWidget_o *iconSprite; // x0
  int32_t v83; // w1
  System_String_o *v84; // x22
  System_String_o *v85; // x0
  int v86; // s0
  float v87; // s1
  unsigned int v88; // s2
  unsigned int v89; // s3
  int32_t v90; // w22
  int32_t v91; // w23
  int32_t v92; // w24
  int32_t RarityIcon; // w24
  System_String_o *v94; // x0
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  System_String_o *v97; // x22
  System_String_o *v98; // x2
  System_String_o *v99; // x0
  System_String_o *v100; // x22
  __int64 v101; // x2
  Il2CppObject *v102; // x0
  System_String_o *v103; // x27
  UnityEngine_Object_o *extentionTextLabel; // x25
  const MethodInfo *v105; // x2
  UnityEngine_Object_o *v106; // x21
  UISprite_o *v107; // x20
  UISprite_o *v108; // x20
  UISprite_o *v109; // x20
  UnityEngine_Object_o *v110; // x20
  UnityEngine_Object_o *transform; // x21
  const MethodInfo *v112; // x3
  struct UILabel_o *textLabel; // x20
  float x; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *v117; // x8
  int32_t mAlignment; // w8
  float v119; // s0
  float v120; // s10
  int v121; // s0
  System_String_o *value; // [xsp+8h] [xbp-98h]
  int32_t v123; // [xsp+10h] [xbp-90h] BYREF
  __int64 v124; // [xsp+14h] [xbp-8Ch] BYREF
  float g; // [xsp+1Ch] [xbp-84h]
  unsigned __int64 v126; // [xsp+20h] [xbp-80h]
  _DWORD v127[3]; // [xsp+2Ch] [xbp-74h] BYREF
  int32_t v128; // [xsp+38h] [xbp-68h] BYREF
  int32_t v129[13]; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v132; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o PurchaseDecisionColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v134; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v136; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v128 = adjustData;
  v129[0] = data;
  v127[0] = equipData;
  if ( (byte_4396252 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&StringLiteral_19901/*"img_list_atk"*/);
    sub_B775C4(&StringLiteral_5787/*"EVENT_ITEM_UNIT"*/);
    sub_B775C4(&StringLiteral_11093/*"QP_UNIT"*/);
    sub_B775C4(&StringLiteral_706/*"+"*/);
    sub_B775C4(&StringLiteral_19911/*"img_list_not_clear_cond"*/);
    sub_B775C4(&StringLiteral_9511/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/);
    sub_B775C4(&StringLiteral_12611/*"STONE_FRAGMENTS_UNIT"*/);
    sub_B775C4(&StringLiteral_6603/*"FRIENDSHIP_UNIT"*/);
    sub_B775C4(&StringLiteral_6547/*"FOLLOWER_SELECT_TYPE_POINT"*/);
    sub_B775C4(&StringLiteral_20069/*"img_txt_bondslevel"*/);
    sub_B775C4(&StringLiteral_19904/*"img_list_cost"*/);
    sub_B775C4(&StringLiteral_19912/*"img_list_not_release_costume"*/);
    sub_B775C4(&StringLiteral_19907/*"img_list_limit_cnt"*/);
    sub_B775C4(&StringLiteral_19744/*"icon_nplv"*/);
    sub_B775C4(&StringLiteral_1554/*"?"*/);
    sub_B775C4(&StringLiteral_19909/*"img_list_lv"*/);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    sub_B775C4(&StringLiteral_8779/*"MANA_UNIT"*/);
    sub_B775C4(&StringLiteral_350/*"#,0"*/);
    sub_B775C4(&StringLiteral_19906/*"img_list_hp"*/);
    sub_B775C4(&StringLiteral_19905/*"img_list_costume_num"*/);
    sub_B775C4(&StringLiteral_597/*"("*/);
    sub_B775C4(&StringLiteral_1756/*"ANONYMOUS_UNIT"*/);
    sub_B775C4(&StringLiteral_20102/*"img_txt_fp"*/);
    sub_B775C4(&StringLiteral_665/*")"*/);
    sub_B775C4(&StringLiteral_12629/*"STONE_UNIT"*/);
    sub_B775C4(&StringLiteral_1559/*"??/??"*/);
    sub_B775C4(&StringLiteral_608/*"(+"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_6599/*"FREE_NAME"*/);
    sub_B775C4(&StringLiteral_1558/*"??"*/);
    sub_B775C4(&StringLiteral_19913/*"img_list_release_num"*/);
    sub_B775C4(&StringLiteral_19936/*"img_nplv"*/);
    sub_B775C4(&StringLiteral_11226/*"RARE_PRI_UNIT"*/);
    sub_B775C4(&StringLiteral_19908/*"img_list_limitcount"*/);
    sub_B775C4(&StringLiteral_1560/*"???"*/);
    sub_B775C4(&StringLiteral_19910/*"img_list_no"*/);
    byte_4396252 = 1;
  }
  g = 0.0;
  v126 = 0LL;
  v124 = (unsigned int)(equipData + data);
  v17 = System_Int32__ToString((int32_t)&v124, 0LL);
  value = (System_String_o *)StringLiteral_1/*""*/;
  if ( v128 <= 0 )
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_white(0LL);
  else
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_yellow(0LL);
  Icon = 0LL;
  v31 = 0;
  HIDWORD(v124) = v22;
  g = v23;
  v126 = __PAIR64__(v25, v24);
  v32 = 0;
  LvExceedDewDropItemId = 0;
  switch ( iconKind )
  {
    case 0:
      goto LABEL_151;
    case 1:
    case 4:
    case 6:
    case 37:
      goto LABEL_204;
    case 2:
      if ( v129[0] < 1 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19909/*"img_list_lv"*/;
      if ( v128 < 1 )
      {
        v31 = 0;
        v32 = 0;
        LvExceedDewDropItemId = 0;
        if ( isHide )
          v17 = (System_String_o *)StringLiteral_1558/*"??"*/;
        goto LABEL_204;
      }
      if ( isHide )
      {
        v17 = (System_String_o *)StringLiteral_1559/*"??/??"*/;
      }
      else
      {
        v17 = System_Int32__ToString((int32_t)v129, 0LL);
        if ( !isMaxHide )
        {
          v98 = System_Int32__ToString((int32_t)&v128, 0LL);
          v99 = v17;
LABEL_184:
          v96 = System_String__Concat_44904220(v99, (System_String_o *)StringLiteral_892/*"/"*/, v98, 0LL);
LABEL_185:
          v17 = v96;
        }
      }
      *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_white(0LL);
      v31 = 0;
      v32 = 0;
      LvExceedDewDropItemId = 0;
LABEL_187:
      HIDWORD(v124) = v39;
      goto LABEL_188;
    case 3:
      v55 = &StringLiteral_19906/*"img_list_hp"*/;
      goto LABEL_53;
    case 5:
      v55 = &StringLiteral_19901/*"img_list_atk"*/;
LABEL_53:
      Icon = (System_String_o *)*v55;
      LODWORD(v124) = v127[0] + v129[0];
      v56 = System_Int32__ToString_39547236((int32_t)&v124, (System_String_o *)StringLiteral_350/*"#,0"*/, 0LL);
      v31 = 0;
      v32 = 0;
      LvExceedDewDropItemId = 0;
      if ( isHide )
        v17 = (System_String_o *)StringLiteral_1560/*"???"*/;
      else
        v17 = v56;
      goto LABEL_204;
    case 7:
      Icon = (System_String_o *)StringLiteral_19904/*"img_list_cost"*/;
      if ( v127[0] >= 1 )
      {
        v57 = System_Int32__ToString((int32_t)v129, 0LL);
        v58 = System_Int32__ToString((int32_t)v127, 0LL);
        v17 = System_String__Concat_44904220(v57, (System_String_o *)StringLiteral_706/*"+"*/, v58, 0LL);
      }
      goto LABEL_202;
    case 8:
    case 57:
      v43 = &StringLiteral_19910/*"img_list_no"*/;
      goto LABEL_60;
    case 9:
      if ( v129[0] < 1 )
        goto LABEL_151;
      v43 = &StringLiteral_19908/*"img_list_limitcount"*/;
LABEL_60:
      v31 = 0;
      v32 = 0;
      Icon = (System_String_o *)*v43;
      goto LABEL_203;
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_6599/*"FREE_NAME"*/;
      goto LABEL_65;
    case 11:
    case 27:
      if ( isHide )
      {
        v17 = (System_String_o *)StringLiteral_1554/*"?"*/;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        NumberFormat_34382772 = LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
        v17 = NumberFormat_34382772;
      }
      *(UnityEngine_Color_o *)&v86 = UIIconLabel__GetPurchaseDecisionColor(
                                       (UIIconLabel_o *)NumberFormat_34382772,
                                       v129[0],
                                       v128,
                                       v21);
      v31 = 0;
      LvExceedDewDropItemId = 0;
      Icon = 0LL;
      goto LABEL_198;
    case 12:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = &StringLiteral_12629/*"STONE_UNIT"*/;
      goto LABEL_98;
    case 13:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v60 = LocalizationManager__Get((System_String_o *)StringLiteral_8779/*"MANA_UNIT"*/, 0LL);
      v61 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      v17 = System_String__Format(v60, v61, 0LL);
      v31 = 0;
      Icon = 0LL;
      goto LABEL_117;
    case 14:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_11093/*"QP_UNIT"*/, 0LL);
      v63 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      v17 = System_String__Format(v62, v63, 0LL);
      v31 = 0;
      Icon = 0LL;
      goto LABEL_122;
    case 15:
      v64 = v129[0];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      PriceInfo = LocalizationManager__GetPriceInfo(v64, 0LL);
      goto LABEL_178;
    case 16:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_6603/*"FRIENDSHIP_UNIT"*/, 0LL);
      v66 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      PriceInfo = System_String__Format(v65, v66, 0LL);
      goto LABEL_178;
    case 17:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      PriceInfo = LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      goto LABEL_178;
    case 18:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_5787/*"EVENT_ITEM_UNIT"*/, 0LL);
      v68 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      v17 = System_String__Format(v67, v68, 0LL);
      v31 = 0;
      LvExceedDewDropItemId = 0;
      Icon = 0LL;
      goto LABEL_199;
    case 19:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = &StringLiteral_12611/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_98:
      v69 = LocalizationManager__Get((System_String_o *)*v59, 0LL);
      v70 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      v17 = System_String__Format(v69, v70, 0LL);
      v31 = 0;
      Icon = 0LL;
      goto LABEL_112;
    case 20:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v71 = LocalizationManager__Get((System_String_o *)StringLiteral_1756/*"ANONYMOUS_UNIT"*/, 0LL);
      v72 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      v17 = System_String__Format(v71, v72, 0LL);
      v31 = 0;
      Icon = 0LL;
      goto LABEL_103;
    case 21:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v73 = LocalizationManager__Get((System_String_o *)StringLiteral_11226/*"RARE_PRI_UNIT"*/, 0LL);
      v74 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      v17 = System_String__Format(v73, v74, 0LL);
      v31 = 0;
      Icon = 0LL;
      goto LABEL_131;
    case 22:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      PurchaseDecisionColor = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v17, v129[0], v128, v75);
      v31 = 0;
      Icon = 0LL;
      HIDWORD(v124) = LODWORD(PurchaseDecisionColor.fields.r);
      g = PurchaseDecisionColor.fields.g;
      v126 = *(_QWORD *)&PurchaseDecisionColor.fields.b;
LABEL_112:
      LvExceedDewDropItemId = 6;
      goto LABEL_199;
    case 23:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      v134 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v17, v129[0], v128, v76);
      v31 = 0;
      Icon = 0LL;
      HIDWORD(v124) = LODWORD(v134.fields.r);
      g = v134.fields.g;
      v126 = *(_QWORD *)&v134.fields.b;
LABEL_117:
      LvExceedDewDropItemId = 7;
      goto LABEL_199;
    case 24:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      v135 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v17, v129[0], v128, v77);
      v31 = 0;
      Icon = 0LL;
      HIDWORD(v124) = LODWORD(v135.fields.r);
      g = v135.fields.g;
      v126 = *(_QWORD *)&v135.fields.b;
LABEL_122:
      LvExceedDewDropItemId = 5;
      goto LABEL_199;
    case 25:
    case 26:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      *(UnityEngine_Color_o *)&v39 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v17, v129[0], v128, v44);
      goto LABEL_26;
    case 28:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      v136 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v17, v129[0], v128, v78);
      v31 = 0;
      Icon = 0LL;
      HIDWORD(v124) = LODWORD(v136.fields.r);
      g = v136.fields.g;
      v126 = *(_QWORD *)&v136.fields.b;
      LvExceedDewDropItemId = 16;
      goto LABEL_199;
    case 29:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      v132 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v17, v129[0], v128, v47);
      v31 = 0;
      Icon = 0LL;
      HIDWORD(v124) = LODWORD(v132.fields.r);
      g = v132.fields.g;
      v126 = *(_QWORD *)&v132.fields.b;
LABEL_103:
      LvExceedDewDropItemId = 17;
      goto LABEL_199;
    case 30:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      v137 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v17, v129[0], v128, v79);
      v31 = 0;
      Icon = 0LL;
      HIDWORD(v124) = LODWORD(v137.fields.r);
      g = v137.fields.g;
      v126 = *(_QWORD *)&v137.fields.b;
LABEL_131:
      LvExceedDewDropItemId = 18;
      goto LABEL_199;
    case 31:
      v80 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v80 = BalanceConfig_TypeInfo;
      }
      LvExceedDewDropItemId = v80->static_fields->LvExceedDewDropItemId;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__GetNumberFormat_34382772(v17, 0LL);
      *(UnityEngine_Color_o *)&v39 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v17, v129[0], v128, v81);
      v31 = 0;
      v32 = 0;
      goto LABEL_27;
    case 32:
      if ( (v129[0] & 0x80000000) != 0 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_20069/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_20069/*"img_txt_bondslevel"*/ )
        goto LABEL_149;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      v83 = 40;
      goto LABEL_147;
    case 33:
      if ( v129[0] < 1 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19936/*"img_nplv"*/;
      if ( !StringLiteral_19936/*"img_nplv"*/ )
        goto LABEL_149;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      v83 = 55;
LABEL_147:
      UIWidget__set_width(iconSprite, v83, 0LL);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      UIWidget__set_height(iconSprite, 18, 0LL);
LABEL_149:
      if ( v128 < 1 )
      {
        v31 = 0;
        LvExceedDewDropItemId = 0;
      }
      else
      {
        v84 = System_Int32__ToString((int32_t)v129, 0LL);
        v85 = System_Int32__ToString((int32_t)&v128, 0LL);
        v17 = System_String__Concat_44904220(v84, (System_String_o *)StringLiteral_892/*"/"*/, v85, 0LL);
        *(UnityEngine_Color_o *)&v86 = UnityEngine_Color__get_white(0LL);
        v31 = 0;
        LvExceedDewDropItemId = 0;
LABEL_198:
        HIDWORD(v124) = v86;
        g = v87;
        v126 = __PAIR64__(v89, v88);
      }
LABEL_199:
      v32 = 1;
      goto LABEL_204;
    case 34:
      if ( v129[0] >= 1 )
      {
        if ( v128 )
        {
          if ( (unsigned int)(v128 - 1) <= 0x61 )
          {
            v50 = 1065155837;
            v48 = 1064366321;
            v49 = 1050714273;
            v51 = 1.0;
            goto LABEL_274;
          }
          if ( v128 == 99 )
          {
            v48 = 1055319783;
            v49 = 1030811889;
            v50 = 1.0;
            v51 = 1.0;
LABEL_274:
            UnityEngine_Color___ctor(
              *(UnityEngine_Color_o *)&v50,
              v26,
              v27,
              v28,
              v29,
              (const MethodInfo *)((char *)&v124 + 4));
          }
        }
        else
        {
          white = UnityEngine_Color__get_white(0LL);
          HIDWORD(v124) = LODWORD(white.fields.r);
          g = white.fields.g;
          v126 = *(_QWORD *)&white.fields.b;
        }
        v31 = 0;
        LvExceedDewDropItemId = 0;
        v32 = 1;
        Icon = (System_String_o *)StringLiteral_19744/*"icon_nplv"*/;
        goto LABEL_204;
      }
      *(UnityEngine_Color_o *)(&v40 - 1) = UnityEngine_Color__get_white(0LL);
      HIDWORD(v124) = v121;
      v31 = 0;
      v32 = 0;
      LvExceedDewDropItemId = 0;
      v17 = (System_String_o *)StringLiteral_1/*""*/;
      Icon = 0LL;
LABEL_188:
      g = v40;
      v126 = __PAIR64__(v42, v41);
LABEL_204:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_278;
      v103 = v17;
      UILabel__set_text((UILabel_o *)iconSprite, v17, v20);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_278;
      *(_QWORD *)&v138.fields.b = v126;
      v138.fields.r = *((float *)&v124 + 1);
      v138.fields.g = g;
      UIWidget__set_color(iconSprite, v138, 0LL);
      extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
        goto LABEL_212;
      iconSprite = (UIWidget_o *)this->fields.extentionTextLabel;
      if ( !iconSprite )
        goto LABEL_278;
      UILabel__set_text((UILabel_o *)iconSprite, value, v105);
LABEL_212:
      v106 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
        return;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_278;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, iconKind != 56, 0LL);
      if ( LvExceedDewDropItemId < 1 )
      {
        if ( v31 )
        {
          v108 = this->fields.iconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventSprite(v108, Icon, 0LL);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v109 = this->fields.iconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCommon(v109, 0LL);
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_278;
        UISprite__set_spriteName((UISprite_o *)iconSprite, Icon, 0LL);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v107 = this->fields.iconSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetItem(v107, LvExceedDewDropItemId, 0LL);
      }
      if ( !(v32 & 1 | (Icon == 0LL)) )
      {
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_278;
        ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))iconSprite->klass->vtable._33_MakePixelPerfect.method)(
          iconSprite,
          iconSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_278;
      iconSprite = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)iconSprite, 0LL);
      if ( !this->fields.textLabel )
        goto LABEL_278;
      v110 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      iconSprite = (UIWidget_o *)UnityEngine_Object__op_Equality(v110, transform, 0LL);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        textLabel = this->fields.textLabel;
        if ( !textLabel )
          goto LABEL_278;
        if ( textLabel->fields.mShouldBeProcessed )
          UILabel__ProcessText_41767032(this->fields.textLabel, 0, 1, v112);
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_278;
        x = textLabel->fields.mCalculatedSize.fields.x;
        iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
        if ( !iconSprite )
          goto LABEL_278;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        iconSprite = (UIWidget_o *)System_String__op_Equality(v103, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v117 = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !v117 )
            goto LABEL_278;
          x = x - (float)v117->fields.mSpacingX;
        }
        else if ( !v117 )
        {
          goto LABEL_278;
        }
        mAlignment = v117->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v119 = (float)(x * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v120 = (float)-this->fields.blankSize;
            goto LABEL_261;
          }
          v119 = x + (float)this->fields.blankSize;
        }
        v120 = -v119;
LABEL_261:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
          if ( iconSprite )
          {
            v131.fields.x = v120;
            v131.fields.y = y;
            v131.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v131, 0LL);
            return;
          }
        }
LABEL_278:
        sub_B7769C(iconSprite, v19);
      }
      return;
    case 35:
      v90 = v129[0];
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon = Rarity__getIcon(v90, 0LL);
      goto LABEL_166;
    case 36:
      v92 = v128;
      v91 = v129[0];
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon = Rarity__getIcon_22637980(v91, v92, lv, 0LL);
      if ( v128 < 1 )
        goto LABEL_166;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      iconSprite = (UIWidget_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_278;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)iconSprite, v129[0], v128, 0, 0LL);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_278;
      if ( ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)iconSprite, v129[0], lv, RarityIcon, 0LL) > 2 )
        v31 = 1;
      else
LABEL_166:
        v31 = 0;
      v32 = 0;
      LvExceedDewDropItemId = 0;
      v17 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_204;
    case 38:
    case 39:
    case 40:
      if ( v129[0] < 1 )
      {
        if ( (v129[0] & 0x80000000) == 0 )
        {
LABEL_151:
          v31 = 0;
          v32 = 0;
          LvExceedDewDropItemId = 0;
          v17 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_180;
        }
        PriceInfo = System_Int32__ToString_39547236((int32_t)v129, (System_String_o *)StringLiteral_350/*"#,0"*/, 0LL);
      }
      else
      {
        v34 = System_Int32__ToString_39547236((int32_t)v129, (System_String_o *)StringLiteral_350/*"#,0"*/, 0LL);
        PriceInfo = System_String__Concat_44901936((System_String_o *)StringLiteral_706/*"+"*/, v34, 0LL);
      }
LABEL_178:
      v17 = PriceInfo;
LABEL_179:
      v31 = 0;
      v32 = 0;
      LvExceedDewDropItemId = 0;
LABEL_180:
      Icon = 0LL;
      goto LABEL_204;
    case 41:
    case 42:
    case 43:
      v36 = v129[0];
      v37 = System_Int32__ToString_39547236((int32_t)v129, (System_String_o *)StringLiteral_350/*"#,0"*/, 0LL);
      v38 = (System_String_o **)&StringLiteral_597/*"("*/;
      if ( v36 >= 0 )
        v38 = (System_String_o **)&StringLiteral_608/*"(+"*/;
      v17 = System_String__Concat_44904220(*v38, v37, (System_String_o *)StringLiteral_665/*")"*/, 0LL);
      if ( v129[0] <= v128 )
      {
        if ( v129[0] >= v128 )
LABEL_25:
          *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_white(0LL);
        else
          *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_red(0LL);
      }
      else
      {
        *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_cyan(0LL);
      }
LABEL_26:
      v31 = 0;
      v32 = 0;
      LvExceedDewDropItemId = 0;
LABEL_27:
      Icon = 0LL;
      goto LABEL_187;
    case 44:
    case 45:
      if ( (v129[0] & 0x80000000) != 0 )
        goto LABEL_151;
      if ( v128 < 1 )
        goto LABEL_179;
      v45 = System_Int32__ToString_39547236((int32_t)v129, (System_String_o *)StringLiteral_350/*"#,0"*/, 0LL);
      v46 = System_Int32__ToString_39547236((int32_t)&v128, (System_String_o *)StringLiteral_350/*"#,0"*/, 0LL);
      v17 = System_String__Concat_44904220(v45, (System_String_o *)StringLiteral_892/*"/"*/, v46, 0LL);
      goto LABEL_25;
    case 46:
      v52 = &StringLiteral_19906/*"img_list_hp"*/;
      goto LABEL_169;
    case 47:
      v52 = &StringLiteral_19901/*"img_list_atk"*/;
LABEL_169:
      Icon = (System_String_o *)*v52;
      v17 = System_Int32__ToString_39547236((int32_t)v129, (System_String_o *)StringLiteral_350/*"#,0"*/, 0LL);
      if ( (v127[0] & 0x80000000) != 0 )
      {
        v95 = System_Int32__ToString((int32_t)v127, 0LL);
      }
      else
      {
        v94 = System_Int32__ToString_39547236((int32_t)v127, (System_String_o *)StringLiteral_350/*"#,0"*/, 0LL);
        v95 = System_String__Concat_44901936((System_String_o *)StringLiteral_706/*"+"*/, v94, 0LL);
      }
      value = v95;
LABEL_202:
      v31 = 0;
      v32 = 0;
LABEL_203:
      LvExceedDewDropItemId = 0;
      goto LABEL_204;
    case 48:
      v31 = 0;
      v32 = 0;
      LvExceedDewDropItemId = 0;
      Icon = 0LL;
      if ( v129[0] <= 0 )
        v17 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_204;
    case 49:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      PriceInfo = LocalizationManager__GetDate(time, 0LL);
      goto LABEL_178;
    case 50:
      Icon = (System_String_o *)StringLiteral_19905/*"img_list_costume_num"*/;
      v96 = System_Int32__ToString((int32_t)v129, 0LL);
      goto LABEL_185;
    case 51:
      v53 = &StringLiteral_19913/*"img_list_release_num"*/;
      goto LABEL_183;
    case 52:
      v53 = &StringLiteral_19912/*"img_list_not_release_costume"*/;
      goto LABEL_183;
    case 53:
      v53 = &StringLiteral_19911/*"img_list_not_clear_cond"*/;
      goto LABEL_183;
    case 54:
      v53 = &StringLiteral_19907/*"img_list_limit_cnt"*/;
LABEL_183:
      Icon = (System_String_o *)*v53;
      v97 = System_Int32__ToString((int32_t)v129, 0LL);
      v98 = System_Int32__ToString((int32_t)&v128, 0LL);
      v99 = v97;
      goto LABEL_184;
    case 55:
      Icon = (System_String_o *)StringLiteral_20102/*"img_txt_fp"*/;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v100 = LocalizationManager__Get((System_String_o *)StringLiteral_6547/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0LL);
      v123 = v129[0];
      v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123, v101);
      v96 = System_String__Format(v100, v102, 0LL);
      goto LABEL_185;
    case 56:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = &StringLiteral_9511/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_65:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v54, 0LL);
      goto LABEL_178;
    default:
      v32 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_204;
  }
}


void __fastcall UIIconLabel__Set_41722060(
        UIIconLabel_o *this,
        IconLabelInfo_o *info,
        bool isHide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+8h] [xbp-8h]

  if ( info )
    UIIconLabel__Set_41716724(
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