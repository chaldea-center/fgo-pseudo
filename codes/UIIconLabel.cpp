void __fastcall UIIconLabel___ctor(UIIconLabel_o *this, const MethodInfo *method)
{
  this->fields.blankSize = 2;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UIIconLabel__Clear(UIIconLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *textLabel; // x0
  UnityEngine_Object_o *extentionTextLabel; // x20
  UnityEngine_Object_o *iconSprite; // x20

  if ( (byte_49FB9E8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FB9E8 = 1;
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
    sub_1B64324(textLabel);
  }
}


int32_t __fastcall UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1B64324(this);
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

  if ( (byte_49FB9EB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB9EB = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      sub_1B64324(0LL);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._22_get_localSize.method)(
      v5,
      v5->klass->vtable._23_get_drawingDimensions.methodPtr);
  }
  else
  {
    if ( !byte_49F700A )
    {
      sub_1B640C8(&UnityEngine_Vector2_TypeInfo, v4);
      byte_49F700A = 1;
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
    sub_1B64324(this);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void __fastcall UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+8h] [xbp-18h]

  if ( info )
    UIIconLabel__Set_37921148(
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

  if ( (byte_49FB9EC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB9EC = 1;
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
    sub_1B64324(textLabel);
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

  if ( (byte_49FB9EA & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&data);
    sub_1B640C8(&StringLiteral_3668/*"COMBINE_RES_INFO"*/, v9);
    sub_1B640C8(&StringLiteral_3658/*"COMBINE_LIMIT_INFO"*/, v10);
    byte_49FB9EA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0LL);
  v12 = LocalizationManager__GetNumberFormat(adjustData, 0LL);
  if ( isLimit )
    v13 = (System_String_o **)&StringLiteral_3658/*"COMBINE_LIMIT_INFO"*/;
  else
    v13 = (System_String_o **)&StringLiteral_3668/*"COMBINE_RES_INFO"*/;
  v14 = *v13;
  textLabel = this->fields.textLabel;
  v16 = (Il2CppObject *)v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get(v14, 0LL);
  v18 = System_String__Format_61389768(v17, NumberFormat, v16, 0LL);
  if ( !textLabel )
    sub_1B64324(v18);
  UILabel__set_text(textLabel, v18, 0LL);
}


void __fastcall UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+8h] [xbp-18h]

  UIIconLabel__Set_37921148(this, 27, 0, 0, 0, 0LL, 1, 0, 0, v2);
}


void __fastcall UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+8h] [xbp-18h]

  UIIconLabel__Set_37921148(this, iconKind, price, holdCount, 0, 0LL, 0, 0, 0, v5);
}


void __fastcall UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1B64324(0LL);
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
    sub_1B64324(textLabel);
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
  if ( (byte_49FB9ED & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15774/*"[/s]"*/, method);
    this = (UIIconLabel_o *)sub_1B640C8(&StringLiteral_15942/*"[s]"*/, v3);
    byte_49FB9ED = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    sub_1B64324(this);
  v5 = System_String__Concat_61386656(
         (System_String_o *)StringLiteral_15942/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_15774/*"[/s]"*/,
         0LL);
  UILabel__set_text(textLabel, v5, 0LL);
}


void __fastcall UIIconLabel__Set_37917900(
        UIIconLabel_o *this,
        IconLabelInfo_o *info,
        bool isHide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  if ( info )
    UIIconLabel__Set_37921148(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__Set_37921148(
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
  System_String_o *v62; // x0
  int v63; // w29
  System_String_o *v64; // x21
  float v65; // s8
  System_String_o *v66; // x25
  float v67; // s10
  float v68; // s11
  float v69; // s9
  int v70; // w20
  char v71; // w22
  System_String_o *v72; // x23
  System_String_o *v73; // x0
  System_String_o *PriceInfo; // x0
  int32_t v75; // w20
  System_String_o *v76; // x0
  System_String_o **v77; // x8
  __int64 v78; // x8
  System_String_o *v79; // x22
  System_String_o *v80; // x0
  __int64 *v81; // x8
  System_String_o *v82; // x0
  System_String_o *v83; // x23
  System_String_o *v84; // x0
  __int64 *v85; // x8
  __int64 *v86; // x8
  System_String_o *v87; // x22
  Il2CppObject *v88; // x0
  System_String_o *v89; // x22
  Il2CppObject *v90; // x0
  int32_t v91; // w22
  System_String_o *v92; // x22
  Il2CppObject *v93; // x0
  System_String_o *v94; // x22
  Il2CppObject *v95; // x0
  System_String_o *v96; // x22
  Il2CppObject *v97; // x0
  System_String_o *v98; // x22
  Il2CppObject *v99; // x0
  System_String_o *v100; // x22
  Il2CppObject *v101; // x0
  System_String_o *v102; // x0
  bool v103; // cc
  System_String_o *v104; // x0
  bool v105; // cc
  System_String_o *v106; // x0
  bool v107; // cc
  System_String_o *v108; // x0
  bool v109; // cc
  System_String_o *v110; // x0
  bool v111; // cc
  System_String_o *v112; // x0
  bool v113; // cc
  BalanceConfig_c *v114; // x0
  bool v115; // cc
  __int64 v116; // x20
  UIWidget_o *iconSprite; // x0
  int32_t v118; // w1
  System_String_o *v119; // x23
  System_String_o *v120; // x0
  int32_t v121; // w22
  int32_t v122; // w22
  int32_t RarityIcon; // w24
  __int64 *v124; // x8
  System_String_o *v125; // x0
  System_String_o *v126; // x0
  System_String_o *v127; // x0
  __int64 *v128; // x8
  System_String_o *v129; // x23
  System_String_o *v130; // x0
  System_String_o *v131; // x23
  Il2CppObject *v132; // x0
  System_String_o *NumberFormat_38080420; // x0
  bool v134; // cc
  System_String_o *v135; // x0
  UnityEngine_Object_o *extentionTextLabel; // x25
  UnityEngine_Object_o *v137; // x21
  UISprite_o *v138; // x20
  System_String_o *v139; // x20
  struct UISprite_o *v140; // x20
  UISprite_o *v141; // x0
  UISprite_o *v142; // x20
  UnityEngine_Object_o *v143; // x20
  UnityEngine_Object_o *transform; // x21
  float v145; // s0
  float v146; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *textLabel; // x8
  int32_t mAlignment; // w8
  float v151; // s0
  float v152; // s10
  System_String_o *spriteName; // [xsp+0h] [xbp-A0h]
  int v154; // [xsp+8h] [xbp-98h]
  int32_t v155; // [xsp+Ch] [xbp-94h] BYREF
  int v156; // [xsp+10h] [xbp-90h] BYREF
  int32_t v157; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t exceedCount; // [xsp+18h] [xbp-88h] BYREF
  int32_t price; // [xsp+1Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v162; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  exceedCount = adjustData;
  price = data;
  v157 = equipData;
  LvExceedDewDropItemId = iconKind;
  if ( (byte_49FB9E9 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&iconKind);
    sub_1B640C8(&BalanceConfig_TypeInfo, v17);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantExceedMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&int_TypeInfo, v21);
    sub_1B640C8(&LocalizationManager_TypeInfo, v22);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v23);
    sub_1B640C8(&Rarity_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_20251/*"img_list_atk"*/, v25);
    sub_1B640C8(&StringLiteral_5610/*"EVENT_ITEM_UNIT"*/, v26);
    sub_1B640C8(&StringLiteral_10767/*"QP_UNIT"*/, v27);
    sub_1B640C8(&StringLiteral_861/*"+"*/, v28);
    sub_1B640C8(&StringLiteral_20264/*"img_list_not_clear_cond"*/, v29);
    sub_1B640C8(&StringLiteral_9243/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/, v30);
    sub_1B640C8(&StringLiteral_12216/*"STONE_FRAGMENTS_UNIT"*/, v31);
    sub_1B640C8(&StringLiteral_6461/*"FRIENDSHIP_UNIT"*/, v32);
    sub_1B640C8(&StringLiteral_6404/*"FOLLOWER_SELECT_TYPE_POINT"*/, v33);
    sub_1B640C8(&StringLiteral_20427/*"img_txt_bondslevel"*/, v34);
    sub_1B640C8(&StringLiteral_20257/*"img_list_cost"*/, v35);
    sub_1B640C8(&StringLiteral_20265/*"img_list_not_release_costume"*/, v36);
    sub_1B640C8(&StringLiteral_20260/*"img_list_limit_cnt"*/, v37);
    sub_1B640C8(&StringLiteral_20082/*"icon_nplv"*/, v38);
    sub_1B640C8(&StringLiteral_1875/*"?"*/, v39);
    sub_1B640C8(&StringLiteral_20262/*"img_list_lv"*/, v40);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v41);
    sub_1B640C8(&StringLiteral_8468/*"MANA_UNIT"*/, v42);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v43);
    sub_1B640C8(&StringLiteral_20259/*"img_list_hp"*/, v44);
    sub_1B640C8(&StringLiteral_20258/*"img_list_costume_num"*/, v45);
    sub_1B640C8(&StringLiteral_697/*"("*/, v46);
    sub_1B640C8(&StringLiteral_2077/*"ANONYMOUS_UNIT"*/, v47);
    sub_1B640C8(&StringLiteral_20460/*"img_txt_fp"*/, v48);
    sub_1B640C8(&StringLiteral_815/*")"*/, v49);
    sub_1B640C8(&StringLiteral_12247/*"STONE_UNIT"*/, v50);
    sub_1B640C8(&StringLiteral_1880/*"??/??"*/, v51);
    sub_1B640C8(&StringLiteral_718/*"(+"*/, v52);
    sub_1B640C8(&StringLiteral_1/*""*/, v53);
    sub_1B640C8(&StringLiteral_6457/*"FREE_NAME"*/, v54);
    sub_1B640C8(&StringLiteral_1879/*"??"*/, v55);
    sub_1B640C8(&StringLiteral_20266/*"img_list_release_num"*/, v56);
    sub_1B640C8(&StringLiteral_20289/*"img_nplv"*/, v57);
    sub_1B640C8(&StringLiteral_10900/*"RARE_PRI_UNIT"*/, v58);
    sub_1B640C8(&StringLiteral_20261/*"img_list_limitcount"*/, v59);
    sub_1B640C8(&StringLiteral_1881/*"???"*/, v60);
    sub_1B640C8(&StringLiteral_20263/*"img_list_no"*/, v61);
    byte_49FB9E9 = 1;
  }
  v156 = equipData + data;
  v62 = System_Int32__ToString((int32_t)&v156, 0LL);
  v63 = exceedCount;
  v64 = (System_String_o *)StringLiteral_1/*""*/;
  v65 = 1.0;
  v66 = v62;
  if ( exceedCount <= 0 )
    v67 = 1.0;
  else
    v67 = 0.92157;
  if ( exceedCount <= 0 )
    v68 = 1.0;
  else
    v68 = 0.015686;
  v69 = 1.0;
  v154 = LvExceedDewDropItemId;
  spriteName = 0LL;
  v70 = 0;
  v71 = 0;
  v72 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( LvExceedDewDropItemId )
  {
    case 0:
      goto LABEL_242;
    case 2:
      if ( price < 1 )
        goto LABEL_162;
      spriteName = (System_String_o *)StringLiteral_20262/*"img_list_lv"*/;
      if ( exceedCount < 1 )
      {
        v70 = 0;
        v71 = 0;
        LvExceedDewDropItemId = 0;
        if ( isHide )
          v72 = (System_String_o *)StringLiteral_1879/*"??"*/;
        else
          v72 = v62;
        goto LABEL_242;
      }
      if ( isHide )
      {
        v70 = 0;
        v71 = 0;
        LvExceedDewDropItemId = 0;
        v72 = (System_String_o *)StringLiteral_1880/*"??/??"*/;
        goto LABEL_199;
      }
      v72 = System_Int32__ToString((int32_t)&price, 0LL);
      v65 = 1.0;
      if ( !isMaxHide )
      {
        v135 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
        v72 = System_String__Concat_61386656(v72, (System_String_o *)StringLiteral_1124/*"/"*/, v135, 0LL);
      }
      v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_200;
    case 3:
      v81 = &StringLiteral_20259/*"img_list_hp"*/;
      goto LABEL_38;
    case 5:
      v81 = &StringLiteral_20251/*"img_list_atk"*/;
LABEL_38:
      spriteName = (System_String_o *)*v81;
      v156 = v157 + price;
      v82 = System_Int32__ToString_62180668((int32_t)&v156, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
      v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      if ( isHide )
        v72 = (System_String_o *)StringLiteral_1881/*"???"*/;
      else
        v72 = v82;
      goto LABEL_242;
    case 7:
      spriteName = (System_String_o *)StringLiteral_20257/*"img_list_cost"*/;
      if ( v157 < 1 )
      {
        v70 = 0;
        v71 = 0;
        LvExceedDewDropItemId = 0;
        goto LABEL_241;
      }
      v83 = System_Int32__ToString((int32_t)&price, 0LL);
      v84 = System_Int32__ToString((int32_t)&v157, 0LL);
      v72 = System_String__Concat_61386656(v83, (System_String_o *)StringLiteral_861/*"+"*/, v84, 0LL);
LABEL_225:
      v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_242;
    case 8:
    case 57:
      v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      v78 = StringLiteral_20263/*"img_list_no"*/;
      v72 = v62;
      goto LABEL_49;
    case 9:
      v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      if ( price >= 1 )
        v72 = v62;
      else
        v72 = (System_String_o *)StringLiteral_1/*""*/;
      if ( price >= 1 )
        v78 = StringLiteral_20261/*"img_list_limitcount"*/;
      else
        v78 = 0LL;
LABEL_49:
      spriteName = (System_String_o *)v78;
      goto LABEL_242;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v85 = &StringLiteral_6457/*"FREE_NAME"*/;
      goto LABEL_209;
    case 11:
    case 27:
      if ( isHide )
      {
        v72 = (System_String_o *)StringLiteral_1875/*"?"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormat_38080420 = LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
        v63 = exceedCount;
        v72 = NumberFormat_38080420;
      }
      v69 = 1.0;
      v134 = price <= v63 || v63 <= -1;
      v70 = 0;
      LvExceedDewDropItemId = 0;
      if ( v134 )
        v65 = 1.0;
      else
        v65 = 0.5;
      spriteName = 0LL;
      goto LABEL_221;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v86 = &StringLiteral_12247/*"STONE_UNIT"*/;
      goto LABEL_77;
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_8468/*"MANA_UNIT"*/, 0LL);
      v88 = (Il2CppObject *)LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v72 = System_String__Format(v87, v88, 0LL);
      v70 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 7;
      goto LABEL_84;
    case 14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v89 = LocalizationManager__Get((System_String_o *)StringLiteral_10767/*"QP_UNIT"*/, 0LL);
      v90 = (Il2CppObject *)LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v72 = System_String__Format(v89, v90, 0LL);
      v70 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 5;
      goto LABEL_84;
    case 15:
      v91 = price;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetPriceInfo(v91, 0LL);
      goto LABEL_210;
    case 16:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v92 = LocalizationManager__Get((System_String_o *)StringLiteral_6461/*"FRIENDSHIP_UNIT"*/, 0LL);
      v93 = (Il2CppObject *)LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      PriceInfo = System_String__Format(v92, v93, 0LL);
      goto LABEL_210;
    case 17:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      goto LABEL_210;
    case 18:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v94 = LocalizationManager__Get((System_String_o *)StringLiteral_5610/*"EVENT_ITEM_UNIT"*/, 0LL);
      v95 = (Il2CppObject *)LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v72 = System_String__Format(v94, v95, 0LL);
      v70 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_84;
    case 19:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v86 = &StringLiteral_12216/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_77:
      v96 = LocalizationManager__Get((System_String_o *)*v86, 0LL);
      v97 = (Il2CppObject *)LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v72 = System_String__Format(v96, v97, 0LL);
      v70 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 6;
      goto LABEL_84;
    case 20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v98 = LocalizationManager__Get((System_String_o *)StringLiteral_2077/*"ANONYMOUS_UNIT"*/, 0LL);
      v99 = (Il2CppObject *)LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v72 = System_String__Format(v98, v99, 0LL);
      v70 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 17;
      goto LABEL_84;
    case 21:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v100 = LocalizationManager__Get((System_String_o *)StringLiteral_10900/*"RARE_PRI_UNIT"*/, 0LL);
      v101 = (Il2CppObject *)LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v72 = System_String__Format(v100, v101, 0LL);
      v70 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 18;
LABEL_84:
      v71 = 1;
      goto LABEL_242;
    case 22:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v102 = LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v69 = 1.0;
      v103 = price <= exceedCount || exceedCount <= -1;
      v72 = v102;
      v70 = 0;
      spriteName = 0LL;
      if ( v103 )
        v65 = 1.0;
      else
        v65 = 0.5;
      LvExceedDewDropItemId = 6;
      goto LABEL_221;
    case 23:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v104 = LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v69 = 1.0;
      v105 = price <= exceedCount || exceedCount <= -1;
      v72 = v104;
      v70 = 0;
      spriteName = 0LL;
      if ( v105 )
        v65 = 1.0;
      else
        v65 = 0.5;
      LvExceedDewDropItemId = 7;
      goto LABEL_221;
    case 24:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v106 = LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v69 = 1.0;
      v107 = price <= exceedCount || exceedCount <= -1;
      v72 = v106;
      v70 = 0;
      spriteName = 0LL;
      if ( v107 )
        v65 = 1.0;
      else
        v65 = 0.5;
      LvExceedDewDropItemId = 5;
      goto LABEL_221;
    case 25:
    case 26:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v72 = LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_144;
    case 28:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v108 = LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v69 = 1.0;
      v109 = price <= exceedCount || exceedCount <= -1;
      v72 = v108;
      v70 = 0;
      spriteName = 0LL;
      if ( v109 )
        v65 = 1.0;
      else
        v65 = 0.5;
      LvExceedDewDropItemId = 16;
      goto LABEL_221;
    case 29:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v110 = LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v69 = 1.0;
      v111 = price <= exceedCount || exceedCount <= -1;
      v72 = v110;
      v70 = 0;
      spriteName = 0LL;
      if ( v111 )
        v65 = 1.0;
      else
        v65 = 0.5;
      LvExceedDewDropItemId = 17;
      goto LABEL_221;
    case 30:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v112 = LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v69 = 1.0;
      v113 = price <= exceedCount || exceedCount <= -1;
      v72 = v112;
      v70 = 0;
      spriteName = 0LL;
      if ( v113 )
        v65 = 1.0;
      else
        v65 = 0.5;
      LvExceedDewDropItemId = 18;
LABEL_221:
      v71 = 1;
      goto LABEL_222;
    case 31:
      v114 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v114 = BalanceConfig_TypeInfo;
      }
      LvExceedDewDropItemId = v114->static_fields->LvExceedDewDropItemId;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v72 = LocalizationManager__GetNumberFormat_38080420(v66, 0LL);
      v70 = 0;
      v71 = 0;
LABEL_144:
      v69 = 1.0;
      v115 = price <= exceedCount || exceedCount <= -1;
      spriteName = 0LL;
      if ( v115 )
        v65 = 1.0;
      else
        v65 = 0.5;
LABEL_222:
      v67 = v65;
      v68 = v65;
      goto LABEL_242;
    case 32:
      if ( (price & 0x80000000) != 0 )
        goto LABEL_162;
      v116 = StringLiteral_20427/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_20427/*"img_txt_bondslevel"*/ )
        goto LABEL_160;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_295;
      v118 = 40;
      goto LABEL_158;
    case 33:
      if ( price < 1 )
        goto LABEL_162;
      v116 = StringLiteral_20289/*"img_nplv"*/;
      if ( !StringLiteral_20289/*"img_nplv"*/ )
        goto LABEL_160;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_295;
      v118 = 55;
