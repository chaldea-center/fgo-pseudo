void BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3
  long double v4; // q8
  long double v5; // q9
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  long double v10; // q0
  long double v11; // q3

  if ( (byte_4C3A4CE & 1) == 0 )
  {
    sub_1C32C20(&ItemIconComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_803/*"+"*/);
    byte_4C3A4CE = 1;
  }
  LODWORD(v4) = 1064037356;
  LODWORD(v5) = 1015054465;
  LODWORD(v2) = 1.0;
  LODWORD(v3) = 1.0;
  this->fields.addCountColor.fields.rgba = sub_250F080(0, v2, v4, v5, v3);
  v7 = StringLiteral_803/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_803/*"+"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.addCountStr, v7, v8, v9);
  LODWORD(v10) = 1.0;
  LODWORD(v11) = 1.0;
  this->fields.nowAddCountColor.fields.rgba = sub_250F080(0, v10, v4, v5, v11);
  if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
  ItemIconComponent___ctor((ItemIconComponent_o *)this, 0);
}


void BattleItemIconComponent__SetActiveDarkMode(
        BattleItemIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  unsigned int rgba; // w8
  long double v9; // q0
  long double v10; // q1
  long double v11; // q2
  long double v12; // q3
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( isActive )
  {
    r = this->fields.darkModeColor.fields.r;
    g = this->fields.darkModeColor.fields.g;
    b = this->fields.darkModeColor.fields.b;
    a = this->fields.darkModeColor.fields.a;
  }
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  ItemIconComponent__SetColor((ItemIconComponent_o *)this, v13, 0);
  rgba = this->fields.addCountColor.fields.rgba;
  *(float *)&v9 = r * (float)((float)(unsigned __int8)rgba / 255.0);
  *(float *)&v10 = g * (float)((float)BYTE1(rgba) / 255.0);
  *(float *)&v11 = b * (float)((float)BYTE2(rgba) / 255.0);
  *(float *)&v12 = a * (float)((float)HIBYTE(rgba) / 255.0);
  this->fields.nowAddCountColor.fields.rgba = sub_250F080(0, v9, v10, v11, v12);
}


void BattleItemIconComponent__setCounterLabel(
        BattleItemIconComponent_o *this,
        int32_t type,
        int32_t count,
        int32_t addCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *counterLabel; // x23
  UILabel_o *v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  UILabel_o *v17; // x22
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x1
  System_String_o *CountableString; // x0
  unsigned int rgba; // w8
  System_String_o *v23; // x25
  System_String_o *v24; // x0
  struct UILabel_o *v25; // x22
  System_String_o *v26; // x24
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UILabel_o *v29; // x23
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UILabel_o *v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_String_o *addCountStr; // x20
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UILabel_o *v52; // x19
  System_String_o *v53; // x1
  UILabel_o *v54; // x0
  struct UILabel_o *v55; // x21
  unsigned int v56; // w8
  System_String_o *mText; // x22
  System_String_o *v58; // x0
  Il2CppObject *v59; // x20
  Il2CppObject *v60; // x23
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x5
  __int64 v65; // x6
  __int64 v66; // x7
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  __int64 v69; // x0
  int32_t v70; // [xsp+8h] [xbp-48h] BYREF
  int32_t v71; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3A4CD & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_25201/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/);
    sub_1C32C20(&StringLiteral_16015/*"[{0}]({1}{2:#,0})[-]"*/);
    sub_1C32C20(&StringLiteral_25200/*"{0}{1:#,0}"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A4CD = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
    return;
  v10 = this->fields.counterLabel;
  if ( !v10 )
    goto LABEL_36;
  if ( count > 99 || addCount >= 100 )
  {
    UILabel__set_spacingY(v10, 2, 0);
    CountableString = ItemType__GetCountableString(type, 0);
    rgba = this->fields.addCountColor.fields.rgba;
    v23 = CountableString;
    v72.fields.r = (float)(unsigned __int8)rgba / 255.0;
    v72.fields.g = (float)BYTE1(rgba) / 255.0;
    v72.fields.b = (float)BYTE2(rgba) / 255.0;
    v72.fields.a = (float)HIBYTE(rgba) / 255.0;
    v24 = UnityEngine_ColorUtility__ToHtmlStringRGB(v72, 0);
    v25 = this->fields.counterLabel;
    v26 = v24;
    v10 = (UILabel_o *)sub_1C32CC8(object___TypeInfo, 5);
    if ( !v10 )
      goto LABEL_36;
    v29 = v10;
    if ( !v23 || (v10 = (UILabel_o *)sub_1C32D5C(v23, v10->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v29->fields.m_CancellationTokenSource) )
        goto LABEL_37;
      v29->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v23;
      sub_1C32BC4((CGThumbnailListItem_o *)&v29->fields.leftAnchor, (int32_t)v23, v27, v28);
      v71 = count;
      v10 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v30, v31, v32, v33, v34, v35);
      v38 = v10;
      if ( !v10 || (v10 = (UILabel_o *)sub_1C32D5C(v10, v29->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v29->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_37;
        v29->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v38;
        sub_1C32BC4((CGThumbnailListItem_o *)&v29->fields.rightAnchor, (int32_t)v38, v36, v37);
        if ( !v26 || (v10 = (UILabel_o *)sub_1C32D5C(v26, v29->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v29->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v29->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v26;
          sub_1C32BC4((CGThumbnailListItem_o *)&v29->fields.bottomAnchor, (int32_t)v26, v39, v40);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v10 = (UILabel_o *)sub_1C32D5C(addCountStr, v29->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v29->fields.m_CancellationTokenSource) <= 3 )
              goto LABEL_37;
            v29->fields.topAnchor = (struct UIRect_AnchorPoint_o *)addCountStr;
            sub_1C32BC4((CGThumbnailListItem_o *)&v29->fields.topAnchor, (int32_t)addCountStr, v41, v42);
            v70 = addCount;
            v10 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v44, v45, v46, v47, v48, v49);
            v52 = v10;
            if ( !v10 || (v10 = (UILabel_o *)sub_1C32D5C(v10, v29->klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v29->fields.m_CancellationTokenSource) > 4 )
              {
                *(_QWORD *)&v29->fields.updateAnchors = v52;
                sub_1C32BC4((CGThumbnailListItem_o *)&v29->fields.updateAnchors, (int32_t)v52, v50, v51);
                v10 = (UILabel_o *)System_String__Format_63559972(
                                     (System_String_o *)StringLiteral_25201/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/,
                                     (System_Object_array *)v29,
                                     0);
                if ( !v25 )
                  goto LABEL_36;
                v53 = (System_String_o *)v10;
                v54 = v25;
LABEL_34:
                UILabel__set_text(v54, v53, 0);
                return;
              }
LABEL_37:
              sub_1C32E84(v10);
            }
          }
        }
      }
    }
    v69 = sub_1C32EA0(v10);
    sub_1C32D48(v69, 0);
  }
  UILabel__set_spacingY(v10, 0, 0);
  v10 = (UILabel_o *)ItemType__GetCountableString(type, 0);
  v17 = this->fields.counterLabel;
  if ( count < 0 )
  {
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v17 )
      goto LABEL_36;
  }
  else
  {
    v18 = (Il2CppObject *)v10;
    v71 = count;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v11, v12, v13, v14, v15, v16);
    v10 = (UILabel_o *)System_String__Format_63559836((System_String_o *)StringLiteral_25200/*"{0}{1:#,0}"*/, v18, v19, 0);
    v20 = (System_String_o *)v10;
    if ( !v17 )
LABEL_36:
      sub_1C32E7C(v10);
  }
  UILabel__set_text(v17, v20, 0);
  if ( addCount >= 1 )
  {
    v55 = this->fields.counterLabel;
    if ( !v55 )
      goto LABEL_36;
    v56 = this->fields.nowAddCountColor.fields.rgba;
    mText = v55->fields.mText;
    v73.fields.r = (float)(unsigned __int8)v56 / 255.0;
    v73.fields.g = (float)BYTE1(v56) / 255.0;
    v73.fields.b = (float)BYTE2(v56) / 255.0;
    v73.fields.a = (float)HIBYTE(v56) / 255.0;
    v58 = UnityEngine_ColorUtility__ToHtmlStringRGB(v73, 0);
    v59 = (Il2CppObject *)this->fields.addCountStr;
    v60 = (Il2CppObject *)v58;
    v71 = addCount;
    v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v61, v62, v63, v64, v65, v66);
    v68 = System_String__Format_63559904((System_String_o *)StringLiteral_16015/*"[{0}]({1}{2:#,0})[-]"*/, v60, v59, v67, 0);
    v53 = System_String__Concat_63518544(mText, v68, 0);
    v54 = v55;
    goto LABEL_34;
  }
}