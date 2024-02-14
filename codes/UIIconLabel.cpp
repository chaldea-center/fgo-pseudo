void __fastcall UIIconLabel___ctor(UIIconLabel_o *this, const MethodInfo *method)
{
  this->fields.blankSize = 2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UIIconLabel__Clear(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x20
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_421FA85 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_421FA85 = 1;
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
    UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, v7);
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
    sub_B0D97C(textLabel);
  }
}


int32_t __fastcall UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B0D97C(this);
  return textLabel->fields.mFontSize;
}


UnityEngine_Vector2_o __fastcall UIIconLabel__GetIconSize(UIIconLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  struct UISprite_o *v4; // x0
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o zero; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_421FA88 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421FA88 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v4 = this->fields.iconSprite;
    if ( !v4 )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v4->klass->vtable._22_get_localSize.method)(
      v4,
      v4->klass->vtable._23_get_drawingDimensions.methodPtr);
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
    sub_B0D97C(this);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void __fastcall UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+8h] [xbp-8h]

  if ( info )
    UIIconLabel__Set_41076120(
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

  if ( (byte_421FA89 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421FA89 = 1;
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
    sub_B0D97C(textLabel);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__SetCombineResTxt(
        UIIconLabel_o *this,
        int32_t data,
        int32_t adjustData,
        bool isLimit,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *NumberFormat; // x22
  System_String_o *v12; // x0
  System_String_o **v13; // x9
  bool v14; // zf
  UILabel_o *textLabel; // x19
  System_String_o *v16; // x21
  Il2CppObject *v17; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  const MethodInfo *v20; // x2

  if ( (byte_421FA87 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&data);
    sub_B0D8A4(&StringLiteral_3209/*"COMBINE_RES_INFO"*/, v9);
    sub_B0D8A4(&StringLiteral_3199/*"COMBINE_LIMIT_INFO"*/, v10);
    byte_421FA87 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0LL);
  v12 = LocalizationManager__GetNumberFormat(adjustData, 0LL);
  v13 = (System_String_o **)&StringLiteral_3199/*"COMBINE_LIMIT_INFO"*/;
  v14 = !isLimit;
  textLabel = this->fields.textLabel;
  if ( v14 )
    v13 = (System_String_o **)&StringLiteral_3209/*"COMBINE_RES_INFO"*/;
  v16 = *v13;
  v17 = (Il2CppObject *)v12;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get(v16, 0LL);
  v19 = System_String__Format_43845440(v18, NumberFormat, v17, 0LL);
  if ( !textLabel )
    sub_B0D97C(v19);
  UILabel__set_text(textLabel, v19, v20);
}


void __fastcall UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+8h] [xbp-8h]

  UIIconLabel__Set_41076120(this, 27, 0, 0, 0, 0LL, 1, 0, 0, v2);
}


void __fastcall UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+8h] [xbp-8h]

  UIIconLabel__Set_41076120(this, iconKind, price, holdCount, 0, 0LL, 0, 0, 0, v5);
}


void __fastcall UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B0D97C(0LL);
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
    sub_B0D97C(textLabel);
  }
  UIWidget__set_height(textLabel, m_Y, 0LL);
}


