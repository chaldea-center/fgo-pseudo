void __fastcall BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BCA1D5 & 1) == 0 )
  {
    sub_1C1ABD4(&ItemIconComponent_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_858/*"+"*/, v3);
    byte_4BCA1D5 = 1;
  }
  this->fields.addCountColor.fields.rgba = sub_23C12EC(0LL, 1.0, 0.92157, 0.015686, 1.0);
  v4 = StringLiteral_858/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_858/*"+"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.addCountStr, v4, v5, v6, v7, v8, v9, v10);
  this->fields.nowAddCountColor.fields.rgba = sub_23C12EC(0LL, 1.0, 0.92157, 0.015686, 1.0);
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
  this->fields.nowAddCountColor.fields.rgba = sub_23C12EC(
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
  int64_t v26; // x25
  System_String_o *v27; // x0
  struct UILabel_o *v28; // x22
  int64_t v29; // x24
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UILabel_o *v36; // x23
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x21
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_String_o *addCountStr; // x20
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x19
  System_String_o *v70; // x1
  UILabel_o *v71; // x0
  struct UILabel_o *v72; // x21
  unsigned int v73; // w8
  System_String_o *mText; // x22
  System_String_o *v75; // x0
  Il2CppObject *v76; // x20
  Il2CppObject *v77; // x23
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  __int64 v83; // x0
  int32_t v84; // [xsp+8h] [xbp-48h] BYREF
  int32_t v85; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BCA1D4 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&type);
    sub_1C1ABD4(&object___TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    sub_1C1ABD4(&StringLiteral_25529/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/, v11);
    sub_1C1ABD4(&StringLiteral_16290/*"[{0}]({1}{2:#,0})[-]"*/, v12);
    sub_1C1ABD4(&StringLiteral_25528/*"{0}{1:#,0}"*/, v13);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v14);
    byte_4BCA1D4 = 1;
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
    v26 = (int64_t)CountableString;
    v86.fields.r = (float)(unsigned __int8)rgba / 255.0;
    v86.fields.g = (float)BYTE1(rgba) / 255.0;
    v86.fields.b = (float)BYTE2(rgba) / 255.0;
    v86.fields.a = (float)HIBYTE(rgba) / 255.0;
    v27 = UnityEngine_ColorUtility__ToHtmlStringRGB(v86, 0LL);
    v28 = this->fields.counterLabel;
    v29 = (int64_t)v27;
    v17 = (UILabel_o *)sub_1C1AC7C(object___TypeInfo, 5LL);
    if ( !v17 )
      goto LABEL_36;
    v36 = v17;
    if ( !v26 || (v17 = (UILabel_o *)sub_1C1AD10(v26, v17->klass->_1.element_class)) != 0LL )
    {
      if ( !LODWORD(v36->fields.m_CancellationTokenSource) )
        goto LABEL_37;
      v36->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v26;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v36->fields.leftAnchor, v26, v30, v31, v32, v33, v34, v35);
      v85 = count;
      v17 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v37, v38, v39);
      v46 = (int64_t)v17;
      if ( !v17 || (v17 = (UILabel_o *)sub_1C1AD10(v17, v36->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v36->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_37;
        v36->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v46;
        sub_1C1AB78((PartyOrganizationUtility_o *)&v36->fields.rightAnchor, v46, v40, v41, v42, v43, v44, v45);
        if ( !v29 || (v17 = (UILabel_o *)sub_1C1AD10(v29, v36->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v36->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v36->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v29;
          sub_1C1AB78((PartyOrganizationUtility_o *)&v36->fields.bottomAnchor, v29, v47, v48, v49, v50, v51, v52);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v17 = (UILabel_o *)sub_1C1AD10(addCountStr, v36->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v36->fields.m_CancellationTokenSource) <= 3 )
              goto LABEL_37;
            v36->fields.topAnchor = (struct UIRect_AnchorPoint_o *)addCountStr;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&v36->fields.topAnchor,
              (int64_t)addCountStr,
              v53,
              v54,
              v55,
              v56,
              v57,
              v58);
            v84 = addCount;
            v17 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v60, v61, v62);
            v69 = (int64_t)v17;
            if ( !v17 || (v17 = (UILabel_o *)sub_1C1AD10(v17, v36->klass->_1.element_class)) != 0LL )
            {
              if ( LODWORD(v36->fields.m_CancellationTokenSource) > 4 )
              {
                *(_QWORD *)&v36->fields.updateAnchors = v69;
                sub_1C1AB78((PartyOrganizationUtility_o *)&v36->fields.updateAnchors, v69, v63, v64, v65, v66, v67, v68);
                v17 = (UILabel_o *)System_String__Format_63054876(
                                     (System_String_o *)StringLiteral_25529/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/,
                                     (System_Object_array *)v36,
                                     0LL);
                if ( !v28 )
                  goto LABEL_36;
                v70 = (System_String_o *)v17;
                v71 = v28;
LABEL_34:
                UILabel__set_text(v71, v70, 0LL);
                return;
              }
LABEL_37:
              sub_1C1AE38(v17, v16);
            }
          }
        }
      }
    }
    v83 = sub_1C1AE54(v17);
    sub_1C1ACFC(v83, 0LL);
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
    v85 = count;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v18, v19, v20);
    v17 = (UILabel_o *)System_String__Format_63054740((System_String_o *)StringLiteral_25528/*"{0}{1:#,0}"*/, v22, v23, 0LL);
    v16 = (System_String_o *)v17;
    if ( !v21 )
LABEL_36:
      sub_1C1AE30(v17, v16);
  }
  UILabel__set_text(v21, v16, 0LL);
  if ( addCount >= 1 )
  {
    v72 = this->fields.counterLabel;
    if ( !v72 )
      goto LABEL_36;
    v73 = this->fields.nowAddCountColor.fields.rgba;
    mText = v72->fields.mText;
    v87.fields.r = (float)(unsigned __int8)v73 / 255.0;
    v87.fields.g = (float)BYTE1(v73) / 255.0;
    v87.fields.b = (float)BYTE2(v73) / 255.0;
    v87.fields.a = (float)HIBYTE(v73) / 255.0;
    v75 = UnityEngine_ColorUtility__ToHtmlStringRGB(v87, 0LL);
    v76 = (Il2CppObject *)this->fields.addCountStr;
    v77 = (Il2CppObject *)v75;
    v85 = addCount;
    v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v78, v79, v80);
    v82 = System_String__Format_63054808((System_String_o *)StringLiteral_16290/*"[{0}]({1}{2:#,0})[-]"*/, v77, v76, v81, 0LL);
    v70 = System_String__Concat_63040368(mText, v82, 0LL);
    v71 = v72;
    goto LABEL_34;
  }
}