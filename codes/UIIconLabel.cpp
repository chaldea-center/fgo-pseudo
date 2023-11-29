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
  UILabel_o *v8; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UISprite_o *v10; // x0

  if ( (byte_4103A00 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_4103A00 = 1;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_17;
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1, v2);
  extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
  {
    v8 = this->fields.extentionTextLabel;
    if ( !v8 )
      goto LABEL_17;
    UILabel__set_text(v8, (System_String_o *)StringLiteral_1, v7);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v10 = this->fields.iconSprite;
    if ( v10 )
    {
      UISprite__set_spriteName(v10, 0LL, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
}


int32_t __fastcall UIIconLabel__GetFontSize(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x8

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B170D4();
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

  if ( (byte_4103A03 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_4103A03 = 1;
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
      sub_B170D4();
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
    sub_B170D4();
  return *(UnityEngine_Vector2Int_o *)&textLabel->fields.mWidth;
}


void __fastcall UIIconLabel__Set(UIIconLabel_o *this, IconLabelInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+8h] [xbp-8h]

  if ( info )
    UIIconLabel__Set_40377052(
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
  UIWidget_o *v7; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UIWidget_o *v9; // x0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4103A04 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_4103A04 = 1;
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
    v7 = (UIWidget_o *)this->fields.extentionTextLabel;
    if ( !v7 )
      goto LABEL_17;
    v11.fields.r = v7->fields.mColor.fields.r;
    v11.fields.g = v7->fields.mColor.fields.g;
    v11.fields.b = v7->fields.mColor.fields.b;
    v11.fields.a = alpha;
    UIWidget__set_color(v7, v11, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v9 = (UIWidget_o *)this->fields.iconSprite;
    if ( v9 )
    {
      v12.fields.r = v9->fields.mColor.fields.r;
      v12.fields.g = v9->fields.mColor.fields.g;
      v12.fields.b = v9->fields.mColor.fields.b;
      v12.fields.a = alpha;
      UIWidget__set_color(v9, v12, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
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

  if ( (byte_4103A02 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&data);
    sub_B16FFC(&StringLiteral_3188, v9);
    sub_B16FFC(&StringLiteral_3178, v10);
    byte_4103A02 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(data, 0LL);
  v12 = LocalizationManager__GetNumberFormat(adjustData, 0LL);
  v13 = (System_String_o **)&StringLiteral_3178;
  v14 = !isLimit;
  textLabel = this->fields.textLabel;
  if ( v14 )
    v13 = (System_String_o **)&StringLiteral_3188;
  v16 = *v13;
  v17 = (Il2CppObject *)v12;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get(v16, 0LL);
  v19 = System_String__Format_43739268(v18, NumberFormat, v17, 0LL);
  if ( !textLabel )
    sub_B170D4();
  UILabel__set_text(textLabel, v19, v20);
}


void __fastcall UIIconLabel__SetEventQuestion(UIIconLabel_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+8h] [xbp-8h]

  UIIconLabel__Set_40377052(this, 27, 0, 0, 0, 0LL, 1, 0, 0, v2);
}


void __fastcall UIIconLabel__SetPurchaseDecision(
        UIIconLabel_o *this,
        int32_t iconKind,
        int32_t price,
        int32_t holdCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // [xsp+8h] [xbp-8h]

  UIIconLabel__Set_40377052(this, iconKind, price, holdCount, 0, 0LL, 0, 0, 0, v5);
}


void __fastcall UIIconLabel__SetTextLabelPixelPerfect(UIIconLabel_o *this, const MethodInfo *method)
{
  struct UILabel_o *textLabel; // x0

  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B170D4();
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
  UIWidget_o *v6; // x0

  textLabel = (UIWidget_o *)this->fields.textLabel;
  if ( !textLabel
    || (m_Y = size.fields.m_Y,
        UIWidget__set_width(textLabel, size.fields.m_X, 0LL),
        (v6 = (UIWidget_o *)this->fields.textLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UIWidget__set_height(v6, m_Y, 0LL);
}


void __fastcall UIIconLabel__SetTextLabelStrikeout(UIIconLabel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *textLabel; // x19
  System_String_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4103A05 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15592, method);
    sub_B16FFC(&StringLiteral_15750, v3);
    byte_4103A05 = 1;
  }
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_B170D4();
  v5 = System_String__Concat_43746016(
         (System_String_o *)StringLiteral_15750,
         textLabel->fields.mText,
         (System_String_o *)StringLiteral_15592,
         0LL);
  UILabel__set_text(textLabel, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIIconLabel__Set_40377052(
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
  System_String_o *NumberFormat_23125544; // x0
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
  UIWidget_o *v128; // x0
  System_String_o *v129; // x22
  System_String_o *v130; // x0
  int v131; // s0
  float v132; // s1
  unsigned int v133; // s2
  unsigned int v134; // s3
  int32_t v135; // w22
  int32_t v136; // w23
  int32_t v137; // w24
  ServantExceedMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t RarityIcon; // w24
  ServantLvDetailMaster_o *v140; // x0
  System_String_o *v141; // x0
  System_String_o *v142; // x0
  System_String_o *v143; // x0
  System_String_o *v144; // x22
  System_String_o *v145; // x2
  System_String_o *v146; // x0
  System_String_o *v147; // x22
  Il2CppObject *v148; // x0
  UILabel_o *textLabel; // x0
  System_String_o *v150; // x27
  UIWidget_o *v151; // x0
  UnityEngine_Object_o *extentionTextLabel; // x25
  const MethodInfo *v153; // x2
  UILabel_o *v154; // x0
  UnityEngine_Object_o *v155; // x21
  UnityEngine_Component_o *v156; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v158; // x20
  UISprite_o *v159; // x20
  UISprite_o *v160; // x20
  UISprite_o *v161; // x0
  struct UISprite_o *v162; // x0
  UnityEngine_Component_o *v163; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *v166; // x20
  UnityEngine_Object_o *v167; // x21
  const MethodInfo *v168; // x3
  struct UILabel_o *v169; // x20
  UnityEngine_Component_o *v170; // x0
  float x; // s10
  UnityEngine_Transform_o *v172; // x0
  float y; // s8
  float z; // s9
  bool v175; // w0
  struct UILabel_o *v176; // x8
  int32_t mAlignment; // w8
  float v178; // s0
  float v179; // s10
  UnityEngine_Component_o *v180; // x0
  UnityEngine_Transform_o *v181; // x0
  int v182; // s0
  System_String_o *value; // [xsp+8h] [xbp-98h]
  int32_t v184; // [xsp+10h] [xbp-90h] BYREF
  __int64 v185; // [xsp+14h] [xbp-8Ch] BYREF
  float g; // [xsp+1Ch] [xbp-84h]
  unsigned __int64 v187; // [xsp+20h] [xbp-80h]
  _DWORD v188[3]; // [xsp+2Ch] [xbp-74h] BYREF
  int32_t v189; // [xsp+38h] [xbp-68h] BYREF
  int32_t v190[13]; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v192; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v193; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o PurchaseDecisionColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v195; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v196; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v197; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v198; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v199; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v189 = adjustData;
  v190[0] = data;
  v188[0] = equipData;
  if ( (byte_4103A01 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&iconKind);
    sub_B16FFC(&BalanceConfig_TypeInfo, v17);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v19);
    sub_B16FFC(&DataManager_TypeInfo, v20);
    sub_B16FFC(&int_TypeInfo, v21);
    sub_B16FFC(&LocalizationManager_TypeInfo, v22);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v23);
    sub_B16FFC(&Rarity_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_19431, v25);
    sub_B16FFC(&StringLiteral_5627, v26);
    sub_B16FFC(&StringLiteral_10847, v27);
    sub_B16FFC(&StringLiteral_690, v28);
    sub_B16FFC(&StringLiteral_19441, v29);
    sub_B16FFC(&StringLiteral_9311, v30);
    sub_B16FFC(&StringLiteral_12323, v31);
    sub_B16FFC(&StringLiteral_6431, v32);
    sub_B16FFC(&StringLiteral_6381, v33);
    sub_B16FFC(&StringLiteral_19592, v34);
    sub_B16FFC(&StringLiteral_19434, v35);
    sub_B16FFC(&StringLiteral_19442, v36);
    sub_B16FFC(&StringLiteral_19437, v37);
    sub_B16FFC(&StringLiteral_19278, v38);
    sub_B16FFC(&StringLiteral_1520, v39);
    sub_B16FFC(&StringLiteral_19439, v40);
    sub_B16FFC(&StringLiteral_871, v41);
    sub_B16FFC(&StringLiteral_8592, v42);
    sub_B16FFC(&StringLiteral_340, v43);
    sub_B16FFC(&StringLiteral_19436, v44);
    sub_B16FFC(&StringLiteral_19435, v45);
    sub_B16FFC(&StringLiteral_585, v46);
    sub_B16FFC(&StringLiteral_1682, v47);
    sub_B16FFC(&StringLiteral_19625, v48);
    sub_B16FFC(&StringLiteral_651, v49);
    sub_B16FFC(&StringLiteral_12341, v50);
    sub_B16FFC(&StringLiteral_1525, v51);
    sub_B16FFC(&StringLiteral_596, v52);
    sub_B16FFC(&StringLiteral_1, v53);
    sub_B16FFC(&StringLiteral_6427, v54);
    sub_B16FFC(&StringLiteral_1524, v55);
    sub_B16FFC(&StringLiteral_19443, v56);
    sub_B16FFC(&StringLiteral_19466, v57);
    sub_B16FFC(&StringLiteral_10977, v58);
    sub_B16FFC(&StringLiteral_19438, v59);
    sub_B16FFC(&StringLiteral_1526, v60);
    sub_B16FFC(&StringLiteral_19440, v61);
    byte_4103A01 = 1;
  }
  g = 0.0;
  v187 = 0LL;
  v185 = (unsigned int)(equipData + data);
  v62 = System_Int32__ToString((int32_t)&v185, 0LL);
  value = (System_String_o *)StringLiteral_1;
  if ( v189 <= 0 )
    *(UnityEngine_Color_o *)&v66 = UnityEngine_Color__get_white(0LL);
  else
    *(UnityEngine_Color_o *)&v66 = UnityEngine_Color__get_yellow(0LL);
  Icon = 0LL;
  v75 = 0;
  HIDWORD(v185) = v66;
  g = v67;
  v187 = __PAIR64__(v69, v68);
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
      if ( v190[0] < 1 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19439;
      if ( v189 < 1 )
      {
        v75 = 0;
        v76 = 0;
        LvExceedDewDropItemId = 0;
        if ( isHide )
          v62 = (System_String_o *)StringLiteral_1524;
        goto LABEL_204;
      }
      if ( isHide )
      {
        v62 = (System_String_o *)StringLiteral_1525;
      }
      else
      {
        v62 = System_Int32__ToString((int32_t)v190, 0LL);
        if ( !isMaxHide )
        {
          v145 = System_Int32__ToString((int32_t)&v189, 0LL);
          v146 = v62;
LABEL_184:
          v143 = System_String__Concat_43746016(v146, (System_String_o *)StringLiteral_871, v145, 0LL);
LABEL_185:
          v62 = v143;
        }
      }
      *(UnityEngine_Color_o *)&v83 = UnityEngine_Color__get_white(0LL);
      v75 = 0;
      v76 = 0;
      LvExceedDewDropItemId = 0;
LABEL_187:
      HIDWORD(v185) = v83;
      goto LABEL_188;
    case 3:
      v99 = &StringLiteral_19436;
      goto LABEL_53;
    case 5:
      v99 = &StringLiteral_19431;
LABEL_53:
      Icon = (System_String_o *)*v99;
      LODWORD(v185) = v188[0] + v190[0];
      v100 = System_Int32__ToString_38275808((int32_t)&v185, (System_String_o *)StringLiteral_340, 0LL);
      v75 = 0;
      v76 = 0;
      LvExceedDewDropItemId = 0;
      if ( isHide )
        v62 = (System_String_o *)StringLiteral_1526;
      else
        v62 = v100;
      goto LABEL_204;
    case 7:
      Icon = (System_String_o *)StringLiteral_19434;
      if ( v188[0] >= 1 )
      {
        v101 = System_Int32__ToString((int32_t)v190, 0LL);
        v102 = System_Int32__ToString((int32_t)v188, 0LL);
        v62 = System_String__Concat_43746016(v101, (System_String_o *)StringLiteral_690, v102, 0LL);
      }
      goto LABEL_202;
    case 8:
    case 57:
      v87 = &StringLiteral_19440;
      goto LABEL_60;
    case 9:
      if ( v190[0] < 1 )
        goto LABEL_151;
      v87 = &StringLiteral_19438;
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
      v98 = &StringLiteral_6427;
      goto LABEL_65;
    case 11:
    case 27:
      if ( isHide )
      {
        v62 = (System_String_o *)StringLiteral_1520;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        NumberFormat_23125544 = LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
        v62 = NumberFormat_23125544;
      }
      *(UnityEngine_Color_o *)&v131 = UIIconLabel__GetPurchaseDecisionColor(
                                        (UIIconLabel_o *)NumberFormat_23125544,
                                        v190[0],
                                        v189,
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
      v103 = &StringLiteral_12341;
      goto LABEL_98;
    case 13:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_8592, 0LL);
      v105 = (Il2CppObject *)LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
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
      v106 = LocalizationManager__Get((System_String_o *)StringLiteral_10847, 0LL);
      v107 = (Il2CppObject *)LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
      v62 = System_String__Format(v106, v107, 0LL);
      v75 = 0;
      Icon = 0LL;
      goto LABEL_122;
    case 15:
      v108 = v190[0];
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
      v109 = LocalizationManager__Get((System_String_o *)StringLiteral_6431, 0LL);
      v110 = (Il2CppObject *)LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
      PriceInfo = System_String__Format(v109, v110, 0LL);
      goto LABEL_178;
    case 17:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      PriceInfo = LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
      goto LABEL_178;
    case 18:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v111 = LocalizationManager__Get((System_String_o *)StringLiteral_5627, 0LL);
      v112 = (Il2CppObject *)LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
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
      v103 = &StringLiteral_12323;
LABEL_98:
      v113 = LocalizationManager__Get((System_String_o *)*v103, 0LL);
      v114 = (Il2CppObject *)LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
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
      v115 = LocalizationManager__Get((System_String_o *)StringLiteral_1682, 0LL);
      v116 = (Il2CppObject *)LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
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
      v117 = LocalizationManager__Get((System_String_o *)StringLiteral_10977, 0LL);
      v118 = (Il2CppObject *)LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
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
      v62 = LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
      PurchaseDecisionColor = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v190[0], v189, v119);
      v75 = 0;
      Icon = 0LL;
      HIDWORD(v185) = LODWORD(PurchaseDecisionColor.fields.r);
      g = PurchaseDecisionColor.fields.g;
      v187 = *(_QWORD *)&PurchaseDecisionColor.fields.b;
LABEL_112:
      LvExceedDewDropItemId = 6;
      goto LABEL_199;
    case 23:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
      v195 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v190[0], v189, v120);
      v75 = 0;
      Icon = 0LL;
      HIDWORD(v185) = LODWORD(v195.fields.r);
      g = v195.fields.g;
      v187 = *(_QWORD *)&v195.fields.b;
LABEL_117:
      LvExceedDewDropItemId = 7;
      goto LABEL_199;
    case 24:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
      v196 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v190[0], v189, v121);
      v75 = 0;
      Icon = 0LL;
      HIDWORD(v185) = LODWORD(v196.fields.r);
      g = v196.fields.g;
      v187 = *(_QWORD *)&v196.fields.b;
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
      v62 = LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
      *(UnityEngine_Color_o *)&v83 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v190[0], v189, v88);
      goto LABEL_26;
    case 28:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
      v197 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v190[0], v189, v122);
      v75 = 0;
      Icon = 0LL;
      HIDWORD(v185) = LODWORD(v197.fields.r);
      g = v197.fields.g;
      v187 = *(_QWORD *)&v197.fields.b;
      LvExceedDewDropItemId = 16;
      goto LABEL_199;
    case 29:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
      v193 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v190[0], v189, v91);
      v75 = 0;
      Icon = 0LL;
      HIDWORD(v185) = LODWORD(v193.fields.r);
      g = v193.fields.g;
      v187 = *(_QWORD *)&v193.fields.b;
LABEL_103:
      LvExceedDewDropItemId = 17;
      goto LABEL_199;
    case 30:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
      v198 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v190[0], v189, v123);
      v75 = 0;
      Icon = 0LL;
      HIDWORD(v185) = LODWORD(v198.fields.r);
      g = v198.fields.g;
      v187 = *(_QWORD *)&v198.fields.b;
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
      v62 = LocalizationManager__GetNumberFormat_23125544(v62, 0LL);
      *(UnityEngine_Color_o *)&v83 = UIIconLabel__GetPurchaseDecisionColor((UIIconLabel_o *)v62, v190[0], v189, v125);
      v75 = 0;
      v76 = 0;
      goto LABEL_27;
    case 32:
      if ( (v190[0] & 0x80000000) != 0 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19592;
      if ( !StringLiteral_19592 )
        goto LABEL_149;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      v127 = 40;
      goto LABEL_147;
    case 33:
      if ( v190[0] < 1 )
        goto LABEL_151;
      Icon = (System_String_o *)StringLiteral_19466;
      if ( !StringLiteral_19466 )
        goto LABEL_149;
      iconSprite = (UIWidget_o *)this->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_278;
      v127 = 55;
LABEL_147:
      UIWidget__set_width(iconSprite, v127, 0LL);
      v128 = (UIWidget_o *)this->fields.iconSprite;
      if ( !v128 )
        goto LABEL_278;
      UIWidget__set_height(v128, 18, 0LL);
LABEL_149:
      if ( v189 < 1 )
      {
        v75 = 0;
        LvExceedDewDropItemId = 0;
      }
      else
      {
        v129 = System_Int32__ToString((int32_t)v190, 0LL);
        v130 = System_Int32__ToString((int32_t)&v189, 0LL);
        v62 = System_String__Concat_43746016(v129, (System_String_o *)StringLiteral_871, v130, 0LL);
        *(UnityEngine_Color_o *)&v131 = UnityEngine_Color__get_white(0LL);
        v75 = 0;
        LvExceedDewDropItemId = 0;
LABEL_198:
        HIDWORD(v185) = v131;
        g = v132;
        v187 = __PAIR64__(v134, v133);
      }
LABEL_199:
      v76 = 1;
      goto LABEL_204;
    case 34:
      if ( v190[0] >= 1 )
      {
        if ( v189 )
        {
          if ( (unsigned int)(v189 - 1) <= 0x61 )
          {
            v94 = 1065155837;
            v92 = 1064366321;
            v93 = 1050714273;
            v95 = 1.0;
            goto LABEL_274;
          }
          if ( v189 == 99 )
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
              (const MethodInfo *)((char *)&v185 + 4));
          }
        }
        else
        {
          white = UnityEngine_Color__get_white(0LL);
          HIDWORD(v185) = LODWORD(white.fields.r);
          g = white.fields.g;
          v187 = *(_QWORD *)&white.fields.b;
        }
        v75 = 0;
        LvExceedDewDropItemId = 0;
        v76 = 1;
        Icon = (System_String_o *)StringLiteral_19278;
        goto LABEL_204;
      }
      *(UnityEngine_Color_o *)(&v84 - 1) = UnityEngine_Color__get_white(0LL);
      HIDWORD(v185) = v182;
      v75 = 0;
      v76 = 0;
      LvExceedDewDropItemId = 0;
      v62 = (System_String_o *)StringLiteral_1;
      Icon = 0LL;
LABEL_188:
      g = v84;
      v187 = __PAIR64__(v86, v85);
LABEL_204:
      textLabel = this->fields.textLabel;
      if ( !textLabel )
        goto LABEL_278;
      v150 = v62;
      UILabel__set_text(textLabel, v62, v64);
      v151 = (UIWidget_o *)this->fields.textLabel;
      if ( !v151 )
        goto LABEL_278;
      *(_QWORD *)&v199.fields.b = v187;
      v199.fields.r = *((float *)&v185 + 1);
      v199.fields.g = g;
      UIWidget__set_color(v151, v199, 0LL);
      extentionTextLabel = (UnityEngine_Object_o *)this->fields.extentionTextLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(extentionTextLabel, 0LL, 0LL) )
        goto LABEL_212;
      v154 = this->fields.extentionTextLabel;
      if ( !v154 )
        goto LABEL_278;
      UILabel__set_text(v154, value, v153);
LABEL_212:
      v155 = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v155, 0LL, 0LL) )
        return;
      v156 = (UnityEngine_Component_o *)this->fields.iconSprite;
      if ( !v156 )
        goto LABEL_278;
      gameObject = UnityEngine_Component__get_gameObject(v156, 0LL);
      if ( !gameObject )
        goto LABEL_278;
      UnityEngine_GameObject__SetActive(gameObject, iconKind != 56, 0LL);
      if ( LvExceedDewDropItemId < 1 )
      {
        if ( v75 )
        {
          v159 = this->fields.iconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventSprite(v159, Icon, 0LL);
        }
        else
        {
          if ( this->fields.isCustmAtlas )
            this->fields.isCustmAtlas = 0;
          v160 = this->fields.iconSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCommon(v160, 0LL);
        }
        v161 = this->fields.iconSprite;
        if ( !v161 )
          goto LABEL_278;
        UISprite__set_spriteName(v161, Icon, 0LL);
      }
      else
      {
        this->fields.isCustmAtlas = 1;
        v158 = this->fields.iconSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetItem(v158, LvExceedDewDropItemId, 0LL);
      }
      if ( !(v76 & 1 | (Icon == 0LL)) )
      {
        v162 = this->fields.iconSprite;
        if ( !v162 )
          goto LABEL_278;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v162->klass->vtable._33_MakePixelPerfect.method)(
          v162,
          v162->klass->vtable._34_get_minWidth.methodPtr);
      }
      v163 = (UnityEngine_Component_o *)this->fields.iconSprite;
      if ( !v163 )
        goto LABEL_278;
      transform = UnityEngine_Component__get_transform(v163, 0LL);
      if ( !transform )
        goto LABEL_278;
      parent = UnityEngine_Transform__get_parent(transform, 0LL);
      if ( !this->fields.textLabel )
        goto LABEL_278;
      v166 = (UnityEngine_Object_o *)parent;
      v167 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)this->fields.textLabel,
                                       0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v166, v167, 0LL) )
      {
        v169 = this->fields.textLabel;
        if ( !v169 )
          goto LABEL_278;
        if ( v169->fields.mShouldBeProcessed )
          UILabel__ProcessText_40426952(this->fields.textLabel, 0, 1, v168);
        v170 = (UnityEngine_Component_o *)this->fields.iconSprite;
        if ( !v170 )
          goto LABEL_278;
        x = v169->fields.mCalculatedSize.fields.x;
        v172 = UnityEngine_Component__get_transform(v170, 0LL);
        if ( !v172 )
          goto LABEL_278;
        localPosition = UnityEngine_Transform__get_localPosition(v172, 0LL);
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        v175 = System_String__op_Equality(v150, (System_String_o *)StringLiteral_1, 0LL);
        v176 = this->fields.textLabel;
        if ( v175 )
        {
          if ( !v176 )
            goto LABEL_278;
          x = x - (float)v176->fields.mSpacingX;
        }
        else if ( !v176 )
        {
          goto LABEL_278;
        }
        mAlignment = v176->fields.mAlignment;
        if ( mAlignment == 2 )
        {
          v178 = (float)(x * 0.5) + (float)this->fields.blankSize;
        }
        else
        {
          if ( mAlignment != 3 )
          {
            v179 = (float)-this->fields.blankSize;
            goto LABEL_261;
          }
          v178 = x + (float)this->fields.blankSize;
        }
        v179 = -v178;
LABEL_261:
        v180 = (UnityEngine_Component_o *)this->fields.iconSprite;
        if ( v180 )
        {
          v181 = UnityEngine_Component__get_transform(v180, 0LL);
          if ( v181 )
          {
            v192.fields.x = v179;
            v192.fields.y = y;
            v192.fields.z = z;
            UnityEngine_Transform__set_localPosition(v181, v192, 0LL);
            return;
          }
        }
LABEL_278:
        sub_B170D4();
      }
      return;
    case 35:
      v135 = v190[0];
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon = Rarity__getIcon(v135, 0LL);
      goto LABEL_166;
    case 36:
      v137 = v189;
      v136 = v190[0];
      if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon = Rarity__getIcon_21544656(v136, v137, lv, 0LL);
      if ( v189 < 1 )
        goto LABEL_166;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_278;
      RarityIcon = ServantExceedMaster__GetRarityIcon(Master_WarQuestSelectionMaster, v190[0], v189, 0, 0LL);
      v140 = (ServantLvDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !v140 )
        goto LABEL_278;
      if ( ServantLvDetailMaster__GetRarityIcon(v140, v190[0], lv, RarityIcon, 0LL) > 2 )
        v75 = 1;
      else
