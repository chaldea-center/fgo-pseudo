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

  if ( (byte_4CB8E69 & 1) == 0 )
  {
    sub_1C6BA08(&ItemIconComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_800/*"+"*/);
    byte_4CB8E69 = 1;
  }
  LODWORD(v4) = 1064037356;
  LODWORD(v5) = 1015054465;
  LODWORD(v2) = 1.0;
  LODWORD(v3) = 1.0;
  this->fields.addCountColor.fields.rgba = sub_255DA24(0, v2, v4, v5, v3);
  v7 = StringLiteral_800/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_800/*"+"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.addCountStr, v7, v8, v9);
  LODWORD(v10) = 1.0;
  LODWORD(v11) = 1.0;
  this->fields.nowAddCountColor.fields.rgba = sub_255DA24(0, v10, v4, v5, v11);
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
  this->fields.nowAddCountColor.fields.rgba = sub_255DA24(0, v9, v10, v11, v12);
}


void BattleItemIconComponent__setCounterLabel(
        BattleItemIconComponent_o *this,
        int32_t type,
        int32_t count,
        int32_t addCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *counterLabel; // x23
  System_String_o *v10; // x1
  UILabel_o *v11; // x0
  UILabel_o *v12; // x22
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  System_String_o *CountableString; // x0
  unsigned int rgba; // w8
  System_String_o *v17; // x25
  System_String_o *v18; // x0
  struct UILabel_o *v19; // x22
  System_String_o *v20; // x24
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UILabel_o *v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UILabel_o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_String_o *addCountStr; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UILabel_o *v34; // x19
  System_String_o *v35; // x1
  UILabel_o *v36; // x0
  struct UILabel_o *v37; // x21
  unsigned int v38; // w8
  System_String_o *mText; // x22
  System_String_o *v40; // x0
  Il2CppObject *v41; // x20
  Il2CppObject *v42; // x23
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  __int64 v45; // x0
  int32_t v46; // [xsp+8h] [xbp-48h] BYREF
  int32_t v47; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB8E68 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_25316/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/);
    sub_1C6BA08(&StringLiteral_16010/*"[{0}]({1}{2:#,0})[-]"*/);
    sub_1C6BA08(&StringLiteral_25315/*"{0}{1:#,0}"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB8E68 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
    return;
  v11 = this->fields.counterLabel;
  if ( !v11 )
    goto LABEL_36;
  if ( count > 99 || addCount >= 100 )
  {
    UILabel__set_spacingY(v11, 2, 0);
    CountableString = ItemType__GetCountableString(type, 0);
    rgba = this->fields.addCountColor.fields.rgba;
    v17 = CountableString;
    v48.fields.r = (float)(unsigned __int8)rgba / 255.0;
    v48.fields.g = (float)BYTE1(rgba) / 255.0;
    v48.fields.b = (float)BYTE2(rgba) / 255.0;
    v48.fields.a = (float)HIBYTE(rgba) / 255.0;
    v18 = UnityEngine_ColorUtility__ToHtmlStringRGB(v48, 0);
    v19 = this->fields.counterLabel;
    v20 = v18;
    v11 = (UILabel_o *)sub_1C6BAB0(object___TypeInfo, 5);
    if ( !v11 )
      goto LABEL_36;
    v23 = v11;
    if ( !v17 || (v11 = (UILabel_o *)sub_1C6BB44(v17, v11->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v23->fields.m_CancellationTokenSource) )
        goto LABEL_37;
      v23->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v17;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v23->fields.leftAnchor, (int32_t)v17, v21, v22);
      v47 = count;
      v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
      v26 = v11;
      if ( !v11 || (v11 = (UILabel_o *)sub_1C6BB44(v11, v23->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v23->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_37;
        v23->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v26;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v23->fields.rightAnchor, (int32_t)v26, v24, v25);
        if ( !v20 || (v11 = (UILabel_o *)sub_1C6BB44(v20, v23->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v23->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v23->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v20;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v23->fields.bottomAnchor, (int32_t)v20, v27, v28);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v11 = (UILabel_o *)sub_1C6BB44(addCountStr, v23->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v23->fields.m_CancellationTokenSource) <= 3 )
              goto LABEL_37;
            v23->fields.topAnchor = (struct UIRect_AnchorPoint_o *)addCountStr;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v23->fields.topAnchor, (int32_t)addCountStr, v29, v30);
            v46 = addCount;
            v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
            v34 = v11;
            if ( !v11 || (v11 = (UILabel_o *)sub_1C6BB44(v11, v23->klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v23->fields.m_CancellationTokenSource) > 4 )
              {
                *(_QWORD *)&v23->fields.updateAnchors = v34;
                sub_1C6B9AC((CGThumbnailListItem_o *)&v23->fields.updateAnchors, (int32_t)v34, v32, v33);
                v11 = (UILabel_o *)System_String__Format_64008236(
                                     (System_String_o *)StringLiteral_25316/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/,
                                     (System_Object_array *)v23,
                                     0);
                if ( !v19 )
                  goto LABEL_36;
                v35 = (System_String_o *)v11;
                v36 = v19;
LABEL_34:
                UILabel__set_text(v36, v35, 0);
                return;
              }
LABEL_37:
              sub_1C6BC68(v11);
            }
          }
        }
      }
    }
    v45 = sub_1C6BC84(v11);
    sub_1C6BB30(v45, 0);
  }
  UILabel__set_spacingY(v11, 0, 0);
  v11 = (UILabel_o *)ItemType__GetCountableString(type, 0);
  v12 = this->fields.counterLabel;
  if ( count < 0 )
  {
    v10 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v12 )
      goto LABEL_36;
  }
  else
  {
    v13 = (Il2CppObject *)v11;
    v47 = count;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
    v11 = (UILabel_o *)System_String__Format_64008100((System_String_o *)StringLiteral_25315/*"{0}{1:#,0}"*/, v13, v14, 0);
    v10 = (System_String_o *)v11;
    if ( !v12 )
LABEL_36:
      sub_1C6BC60(v11, v10);
  }
  UILabel__set_text(v12, v10, 0);
  if ( addCount >= 1 )
  {
    v37 = this->fields.counterLabel;
    if ( !v37 )
      goto LABEL_36;
    v38 = this->fields.nowAddCountColor.fields.rgba;
    mText = v37->fields.mText;
    v49.fields.r = (float)(unsigned __int8)v38 / 255.0;
    v49.fields.g = (float)BYTE1(v38) / 255.0;
    v49.fields.b = (float)BYTE2(v38) / 255.0;
    v49.fields.a = (float)HIBYTE(v38) / 255.0;
    v40 = UnityEngine_ColorUtility__ToHtmlStringRGB(v49, 0);
    v41 = (Il2CppObject *)this->fields.addCountStr;
    v42 = (Il2CppObject *)v40;
    v47 = addCount;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
    v44 = System_String__Format_64008168((System_String_o *)StringLiteral_16010/*"[{0}]({1}{2:#,0})[-]"*/, v42, v41, v43, 0);
    v35 = System_String__Concat_63966792(mText, v44, 0);
    v36 = v37;
    goto LABEL_34;
  }
}