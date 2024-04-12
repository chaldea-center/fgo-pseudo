void __fastcall BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Color_o yellow; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AD207 & 1) == 0 )
  {
    sub_B52984(&ItemIconComponent_TypeInfo);
    sub_B52984(&StringLiteral_701/*"+"*/);
    byte_42AD207 = 1;
  }
  yellow = UnityEngine_Color__get_yellow(0LL);
  this->fields.addCountColor.fields.rgba = UnityEngine_Color32__op_Implicit(yellow, 0LL).fields.rgba;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_701/*"+"*/;
  sub_B52920(&this->fields.addCountStr);
  v4 = UnityEngine_Color__get_yellow(0LL);
  this->fields.nowAddCountColor.fields.rgba = UnityEngine_Color32__op_Implicit(v4, 0LL).fields.rgba;
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
  v11 = UnityEngine_Color32__op_Implicit_41466640(rgba, 0LL);
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  v12 = UnityEngine_Color__op_Multiply(v11, v13, 0LL);
  this->fields.nowAddCountColor.fields.rgba = UnityEngine_Color32__op_Implicit(v12, 0LL).fields.rgba;
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
  UILabel_o *v12; // x22
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  System_String_o *CountableString; // x25
  System_String_o *v16; // x0
  struct UILabel_o *v17; // x22
  Il2CppObject *v18; // x24
  System_Object_array *v19; // x23
  Il2CppObject *v20; // x21
  struct System_String_o *addCountStr; // x20
  Il2CppObject *v22; // x19
  System_String_o *v23; // x1
  UILabel_o *v24; // x0
  struct UILabel_o *v25; // x21
  System_String_o *mText; // x22
  System_String_o *v27; // x0
  Il2CppObject *v28; // x20
  Il2CppObject *v29; // x23
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  int32_t v34; // [xsp+8h] [xbp-38h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v37; // 0:x0.8
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AD206 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_23844/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/);
    sub_B52984(&StringLiteral_15935/*"[{0}]({1}{2:#,0})[-]"*/);
    sub_B52984(&StringLiteral_23843/*"{0}{1:#,0}"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD206 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
    return;
  v11 = this->fields.counterLabel;
  if ( !v11 )
    goto LABEL_37;
  if ( count > 99 || addCount >= 100 )
  {
    UILabel__set_spacingY(v11, 2, 0LL);
    CountableString = ItemType__GetCountableString(type, 0LL);
    rgba = (UnityEngine_Color32_o)(unsigned int)this->fields.addCountColor.fields.rgba;
    v38 = UnityEngine_Color32__op_Implicit_41466640(rgba, 0LL);
    v16 = UnityEngine_ColorUtility__ToHtmlStringRGB(v38, 0LL);
    v17 = this->fields.counterLabel;
    v18 = (Il2CppObject *)v16;
    v11 = (UILabel_o *)sub_B5299C(object___TypeInfo, 5LL);
    if ( !v11 )
      goto LABEL_37;
    v19 = (System_Object_array *)v11;
    if ( !CountableString || (v11 = (UILabel_o *)sub_B52A44(CountableString, v11->klass->_1.element_class)) != 0LL )
    {
      if ( !v19->max_length )
        goto LABEL_38;
      v19->m_Items[0] = (Il2CppObject *)CountableString;
      sub_B52920(v19->m_Items);
      v35 = count;
      v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
      v20 = (Il2CppObject *)v11;
      if ( !v11 || (v11 = (UILabel_o *)sub_B52A44(v11, v19->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v19->max_length <= 1 )
          goto LABEL_38;
        v19->m_Items[1] = v20;
        sub_B52920(&v19->m_Items[1]);
        if ( !v18 || (v11 = (UILabel_o *)sub_B52A44(v18, v19->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v19->max_length <= 2 )
            goto LABEL_38;
          v19->m_Items[2] = v18;
          sub_B52920(&v19->m_Items[2]);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v11 = (UILabel_o *)sub_B52A44(addCountStr, v19->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v19->max_length <= 3 )
              goto LABEL_38;
            v19->m_Items[3] = (Il2CppObject *)addCountStr;
            sub_B52920(&v19->m_Items[3]);
            v34 = addCount;
            v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
            v22 = (Il2CppObject *)v11;
            if ( !v11 || (v11 = (UILabel_o *)sub_B52A44(v11, v19->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v19->max_length > 4 )
              {
                v19->m_Items[4] = v22;
                sub_B52920(&v19->m_Items[4]);
                v11 = (UILabel_o *)System_String__Format_44647040((System_String_o *)StringLiteral_23844/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/, v19, 0LL);
                if ( !v17 )
                  goto LABEL_37;
                v23 = (System_String_o *)v11;
                v24 = v17;
LABEL_35:
                UILabel__set_text(v24, v23, 0LL);
                return;
              }
LABEL_38:
              v32 = sub_B52A88(v11);
              sub_B52A28(v32, 0LL);
            }
          }
        }
      }
    }
    v33 = sub_B52A7C();
    sub_B52A28(v33, 0LL);
  }
  UILabel__set_spacingY(v11, 0, 0LL);
  v11 = (UILabel_o *)ItemType__GetCountableString(type, 0LL);
  v12 = this->fields.counterLabel;
  if ( (count & 0x80000000) != 0 )
  {
    v10 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v12 )
      goto LABEL_37;
  }
  else
  {
    v13 = (Il2CppObject *)v11;
    v35 = count;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
    v11 = (UILabel_o *)System_String__Format_44563852((System_String_o *)StringLiteral_23843/*"{0}{1:#,0}"*/, v13, v14, 0LL);
    v10 = (System_String_o *)v11;
    if ( !v12 )
LABEL_37:
      sub_B52A5C(v11, v10);
  }
  UILabel__set_text(v12, v10, 0LL);
  if ( addCount >= 1 )
  {
    v25 = this->fields.counterLabel;
    if ( !v25 )
      goto LABEL_37;
    v37 = (UnityEngine_Color32_o)(unsigned int)this->fields.nowAddCountColor.fields.rgba;
    mText = v25->fields.mText;
    v39 = UnityEngine_Color32__op_Implicit_41466640(v37, 0LL);
    v27 = UnityEngine_ColorUtility__ToHtmlStringRGB(v39, 0LL);
    v28 = (Il2CppObject *)this->fields.addCountStr;
    v29 = (Il2CppObject *)v27;
    v35 = addCount;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
    v31 = System_String__Format_44569380((System_String_o *)StringLiteral_15935/*"[{0}]({1}{2:#,0})[-]"*/, v29, v28, v30, 0LL);
    v23 = System_String__Concat_44568316(mText, v31, 0LL);
    v24 = v25;
    goto LABEL_35;
  }
}