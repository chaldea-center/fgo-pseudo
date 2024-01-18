void __fastcall UIForwardEvents___ctor(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIForwardEvents__OnClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4191736 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9943/*"OnClick"*/, v3);
    byte_4191736 = 1;
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
      v6 = this->fields.target;
      if ( !v6 )
        sub_B2C434(0LL, v5);
      UnityEngine_GameObject__SendMessage(v6, (System_String_o *)StringLiteral_9943/*"OnClick"*/, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4191737 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9987/*"OnDoubleClick"*/, v3);
    byte_4191737 = 1;
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
      v6 = this->fields.target;
      if ( !v6 )
        sub_B2C434(0LL, v5);
      UnityEngine_GameObject__SendMessage(v6, (System_String_o *)StringLiteral_9987/*"OnDoubleClick"*/, 1, 0LL);
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
  __int64 v11; // x1
  int v12[2]; // [xsp+8h] [xbp-28h] BYREF

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4191739 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Vector2_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_9989/*"OnDrag"*/, v7);
    byte_4191739 = 1;
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
      *(float *)v12 = x;
      *(float *)&v12[1] = y;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, v12);
      if ( !v9 )
        sub_B2C434(v10, v11);
      UnityEngine_GameObject__SendMessage_40659236(v9, (System_String_o *)StringLiteral_9989/*"OnDrag"*/, v10, 1, 0LL);
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
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_419173A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, go);
    sub_B2C35C(&StringLiteral_9994/*"OnDrop"*/, v5);
    byte_419173A = 1;
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
      v8 = this->fields.target;
      if ( !v8 )
        sub_B2C434(0LL, v7);
      UnityEngine_GameObject__SendMessage_40659236(
        v8,
        (System_String_o *)StringLiteral_9994/*"OnDrop"*/,
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
  __int64 v10; // x1
  char v11[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4191734 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isOver);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_10010/*"OnHover"*/, v6);
    byte_4191734 = 1;
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
      v11[0] = isOver;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v11);
      if ( !v8 )
        sub_B2C434(v9, v10);
      UnityEngine_GameObject__SendMessage_40659236(v8, (System_String_o *)StringLiteral_10010/*"OnHover"*/, v9, 1, 0LL);
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
  __int64 v10; // x1
  char v11[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4191735 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, pressed);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_10040/*"OnPress"*/, v6);
    byte_4191735 = 1;
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
      v11[0] = pressed;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v11);
      if ( !v8 )
        sub_B2C434(v9, v10);
      UnityEngine_GameObject__SendMessage_40659236(v8, (System_String_o *)StringLiteral_10040/*"OnPress"*/, v9, 1, 0LL);
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
  __int64 v10; // x1
  float v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_419173C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&float_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_10047/*"OnScroll"*/, v6);
    byte_419173C = 1;
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
      v11 = delta;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v11);
      if ( !v8 )
        sub_B2C434(v9, v10);
      UnityEngine_GameObject__SendMessage_40659236(v8, (System_String_o *)StringLiteral_10047/*"OnScroll"*/, v9, 1, 0LL);
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
  __int64 v10; // x1
  char v11[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4191738 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, selected);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_10050/*"OnSelect"*/, v6);
    byte_4191738 = 1;
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
      v11[0] = selected;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v11);
      if ( !v8 )
        sub_B2C434(v9, v10);
      UnityEngine_GameObject__SendMessage_40659236(v8, (System_String_o *)StringLiteral_10050/*"OnSelect"*/, v9, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_419173B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10060/*"OnSubmit"*/, v3);
    byte_419173B = 1;
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
      v6 = this->fields.target;
      if ( !v6 )
        sub_B2C434(0LL, v5);
      UnityEngine_GameObject__SendMessage(v6, (System_String_o *)StringLiteral_10060/*"OnSubmit"*/, 1, 0LL);
    }
  }
}