void __fastcall UIIconLabel__SetTextLabelStrikeout(UIIconLabel_o *this, const MethodInfo *method)
{
  UIIconLabel_o *v2; // x19
  __int64 v3; // x1
  UILabel_o *textLabel; // x19
  System_String_o *v5; // x1
  const MethodInfo *v6; // x2

  v2 = this;
  if ( (byte_421FA8A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15702/*"[/s]"*/, method);
    this = (UIIconLabel_o *)sub_B0D8A4(&StringLiteral_15860/*"[s]"*/, v3);
    byte_421FA8A = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    sub_B0D97C(this);
  v5 = System_String__Concat_43852188(
         (System_String_o *)StringLiteral_15860/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_15702/*"[/s]"*/,
         0LL);
  UILabel__set_text(textLabel, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__Set_41076120(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  System_String_o *v62; // x21
  System_String_o *NumberFormat_32897236; // x0
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x3
  int v66; // s0
  float v67; // s1
  unsigned int v68; // s2
  unsigned int v69; // s3
  float v70; // s4
  float v71; // s5
  float v72; // s6
  float v73; // s7
  System_String_o *Icon; // x23
  int v75; // w24
  char v76; // w22
  int32_t LvExceedDewDropItemId; // w28
  System_String_o *v78; // x0
  System_String_o *PriceInfo; // x0
  int v80; // w22
  System_String_o *v81; // x0
  System_String_o **v82; // x8
  int v83; // s0
  float v84; // s1
  unsigned int v85; // s2
  unsigned int v86; // s3
  __int64 *v87; // x8
  const MethodInfo *v88; // x3
  System_String_o *v89; // x22
  System_String_o *v90; // x0
  const MethodInfo *v91; // x3
  int v92; // s1
  int v93; // s2
  int v94; // s0
  float v95; // s3
  __int64 *v96; // x8
  __int64 *v97; // x8
  __int64 *v98; // x8
  __int64 *v99; // x8
  System_String_o *v100; // x0
  System_String_o *v101; // x22
  System_String_o *v102; // x0
  __int64 *v103; // x8
  System_String_o *v104; // x23
  Il2CppObject *v105; // x0
  System_String_o *v106; // x23
  Il2CppObject *v107; // x0
  int32_t v108; // w22
  System_String_o *v109; // x23
  Il2CppObject *v110; // x0
  System_String_o *v111; // x23
  Il2CppObject *v112; // x0
  System_String_o *v113; // x23
  Il2CppObject *v114; // x0
  System_String_o *v115; // x23
  Il2CppObject *v116; // x0
  System_String_o *v117; // x23
  Il2CppObject *v118; // x0
  const MethodInfo *v119; // x3
  const MethodInfo *v120; // x3
  const MethodInfo *v121; // x3
  const MethodInfo *v122; // x3
  const MethodInfo *v123; // x3
  BalanceConfig_c *v124; // x0
  const MethodInfo *v125; // x3
  UIWidget_o *iconSprite; // x0
  int32_t v127; // w1
  System_String_o *v128; // x22
  System_String_o *v129; // x0
  int v130; // s0
  float v131; // s1
  unsigned int v132; // s2
  unsigned int v133; // s3
  int32_t v134; // w22
  int32_t v135; // w23
  int32_t v136; // w24
  int32_t RarityIcon; // w24
  System_String_o *v138; // x0
  System_String_o *v139; // x0
  System_String_o *v140; // x0
  System_String_o *v141; // x22
  System_String_o *v142; // x2
  System_String_o *v143; // x0
  System_String_o *v144; // x22
  Il2CppObject *v145; // x0
  System_String_o *v146; // x27
  UnityEngine_Object_o *extentionTextLabel; // x25
  const MethodInfo *v148; // x2
  UnityEngine_Object_o *v149; // x21
  UISprite_o *v150; // x20
  UISprite_o *v151; // x20
  UISprite_o *v152; // x20
  UnityEngine_Object_o *v153; // x20
  UnityEngine_Object_o *transform; // x21
  const MethodInfo *v155; // x3
  struct UILabel_o *textLabel; // x20
  float x; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *v160; // x8
  int32_t mAlignment; // w8
  float v162; // s0
  float v163; // s10
  int v164; // s0
  System_String_o *value; // [xsp+8h] [xbp-98h]
  int32_t v166; // [xsp+10h] [xbp-90h] BYREF
  __int64 v167; // [xsp+14h] [xbp-8Ch] BYREF
  float g; // [xsp+1Ch] [xbp-84h]
  unsigned __int64 v169; // [xsp+20h] [xbp-80h]
  _DWORD v170[3]; // [xsp+2Ch] [xbp-74h] BYREF
  int32_t v171; // [xsp+38h] [xbp-68h] BYREF
  int32_t v172[13]; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v174; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v175; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o PurchaseDecisionColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v177; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v178; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v179; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v180; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v181; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v171 = adjustData;
  v172[0] = data;
  v170[0] = equipData;
  if ( (byte_421FA86 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&iconKind);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantExceedMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v19);
    sub_B0D8A4(&DataManager_TypeInfo, v20);
    sub_B0D8A4(&int_TypeInfo, v21);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v22);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v23);
    sub_B0D8A4(&Rarity_TypeInfo, v24);
    sub_B0D8A4(&StringLiteral_19567/*"img_list_atk"*/, v25);
    sub_B0D8A4(&StringLiteral_5659/*"EVENT_ITEM_UNIT"*/, v26);
    sub_B0D8A4(&StringLiteral_10909/*"QP_UNIT"*/, v27);
    sub_B0D8A4(&StringLiteral_697/*"+"*/, v28);
    sub_B0D8A4(&StringLiteral_19577/*"img_list_not_clear_cond"*/, v29);
    sub_B0D8A4(&StringLiteral_9364/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/, v30);
    sub_B0D8A4(&StringLiteral_12416/*"STONE_FRAGMENTS_UNIT"*/, v31);
    sub_B0D8A4(&StringLiteral_6472/*"FRIENDSHIP_UNIT"*/, v32);
    sub_B0D8A4(&StringLiteral_6416/*"FOLLOWER_SELECT_TYPE_POINT"*/, v33);
    sub_B0D8A4(&StringLiteral_19728/*"img_txt_bondslevel"*/, v34);
    sub_B0D8A4(&StringLiteral_19570/*"img_list_cost"*/, v35);
    sub_B0D8A4(&StringLiteral_19578/*"img_list_not_release_costume"*/, v36);
    sub_B0D8A4(&StringLiteral_19573/*"img_list_limit_cnt"*/, v37);
    sub_B0D8A4(&StringLiteral_19413/*"icon_nplv"*/, v38);
    sub_B0D8A4(&StringLiteral_1530/*"?"*/, v39);
    sub_B0D8A4(&StringLiteral_19575/*"img_list_lv"*/, v40);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v41);
    sub_B0D8A4(&StringLiteral_8643/*"MANA_UNIT"*/, v42);
    sub_B0D8A4(&StringLiteral_345/*"#,0"*/, v43);
    sub_B0D8A4(&StringLiteral_19572/*"img_list_hp"*/, v44);
    sub_B0D8A4(&StringLiteral_19571/*"img_list_costume_num"*/, v45);
    sub_B0D8A4(&StringLiteral_591/*"("*/, v46);
    sub_B0D8A4(&StringLiteral_1688/*"ANONYMOUS_UNIT"*/, v47);
    sub_B0D8A4(&StringLiteral_19761/*"img_txt_fp"*/, v48);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v49);
    sub_B0D8A4(&StringLiteral_12434/*"STONE_UNIT"*/, v50);
    sub_B0D8A4(&StringLiteral_1535/*"??/??"*/, v51);
    sub_B0D8A4(&StringLiteral_602/*"(+"*/, v52);
    sub_B0D8A4(&StringLiteral_1/*""*/, v53);
    sub_B0D8A4(&StringLiteral_6468/*"FREE_NAME"*/, v54);
    sub_B0D8A4(&StringLiteral_1534/*"??"*/, v55);
    sub_B0D8A4(&StringLiteral_19579/*"img_list_release_num"*/, v56);
    sub_B0D8A4(&StringLiteral_19602/*"img_nplv"*/, v57);
    sub_B0D8A4(&StringLiteral_11040/*"RARE_PRI_UNIT"*/, v58);
    sub_B0D8A4(&StringLiteral_19574/*"img_list_limitcount"*/, v59);
    sub_B0D8A4(&StringLiteral_1536/*"???"*/, v60);
    sub_B0D8A4(&StringLiteral_19576/*"img_list_no"*/, v61);
    byte_421FA86 = 1;
  }
  g = 0.0;
  v169 = 0LL;
  v167 = (unsigned int)(equipData + data);
  v62 = System_Int32__ToString((int32_t)&v167, 0LL);
  value = (System_String_o *)StringLiteral_1/*""*/;
  if ( v171 <= 0 )
    *(UnityEngine_Color_o *)&v66 = UnityEngine_Color__get_white(0LL);
  else
    *(UnityEngine_Color_o *)&v66 = UnityEngine_Color__get_yellow(0LL);
  Icon = 0LL;
  v75 = 0;
  HIDWORD(v167) = v66;
  g = v67;
  v169 = __PAIR64__(v69, v68);
  v76 = 0;
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
      if ( v172[0] < 1 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19575/*"img_list_lv"*/;
      if ( v171 < 1 )
      {
        v75 = 0;
        v76 = 0;
        LvExceedDewDropItemId = 0;
        if ( isHide )
          v62 = (System_String_o *)StringLiteral_1534/*"??"*/;
        goto LABEL_204;
      }
      if ( isHide )
      {
        v62 = (System_String_o *)StringLiteral_1535/*"??/??"*/;
      }
      else
      {
        v62 = System_Int32__ToString((int32_t)v172, 0LL);
        if ( !isMaxHide )
        {
          v142 = System_Int32__ToString((int32_t)&v171, 0LL);
          v143 = v62;
LABEL_184:
          v140 = System_String__Concat_43852188(v143, (System_String_o *)StringLiteral_879/*"/"*/, v142, 0LL);
LABEL_185:
          v62 = v140;
        }
      }
      *(UnityEngine_Color_o *)&v83 = UnityEngine_Color__get_white(0LL);
      v75 = 0;
      v76 = 0;
      LvExceedDewDropItemId = 0;
LABEL_187:
      HIDWORD(v167) = v83;
      goto LABEL_188;
    case 3:
      v99 = &StringLiteral_19572/*"img_list_hp"*/;
      goto LABEL_53;
    case 5:
      v99 = &StringLiteral_19567/*"img_list_atk"*/;
LABEL_53:
      Icon = (System_String_o *)*v99;
      LODWORD(v167) = v170[0] + v172[0];
      v100 = System_Int32__ToString_38473032((int32_t)&v167, (System_String_o *)StringLiteral_345/*"#,0"*/, 0LL);
      v75 = 0;
      v76 = 0;
      LvExceedDewDropItemId = 0;
      if ( isHide )
        v62 = (System_String_o *)StringLiteral_1536/*"???"*/;
      else
        v62 = v100;
      goto LABEL_204;
    case 7:
      Icon = (System_String_o *)StringLiteral_19570/*"img_list_cost"*/;
      if ( v170[0] >= 1 )
      {
        v101 = System_Int32__ToString((int32_t)v172, 0LL);
        v102 = System_Int32__ToString((int32_t)v170, 0LL);
        v62 = System_String__Concat_43852188(v101, (System_String_o *)StringLiteral_697/*"+"*/, v102, 0LL);
      }
      goto LABEL_202;
    case 8:
    case 57:
      v87 = &StringLiteral_19576/*"img_list_no"*/;
      goto LABEL_60;
    case 9:
      if ( v172[0] < 1 )
        goto LABEL_151;
      v87 = &StringLiteral_19574/*"img_list_limitcount"*/;
LABEL_60:
      v75 = 0;
      v76 = 0;
      Icon = (System_String_o *)*v87;
      goto LABEL_203;
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v98 = &StringLiteral_6468/*"FREE_NAME"*/;
      goto LABEL_65;
    case 11:
    case 27:
      if ( isHide )
      {
        v62 = (System_String_o *)StringLiteral_1530/*"?"*/;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        NumberFormat_32897236 = LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
        v62 = NumberFormat_32897236;
      }
      *(UnityEngine_Color_o *)&v130 = UIIconLabel__GetPurchaseDecisionColor(
                                        (UIIconLabel_o *)NumberFormat_32897236,
                                        v172[0],
                                        v171,
                                        v65);
      v75 = 0;
      LvExceedDewDropItemId = 0;
      Icon = 0LL;
      goto LABEL_198;
    case 12:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v103 = &StringLiteral_12434/*"STONE_UNIT"*/;
      goto LABEL_98;
    case 13:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_8643/*"MANA_UNIT"*/, 0LL);
      v105 = (Il2CppObject *)LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      v62 = System_String__Format(v104, v105, 0LL);
      v75 = 0;
      Icon = 0LL;
      goto LABEL_117;
    case 14:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v106 = LocalizationManager__Get((System_String_o *)StringLiteral_10909/*"QP_UNIT"*/, 0LL);
      v107 = (Il2CppObject *)LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      v62 = System_String__Format(v106, v107, 0LL);
      v75 = 0;
      Icon = 0LL;
      goto LABEL_122;
    case 15:
      v108 = v172[0];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      PriceInfo = LocalizationManager__GetPriceInfo(v108, 0LL);
      goto LABEL_178;
    case 16:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v109 = LocalizationManager__Get((System_String_o *)StringLiteral_6472/*"FRIENDSHIP_UNIT"*/, 0LL);
      v110 = (Il2CppObject *)LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      PriceInfo = System_String__Format(v109, v110, 0LL);
      goto LABEL_178;
    case 17:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      PriceInfo = LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      goto LABEL_178;
    case 18:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v111 = LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_ITEM_UNIT"*/, 0LL);
      v112 = (Il2CppObject *)LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      v62 = System_String__Format(v111, v112, 0LL);
      v75 = 0;
      LvExceedDewDropItemId = 0;
      Icon = 0LL;
      goto LABEL_199;
    case 19:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v103 = &StringLiteral_12416/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_98:
      v113 = LocalizationManager__Get((System_String_o *)*v103, 0LL);
      v114 = (Il2CppObject *)LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      v62 = System_String__Format(v113, v114, 0LL);
      v75 = 0;
      Icon = 0LL;
      goto LABEL_112;
    case 20:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v115 = LocalizationManager__Get((System_String_o *)StringLiteral_1688/*"ANONYMOUS_UNIT"*/, 0LL);
      v116 = (Il2CppObject *)LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      v62 = System_String__Format(v115, v116, 0LL);
      v75 = 0;
      Icon = 0LL;
      goto LABEL_103;
    case 21:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v117 = LocalizationManager__Get((System_String_o *)StringLiteral_11040/*"RARE_PRI_UNIT"*/, 0LL);
      v118 = (Il2CppObject *)LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      v62 = System_String__Format(v117, v118, 0LL);
      v75 = 0;
      Icon = 0LL;
      goto LABEL_131;
    case 22:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      PurchaseDecisionColor = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v172[0], v171, v119);
      v75 = 0;
      Icon = 0LL;
      HIDWORD(v167) = LODWORD(PurchaseDecisionColor.fields.r);
      g = PurchaseDecisionColor.fields.g;
      v169 = *(_QWORD *)&PurchaseDecisionColor.fields.b;