LABEL_166:
        v75 = 0;
      v76 = 0;
      LvExceedDewDropItemId = 0;
      v62 = (System_String_o *)StringLiteral_1;
      goto LABEL_204;
    case 38:
    case 39:
    case 40:
      if ( v190[0] < 1 )
      {
        if ( (v190[0] & 0x80000000) == 0 )
        {
LABEL_151:
          v75 = 0;
          v76 = 0;
          LvExceedDewDropItemId = 0;
          v62 = (System_String_o *)StringLiteral_1;
          goto LABEL_180;
        }
        PriceInfo = System_Int32__ToString_38275808((int32_t)v190, (System_String_o *)StringLiteral_340, 0LL);
      }
      else
      {
        v78 = System_Int32__ToString_38275808((int32_t)v190, (System_String_o *)StringLiteral_340, 0LL);
        PriceInfo = System_String__Concat_43743732((System_String_o *)StringLiteral_690, v78, 0LL);
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
      v80 = v190[0];
      v81 = System_Int32__ToString_38275808((int32_t)v190, (System_String_o *)StringLiteral_340, 0LL);
      v82 = (System_String_o **)&StringLiteral_585;
      if ( v80 >= 0 )
        v82 = (System_String_o **)&StringLiteral_596;
      v62 = System_String__Concat_43746016(*v82, v81, (System_String_o *)StringLiteral_651, 0LL);
      if ( v190[0] <= v189 )
      {
        if ( v190[0] >= v189 )
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
      if ( (v190[0] & 0x80000000) != 0 )
        goto LABEL_151;
      if ( v189 < 1 )
        goto LABEL_179;
      v89 = System_Int32__ToString_38275808((int32_t)v190, (System_String_o *)StringLiteral_340, 0LL);
      v90 = System_Int32__ToString_38275808((int32_t)&v189, (System_String_o *)StringLiteral_340, 0LL);
      v62 = System_String__Concat_43746016(v89, (System_String_o *)StringLiteral_871, v90, 0LL);
      goto LABEL_25;
    case 46:
      v96 = &StringLiteral_19436;
      goto LABEL_169;
    case 47:
      v96 = &StringLiteral_19431;
LABEL_169:
      Icon = (System_String_o *)*v96;
      v62 = System_Int32__ToString_38275808((int32_t)v190, (System_String_o *)StringLiteral_340, 0LL);
      if ( (v188[0] & 0x80000000) != 0 )
      {
        v142 = System_Int32__ToString((int32_t)v188, 0LL);
      }
      else
      {
        v141 = System_Int32__ToString_38275808((int32_t)v188, (System_String_o *)StringLiteral_340, 0LL);
        v142 = System_String__Concat_43743732((System_String_o *)StringLiteral_690, v141, 0LL);
      }
      value = v142;
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
      if ( v190[0] <= 0 )
        v62 = (System_String_o *)StringLiteral_1;
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
      Icon = (System_String_o *)StringLiteral_19435;
      v143 = System_Int32__ToString((int32_t)v190, 0LL);
      goto LABEL_185;
    case 51:
      v97 = &StringLiteral_19443;
      goto LABEL_183;
    case 52:
      v97 = &StringLiteral_19442;
      goto LABEL_183;
    case 53:
      v97 = &StringLiteral_19441;
      goto LABEL_183;
    case 54:
      v97 = &StringLiteral_19437;
LABEL_183:
      Icon = (System_String_o *)*v97;
      v144 = System_Int32__ToString((int32_t)v190, 0LL);
      v145 = System_Int32__ToString((int32_t)&v189, 0LL);
      v146 = v144;
      goto LABEL_184;
    case 55:
      Icon = (System_String_o *)StringLiteral_19625;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v147 = LocalizationManager__Get((System_String_o *)StringLiteral_6381, 0LL);
      v184 = v190[0];
      v148 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v184);
      v143 = System_String__Format(v147, v148, 0LL);
      goto LABEL_185;
    case 56:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v98 = &StringLiteral_9311;
LABEL_65:
      PriceInfo = LocalizationManager__Get((System_String_o *)*v98, 0LL);
      goto LABEL_178;
    default:
      v76 = 0;
      LvExceedDewDropItemId = 0;
      goto LABEL_204;
  }
}


void __fastcall UIIconLabel__Set_40382388(
        UIIconLabel_o *this,
        IconLabelInfo_o *info,
        bool isHide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+8h] [xbp-8h]

  if ( info )
    UIIconLabel__Set_40377052(
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