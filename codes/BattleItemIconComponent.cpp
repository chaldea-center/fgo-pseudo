void __fastcall BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  int64_t v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDEC84 & 1) == 0 )
  {
    sub_1C21E38(&ItemIconComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_858/*"+"*/);
    byte_4BDEC84 = 1;
  }
  this->fields.addCountColor.fields.rgba = sub_23CB344(0LL, 1.0, 0.92157, 0.015686, 1.0);
  v3 = StringLiteral_858/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_858/*"+"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.addCountStr, v3, v4, v5, v6, v7, v8, v9);
  this->fields.nowAddCountColor.fields.rgba = sub_23CB344(0LL, 1.0, 0.92157, 0.015686, 1.0);
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
  this->fields.nowAddCountColor.fields.rgba = sub_23CB344(
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
  int64_t v20; // x25
  System_String_o *v21; // x0
  struct UILabel_o *v22; // x22
  int64_t v23; // x24
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UILabel_o *v30; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_String_o *addCountStr; // x20
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x19
  System_String_o *v64; // x1
  UILabel_o *v65; // x0
  struct UILabel_o *v66; // x21
  unsigned int v67; // w8
  System_String_o *mText; // x22
  System_String_o *v69; // x0
  Il2CppObject *v70; // x20
  Il2CppObject *v71; // x23
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  Il2CppObject *v75; // x0
  System_String_o *v76; // x0
  __int64 v77; // x0
  int32_t v78; // [xsp+8h] [xbp-48h] BYREF
  int32_t v79; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDEC83 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_25551/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/);
    sub_1C21E38(&StringLiteral_16301/*"[{0}]({1}{2:#,0})[-]"*/);
    sub_1C21E38(&StringLiteral_25550/*"{0}{1:#,0}"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDEC83 = 1;
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
    v20 = (int64_t)CountableString;
    v80.fields.r = (float)(unsigned __int8)rgba / 255.0;
    v80.fields.g = (float)BYTE1(rgba) / 255.0;
    v80.fields.b = (float)BYTE2(rgba) / 255.0;
    v80.fields.a = (float)HIBYTE(rgba) / 255.0;
    v21 = UnityEngine_ColorUtility__ToHtmlStringRGB(v80, 0LL);
    v22 = this->fields.counterLabel;
    v23 = (int64_t)v21;
    v11 = (UILabel_o *)sub_1C21EE0(object___TypeInfo, 5LL);
    if ( !v11 )
      goto LABEL_36;
    v30 = v11;
    if ( !v20 || (v11 = (UILabel_o *)sub_1C21F74(v20, v11->klass->_1.element_class)) != 0LL )
    {
      if ( !LODWORD(v30->fields.m_CancellationTokenSource) )
        goto LABEL_37;
      v30->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v20;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v30->fields.leftAnchor, v20, v24, v25, v26, v27, v28, v29);
      v79 = count;
      v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v79, v31, v32, v33);
      v40 = (int64_t)v11;
      if ( !v11 || (v11 = (UILabel_o *)sub_1C21F74(v11, v30->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_37;
        v30->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v40;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v30->fields.rightAnchor, v40, v34, v35, v36, v37, v38, v39);
        if ( !v23 || (v11 = (UILabel_o *)sub_1C21F74(v23, v30->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v30->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v23;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v30->fields.bottomAnchor, v23, v41, v42, v43, v44, v45, v46);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v11 = (UILabel_o *)sub_1C21F74(addCountStr, v30->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 3 )
              goto LABEL_37;
            v30->fields.topAnchor = (struct UIRect_AnchorPoint_o *)addCountStr;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v30->fields.topAnchor,
              (int64_t)addCountStr,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52);
            v78 = addCount;
            v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v78, v54, v55, v56);
            v63 = (int64_t)v11;
            if ( !v11 || (v11 = (UILabel_o *)sub_1C21F74(v11, v30->klass->_1.element_class)) != 0LL )
            {
              if ( LODWORD(v30->fields.m_CancellationTokenSource) > 4 )
              {
                *(_QWORD *)&v30->fields.updateAnchors = v63;
                sub_1C21DDC((PartyOrganizationUtility_o *)&v30->fields.updateAnchors, v63, v57, v58, v59, v60, v61, v62);
                v11 = (UILabel_o *)System_String__Format_63129984(
                                     (System_String_o *)StringLiteral_25551/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/,
                                     (System_Object_array *)v30,
                                     0LL);
                if ( !v22 )
                  goto LABEL_36;
                v64 = (System_String_o *)v11;
                v65 = v22;
LABEL_34:
                UILabel__set_text(v65, v64, 0LL);
                return;
              }
LABEL_37:
              sub_1C2209C(v11, v10);
            }
          }
        }
      }
    }
    v77 = sub_1C220B8(v11);
    sub_1C21F60(v77, 0LL);
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
    v79 = count;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79, v12, v13, v14);
    v11 = (UILabel_o *)System_String__Format_63129848((System_String_o *)StringLiteral_25550/*"{0}{1:#,0}"*/, v16, v17, 0LL);
    v10 = (System_String_o *)v11;
    if ( !v15 )
LABEL_36:
      sub_1C22094(v11, v10);
  }
  UILabel__set_text(v15, v10, 0LL);
  if ( addCount >= 1 )
  {
    v66 = this->fields.counterLabel;
    if ( !v66 )
      goto LABEL_36;
    v67 = this->fields.nowAddCountColor.fields.rgba;
    mText = v66->fields.mText;
    v81.fields.r = (float)(unsigned __int8)v67 / 255.0;
    v81.fields.g = (float)BYTE1(v67) / 255.0;
    v81.fields.b = (float)BYTE2(v67) / 255.0;
    v81.fields.a = (float)HIBYTE(v67) / 255.0;
    v69 = UnityEngine_ColorUtility__ToHtmlStringRGB(v81, 0LL);
    v70 = (Il2CppObject *)this->fields.addCountStr;
    v71 = (Il2CppObject *)v69;
    v79 = addCount;
    v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79, v72, v73, v74);
    v76 = System_String__Format_63129916((System_String_o *)StringLiteral_16301/*"[{0}]({1}{2:#,0})[-]"*/, v71, v70, v75, 0LL);
    v64 = System_String__Concat_63115476(mText, v76, 0LL);
    v65 = v66;
    goto LABEL_34;
  }
}