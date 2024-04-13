void __fastcall UIIconLabel___ctor(UIIconLabel_o *this, const MethodInfo *method)
{
  this->fields.blankSize = 2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UIIconLabel__Clear(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x20
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_42F3975 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42F3975 = 1;
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
    UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, v10);
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
    sub_B5D69C(textLabel, method);
  }
}


int32_t __fastcall UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B5D69C(this, method);
  return textLabel->fields.mFontSize;
}


UnityEngine_Vector2_o __fastcall UIIconLabel__GetIconSize(UIIconLabel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v6; // x1
  struct UISprite_o *v7; // x0
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o zero; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42F3978 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42F3978 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v7 = this->fields.iconSprite;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._22_get_localSize.method)(
      v7,
      v7->klass->vtable._23_get_drawingDimensions.methodPtr);
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
    sub_B5D69C(this, method);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void __fastcall UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+8h] [xbp-8h]

  if ( info )
    UIIconLabel__Set_41886452(
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
  int v3; // w2
  __int64 v4; // x3
  UIWidget_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42F3979 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42F3979 = 1;
  }
  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_17;
  v10.fields.r = textLabel->fields.mColor.fields.r;
  v10.fields.g = textLabel->fields.mColor.fields.g;
  v10.fields.b = textLabel->fields.mColor.fields.b;
  v10.fields.a = alpha;
  UIWidget__set_color(textLabel, v10, 0LL);
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
    v11.fields.r = textLabel->fields.mColor.fields.r;
    v11.fields.g = textLabel->fields.mColor.fields.g;
    v11.fields.b = textLabel->fields.mColor.fields.b;
    v11.fields.a = alpha;
    UIWidget__set_color(textLabel, v11, 0LL);
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
      v12.fields.r = textLabel->fields.mColor.fields.r;
      v12.fields.g = textLabel->fields.mColor.fields.g;
      v12.fields.b = textLabel->fields.mColor.fields.b;
      v12.fields.a = alpha;
      UIWidget__set_color(textLabel, v12, 0LL);
      return;
    }
LABEL_17:
    sub_B5D69C(textLabel, method);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  Il2CppObject *NumberFormat; // x22
  System_String_o *v16; // x0
  System_String_o **v17; // x9
  bool v18; // zf
  UILabel_o *textLabel; // x19
  System_String_o *v20; // x21
  Il2CppObject *v21; // x20
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2

  if ( (byte_42F3977 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, data, adjustData, isLimit);
    sub_B5D5C4(&StringLiteral_3262/*"COMBINE_RES_INFO"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3252/*"COMBINE_LIMIT_INFO"*/, v12, v13, v14);
    byte_42F3977 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0LL);
  v16 = LocalizationManager__GetNumberFormat(adjustData, 0LL);
  v17 = (System_String_o **)&StringLiteral_3252/*"COMBINE_LIMIT_INFO"*/;
  v18 = !isLimit;
  textLabel = this->fields.textLabel;
  if ( v18 )
    v17 = (System_String_o **)&StringLiteral_3262/*"COMBINE_RES_INFO"*/;
  v20 = *v17;
  v21 = (Il2CppObject *)v16;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get(v20, 0LL);
  v23 = System_String__Format_44573324(v22, NumberFormat, v21, 0LL);
  if ( !textLabel )
    sub_B5D69C(v23, v24);
  UILabel__set_text(textLabel, v23, v25);
}


void __fastcall UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+8h] [xbp-8h]

  UIIconLabel__Set_41886452(this, 27, 0, 0, 0, 0LL, 1, 0, 0, v2);
}


void __fastcall UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+8h] [xbp-8h]

  UIIconLabel__Set_41886452(this, iconKind, price, holdCount, 0, 0LL, 0, 0, 0, v5);
}


void __fastcall UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B5D69C(0LL, method);
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
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(textLabel, size);
  }
  UIWidget__set_height(textLabel, m_Y, 0LL);
}