LABEL_158:
      UIWidget__set_width(iconSprite, v118, 0LL);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_295;
      UIWidget__set_height(iconSprite, 18, 0LL);
      v63 = exceedCount;
LABEL_160:
      spriteName = (System_String_o *)v116;
      if ( v63 < 1 )
      {
        v70 = 0;
        LvExceedDewDropItemId = 0;
        goto LABEL_240;
      }
      v119 = System_Int32__ToString((int32_t)&price, 0LL);
      v120 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
      v72 = System_String__Concat_61386656(v119, (System_String_o *)StringLiteral_1124/*"/"*/, v120, 0LL);
      v70 = 0;
      LvExceedDewDropItemId = 0;
      v71 = 1;
LABEL_199:
      v65 = 1.0;
LABEL_200:
      v67 = 1.0;
      goto LABEL_201;
    case 34:
      if ( price < 1 )
      {
        v70 = 0;
        v71 = 0;
        LvExceedDewDropItemId = 0;
        spriteName = 0LL;
        v65 = 1.0;
        v67 = 1.0;
        v68 = 1.0;
        v69 = 1.0;
        goto LABEL_163;
      }
      if ( exceedCount )
      {
        if ( (unsigned int)(exceedCount - 1) < 0x62 )
        {
          v68 = 0.31373;
          v67 = 0.94118;
          v65 = 0.98824;
        }
        else
        {
          if ( exceedCount != 99 )
            goto LABEL_239;
          v68 = 0.058824;
          v67 = 0.45098;
          v65 = 1.0;
        }
      }
      else
      {
        v65 = 1.0;
        v67 = 1.0;
        v68 = 1.0;
      }
      v69 = 1.0;
