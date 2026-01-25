void BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3
  long double v4; // q8
  long double v5; // q9
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  long double v14; // q0
  long double v15; // q3

  if ( (byte_4CF11CF & 1) == 0 )
  {
    sub_1C7BAE8(&ItemIconComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_801/*"+"*/);
    byte_4CF11CF = 1;
  }
  LODWORD(v4) = 1064037356;
  LODWORD(v5) = 1015054465;
  LODWORD(v2) = 1.0;
  LODWORD(v3) = 1.0;
  this->fields.addCountColor.fields.rgba = sub_2597300(0, v2, v4, v5, v3);
  v7 = StringLiteral_801/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_801/*"+"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.addCountStr, v7, v8, v9, v10, v11, v12, v13);
  LODWORD(v14) = 1.0;
  LODWORD(v15) = 1.0;
  this->fields.nowAddCountColor.fields.rgba = sub_2597300(0, v14, v4, v5, v15);
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
  this->fields.nowAddCountColor.fields.rgba = sub_2597300(0, v9, v10, v11, v12);
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
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UILabel_o *v27; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  UILabel_o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct System_String_o *addCountStr; // x20
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  UILabel_o *v54; // x19
  System_String_o *v55; // x1
  UILabel_o *v56; // x0
  struct UILabel_o *v57; // x21
  unsigned int v58; // w8
  System_String_o *mText; // x22
  System_String_o *v60; // x0
  Il2CppObject *v61; // x20
  Il2CppObject *v62; // x23
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  __int64 v65; // x0
  int32_t v66; // [xsp+8h] [xbp-48h] BYREF
  int32_t v67; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CF11CE & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25462/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/);
    sub_1C7BAE8(&StringLiteral_16073/*"[{0}]({1}{2:#,0})[-]"*/);
    sub_1C7BAE8(&StringLiteral_25461/*"{0}{1:#,0}"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF11CE = 1;
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
    v68.fields.r = (float)(unsigned __int8)rgba / 255.0;
    v68.fields.g = (float)BYTE1(rgba) / 255.0;
    v68.fields.b = (float)BYTE2(rgba) / 255.0;
    v68.fields.a = (float)HIBYTE(rgba) / 255.0;
    v18 = UnityEngine_ColorUtility__ToHtmlStringRGB(v68, 0);
    v19 = this->fields.counterLabel;
    v20 = v18;
    v11 = (UILabel_o *)sub_1C7BB90(object___TypeInfo, 5);
    if ( !v11 )
      goto LABEL_36;
    v27 = v11;
    if ( !v17 || (v11 = (UILabel_o *)sub_1C7BC24(v17, v11->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v27->fields.m_CancellationTokenSource) )
        goto LABEL_37;
      v27->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v17;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v27->fields.leftAnchor, (int32_t)v17, v21, v22, v23, v24, v25, v26);
      v67 = count;
      v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
      v34 = v11;
      if ( !v11 || (v11 = (UILabel_o *)sub_1C7BC24(v11, v27->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v27->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_37;
        v27->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v34;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v27->fields.rightAnchor, (int32_t)v34, v28, v29, v30, v31, v32, v33);
        if ( !v20 || (v11 = (UILabel_o *)sub_1C7BC24(v20, v27->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v27->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v27->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v20;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v27->fields.bottomAnchor,
            (int32_t)v20,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v11 = (UILabel_o *)sub_1C7BC24(addCountStr, v27->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v27->fields.m_CancellationTokenSource) <= 3 )
              goto LABEL_37;
            v27->fields.topAnchor = (struct UIRect_AnchorPoint_o *)addCountStr;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&v27->fields.topAnchor,
              (int32_t)addCountStr,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            v66 = addCount;
            v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
            v54 = v11;
            if ( !v11 || (v11 = (UILabel_o *)sub_1C7BC24(v11, v27->klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v27->fields.m_CancellationTokenSource) > 4 )
              {
                *(_QWORD *)&v27->fields.updateAnchors = v54;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)&v27->fields.updateAnchors,
                  (int32_t)v54,
                  v48,
                  v49,
                  v50,
                  v51,
                  v52,
                  v53);
                v11 = (UILabel_o *)System_String__Format_64218356(
                                     (System_String_o *)StringLiteral_25462/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/,
                                     (System_Object_array *)v27,
                                     0);
                if ( !v19 )
                  goto LABEL_36;
                v55 = (System_String_o *)v11;
                v56 = v19;
LABEL_34:
                UILabel__set_text(v56, v55, 0);
                return;
              }
LABEL_37:
              sub_1C7BD48(v11);
            }
          }
        }
      }
    }
    v65 = sub_1C7BD64(v11);
    sub_1C7BC10(v65, 0);
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
    v67 = count;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
    v11 = (UILabel_o *)System_String__Format_64218220((System_String_o *)StringLiteral_25461/*"{0}{1:#,0}"*/, v13, v14, 0);
    v10 = (System_String_o *)v11;
    if ( !v12 )
LABEL_36:
      sub_1C7BD40(v11, v10);
  }
  UILabel__set_text(v12, v10, 0);
  if ( addCount >= 1 )
  {
    v57 = this->fields.counterLabel;
    if ( !v57 )
      goto LABEL_36;
    v58 = this->fields.nowAddCountColor.fields.rgba;
    mText = v57->fields.mText;
    v69.fields.r = (float)(unsigned __int8)v58 / 255.0;
    v69.fields.g = (float)BYTE1(v58) / 255.0;
    v69.fields.b = (float)BYTE2(v58) / 255.0;
    v69.fields.a = (float)HIBYTE(v58) / 255.0;
    v60 = UnityEngine_ColorUtility__ToHtmlStringRGB(v69, 0);
    v61 = (Il2CppObject *)this->fields.addCountStr;
    v62 = (Il2CppObject *)v60;
    v67 = addCount;
    v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
    v64 = System_String__Format_64218288((System_String_o *)StringLiteral_16073/*"[{0}]({1}{2:#,0})[-]"*/, v62, v61, v63, 0);
    v55 = System_String__Concat_64176912(mText, v64, 0);
    v56 = v57;
    goto LABEL_34;
  }
}