void __fastcall UIIconLabel__SetTextLabelStrikeout(UIIconLabel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UIIconLabel_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *textLabel; // x19
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_42F397A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15845/*"[/s]"*/, (_DWORD)method, v2, v3);
    this = (UIIconLabel_o *)sub_B5D5C4(&StringLiteral_16004/*"[s]"*/, v5, v6, v7);
    byte_42F397A = 1;
  }
  textLabel = v4->fields.textLabel;
  if ( !textLabel )
    sub_B5D69C(this, method);
  v9 = System_String__Concat_44580072(
         (System_String_o *)StringLiteral_16004/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_15845/*"[/s]"*/,
         0LL);
  UILabel__set_text(textLabel, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__Set_41886452(
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  int v128; // w1
  int v129; // w2
  __int64 v130; // x3
  int v131; // w1
  int v132; // w2
  __int64 v133; // x3
  int v134; // w1
  int v135; // w2
  __int64 v136; // x3
  int v137; // w1
  int v138; // w2
  __int64 v139; // x3
  int v140; // w1
  int v141; // w2
  __int64 v142; // x3
  int v143; // w1
  int v144; // w2
  __int64 v145; // x3
  int v146; // w1
  int v147; // w2
  __int64 v148; // x3
  int v149; // w1
  int v150; // w2
  __int64 v151; // x3
  System_String_o *v152; // x21
  System_String_o *NumberFormat_34103284; // x0
  __int64 v154; // x1
  const MethodInfo *v155; // x2
  const MethodInfo *v156; // x3
  int v157; // s0
  float v158; // s1
  unsigned int v159; // s2
  unsigned int v160; // s3
  float v161; // s4
  float v162; // s5
  float v163; // s6
  float v164; // s7
  System_String_o *Icon; // x23
  int v166; // w24
  char v167; // w22
  int32_t LvExceedDewDropItemId; // w28
  System_String_o *v169; // x0
  System_String_o *PriceInfo; // x0
  int v171; // w22
  System_String_o *v172; // x0
  System_String_o **v173; // x8
  int v174; // s0
  float v175; // s1
  unsigned int v176; // s2
  unsigned int v177; // s3
  __int64 *v178; // x8
  const MethodInfo *v179; // x3
  System_String_o *v180; // x22
  System_String_o *v181; // x0
  const MethodInfo *v182; // x3
  int v183; // s1
  int v184; // s2
  int v185; // s0
  float v186; // s3
  __int64 *v187; // x8
  __int64 *v188; // x8
  __int64 *v189; // x8
  __int64 *v190; // x8
  System_String_o *v191; // x0
  System_String_o *v192; // x22
  System_String_o *v193; // x0
  __int64 *v194; // x8
  System_String_o *v195; // x23
  Il2CppObject *v196; // x0
  System_String_o *v197; // x23
  Il2CppObject *v198; // x0
  int32_t v199; // w22
  System_String_o *v200; // x23
  Il2CppObject *v201; // x0
  System_String_o *v202; // x23
  Il2CppObject *v203; // x0
  System_String_o *v204; // x23
  Il2CppObject *v205; // x0
  System_String_o *v206; // x23
  Il2CppObject *v207; // x0
  System_String_o *v208; // x23
  Il2CppObject *v209; // x0
  const MethodInfo *v210; // x3
  const MethodInfo *v211; // x3
  const MethodInfo *v212; // x3
  const MethodInfo *v213; // x3
  const MethodInfo *v214; // x3
  BalanceConfig_c *v215; // x0
  const MethodInfo *v216; // x3
  UIWidget_o *iconSprite; // x0
  int32_t v218; // w1
  System_String_o *v219; // x22
  System_String_o *v220; // x0
  int v221; // s0
  float v222; // s1
  unsigned int v223; // s2
  unsigned int v224; // s3
  int32_t v225; // w22
  int32_t v226; // w23
  int32_t v227; // w24
  int32_t RarityIcon; // w24
  System_String_o *v229; // x0
  System_String_o *v230; // x0
  System_String_o *v231; // x0
  System_String_o *v232; // x22
  System_String_o *v233; // x2
  System_String_o *v234; // x0
  System_String_o *v235; // x22
  Il2CppObject *v236; // x0
  System_String_o *v237; // x27
  UnityEngine_Object_o *extentionTextLabel; // x25
  const MethodInfo *v239; // x2
  UnityEngine_Object_o *v240; // x21
  UISprite_o *v241; // x20
  UISprite_o *v242; // x20
  UISprite_o *v243; // x20
  UnityEngine_Object_o *v244; // x20
  UnityEngine_Object_o *transform; // x21
  const MethodInfo *v246; // x3
  struct UILabel_o *textLabel; // x20
  float x; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *v251; // x8
  int32_t mAlignment; // w8
  float v253; // s0
  float v254; // s10
  int v255; // s0
  System_String_o *value; // [xsp+8h] [xbp-98h]
  int32_t v257; // [xsp+10h] [xbp-90h] BYREF
  __int64 v258; // [xsp+14h] [xbp-8Ch] BYREF
  float g; // [xsp+1Ch] [xbp-84h]
  unsigned __int64 v260; // [xsp+20h] [xbp-80h]
  _DWORD v261[3]; // [xsp+2Ch] [xbp-74h] BYREF
  int32_t v262; // [xsp+38h] [xbp-68h] BYREF
  int32_t v263[13]; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v265; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v266; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o PurchaseDecisionColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v268; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v269; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v270; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v271; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v272; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v262 = adjustData;
  v263[0] = data;
  v261[0] = equipData;
  if ( (byte_42F3976 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, iconKind, data, *(_QWORD *)&adjustData);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantExceedMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v23, v24, v25);
    sub_B5D5C4(&DataManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&int_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Rarity_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_19752/*"img_list_atk"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_5720/*"EVENT_ITEM_UNIT"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_11013/*"QP_UNIT"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_699/*"+"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_19762/*"img_list_not_clear_cond"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_9437/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_12526/*"STONE_FRAGMENTS_UNIT"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_6534/*"FRIENDSHIP_UNIT"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_6478/*"FOLLOWER_SELECT_TYPE_POINT"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_19915/*"img_txt_bondslevel"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_19755/*"img_list_cost"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_19763/*"img_list_not_release_costume"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_19758/*"img_list_limit_cnt"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_19596/*"icon_nplv"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_1547/*"?"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_19760/*"img_list_lv"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_8708/*"MANA_UNIT"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_346/*"#,0"*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_19757/*"img_list_hp"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_19756/*"img_list_costume_num"*/, v101, v102, v103);
    sub_B5D5C4(&StringLiteral_592/*"("*/, v104, v105, v106);
    sub_B5D5C4(&StringLiteral_1705/*"ANONYMOUS_UNIT"*/, v107, v108, v109);
    sub_B5D5C4(&StringLiteral_19948/*"img_txt_fp"*/, v110, v111, v112);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v113, v114, v115);
    sub_B5D5C4(&StringLiteral_12544/*"STONE_UNIT"*/, v116, v117, v118);
    sub_B5D5C4(&StringLiteral_1552/*"??/??"*/, v119, v120, v121);
    sub_B5D5C4(&StringLiteral_603/*"(+"*/, v122, v123, v124);
    sub_B5D5C4(&StringLiteral_1/*""*/, v125, v126, v127);
    sub_B5D5C4(&StringLiteral_6530/*"FREE_NAME"*/, v128, v129, v130);
    sub_B5D5C4(&StringLiteral_1551/*"??"*/, v131, v132, v133);
    sub_B5D5C4(&StringLiteral_19764/*"img_list_release_num"*/, v134, v135, v136);
    sub_B5D5C4(&StringLiteral_19787/*"img_nplv"*/, v137, v138, v139);
    sub_B5D5C4(&StringLiteral_11146/*"RARE_PRI_UNIT"*/, v140, v141, v142);
    sub_B5D5C4(&StringLiteral_19759/*"img_list_limitcount"*/, v143, v144, v145);
    sub_B5D5C4(&StringLiteral_1553/*"???"*/, v146, v147, v148);
    sub_B5D5C4(&StringLiteral_19761/*"img_list_no"*/, v149, v150, v151);
    byte_42F3976 = 1;
  }
  g = 0.0;
  v260 = 0LL;
  v258 = (unsigned int)(equipData + data);
  v152 = System_Int32__ToString((int32_t)&v258, 0LL);
  value = (System_String_o *)StringLiteral_1/*""*/;
  if ( v262 <= 0 )
    *(UnityEngine_Color_o *)&v157 = UnityEngine_Color__get_white(0LL);
  else
    *(UnityEngine_Color_o *)&v157 = UnityEngine_Color__get_yellow(0LL);
  Icon = 0LL;
  v166 = 0;
  HIDWORD(v258) = v157;
  g = v158;
  v260 = __PAIR64__(v160, v159);
  v167 = 0;
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
      if ( v263[0] < 1 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19760/*"img_list_lv"*/;
      if ( v262 < 1 )
      {
        v166 = 0;
        v167 = 0;
        LvExceedDewDropItemId = 0;
        if ( isHide )
          v152 = (System_String_o *)StringLiteral_1551/*"??"*/;
        goto LABEL_204;
      }
      if ( isHide )
      {
        v152 = (System_String_o *)StringLiteral_1552/*"??/??"*/;
      }
      else
      {
        v152 = System_Int32__ToString((int32_t)v263, 0LL);
        if ( !isMaxHide )
        {
          v233 = System_Int32__ToString((int32_t)&v262, 0LL);
          v234 = v152;
LABEL_184:
          v231 = System_String__Concat_44580072(v234, (System_String_o *)StringLiteral_885/*"/"*/, v233, 0LL);
LABEL_185:
          v152 = v231;
        }
      }
      *(UnityEngine_Color_o *)&v174 = UnityEngine_Color__get_white(0LL);
      v166 = 0;
      v167 = 0;
      LvExceedDewDropItemId = 0;
LABEL_187:
      HIDWORD(v258) = v174;
      goto LABEL_188;
    case 3:
      v190 = &StringLiteral_19757/*"img_list_hp"*/;
      goto LABEL_53;
    case 5:
      v190 = &StringLiteral_19752/*"img_list_atk"*/;
LABEL_53:
      Icon = (System_String_o *)*v190;
      LODWORD(v258) = v261[0] + v263[0];
      v191 = System_Int32__ToString_39741776((int32_t)&v258, (System_String_o *)StringLiteral_346/*"#,0"*/, 0LL);
      v166 = 0;
      v167 = 0;
      LvExceedDewDropItemId = 0;
      if ( isHide )
        v152 = (System_String_o *)StringLiteral_1553/*"???"*/;
      else
        v152 = v191;
      goto LABEL_204;
    case 7:
      Icon = (System_String_o *)StringLiteral_19755/*"img_list_cost"*/;
      if ( v261[0] >= 1 )
      {
        v192 = System_Int32__ToString((int32_t)v263, 0LL);
        v193 = System_Int32__ToString((int32_t)v261, 0LL);
        v152 = System_String__Concat_44580072(v192, (System_String_o *)StringLiteral_699/*"+"*/, v193, 0LL);
      }
      goto LABEL_202;
    case 8:
    case 57:
      v178 = &StringLiteral_19761/*"img_list_no"*/;
      goto LABEL_60;
    case 9:
      if ( v263[0] < 1 )
        goto LABEL_151;
      v178 = &StringLiteral_19759/*"img_list_limitcount"*/;
LABEL_60:
      v166 = 0;
      v167 = 0;
      Icon = (System_String_o *)*v178;
      goto LABEL_203;
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v189 = &StringLiteral_6530/*"FREE_NAME"*/;
      goto LABEL_65;
    case 11:
    case 27:
      if ( isHide )
      {
        v152 = (System_String_o *)StringLiteral_1547/*"?"*/;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        NumberFormat_34103284 = LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
        v152 = NumberFormat_34103284;
      }
      *(UnityEngine_Color_o *)&v221 = UIIconLabel__GetPurchaseDecisionColor(
                                        (UIIconLabel_o *)NumberFormat_34103284,
                                        v263[0],
                                        v262,
                                        v156);
      v166 = 0;
      LvExceedDewDropItemId = 0;
      Icon = 0LL;
      goto LABEL_198;
    case 12:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v194 = &StringLiteral_12544/*"STONE_UNIT"*/;
      goto LABEL_98;
    case 13:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v195 = LocalizationManager__Get((System_String_o *)StringLiteral_8708/*"MANA_UNIT"*/, 0LL);
      v196 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      v152 = System_String__Format(v195, v196, 0LL);
      v166 = 0;
      Icon = 0LL;
      goto LABEL_117;
    case 14:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v197 = LocalizationManager__Get((System_String_o *)StringLiteral_11013/*"QP_UNIT"*/, 0LL);
      v198 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      v152 = System_String__Format(v197, v198, 0LL);
      v166 = 0;
      Icon = 0LL;
      goto LABEL_122;
    case 15:
      v199 = v263[0];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      PriceInfo = LocalizationManager__GetPriceInfo(v199, 0LL);
      goto LABEL_178;
    case 16:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v200 = LocalizationManager__Get((System_String_o *)StringLiteral_6534/*"FRIENDSHIP_UNIT"*/, 0LL);
      v201 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      PriceInfo = System_String__Format(v200, v201, 0LL);
      goto LABEL_178;
    case 17:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      PriceInfo = LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      goto LABEL_178;
    case 18:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v202 = LocalizationManager__Get((System_String_o *)StringLiteral_5720/*"EVENT_ITEM_UNIT"*/, 0LL);
      v203 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      v152 = System_String__Format(v202, v203, 0LL);
      v166 = 0;
      LvExceedDewDropItemId = 0;
      Icon = 0LL;
      goto LABEL_199;
    case 19:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v194 = &StringLiteral_12526/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_98:
      v204 = LocalizationManager__Get((System_String_o *)*v194, 0LL);
      v205 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      v152 = System_String__Format(v204, v205, 0LL);
      v166 = 0;
      Icon = 0LL;
      goto LABEL_112;
    case 20:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v206 = LocalizationManager__Get((System_String_o *)StringLiteral_1705/*"ANONYMOUS_UNIT"*/, 0LL);
      v207 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      v152 = System_String__Format(v206, v207, 0LL);
      v166 = 0;
      Icon = 0LL;
      goto LABEL_103;
    case 21:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v208 = LocalizationManager__Get((System_String_o *)StringLiteral_11146/*"RARE_PRI_UNIT"*/, 0LL);
      v209 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      v152 = System_String__Format(v208, v209, 0LL);
      v166 = 0;
      Icon = 0LL;
      goto LABEL_131;
    case 22:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v152 = LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      PurchaseDecisionColor = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v152, v263[0], v262, v210);
      v166 = 0;
      Icon = 0LL;
      HIDWORD(v258) = LODWORD(PurchaseDecisionColor.fields.r);
      g = PurchaseDecisionColor.fields.g;
      v260 = *(_QWORD *)&PurchaseDecisionColor.fields.b;
