void __fastcall UIForwardEvents___ctor(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIForwardEvents__OnClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_421EBC8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_9967/*"OnClick"*/, v3);
    byte_421EBC8 = 1;
  }
  if ( this->fields.onClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        sub_B0D97C(0LL);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_9967/*"OnClick"*/, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_421EBC9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10011/*"OnDoubleClick"*/, v3);
    byte_421EBC9 = 1;
  }
  if ( this->fields.onDoubleClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        sub_B0D97C(0LL);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10011/*"OnDoubleClick"*/, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIForwardEvents__OnDrag(UIForwardEvents_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v9; // x19
  Il2CppObject *v10; // x0
  int v11[2]; // [xsp+8h] [xbp-28h] BYREF

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_421EBCB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Vector2_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_10013/*"OnDrag"*/, v7);
    byte_421EBCB = 1;
  }
  if ( this->fields.onDrag )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v9 = this->fields.target;
      *(float *)v11 = x;
      *(float *)&v11[1] = y;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, v11);
      if ( !v9 )
        sub_B0D97C(v10);
      UnityEngine_GameObject__SendMessage_40783576(v9, (System_String_o *)StringLiteral_10013/*"OnDrag"*/, v10, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnDrop(
        UIForwardEvents_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_421EBCC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, go);
    sub_B0D8A4(&StringLiteral_10018/*"OnDrop"*/, v5);
    byte_421EBCC = 1;
  }
  if ( this->fields.onDrop )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v7 = this->fields.target;
      if ( !v7 )
        sub_B0D97C(0LL);
      UnityEngine_GameObject__SendMessage_40783576(
        v7,
        (System_String_o *)StringLiteral_10018/*"OnDrop"*/,
        (Il2CppObject *)go,
        1,
        0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIForwardEvents__OnHover(UIForwardEvents_o *this, bool isOver, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v8; // x20
  Il2CppObject *v9; // x0
  char v10[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421EBC6 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isOver);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_10034/*"OnHover"*/, v6);
    byte_421EBC6 = 1;
  }
  if ( this->fields.onHover )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v8 = this->fields.target;
      v10[0] = isOver;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v10);
      if ( !v8 )
        sub_B0D97C(v9);
      UnityEngine_GameObject__SendMessage_40783576(v8, (System_String_o *)StringLiteral_10034/*"OnHover"*/, v9, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIForwardEvents__OnPress(UIForwardEvents_o *this, bool pressed, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v8; // x20
  Il2CppObject *v9; // x0
  char v10[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421EBC7 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, pressed);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_10064/*"OnPress"*/, v6);
    byte_421EBC7 = 1;
  }
  if ( this->fields.onPress )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v8 = this->fields.target;
      v10[0] = pressed;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v10);
      if ( !v8 )
        sub_B0D97C(v9);
      UnityEngine_GameObject__SendMessage_40783576(v8, (System_String_o *)StringLiteral_10064/*"OnPress"*/, v9, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnScroll(UIForwardEvents_o *this, float delta, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v8; // x19
  Il2CppObject *v9; // x0
  float v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421EBCE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&float_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_10071/*"OnScroll"*/, v6);
    byte_421EBCE = 1;
  }
  if ( this->fields.onScroll )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v8 = this->fields.target;
      v10 = delta;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v10);
      if ( !v8 )
        sub_B0D97C(v9);
      UnityEngine_GameObject__SendMessage_40783576(v8, (System_String_o *)StringLiteral_10071/*"OnScroll"*/, v9, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIForwardEvents__OnSelect(UIForwardEvents_o *this, bool selected, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v8; // x20
  Il2CppObject *v9; // x0
  char v10[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421EBCA & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, selected);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_10074/*"OnSelect"*/, v6);
    byte_421EBCA = 1;
  }
  if ( this->fields.onSelect )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v8 = this->fields.target;
      v10[0] = selected;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v10);
      if ( !v8 )
        sub_B0D97C(v9);
      UnityEngine_GameObject__SendMessage_40783576(v8, (System_String_o *)StringLiteral_10074/*"OnSelect"*/, v9, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_421EBCD & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10084/*"OnSubmit"*/, v3);
    byte_421EBCD = 1;
  }
  if ( this->fields.onSubmit )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        sub_B0D97C(0LL);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10084/*"OnSubmit"*/, 1, 0LL);
    }
  }
}