LABEL_239:
      v70 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = (System_String_o *)StringLiteral_20082/*"icon_nplv"*/;
LABEL_240:
      v71 = 1;
LABEL_241:
      v72 = v66;
      goto LABEL_242;
    case 35:
      v121 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon(v121, 0LL);
      goto LABEL_180;
    case 36:
      v122 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon_37389972(v122, v63, lv, 0LL);
      if ( exceedCount < 1 )
        goto LABEL_180;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_295;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)iconSprite, price, exceedCount, 0, 0LL);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_295;
      if ( ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)iconSprite, price, lv, RarityIcon, 0LL) > 2 )
        v70 = 1;
      else
LABEL_180:
        v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      v72 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_242;
    case 38:
    case 39:
    case 40:
      if ( price >= 1 )
      {
        v73 = System_Int32__ToString_62180668((int32_t)&price, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
        PriceInfo = System_String__Concat_61375396((System_String_o *)StringLiteral_861/*"+"*/, v73, 0LL);
LABEL_210:
        v72 = PriceInfo;
        v70 = 0;
        v71 = 0;
        LvExceedDewDropItemId = 0;
        spriteName = 0LL;
        goto LABEL_242;
      }
      if ( (price & 0x80000000) != 0 )
      {
        PriceInfo = System_Int32__ToString_62180668((int32_t)&price, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
        goto LABEL_210;
      }
LABEL_162:
      v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
LABEL_163:
      v72 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_242:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_295;
      UILabel__set_text((UILabel_o *)iconSprite, v72, 0LL);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_295;
      v162.fields.r = v65;
      v162.fields.g = v67;
      v162.fields.b = v68;
      v162.fields.a = v69;
      UIWidget__set_color(iconSprite, v162, 0LL);
      extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
        goto LABEL_249;
      iconSprite = (UIWidget_o *)this->fields.extentionTextLabel;
      if ( !iconSprite )
        goto LABEL_295;
      UILabel__set_text((UILabel_o *)iconSprite, v64, 0LL);
LABEL_249:
      v137 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v137, 0LL, 0LL) )
        return;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_295;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_295;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, v154 != 56, 0LL);
      if ( LvExceedDewDropItemId < 1 )
      {
        if ( v70 )
        {
          v140 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          v141 = v140;
          v139 = spriteName;
          AtlasManager__SetEventSprite(v141, spriteName, 0LL);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v142 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommon(v142, 0LL);
          v139 = spriteName;
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_295;
        UISprite__set_spriteName((UISprite_o *)iconSprite, v139, 0LL);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v138 = this->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v138, LvExceedDewDropItemId, 0LL);
        v139 = spriteName;
      }
      if ( !(v71 & 1 | (v139 == 0LL)) )
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
      v143 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v143, transform, 0LL) )
      {
        iconSprite = (UIWidget_o *)this->fields.textLabel;
        if ( !iconSprite )
          goto LABEL_295;
        LODWORD(v145) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)iconSprite, 0LL);
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_295;
        v146 = v145;
        iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
        if ( !iconSprite )
          goto LABEL_295;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        iconSprite = (UIWidget_o *)System_String__op_Equality(v72, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        textLabel = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !textLabel )
            goto LABEL_295;
          v146 = v146 - (float)textLabel->fields.mSpacingX;
        }
        else if ( !textLabel )
        {
          goto LABEL_295;
        }
        mAlignment = textLabel->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v151 = (float)(v146 * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v152 = (float)-this->fields.blankSize;
            goto LABEL_291;
          }
          v151 = v146 + (float)this->fields.blankSize;
        }
        v152 = -v151;
