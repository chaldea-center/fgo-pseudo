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

  if ( (byte_4B6614E & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v3);
    byte_4B6614E = 1;
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
    sub_1BE4D28(textLabel, method);
  }
}


int32_t __fastcall UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BE4D28(this, method);
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

  if ( (byte_4B66151 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B66151 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      sub_1BE4D28(0LL, v4);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._22_get_localSize.method)(
      v5,
      v5->klass->vtable._23_get_drawingDimensions.methodPtr);
  }
  else
  {
    if ( !byte_4B611DA )
    {
      sub_1BE4ACC(&UnityEngine_Vector2_TypeInfo, v4);
      byte_4B611DA = 1;
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
    sub_1BE4D28(this, method);
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void __fastcall UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+8h] [xbp-18h]

  if ( info )
    UIIconLabel__Set_39141664(
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

  if ( (byte_4B66152 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B66152 = 1;
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
    sub_1BE4D28(textLabel, method);
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

  if ( (byte_4B66150 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, *(_QWORD *)&data);
    sub_1BE4ACC(&StringLiteral_3730/*"COMBINE_RES_INFO"*/, v9);
    sub_1BE4ACC(&StringLiteral_3720/*"COMBINE_LIMIT_INFO"*/, v10);
    byte_4B66150 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0LL);
  v12 = LocalizationManager__GetNumberFormat(adjustData, 0LL);
  if ( isLimit )
    v13 = (System_String_o **)&StringLiteral_3720/*"COMBINE_LIMIT_INFO"*/;
  else
    v13 = (System_String_o **)&StringLiteral_3730/*"COMBINE_RES_INFO"*/;
  v14 = *v13;
  textLabel = this->fields.textLabel;
  v16 = (Il2CppObject *)v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get(v14, 0LL);
  v18 = System_String__Format_62713180(v17, NumberFormat, v16, 0LL);
  if ( !textLabel )
    sub_1BE4D28(v18, v19);
  UILabel__set_text(textLabel, v18, 0LL);
}


void __fastcall UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+8h] [xbp-18h]

  UIIconLabel__Set_39141664(this, 27, 0, 0, 0, 0LL, 1, 0, 0, v2);
}


void __fastcall UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+8h] [xbp-18h]

  UIIconLabel__Set_39141664(this, iconKind, price, holdCount, 0, 0LL, 0, 0, 0, v5);
}


