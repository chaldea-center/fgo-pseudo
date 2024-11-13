void __fastcall BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1

  if ( (byte_4B18869 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemIconComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v4, v5);
    byte_4B18869 = 1;
  }
  this->fields.addCountColor.fields.rgba = sub_2354D50(0LL, 1.0, 0.92157, 0.015686, 1.0);
  v6 = StringLiteral_855/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_855/*"+"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.addCountStr, v6, v7, v8, v9, v10, v11, v12);
  this->fields.nowAddCountColor.fields.rgba = sub_2354D50(0LL, 1.0, 0.92157, 0.015686, 1.0);
  if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo, v13);
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
  this->fields.nowAddCountColor.fields.rgba = sub_2354D50(
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *counterLabel; // x23
  System_String_o *v22; // x1
  UILabel_o *v23; // x0
  UILabel_o *v24; // x22
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x0
  System_String_o *CountableString; // x0
  unsigned int rgba; // w8
  int64_t v29; // x25
  System_String_o *v30; // x0
  struct UILabel_o *v31; // x22
  int64_t v32; // x24
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  UILabel_o *v39; // x23
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
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x19
  System_String_o *v67; // x1
  UILabel_o *v68; // x0
  struct UILabel_o *v69; // x21
  unsigned int v70; // w8
  System_String_o *mText; // x22
  System_String_o *v72; // x0
  Il2CppObject *v73; // x20
  Il2CppObject *v74; // x23
  Il2CppObject *v75; // x0
  System_String_o *v76; // x0
  __int64 v77; // x0
  int32_t v78; // [xsp+8h] [xbp-48h] BYREF
  int32_t v79; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18868 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&count);
    sub_1BCA7E0(&object___TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_25360/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_16193/*"[{0}]({1}{2:#,0})[-]"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_25359/*"{0}{1:#,0}"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B18868 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
  if ( !UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
    return;
  v23 = this->fields.counterLabel;
  if ( !v23 )
    goto LABEL_36;
  if ( count > 99 || addCount >= 100 )
  {
    UILabel__set_spacingY(v23, 2, 0LL);
    CountableString = ItemType__GetCountableString(type, 0LL);
    rgba = this->fields.addCountColor.fields.rgba;
    v29 = (int64_t)CountableString;
    v80.fields.r = (float)(unsigned __int8)rgba / 255.0;
    v80.fields.g = (float)BYTE1(rgba) / 255.0;
    v80.fields.b = (float)BYTE2(rgba) / 255.0;
    v80.fields.a = (float)HIBYTE(rgba) / 255.0;
    v30 = UnityEngine_ColorUtility__ToHtmlStringRGB(v80, 0LL);
    v31 = this->fields.counterLabel;
    v32 = (int64_t)v30;
    v23 = (UILabel_o *)sub_1BCA888(object___TypeInfo, 5LL);
    if ( !v23 )
      goto LABEL_36;
    v39 = v23;
    if ( !v29 || (v23 = (UILabel_o *)sub_1BCA91C(v29, v23->klass->_1.element_class)) != 0LL )
    {
      if ( !LODWORD(v39->fields.m_CancellationTokenSource) )
        goto LABEL_37;
      v39->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)v29;
      sub_1BCA784((PartyOrganizationUtility_o *)&v39->fields.leftAnchor, v29, v33, v34, v35, v36, v37, v38);
      v79 = count;
      v23 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
      v46 = (int64_t)v23;
      if ( !v23 || (v23 = (UILabel_o *)sub_1BCA91C(v23, v39->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_37;
        v39->fields.rightAnchor = (struct UIRect_AnchorPoint_o *)v46;
        sub_1BCA784((PartyOrganizationUtility_o *)&v39->fields.rightAnchor, v46, v40, v41, v42, v43, v44, v45);
        if ( !v32 || (v23 = (UILabel_o *)sub_1BCA91C(v32, v39->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 2 )
            goto LABEL_37;
          v39->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)v32;
          sub_1BCA784((PartyOrganizationUtility_o *)&v39->fields.bottomAnchor, v32, v47, v48, v49, v50, v51, v52);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v23 = (UILabel_o *)sub_1BCA91C(addCountStr, v39->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 3 )
              goto LABEL_37;
            v39->fields.topAnchor = (struct UIRect_AnchorPoint_o *)addCountStr;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v39->fields.topAnchor,
              (int64_t)addCountStr,
              v53,
              v54,
              v55,
              v56,
              v57,
              v58);
            v78 = addCount;
            v23 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
            v66 = (int64_t)v23;
            if ( !v23 || (v23 = (UILabel_o *)sub_1BCA91C(v23, v39->klass->_1.element_class)) != 0LL )
            {
              if ( LODWORD(v39->fields.m_CancellationTokenSource) > 4 )
              {
                *(_QWORD *)&v39->fields.updateAnchors = v66;
                sub_1BCA784((PartyOrganizationUtility_o *)&v39->fields.updateAnchors, v66, v60, v61, v62, v63, v64, v65);
                v23 = (UILabel_o *)System_String__Format_62415728(
                                     (System_String_o *)StringLiteral_25360/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/,
                                     (System_Object_array *)v39,
                                     0LL);
                if ( !v31 )
                  goto LABEL_36;
                v67 = (System_String_o *)v23;
                v68 = v31;
LABEL_34:
                UILabel__set_text(v68, v67, 0LL);
                return;
              }
LABEL_37:
              sub_1BCAA44(v23, v22);
            }
          }
        }
      }
    }
    v77 = sub_1BCAA60(v23);
    sub_1BCA908(v77, 0LL);
  }
  UILabel__set_spacingY(v23, 0, 0LL);
  v23 = (UILabel_o *)ItemType__GetCountableString(type, 0LL);
  v24 = this->fields.counterLabel;
  if ( (count & 0x80000000) != 0 )
  {
    v22 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v24 )
      goto LABEL_36;
  }
  else
  {
    v25 = (Il2CppObject *)v23;
    v79 = count;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
    v23 = (UILabel_o *)System_String__Format_62415592((System_String_o *)StringLiteral_25359/*"{0}{1:#,0}"*/, v25, v26, 0LL);
    v22 = (System_String_o *)v23;
    if ( !v24 )
LABEL_36:
      sub_1BCAA3C(v23, v22);
  }
  UILabel__set_text(v24, v22, 0LL);
  if ( addCount >= 1 )
  {
    v69 = this->fields.counterLabel;
    if ( !v69 )
      goto LABEL_36;
    v70 = this->fields.nowAddCountColor.fields.rgba;
    mText = v69->fields.mText;
    v81.fields.r = (float)(unsigned __int8)v70 / 255.0;
    v81.fields.g = (float)BYTE1(v70) / 255.0;
    v81.fields.b = (float)BYTE2(v70) / 255.0;
    v81.fields.a = (float)HIBYTE(v70) / 255.0;
    v72 = UnityEngine_ColorUtility__ToHtmlStringRGB(v81, 0LL);
    v73 = (Il2CppObject *)this->fields.addCountStr;
    v74 = (Il2CppObject *)v72;
    v79 = addCount;
    v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
    v76 = System_String__Format_62415660((System_String_o *)StringLiteral_16193/*"[{0}]({1}{2:#,0})[-]"*/, v74, v73, v75, 0LL);
    v67 = System_String__Concat_62401220(mText, v76, 0LL);
    v68 = v69;
    goto LABEL_34;
  }
}