LABEL_291:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
          if ( iconSprite )
          {
            v161.fields.x = v152;
            v161.fields.y = y;
            v161.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v161, 0LL);
            return;
          }
        }
LABEL_295:
        sub_1B64324(iconSprite);
      }
      return;
    case 41:
    case 42:
    case 43:
      v75 = price;
      v76 = System_Int32__ToString_62180668((int32_t)&price, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
      v77 = (System_String_o **)&StringLiteral_697/*"("*/;
      if ( v75 >= 0 )
        v77 = (System_String_o **)&StringLiteral_718/*"(+"*/;
      v72 = System_String__Concat_61386656(*v77, v76, (System_String_o *)StringLiteral_815/*")"*/, 0LL);
      v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      if ( price <= exceedCount )
      {
        v65 = 1.0;
        if ( price >= exceedCount )
          v67 = 1.0;
        else
          v67 = 0.0;
        spriteName = 0LL;
        v68 = v67;
      }
      else
      {
        spriteName = 0LL;
        v67 = 1.0;
        v65 = 0.0;
LABEL_201:
        v68 = 1.0;
      }
      v69 = 1.0;
      goto LABEL_242;
    case 44:
    case 45:
      if ( (price & 0x80000000) != 0 )
        goto LABEL_162;
      if ( exceedCount < 1 )
        goto LABEL_29;
      v79 = System_Int32__ToString_62180668((int32_t)&price, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
      v80 = System_Int32__ToString_62180668((int32_t)&exceedCount, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
      v72 = System_String__Concat_61386656(v79, (System_String_o *)StringLiteral_1124/*"/"*/, v80, 0LL);
      v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_199;
    case 46:
      v124 = &StringLiteral_20259/*"img_list_hp"*/;
      goto LABEL_184;
    case 47:
      v124 = &StringLiteral_20251/*"img_list_atk"*/;
LABEL_184:
      spriteName = (System_String_o *)*v124;
      v72 = System_Int32__ToString_62180668((int32_t)&price, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
      if ( (v157 & 0x80000000) != 0 )
      {
        v126 = System_Int32__ToString((int32_t)&v157, 0LL);
      }
      else
      {
        v125 = System_Int32__ToString_62180668((int32_t)&v157, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
        v126 = System_String__Concat_61375396((System_String_o *)StringLiteral_861/*"+"*/, v125, 0LL);
      }
      v64 = v126;
      goto LABEL_225;
    case 48:
      v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      if ( price <= 0 )
        v72 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v72 = v62;
      goto LABEL_242;
    case 49:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetDate(time, 0LL);
      goto LABEL_210;
    case 50:
      spriteName = (System_String_o *)StringLiteral_20258/*"img_list_costume_num"*/;
      v127 = System_Int32__ToString((int32_t)&price, 0LL);
      goto LABEL_198;
    case 51:
      v128 = &StringLiteral_20266/*"img_list_release_num"*/;
      goto LABEL_197;
    case 52:
      v128 = &StringLiteral_20265/*"img_list_not_release_costume"*/;
      goto LABEL_197;
    case 53:
      v128 = &StringLiteral_20264/*"img_list_not_clear_cond"*/;
      goto LABEL_197;
    case 54:
      v128 = &StringLiteral_20260/*"img_list_limit_cnt"*/;
LABEL_197:
      spriteName = (System_String_o *)*v128;
      v129 = System_Int32__ToString((int32_t)&price, 0LL);
      v130 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
      v127 = System_String__Concat_61386656(v129, (System_String_o *)StringLiteral_1124/*"/"*/, v130, 0LL);
      goto LABEL_198;
    case 55:
      spriteName = (System_String_o *)StringLiteral_20460/*"img_txt_fp"*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v131 = LocalizationManager__Get((System_String_o *)StringLiteral_6404/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0LL);
      v155 = price;
      v132 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v155);
      v127 = System_String__Format(v131, v132, 0LL);
LABEL_198:
      v72 = v127;
      v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_199;
    case 56:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v85 = &StringLiteral_9243/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_209:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v85, 0LL);
      goto LABEL_210;
    default:
LABEL_29:
      v70 = 0;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_241;
  }
}