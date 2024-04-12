void __fastcall UIForwardEvents___ctor(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIForwardEvents__OnClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_42BA07C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_10007/*"OnClick"*/);
    byte_42BA07C = 1;
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
        sub_B52A5C(0LL, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10007/*"OnClick"*/, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_42BA07D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_10051/*"OnDoubleClick"*/);
    byte_42BA07D = 1;
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
        sub_B52A5C(0LL, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10051/*"OnDoubleClick"*/, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIForwardEvents__OnDrag(UIForwardEvents_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v7; // x19
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  int v10[2]; // [xsp+8h] [xbp-28h] BYREF

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_42BA07F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_Vector2_TypeInfo);
    sub_B52984(&StringLiteral_10053/*"OnDrag"*/);
    byte_42BA07F = 1;
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
      v7 = this->fields.target;
      *(float *)v10 = x;
      *(float *)&v10[1] = y;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, v10);
      if ( !v7 )
        sub_B52A5C(v8, v9);
      UnityEngine_GameObject__SendMessage_41489720(v7, (System_String_o *)StringLiteral_10053/*"OnDrag"*/, v8, 1, 0LL);
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

  if ( (byte_42BA080 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_10058/*"OnDrop"*/);
    byte_42BA080 = 1;
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
        sub_B52A5C(0LL, v6);
      UnityEngine_GameObject__SendMessage_41489720(
        v7,
        (System_String_o *)StringLiteral_10058/*"OnDrop"*/,
        (Il2CppObject *)go,
        1,
        0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnHover(UIForwardEvents_o *this, bool isOver, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v6; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  char v9[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42BA07A & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_10074/*"OnHover"*/);
    byte_42BA07A = 1;
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
      v6 = this->fields.target;
      v9[0] = isOver;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v9);
      if ( !v6 )
        sub_B52A5C(v7, v8);
      UnityEngine_GameObject__SendMessage_41489720(v6, (System_String_o *)StringLiteral_10074/*"OnHover"*/, v7, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnPress(UIForwardEvents_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v6; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  char v9[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42BA07B & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_10104/*"OnPress"*/);
    byte_42BA07B = 1;
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
      v6 = this->fields.target;
      v9[0] = pressed;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v9);
      if ( !v6 )
        sub_B52A5C(v7, v8);
      UnityEngine_GameObject__SendMessage_41489720(v6, (System_String_o *)StringLiteral_10104/*"OnPress"*/, v7, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnScroll(UIForwardEvents_o *this, float delta, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v6; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  float v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42BA082 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&StringLiteral_10111/*"OnScroll"*/);
    byte_42BA082 = 1;
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
      v6 = this->fields.target;
      v9 = delta;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v9);
      if ( !v6 )
        sub_B52A5C(v7, v8);
      UnityEngine_GameObject__SendMessage_41489720(v6, (System_String_o *)StringLiteral_10111/*"OnScroll"*/, v7, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnSelect(UIForwardEvents_o *this, bool selected, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v6; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  char v9[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42BA07E & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_10114/*"OnSelect"*/);
    byte_42BA07E = 1;
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
      v6 = this->fields.target;
      v9[0] = selected;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v9);
      if ( !v6 )
        sub_B52A5C(v7, v8);
      UnityEngine_GameObject__SendMessage_41489720(v6, (System_String_o *)StringLiteral_10114/*"OnSelect"*/, v7, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_42BA081 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_10124/*"OnSubmit"*/);
    byte_42BA081 = 1;
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
        sub_B52A5C(0LL, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10124/*"OnSubmit"*/, 1, 0LL);
    }
  }
}