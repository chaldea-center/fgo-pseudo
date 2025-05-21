void __fastcall BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B47381 & 1) == 0 )
  {
    sub_1BDB878(&ItemIconComponent_TypeInfo, method);
    sub_1BDB878(&StringLiteral_812/*"+"*/, v3);
    byte_4B47381 = 1;
  }
  this->fields.addCountColor.fields.rgba = sub_242CE98(0LL, 1.0, 0.92157, 0.015686, 1.0);
  v4 = StringLiteral_812/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_812/*"+"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.addCountStr, v4, v5, v6);
  this->fields.nowAddCountColor.fields.rgba = sub_242CE98(0LL, 1.0, 0.92157, 0.015686, 1.0);
  if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
  ItemIconComponent___ctor((ItemIconComponent_o *)this, 0LL);
}


void __fastcall BattleItemIconComponent__SetActiveDarkMode(
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
  ItemIconComponent__SetColor((ItemIconComponent_o *)this, v8, 0LL);
  this->fields.nowAddCountColor.fields.rgba = sub_242CE98(
                                                0LL,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleItemIconComponent__setCounterLabel(
        BattleItemIconComponent_o *this,
        int32_t type,
        int32_t count,
        int32_t addCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *counterLabel; // x23
  System_String_o *v16; // x1
  UILabel_o *v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UILabel_o *v21; // x22
  Il2CppObject *v22; // x23
  Il2CppObject *v23; // x0
  System_String_o *CountableString; // x0
  unsigned int rgba; // w8
  System_String_o *v26; // x25
  System_String_o *v27; // x0
  struct UILabel_o *v28; // x22
  System_String_o *v29; // x24
  __int64 v30; // x2
  const MethodInfo *v31; // x3
  UILabel_o *v32; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  const MethodInfo *v36; // x3
  UILabel_o *v37; // x21
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  struct System_String_o *addCountStr; // x20
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  const MethodInfo *v44; // x3
  UILabel_o *v45; // x19
  System_String_o *v46; // x1
  UILabel_o *v47; // x0
  struct UILabel_o *v48; // x21
  unsigned int v49; // w8
  System_String_o *mText; // x22
  System_String_o *v51; // x0
  Il2CppObject *v52; // x20
  Il2CppObject *v53; // x23
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  __int64 v59; // x0
  int32_t v60; // [xsp+8h] [xbp-48h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B47380 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&type);
    sub_1BDB878(&object___TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_25294/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/, v11);
    sub_1BDB878(&StringLiteral_15996/*"[{0}]({1}{2:#,0})[-]"*/, v12);
    sub_1BDB878(&StringLiteral_25293/*"{0}{1:#,0}"*/, v13);
    sub_1BDB878(&StringLiteral_1/*""*/, v14);
    byte_4B47380 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
    return;
  v17 = this->fields.counterLabel;
  if ( !v17 )
    goto LABEL_36;
  if ( count > 99 || addCount >= 100 )
  {
    UILabel__set_spacingY(v17, 2, 0LL);
    CountableString = ItemType__GetCountableString(type, 0LL);
    rgba = this->fields.addCountColor.fields.rgba;
    v26 = CountableString;
    v62.fields.r = (float)(unsigned __int8)rgba / 255.0;
    v62.fields.g = (float)BYTE1(rgba) / 255.0;
    v62.fields.b = (float)BYTE2(rgba) / 255.0;
    v62.fields.a = (float)HIBYTE(rgba) / 255.0;
    v27 = UnityEngine_ColorUtility__ToHtmlStringRGB(v62, 0LL);
    v28 = this->fields.counterLabel;
    v29 = v27;
    v17 = (UILabel_o *)sub_1BDB920(object___TypeInfo, 5LL);
    if ( !v17 )
      goto LABEL_36;
    v32 = v17;
    if ( !v26 || (v17 = (UILabel_o *)sub_1BDB9B4(v26, v17->klass->_1.element_class)) != 0LL )
    {
      if ( !LODWORD(v32->fields.m_CancellationTokenSource) )
        goto LABEL_37;
      v32->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v26;
      sub_1BDB81C((CGThumbnailListItem_o *)&v32->fields.leftAnchor, (int32_t)v26, v30, v31);
      v61 = count;
      v17 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v33, v34, v35);
      v37 = v17;
      if ( !v17 || (v17 = (UILabel_o *)sub_1BDB9B4(v17, v32->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_37;
        v32->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v37;
        sub_1BDB81C((CGThumbnailListItem_o *)&v32->fields.rightAnchor, (int32_t)v37, v30, v36);
        if ( !v29 || (v17 = (UILabel_o *)sub_1BDB9B4(v29, v32->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v32->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v29;
          sub_1BDB81C((CGThumbnailListItem_o *)&v32->fields.bottomAnchor, (int32_t)v29, v30, v38);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v17 = (UILabel_o *)sub_1BDB9B4(addCountStr, v32->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 3 )
              goto LABEL_37;
            v32->fields.topAnchor = (struct UIRect_AnchorPoint_o *)addCountStr;
            sub_1BDB81C((CGThumbnailListItem_o *)&v32->fields.topAnchor, (int32_t)addCountStr, v30, v39);
            v60 = addCount;
            v17 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v41, v42, v43);
            v45 = v17;
            if ( !v17 || (v17 = (UILabel_o *)sub_1BDB9B4(v17, v32->klass->_1.element_class)) != 0LL )
            {
              if ( LODWORD(v32->fields.m_CancellationTokenSource) > 4 )
              {
                *(_QWORD *)&v32->fields.updateAnchors = v45;
                sub_1BDB81C((CGThumbnailListItem_o *)&v32->fields.updateAnchors, (int32_t)v45, v30, v44);
                v17 = (UILabel_o *)System_String__Format_62613688(
                                     (System_String_o *)StringLiteral_25294/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/,
                                     (System_Object_array *)v32,
                                     0LL);
                if ( !v28 )
                  goto LABEL_36;
                v46 = (System_String_o *)v17;
                v47 = v28;
LABEL_34:
                UILabel__set_text(v47, v46, 0LL);
                return;
              }
LABEL_37:
              sub_1BDBADC(v17, v16, v30);
            }
          }
        }
      }
    }
    v59 = sub_1BDBAF8(v17);
    sub_1BDB9A0(v59, 0LL);
  }
  UILabel__set_spacingY(v17, 0, 0LL);
  v17 = (UILabel_o *)ItemType__GetCountableString(type, 0LL);
  v21 = this->fields.counterLabel;
  if ( (count & 0x80000000) != 0 )
  {
    v16 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v21 )
      goto LABEL_36;
  }
  else
  {
    v22 = (Il2CppObject *)v17;
    v61 = count;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v18, v19, v20);
    v17 = (UILabel_o *)System_String__Format_62613552((System_String_o *)StringLiteral_25293/*"{0}{1:#,0}"*/, v22, v23, 0LL);
    v16 = (System_String_o *)v17;
    if ( !v21 )
LABEL_36:
      sub_1BDBAD4(v17, v16);
  }
  UILabel__set_text(v21, v16, 0LL);
  if ( addCount >= 1 )
  {
    v48 = this->fields.counterLabel;
    if ( !v48 )
      goto LABEL_36;
    v49 = this->fields.nowAddCountColor.fields.rgba;
    mText = v48->fields.mText;
    v63.fields.r = (float)(unsigned __int8)v49 / 255.0;
    v63.fields.g = (float)BYTE1(v49) / 255.0;
    v63.fields.b = (float)BYTE2(v49) / 255.0;
    v63.fields.a = (float)HIBYTE(v49) / 255.0;
    v51 = UnityEngine_ColorUtility__ToHtmlStringRGB(v63, 0LL);
    v52 = (Il2CppObject *)this->fields.addCountStr;
    v53 = (Il2CppObject *)v51;
    v61 = addCount;
    v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v54, v55, v56);
    v58 = System_String__Format_62613620((System_String_o *)StringLiteral_15996/*"[{0}]({1}{2:#,0})[-]"*/, v53, v52, v57, 0LL);
    v46 = System_String__Concat_62572260(mText, v58, 0LL);
    v47 = v48;
    goto LABEL_34;
  }
}