LABEL_112:
      LvExceedDewDropItemId = 6;
      goto LABEL_199;
    case 23:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v152 = LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      v268 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v152, v263[0], v262, v211);
      v166 = 0;
      Icon = 0LL;
      HIDWORD(v258) = LODWORD(v268.fields.r);
      g = v268.fields.g;
      v260 = *(_QWORD *)&v268.fields.b;
LABEL_117:
      LvExceedDewDropItemId = 7;
      goto LABEL_199;
    case 24:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v152 = LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      v269 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v152, v263[0], v262, v212);
      v166 = 0;
      Icon = 0LL;
      HIDWORD(v258) = LODWORD(v269.fields.r);
      g = v269.fields.g;
      v260 = *(_QWORD *)&v269.fields.b;
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
      v152 = LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      *(UnityEngine_Color_o *)&v174 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v152, v263[0], v262, v179);
      goto LABEL_26;
    case 28:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v152 = LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      v270 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v152, v263[0], v262, v213);
      v166 = 0;
      Icon = 0LL;
      HIDWORD(v258) = LODWORD(v270.fields.r);
      g = v270.fields.g;
      v260 = *(_QWORD *)&v270.fields.b;
      LvExceedDewDropItemId = 16;
      goto LABEL_199;
    case 29:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v152 = LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      v266 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v152, v263[0], v262, v182);
      v166 = 0;
      Icon = 0LL;
      HIDWORD(v258) = LODWORD(v266.fields.r);
      g = v266.fields.g;
      v260 = *(_QWORD *)&v266.fields.b;
