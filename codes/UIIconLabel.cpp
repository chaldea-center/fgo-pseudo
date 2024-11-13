void __fastcall UIIconLabel___ctor(UIIconLabel_o *this, const MethodInfo *method)
{
  this->fields.blankSize = 2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIIconLabel__Clear(UIIconLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *textLabel; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_4B15799 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B15799 = 1;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
  {
    textLabel = this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_15;
    UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    textLabel = (UILabel_o *)this->fields.iconSprite;
    if ( textLabel )
    {
      UISprite__set_spriteName((UISprite_o *)textLabel, 0LL, 0LL);
      return;
    }
LABEL_15:
    sub_1BCAA3C(textLabel, method);
  }
}


int32_t __fastcall UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BCAA3C(this, method);
  return textLabel->fields.mFontSize;
}


UnityEngine_Vector2_o __fastcall UIIconLabel__GetIconSize(UIIconLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct UISprite_o *v7; // x0
  float x; // s0
  float y; // s1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B1579C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1579C = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v7 = this->fields.iconSprite;
    if ( !v7 )
      sub_1BCAA3C(0LL, v5);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._22_get_localSize.method)(
      v7,
      v7->klass->vtable._23_get_drawingDimensions.methodPtr);
  }
  else
  {
    if ( !byte_4B108BA )
    {
      sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v5, v6);
      byte_4B108BA = 1;
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
        const MethodInfo *method)
{
  float v4; // s0
  float v6; // s3
  float v7; // s1
  float v8; // s2
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = 1.0;
  if ( dispData > compareData && compareData > -1 )
    v4 = 0.5;
  v6 = 1.0;
  v7 = v4;
  v8 = v4;
  result.fields.a = v6;
  result.fields.b = v8;
  result.fields.g = v7;
  result.fields.r = v4;
  return result;
}


UnityEngine_Vector2Int_o __fastcall UIIconLabel__GetTextLabelSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BCAA3C(this, method);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void __fastcall UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+8h] [xbp-18h]

  if ( info )
    UIIconLabel__Set_38947284(
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
  __int64 v3; // x2
  UIWidget_o *textLabel; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1579D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B1579D = 1;
  }
  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_15;
  v10.fields.r = textLabel->fields.mColor.fields.r;
  v10.fields.g = textLabel->fields.mColor.fields.g;
  v10.fields.b = textLabel->fields.mColor.fields.b;
  v10.fields.a = alpha;
  UIWidget__set_color(textLabel, v10, 0LL);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
  {
    textLabel = (UIWidget_o *)this->fields.extentionTextLabel;
    if ( !textLabel )
      goto LABEL_15;
    v11.fields.r = textLabel->fields.mColor.fields.r;
    v11.fields.g = textLabel->fields.mColor.fields.g;
    v11.fields.b = textLabel->fields.mColor.fields.b;
    v11.fields.a = alpha;
    UIWidget__set_color(textLabel, v11, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
LABEL_15:
    sub_1BCAA3C(textLabel, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *NumberFormat; // x22
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_o **v16; // x9
  System_String_o *v17; // x21
  UILabel_o *textLabel; // x19
  Il2CppObject *v19; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1

  if ( (byte_4B1579B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&data, *(_QWORD *)&adjustData);
    sub_1BCA7E0(&StringLiteral_3721/*"COMBINE_RES_INFO"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_3711/*"COMBINE_LIMIT_INFO"*/, v11, v12);
    byte_4B1579B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&data);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0LL);
  v14 = LocalizationManager__GetNumberFormat(adjustData, 0LL);
  if ( isLimit )
    v16 = (System_String_o **)&StringLiteral_3711/*"COMBINE_LIMIT_INFO"*/;
  else
    v16 = (System_String_o **)&StringLiteral_3721/*"COMBINE_RES_INFO"*/;
  v17 = *v16;
  textLabel = this->fields.textLabel;
  v19 = (Il2CppObject *)v14;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  v20 = LocalizationManager__Get(v17, 0LL);
  v21 = System_String__Format_62415592(v20, NumberFormat, v19, 0LL);
  if ( !textLabel )
    sub_1BCAA3C(v21, v22);
  UILabel__set_text(textLabel, v21, 0LL);
}


void __fastcall UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+8h] [xbp-18h]

  UIIconLabel__Set_38947284(this, 27, 0, 0, 0, 0LL, 1, 0, 0, v2);
}