void __fastcall UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1BE4D28(0LL, method);
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
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BE4D28)(textLabel, size);
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
  if ( (byte_4B66153 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_16048/*"[/s]"*/, method);
    this = (UIIconLabel_o *)sub_1BE4ACC(&StringLiteral_16217/*"[s]"*/, v3);
    byte_4B66153 = 1;
  }
  textLabel = v2->fields.textLabel;
  if ( !textLabel )
    sub_1BE4D28(this, method);
  v5 = System_String__Concat_62710068(
         (System_String_o *)StringLiteral_16217/*"[s]"*/,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_16048/*"[/s]"*/,
         0LL);
  UILabel__set_text(textLabel, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__Set_39141664(
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
  __int64 v63; // x1
  int v64; // w29
  System_String_o *v65; // x21
  float v66; // s8
  System_String_o *v67; // x25
  float v68; // s10
  float v69; // s11
  float v70; // s9
  int v71; // w20
  char v72; // w22
  System_String_o *v73; // x23
  System_String_o *v74; // x0
  System_String_o *PriceInfo; // x0
  int32_t v76; // w20
  System_String_o *v77; // x0
  System_String_o **v78; // x8
  __int64 v79; // x8
  System_String_o *v80; // x22
  System_String_o *v81; // x0
  __int64 *v82; // x8
  System_String_o *v83; // x0
  System_String_o *v84; // x23
  System_String_o *v85; // x0
  __int64 *v86; // x8
  __int64 *v87; // x8
  System_String_o *v88; // x22
  Il2CppObject *v89; // x0
  System_String_o *v90; // x22
  Il2CppObject *v91; // x0
  int32_t v92; // w22
  System_String_o *v93; // x22
  Il2CppObject *v94; // x0
  System_String_o *v95; // x22
  Il2CppObject *v96; // x0
  System_String_o *v97; // x22
  Il2CppObject *v98; // x0
  System_String_o *v99; // x22
  Il2CppObject *v100; // x0
  System_String_o *v101; // x22
  Il2CppObject *v102; // x0
  System_String_o *v103; // x0
  bool v104; // cc
  System_String_o *v105; // x0
  bool v106; // cc
  System_String_o *v107; // x0
  bool v108; // cc
  float v109; // s1
  bool v110; // cc
  System_String_o *v111; // x0
  bool v112; // cc
  System_String_o *v113; // x0
  bool v114; // cc
  BalanceConfig_c *v115; // x0
  bool v116; // cc
  __int64 v117; // x20
  UIWidget_o *iconSprite; // x0
  int32_t v119; // w1
  System_String_o *v120; // x23
  System_String_o *v121; // x0
  int32_t v122; // w22
  int32_t v123; // w22
  int32_t RarityIcon; // w24
  __int64 *v125; // x8
  System_String_o *v126; // x0
  System_String_o *v127; // x0
  System_String_o *v128; // x0
  __int64 *v129; // x8
  System_String_o *v130; // x23
  System_String_o *v131; // x0
  System_String_o *v132; // x23
  __int64 v133; // x2
  __int64 v134; // x3
  __int64 v135; // x4
  Il2CppObject *v136; // x0
  System_String_o *NumberFormat_39303932; // x0
  bool v138; // cc
  System_String_o *v139; // x0
  UnityEngine_Object_o *extentionTextLabel; // x25
  UnityEngine_Object_o *v141; // x21
  UISprite_o *v142; // x20
  System_String_o *v143; // x20
  struct UISprite_o *v144; // x20
  UISprite_o *v145; // x0
  UISprite_o *v146; // x20
  UnityEngine_Object_o *v147; // x20
  UnityEngine_Object_o *transform; // x21
  float v149; // s0
  float v150; // s10
  float y; // s8
  float z; // s9
  struct UILabel_o *textLabel; // x8
  int32_t mAlignment; // w8
  float v155; // s0
  float v156; // s10
  System_String_o *spriteName; // [xsp+0h] [xbp-A0h]
  int v158; // [xsp+8h] [xbp-98h]
  int32_t v159; // [xsp+Ch] [xbp-94h] BYREF
  int v160; // [xsp+10h] [xbp-90h] BYREF
  int32_t v161; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t exceedCount; // [xsp+18h] [xbp-88h] BYREF
  int32_t price; // [xsp+1Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v166; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  exceedCount = adjustData;
  price = data;
  v161 = equipData;
  LvExceedDewDropItemId = iconKind;
  if ( (byte_4B6614F & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, *(_QWORD *)&iconKind);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v17);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantExceedMaster___, v18);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v19);
    sub_1BE4ACC(&DataManager_TypeInfo, v20);
    sub_1BE4ACC(&int_TypeInfo, v21);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v22);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v23);
    sub_1BE4ACC(&Rarity_TypeInfo, v24);
    sub_1BE4ACC(&StringLiteral_20620/*"img_list_atk"*/, v25);
    sub_1BE4ACC(&StringLiteral_5732/*"EVENT_ITEM_UNIT"*/, v26);
    sub_1BE4ACC(&StringLiteral_10985/*"QP_UNIT"*/, v27);
    sub_1BE4ACC(&StringLiteral_855/*"+"*/, v28);
    sub_1BE4ACC(&StringLiteral_20633/*"img_list_not_clear_cond"*/, v29);
    sub_1BE4ACC(&StringLiteral_9439/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/, v30);
    sub_1BE4ACC(&StringLiteral_12460/*"STONE_FRAGMENTS_UNIT"*/, v31);
    sub_1BE4ACC(&StringLiteral_6625/*"FRIENDSHIP_UNIT"*/, v32);
    sub_1BE4ACC(&StringLiteral_6567/*"FOLLOWER_SELECT_TYPE_POINT"*/, v33);
    sub_1BE4ACC(&StringLiteral_20800/*"img_txt_bondslevel"*/, v34);
    sub_1BE4ACC(&StringLiteral_20626/*"img_list_cost"*/, v35);
    sub_1BE4ACC(&StringLiteral_20634/*"img_list_not_release_costume"*/, v36);
    sub_1BE4ACC(&StringLiteral_20629/*"img_list_limit_cnt"*/, v37);
    sub_1BE4ACC(&StringLiteral_20443/*"icon_nplv"*/, v38);
    sub_1BE4ACC(&StringLiteral_1875/*"?"*/, v39);
    sub_1BE4ACC(&StringLiteral_20631/*"img_list_lv"*/, v40);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v41);
    sub_1BE4ACC(&StringLiteral_8654/*"MANA_UNIT"*/, v42);
    sub_1BE4ACC(&StringLiteral_424/*"#,0"*/, v43);
    sub_1BE4ACC(&StringLiteral_20628/*"img_list_hp"*/, v44);
    sub_1BE4ACC(&StringLiteral_20627/*"img_list_costume_num"*/, v45);
    sub_1BE4ACC(&StringLiteral_691/*"("*/, v46);
    sub_1BE4ACC(&StringLiteral_2077/*"ANONYMOUS_UNIT"*/, v47);
    sub_1BE4ACC(&StringLiteral_20833/*"img_txt_fp"*/, v48);
    sub_1BE4ACC(&StringLiteral_809/*")"*/, v49);
    sub_1BE4ACC(&StringLiteral_12491/*"STONE_UNIT"*/, v50);
    sub_1BE4ACC(&StringLiteral_1880/*"??/??"*/, v51);
    sub_1BE4ACC(&StringLiteral_712/*"(+"*/, v52);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v53);
    sub_1BE4ACC(&StringLiteral_6620/*"FREE_NAME"*/, v54);
    sub_1BE4ACC(&StringLiteral_1879/*"??"*/, v55);
    sub_1BE4ACC(&StringLiteral_20635/*"img_list_release_num"*/, v56);
    sub_1BE4ACC(&StringLiteral_20658/*"img_nplv"*/, v57);
    sub_1BE4ACC(&StringLiteral_11118/*"RARE_PRI_UNIT"*/, v58);
    sub_1BE4ACC(&StringLiteral_20630/*"img_list_limitcount"*/, v59);
    sub_1BE4ACC(&StringLiteral_1881/*"???"*/, v60);
    sub_1BE4ACC(&StringLiteral_20632/*"img_list_no"*/, v61);
    byte_4B6614F = 1;
  }
  v160 = equipData + data;
  v62 = System_Int32__ToString((int32_t)&v160, 0LL);
  v64 = exceedCount;
  v65 = (System_String_o *)StringLiteral_1/*""*/;
  v66 = 1.0;
  v67 = v62;
  if ( exceedCount <= 0 )
    v68 = 1.0;
  else
    v68 = 0.92157;
  if ( exceedCount <= 0 )
    v69 = 1.0;
  else
    v69 = 0.015686;
  v70 = 1.0;
  v158 = LvExceedDewDropItemId;
  spriteName = 0LL;
  v71 = 0;
  v72 = 0;
  v73 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( LvExceedDewDropItemId )
  {
    case 0:
      goto LABEL_245;
    case 2:
      if ( price < 1 )
        goto LABEL_165;
      spriteName = (System_String_o *)StringLiteral_20631/*"img_list_lv"*/;
      if ( exceedCount < 1 )
      {
        v71 = 0;
        v72 = 0;
        LvExceedDewDropItemId = 0;
        if ( isHide )
          v73 = (System_String_o *)StringLiteral_1879/*"??"*/;
        else
          v73 = v62;
        goto LABEL_245;
      }
      if ( isHide )
      {
        v71 = 0;
        v72 = 0;
        LvExceedDewDropItemId = 0;
        v73 = (System_String_o *)StringLiteral_1880/*"??/??"*/;
        goto LABEL_202;
      }
      v73 = System_Int32__ToString((int32_t)&price, 0LL);
      v66 = 1.0;
      if ( !isMaxHide )
      {
        v139 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
        v73 = System_String__Concat_62710068(v73, (System_String_o *)StringLiteral_1120/*"/"*/, v139, 0LL);
      }
      v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_203;
    case 3:
      v82 = &StringLiteral_20628/*"img_list_hp"*/;
      goto LABEL_38;
    case 5:
      v82 = &StringLiteral_20620/*"img_list_atk"*/;
LABEL_38:
      spriteName = (System_String_o *)*v82;
      v160 = v161 + price;
      v83 = System_Int32__ToString_63504416((int32_t)&v160, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
      v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      if ( isHide )
        v73 = (System_String_o *)StringLiteral_1881/*"???"*/;
      else
        v73 = v83;
      goto LABEL_245;
    case 7:
      spriteName = (System_String_o *)StringLiteral_20626/*"img_list_cost"*/;
      if ( v161 < 1 )
      {
        v71 = 0;
        v72 = 0;
        LvExceedDewDropItemId = 0;
        goto LABEL_244;
      }
      v84 = System_Int32__ToString((int32_t)&price, 0LL);
      v85 = System_Int32__ToString((int32_t)&v161, 0LL);
      v73 = System_String__Concat_62710068(v84, (System_String_o *)StringLiteral_855/*"+"*/, v85, 0LL);
LABEL_228:
      v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_245;
    case 8:
    case 57:
      v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      v79 = StringLiteral_20632/*"img_list_no"*/;
      v73 = v62;
      goto LABEL_49;
    case 9:
      v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      if ( price >= 1 )
        v73 = v62;
      else
        v73 = (System_String_o *)StringLiteral_1/*""*/;
      if ( price >= 1 )
        v79 = StringLiteral_20630/*"img_list_limitcount"*/;
      else
        v79 = 0LL;
LABEL_49:
      spriteName = (System_String_o *)v79;
      goto LABEL_245;
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v86 = &StringLiteral_6620/*"FREE_NAME"*/;
      goto LABEL_212;
    case 11:
    case 27:
      if ( isHide )
      {
        v73 = (System_String_o *)StringLiteral_1875/*"?"*/;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormat_39303932 = LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
        v64 = exceedCount;
        v73 = NumberFormat_39303932;
      }
      v70 = 1.0;
      v138 = price <= v64 || v64 <= -1;
      v71 = 0;
      LvExceedDewDropItemId = 0;
      if ( v138 )
        v66 = 1.0;
      else
        v66 = 0.5;
      spriteName = 0LL;
      goto LABEL_224;
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v87 = &StringLiteral_12491/*"STONE_UNIT"*/;
      goto LABEL_77;
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MANA_UNIT"*/, 0LL);
      v89 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v73 = System_String__Format(v88, v89, 0LL);
      v71 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 7;
      goto LABEL_84;
    case 14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v90 = LocalizationManager__Get((System_String_o *)StringLiteral_10985/*"QP_UNIT"*/, 0LL);
      v91 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v73 = System_String__Format(v90, v91, 0LL);
      v71 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 5;
      goto LABEL_84;
    case 15:
      v92 = price;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetPriceInfo(v92, 0LL);
      goto LABEL_213;
    case 16:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v93 = LocalizationManager__Get((System_String_o *)StringLiteral_6625/*"FRIENDSHIP_UNIT"*/, 0LL);
      v94 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      PriceInfo = System_String__Format(v93, v94, 0LL);
      goto LABEL_213;
    case 17:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      goto LABEL_213;
    case 18:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v95 = LocalizationManager__Get((System_String_o *)StringLiteral_5732/*"EVENT_ITEM_UNIT"*/, 0LL);
      v96 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v73 = System_String__Format(v95, v96, 0LL);
      v71 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_84;
    case 19:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v87 = &StringLiteral_12460/*"STONE_FRAGMENTS_UNIT"*/;
LABEL_77:
      v97 = LocalizationManager__Get((System_String_o *)*v87, 0LL);
      v98 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v73 = System_String__Format(v97, v98, 0LL);
      v71 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 6;
      goto LABEL_84;
    case 20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v99 = LocalizationManager__Get((System_String_o *)StringLiteral_2077/*"ANONYMOUS_UNIT"*/, 0LL);
      v100 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v73 = System_String__Format(v99, v100, 0LL);
      v71 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 17;
      goto LABEL_84;
    case 21:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_11118/*"RARE_PRI_UNIT"*/, 0LL);
      v102 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v73 = System_String__Format(v101, v102, 0LL);
      v71 = 0;
      spriteName = 0LL;
      LvExceedDewDropItemId = 18;
LABEL_84:
      v72 = 1;
      goto LABEL_245;
    case 22:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v103 = LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v70 = 1.0;
      v104 = price <= exceedCount || exceedCount <= -1;
      v73 = v103;
      v71 = 0;
      spriteName = 0LL;
      if ( v104 )
        v66 = 1.0;
      else
        v66 = 0.5;
      LvExceedDewDropItemId = 6;
      goto LABEL_224;
    case 23:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v105 = LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v70 = 1.0;
      v106 = price <= exceedCount || exceedCount <= -1;
      v73 = v105;
      v71 = 0;
      spriteName = 0LL;
      if ( v106 )
        v66 = 1.0;
      else
        v66 = 0.5;
      LvExceedDewDropItemId = 7;
      goto LABEL_224;
    case 24:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v107 = LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v70 = 1.0;
      v108 = price <= exceedCount || exceedCount <= -1;
      v73 = v107;
      v71 = 0;
      spriteName = 0LL;
      if ( v108 )
        v66 = 1.0;
      else
        v66 = 0.5;
      LvExceedDewDropItemId = 5;
      goto LABEL_224;
    case 25:
    case 26:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v73 = LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_147;
    case 28:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v70 = 1.0;
      v73 = LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      if ( exceedCount < 0 )
        v109 = 0.5;
      else
        v109 = 1.0;
      v110 = price <= exceedCount || exceedCount <= -1;
      v71 = 0;
      spriteName = 0LL;
      if ( v110 )
        v66 = v109;
      else
        v66 = 0.5;
      LvExceedDewDropItemId = 16;
      goto LABEL_224;
    case 29:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v111 = LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v70 = 1.0;
      v112 = price <= exceedCount || exceedCount <= -1;
      v73 = v111;
      v71 = 0;
      spriteName = 0LL;
      if ( v112 )
        v66 = 1.0;
      else
        v66 = 0.5;
      LvExceedDewDropItemId = 17;
      goto LABEL_224;
    case 30:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v113 = LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v70 = 1.0;
      v114 = price <= exceedCount || exceedCount <= -1;
      v73 = v113;
      v71 = 0;
      spriteName = 0LL;
      if ( v114 )
        v66 = 1.0;
      else
        v66 = 0.5;
      LvExceedDewDropItemId = 18;
LABEL_224:
      v72 = 1;
      goto LABEL_225;
    case 31:
      v115 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v115 = BalanceConfig_TypeInfo;
      }
      LvExceedDewDropItemId = v115->static_fields->LvExceedDewDropItemId;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v73 = LocalizationManager__GetNumberFormat_39303932(v67, 0LL);
      v71 = 0;
      v72 = 0;