LABEL_103:
      LvExceedDewDropItemId = 17;
      goto LABEL_199;
    case 30:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v152 = LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      v271 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v152, v263[0], v262, v214);
      v166 = 0;
      Icon = 0LL;
      HIDWORD(v258) = LODWORD(v271.fields.r);
      g = v271.fields.g;
      v260 = *(_QWORD *)&v271.fields.b;
LABEL_131:
      LvExceedDewDropItemId = 18;
      goto LABEL_199;
    case 31:
      v215 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v215 = BalanceConfig_TypeInfo;
      }
      LvExceedDewDropItemId = v215->static_fields->LvExceedDewDropItemId;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v152 = LocalizationManager__GetNumberFormat_34103284(v152, 0LL);
      *(UnityEngine_Color_o *)&v174 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v152, v263[0], v262, v216);
      v166 = 0;
      v167 = 0;
      goto LABEL_27;
    case 32:
      if ( (v263[0] & 0x80000000) != 0 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19915/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_19915/*"img_txt_bondslevel"*/ )
        goto LABEL_149;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      v218 = 40;
      goto LABEL_147;
    case 33:
      if ( v263[0] < 1 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19787/*"img_nplv"*/;
      if ( !StringLiteral_19787/*"img_nplv"*/ )
        goto LABEL_149;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      v218 = 55;
LABEL_147:
      UIWidget__set_width(iconSprite, v218, 0LL);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      UIWidget__set_height(iconSprite, 18, 0LL);
LABEL_149:
      if ( v262 < 1 )
      {
        v166 = 0;
        LvExceedDewDropItemId = 0;
      }
      else
      {
        v219 = System_Int32__ToString((int32_t)v263, 0LL);
        v220 = System_Int32__ToString((int32_t)&v262, 0LL);
        v152 = System_String__Concat_44580072(v219, (System_String_o *)StringLiteral_885/*"/"*/, v220, 0LL);
        *(UnityEngine_Color_o *)&v221 = UnityEngine_Color__get_white(0LL);
        v166 = 0;
        LvExceedDewDropItemId = 0;
LABEL_198:
        HIDWORD(v258) = v221;
        g = v222;
        v260 = __PAIR64__(v224, v223);
      }
LABEL_199:
      v167 = 1;
      goto LABEL_204;
    case 34:
      if ( v263[0] >= 1 )
      {
        if ( v262 )
        {
          if ( (unsigned int)(v262 - 1) <= 0x61 )
          {
            v185 = 1065155837;
            v183 = 1064366321;
            v184 = 1050714273;
            v186 = 1.0;
            goto LABEL_274;
          }
          if ( v262 == 99 )
          {
            v183 = 1055319783;
            v184 = 1030811889;
            v185 = 1.0;
            v186 = 1.0;
LABEL_274:
            UnityEngine_Color___ctor(
              *(UnityEngine_Color_o *)&v185,
              v161,
              v162,
              v163,
              v164,
              (const MethodInfo *)((char *)&v258 + 4));
          }
        }
        else
        {
          white = UnityEngine_Color__get_white(0LL);
          HIDWORD(v258) = LODWORD(white.fields.r);
          g = white.fields.g;
          v260 = *(_QWORD *)&white.fields.b;
        }
        v166 = 0;
        LvExceedDewDropItemId = 0;
        v167 = 1;
        Icon = (System_String_o *)StringLiteral_19596/*"icon_nplv"*/;
        goto LABEL_204;
      }
      *(UnityEngine_Color_o *)(&v175 - 1) = UnityEngine_Color__get_white(0LL);
      HIDWORD(v258) = v255;
      v166 = 0;
      v167 = 0;
      LvExceedDewDropItemId = 0;
      v152 = (System_String_o *)StringLiteral_1/*""*/;
      Icon = 0LL;
LABEL_188:
      g = v175;
      v260 = __PAIR64__(v177, v176);
LABEL_204:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_278;
      v237 = v152;
      UILabel__set_text((UILabel_o *)iconSprite, v152, v155);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_278;
      *(_QWORD *)&v272.fields.b = v260;
      v272.fields.r = *((float *)&v258 + 1);
      v272.fields.g = g;
      UIWidget__set_color(iconSprite, v272, 0LL);
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
      UILabel__set_text((UILabel_o *)iconSprite, value, v239);
LABEL_212:
      v240 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v240, 0LL, 0LL) )
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
        if ( v166 )
        {
          v242 = this->fields.iconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventSprite(v242, Icon, 0LL);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v243 = this->fields.iconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCommon(v243, 0LL);
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_278;
        UISprite__set_spriteName((UISprite_o *)iconSprite, Icon, 0LL);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v241 = this->fields.iconSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetItem(v241, LvExceedDewDropItemId, 0LL);
      }
      if ( !(v167 & 1 | (Icon == 0LL)) )
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
      v244 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      iconSprite = (UIWidget_o *)UnityEngine_Object__op_Equality(v244, transform, 0LL);
      if ( ((unsigned __int8)iconSprite & 1) != 0 )
      {
        textLabel = this->fields.textLabel;
        if ( !textLabel )
          goto LABEL_278;
        if ( textLabel->fields.mShouldBeProcessed )
          UILabel__ProcessText_41936760(this->fields.textLabel, 0, 1, v246);
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
        iconSprite = (UIWidget_o *)System_String__op_Equality(v237, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v251 = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !v251 )
            goto LABEL_278;
          x = x - (float)v251->fields.mSpacingX;
        }
        else if ( !v251 )
        {
          goto LABEL_278;
        }
        mAlignment = v251->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v253 = (float)(x * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v254 = (float)-this->fields.blankSize;
            goto LABEL_261;
          }
          v253 = x + (float)this->fields.blankSize;
        }
        v254 = -v253;
