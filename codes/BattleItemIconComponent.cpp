void __fastcall BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Color_o yellow; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4211822 & 1) == 0 )
  {
    sub_B0D8A4(&ItemIconComponent_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_697/*"+"*/, v3);
    byte_4211822 = 1;
  }
  yellow = UnityEngine_Color__get_yellow(0LL);
  this->fields.addCountColor.fields.rgba = UnityEngine_Color32__op_Implicit(yellow, 0LL).fields.rgba;
  v4 = StringLiteral_697/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_697/*"+"*/;
  sub_B0D840(&this->fields.addCountStr, v4);
  v6 = UnityEngine_Color__get_yellow(0LL);
  this->fields.nowAddCountColor.fields.rgba = UnityEngine_Color32__op_Implicit(v6, 0LL).fields.rgba;
  if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
  }
  ItemIconComponent___ctor((ItemIconComponent_o *)this, 0LL);
}


void __fastcall BattleItemIconComponent__SetActiveDarkMode(
        BattleItemIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( isActive )
  {
    r = this->fields.darkModeColor.fields.r;
    g = this->fields.darkModeColor.fields.g;
    b = this->fields.darkModeColor.fields.b;
    a = this->fields.darkModeColor.fields.a;
  }
  else
  {
    white = UnityEngine_Color__get_white(0LL);
    r = white.fields.r;
    g = white.fields.g;
    b = white.fields.b;
    a = white.fields.a;
  }
  v10.fields.r = r;
  v10.fields.g = g;
  v10.fields.b = b;
  v10.fields.a = a;
  ItemIconComponent__SetColor((ItemIconComponent_o *)this, v10, 0LL);
  rgba = (UnityEngine_Color32_o)(unsigned int)this->fields.addCountColor.fields.rgba;
  v11 = UnityEngine_Color32__op_Implicit_40760496(rgba, 0LL);
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  v12 = UnityEngine_Color__op_Multiply(v11, v13, 0LL);
  this->fields.nowAddCountColor.fields.rgba = UnityEngine_Color32__op_Implicit(v12, 0LL).fields.rgba;
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
  System_String_o *CountableString; // x25
  System_String_o *v22; // x0
  struct UILabel_o *v23; // x22
  Il2CppObject *v24; // x24
  System_Object_array *v25; // x23
  Il2CppObject *v26; // x21
  struct System_String_o *addCountStr; // x20
  Il2CppObject *v28; // x19
  System_String_o *v29; // x1
  UILabel_o *v30; // x0
  struct UILabel_o *v31; // x21
  System_String_o *mText; // x22
  System_String_o *v33; // x0
  Il2CppObject *v34; // x20
  Il2CppObject *v35; // x23
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  __int64 v38; // x0
  __int64 v39; // x0
  int32_t v40; // [xsp+8h] [xbp-38h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v43; // 0:x0.8
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4211821 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&object___TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_23728/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/, v11);
    sub_B0D8A4(&StringLiteral_15876/*"[{0}]({1}{2:#,0})[-]"*/, v12);
    sub_B0D8A4(&StringLiteral_23727/*"{0}{1:#,0}"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_4211821 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
    return;
  v16 = this->fields.counterLabel;
  if ( !v16 )
    goto LABEL_37;
  if ( count > 99 || addCount >= 100 )
  {
    UILabel__set_spacingY(v16, 2, 0LL);
    CountableString = ItemType__GetCountableString(type, 0LL);
    rgba = (UnityEngine_Color32_o)(unsigned int)this->fields.addCountColor.fields.rgba;
    v44 = UnityEngine_Color32__op_Implicit_40760496(rgba, 0LL);
    v22 = UnityEngine_ColorUtility__ToHtmlStringRGB(v44, 0LL);
    v23 = this->fields.counterLabel;
    v24 = (Il2CppObject *)v22;
    v16 = (UILabel_o *)sub_B0D8BC(object___TypeInfo, 5LL);
    if ( !v16 )
      goto LABEL_37;
    v25 = (System_Object_array *)v16;
    if ( !CountableString || (v16 = (UILabel_o *)sub_B0D964(CountableString, v16->klass->_1.element_class)) != 0LL )
    {
      if ( !v25->max_length )
        goto LABEL_38;
      v25->m_Items[0] = (Il2CppObject *)CountableString;
      sub_B0D840(v25->m_Items, CountableString);
      v41 = count;
      v16 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      v26 = (Il2CppObject *)v16;
      if ( !v16 || (v16 = (UILabel_o *)sub_B0D964(v16, v25->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v25->max_length <= 1 )
          goto LABEL_38;
        v25->m_Items[1] = v26;
        sub_B0D840(&v25->m_Items[1], v26);
        if ( !v24 || (v16 = (UILabel_o *)sub_B0D964(v24, v25->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v25->max_length <= 2 )
            goto LABEL_38;
          v25->m_Items[2] = v24;
          sub_B0D840(&v25->m_Items[2], v24);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v16 = (UILabel_o *)sub_B0D964(addCountStr, v25->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v25->max_length <= 3 )
              goto LABEL_38;
            v25->m_Items[3] = (Il2CppObject *)addCountStr;
            sub_B0D840(&v25->m_Items[3], addCountStr);
            v40 = addCount;
            v16 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
            v28 = (Il2CppObject *)v16;
            if ( !v16 || (v16 = (UILabel_o *)sub_B0D964(v16, v25->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v25->max_length > 4 )
              {
                v25->m_Items[4] = v28;
                sub_B0D840(&v25->m_Items[4], v28);
                v16 = (UILabel_o *)System_String__Format_43928628((System_String_o *)StringLiteral_23728/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/, v25, 0LL);
                if ( !v23 )
                  goto LABEL_37;
                v29 = (System_String_o *)v16;
                v30 = v23;
LABEL_35:
                UILabel__set_text(v30, v29, 0LL);
                return;
              }
LABEL_38:
              v38 = sub_B0D9A8(v16);
              sub_B0D948(v38, 0LL);
            }
          }
        }
      }
    }
    v39 = sub_B0D99C();
    sub_B0D948(v39, 0LL);
  }
  UILabel__set_spacingY(v16, 0, 0LL);
  v16 = (UILabel_o *)ItemType__GetCountableString(type, 0LL);
  v17 = this->fields.counterLabel;
  if ( (count & 0x80000000) != 0 )
  {
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v17 )
      goto LABEL_37;
  }
  else
  {
    v18 = (Il2CppObject *)v16;
    v41 = count;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    v16 = (UILabel_o *)System_String__Format_43845440((System_String_o *)StringLiteral_23727/*"{0}{1:#,0}"*/, v18, v19, 0LL);
    v20 = (System_String_o *)v16;
    if ( !v17 )
LABEL_37:
      sub_B0D97C(v16);
  }
  UILabel__set_text(v17, v20, 0LL);
  if ( addCount >= 1 )
  {
    v31 = this->fields.counterLabel;
    if ( !v31 )
      goto LABEL_37;
    v43 = (UnityEngine_Color32_o)(unsigned int)this->fields.nowAddCountColor.fields.rgba;
    mText = v31->fields.mText;
    v45 = UnityEngine_Color32__op_Implicit_40760496(v43, 0LL);
    v33 = UnityEngine_ColorUtility__ToHtmlStringRGB(v45, 0LL);
    v34 = (Il2CppObject *)this->fields.addCountStr;
    v35 = (Il2CppObject *)v33;
    v41 = addCount;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    v37 = System_String__Format_43850968((System_String_o *)StringLiteral_15876/*"[{0}]({1}{2:#,0})[-]"*/, v35, v34, v36, 0LL);
    v29 = System_String__Concat_43849904(mText, v37, 0LL);
    v30 = v31;
    goto LABEL_35;
  }
}