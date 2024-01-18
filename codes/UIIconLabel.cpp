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

  if ( (byte_419293B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_419293B = 1;
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
    sub_B2C434(textLabel, method);
  }
}


int32_t __fastcall UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B2C434(this, method);
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

  if ( (byte_419293E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_419293E = 1;
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
      sub_B2C434(0LL, v4);
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
    sub_B2C434(this, method);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void __fastcall UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+8h] [xbp-8h]

  if ( info )
    UIIconLabel__Set_41609428(
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

  if ( (byte_419293F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_419293F = 1;
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
    sub_B2C434(textLabel, method);
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
  __int64 v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_419293D & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&data);
    sub_B2C35C(&StringLiteral_3197/*"COMBINE_RES_INFO"*/, v9);
    sub_B2C35C(&StringLiteral_3187/*"COMBINE_LIMIT_INFO"*/, v10);
    byte_419293D = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0LL);
  v12 = LocalizationManager__GetNumberFormat(adjustData, 0LL);
  v13 = (System_String_o **)&StringLiteral_3187/*"COMBINE_LIMIT_INFO"*/;
  v14 = !isLimit;
  textLabel = this->fields.textLabel;
  if ( v14 )
    v13 = (System_String_o **)&StringLiteral_3197/*"COMBINE_RES_INFO"*/;
  v16 = *v13;
  v17 = (Il2CppObject *)v12;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get(v16, 0LL);
  v19 = System_String__Format_44301068(v18, NumberFormat, v17, 0LL);
  if ( !textLabel )
    sub_B2C434(v19, v20);
  UILabel__set_text(textLabel, v19, v21);
}


void __fastcall UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+8h] [xbp-8h]

  UIIconLabel__Set_41609428(this, 27, 0, 0, 0, 0LL, 1, 0, 0, v2);
}


void __fastcall UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+8h] [xbp-8h]

  UIIconLabel__Set_41609428(this, iconKind, price, holdCount, 0, 0LL, 0, 0, 0, v5);
}