LABEL_261:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
          if ( iconSprite )
          {
            v265.fields.x = v254;
            v265.fields.y = y;
            v265.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v265, 0LL);
            return;
          }
        }
LABEL_278:
        sub_B5D69C(iconSprite, v154);
      }
      return;
    case 35:
      v225 = v263[0];
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon = Rarity__getIcon(v225, 0LL);
      goto LABEL_166;
    case 36:
      v227 = v262;
      v226 = v263[0];
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon = Rarity__getIcon_22319524(v226, v227, lv, 0LL);
      if ( v262 < 1 )
        goto LABEL_166;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      iconSprite = (UIWidget_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_278;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)iconSprite, v263[0], v262, 0, 0LL);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_278;
      if ( ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)iconSprite, v263[0], lv, RarityIcon, 0LL) > 2 )
        v166 = 1;
      else
LABEL_166:
        v166 = 0;
      v167 = 0;
      LvExceedDewDropItemId = 0;
      v152 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_204;
    case 38:
    case 39:
    case 40:
      if ( v263[0] < 1 )
      {
        if ( (v263[0] & 0x80000000) == 0 )
        {
LABEL_151:
          v166 = 0;
          v167 = 0;
          LvExceedDewDropItemId = 0;
          v152 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_180;
        }
        PriceInfo = System_Int32__ToString_39741776((int32_t)v263, (System_String_o *)StringLiteral_346/*"#,0"*/, 0LL);
      }
      else
      {
        v169 = System_Int32__ToString_39741776((int32_t)v263, (System_String_o *)StringLiteral_346/*"#,0"*/, 0LL);
        PriceInfo = System_String__Concat_44577788((System_String_o *)StringLiteral_699/*"+"*/, v169, 0LL);
      }
