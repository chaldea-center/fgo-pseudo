void BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C29DBC & 1) == 0 )
  {
    sub_1C2D490(&ItemIconComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_803/*"+"*/);
    byte_4C29DBC = 1;
  }
  this->fields.addCountColor.fields.rgba = sub_24F1E3C(0, 1.0, 0.92157, 0.015686, 1.0);
  v3 = StringLiteral_803/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_803/*"+"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.addCountStr, v3, v4, v5);
  this->fields.nowAddCountColor.fields.rgba = sub_24F1E3C(0, 1.0, 0.92157, 0.015686, 1.0);
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
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
  v8.fields.r = r;
  v8.fields.g = g;
  v8.fields.b = b;
  v8.fields.a = a;
  ItemIconComponent__SetColor((ItemIconComponent_o *)this, v8, 0);
  this->fields.nowAddCountColor.fields.rgba = sub_24F1E3C(
                                                0,
                                                r
                                              * (float)((float)(unsigned __int8)this->fields.addCountColor.fields.rgba
                                                      / 255.0),
                                                g
                                              * (float)((float)(unsigned __int8)BYTE1(this->fields.addCountColor.fields.rgba)
                                                      / 255.0),
                                                b
                                              * (float)((float)(unsigned __int8)BYTE2(this->fields.addCountColor.fields.rgba)
                                                      / 255.0),
                                                a
                                              * (float)((float)HIBYTE(this->fields.addCountColor.fields.rgba) / 255.0));
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  UILabel_o *v15; // x22
  Il2CppObject *v16; // x23
  Il2CppObject *v17; // x0
  System_String_o *CountableString; // x0
  unsigned int rgba; // w8
  System_String_o *v20; // x25
  System_String_o *v21; // x0
  struct UILabel_o *v22; // x22
  System_String_o *v23; // x24
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  UILabel_o *v26; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  const MethodInfo *v30; // x3
  UILabel_o *v31; // x21
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  struct System_String_o *addCountStr; // x20
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  const MethodInfo *v38; // x3
  UILabel_o *v39; // x19
  System_String_o *v40; // x1
  UILabel_o *v41; // x0
  struct UILabel_o *v42; // x21
  unsigned int v43; // w8
  System_String_o *mText; // x22
  System_String_o *v45; // x0
  Il2CppObject *v46; // x20
  Il2CppObject *v47; // x23
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  __int64 v53; // x0
  int32_t v54; // [xsp+8h] [xbp-48h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C29DBB & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_25183/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/);
    sub_1C2D490(&StringLiteral_16014/*"[{0}]({1}{2:#,0})[-]"*/);
    sub_1C2D490(&StringLiteral_25182/*"{0}{1:#,0}"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C29DBB = 1;
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
    v20 = CountableString;
    v56.fields.r = (float)(unsigned __int8)rgba / 255.0;
    v56.fields.g = (float)BYTE1(rgba) / 255.0;
    v56.fields.b = (float)BYTE2(rgba) / 255.0;
    v56.fields.a = (float)HIBYTE(rgba) / 255.0;
    v21 = UnityEngine_ColorUtility__ToHtmlStringRGB(v56, 0);
    v22 = this->fields.counterLabel;
    v23 = v21;
    v11 = (UILabel_o *)sub_1C2D538(object___TypeInfo, 5);
    if ( !v11 )
      goto LABEL_36;
    v26 = v11;
    if ( !v20 || (v11 = (UILabel_o *)sub_1C2D5CC(v20, v11->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
        goto LABEL_37;
      v26->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v20;
      sub_1C2D434((CGThumbnailListItem_o *)&v26->fields.leftAnchor, (int32_t)v20, v24, v25);
      v55 = count;
      v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v27, v28, v29);
      v31 = v11;
      if ( !v11 || (v11 = (UILabel_o *)sub_1C2D5CC(v11, v26->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_37;
        v26->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v31;
        sub_1C2D434((CGThumbnailListItem_o *)&v26->fields.rightAnchor, (int32_t)v31, v24, v30);
        if ( !v23 || (v11 = (UILabel_o *)sub_1C2D5CC(v23, v26->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v26->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v23;
          sub_1C2D434((CGThumbnailListItem_o *)&v26->fields.bottomAnchor, (int32_t)v23, v24, v32);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v11 = (UILabel_o *)sub_1C2D5CC(addCountStr, v26->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 3 )
              goto LABEL_37;
            v26->fields.topAnchor = (struct UIRect_AnchorPoint_o *)addCountStr;
            sub_1C2D434((CGThumbnailListItem_o *)&v26->fields.topAnchor, (int32_t)addCountStr, v24, v33);
            v54 = addCount;
            v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v35, v36, v37);
            v39 = v11;
            if ( !v11 || (v11 = (UILabel_o *)sub_1C2D5CC(v11, v26->klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v26->fields.m_CancellationTokenSource) > 4 )
              {
                *(_QWORD *)&v26->fields.updateAnchors = v39;
                sub_1C2D434((CGThumbnailListItem_o *)&v26->fields.updateAnchors, (int32_t)v39, v24, v38);
                v11 = (UILabel_o *)System_String__Format_63499292(
                                     (System_String_o *)StringLiteral_25183/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/,
                                     (System_Object_array *)v26,
                                     0);
                if ( !v22 )
                  goto LABEL_36;
                v40 = (System_String_o *)v11;
                v41 = v22;
LABEL_34:
                UILabel__set_text(v41, v40, 0);
                return;
              }
LABEL_37:
              sub_1C2D6F4(v11, v10, v24);
            }
          }
        }
      }
    }
    v53 = sub_1C2D710(v11);
    sub_1C2D5B8(v53, 0);
  }
  UILabel__set_spacingY(v11, 0, 0);
  v11 = (UILabel_o *)ItemType__GetCountableString(type, 0);
  v15 = this->fields.counterLabel;
  if ( count < 0 )
  {
    v10 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v15 )
      goto LABEL_36;
  }
  else
  {
    v16 = (Il2CppObject *)v11;
    v55 = count;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v12, v13, v14);
    v11 = (UILabel_o *)System_String__Format_63499156((System_String_o *)StringLiteral_25182/*"{0}{1:#,0}"*/, v16, v17, 0);
    v10 = (System_String_o *)v11;
    if ( !v15 )
LABEL_36:
      sub_1C2D6EC(v11, v10);
  }
  UILabel__set_text(v15, v10, 0);
  if ( addCount >= 1 )
  {
    v42 = this->fields.counterLabel;
    if ( !v42 )
      goto LABEL_36;
    v43 = this->fields.nowAddCountColor.fields.rgba;
    mText = v42->fields.mText;
    v57.fields.r = (float)(unsigned __int8)v43 / 255.0;
    v57.fields.g = (float)BYTE1(v43) / 255.0;
    v57.fields.b = (float)BYTE2(v43) / 255.0;
    v57.fields.a = (float)HIBYTE(v43) / 255.0;
    v45 = UnityEngine_ColorUtility__ToHtmlStringRGB(v57, 0);
    v46 = (Il2CppObject *)this->fields.addCountStr;
    v47 = (Il2CppObject *)v45;
    v55 = addCount;
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v48, v49, v50);
    v52 = System_String__Format_63499224((System_String_o *)StringLiteral_16014/*"[{0}]({1}{2:#,0})[-]"*/, v47, v46, v51, 0);
    v40 = System_String__Concat_63457864(mText, v52, 0);
    v41 = v42;
    goto LABEL_34;
  }
}