void __fastcall BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Color_o yellow; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F734B & 1) == 0 )
  {
    sub_B16FFC(&ItemIconComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_690/*"+"*/, v3);
    byte_40F734B = 1;
  }
  yellow = UnityEngine_Color__get_yellow(0LL);
  this->fields.addCountColor.fields.rgba = UnityEngine_Color32__op_Implicit(yellow, 0LL).fields.rgba;
  v4 = StringLiteral_690/*"+"*/;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_690/*"+"*/;
  sub_B16F98(&this->fields.addCountStr, v4);
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
  v11 = UnityEngine_Color32__op_Implicit_40668984(rgba, 0LL);
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
  System_String_o *v17; // x0
  UILabel_o *v18; // x22
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x0
  System_String_o *v21; // x1
  System_String_o *CountableString; // x25
  System_String_o *v23; // x0
  struct UILabel_o *v24; // x22
  Il2CppObject *v25; // x24
  __int64 v26; // x2
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  System_Object_array *v30; // x23
  Il2CppObject *v31; // x21
  struct System_String_o *addCountStr; // x20
  Il2CppObject *v33; // x19
  System_String_o *v34; // x0
  System_String_o *v35; // x1
  UILabel_o *v36; // x0
  struct UILabel_o *v37; // x21
  System_String_o *mText; // x22
  System_String_o *v39; // x0
  Il2CppObject *v40; // x20
  Il2CppObject *v41; // x23
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  int32_t v44; // [xsp+8h] [xbp-38h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v47; // 0:x0.8
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F734A & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&object___TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_23556/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/, v11);
    sub_B16FFC(&StringLiteral_15766/*"[{0}]({1}{2:#,0})[-]"*/, v12);
    sub_B16FFC(&StringLiteral_23555/*"{0}{1:#,0}"*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    byte_40F734A = 1;
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
    v48 = UnityEngine_Color32__op_Implicit_40668984(rgba, 0LL);
    v23 = UnityEngine_ColorUtility__ToHtmlStringRGB(v48, 0LL);
    v24 = this->fields.counterLabel;
    v25 = (Il2CppObject *)v23;
    v27 = sub_B17014(object___TypeInfo, 5LL, v26);
    if ( !v27 )
      goto LABEL_37;
    v30 = (System_Object_array *)v27;
    if ( !CountableString || (v27 = sub_B170BC(CountableString, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0 )
    {
      if ( !v30->max_length )
        goto LABEL_38;
      v30->m_Items[0] = (Il2CppObject *)CountableString;
      sub_B16F98(v30->m_Items, CountableString);
      v45 = count;
      v27 = j_il2cpp_value_box_0(int_TypeInfo, &v45);
      v31 = (Il2CppObject *)v27;
      if ( !v27 || (v27 = sub_B170BC(v27, v30->obj.klass->_1.element_class)) != 0 )
      {
        if ( v30->max_length <= 1 )
          goto LABEL_38;
        v30->m_Items[1] = v31;
        sub_B16F98(&v30->m_Items[1], v31);
        if ( !v25 || (v27 = sub_B170BC(v25, v30->obj.klass->_1.element_class)) != 0 )
        {
          if ( v30->max_length <= 2 )
            goto LABEL_38;
          v30->m_Items[2] = v25;
          sub_B16F98(&v30->m_Items[2], v25);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v27 = sub_B170BC(addCountStr, v30->obj.klass->_1.element_class)) != 0 )
          {
            if ( v30->max_length <= 3 )
              goto LABEL_38;
            v30->m_Items[3] = (Il2CppObject *)addCountStr;
            sub_B16F98(&v30->m_Items[3], addCountStr);
            v44 = addCount;
            v27 = j_il2cpp_value_box_0(int_TypeInfo, &v44);
            v33 = (Il2CppObject *)v27;
            if ( !v27 || (v27 = sub_B170BC(v27, v30->obj.klass->_1.element_class)) != 0 )
            {
              if ( v30->max_length > 4 )
              {
                v30->m_Items[4] = v33;
                sub_B16F98(&v30->m_Items[4], v33);
                v34 = System_String__Format_43822456((System_String_o *)StringLiteral_23556/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/, v30, 0LL);
                if ( !v24 )
                  goto LABEL_37;
                v35 = v34;
                v36 = v24;
LABEL_35:
                UILabel__set_text(v36, v35, 0LL);
                return;
              }
LABEL_38:
              sub_B17100(v27, v28, v29);
              sub_B170A0();
            }
          }
        }
      }
    }
    sub_B170F4();
    sub_B170A0();
  }
  UILabel__set_spacingY(v16, 0, 0LL);
  v17 = ItemType__GetCountableString(type, 0LL);
  v18 = this->fields.counterLabel;
  if ( (count & 0x80000000) != 0 )
  {
    v21 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v18 )
      goto LABEL_37;
  }
  else
  {
    v19 = (Il2CppObject *)v17;
    v45 = count;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
    v21 = System_String__Format_43739268((System_String_o *)StringLiteral_23555/*"{0}{1:#,0}"*/, v19, v20, 0LL);
    if ( !v18 )
LABEL_37:
      sub_B170D4();
  }
  UILabel__set_text(v18, v21, 0LL);
  if ( addCount >= 1 )
  {
    v37 = this->fields.counterLabel;
    if ( !v37 )
      goto LABEL_37;
    v47 = (UnityEngine_Color32_o)(unsigned int)this->fields.nowAddCountColor.fields.rgba;
    mText = v37->fields.mText;
    v49 = UnityEngine_Color32__op_Implicit_40668984(v47, 0LL);
    v39 = UnityEngine_ColorUtility__ToHtmlStringRGB(v49, 0LL);
    v40 = (Il2CppObject *)this->fields.addCountStr;
    v41 = (Il2CppObject *)v39;
    v45 = addCount;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
    v43 = System_String__Format_43744796((System_String_o *)StringLiteral_15766/*"[{0}]({1}{2:#,0})[-]"*/, v41, v40, v42, 0LL);
    v35 = System_String__Concat_43743732(mText, v43, 0LL);
    v36 = v37;
    goto LABEL_35;
  }
}