LABEL_147:
      v70 = 1.0;
      v116 = price <= exceedCount || exceedCount <= -1;
      spriteName = 0LL;
      if ( v116 )
        v66 = 1.0;
      else
        v66 = 0.5;
LABEL_225:
      v68 = v66;
      v69 = v66;
      goto LABEL_245;
    case 32:
      if ( (price & 0x80000000) != 0 )
        goto LABEL_165;
      v117 = StringLiteral_20800/*"img_txt_bondslevel"*/;
      if ( !StringLiteral_20800/*"img_txt_bondslevel"*/ )
        goto LABEL_163;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      v119 = 40;
      goto LABEL_161;
    case 33:
      if ( price < 1 )
        goto LABEL_165;
      v117 = StringLiteral_20658/*"img_nplv"*/;
      if ( !StringLiteral_20658/*"img_nplv"*/ )
        goto LABEL_163;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      v119 = 55;
LABEL_161:
      UIWidget__set_width(iconSprite, v119, 0LL);
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      UIWidget__set_height(iconSprite, 18, 0LL);
      v64 = exceedCount;
LABEL_163:
      spriteName = (System_String_o *)v117;
      if ( v64 < 1 )
      {
        v71 = 0;
        LvExceedDewDropItemId = 0;
        goto LABEL_243;
      }
      v120 = System_Int32__ToString((int32_t)&price, 0LL);
      v121 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
      v73 = System_String__Concat_62710068(v120, (System_String_o *)StringLiteral_1120/*"/"*/, v121, 0LL);
      v71 = 0;
      LvExceedDewDropItemId = 0;
      v72 = 1;
