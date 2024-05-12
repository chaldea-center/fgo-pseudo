void __fastcall UIForwardEvents___ctor(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIForwardEvents__OnClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4396043 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_10125/*"OnClick"*/);
    byte_4396043 = 1;
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
        sub_B7769C(0LL, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10125/*"OnClick"*/, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4396044 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_10169/*"OnDoubleClick"*/);
    byte_4396044 = 1;
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
        sub_B7769C(0LL, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10169/*"OnDoubleClick"*/, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIForwardEvents__OnDrag(UIForwardEvents_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *target; // x20
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x19
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int v11[2]; // [xsp+8h] [xbp-28h] BYREF

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4396046 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_Vector2_TypeInfo);
    sub_B775C4(&StringLiteral_10171/*"OnDrag"*/);
    byte_4396046 = 1;
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
      v8 = this->fields.target;
      *(float *)v11 = x;
      *(float *)&v11[1] = y;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, v11, v7);
      if ( !v8 )
        sub_B7769C(v9, v10);
      UnityEngine_GameObject__SendMessage_41437280(v8, (System_String_o *)StringLiteral_10171/*"OnDrag"*/, v9, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnDrop(
        UIForwardEvents_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4396047 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_10176/*"OnDrop"*/);
    byte_4396047 = 1;
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
        sub_B7769C(0LL, v6);
      UnityEngine_GameObject__SendMessage_41437280(
        v7,
        (System_String_o *)StringLiteral_10176/*"OnDrop"*/,
        (Il2CppObject *)go,
        1,
        0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnHover(UIForwardEvents_o *this, bool isOver, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x2
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  char v10[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4396041 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_10192/*"OnHover"*/);
    byte_4396041 = 1;
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
      v7 = this->fields.target;
      v10[0] = isOver;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v10, v6);
      if ( !v7 )
        sub_B7769C(v8, v9);
      UnityEngine_GameObject__SendMessage_41437280(v7, (System_String_o *)StringLiteral_10192/*"OnHover"*/, v8, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnPress(UIForwardEvents_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x2
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  char v10[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4396042 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_10222/*"OnPress"*/);
    byte_4396042 = 1;
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
      v7 = this->fields.target;
      v10[0] = pressed;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v10, v6);
      if ( !v7 )
        sub_B7769C(v8, v9);
      UnityEngine_GameObject__SendMessage_41437280(v7, (System_String_o *)StringLiteral_10222/*"OnPress"*/, v8, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnScroll(UIForwardEvents_o *this, float delta, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v6; // x2
  UnityEngine_GameObject_o *v7; // x19
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  float v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4396049 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_10229/*"OnScroll"*/);
    byte_4396049 = 1;
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
      v7 = this->fields.target;
      v10 = delta;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v10, v6);
      if ( !v7 )
        sub_B7769C(v8, v9);
      UnityEngine_GameObject__SendMessage_41437280(v7, (System_String_o *)StringLiteral_10229/*"OnScroll"*/, v8, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnSelect(UIForwardEvents_o *this, bool selected, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x2
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  char v10[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4396045 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_10232/*"OnSelect"*/);
    byte_4396045 = 1;
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
      v7 = this->fields.target;
      v10[0] = selected;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v10, v6);
      if ( !v7 )
        sub_B7769C(v8, v9);
      UnityEngine_GameObject__SendMessage_41437280(v7, (System_String_o *)StringLiteral_10232/*"OnSelect"*/, v8, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4396048 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_10242/*"OnSubmit"*/);
    byte_4396048 = 1;
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
        sub_B7769C(0LL, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10242/*"OnSubmit"*/, 1, 0LL);
    }
  }
}