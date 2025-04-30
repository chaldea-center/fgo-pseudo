void __fastcall UIIconLabel___ctor(UIIconLabel_o *this, const MethodInfo *method)
{
  this->fields.blankSize = 2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIIconLabel__Clear(UIIconLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_4A4DA24 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v3);
    byte_4A4DA24 = 1;
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
    sub_1B86614(textLabel, method);
  }
}


int32_t __fastcall UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1B86614(this, method);
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

  if ( (byte_4A4DA27 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4DA27 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      sub_1B86614(0LL, v4);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._22_get_localSize.method)(
      v5,
      v5->klass->vtable._23_get_drawingDimensions.methodPtr);
  }
  else
  {
    if ( !byte_4A486DA )
    {
      sub_1B863B8(&UnityEngine_Vector2_TypeInfo, v4);
      byte_4A486DA = 1;
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
    sub_1B86614(this, method);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void __fastcall UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+10h] [xbp-20h]

  if ( info )
    UIIconLabel__Set_39193520(
      this,
      info->fields.iconKind,
      info->fields.data,
      info->fields.adjustData,
      info->fields.equipData,
      info->fields.time,
      info->fields.isHide,
      info->fields.isMaxHide,
      info->fields.lv,
      info->fields.actualRarity,
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

  if ( (byte_4A4DA28 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4DA28 = 1;
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
    sub_1B86614(textLabel, method);
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
  System_String_o *v14; // x21
  UILabel_o *textLabel; // x19
  Il2CppObject *v16; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1

  if ( (byte_4A4DA26 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, *(_QWORD *)&data);
    sub_1B863B8(&StringLiteral_3610/*"COMBINE_RES_INFO"*/, v9);
    sub_1B863B8(&StringLiteral_3600/*"COMBINE_LIMIT_INFO"*/, v10);
    byte_4A4DA26 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0LL);
  v12 = LocalizationManager__GetNumberFormat(adjustData, 0LL);
  if ( isLimit )
    v13 = (System_String_o **)&StringLiteral_3600/*"COMBINE_LIMIT_INFO"*/;
  else
    v13 = (System_String_o **)&StringLiteral_3610/*"COMBINE_RES_INFO"*/;
  v14 = *v13;
  textLabel = this->fields.textLabel;
  v16 = (Il2CppObject *)v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get(v14, 0LL);
  v18 = System_String__Format_61686468(v17, NumberFormat, v16, 0LL);
  if ( !textLabel )
    sub_1B86614(v18, v19);
  UILabel__set_text(textLabel, v18, 0LL);
}


void __fastcall UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+10h] [xbp-20h]

  UIIconLabel__Set_39193520(this, 27, 0, 0, 0, 0LL, 1, 0, 0, 0, v2);
}


void __fastcall UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+10h] [xbp-20h]

  UIIconLabel__Set_39193520(this, iconKind, price, holdCount, 0, 0LL, 0, 0, 0, 0, v5);
}


void __fastcall UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1B86614(0LL, method);
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
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B86614)(textLabel, size);
  }
  UIWidget__set_height(textLabel, m_Y, 0LL);
}