LABEL_202:
      v66 = 1.0;
LABEL_203:
      v68 = 1.0;
      goto LABEL_204;
    case 34:
      if ( price < 1 )
      {
        v71 = 0;
        v72 = 0;
        LvExceedDewDropItemId = 0;
        spriteName = 0LL;
        v66 = 1.0;
        v68 = 1.0;
        v69 = 1.0;
        v70 = 1.0;
        goto LABEL_166;
      }
      if ( exceedCount )
      {
        if ( (unsigned int)(exceedCount - 1) < 0x62 )
        {
          v69 = 0.31373;
          v68 = 0.94118;
          v66 = 0.98824;
        }
        else
        {
          if ( exceedCount != 99 )
            goto LABEL_242;
          v69 = 0.058824;
          v68 = 0.45098;
          v66 = 1.0;
        }
      }
      else
      {
        v66 = 1.0;
        v68 = 1.0;
        v69 = 1.0;
      }
      v70 = 1.0;
LABEL_242:
      v71 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = (System_String_o *)StringLiteral_20443/*"icon_nplv"*/;
LABEL_243:
      v72 = 1;
LABEL_244:
      v73 = v67;
      goto LABEL_245;
    case 35:
      v122 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon(v122, 0LL);
      goto LABEL_183;
    case 36:
      v123 = price;
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      spriteName = Rarity__getIcon_38608696(v123, v64, lv, 0LL);
      if ( exceedCount < 1 )
        goto LABEL_183;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !iconSprite )
        goto LABEL_298;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)iconSprite, price, exceedCount, 0, 0LL);
      iconSprite = (UIWidget_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !iconSprite )
        goto LABEL_298;
      if ( ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)iconSprite, price, lv, RarityIcon, 0LL) > 2 )
        v71 = 1;
      else