void __fastcall UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+8h] [xbp-18h]

  UIIconLabel__Set_38947284(this, iconKind, price, holdCount, 0, 0LL, 0, 0, 0, v5);
}


void __fastcall UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(textLabel, size);
  }
  UIWidget__set_height(textLabel, m_Y, 0LL);
}


void __fastcall UIIconLabel__SetTextLabelStrikeout(UIIconLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIIconLabel_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *textLabel; // x19
  System_String_o *v7; // x1

  v3 = this;
  if ( (byte_4B1579E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16008/*"[/s]"*/, method, v2);
    this = (UIIconLabel_o *)sub_1BCA7E0(&StringLiteral_16177/*"[s]"*/, v4, v5);
    byte_4B1579E = 1;
  }
  textLabel = v3->fields.textLabel;
  if ( !textLabel )
    sub_1BCAA3C(this, method);
  v7 = System_String__Concat_62412480(
         (System_String_o *)StringLiteral_16177/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_16008/*"[/s]"*/,
         0LL);
  UILabel__set_text(textLabel, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__Set_38947284(
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
  int LvExceedDewDropItemId; // w24
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  System_String_o *v107; // x0
  __int64 v108; // x1
  int v109; // w29
  System_String_o *v110; // x21
  float v111; // s8
  System_String_o *v112; // x25
  float v113; // s10
  float v114; // s11
  float v115; // s9
  int v116; // w20
  char v117; // w22
  System_String_o *v118; // x23
  System_String_o *v119; // x0
  System_String_o *PriceInfo; // x0
  int32_t v121; // w20
  System_String_o *v122; // x0
  System_String_o **v123; // x8
  __int64 v124; // x8
  System_String_o *v125; // x22
  System_String_o *v126; // x0
  __int64 *v127; // x8
  System_String_o *v128; // x0
  System_String_o *v129; // x23
  System_String_o *v130; // x0
  __int64 *v131; // x8
  __int64 *v132; // x8
  System_String_o *v133; // x22
  Il2CppObject *v134; // x0
  System_String_o *v135; // x22
  Il2CppObject *v136; // x0
  int32_t v137; // w22
  System_String_o *v138; // x22
  Il2CppObject *v139; // x0
  System_String_o *v140; // x22
  Il2CppObject *v141; // x0
  System_String_o *v142; // x22
  Il2CppObject *v143; // x0
  System_String_o *v144; // x22
  Il2CppObject *v145; // x0
  System_String_o *v146; // x22
  Il2CppObject *v147; // x0
  System_String_o *v148; // x0
  bool v149; // cc
  System_String_o *v150; // x0
  bool v151; // cc
  System_String_o *v152; // x0
  bool v153; // cc
  System_String_o *v154; // x0
  bool v155; // cc
  System_String_o *v156; // x0
  bool v157; // cc
  System_String_o *v158; // x0
  bool v159; // cc
  BalanceConfig_c *v160; // x0
  bool v161; // cc
  __int64 v162; // x20
  UIWidget_o *iconSprite; // x0
  int32_t v164; // w1
  System_String_o *v165; // x23
  System_String_o *v166; // x0
  int32_t v167; // w22
  int32_t v168; // w22
  int32_t RarityIcon; // w24
  __int64 *v170; // x8
  System_String_o *v171; // x0
  System_String_o *v172; // x0
  System_String_o *v173; // x0
  __int64 *v174; // x8
  System_String_o *v175; // x23
  System_String_o *v176; // x0
  System_String_o *v177; // x23
  Il2CppObject *v178; // x0
  System_String_o *NumberFormat_39108640; // x0
  bool v180; // cc
  System_String_o *v181; // x0
  __int64 v182; // x1
  UnityEngine_Object_o *extentionTextLabel; // x25
  UnityEngine_Object_o *v184; // x21
  __int64 v185; // x1
  UISprite_o *v186; // x20
  System_String_o *v187; // x20
  struct UISprite_o *v188; // x20
  UISprite_o *v189; // x0
  UISprite_o *v190; // x20
  UnityEngine_Object_o *v191; // x20
  __int64 v192; // x1
  UnityEngine_Object_o *transform; // x21
  float v194; // s0
  float v195; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *textLabel; // x8
  int32_t mAlignment; // w8
  float v200; // s0
  float v201; // s10
  System_String_o *spriteName; // [xsp+0h] [xbp-A0h]
  int v203; // [xsp+8h] [xbp-98h]
  int32_t v204; // [xsp+Ch] [xbp-94h] BYREF
  int v205; // [xsp+10h] [xbp-90h] BYREF
  int32_t v206; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t exceedCount; // [xsp+18h] [xbp-88h] BYREF
  int32_t price; // [xsp+1Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v210; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v211; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  exceedCount = adjustData;
  price = data;
  v206 = equipData;
  LvExceedDewDropItemId = iconKind;
  if ( (byte_4B1579A & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&iconKind, *(_QWORD *)&data);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&int_TypeInfo, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&Rarity_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_20550/*"img_list_atk"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_5720/*"EVENT_ITEM_UNIT"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_10955/*"QP_UNIT"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_20563/*"img_list_not_clear_cond"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_9417/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_12427/*"STONE_FRAGMENTS_UNIT"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_6608/*"FRIENDSHIP_UNIT"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_6551/*"FOLLOWER_SELECT_TYPE_POINT"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_20730/*"img_txt_bondslevel"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_20556/*"img_list_cost"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_20564/*"img_list_not_release_costume"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_20559/*"img_list_limit_cnt"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_20375/*"icon_nplv"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_1870/*"?"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_20561/*"img_list_lv"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_8634/*"MANA_UNIT"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_20558/*"img_list_hp"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_20557/*"img_list_costume_num"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_691/*"("*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_2072/*"ANONYMOUS_UNIT"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_20763/*"img_txt_fp"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_12458/*"STONE_UNIT"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_1875/*"??/??"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_712/*"(+"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_6604/*"FREE_NAME"*/, v91, v92);
    sub_1BCA7E0(&StringLiteral_1874/*"??"*/, v93, v94);
    sub_1BCA7E0(&StringLiteral_20565/*"img_list_release_num"*/, v95, v96);
    sub_1BCA7E0(&StringLiteral_20588/*"img_nplv"*/, v97, v98);
    sub_1BCA7E0(&StringLiteral_11088/*"RARE_PRI_UNIT"*/, v99, v100);
    sub_1BCA7E0(&StringLiteral_20560/*"img_list_limitcount"*/, v101, v102);
    sub_1BCA7E0(&StringLiteral_1876/*"???"*/, v103, v104);
    sub_1BCA7E0(&StringLiteral_20562/*"img_list_no"*/, v105, v106);
    byte_4B1579A = 1;
  }
  v205 = equipData + data;
  v107 = System_Int32__ToString((int32_t)&v205, 0LL);
  v109 = exceedCount;
  v110 = (System_String_o *)StringLiteral_1/*""*/;
  v111 = 1.0;
  v112 = v107;
  if ( exceedCount <= 0 )
    v113 = 1.0;
  else
    v113 = 0.92157;
  if ( exceedCount <= 0 )
    v114 = 1.0;
  else
    v114 = 0.015686;
  v115 = 1.0;
  v203 = LvExceedDewDropItemId;
  spriteName = 0LL;
  v116 = 0;
  v117 = 0;
  v118 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( LvExceedDewDropItemId )
  {
    case 0:
      goto LABEL_242;
    case 2:
      if ( price < 1 )
        goto LABEL_162;
      spriteName = (System_String_o *)StringLiteral_20561/*"img_list_lv"*/;
      if ( exceedCount < 1 )
      {
        v116 = 0;
        v117 = 0;
        LvExceedDewDropItemId = 0;
        if ( isHide )
          v118 = (System_String_o *)StringLiteral_1874/*"??"*/;
        else
          v118 = v107;
        goto LABEL_242;
      }
      if ( isHide )
      {
        v116 = 0;
        v117 = 0;
        LvExceedDewDropItemId = 0;
        v118 = (System_String_o *)StringLiteral_1875/*"??/??"*/;
        goto LABEL_199;
      }
      v118 = System_Int32__ToString((int32_t)&price, 0LL);
      v111 = 1.0;
      if ( !isMaxHide )
      {
        v181 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
        v118 = System_String__Concat_62412480(v118, (System_String_o *)StringLiteral_1120/*"/"*/, v181, 0LL);
      }
      v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_200;
    case 3:
      v127 = &StringLiteral_20558/*"img_list_hp"*/;
      goto LABEL_38;
    case 5:
      v127 = &StringLiteral_20550/*"img_list_atk"*/;
LABEL_38:
      spriteName = (System_String_o *)*v127;
      v205 = v206 + price;
      v128 = System_Int32__ToString_63206828((int32_t)&v205, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
      v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      if ( isHide )
        v118 = (System_String_o *)StringLiteral_1876/*"???"*/;
      else
        v118 = v128;
      goto LABEL_242;
    case 7:
      spriteName = (System_String_o *)StringLiteral_20556/*"img_list_cost"*/;
      if ( v206 < 1 )
      {
        v116 = 0;
        v117 = 0;
        LvExceedDewDropItemId = 0;
        goto LABEL_241;
      }
      v129 = System_Int32__ToString((int32_t)&price, 0LL);
      v130 = System_Int32__ToString((int32_t)&v206, 0LL);
      v118 = System_String__Concat_62412480(v129, (System_String_o *)StringLiteral_855/*"+"*/, v130, 0LL);
LABEL_225:
      v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_242;
    case 8:
    case 57:
      v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      v124 = StringLiteral_20562/*"img_list_no"*/;
      v118 = v107;
      goto LABEL_49;
    case 9:
      v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      if ( price >= 1 )
        v118 = v107;
      else
        v118 = (System_String_o *)StringLiteral_1/*""*/;
      if ( price >= 1 )
        v124 = StringLiteral_20560/*"img_list_limitcount"*/;
      else
        v124 = 0LL;
LABEL_49:
      spriteName = (System_String_o *)v124;
      goto LABEL_242;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v131 = &StringLiteral_6604/*"FREE_NAME"*/;
      goto LABEL_209;
    case 11:
    case 27:
      if ( isHide )
      {
        v118 = (System_String_o *)StringLiteral_1870/*"?"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
        NumberFormat_39108640 = LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
        v109 = exceedCount;
        v118 = NumberFormat_39108640;
      }
      v115 = 1.0;
      v180 = price <= v109 || v109 <= -1;
      v116 = 0;
      LvExceedDewDropItemId = 0;
      if ( v180 )
        v111 = 1.0;
      else
        v111 = 0.5;
      spriteName = 0LL;
      goto LABEL_221;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v132 = &StringLiteral_12458/*"STONE_UNIT"*/;
      goto LABEL_77;
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v133 = LocalizationManager__Get((System_String_o *)StringLiteral_8634/*"MANA_UNIT"*/, 0LL);
      v134 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v118 = System_String__Format(v133, v134, 0LL);
      v116 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 7;
      goto LABEL_84;
    case 14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v135 = LocalizationManager__Get((System_String_o *)StringLiteral_10955/*"QP_UNIT"*/, 0LL);
      v136 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v118 = System_String__Format(v135, v136, 0LL);
      v116 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 5;
      goto LABEL_84;
    case 15:
      v137 = price;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      PriceInfo = LocalizationManager__GetPriceInfo(v137, 0LL);
      goto LABEL_210;
    case 16:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v138 = LocalizationManager__Get((System_String_o *)StringLiteral_6608/*"FRIENDSHIP_UNIT"*/, 0LL);
      v139 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      PriceInfo = System_String__Format(v138, v139, 0LL);
      goto LABEL_210;
    case 17:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      PriceInfo = LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      goto LABEL_210;
    case 18:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v140 = LocalizationManager__Get((System_String_o *)StringLiteral_5720/*"EVENT_ITEM_UNIT"*/, 0LL);
      v141 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v118 = System_String__Format(v140, v141, 0LL);
      v116 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_84;
    case 19:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v132 = &StringLiteral_12427/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_77:
      v142 = LocalizationManager__Get((System_String_o *)*v132, 0LL);
      v143 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v118 = System_String__Format(v142, v143, 0LL);
      v116 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 6;
      goto LABEL_84;
    case 20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v144 = LocalizationManager__Get((System_String_o *)StringLiteral_2072/*"ANONYMOUS_UNIT"*/, 0LL);
      v145 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v118 = System_String__Format(v144, v145, 0LL);
      v116 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 17;
      goto LABEL_84;
    case 21:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v146 = LocalizationManager__Get((System_String_o *)StringLiteral_11088/*"RARE_PRI_UNIT"*/, 0LL);
      v147 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v118 = System_String__Format(v146, v147, 0LL);
      v116 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 18;
LABEL_84:
      v117 = 1;
      goto LABEL_242;
    case 22:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v148 = LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v115 = 1.0;
      v149 = price <= exceedCount || exceedCount <= -1;
      v118 = v148;
      v116 = 0;
      spriteName = 0LL;
      if ( v149 )
        v111 = 1.0;
      else
        v111 = 0.5;
      LvExceedDewDropItemId = 6;
      goto LABEL_221;
    case 23:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v150 = LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v115 = 1.0;
      v151 = price <= exceedCount || exceedCount <= -1;
      v118 = v150;
      v116 = 0;
      spriteName = 0LL;
      if ( v151 )
        v111 = 1.0;
      else
        v111 = 0.5;
      LvExceedDewDropItemId = 7;
      goto LABEL_221;
    case 24:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v152 = LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v115 = 1.0;
      v153 = price <= exceedCount || exceedCount <= -1;
      v118 = v152;
      v116 = 0;
      spriteName = 0LL;
      if ( v153 )
        v111 = 1.0;
      else
        v111 = 0.5;
      LvExceedDewDropItemId = 5;
      goto LABEL_221;
    case 25:
    case 26:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v118 = LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_144;
    case 28:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v154 = LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v115 = 1.0;
      v155 = price <= exceedCount || exceedCount <= -1;
      v118 = v154;
      v116 = 0;
      spriteName = 0LL;
      if ( v155 )
        v111 = 1.0;
      else
        v111 = 0.5;
      LvExceedDewDropItemId = 16;
      goto LABEL_221;
    case 29:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v156 = LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v115 = 1.0;
      v157 = price <= exceedCount || exceedCount <= -1;
      v118 = v156;
      v116 = 0;
      spriteName = 0LL;
      if ( v157 )
        v111 = 1.0;
      else
        v111 = 0.5;
      LvExceedDewDropItemId = 17;
      goto LABEL_221;
    case 30:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v158 = LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v115 = 1.0;
      v159 = price <= exceedCount || exceedCount <= -1;
      v118 = v158;
      v116 = 0;
      spriteName = 0LL;
      if ( v159 )
        v111 = 1.0;
      else
        v111 = 0.5;
      LvExceedDewDropItemId = 18;
LABEL_221:
      v117 = 1;
      goto LABEL_222;
    case 31:
      v160 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v108);
        v160 = BalanceConfig_TypeInfo;
      }
      LvExceedDewDropItemId = v160->static_fields->LvExceedDewDropItemId;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v118 = LocalizationManager__GetNumberFormat_39108640(v112, 0LL);
      v116 = 0;
      v117 = 0;
LABEL_144:
      v115 = 1.0;
      v161 = price <= exceedCount || exceedCount <= -1;
      spriteName = 0LL;
      if ( v161 )
        v111 = 1.0;
      else
        v111 = 0.5;
LABEL_222:
      v113 = v111;
      v114 = v111;
      goto LABEL_242;
    case 32:
      if ( (price & 0x80000000) != 0 )
        goto LABEL_162;
      v162 = StringLiteral_20730/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_20730/*"img_txt_bondslevel"*/ )
        goto LABEL_160;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_295;
      v164 = 40;
      goto LABEL_158;
    case 33:
      if ( price < 1 )
        goto LABEL_162;
      v162 = StringLiteral_20588/*"img_nplv"*/;
      if ( !StringLiteral_20588/*"img_nplv"*/ )
        goto LABEL_160;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_295;
      v164 = 55;
LABEL_158:
      UIWidget__set_width(iconSprite, v164, 0LL);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_295;
      UIWidget__set_height(iconSprite, 18, 0LL);
      v109 = exceedCount;
LABEL_160:
      spriteName = (System_String_o *)v162;
      if ( v109 < 1 )
      {
        v116 = 0;
        LvExceedDewDropItemId = 0;
        goto LABEL_240;
      }
      v165 = System_Int32__ToString((int32_t)&price, 0LL);
      v166 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
      v118 = System_String__Concat_62412480(v165, (System_String_o *)StringLiteral_1120/*"/"*/, v166, 0LL);
      v116 = 0;
      LvExceedDewDropItemId = 0;
      v117 = 1;
LABEL_199:
      v111 = 1.0;
LABEL_200:
      v113 = 1.0;
      goto LABEL_201;
    case 34:
      if ( price < 1 )
      {
        v116 = 0;
        v117 = 0;
        LvExceedDewDropItemId = 0;
        spriteName = 0LL;
        v111 = 1.0;
        v113 = 1.0;
        v114 = 1.0;
        v115 = 1.0;
        goto LABEL_163;
      }
      if ( exceedCount )
      {
        if ( (unsigned int)(exceedCount - 1) < 0x62 )
        {
          v114 = 0.31373;
          v113 = 0.94118;
          v111 = 0.98824;
        }
        else
        {
          if ( exceedCount != 99 )
            goto LABEL_239;
          v114 = 0.058824;
          v113 = 0.45098;
          v111 = 1.0;
        }
      }
      else
      {
        v111 = 1.0;
        v113 = 1.0;
        v114 = 1.0;
      }
      v115 = 1.0;
LABEL_239:
      v116 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = (System_String_o *)StringLiteral_20375/*"icon_nplv"*/;
LABEL_240:
      v117 = 1;
LABEL_241:
      v118 = v112;
      goto LABEL_242;
    case 35:
      v167 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v108);
      spriteName = Rarity__getIcon(v167, 0LL);
      goto LABEL_180;
    case 36:
      v168 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v108);
      spriteName = Rarity__getIcon_38416824(v168, v109, lv, 0LL);
      if ( exceedCount < 1 )
        goto LABEL_180;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v108);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_295;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)iconSprite, price, exceedCount, 0, 0LL);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_295;
      if ( ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)iconSprite, price, lv, RarityIcon, 0LL) > 2 )
        v116 = 1;
      else