void __fastcall UIIconLabel__SetTextLabelStrikeout(UIIconLabel_o *this, const MethodInfo *method)
{
  UIIconLabel_o *v2; // x19
  __int64 v3; // x1
  UILabel_o *textLabel; // x19
  System_String_o *v5; // x1

  v2 = this;
  if ( (byte_4A4DA29 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_15609/*"[/s]"*/, method);
    this = (UIIconLabel_o *)sub_1B863B8(&StringLiteral_15778/*"[s]"*/, v3);
    byte_4A4DA29 = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    sub_1B86614(this, method);
  v5 = System_String__Concat_61683424(
         (System_String_o *)StringLiteral_15778/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_15609/*"[/s]"*/,
         0LL);
  UILabel__set_text(textLabel, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__Set_39193520(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t data,
        int32_t adjustData,
        int32_t equipData,
        int64_t time,
        bool isHide,
        bool isMaxHide,
        int32_t lv,
        int32_t actualRarity,
        const MethodInfo *method)
{
  int LvExceedDewDropItemId; // w24
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
  __int64 v62; // x1
  System_String_o *v63; // x0
  __int64 v64; // x1
  int v65; // w29
  System_String_o *v66; // x21
  float v67; // s8
  System_String_o *v68; // x25
  float v69; // s10
  float v70; // s11
  float v71; // s9
  int v72; // w20
  char v73; // w22
  System_String_o *v74; // x23
  System_String_o *v75; // x0
  System_String_o *PriceInfo; // x0
  int32_t v77; // w20
  System_String_o *v78; // x0
  System_String_o **v79; // x8
  __int64 v80; // x8
  System_String_o *v81; // x22
  System_String_o *v82; // x0
  __int64 *v83; // x8
  System_String_o *v84; // x0
  System_String_o *v85; // x23
  System_String_o *v86; // x0
  __int64 *v87; // x8
  __int64 *v88; // x8
  System_String_o *v89; // x22
  Il2CppObject *v90; // x0
  System_String_o *v91; // x22
  Il2CppObject *v92; // x0
  int32_t v93; // w22
  System_String_o *v94; // x22
  Il2CppObject *v95; // x0
  System_String_o *v96; // x22
  Il2CppObject *v97; // x0
  System_String_o *v98; // x22
  Il2CppObject *v99; // x0
  System_String_o *v100; // x22
  Il2CppObject *v101; // x0
  System_String_o *v102; // x22
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  bool v105; // cc
  System_String_o *v106; // x0
  bool v107; // cc
  System_String_o *v108; // x0
  bool v109; // cc
  float v110; // s1
  bool v111; // cc
  System_String_o *v112; // x0
  bool v113; // cc
  System_String_o *v114; // x0
  bool v115; // cc
  BalanceConfig_c *v116; // x0
  bool v117; // cc
  __int64 v118; // x20
  UIWidget_o *iconSprite; // x0
  int32_t v120; // w1
  System_String_o *v121; // x23
  System_String_o *v122; // x0
  int32_t v123; // w22
  int32_t v124; // w22
  int32_t RarityIcon; // w25
  __int64 *v126; // x8
  System_String_o *v127; // x0
  System_String_o *v128; // x0
  System_String_o *v129; // x0
  __int64 *v130; // x8
  System_String_o *v131; // x23
  System_String_o *v132; // x0
  System_String_o *v133; // x23
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  Il2CppObject *v137; // x0
  System_String_o *NumberFormat_39433948; // x0
  bool v139; // cc
  System_String_o *v140; // x0
  UnityEngine_Object_o *extentionTextLabel; // x25
  UnityEngine_Object_o *v142; // x21
  UISprite_o *v143; // x20
  System_String_o *v144; // x20
  struct UISprite_o *v145; // x20
  UISprite_o *v146; // x0
  UISprite_o *v147; // x20
  UnityEngine_Object_o *v148; // x20
  UnityEngine_Object_o *transform; // x21
  float v150; // s0
  float v151; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *textLabel; // x8
  int32_t mAlignment; // w8
  float v156; // s0
  float v157; // s10
  System_String_o *spriteName; // [xsp+0h] [xbp-A0h]
  int v159; // [xsp+8h] [xbp-98h]
  int32_t v160; // [xsp+Ch] [xbp-94h] BYREF
  int v161; // [xsp+10h] [xbp-90h] BYREF
  int32_t v162; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t exceedCount; // [xsp+18h] [xbp-88h] BYREF
  int32_t price; // [xsp+1Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v166; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v167; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  exceedCount = adjustData;
  price = data;
  v162 = equipData;
  LvExceedDewDropItemId = iconKind;
  if ( (byte_4A4DA25 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, *(_QWORD *)&iconKind);
    sub_1B863B8(&BalanceConfig_TypeInfo, v18);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantExceedMaster___, v19);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v20);
    sub_1B863B8(&DataManager_TypeInfo, v21);
    sub_1B863B8(&int_TypeInfo, v22);
    sub_1B863B8(&LocalizationManager_TypeInfo, v23);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v24);
    sub_1B863B8(&Rarity_TypeInfo, v25);
    sub_1B863B8(&StringLiteral_20136/*"img_list_atk"*/, v26);
    sub_1B863B8(&StringLiteral_5578/*"EVENT_ITEM_UNIT"*/, v27);
    sub_1B863B8(&StringLiteral_10657/*"QP_UNIT"*/, v28);
    sub_1B863B8(&StringLiteral_809/*"+"*/, v29);
    sub_1B863B8(&StringLiteral_20149/*"img_list_not_clear_cond"*/, v30);
    sub_1B863B8(&StringLiteral_9163/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/, v31);
    sub_1B863B8(&StringLiteral_12143/*"STONE_FRAGMENTS_UNIT"*/, v32);
    sub_1B863B8(&StringLiteral_6453/*"FRIENDSHIP_UNIT"*/, v33);
    sub_1B863B8(&StringLiteral_6396/*"FOLLOWER_SELECT_TYPE_POINT"*/, v34);
    sub_1B863B8(&StringLiteral_20322/*"img_txt_bondslevel"*/, v35);
    sub_1B863B8(&StringLiteral_20142/*"img_list_cost"*/, v36);
    sub_1B863B8(&StringLiteral_20150/*"img_list_not_release_costume"*/, v37);
    sub_1B863B8(&StringLiteral_20145/*"img_list_limit_cnt"*/, v38);
    sub_1B863B8(&StringLiteral_19949/*"icon_nplv"*/, v39);
    sub_1B863B8(&StringLiteral_1768/*"?"*/, v40);
    sub_1B863B8(&StringLiteral_20147/*"img_list_lv"*/, v41);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v42);
    sub_1B863B8(&StringLiteral_8384/*"MANA_UNIT"*/, v43);
    sub_1B863B8(&StringLiteral_397/*"#,0"*/, v44);
    sub_1B863B8(&StringLiteral_20144/*"img_list_hp"*/, v45);
    sub_1B863B8(&StringLiteral_20143/*"img_list_costume_num"*/, v46);
    sub_1B863B8(&StringLiteral_652/*"("*/, v47);
    sub_1B863B8(&StringLiteral_1962/*"ANONYMOUS_UNIT"*/, v48);
    sub_1B863B8(&StringLiteral_20355/*"img_txt_fp"*/, v49);
    sub_1B863B8(&StringLiteral_764/*")"*/, v50);
    sub_1B863B8(&StringLiteral_12177/*"STONE_UNIT"*/, v51);
    sub_1B863B8(&StringLiteral_1773/*"??/??"*/, v52);
    sub_1B863B8(&StringLiteral_672/*"(+"*/, v53);
    sub_1B863B8(&StringLiteral_1/*""*/, v54);
    sub_1B863B8(&StringLiteral_6448/*"FREE_NAME"*/, v55);
    sub_1B863B8(&StringLiteral_1772/*"??"*/, v56);
    sub_1B863B8(&StringLiteral_20151/*"img_list_release_num"*/, v57);
    sub_1B863B8(&StringLiteral_20174/*"img_nplv"*/, v58);
    sub_1B863B8(&StringLiteral_10796/*"RARE_PRI_UNIT"*/, v59);
    sub_1B863B8(&StringLiteral_20146/*"img_list_limitcount"*/, v60);
    sub_1B863B8(&StringLiteral_1774/*"???"*/, v61);
    sub_1B863B8(&StringLiteral_20148/*"img_list_no"*/, v62);
    byte_4A4DA25 = 1;
  }
  v161 = equipData + data;
  v63 = System_Int32__ToString((int32_t)&v161, 0LL);
  v65 = exceedCount;
  v66 = (System_String_o *)StringLiteral_1/*""*/;
  v67 = 1.0;
  v68 = v63;
  if ( exceedCount <= 0 )
    v69 = 1.0;
  else
    v69 = 0.92157;
  if ( exceedCount <= 0 )
    v70 = 1.0;
  else
    v70 = 0.015686;
  v71 = 1.0;
  v159 = LvExceedDewDropItemId;
  spriteName = 0LL;
  v72 = 0;
  v73 = 0;
  v74 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( LvExceedDewDropItemId )
  {
    case 0:
      goto LABEL_245;
    case 2:
      if ( price < 1 )
        goto LABEL_165;
      spriteName = (System_String_o *)StringLiteral_20147/*"img_list_lv"*/;
      if ( exceedCount < 1 )
      {
        v72 = 0;
        v73 = 0;
        LvExceedDewDropItemId = 0;
        if ( isHide )
          v74 = (System_String_o *)StringLiteral_1772/*"??"*/;
        else
          v74 = v63;
        goto LABEL_245;
      }
      if ( isHide )
      {
        v72 = 0;
        v73 = 0;
        LvExceedDewDropItemId = 0;
        v74 = (System_String_o *)StringLiteral_1773/*"??/??"*/;
        goto LABEL_202;
      }
      v74 = System_Int32__ToString((int32_t)&price, 0LL);
      v67 = 1.0;
      if ( !isMaxHide )
      {
        v140 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
        v74 = System_String__Concat_61683424(v74, (System_String_o *)StringLiteral_1058/*"/"*/, v140, 0LL);
      }
      v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_203;
    case 3:
      v83 = &StringLiteral_20144/*"img_list_hp"*/;
      goto LABEL_38;
    case 5:
      v83 = &StringLiteral_20136/*"img_list_atk"*/;
LABEL_38:
      spriteName = (System_String_o *)*v83;
      v161 = v162 + price;
      v84 = System_Int32__ToString_63159428((int32_t)&v161, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      if ( isHide )
        v74 = (System_String_o *)StringLiteral_1774/*"???"*/;
      else
        v74 = v84;
      goto LABEL_245;
    case 7:
      spriteName = (System_String_o *)StringLiteral_20142/*"img_list_cost"*/;
      if ( v162 < 1 )
      {
        v72 = 0;
        v73 = 0;
        LvExceedDewDropItemId = 0;
        goto LABEL_244;
      }
      v85 = System_Int32__ToString((int32_t)&price, 0LL);
      v86 = System_Int32__ToString((int32_t)&v162, 0LL);
      v74 = System_String__Concat_61683424(v85, (System_String_o *)StringLiteral_809/*"+"*/, v86, 0LL);
LABEL_228:
      v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_245;
    case 8:
    case 57:
      v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      v80 = StringLiteral_20148/*"img_list_no"*/;
      v74 = v63;
      goto LABEL_49;
    case 9:
      v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      if ( price >= 1 )
        v74 = v63;
      else
        v74 = (System_String_o *)StringLiteral_1/*""*/;
      if ( price >= 1 )
        v80 = StringLiteral_20146/*"img_list_limitcount"*/;
      else
        v80 = 0LL;
LABEL_49:
      spriteName = (System_String_o *)v80;
      goto LABEL_245;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v87 = &StringLiteral_6448/*"FREE_NAME"*/;
      goto LABEL_212;
    case 11:
    case 27:
      if ( isHide )
      {
        v74 = (System_String_o *)StringLiteral_1768/*"?"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormat_39433948 = LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
        v65 = exceedCount;
        v74 = NumberFormat_39433948;
      }
      v71 = 1.0;
      v139 = price <= v65 || v65 <= -1;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      if ( v139 )
        v67 = 1.0;
      else
        v67 = 0.5;
      spriteName = 0LL;
      goto LABEL_224;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v88 = &StringLiteral_12177/*"STONE_UNIT"*/;
      goto LABEL_77;
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v89 = LocalizationManager__Get((System_String_o *)StringLiteral_8384/*"MANA_UNIT"*/, 0LL);
      v90 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v74 = System_String__Format(v89, v90, 0LL);
      v72 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 7;
      goto LABEL_84;
    case 14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_10657/*"QP_UNIT"*/, 0LL);
      v92 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v74 = System_String__Format(v91, v92, 0LL);
      v72 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 5;
      goto LABEL_84;
    case 15:
      v93 = price;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetPriceInfo(v93, 0LL);
      goto LABEL_213;
    case 16:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v94 = LocalizationManager__Get((System_String_o *)StringLiteral_6453/*"FRIENDSHIP_UNIT"*/, 0LL);
      v95 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      PriceInfo = System_String__Format(v94, v95, 0LL);
      goto LABEL_213;
    case 17:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      goto LABEL_213;
    case 18:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v96 = LocalizationManager__Get((System_String_o *)StringLiteral_5578/*"EVENT_ITEM_UNIT"*/, 0LL);
      v97 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v74 = System_String__Format(v96, v97, 0LL);
      v72 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_84;
    case 19:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v88 = &StringLiteral_12143/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_77:
      v98 = LocalizationManager__Get((System_String_o *)*v88, 0LL);
      v99 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v74 = System_String__Format(v98, v99, 0LL);
      v72 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 6;
      goto LABEL_84;
    case 20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v100 = LocalizationManager__Get((System_String_o *)StringLiteral_1962/*"ANONYMOUS_UNIT"*/, 0LL);
      v101 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v74 = System_String__Format(v100, v101, 0LL);
      v72 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 17;
      goto LABEL_84;
    case 21:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v102 = LocalizationManager__Get((System_String_o *)StringLiteral_10796/*"RARE_PRI_UNIT"*/, 0LL);
      v103 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v74 = System_String__Format(v102, v103, 0LL);
      v72 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 18;
LABEL_84:
      v73 = 1;
      goto LABEL_245;
    case 22:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v104 = LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v71 = 1.0;
      v105 = price <= exceedCount || exceedCount <= -1;
      v74 = v104;
      v72 = 0;
      spriteName = 0LL;
      if ( v105 )
        v67 = 1.0;
      else
        v67 = 0.5;
      LvExceedDewDropItemId = 6;
      goto LABEL_224;
    case 23:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v106 = LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v71 = 1.0;
      v107 = price <= exceedCount || exceedCount <= -1;
      v74 = v106;
      v72 = 0;
      spriteName = 0LL;
      if ( v107 )
        v67 = 1.0;
      else
        v67 = 0.5;
      LvExceedDewDropItemId = 7;
      goto LABEL_224;
    case 24:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v108 = LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v71 = 1.0;
      v109 = price <= exceedCount || exceedCount <= -1;
      v74 = v108;
      v72 = 0;
      spriteName = 0LL;
      if ( v109 )
        v67 = 1.0;
      else
        v67 = 0.5;
      LvExceedDewDropItemId = 5;
      goto LABEL_224;
    case 25:
    case 26:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_147;
    case 28:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v71 = 1.0;
      v74 = LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      if ( exceedCount < 0 )
        v110 = 0.5;
      else
        v110 = 1.0;
      v111 = price <= exceedCount || exceedCount <= -1;
      v72 = 0;
      spriteName = 0LL;
      if ( v111 )
        v67 = v110;
      else
        v67 = 0.5;
      LvExceedDewDropItemId = 16;
      goto LABEL_224;
    case 29:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v112 = LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v71 = 1.0;
      v113 = price <= exceedCount || exceedCount <= -1;
      v74 = v112;
      v72 = 0;
      spriteName = 0LL;
      if ( v113 )
        v67 = 1.0;
      else
        v67 = 0.5;
      LvExceedDewDropItemId = 17;
      goto LABEL_224;
    case 30:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v114 = LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v71 = 1.0;
      v115 = price <= exceedCount || exceedCount <= -1;
      v74 = v114;
      v72 = 0;
      spriteName = 0LL;
      if ( v115 )
        v67 = 1.0;
      else
        v67 = 0.5;
      LvExceedDewDropItemId = 18;
LABEL_224:
      v73 = 1;
      goto LABEL_225;
    case 31:
      v116 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v116 = BalanceConfig_TypeInfo;
      }
      LvExceedDewDropItemId = v116->static_fields->LvExceedDewDropItemId;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__GetNumberFormat_39433948(v68, 0LL);
      v72 = 0;
      v73 = 0;
LABEL_147:
      v71 = 1.0;
      v117 = price <= exceedCount || exceedCount <= -1;
      spriteName = 0LL;
      if ( v117 )
        v67 = 1.0;
      else
        v67 = 0.5;
LABEL_225:
      v69 = v67;
      v70 = v67;
      goto LABEL_245;
    case 32:
      if ( (price & 0x80000000) != 0 )
        goto LABEL_165;
      v118 = StringLiteral_20322/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_20322/*"img_txt_bondslevel"*/ )
        goto LABEL_163;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      v120 = 40;
      goto LABEL_161;
    case 33:
      if ( price < 1 )
        goto LABEL_165;
      v118 = StringLiteral_20174/*"img_nplv"*/;
      if ( !StringLiteral_20174/*"img_nplv"*/ )
        goto LABEL_163;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      v120 = 55;
