void __fastcall BattleItemIconComponent___ctor(BattleItemIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Color_o yellow; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E5978 & 1) == 0 )
  {
    sub_B5D5C4(&ItemIconComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_699/*"+"*/, v5, v6, v7);
    byte_42E5978 = 1;
  }
  yellow = UnityEngine_Color__get_yellow(0LL);
  this->fields.addCountColor.fields.rgba = UnityEngine_Color32__op_Implicit(yellow, 0LL).fields.rgba;
  this->fields.addCountStr = (struct System_String_o *)StringLiteral_699/*"+"*/;
  sub_B5D560(&this->fields.addCountStr);
  v9 = UnityEngine_Color__get_yellow(0LL);
  this->fields.nowAddCountColor.fields.rgba = UnityEngine_Color32__op_Implicit(v9, 0LL).fields.rgba;
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
  v11 = UnityEngine_Color32__op_Implicit_41570788(rgba, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_Object_o *counterLabel; // x23
  System_String_o *v28; // x1
  UILabel_o *v29; // x0
  UILabel_o *v30; // x22
  Il2CppObject *v31; // x23
  Il2CppObject *v32; // x0
  System_String_o *CountableString; // x25
  System_String_o *v34; // x0
  struct UILabel_o *v35; // x22
  Il2CppObject *v36; // x24
  System_Object_array *v37; // x23
  Il2CppObject *v38; // x21
  struct System_String_o *addCountStr; // x20
  Il2CppObject *v40; // x19
  System_String_o *v41; // x1
  UILabel_o *v42; // x0
  struct UILabel_o *v43; // x21
  System_String_o *mText; // x22
  System_String_o *v45; // x0
  Il2CppObject *v46; // x20
  Il2CppObject *v47; // x23
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  __int64 v50; // x0
  __int64 v51; // x0
  int32_t v52; // [xsp+8h] [xbp-38h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v55; // 0:x0.8
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E5977 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, type, count, *(_QWORD *)&addCount);
    sub_B5D5C4(&object___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_23962/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_16020/*"[{0}]({1}{2:#,0})[-]"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_23961/*"{0}{1:#,0}"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    byte_42E5977 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
    return;
  v29 = this->fields.counterLabel;
  if ( !v29 )
    goto LABEL_37;
  if ( count > 99 || addCount >= 100 )
  {
    UILabel__set_spacingY(v29, 2, 0LL);
    CountableString = ItemType__GetCountableString(type, 0LL);
    rgba = (UnityEngine_Color32_o)(unsigned int)this->fields.addCountColor.fields.rgba;
    v56 = UnityEngine_Color32__op_Implicit_41570788(rgba, 0LL);
    v34 = UnityEngine_ColorUtility__ToHtmlStringRGB(v56, 0LL);
    v35 = this->fields.counterLabel;
    v36 = (Il2CppObject *)v34;
    v29 = (UILabel_o *)sub_B5D5DC(object___TypeInfo, 5LL);
    if ( !v29 )
      goto LABEL_37;
    v37 = (System_Object_array *)v29;
    if ( !CountableString || (v29 = (UILabel_o *)sub_B5D684(CountableString, v29->klass->_1.element_class)) != 0LL )
    {
      if ( !v37->max_length )
        goto LABEL_38;
      v37->m_Items[0] = (Il2CppObject *)CountableString;
      sub_B5D560(v37->m_Items);
      v53 = count;
      v29 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
      v38 = (Il2CppObject *)v29;
      if ( !v29 || (v29 = (UILabel_o *)sub_B5D684(v29, v37->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v37->max_length <= 1 )
          goto LABEL_38;
        v37->m_Items[1] = v38;
        sub_B5D560(&v37->m_Items[1]);
        if ( !v36 || (v29 = (UILabel_o *)sub_B5D684(v36, v37->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v37->max_length <= 2 )
            goto LABEL_38;
          v37->m_Items[2] = v36;
          sub_B5D560(&v37->m_Items[2]);
          addCountStr = this->fields.addCountStr;
          if ( !addCountStr || (v29 = (UILabel_o *)sub_B5D684(addCountStr, v37->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v37->max_length <= 3 )
              goto LABEL_38;
            v37->m_Items[3] = (Il2CppObject *)addCountStr;
            sub_B5D560(&v37->m_Items[3]);
            v52 = addCount;
            v29 = (UILabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
            v40 = (Il2CppObject *)v29;
            if ( !v29 || (v29 = (UILabel_o *)sub_B5D684(v29, v37->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v37->max_length > 4 )
              {
                v37->m_Items[4] = v40;
                sub_B5D560(&v37->m_Items[4]);
                v29 = (UILabel_o *)System_String__Format_44656512((System_String_o *)StringLiteral_23962/*"{0}{1:#,0}\n[{2}]({3}{4:#,0})[-]"*/, v37, 0LL);
                if ( !v35 )
                  goto LABEL_37;
                v41 = (System_String_o *)v29;
                v42 = v35;
LABEL_35:
                UILabel__set_text(v42, v41, 0LL);
                return;
              }
LABEL_38:
              v50 = sub_B5D6C8(v29);
              sub_B5D668(v50, 0LL);
            }
          }
        }
      }
    }
    v51 = sub_B5D6BC();
    sub_B5D668(v51, 0LL);
  }
  UILabel__set_spacingY(v29, 0, 0LL);
  v29 = (UILabel_o *)ItemType__GetCountableString(type, 0LL);
  v30 = this->fields.counterLabel;
  if ( (count & 0x80000000) != 0 )
  {
    v28 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v30 )
      goto LABEL_37;
  }
  else
  {
    v31 = (Il2CppObject *)v29;
    v53 = count;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
    v29 = (UILabel_o *)System_String__Format_44573324((System_String_o *)StringLiteral_23961/*"{0}{1:#,0}"*/, v31, v32, 0LL);
    v28 = (System_String_o *)v29;
    if ( !v30 )
LABEL_37:
      sub_B5D69C(v29, v28);
  }
  UILabel__set_text(v30, v28, 0LL);
  if ( addCount >= 1 )
  {
    v43 = this->fields.counterLabel;
    if ( !v43 )
      goto LABEL_37;
    v55 = (UnityEngine_Color32_o)(unsigned int)this->fields.nowAddCountColor.fields.rgba;
    mText = v43->fields.mText;
    v57 = UnityEngine_Color32__op_Implicit_41570788(v55, 0LL);
    v45 = UnityEngine_ColorUtility__ToHtmlStringRGB(v57, 0LL);
    v46 = (Il2CppObject *)this->fields.addCountStr;
    v47 = (Il2CppObject *)v45;
    v53 = addCount;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
    v49 = System_String__Format_44578852((System_String_o *)StringLiteral_16020/*"[{0}]({1}{2:#,0})[-]"*/, v47, v46, v48, 0LL);
    v41 = System_String__Concat_44577788(mText, v49, 0LL);
    v42 = v43;
    goto LABEL_35;
  }
}