LABEL_112:
      LvExceedDewDropItemId = 6;
      goto LABEL_199;
    case 23:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      v177 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v172[0], v171, v120);
      v75 = 0;
      Icon = 0LL;
      HIDWORD(v167) = LODWORD(v177.fields.r);
      g = v177.fields.g;
      v169 = *(_QWORD *)&v177.fields.b;
LABEL_117:
      LvExceedDewDropItemId = 7;
      goto LABEL_199;
    case 24:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      v178 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v172[0], v171, v121);
      v75 = 0;
      Icon = 0LL;
      HIDWORD(v167) = LODWORD(v178.fields.r);
      g = v178.fields.g;
      v169 = *(_QWORD *)&v178.fields.b;
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
      v62 = LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      *(UnityEngine_Color_o *)&v83 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v172[0], v171, v88);
      goto LABEL_26;
    case 28:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      v179 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v172[0], v171, v122);
      v75 = 0;
      Icon = 0LL;
      HIDWORD(v167) = LODWORD(v179.fields.r);
      g = v179.fields.g;
      v169 = *(_QWORD *)&v179.fields.b;
      LvExceedDewDropItemId = 16;
      goto LABEL_199;
    case 29:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      v175 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v172[0], v171, v91);
      v75 = 0;
      Icon = 0LL;
      HIDWORD(v167) = LODWORD(v175.fields.r);
      g = v175.fields.g;
      v169 = *(_QWORD *)&v175.fields.b;