void __fastcall UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B2C434(0LL, method);
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
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(textLabel, size);
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
  if ( (byte_4192940 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15655/*"[/s]"*/, method);
    this = (UIIconLabel_o *)sub_B2C35C(&StringLiteral_15813/*"[s]"*/, v3);
    byte_4192940 = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    sub_B2C434(this, method);
  v5 = System_String__Concat_44307816(
         (System_String_o *)StringLiteral_15813/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_15655/*"[/s]"*/,
         0LL);
  UILabel__set_text(textLabel, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__Set_41609428(
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
  System_String_o *NumberFormat_33986032; // x0
  __int64 v64; // x1
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x3
  int v67; // s0
  float v68; // s1
  unsigned int v69; // s2
  unsigned int v70; // s3
  float v71; // s4
  float v72; // s5
  float v73; // s6
  float v74; // s7
  System_String_o *Icon; // x23
  int v76; // w24
  char v77; // w22
  int32_t LvExceedDewDropItemId; // w28
  System_String_o *v79; // x0
  System_String_o *PriceInfo; // x0
  int v81; // w22
  System_String_o *v82; // x0
  System_String_o **v83; // x8
  int v84; // s0
  float v85; // s1
  unsigned int v86; // s2
  unsigned int v87; // s3
  __int64 *v88; // x8
  const MethodInfo *v89; // x3
  System_String_o *v90; // x22
  System_String_o *v91; // x0
  const MethodInfo *v92; // x3
  int v93; // s1
  int v94; // s2
  int v95; // s0
  float v96; // s3
  __int64 *v97; // x8
  __int64 *v98; // x8
  __int64 *v99; // x8
  __int64 *v100; // x8
  System_String_o *v101; // x0
  System_String_o *v102; // x22
  System_String_o *v103; // x0
  __int64 *v104; // x8
  System_String_o *v105; // x23
  Il2CppObject *v106; // x0
  System_String_o *v107; // x23
  Il2CppObject *v108; // x0
  int32_t v109; // w22
  System_String_o *v110; // x23
  Il2CppObject *v111; // x0
  System_String_o *v112; // x23
  Il2CppObject *v113; // x0
  System_String_o *v114; // x23
  Il2CppObject *v115; // x0
  System_String_o *v116; // x23
  Il2CppObject *v117; // x0
  System_String_o *v118; // x23
  Il2CppObject *v119; // x0
  const MethodInfo *v120; // x3
  const MethodInfo *v121; // x3
  const MethodInfo *v122; // x3
  const MethodInfo *v123; // x3
  const MethodInfo *v124; // x3
  BalanceConfig_c *v125; // x0
  const MethodInfo *v126; // x3
  UIWidget_o *iconSprite; // x0
  int32_t v128; // w1
  System_String_o *v129; // x22
  System_String_o *v130; // x0
  int v131; // s0
  float v132; // s1
  unsigned int v133; // s2
  unsigned int v134; // s3
  int32_t v135; // w22
  int32_t v136; // w23
  int32_t v137; // w24
  int32_t RarityIcon; // w24
  System_String_o *v139; // x0
  System_String_o *v140; // x0
  System_String_o *v141; // x0
  System_String_o *v142; // x22
  System_String_o *v143; // x2
  System_String_o *v144; // x0
  System_String_o *v145; // x22
  Il2CppObject *v146; // x0
  System_String_o *v147; // x27
  UnityEngine_Object_o *extentionTextLabel; // x25
  const MethodInfo *v149; // x2
  UnityEngine_Object_o *v150; // x21
  UISprite_o *v151; // x20
  UISprite_o *v152; // x20
  UISprite_o *v153; // x20
  UnityEngine_Object_o *v154; // x20
  UnityEngine_Object_o *transform; // x21
  const MethodInfo *v156; // x3
  struct UILabel_o *textLabel; // x20
  float x; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *v161; // x8
  int32_t mAlignment; // w8
  float v163; // s0
  float v164; // s10
  int v165; // s0
  System_String_o *value; // [xsp+8h] [xbp-98h]
  int32_t v167; // [xsp+10h] [xbp-90h] BYREF
  __int64 v168; // [xsp+14h] [xbp-8Ch] BYREF
  float g; // [xsp+1Ch] [xbp-84h]
  unsigned __int64 v170; // [xsp+20h] [xbp-80h]
  _DWORD v171[3]; // [xsp+2Ch] [xbp-74h] BYREF
  int32_t v172; // [xsp+38h] [xbp-68h] BYREF
  int32_t v173[13]; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v175; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v176; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o PurchaseDecisionColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v178; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v179; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v180; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v181; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v182; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v172 = adjustData;
  v173[0] = data;
  v171[0] = equipData;
  if ( (byte_419293C & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&iconKind);
    sub_B2C35C(&BalanceConfig_TypeInfo, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v19);
    sub_B2C35C(&DataManager_TypeInfo, v20);
    sub_B2C35C(&int_TypeInfo, v21);
    sub_B2C35C(&LocalizationManager_TypeInfo, v22);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v23);
    sub_B2C35C(&Rarity_TypeInfo, v24);
    sub_B2C35C(&StringLiteral_19505/*"img_list_atk"*/, v25);
    sub_B2C35C(&StringLiteral_5643/*"EVENT_ITEM_UNIT"*/, v26);
    sub_B2C35C(&StringLiteral_10883/*"QP_UNIT"*/, v27);
    sub_B2C35C(&StringLiteral_691/*"+"*/, v28);
    sub_B2C35C(&StringLiteral_19515/*"img_list_not_clear_cond"*/, v29);
    sub_B2C35C(&StringLiteral_9341/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/, v30);
    sub_B2C35C(&StringLiteral_12378/*"STONE_FRAGMENTS_UNIT"*/, v31);
    sub_B2C35C(&StringLiteral_6455/*"FRIENDSHIP_UNIT"*/, v32);
    sub_B2C35C(&StringLiteral_6399/*"FOLLOWER_SELECT_TYPE_POINT"*/, v33);
    sub_B2C35C(&StringLiteral_19666/*"img_txt_bondslevel"*/, v34);
    sub_B2C35C(&StringLiteral_19508/*"img_list_cost"*/, v35);
    sub_B2C35C(&StringLiteral_19516/*"img_list_not_release_costume"*/, v36);
    sub_B2C35C(&StringLiteral_19511/*"img_list_limit_cnt"*/, v37);
    sub_B2C35C(&StringLiteral_19352/*"icon_nplv"*/, v38);
    sub_B2C35C(&StringLiteral_1522/*"?"*/, v39);
    sub_B2C35C(&StringLiteral_19513/*"img_list_lv"*/, v40);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v41);
    sub_B2C35C(&StringLiteral_8621/*"MANA_UNIT"*/, v42);
    sub_B2C35C(&StringLiteral_340/*"#,0"*/, v43);
    sub_B2C35C(&StringLiteral_19510/*"img_list_hp"*/, v44);
    sub_B2C35C(&StringLiteral_19509/*"img_list_costume_num"*/, v45);
    sub_B2C35C(&StringLiteral_586/*"("*/, v46);
    sub_B2C35C(&StringLiteral_1680/*"ANONYMOUS_UNIT"*/, v47);
    sub_B2C35C(&StringLiteral_19699/*"img_txt_fp"*/, v48);
    sub_B2C35C(&StringLiteral_652/*")"*/, v49);
    sub_B2C35C(&StringLiteral_12396/*"STONE_UNIT"*/, v50);
    sub_B2C35C(&StringLiteral_1527/*"??/??"*/, v51);
    sub_B2C35C(&StringLiteral_597/*"(+"*/, v52);
    sub_B2C35C(&StringLiteral_1/*""*/, v53);
    sub_B2C35C(&StringLiteral_6451/*"FREE_NAME"*/, v54);
    sub_B2C35C(&StringLiteral_1526/*"??"*/, v55);
    sub_B2C35C(&StringLiteral_19517/*"img_list_release_num"*/, v56);
    sub_B2C35C(&StringLiteral_19540/*"img_nplv"*/, v57);
    sub_B2C35C(&StringLiteral_11013/*"RARE_PRI_UNIT"*/, v58);
    sub_B2C35C(&StringLiteral_19512/*"img_list_limitcount"*/, v59);
    sub_B2C35C(&StringLiteral_1528/*"???"*/, v60);
    sub_B2C35C(&StringLiteral_19514/*"img_list_no"*/, v61);
    byte_419293C = 1;
  }
  g = 0.0;
  v170 = 0LL;
  v168 = (unsigned int)(equipData + data);
  v62 = System_Int32__ToString((int32_t)&v168, 0LL);
  value = (System_String_o *)StringLiteral_1/*""*/;
  if ( v172 <= 0 )
    *(UnityEngine_Color_o *)&v67 = UnityEngine_Color__get_white(0LL);
  else
    *(UnityEngine_Color_o *)&v67 = UnityEngine_Color__get_yellow(0LL);
  Icon = 0LL;
  v76 = 0;
  HIDWORD(v168) = v67;
  g = v68;
  v170 = __PAIR64__(v70, v69);
  v77 = 0;
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
      if ( v173[0] < 1 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19513/*"img_list_lv"*/;
      if ( v172 < 1 )
      {
        v76 = 0;
        v77 = 0;
        LvExceedDewDropItemId = 0;
        if ( isHide )
          v62 = (System_String_o *)StringLiteral_1526/*"??"*/;
        goto LABEL_204;
      }
      if ( isHide )
      {
        v62 = (System_String_o *)StringLiteral_1527/*"??/??"*/;
      }
      else
      {
        v62 = System_Int32__ToString((int32_t)v173, 0LL);
        if ( !isMaxHide )
        {
          v143 = System_Int32__ToString((int32_t)&v172, 0LL);
          v144 = v62;
LABEL_184:
          v141 = System_String__Concat_44307816(v144, (System_String_o *)StringLiteral_872/*"/"*/, v143, 0LL);
LABEL_185:
          v62 = v141;
        }
      }
      *(UnityEngine_Color_o *)&v84 = UnityEngine_Color__get_white(0LL);
      v76 = 0;
      v77 = 0;
      LvExceedDewDropItemId = 0;
LABEL_187:
      HIDWORD(v168) = v84;
      goto LABEL_188;
    case 3:
      v100 = &StringLiteral_19510/*"img_list_hp"*/;
      goto LABEL_53;
    case 5:
      v100 = &StringLiteral_19505/*"img_list_atk"*/;
LABEL_53:
      Icon = (System_String_o *)*v100;
      LODWORD(v168) = v171[0] + v173[0];
      v101 = System_Int32__ToString_38381416((int32_t)&v168, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
      v76 = 0;
      v77 = 0;
      LvExceedDewDropItemId = 0;
      if ( isHide )
        v62 = (System_String_o *)StringLiteral_1528/*"???"*/;
      else
        v62 = v101;
      goto LABEL_204;
    case 7:
      Icon = (System_String_o *)StringLiteral_19508/*"img_list_cost"*/;
      if ( v171[0] >= 1 )
      {
        v102 = System_Int32__ToString((int32_t)v173, 0LL);
        v103 = System_Int32__ToString((int32_t)v171, 0LL);
        v62 = System_String__Concat_44307816(v102, (System_String_o *)StringLiteral_691/*"+"*/, v103, 0LL);
      }
      goto LABEL_202;
    case 8:
    case 57:
      v88 = &StringLiteral_19514/*"img_list_no"*/;
      goto LABEL_60;
    case 9:
      if ( v173[0] < 1 )
        goto LABEL_151;
      v88 = &StringLiteral_19512/*"img_list_limitcount"*/;
LABEL_60:
      v76 = 0;
      v77 = 0;
      Icon = (System_String_o *)*v88;
      goto LABEL_203;
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v99 = &StringLiteral_6451/*"FREE_NAME"*/;
      goto LABEL_65;
    case 11:
    case 27:
      if ( isHide )
      {
        v62 = (System_String_o *)StringLiteral_1522/*"?"*/;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        NumberFormat_33986032 = LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
        v62 = NumberFormat_33986032;
      }
      *(UnityEngine_Color_o *)&v131 = UIIconLabel__GetPurchaseDecisionColor(
                                        (UIIconLabel_o *)NumberFormat_33986032,
                                        v173[0],
                                        v172,
                                        v66);
      v76 = 0;
      LvExceedDewDropItemId = 0;
      Icon = 0LL;
      goto LABEL_198;
    case 12:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v104 = &StringLiteral_12396/*"STONE_UNIT"*/;
      goto LABEL_98;
    case 13:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v105 = LocalizationManager__Get((System_String_o *)StringLiteral_8621/*"MANA_UNIT"*/, 0LL);
      v106 = (Il2CppObject *)LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      v62 = System_String__Format(v105, v106, 0LL);
      v76 = 0;
      Icon = 0LL;
      goto LABEL_117;
    case 14:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v107 = LocalizationManager__Get((System_String_o *)StringLiteral_10883/*"QP_UNIT"*/, 0LL);
      v108 = (Il2CppObject *)LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      v62 = System_String__Format(v107, v108, 0LL);
      v76 = 0;
      Icon = 0LL;
      goto LABEL_122;
    case 15:
      v109 = v173[0];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      PriceInfo = LocalizationManager__GetPriceInfo(v109, 0LL);
      goto LABEL_178;
    case 16:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v110 = LocalizationManager__Get((System_String_o *)StringLiteral_6455/*"FRIENDSHIP_UNIT"*/, 0LL);
      v111 = (Il2CppObject *)LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      PriceInfo = System_String__Format(v110, v111, 0LL);
      goto LABEL_178;
    case 17:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      PriceInfo = LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      goto LABEL_178;
    case 18:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v112 = LocalizationManager__Get((System_String_o *)StringLiteral_5643/*"EVENT_ITEM_UNIT"*/, 0LL);
      v113 = (Il2CppObject *)LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      v62 = System_String__Format(v112, v113, 0LL);
      v76 = 0;
      LvExceedDewDropItemId = 0;
      Icon = 0LL;
      goto LABEL_199;
    case 19:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v104 = &StringLiteral_12378/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_98:
      v114 = LocalizationManager__Get((System_String_o *)*v104, 0LL);
      v115 = (Il2CppObject *)LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      v62 = System_String__Format(v114, v115, 0LL);
      v76 = 0;
      Icon = 0LL;
      goto LABEL_112;
    case 20:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v116 = LocalizationManager__Get((System_String_o *)StringLiteral_1680/*"ANONYMOUS_UNIT"*/, 0LL);
      v117 = (Il2CppObject *)LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      v62 = System_String__Format(v116, v117, 0LL);
      v76 = 0;
      Icon = 0LL;
      goto LABEL_103;
    case 21:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v118 = LocalizationManager__Get((System_String_o *)StringLiteral_11013/*"RARE_PRI_UNIT"*/, 0LL);
      v119 = (Il2CppObject *)LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      v62 = System_String__Format(v118, v119, 0LL);
      v76 = 0;
      Icon = 0LL;
      goto LABEL_131;
    case 22:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      PurchaseDecisionColor = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v173[0], v172, v120);
      v76 = 0;
      Icon = 0LL;
      HIDWORD(v168) = LODWORD(PurchaseDecisionColor.fields.r);
      g = PurchaseDecisionColor.fields.g;
      v170 = *(_QWORD *)&PurchaseDecisionColor.fields.b;
LABEL_112:
      LvExceedDewDropItemId = 6;
      goto LABEL_199;
    case 23:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      v178 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v173[0], v172, v121);
      v76 = 0;
      Icon = 0LL;
      HIDWORD(v168) = LODWORD(v178.fields.r);
      g = v178.fields.g;
      v170 = *(_QWORD *)&v178.fields.b;
LABEL_117:
      LvExceedDewDropItemId = 7;
      goto LABEL_199;
    case 24:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      v179 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v173[0], v172, v122);
      v76 = 0;
      Icon = 0LL;
      HIDWORD(v168) = LODWORD(v179.fields.r);
      g = v179.fields.g;
      v170 = *(_QWORD *)&v179.fields.b;
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
      v62 = LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      *(UnityEngine_Color_o *)&v84 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v173[0], v172, v89);
      goto LABEL_26;
    case 28:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      v180 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v173[0], v172, v123);
      v76 = 0;
      Icon = 0LL;
      HIDWORD(v168) = LODWORD(v180.fields.r);
      g = v180.fields.g;
      v170 = *(_QWORD *)&v180.fields.b;
      LvExceedDewDropItemId = 16;
      goto LABEL_199;
    case 29:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      v176 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v173[0], v172, v92);
      v76 = 0;
      Icon = 0LL;
      HIDWORD(v168) = LODWORD(v176.fields.r);
      g = v176.fields.g;
      v170 = *(_QWORD *)&v176.fields.b;