LABEL_161:
      UIWidget__set_width(iconSprite, v120, 0LL);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      UIWidget__set_height(iconSprite, 18, 0LL);
      v65 = exceedCount;
LABEL_163:
      spriteName = (System_String_o *)v118;
      if ( v65 < 1 )
      {
        v72 = 0;
        LvExceedDewDropItemId = 0;
        goto LABEL_243;
      }
      v121 = System_Int32__ToString((int32_t)&price, 0LL);
      v122 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
      v74 = System_String__Concat_61683424(v121, (System_String_o *)StringLiteral_1058/*"/"*/, v122, 0LL);
      v72 = 0;
      LvExceedDewDropItemId = 0;
      v73 = 1;
LABEL_202:
      v67 = 1.0;
LABEL_203:
      v69 = 1.0;
      goto LABEL_204;
    case 34:
      if ( price < 1 )
      {
        v72 = 0;
        v73 = 0;
        LvExceedDewDropItemId = 0;
        spriteName = 0LL;
        v67 = 1.0;
        v69 = 1.0;
        v70 = 1.0;
        v71 = 1.0;
        goto LABEL_166;
      }
      if ( exceedCount )
      {
        if ( (unsigned int)(exceedCount - 1) < 0x62 )
        {
          v70 = 0.31373;
          v69 = 0.94118;
          v67 = 0.98824;
        }
        else
        {
          if ( exceedCount != 99 )
            goto LABEL_242;
          v70 = 0.058824;
          v69 = 0.45098;
          v67 = 1.0;
        }
      }
      else
      {
        v67 = 1.0;
        v69 = 1.0;
        v70 = 1.0;
      }
      v71 = 1.0;
