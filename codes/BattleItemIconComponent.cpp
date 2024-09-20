void __fastcall BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D782 & 1) == 0 )
  {
    sub_1B885B0(&ItemIconComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_860/*"+"*/);
    byte_4A5D782 = 1;
  }
  this->fields.addCountColor.fields.rgba = sub_22AABA0(0LL, 1.0, 0.92157, 0.015686, 1.0);
  v3 = StringLiteral_860/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_860/*"+"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.addCountStr, v3, v4, v5);
  this->fields.nowAddCountColor.fields.rgba = sub_22AABA0(0LL, 1.0, 0.92157, 0.015686, 1.0);
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
  this->fields.nowAddCountColor.fields.rgba = sub_22AABA0(
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


void __fastcall BattleItemIconComponent__setCounterLabel(
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
  int32_t v24; // w2
  int32_t v25; // w3
  UILabel_o *v26; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  UILabel_o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_String_o *addCountStr; // x20
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int32_t v41; // w2
  int32_t v42; // w3
  UILabel_o *v43; // x19
  System_String_o *v44; // x1
  UILabel_o *v45; // x0
  struct UILabel_o *v46; // x21
  unsigned int v47; // w8
  System_String_o *mText; // x22
  System_String_o *v49; // x0
  Il2CppObject *v50; // x20
  Il2CppObject *v51; // x23
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  __int64 v57; // x0
  int32_t v58; // [xsp+8h] [xbp-48h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5D781 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_25105/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/);
    sub_1B885B0(&StringLiteral_16026/*"[{0}]({1}{2:#,0})[-]"*/);
    sub_1B885B0(&StringLiteral_25104/*"{0}{1:#,0}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D781 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
    return;
  v11 = this->fields.counterLabel;
  if ( !v11 )
    goto LABEL_36;
  if ( count > 99 || addCount >= 100 )
  {
    UILabel__set_spacingY(v11, 2, 0LL);
    CountableString = ItemType__GetCountableString(type, 0LL);
    rgba = this->fields.addCountColor.fields.rgba;
    v20 = CountableString;
    v60.fields.r = (float)(unsigned __int8)rgba / 255.0;
    v60.fields.g = (float)BYTE1(rgba) / 255.0;
    v60.fields.b = (float)BYTE2(rgba) / 255.0;
    v60.fields.a = (float)HIBYTE(rgba) / 255.0;
    v21 = UnityEngine_ColorUtility__ToHtmlStringRGB(v60, 0LL);
    v22 = this->fields.counterLabel;
    v23 = v21;
    v11 = (UILabel_o *)sub_1B88658(object___TypeInfo, 5LL);
    if ( !v11 )
      goto LABEL_36;
    v26 = v11;
    if ( !v20 || (v11 = (UILabel_o *)sub_1B886EC(v20, v11->klass->_1.element_class)) != 0LL )
    {
      if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
        goto LABEL_37;
      v26->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v20;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.leftAnchor, (int32_t)v20, v24, v25);
      v59 = count;
      v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v27, v28, v29);
      v32 = v11;
      if ( !v11 || (v11 = (UILabel_o *)sub_1B886EC(v11, v26->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_37;
        v26->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v32;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.rightAnchor, (int32_t)v32, v30, v31);
        if ( !v23 || (v11 = (UILabel_o *)sub_1B886EC(v23, v26->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v26->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v23;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.bottomAnchor, (int32_t)v23, v33, v34);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v11 = (UILabel_o *)sub_1B886EC(addCountStr, v26->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 3 )
              goto LABEL_37;
            v26->fields.topAnchor = (struct UIRect_AnchorPoint_o *)addCountStr;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.topAnchor, (int32_t)addCountStr, v35, v36);
            v58 = addCount;
            v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v38, v39, v40);
            v43 = v11;
            if ( !v11 || (v11 = (UILabel_o *)sub_1B886EC(v11, v26->klass->_1.element_class)) != 0LL )
            {
              if ( LODWORD(v26->fields.m_CancellationTokenSource) > 4 )
              {
                *(_QWORD *)&v26->fields.updateAnchors = v43;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.updateAnchors, (int32_t)v43, v41, v42);
                v11 = (UILabel_o *)System_String__Format_61721540(
                                     (System_String_o *)StringLiteral_25105/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/,
                                     (System_Object_array *)v26,
                                     0LL);
                if ( !v22 )
                  goto LABEL_36;
                v44 = (System_String_o *)v11;
                v45 = v22;
LABEL_34:
                UILabel__set_text(v45, v44, 0LL);
                return;
              }
LABEL_37:
              sub_1B88814(v11, v10);
            }
          }
        }
      }
    }
    v57 = sub_1B88830(v11);
    sub_1B886D8(v57, 0LL);
  }
  UILabel__set_spacingY(v11, 0, 0LL);
  v11 = (UILabel_o *)ItemType__GetCountableString(type, 0LL);
  v15 = this->fields.counterLabel;
  if ( (count & 0x80000000) != 0 )
  {
    v10 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v15 )
      goto LABEL_36;
  }
  else
  {
    v16 = (Il2CppObject *)v11;
    v59 = count;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v12, v13, v14);
    v11 = (UILabel_o *)System_String__Format_61721404((System_String_o *)StringLiteral_25104/*"{0}{1:#,0}"*/, v16, v17, 0LL);
    v10 = (System_String_o *)v11;
    if ( !v15 )
LABEL_36:
      sub_1B8880C(v11, v10);
  }
  UILabel__set_text(v15, v10, 0LL);
  if ( addCount >= 1 )
  {
    v46 = this->fields.counterLabel;
    if ( !v46 )
      goto LABEL_36;
    v47 = this->fields.nowAddCountColor.fields.rgba;
    mText = v46->fields.mText;
    v61.fields.r = (float)(unsigned __int8)v47 / 255.0;
    v61.fields.g = (float)BYTE1(v47) / 255.0;
    v61.fields.b = (float)BYTE2(v47) / 255.0;
    v61.fields.a = (float)HIBYTE(v47) / 255.0;
    v49 = UnityEngine_ColorUtility__ToHtmlStringRGB(v61, 0LL);
    v50 = (Il2CppObject *)this->fields.addCountStr;
    v51 = (Il2CppObject *)v49;
    v59 = addCount;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v52, v53, v54);
    v56 = System_String__Format_61721472((System_String_o *)StringLiteral_16026/*"[{0}]({1}{2:#,0})[-]"*/, v51, v50, v55, 0LL);
    v44 = System_String__Concat_61707032(mText, v56, 0LL);
    v45 = v46;
    goto LABEL_34;
  }
}