LABEL_103:
      LvExceedDewDropItemId = 17;
      goto LABEL_199;
    case 30:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      v180 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v172[0], v171, v123);
      v75 = 0;
      Icon = 0LL;
      HIDWORD(v167) = LODWORD(v180.fields.r);
      g = v180.fields.g;
      v169 = *(_QWORD *)&v180.fields.b;
LABEL_131:
      LvExceedDewDropItemId = 18;
      goto LABEL_199;
    case 31:
      v124 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v124 = BalanceConfig_TypeInfo;
      }
      LvExceedDewDropItemId = v124->static_fields->LvExceedDewDropItemId;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_32897236(v62, 0LL);
      *(UnityEngine_Color_o *)&v83 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v172[0], v171, v125);
      v75 = 0;
      v76 = 0;
      goto LABEL_27;
    case 32:
      if ( (v172[0] & 0x80000000) != 0 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19728/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_19728/*"img_txt_bondslevel"*/ )
        goto LABEL_149;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      v127 = 40;
      goto LABEL_147;
    case 33:
      if ( v172[0] < 1 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19602/*"img_nplv"*/;
      if ( !StringLiteral_19602/*"img_nplv"*/ )
        goto LABEL_149;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      v127 = 55;
LABEL_147:
      UIWidget__set_width(iconSprite, v127, 0LL);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      UIWidget__set_height(iconSprite, 18, 0LL);
LABEL_149:
      if ( v171 < 1 )
      {
        v75 = 0;
        LvExceedDewDropItemId = 0;
      }
      else
      {
        v128 = System_Int32__ToString((int32_t)v172, 0LL);
        v129 = System_Int32__ToString((int32_t)&v171, 0LL);
        v62 = System_String__Concat_43852188(v128, (System_String_o *)StringLiteral_879/*"/"*/, v129, 0LL);
        *(UnityEngine_Color_o *)&v130 = UnityEngine_Color__get_white(0LL);
        v75 = 0;
        LvExceedDewDropItemId = 0;
LABEL_198:
        HIDWORD(v167) = v130;
        g = v131;
        v169 = __PAIR64__(v133, v132);
      }
LABEL_199:
      v76 = 1;
      goto LABEL_204;
    case 34:
      if ( v172[0] >= 1 )
      {
        if ( v171 )
        {
          if ( (unsigned int)(v171 - 1) <= 0x61 )
          {
            v94 = 1065155837;
            v92 = 1064366321;
            v93 = 1050714273;
            v95 = 1.0;
            goto LABEL_274;
          }
          if ( v171 == 99 )
          {
            v92 = 1055319783;
            v93 = 1030811889;
            v94 = 1.0;
            v95 = 1.0;
LABEL_274:
            UnityEngine_Color___ctor(
              *(UnityEngine_Color_o *)&v94,
              v70,
              v71,
              v72,
              v73,
              (const MethodInfo *)((char *)&v167 + 4));
          }
        }
        else
        {
          white = UnityEngine_Color__get_white(0LL);
          HIDWORD(v167) = LODWORD(white.fields.r);
          g = white.fields.g;
          v169 = *(_QWORD *)&white.fields.b;
        }
        v75 = 0;
        LvExceedDewDropItemId = 0;
        v76 = 1;
        Icon = (System_String_o *)StringLiteral_19413/*"icon_nplv"*/;
        goto LABEL_204;
      }
      *(UnityEngine_Color_o *)(&v84 - 1) = UnityEngine_Color__get_white(0LL);
      HIDWORD(v167) = v164;
      v75 = 0;
      v76 = 0;
      LvExceedDewDropItemId = 0;
      v62 = (System_String_o *)StringLiteral_1/*""*/;
      Icon = 0LL;
LABEL_188:
      g = v84;
      v169 = __PAIR64__(v86, v85);
LABEL_204:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_278;
      v146 = v62;
      UILabel__set_text((UILabel_o *)iconSprite, v62, v64);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_278;
      *(_QWORD *)&v181.fields.b = v169;
      v181.fields.r = *((float *)&v167 + 1);
      v181.fields.g = g;
      UIWidget__set_color(iconSprite, v181, 0LL);
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
      UILabel__set_text((UILabel_o *)iconSprite, value, v148);
LABEL_212:
      v149 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v149, 0LL, 0LL) )
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
        if ( v75 )
        {
          v151 = this->fields.iconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventSprite(v151, Icon, 0LL);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v152 = this->fields.iconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCommon(v152, 0LL);
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_278;
        UISprite__set_spriteName((UISprite_o *)iconSprite, Icon, 0LL);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v150 = this->fields.iconSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetItem(v150, LvExceedDewDropItemId, 0LL);
      }
      if ( !(v76 & 1 | (Icon == 0LL)) )
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
      v153 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      iconSprite = (UIWidget_o *)UnityEngine_Object__op_Equality(v153, transform, 0LL);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        textLabel = this->fields.textLabel;
        if ( !textLabel )
          goto LABEL_278;
        if ( textLabel->fields.mShouldBeProcessed )
          UILabel__ProcessText_41126388(this->fields.textLabel, 0, 1, v155);
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
        iconSprite = (UIWidget_o *)System_String__op_Equality(v146, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v160 = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !v160 )
            goto LABEL_278;
          x = x - (float)v160->fields.mSpacingX;
        }
        else if ( !v160 )
        {
          goto LABEL_278;
        }
        mAlignment = v160->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v162 = (float)(x * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v163 = (float)-this->fields.blankSize;
            goto LABEL_261;
          }
          v162 = x + (float)this->fields.blankSize;
        }
        v163 = -v162;
