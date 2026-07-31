void BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w0
  int32_t v4; // w1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  int32_t v12; // w8
  ItemIconComponent_c *v13; // x0

  if ( (byte_593B354 & 1) == 0 )
  {
    sub_21FFC50(&ItemIconComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_861/*"+"*/);
    byte_593B354 = 1;
  }
  v3 = sub_2BB41EC(0, 1.0, 0.92157, 0.015686, 1.0);
  v4 = StringLiteral_861/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_861/*"+"*/;
  this->fields.addCountColor.fields.rgba = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.addCountStr, v4, v5, v6, v7, v8, v9, v10);
  v12 = sub_2BB41EC(0, 1.0, 0.92157, 0.015686, 1.0);
  v13 = ItemIconComponent_TypeInfo;
  this->fields.nowAddCountColor.fields.rgba = v12;
  if ( !*(&v13->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v13, v11);
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
  this->fields.nowAddCountColor.fields.rgba = sub_2BB41EC(
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


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v18; // x24
  struct UILabel_o *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UILabel_o *v26; // x23
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  UILabel_o *v34; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_String_o *addCountStr; // x20
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  UILabel_o *v54; // x19
  System_String_o *v55; // x1
  UILabel_o *v56; // x0
  struct UILabel_o *v57; // x21
  unsigned int v58; // w8
  System_String_o *mText; // x22
  Il2CppObject *v60; // x23
  Il2CppObject *v61; // x20
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  __int64 v64; // x0
  int32_t v65; // [xsp+8h] [xbp-48h] BYREF
  int32_t v66; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593B353 & 1) == 0 )
  {
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_26554/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/);
    sub_21FFC50(&StringLiteral_16617/*"[{0}]({1}{2:#,0})[-]"*/);
    sub_21FFC50(&StringLiteral_26553/*"{0}{1:#,0}"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B353 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
  if ( !UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
    return;
  v11 = this->fields.counterLabel;
  if ( count > 99 || addCount >= 100 )
  {
    if ( !v11 )
      goto LABEL_37;
    UILabel__set_spacingY(v11, 2, 0);
    CountableString = ItemType__GetCountableString(type, 0);
    rgba = this->fields.addCountColor.fields.rgba;
    v17 = CountableString;
    v67.fields.r = (float)(unsigned __int8)rgba / 255.0;
    v67.fields.g = (float)BYTE1(rgba) / 255.0;
    v67.fields.b = (float)BYTE2(rgba) / 255.0;
    v67.fields.a = (float)HIBYTE(rgba) / 255.0;
    v18 = UnityEngine_ColorUtility__ToHtmlStringRGB(v67, 0);
    v19 = this->fields.counterLabel;
    v11 = (UILabel_o *)sub_21FFD10(object___TypeInfo, 5);
    if ( !v11 )
LABEL_37:
      sub_21FFECC(v11, v10);
    v26 = v11;
    if ( !v17 || (v11 = (UILabel_o *)sub_21FFDA4(v17, v11->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v26->fields.m_CancellationTokenSource) )
        goto LABEL_38;
      v26->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v17;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v26->fields.leftAnchor,
        (int32_t)v17,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v66 = count;
      v11 = (UILabel_o *)j_il2cpp_value_box_0(qword_594C070, &v66);
      v34 = v11;
      if ( !v11 || (v11 = (UILabel_o *)sub_21FFDA4(v11, v26->klass->_1.element_class)) != 0 )
      {
        if ( ((__int64)v26->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
          goto LABEL_38;
        v26->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v34;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v26->fields.rightAnchor,
          (int32_t)v34,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        if ( !v18 || (v11 = (UILabel_o *)sub_21FFDA4(v18, v26->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_38;
          v26->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v18;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v26->fields.bottomAnchor,
            (int32_t)v18,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v11 = (UILabel_o *)sub_21FFDA4(addCountStr, v26->klass->_1.element_class)) != 0 )
          {
            if ( ((__int64)v26->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
              goto LABEL_38;
            v26->fields.topAnchor = (struct UIRect_AnchorPoint_o *)addCountStr;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v26->fields.topAnchor,
              (int32_t)addCountStr,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            v65 = addCount;
            v11 = (UILabel_o *)j_il2cpp_value_box_0(qword_594C070, &v65);
            v54 = v11;
            if ( !v11 || (v11 = (UILabel_o *)sub_21FFDA4(v11, v26->klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v26->fields.m_CancellationTokenSource) > 4 )
              {
                *(_QWORD *)&v26->fields.updateAnchors = v54;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&v26->fields.updateAnchors,
                  (int32_t)v54,
                  v48,
                  v49,
                  v50,
                  v51,
                  v52,
                  v53);
                v11 = (UILabel_o *)System_String__Format_75484712(
                                     (System_String_o *)StringLiteral_26554/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/,
                                     (System_Object_array *)v26,
                                     0);
                if ( !v19 )
                  goto LABEL_37;
                v55 = (System_String_o *)v11;
                v56 = v19;
LABEL_35:
                UILabel__set_text(v56, v55, 0);
                return;
              }
LABEL_38:
              sub_21FFED4(v11);
            }
          }
        }
      }
    }
    v64 = sub_21FFEF0(v11, v27);
    sub_21FFD90(v64, 0);
  }
  if ( !v11 )
    goto LABEL_37;
  UILabel__set_spacingY(v11, 0, 0);
  v11 = (UILabel_o *)ItemType__GetCountableString(type, 0);
  v12 = this->fields.counterLabel;
  if ( count < 0 )
  {
    v10 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v12 )
      goto LABEL_37;
  }
  else
  {
    v13 = (Il2CppObject *)v11;
    v66 = count;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v66);
    v11 = (UILabel_o *)System_String__Format_75484576((System_String_o *)StringLiteral_26553/*"{0}{1:#,0}"*/, v13, v14, 0);
    v10 = (System_String_o *)v11;
    if ( !v12 )
      goto LABEL_37;
  }
  UILabel__set_text(v12, v10, 0);
  if ( addCount >= 1 )
  {
    v57 = this->fields.counterLabel;
    if ( !v57 )
      goto LABEL_37;
    v58 = this->fields.nowAddCountColor.fields.rgba;
    mText = v57->fields.mText;
    v68.fields.r = (float)(unsigned __int8)v58 / 255.0;
    v68.fields.g = (float)BYTE1(v58) / 255.0;
    v68.fields.b = (float)BYTE2(v58) / 255.0;
    v68.fields.a = (float)HIBYTE(v58) / 255.0;
    v60 = (Il2CppObject *)UnityEngine_ColorUtility__ToHtmlStringRGB(v68, 0);
    v61 = (Il2CppObject *)this->fields.addCountStr;
    v66 = addCount;
    v62 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v66);
    v63 = System_String__Format_75484644((System_String_o *)StringLiteral_16617/*"[{0}]({1}{2:#,0})[-]"*/, v60, v61, v62, 0);
    v55 = System_String__Concat_75438412(mText, v63, 0);
    v56 = v57;
    goto LABEL_35;
  }
}