LABEL_183:
        v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      v73 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_245;
    case 38:
    case 39:
    case 40:
      if ( price >= 1 )
      {
        v74 = System_Int32__ToString_63504416((int32_t)&price, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
        PriceInfo = System_String__Concat_62698808((System_String_o *)StringLiteral_855/*"+"*/, v74, 0LL);
LABEL_213:
        v73 = PriceInfo;
        v71 = 0;
        v72 = 0;
        LvExceedDewDropItemId = 0;
        spriteName = 0LL;
        goto LABEL_245;
      }
      if ( (price & 0x80000000) != 0 )
      {
        PriceInfo = System_Int32__ToString_63504416((int32_t)&price, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
        goto LABEL_213;
      }
LABEL_165:
      v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
LABEL_166:
      v73 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_245:
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_298;
      UILabel__set_text((UILabel_o *)iconSprite, v73, 0LL);
      iconSprite = (UIWidget_o *)this->fields.textLabel;
      if ( !iconSprite )
        goto LABEL_298;
      v166.fields.r = v66;
      v166.fields.g = v68;
      v166.fields.b = v69;
      v166.fields.a = v70;
      UIWidget__set_color(iconSprite, v166, 0LL);
      extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
        goto LABEL_252;
      iconSprite = (UIWidget_o *)this->fields.extentionTextLabel;
      if ( !iconSprite )
        goto LABEL_298;
      UILabel__set_text((UILabel_o *)iconSprite, v65, 0LL);
LABEL_252:
      v141 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v141, 0LL, 0LL) )
        return;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_298;
      iconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_298;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, v158 != 56, 0LL);
      if ( LvExceedDewDropItemId < 1 )
      {
        if ( v71 )
        {
          v144 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          v145 = v144;
          v143 = spriteName;
          AtlasManager__SetEventSprite(v145, spriteName, 0LL);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v146 = this->fields.iconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommon(v146, 0LL);
          v143 = spriteName;
        }
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_298;
        UISprite__set_spriteName((UISprite_o *)iconSprite, v143, 0LL);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v142 = this->fields.iconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v142, LvExceedDewDropItemId, 0LL);
        v143 = spriteName;
      }
      if ( !(v72 & 1 | (v143 == 0LL)) )
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
      v147 = (UnityEngine_Object_o *)iconSprite;
      transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.textLabel,
                                            0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v147, transform, 0LL) )
      {
        iconSprite = (UIWidget_o *)this->fields.textLabel;
        if ( !iconSprite )
          goto LABEL_298;
        LODWORD(v149) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)iconSprite, 0LL);
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_298;
        v150 = v149;
        iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
        if ( !iconSprite )
          goto LABEL_298;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconSprite, 0LL);
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        iconSprite = (UIWidget_o *)System_String__op_Equality(v73, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        textLabel = this->fields.textLabel;
        if ( ((unsigned __int8)iconSprite & 1) != 0 )
        {
          if ( !textLabel )
            goto LABEL_298;
          v150 = v150 - (float)textLabel->fields.mSpacingX;
        }
        else if ( !textLabel )
        {
          goto LABEL_298;
        }
        mAlignment = textLabel->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v155 = (float)(v150 * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v156 = (float)-this->fields.blankSize;
            goto LABEL_294;
          }
          v155 = v150 + (float)this->fields.blankSize;
        }
        v156 = -v155;