LABEL_180:
        v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      v118 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_242;
    case 38:
    case 39:
    case 40:
      if ( price >= 1 )
      {
        v119 = System_Int32__ToString_63206828((int32_t)&price, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
        PriceInfo = System_String__Concat_62401220((System_String_o *)StringLiteral_855/*"+"*/, v119, 0LL);
LABEL_210:
        v118 = PriceInfo;
        v116 = 0;
        v117 = 0;
        LvExceedDewDropItemId = 0;
        spriteName = 0LL;
        goto LABEL_242;
      }
      if ( (price & 0x80000000) != 0 )
      {
        PriceInfo = System_Int32__ToString_63206828((int32_t)&price, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
        goto LABEL_210;
      }
LABEL_162:
      v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
LABEL_163:
      v118 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_242:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_295;
      UILabel__set_text((UILabel_o *)iconSprite, v118, 0LL);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_295;
      v211.fields.r = v111;
      v211.fields.g = v113;
      v211.fields.b = v114;
      v211.fields.a = v115;
      UIWidget__set_color(iconSprite, v211, 0LL);
      extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v182);
      if ( !UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
        goto LABEL_249;
      iconSprite = (UIWidget_o *)this->fields.extentionTextLabel;
      if ( !iconSprite )
        goto LABEL_295;
      UILabel__set_text((UILabel_o *)iconSprite, v110, 0LL);
LABEL_249:
      v184 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v108);
      if ( !UnityEngine_Object__op_Inequality(v184, 0LL, 0LL) )
        return;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_295;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_295;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, v203 != 56, 0LL);
      if ( LvExceedDewDropItemId < 1 )
      {
        if ( v116 )
        {
          v188 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v185);
          v189 = v188;
          v187 = spriteName;
          AtlasManager__SetEventSprite(v189, spriteName, 0LL);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v190 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v185);
          AtlasManager__SetCommon(v190, 0LL);
          v187 = spriteName;
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_295;
        UISprite__set_spriteName((UISprite_o *)iconSprite, v187, 0LL);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v186 = this->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v185);
        AtlasManager__SetItem(v186, LvExceedDewDropItemId, 0LL);
        v187 = spriteName;
      }
      if ( !(v117 & 1 | (v187 == 0LL)) )
      {
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_295;
        ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))iconSprite->klass->vtable._33_MakePixelPerfect.method)(
          iconSprite,
          iconSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_295;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_295;
      iconSprite = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)iconSprite, 0LL);
      if ( !this->fields.textLabel )
        goto LABEL_295;
      v191 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v192);
      if ( UnityEngine_Object__op_Equality(v191, transform, 0LL) )
      {
        iconSprite = (UIWidget_o *)this->fields.textLabel;
        if ( !iconSprite )
          goto LABEL_295;
        LODWORD(v194) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)iconSprite, 0LL);
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_295;
        v195 = v194;
        iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
        if ( !iconSprite )
          goto LABEL_295;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        iconSprite = (UIWidget_o *)System_String__op_Equality(v118, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        textLabel = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !textLabel )
            goto LABEL_295;
          v195 = v195 - (float)textLabel->fields.mSpacingX;
        }
        else if ( !textLabel )
        {
          goto LABEL_295;
        }
        mAlignment = textLabel->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v200 = (float)(v195 * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v201 = (float)-this->fields.blankSize;
            goto LABEL_291;
          }
          v200 = v195 + (float)this->fields.blankSize;
        }
        v201 = -v200;