LABEL_261:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
          if ( iconSprite )
          {
            v174.fields.x = v163;
            v174.fields.y = y;
            v174.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v174, 0LL);
            return;
          }
        }
LABEL_278:
        sub_B0D97C(iconSprite);
      }
      return;
    case 35:
      v134 = v172[0];
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon = Rarity__getIcon(v134, 0LL);
      goto LABEL_166;
    case 36:
      v136 = v171;
      v135 = v172[0];
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon = Rarity__getIcon_21504332(v135, v136, lv, 0LL);
      if ( v171 < 1 )
        goto LABEL_166;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      iconSprite = (UIWidget_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_278;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)iconSprite, v172[0], v171, 0, 0LL);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_278;
      if ( ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)iconSprite, v172[0], lv, RarityIcon, 0LL) > 2 )
        v75 = 1;
      else
LABEL_166:
        v75 = 0;
      v76 = 0;
      LvExceedDewDropItemId = 0;
      v62 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_204;
    case 38:
    case 39:
    case 40:
      if ( v172[0] < 1 )
      {
        if ( (v172[0] & 0x80000000) == 0 )
        {
LABEL_151:
          v75 = 0;
          v76 = 0;
          LvExceedDewDropItemId = 0;
          v62 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_180;
        }
        PriceInfo = System_Int32__ToString_38473032((int32_t)v172, (System_String_o *)StringLiteral_345/*"#,0"*/, 0LL);
      }
      else
      {
        v78 = System_Int32__ToString_38473032((int32_t)v172, (System_String_o *)StringLiteral_345/*"#,0"*/, 0LL);
        PriceInfo = System_String__Concat_43849904((System_String_o *)StringLiteral_697/*"+"*/, v78, 0LL);
      }