LABEL_242:
      v72 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = (System_String_o *)StringLiteral_19949/*"icon_nplv"*/;
LABEL_243:
      v73 = 1;
LABEL_244:
      v74 = v68;
      goto LABEL_245;
    case 35:
      v123 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon(v123, 0LL);
      goto LABEL_183;
    case 36:
      v124 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon_38655684(v124, v65, lv, actualRarity, 0LL);
      if ( exceedCount < 1 )
        goto LABEL_183;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_298;
      RarityIcon = ServantExceedMaster__GetRarityIcon(
                     (ServantExceedMaster_o *)iconSprite,
                     actualRarity,
                     exceedCount,
                     0,
                     0LL);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_298;
      if ( ServantLvDetailMaster__GetRarityIcon(
             (ServantLvDetailMaster_o *)iconSprite,
             actualRarity,
             lv,
             RarityIcon,
             0LL) > 2 )
        v72 = 1;
      else
LABEL_183:
        v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      v74 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_245;
    case 38:
    case 39:
    case 40:
      if ( price >= 1 )
      {
        v75 = System_Int32__ToString_63159428((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
        PriceInfo = System_String__Concat_61645176((System_String_o *)StringLiteral_809/*"+"*/, v75, 0LL);
LABEL_213:
        v74 = PriceInfo;
        v72 = 0;
        v73 = 0;
        LvExceedDewDropItemId = 0;
        spriteName = 0LL;
        goto LABEL_245;
      }
      if ( (price & 0x80000000) != 0 )
      {
        PriceInfo = System_Int32__ToString_63159428((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
        goto LABEL_213;
      }
LABEL_165:
      v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
LABEL_166:
      v74 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_245:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_298;
      UILabel__set_text((UILabel_o *)iconSprite, v74, 0LL);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_298;
      v167.fields.r = v67;
      v167.fields.g = v69;
      v167.fields.b = v70;
      v167.fields.a = v71;
      UIWidget__set_color(iconSprite, v167, 0LL);
      extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
        goto LABEL_252;
      iconSprite = (UIWidget_o *)this->fields.extentionTextLabel;
      if ( !iconSprite )
        goto LABEL_298;
      UILabel__set_text((UILabel_o *)iconSprite, v66, 0LL);
LABEL_252:
      v142 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v142, 0LL, 0LL) )
        return;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_298;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, v159 != 56, 0LL);
      if ( LvExceedDewDropItemId < 1 )
      {
        if ( v72 )
        {
          v145 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          v146 = v145;
          v144 = spriteName;
          AtlasManager__SetEventSprite(v146, spriteName, 0LL);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v147 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommon(v147, 0LL);
          v144 = spriteName;
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_298;
        UISprite__set_spriteName((UISprite_o *)iconSprite, v144, 0LL);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v143 = this->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v143, LvExceedDewDropItemId, 0LL);
        v144 = spriteName;
      }
      if ( !(v73 & 1 | (v144 == 0LL)) )
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
      v148 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v148, transform, 0LL) )
      {
        iconSprite = (UIWidget_o *)this->fields.textLabel;
        if ( !iconSprite )
          goto LABEL_298;
        LODWORD(v150) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)iconSprite, 0LL);
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_298;
        v151 = v150;
        iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
        if ( !iconSprite )
          goto LABEL_298;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        iconSprite = (UIWidget_o *)System_String__op_Equality(v74, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        textLabel = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !textLabel )
            goto LABEL_298;
          v151 = v151 - (float)textLabel->fields.mSpacingX;
        }
        else if ( !textLabel )
        {
          goto LABEL_298;
        }
        mAlignment = textLabel->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v156 = (float)(v151 * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v157 = (float)-this->fields.blankSize;
            goto LABEL_294;
          }
          v156 = v151 + (float)this->fields.blankSize;
        }
        v157 = -v156;