LABEL_291:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
          if ( iconSprite )
          {
            v210.fields.x = v201;
            v210.fields.y = y;
            v210.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v210, 0LL);
            return;
          }
        }
LABEL_295:
        sub_1BCAA3C(iconSprite, v108);
      }
      return;
    case 41:
    case 42:
    case 43:
      v121 = price;
      v122 = System_Int32__ToString_63206828((int32_t)&price, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
      v123 = (System_String_o **)&StringLiteral_691/*"("*/;
      if ( v121 >= 0 )
        v123 = (System_String_o **)&StringLiteral_712/*"(+"*/;
      v118 = System_String__Concat_62412480(*v123, v122, (System_String_o *)StringLiteral_809/*")"*/, 0LL);
      v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      if ( price <= exceedCount )
      {
        v111 = 1.0;
        if ( price >= exceedCount )
          v113 = 1.0;
        else
          v113 = 0.0;
        spriteName = 0LL;
        v114 = v113;
      }
      else
      {
        spriteName = 0LL;
        v113 = 1.0;
        v111 = 0.0;
LABEL_201:
        v114 = 1.0;
      }
      v115 = 1.0;
      goto LABEL_242;
    case 44:
    case 45:
      if ( (price & 0x80000000) != 0 )
        goto LABEL_162;
      if ( exceedCount < 1 )
        goto LABEL_29;
      v125 = System_Int32__ToString_63206828((int32_t)&price, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
      v126 = System_Int32__ToString_63206828((int32_t)&exceedCount, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
      v118 = System_String__Concat_62412480(v125, (System_String_o *)StringLiteral_1120/*"/"*/, v126, 0LL);
      v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_199;
    case 46:
      v170 = &StringLiteral_20558/*"img_list_hp"*/;
      goto LABEL_184;
    case 47:
      v170 = &StringLiteral_20550/*"img_list_atk"*/;
LABEL_184:
      spriteName = (System_String_o *)*v170;
      v118 = System_Int32__ToString_63206828((int32_t)&price, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
      if ( (v206 & 0x80000000) != 0 )
      {
        v172 = System_Int32__ToString((int32_t)&v206, 0LL);
      }
      else
      {
        v171 = System_Int32__ToString_63206828((int32_t)&v206, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
        v172 = System_String__Concat_62401220((System_String_o *)StringLiteral_855/*"+"*/, v171, 0LL);
      }
      v110 = v172;
      goto LABEL_225;
    case 48:
      v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      if ( price <= 0 )
        v118 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v118 = v107;
      goto LABEL_242;
    case 49:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      PriceInfo = LocalizationManager__GetDate(time, 0LL);
      goto LABEL_210;
    case 50:
      spriteName = (System_String_o *)StringLiteral_20557/*"img_list_costume_num"*/;
      v173 = System_Int32__ToString((int32_t)&price, 0LL);
      goto LABEL_198;
    case 51:
      v174 = &StringLiteral_20565/*"img_list_release_num"*/;
      goto LABEL_197;
    case 52:
      v174 = &StringLiteral_20564/*"img_list_not_release_costume"*/;
      goto LABEL_197;
    case 53:
      v174 = &StringLiteral_20563/*"img_list_not_clear_cond"*/;
      goto LABEL_197;
    case 54:
      v174 = &StringLiteral_20559/*"img_list_limit_cnt"*/;
LABEL_197:
      spriteName = (System_String_o *)*v174;
      v175 = System_Int32__ToString((int32_t)&price, 0LL);
      v176 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
      v173 = System_String__Concat_62412480(v175, (System_String_o *)StringLiteral_1120/*"/"*/, v176, 0LL);
      goto LABEL_198;
    case 55:
      spriteName = (System_String_o *)StringLiteral_20763/*"img_txt_fp"*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v177 = LocalizationManager__Get((System_String_o *)StringLiteral_6551/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0LL);
      v204 = price;
      v178 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204);
      v173 = System_String__Format(v177, v178, 0LL);
LABEL_198:
      v118 = v173;
      v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_199;
    case 56:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      v131 = &StringLiteral_9417/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_209:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v131, 0LL);
      goto LABEL_210;
    default:
LABEL_29:
      v116 = 0;
      v117 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_241;
  }
}


void __fastcall UIIconLabel__Set_38974416(
        UIIconLabel_o *this,
        IconLabelInfo_o *info,
        bool isHide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  if ( info )
    UIIconLabel__Set_38947284(
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