LABEL_178:
      v152 = PriceInfo;
LABEL_179:
      v166 = 0;
      v167 = 0;
      LvExceedDewDropItemId = 0;
LABEL_180:
      Icon = 0LL;
      goto LABEL_204;
    case 41:
    case 42:
    case 43:
      v171 = v263[0];
      v172 = System_Int32__ToString_39741776((int32_t)v263, (System_String_o *)StringLiteral_346/*"#,0"*/, 0LL);
      v173 = (System_String_o **)&StringLiteral_592/*"("*/;
      if ( v171 >= 0 )
        v173 = (System_String_o **)&StringLiteral_603/*"(+"*/;
      v152 = System_String__Concat_44580072(*v173, v172, (System_String_o *)StringLiteral_659/*")"*/, 0LL);
      if ( v263[0] <= v262 )
      {
        if ( v263[0] >= v262 )
LABEL_25:
          *(UnityEngine_Color_o *)&v174 = UnityEngine_Color__get_white(0LL);
        else
          *(UnityEngine_Color_o *)&v174 = UnityEngine_Color__get_red(0LL);
      }
      else
      {
        *(UnityEngine_Color_o *)&v174 = UnityEngine_Color__get_cyan(0LL);
      }
LABEL_26:
      v166 = 0;
      v167 = 0;
      LvExceedDewDropItemId = 0;