LABEL_178:
      v62 = PriceInfo;
LABEL_179:
      v75 = 0;
      v76 = 0;
      LvExceedDewDropItemId = 0;
LABEL_180:
      Icon = 0LL;
      goto LABEL_204;
    case 41:
    case 42:
    case 43:
      v80 = v172[0];
      v81 = System_Int32__ToString_38473032((int32_t)v172, (System_String_o *)StringLiteral_345/*"#,0"*/, 0LL);
      v82 = (System_String_o **)&StringLiteral_591/*"("*/;
      if ( v80 >= 0 )
        v82 = (System_String_o **)&StringLiteral_602/*"(+"*/;
      v62 = System_String__Concat_43852188(*v82, v81, (System_String_o *)StringLiteral_658/*")"*/, 0LL);
      if ( v172[0] <= v171 )
      {
        if ( v172[0] >= v171 )
LABEL_25:
          *(UnityEngine_Color_o *)&v83 = UnityEngine_Color__get_white(0LL);
        else
          *(UnityEngine_Color_o *)&v83 = UnityEngine_Color__get_red(0LL);
      }
      else
      {
        *(UnityEngine_Color_o *)&v83 = UnityEngine_Color__get_cyan(0LL);
      }
LABEL_26:
      v75 = 0;
      v76 = 0;
      LvExceedDewDropItemId = 0;