LABEL_294:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
          if ( iconSprite )
          {
            v166.fields.x = v157;
            v166.fields.y = y;
            v166.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v166, 0LL);
            return;
          }
        }
LABEL_298:
        sub_1B86614(iconSprite, v64);
      }
      return;
    case 41:
    case 42:
    case 43:
      v77 = price;
      v78 = System_Int32__ToString_63159428((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      v79 = (System_String_o **)&StringLiteral_652/*"("*/;
      if ( v77 >= 0 )
        v79 = (System_String_o **)&StringLiteral_672/*"(+"*/;
      v74 = System_String__Concat_61683424(*v79, v78, (System_String_o *)StringLiteral_764/*")"*/, 0LL);
      v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      if ( price <= exceedCount )
      {
        v67 = 1.0;
        if ( price >= exceedCount )
          v69 = 1.0;
        else
          v69 = 0.0;
        spriteName = 0LL;
        v70 = v69;
      }
      else
      {
        spriteName = 0LL;
        v69 = 1.0;
        v67 = 0.0;
LABEL_204:
        v70 = 1.0;
      }
      v71 = 1.0;
      goto LABEL_245;
    case 44:
    case 45:
      if ( (price & 0x80000000) != 0 )
        goto LABEL_165;
      if ( exceedCount < 1 )
        goto LABEL_29;
      v81 = System_Int32__ToString_63159428((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      v82 = System_Int32__ToString_63159428((int32_t)&exceedCount, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      v74 = System_String__Concat_61683424(v81, (System_String_o *)StringLiteral_1058/*"/"*/, v82, 0LL);
      v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_202;
    case 46:
      v126 = &StringLiteral_20144/*"img_list_hp"*/;
      goto LABEL_187;
    case 47:
      v126 = &StringLiteral_20136/*"img_list_atk"*/;
LABEL_187:
      spriteName = (System_String_o *)*v126;
      v74 = System_Int32__ToString_63159428((int32_t)&price, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      if ( (v162 & 0x80000000) != 0 )
      {
        v128 = System_Int32__ToString((int32_t)&v162, 0LL);
      }
      else
      {
        v127 = System_Int32__ToString_63159428((int32_t)&v162, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
        v128 = System_String__Concat_61645176((System_String_o *)StringLiteral_809/*"+"*/, v127, 0LL);
      }
      v66 = v128;
      goto LABEL_228;
    case 48:
      v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      if ( price <= 0 )
        v74 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v74 = v63;
      goto LABEL_245;
    case 49:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetDate(time, 0LL);
      goto LABEL_213;
    case 50:
      spriteName = (System_String_o *)StringLiteral_20143/*"img_list_costume_num"*/;
      v129 = System_Int32__ToString((int32_t)&price, 0LL);
      goto LABEL_201;
    case 51:
      v130 = &StringLiteral_20151/*"img_list_release_num"*/;
      goto LABEL_200;
    case 52:
      v130 = &StringLiteral_20150/*"img_list_not_release_costume"*/;
      goto LABEL_200;
    case 53:
      v130 = &StringLiteral_20149/*"img_list_not_clear_cond"*/;
      goto LABEL_200;
    case 54:
      v130 = &StringLiteral_20145/*"img_list_limit_cnt"*/;
LABEL_200:
      spriteName = (System_String_o *)*v130;
      v131 = System_Int32__ToString((int32_t)&price, 0LL);
      v132 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
      v129 = System_String__Concat_61683424(v131, (System_String_o *)StringLiteral_1058/*"/"*/, v132, 0LL);
      goto LABEL_201;
    case 55:
      spriteName = (System_String_o *)StringLiteral_20355/*"img_txt_fp"*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v133 = LocalizationManager__Get((System_String_o *)StringLiteral_6396/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0LL);
      v160 = price;
      v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v160, v134, v135, v136);
      v129 = System_String__Format(v133, v137, 0LL);
LABEL_201:
      v74 = v129;
      v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_202;
    case 56:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v87 = &StringLiteral_9163/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_212:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v87, 0LL);
      goto LABEL_213;
    default:
LABEL_29:
      v72 = 0;
      v73 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_244;
  }
}


void __fastcall UIIconLabel__Set_39221056(
        UIIconLabel_o *this,
        IconLabelInfo_o *info,
        bool isHide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+10h] [xbp-20h]

  if ( info )
    UIIconLabel__Set_39193520(
      this,
      info->fields.iconKind,
      info->fields.data,
      info->fields.adjustData,
      info->fields.equipData,
      info->fields.time,
      isHide,
      info->fields.isMaxHide,
      info->fields.lv,
      info->fields.actualRarity,
      v4);
  else
    UIIconLabel__Clear(this, 0LL);
}