LABEL_27:
      Icon = 0LL;
      goto LABEL_187;
    case 44:
    case 45:
      if ( (v263[0] & 0x80000000) != 0 )
        goto LABEL_151;
      if ( v262 < 1 )
        goto LABEL_179;
      v180 = System_Int32__ToString_39741776((int32_t)v263, (System_String_o *)StringLiteral_346/*"#,0"*/, 0LL);
      v181 = System_Int32__ToString_39741776((int32_t)&v262, (System_String_o *)StringLiteral_346/*"#,0"*/, 0LL);
      v152 = System_String__Concat_44580072(v180, (System_String_o *)StringLiteral_885/*"/"*/, v181, 0LL);
      goto LABEL_25;
    case 46:
      v187 = &StringLiteral_19757/*"img_list_hp"*/;
      goto LABEL_169;
    case 47:
      v187 = &StringLiteral_19752/*"img_list_atk"*/;
LABEL_169:
      Icon = (System_String_o *)*v187;
      v152 = System_Int32__ToString_39741776((int32_t)v263, (System_String_o *)StringLiteral_346/*"#,0"*/, 0LL);
      if ( (v261[0] & 0x80000000) != 0 )
      {
        v230 = System_Int32__ToString((int32_t)v261, 0LL);
      }
      else
      {
        v229 = System_Int32__ToString_39741776((int32_t)v261, (System_String_o *)StringLiteral_346/*"#,0"*/, 0LL);
        v230 = System_String__Concat_44577788((System_String_o *)StringLiteral_699/*"+"*/, v229, 0LL);
      }
      value = v230;