LABEL_27:
      Icon = 0LL;
      goto LABEL_187;
    case 44:
    case 45:
      if ( (v172[0] & 0x80000000) != 0 )
        goto LABEL_151;
      if ( v171 < 1 )
        goto LABEL_179;
      v89 = System_Int32__ToString_38473032((int32_t)v172, (System_String_o *)StringLiteral_345/*"#,0"*/, 0LL);
      v90 = System_Int32__ToString_38473032((int32_t)&v171, (System_String_o *)StringLiteral_345/*"#,0"*/, 0LL);
      v62 = System_String__Concat_43852188(v89, (System_String_o *)StringLiteral_879/*"/"*/, v90, 0LL);
      goto LABEL_25;
    case 46:
      v96 = &StringLiteral_19572/*"img_list_hp"*/;
      goto LABEL_169;
    case 47:
      v96 = &StringLiteral_19567/*"img_list_atk"*/;
LABEL_169:
      Icon = (System_String_o *)*v96;
      v62 = System_Int32__ToString_38473032((int32_t)v172, (System_String_o *)StringLiteral_345/*"#,0"*/, 0LL);
      if ( (v170[0] & 0x80000000) != 0 )
      {
        v139 = System_Int32__ToString((int32_t)v170, 0LL);
      }
      else
      {
        v138 = System_Int32__ToString_38473032((int32_t)v170, (System_String_o *)StringLiteral_345/*"#,0"*/, 0LL);
        v139 = System_String__Concat_43849904((System_String_o *)StringLiteral_697/*"+"*/, v138, 0LL);
      }
      value = v139;