LABEL_103:
      LvExceedDewDropItemId = 17;
      goto LABEL_199;
    case 30:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      v181 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v173[0], v172, v124);
      v76 = 0;
      Icon = 0LL;
      HIDWORD(v168) = LODWORD(v181.fields.r);
      g = v181.fields.g;
      v170 = *(_QWORD *)&v181.fields.b;
LABEL_131:
      LvExceedDewDropItemId = 18;
      goto LABEL_199;
    case 31:
      v125 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v125 = BalanceConfig_TypeInfo;
      }
      LvExceedDewDropItemId = v125->static_fields->LvExceedDewDropItemId;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_33986032(v62, 0LL);
      *(UnityEngine_Color_o *)&v84 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v173[0], v172, v126);
      v76 = 0;
      v77 = 0;
      goto LABEL_27;
    case 32:
      if ( (v173[0] & 0x80000000) != 0 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19666/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_19666/*"img_txt_bondslevel"*/ )
        goto LABEL_149;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      v128 = 40;
      goto LABEL_147;
    case 33:
      if ( v173[0] < 1 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19540/*"img_nplv"*/;
      if ( !StringLiteral_19540/*"img_nplv"*/ )
        goto LABEL_149;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      v128 = 55;
LABEL_147:
      UIWidget__set_width(iconSprite, v128, 0LL);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      UIWidget__set_height(iconSprite, 18, 0LL);
LABEL_149:
      if ( v172 < 1 )
      {
        v76 = 0;
        LvExceedDewDropItemId = 0;
      }
      else
      {
        v129 = System_Int32__ToString((int32_t)v173, 0LL);
        v130 = System_Int32__ToString((int32_t)&v172, 0LL);
        v62 = System_String__Concat_44307816(v129, (System_String_o *)StringLiteral_872/*"/"*/, v130, 0LL);
        *(UnityEngine_Color_o *)&v131 = UnityEngine_Color__get_white(0LL);
        v76 = 0;
        LvExceedDewDropItemId = 0;
LABEL_198:
        HIDWORD(v168) = v131;
        g = v132;
        v170 = __PAIR64__(v134, v133);
      }
LABEL_199:
      v77 = 1;
      goto LABEL_204;
    case 34:
      if ( v173[0] >= 1 )
      {
        if ( v172 )
        {
          if ( (unsigned int)(v172 - 1) <= 0x61 )
          {
            v95 = 1065155837;
            v93 = 1064366321;
            v94 = 1050714273;
            v96 = 1.0;
            goto LABEL_274;
          }
          if ( v172 == 99 )
          {
            v93 = 1055319783;
            v94 = 1030811889;
            v95 = 1.0;
            v96 = 1.0;
LABEL_274:
            UnityEngine_Color___ctor(
              *(UnityEngine_Color_o *)&v95,
              v71,
              v72,
              v73,
              v74,
              (const MethodInfo *)((char *)&v168 + 4));
          }
        }
        else
        {
          white = UnityEngine_Color__get_white(0LL);
          HIDWORD(v168) = LODWORD(white.fields.r);
          g = white.fields.g;
          v170 = *(_QWORD *)&white.fields.b;
        }
        v76 = 0;
        LvExceedDewDropItemId = 0;
        v77 = 1;
        Icon = (System_String_o *)StringLiteral_19352/*"icon_nplv"*/;
        goto LABEL_204;
      }
      *(UnityEngine_Color_o *)(&v85 - 1) = UnityEngine_Color__get_white(0LL);
      HIDWORD(v168) = v165;
      v76 = 0;
      v77 = 0;
      LvExceedDewDropItemId = 0;
      v62 = (System_String_o *)StringLiteral_1/*""*/;
      Icon = 0LL;
LABEL_188:
      g = v85;
      v170 = __PAIR64__(v87, v86);
LABEL_204:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_278;
      v147 = v62;
      UILabel__set_text((UILabel_o *)iconSprite, v62, v65);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_278;
      *(_QWORD *)&v182.fields.b = v170;
      v182.fields.r = *((float *)&v168 + 1);
      v182.fields.g = g;
      UIWidget__set_color(iconSprite, v182, 0LL);
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
      UILabel__set_text((UILabel_o *)iconSprite, value, v149);
LABEL_212:
      v150 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v150, 0LL, 0LL) )
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
        if ( v76 )
        {
          v152 = this->fields.iconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventSprite(v152, Icon, 0LL);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v153 = this->fields.iconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCommon(v153, 0LL);
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_278;
        UISprite__set_spriteName((UISprite_o *)iconSprite, Icon, 0LL);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v151 = this->fields.iconSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetItem(v151, LvExceedDewDropItemId, 0LL);
      }
      if ( !(v77 & 1 | (Icon == 0LL)) )
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
      v154 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      iconSprite = (UIWidget_o *)UnityEngine_Object__op_Equality(v154, transform, 0LL);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        textLabel = this->fields.textLabel;
        if ( !textLabel )
          goto LABEL_278;
        if ( textLabel->fields.mShouldBeProcessed )
          UILabel__ProcessText_41659696(this->fields.textLabel, 0, 1, v156);
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
        iconSprite = (UIWidget_o *)System_String__op_Equality(v147, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v161 = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !v161 )
            goto LABEL_278;
          x = x - (float)v161->fields.mSpacingX;
        }
        else if ( !v161 )
        {
          goto LABEL_278;
        }
        mAlignment = v161->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v163 = (float)(x * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v164 = (float)-this->fields.blankSize;
            goto LABEL_261;
          }
          v163 = x + (float)this->fields.blankSize;
        }
        v164 = -v163;