LABEL_202:
      v166 = 0;
      v167 = 0;
LABEL_203:
      LvExceedDewDropItemId = 0;
      goto LABEL_204;
    case 48:
      v166 = 0;
      v167 = 0;
      LvExceedDewDropItemId = 0;
      Icon = 0LL;
      if ( v263[0] <= 0 )
        v152 = (System_String_o *)StringLiteral_1/*""*/;
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
      Icon = (System_String_o *)StringLiteral_19756/*"img_list_costume_num"*/;
      v231 = System_Int32__ToString((int32_t)v263, 0LL);
      goto LABEL_185;
    case 51:
      v188 = &StringLiteral_19764/*"img_list_release_num"*/;
      goto LABEL_183;
    case 52:
      v188 = &StringLiteral_19763/*"img_list_not_release_costume"*/;
      goto LABEL_183;
    case 53:
      v188 = &StringLiteral_19762/*"img_list_not_clear_cond"*/;
      goto LABEL_183;
    case 54:
      v188 = &StringLiteral_19758/*"img_list_limit_cnt"*/;
LABEL_183:
      Icon = (System_String_o *)*v188;
      v232 = System_Int32__ToString((int32_t)v263, 0LL);
      v233 = System_Int32__ToString((int32_t)&v262, 0LL);
      v234 = v232;
      goto LABEL_184;
    case 55:
      Icon = (System_String_o *)StringLiteral_19948/*"img_txt_fp"*/;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v235 = LocalizationManager__Get((System_String_o *)StringLiteral_6478/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0LL);
      v257 = v263[0];
      v236 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v257);
      v231 = System_String__Format(v235, v236, 0LL);
      goto LABEL_185;
    case 56:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v189 = &StringLiteral_9437/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_65:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v189, 0LL);
      goto LABEL_178;
    default:
      v167 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_204;
  }
}


void __fastcall UIIconLabel__Set_41891788(
        UIIconLabel_o *this,
        IconLabelInfo_o *info,
        bool isHide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+8h] [xbp-8h]

  if ( info )
    UIIconLabel__Set_41886452(
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