LABEL_294:
        iconSprite = (UIWidget_o *)this->fields.iconSprite;
        if ( iconSprite )
        {
          iconSprite = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconSprite, 0LL);
          if ( iconSprite )
          {
            v165.fields.x = v156;
            v165.fields.y = y;
            v165.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconSprite, v165, 0LL);
            return;
          }
        }
LABEL_298:
        sub_1BE4D28(iconSprite, v63);
      }
      return;
    case 41:
    case 42:
    case 43:
      v76 = price;
      v77 = System_Int32__ToString_63504416((int32_t)&price, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
      v78 = (System_String_o **)&StringLiteral_691/*"("*/;
      if ( v76 >= 0 )
        v78 = (System_String_o **)&StringLiteral_712/*"(+"*/;
      v73 = System_String__Concat_62710068(*v78, v77, (System_String_o *)StringLiteral_809/*")"*/, 0LL);
      v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      if ( price <= exceedCount )
      {
        v66 = 1.0;
        if ( price >= exceedCount )
          v68 = 1.0;
        else
          v68 = 0.0;
        spriteName = 0LL;
        v69 = v68;
      }
      else
      {
        spriteName = 0LL;
        v68 = 1.0;
        v66 = 0.0;
LABEL_204:
        v69 = 1.0;
      }
      v70 = 1.0;
      goto LABEL_245;
    case 44:
    case 45:
      if ( (price & 0x80000000) != 0 )
        goto LABEL_165;
      if ( exceedCount < 1 )
        goto LABEL_29;
      v80 = System_Int32__ToString_63504416((int32_t)&price, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
      v81 = System_Int32__ToString_63504416((int32_t)&exceedCount, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
      v73 = System_String__Concat_62710068(v80, (System_String_o *)StringLiteral_1120/*"/"*/, v81, 0LL);
      v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_202;
    case 46:
      v125 = &StringLiteral_20628/*"img_list_hp"*/;
      goto LABEL_187;
    case 47:
      v125 = &StringLiteral_20620/*"img_list_atk"*/;
LABEL_187:
      spriteName = (System_String_o *)*v125;
      v73 = System_Int32__ToString_63504416((int32_t)&price, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
      if ( (v161 & 0x80000000) != 0 )
      {
        v127 = System_Int32__ToString((int32_t)&v161, 0LL);
      }
      else
      {
        v126 = System_Int32__ToString_63504416((int32_t)&v161, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
        v127 = System_String__Concat_62698808((System_String_o *)StringLiteral_855/*"+"*/, v126, 0LL);
      }
      v65 = v127;
      goto LABEL_228;
    case 48:
      v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      if ( price <= 0 )
        v73 = (System_String_o *)StringLiteral_1/*""*/;
      else
        v73 = v62;
      goto LABEL_245;
    case 49:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      PriceInfo = LocalizationManager__GetDate(time, 0LL);
      goto LABEL_213;
    case 50:
      spriteName = (System_String_o *)StringLiteral_20627/*"img_list_costume_num"*/;
      v128 = System_Int32__ToString((int32_t)&price, 0LL);
      goto LABEL_201;
    case 51:
      v129 = &StringLiteral_20635/*"img_list_release_num"*/;
      goto LABEL_200;
    case 52:
      v129 = &StringLiteral_20634/*"img_list_not_release_costume"*/;
      goto LABEL_200;
    case 53:
      v129 = &StringLiteral_20633/*"img_list_not_clear_cond"*/;
      goto LABEL_200;
    case 54:
      v129 = &StringLiteral_20629/*"img_list_limit_cnt"*/;
LABEL_200:
      spriteName = (System_String_o *)*v129;
      v130 = System_Int32__ToString((int32_t)&price, 0LL);
      v131 = System_Int32__ToString((int32_t)&exceedCount, 0LL);
      v128 = System_String__Concat_62710068(v130, (System_String_o *)StringLiteral_1120/*"/"*/, v131, 0LL);
      goto LABEL_201;
    case 55:
      spriteName = (System_String_o *)StringLiteral_20833/*"img_txt_fp"*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v132 = LocalizationManager__Get((System_String_o *)StringLiteral_6567/*"FOLLOWER_SELECT_TYPE_POINT"*/, 0LL);
      v159 = price;
      v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v159, v133, v134, v135);
      v128 = System_String__Format(v132, v136, 0LL);
LABEL_201:
      v73 = v128;
      v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_202;
    case 56:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v86 = &StringLiteral_9439/*"NOT_HAVING_SHOP_ITEM_RECEIVE"*/;
LABEL_212:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v86, 0LL);
      goto LABEL_213;
    default:
LABEL_29:
      v71 = 0;
      v72 = 0;
      LvExceedDewDropItemId = 0;
      spriteName = 0LL;
      goto LABEL_244;
  }
}


void __fastcall UIIconLabel__Set_39168808(
        UIIconLabel_o *this,
        IconLabelInfo_o *info,
        bool isHide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  if ( info )
    UIIconLabel__Set_39141664(
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