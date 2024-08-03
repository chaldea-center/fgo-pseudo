void __fastcall BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w1
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FE9DA & 1) == 0 )
  {
    sub_1B640C8(&ItemIconComponent_TypeInfo, method);
    sub_1B640C8(&StringLiteral_861/*"+"*/, v3);
    byte_49FE9DA = 1;
  }
  this->fields.addCountColor.fields.rgba = sub_226182C(0LL, 1.0, 0.92157, 0.015686, 1.0);
  v4 = StringLiteral_861/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_861/*"+"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.addCountStr, v4, v5, v6);
  this->fields.nowAddCountColor.fields.rgba = sub_226182C(0LL, 1.0, 0.92157, 0.015686, 1.0);
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
  this->fields.nowAddCountColor.fields.rgba = sub_226182C(
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
  UILabel_o *v16; // x0
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
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  UILabel_o *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  UILabel_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_String_o *addCountStr; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  UILabel_o *v41; // x19
  System_String_o *v42; // x1
  UILabel_o *v43; // x0
  struct UILabel_o *v44; // x21
  unsigned int v45; // w8
  System_String_o *mText; // x22
  System_String_o *v47; // x0
  Il2CppObject *v48; // x20
  Il2CppObject *v49; // x23
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  __int64 v52; // x0
  int32_t v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FE9D9 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&object___TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_25004/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/, v11);
    sub_1B640C8(&StringLiteral_15958/*"[{0}]({1}{2:#,0})[-]"*/, v12);
    sub_1B640C8(&StringLiteral_25003/*"{0}{1:#,0}"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_49FE9D9 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
    return;
  v16 = this->fields.counterLabel;
  if ( !v16 )
    goto LABEL_36;
  if ( count > 99 || addCount >= 100 )
  {
    UILabel__set_spacingY(v16, 2, 0LL);
    CountableString = ItemType__GetCountableString(type, 0LL);
    rgba = this->fields.addCountColor.fields.rgba;
    v23 = CountableString;
    v55.fields.r = (float)(unsigned __int8)rgba / 255.0;
    v55.fields.g = (float)BYTE1(rgba) / 255.0;
    v55.fields.b = (float)BYTE2(rgba) / 255.0;
    v55.fields.a = (float)HIBYTE(rgba) / 255.0;
    v24 = UnityEngine_ColorUtility__ToHtmlStringRGB(v55, 0LL);
    v25 = this->fields.counterLabel;
    v26 = v24;
    v16 = (UILabel_o *)sub_1B64170(object___TypeInfo, 5LL);
    if ( !v16 )
      goto LABEL_36;
    v30 = v16;
    if ( !v23 || (v16 = (UILabel_o *)sub_1B64204(v23, v16->klass->_1.element_class)) != 0LL )
    {
      if ( !LODWORD(v30->fields.m_CancellationTokenSource) )
        goto LABEL_37;
      v30->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v23;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->fields.leftAnchor, (int32_t)v23, v28, v29);
      v54 = count;
      v16 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
      v33 = v16;
      if ( !v16 || (v16 = (UILabel_o *)sub_1B64204(v16, v30->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_37;
        v30->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v33;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->fields.rightAnchor, (int32_t)v33, v31, v32);
        if ( !v26 || (v16 = (UILabel_o *)sub_1B64204(v26, v30->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v30->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v26;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->fields.bottomAnchor, (int32_t)v26, v34, v35);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v16 = (UILabel_o *)sub_1B64204(addCountStr, v30->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 3 )
              goto LABEL_37;
            v30->fields.topAnchor = (struct UIRect_AnchorPoint_o *)addCountStr;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->fields.topAnchor, (int32_t)addCountStr, v36, v37);
            v53 = addCount;
            v16 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
            v41 = v16;
            if ( !v16 || (v16 = (UILabel_o *)sub_1B64204(v16, v30->klass->_1.element_class)) != 0LL )
            {
              if ( LODWORD(v30->fields.m_CancellationTokenSource) > 4 )
              {
                *(_QWORD *)&v30->fields.updateAnchors = v41;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->fields.updateAnchors, (int32_t)v41, v39, v40);
                v16 = (UILabel_o *)System_String__Format_61389904(
                                     (System_String_o *)StringLiteral_25004/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/,
                                     (System_Object_array *)v30,
                                     0LL);
                if ( !v25 )
                  goto LABEL_36;
                v42 = (System_String_o *)v16;
                v43 = v25;
LABEL_34:
                UILabel__set_text(v43, v42, 0LL);
                return;
              }
LABEL_37:
              sub_1B6432C(v16, v27);
            }
          }
        }
      }
    }
    v52 = sub_1B64348(v16);
    sub_1B641F0(v52, 0LL);
  }
  UILabel__set_spacingY(v16, 0, 0LL);
  v16 = (UILabel_o *)ItemType__GetCountableString(type, 0LL);
  v17 = this->fields.counterLabel;
  if ( (count & 0x80000000) != 0 )
  {
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v17 )
      goto LABEL_36;
  }
  else
  {
    v18 = (Il2CppObject *)v16;
    v54 = count;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
    v16 = (UILabel_o *)System_String__Format_61389768((System_String_o *)StringLiteral_25003/*"{0}{1:#,0}"*/, v18, v19, 0LL);
    v20 = (System_String_o *)v16;
    if ( !v17 )
LABEL_36:
      sub_1B64324(v16);
  }
  UILabel__set_text(v17, v20, 0LL);
  if ( addCount >= 1 )
  {
    v44 = this->fields.counterLabel;
    if ( !v44 )
      goto LABEL_36;
    v45 = this->fields.nowAddCountColor.fields.rgba;
    mText = v44->fields.mText;
    v56.fields.r = (float)(unsigned __int8)v45 / 255.0;
    v56.fields.g = (float)BYTE1(v45) / 255.0;
    v56.fields.b = (float)BYTE2(v45) / 255.0;
    v56.fields.a = (float)HIBYTE(v45) / 255.0;
    v47 = UnityEngine_ColorUtility__ToHtmlStringRGB(v56, 0LL);
    v48 = (Il2CppObject *)this->fields.addCountStr;
    v49 = (Il2CppObject *)v47;
    v54 = addCount;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
    v51 = System_String__Format_61389836((System_String_o *)StringLiteral_15958/*"[{0}]({1}{2:#,0})[-]"*/, v49, v48, v50, 0LL);
    v42 = System_String__Concat_61375396(mText, v51, 0LL);
    v43 = v44;
    goto LABEL_34;
  }
}