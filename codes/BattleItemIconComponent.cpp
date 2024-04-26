void __fastcall BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Color_o yellow; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434EB3D & 1) == 0 )
  {
    sub_B70694(&ItemIconComponent_TypeInfo);
    sub_B70694(&StringLiteral_704/*"+"*/);
    byte_434EB3D = 1;
  }
  yellow = UnityEngine_Color__get_yellow(0LL);
  this->fields.addCountColor.fields.rgba = UnityEngine_Color32__op_Implicit(yellow, 0LL).fields.rgba;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_704/*"+"*/;
  sub_B70630(&this->fields.addCountStr);
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
  v11 = UnityEngine_Color32__op_Implicit_41067916(rgba, 0LL);
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
  __int64 v12; // x2
  UILabel_o *v13; // x22
  Il2CppObject *v14; // x23
  Il2CppObject *v15; // x0
  System_String_o *CountableString; // x25
  System_String_o *v17; // x0
  struct UILabel_o *v18; // x22
  Il2CppObject *v19; // x24
  System_Object_array *v20; // x23
  __int64 v21; // x2
  Il2CppObject *v22; // x21
  struct System_String_o *addCountStr; // x20
  __int64 v24; // x2
  Il2CppObject *v25; // x19
  System_String_o *v26; // x1
  UILabel_o *v27; // x0
  struct UILabel_o *v28; // x21
  System_String_o *mText; // x22
  System_String_o *v30; // x0
  Il2CppObject *v31; // x20
  Il2CppObject *v32; // x23
  __int64 v33; // x2
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  __int64 v36; // x0
  __int64 v37; // x0
  int32_t v38; // [xsp+8h] [xbp-38h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v41; // 0:x0.8
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434EB3C & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_24034/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/);
    sub_B70694(&StringLiteral_16051/*"[{0}]({1}{2:#,0})[-]"*/);
    sub_B70694(&StringLiteral_24033/*"{0}{1:#,0}"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434EB3C = 1;
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
    v42 = UnityEngine_Color32__op_Implicit_41067916(rgba, 0LL);
    v17 = UnityEngine_ColorUtility__ToHtmlStringRGB(v42, 0LL);
    v18 = this->fields.counterLabel;
    v19 = (Il2CppObject *)v17;
    v11 = (UILabel_o *)sub_B706AC(object___TypeInfo, 5LL);
    if ( !v11 )
      goto LABEL_37;
    v20 = (System_Object_array *)v11;
    if ( !CountableString || (v11 = (UILabel_o *)sub_B70754(CountableString, v11->klass->_1.element_class)) != 0LL )
    {
      if ( !v20->max_length )
        goto LABEL_38;
      v20->m_Items[0] = (Il2CppObject *)CountableString;
      sub_B70630(v20->m_Items);
      v39 = count;
      v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v21);
      v22 = (Il2CppObject *)v11;
      if ( !v11 || (v11 = (UILabel_o *)sub_B70754(v11, v20->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v20->max_length <= 1 )
          goto LABEL_38;
        v20->m_Items[1] = v22;
        sub_B70630(&v20->m_Items[1]);
        if ( !v19 || (v11 = (UILabel_o *)sub_B70754(v19, v20->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v20->max_length <= 2 )
            goto LABEL_38;
          v20->m_Items[2] = v19;
          sub_B70630(&v20->m_Items[2]);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v11 = (UILabel_o *)sub_B70754(addCountStr, v20->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v20->max_length <= 3 )
              goto LABEL_38;
            v20->m_Items[3] = (Il2CppObject *)addCountStr;
            sub_B70630(&v20->m_Items[3]);
            v38 = addCount;
            v11 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v24);
            v25 = (Il2CppObject *)v11;
            if ( !v11 || (v11 = (UILabel_o *)sub_B70754(v11, v20->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v20->max_length > 4 )
              {
                v20->m_Items[4] = v25;
                sub_B70630(&v20->m_Items[4]);
                v11 = (UILabel_o *)System_String__Format_44836892((System_String_o *)StringLiteral_24034/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/, v20, 0LL);
                if ( !v18 )
                  goto LABEL_37;
                v26 = (System_String_o *)v11;
                v27 = v18;
LABEL_35:
                UILabel__set_text(v27, v26, 0LL);
                return;
              }
LABEL_38:
              v36 = sub_B70798(v11);
              sub_B70738(v36, 0LL);
            }
          }
        }
      }
    }
    v37 = sub_B7078C();
    sub_B70738(v37, 0LL);
  }
  UILabel__set_spacingY(v11, 0, 0LL);
  v11 = (UILabel_o *)ItemType__GetCountableString(type, 0LL);
  v13 = this->fields.counterLabel;
  if ( (count & 0x80000000) != 0 )
  {
    v10 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v13 )
      goto LABEL_37;
  }
  else
  {
    v14 = (Il2CppObject *)v11;
    v39 = count;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v12);
    v11 = (UILabel_o *)System_String__Format_44753704((System_String_o *)StringLiteral_24033/*"{0}{1:#,0}"*/, v14, v15, 0LL);
    v10 = (System_String_o *)v11;
    if ( !v13 )
LABEL_37:
      sub_B7076C(v11, v10);
  }
  UILabel__set_text(v13, v10, 0LL);
  if ( addCount >= 1 )
  {
    v28 = this->fields.counterLabel;
    if ( !v28 )
      goto LABEL_37;
    v41 = (UnityEngine_Color32_o)(unsigned int)this->fields.nowAddCountColor.fields.rgba;
    mText = v28->fields.mText;
    v43 = UnityEngine_Color32__op_Implicit_41067916(v41, 0LL);
    v30 = UnityEngine_ColorUtility__ToHtmlStringRGB(v43, 0LL);
    v31 = (Il2CppObject *)this->fields.addCountStr;
    v32 = (Il2CppObject *)v30;
    v39 = addCount;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v33);
    v35 = System_String__Format_44759232((System_String_o *)StringLiteral_16051/*"[{0}]({1}{2:#,0})[-]"*/, v32, v31, v34, 0LL);
    v26 = System_String__Concat_44758168(mText, v35, 0LL);
    v27 = v28;
    goto LABEL_35;
  }
}