LABEL_261:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
          if ( iconSprite )
          {
            v175.fields.x = v164;
            v175.fields.y = y;
            v175.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v175, 0LL);
            return;
          }
        }
LABEL_278:
        sub_B2C434(iconSprite, v64);
      }
      return;
    case 35:
      v135 = v173[0];
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon = Rarity__getIcon(v135, 0LL);
      goto LABEL_166;
    case 36:
      v137 = v172;
      v136 = v173[0];
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon = Rarity__getIcon_21889892(v136, v137, lv, 0LL);
      if ( v172 < 1 )
        goto LABEL_166;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      iconSprite = (UIWidget_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_278;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)iconSprite, v173[0], v172, 0, 0LL);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_278;
      if ( ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)iconSprite, v173[0], lv, RarityIcon, 0LL) > 2 )
        v76 = 1;
      else
LABEL_166:
        v76 = 0;
      v77 = 0;
      LvExceedDewDropItemId = 0;
      v62 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_204;
    case 38:
    case 39:
    case 40:
      if ( v173[0] < 1 )
      {
        if ( (v173[0] & 0x80000000) == 0 )
        {
LABEL_151:
          v76 = 0;
          v77 = 0;
          LvExceedDewDropItemId = 0;
          v62 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_180;
        }
        PriceInfo = System_Int32__ToString_38381416((int32_t)v173, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
      }
      else
      {
        v79 = System_Int32__ToString_38381416((int32_t)v173, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
        PriceInfo = System_String__Concat_44305532((System_String_o *)StringLiteral_691/*"+"*/, v79, 0LL);
      }
LABEL_178:
      v62 = PriceInfo;
LABEL_179:
      v76 = 0;
      v77 = 0;
      LvExceedDewDropItemId = 0;
LABEL_180:
      Icon = 0LL;
      goto LABEL_204;
    case 41:
    case 42:
    case 43:
      v81 = v173[0];
      v82 = System_Int32__ToString_38381416((int32_t)v173, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
      v83 = (System_String_o **)&StringLiteral_586/*"("*/;
      if ( v81 >= 0 )
        v83 = (System_String_o **)&StringLiteral_597/*"(+"*/;
      v62 = System_String__Concat_44307816(*v83, v82, (System_String_o *)StringLiteral_652/*")"*/, 0LL);
      if ( v173[0] <= v172 )
      {
        if ( v173[0] >= v172 )
LABEL_25:
          *(UnityEngine_Color_o *)&v84 = UnityEngine_Color__get_white(0LL);
        else
          *(UnityEngine_Color_o *)&v84 = UnityEngine_Color__get_red(0LL);
      }
      else
      {
        *(UnityEngine_Color_o *)&v84 = UnityEngine_Color__get_cyan(0LL);
      }
LABEL_26:
      v76 = 0;
      v77 = 0;
      LvExceedDewDropItemId = 0;
LABEL_27:
      Icon = 0LL;
      goto LABEL_187;
    case 44:
    case 45:
      if ( (v173[0] & 0x80000000) != 0 )
        goto LABEL_151;
      if ( v172 < 1 )
        goto LABEL_179;
      v90 = System_Int32__ToString_38381416((int32_t)v173, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
      v91 = System_Int32__ToString_38381416((int32_t)&v172, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
      v62 = System_String__Concat_44307816(v90, (System_String_o *)StringLiteral_872/*"/"*/, v91, 0LL);
      goto LABEL_25;
    case 46:
      v97 = &StringLiteral_19510/*"img_list_hp"*/;
      goto LABEL_169;
    case 47:
      v97 = &StringLiteral_19505/*"img_list_atk"*/;
LABEL_169:
      Icon = (System_String_o *)*v97;
      v62 = System_Int32__ToString_38381416((int32_t)v173, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
      if ( (v171[0] & 0x80000000) != 0 )
      {
        v140 = System_Int32__ToString((int32_t)v171, 0LL);
      }
      else
      {
        v139 = System_Int32__ToString_38381416((int32_t)v171, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
        v140 = System_String__Concat_44305532((System_String_o *)StringLiteral_691/*"+"*/, v139, 0LL);
      }
      value = v140;
LABEL_202:
      v76 = 0;
      v77 = 0;
LABEL_203:
      LvExceedDewDropItemId = 0;
      goto LABEL_204;
    case 48:
      v76 = 0;
      v77 = 0;
      LvExceedDewDropItemId = 0;
      Icon = 0LL;
      if ( v173[0] <= 0 )
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
      Icon = (System_String_o *)StringLiteral_19509/*"img_list_costume_num"*/;
      v141 = System_Int32__ToString((int32_t)v173, 0LL);
      goto LABEL_185;
    case 51:
      v98 = &StringLiteral_19517/*"img_list_release_num"*/;
      goto LABEL_183;
    case 52:
      v98 = &StringLiteral_19516/*"img_list_not_release_costume"*/;
      goto LABEL_183;
    case 53:
      v98 = &StringLiteral_19515/*"img_list_not_clear_cond"*/;
      goto LABEL_183;
    case 54:
      v98 = &StringLiteral_19511/*"img_list_limit_cnt"*/;
LABEL_183:
      Icon = (System_String_o *)*v98;
      v142 = System_Int32__ToString((int32_t)v173, 0LL);
      v143 = System_Int32__ToString((int32_t)&v172, 0LL);
      v144 = v142;
      goto LABEL_184;
    case 55:
      Icon = (System_String_o *)StringLiteral_19699/*"img_txt_fp"*/;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v145 = LocalizationManager__Get((System_String_o *)StringLiteral_6399/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0LL);
      v167 = v173[0];
      v146 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v167);
      v141 = System_String__Format(v145, v146, 0LL);
      goto LABEL_185;
    case 56:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v99 = &StringLiteral_9341/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_65:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v99, 0LL);
      goto LABEL_178;
    default:
      v77 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_204;
  }
}


void __fastcall UIIconLabel__Set_41614764(
        UIIconLabel_o *this,
        IconLabelInfo_o *info,
        bool isHide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+8h] [xbp-8h]

  if ( info )
    UIIconLabel__Set_41609428(
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