LABEL_202:
      v75 = 0;
      v76 = 0;
LABEL_203:
      LvExceedDewDropItemId = 0;
      goto LABEL_204;
    case 48:
      v75 = 0;
      v76 = 0;
      LvExceedDewDropItemId = 0;
      Icon = 0LL;
      if ( v172[0] <= 0 )
        v62 = (System_String_o *)StringLiteral_1/*""*/;
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
      Icon = (System_String_o *)StringLiteral_19571/*"img_list_costume_num"*/;
      v140 = System_Int32__ToString((int32_t)v172, 0LL);
      goto LABEL_185;
    case 51:
      v97 = &StringLiteral_19579/*"img_list_release_num"*/;
      goto LABEL_183;
    case 52:
      v97 = &StringLiteral_19578/*"img_list_not_release_costume"*/;
      goto LABEL_183;
    case 53:
      v97 = &StringLiteral_19577/*"img_list_not_clear_cond"*/;
      goto LABEL_183;
    case 54:
      v97 = &StringLiteral_19573/*"img_list_limit_cnt"*/;
LABEL_183:
      Icon = (System_String_o *)*v97;
      v141 = System_Int32__ToString((int32_t)v172, 0LL);
      v142 = System_Int32__ToString((int32_t)&v171, 0LL);
      v143 = v141;
      goto LABEL_184;
    case 55:
      Icon = (System_String_o *)StringLiteral_19761/*"img_txt_fp"*/;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v144 = LocalizationManager__Get((System_String_o *)StringLiteral_6416/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0LL);
      v166 = v172[0];
      v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v166);
      v140 = System_String__Format(v144, v145, 0LL);
      goto LABEL_185;
    case 56:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v98 = &StringLiteral_9364/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_65:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v98, 0LL);
      goto LABEL_178;
    default:
      v76 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_204;
  }
}


void __fastcall UIIconLabel__Set_41081456(
        UIIconLabel_o *this,
        IconLabelInfo_o *info,
        bool isHide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+8h] [xbp-8h]

  if ( info )
    UIIconLabel__Set_41076120(
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