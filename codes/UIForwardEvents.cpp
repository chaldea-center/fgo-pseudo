void __fastcall UIForwardEvents___ctor(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIForwardEvents__OnClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *target; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_4B1A9C6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9969/*"OnClick"*/, v4, v5);
    byte_4B1A9C6 = 1;
  }
  if ( this->fields.onClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v8 = this->fields.target;
      if ( !v8 )
        sub_1BCAA3C(0LL, v7);
      UnityEngine_GameObject__SendMessage(v8, (System_String_o *)StringLiteral_9969/*"OnClick"*/, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *target; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_4B1A9C7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10016/*"OnDoubleClick"*/, v4, v5);
    byte_4B1A9C7 = 1;
  }
  if ( this->fields.onDoubleClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v8 = this->fields.target;
      if ( !v8 )
        sub_1BCAA3C(0LL, v7);
      UnityEngine_GameObject__SendMessage(v8, (System_String_o *)StringLiteral_10016/*"OnDoubleClick"*/, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIForwardEvents__OnDrag(UIForwardEvents_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  __int64 v3; // x2
  float y; // s8
  float x; // s9
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v12; // x19
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  int v15[2]; // [xsp+18h] [xbp-18h] BYREF

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4B1A9C9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_10018/*"OnDrag"*/, v9, v10);
    byte_4B1A9C9 = 1;
  }
  if ( this->fields.onDrag )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v12 = this->fields.target;
      *(float *)v15 = x;
      *(float *)&v15[1] = y;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, v15);
      if ( !v12 )
        sub_1BCAA3C(v13, v14);
      UnityEngine_GameObject__SendMessage_70134560(v12, (System_String_o *)StringLiteral_10018/*"OnDrag"*/, v13, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnDrop(
        UIForwardEvents_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *target; // x21
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_4B1A9CA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, go, method);
    sub_1BCA7E0(&StringLiteral_10023/*"OnDrop"*/, v5, v6);
    byte_4B1A9CA = 1;
  }
  if ( this->fields.onDrop )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v9 = this->fields.target;
      if ( !v9 )
        sub_1BCAA3C(0LL, v8);
      UnityEngine_GameObject__SendMessage_70134560(
        v9,
        (System_String_o *)StringLiteral_10023/*"OnDrop"*/,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v10; // x20
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  char v13[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1A9C4 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isOver, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_10041/*"OnHover"*/, v7, v8);
    byte_4B1A9C4 = 1;
  }
  if ( this->fields.onHover )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOver);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v10 = this->fields.target;
      v13[0] = isOver;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v13);
      if ( !v10 )
        sub_1BCAA3C(v11, v12);
      UnityEngine_GameObject__SendMessage_70134560(v10, (System_String_o *)StringLiteral_10041/*"OnHover"*/, v11, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIForwardEvents__OnPress(UIForwardEvents_o *this, bool pressed, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v10; // x20
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  char v13[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1A9C5 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, pressed, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_10072/*"OnPress"*/, v7, v8);
    byte_4B1A9C5 = 1;
  }
  if ( this->fields.onPress )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v10 = this->fields.target;
      v13[0] = pressed;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v13);
      if ( !v10 )
        sub_1BCAA3C(v11, v12);
      UnityEngine_GameObject__SendMessage_70134560(v10, (System_String_o *)StringLiteral_10072/*"OnPress"*/, v11, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnScroll(UIForwardEvents_o *this, float delta, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v11; // x19
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  float v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1A9CC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    sub_1BCA7E0(&float_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_10080/*"OnScroll"*/, v8, v9);
    byte_4B1A9CC = 1;
  }
  if ( this->fields.onScroll )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v11 = this->fields.target;
      v14 = delta;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v14);
      if ( !v11 )
        sub_1BCAA3C(v12, v13);
      UnityEngine_GameObject__SendMessage_70134560(v11, (System_String_o *)StringLiteral_10080/*"OnScroll"*/, v12, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIForwardEvents__OnSelect(UIForwardEvents_o *this, bool selected, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v10; // x20
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  char v13[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1A9C8 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, selected, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_10083/*"OnSelect"*/, v7, v8);
    byte_4B1A9C8 = 1;
  }
  if ( this->fields.onSelect )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, selected);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v10 = this->fields.target;
      v13[0] = selected;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v13);
      if ( !v10 )
        sub_1BCAA3C(v11, v12);
      UnityEngine_GameObject__SendMessage_70134560(v10, (System_String_o *)StringLiteral_10083/*"OnSelect"*/, v11, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *target; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_4B1A9CB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10093/*"OnSubmit"*/, v4, v5);
    byte_4B1A9CB = 1;
  }
  if ( this->fields.onSubmit )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v8 = this->fields.target;
      if ( !v8 )
        sub_1BCAA3C(0LL, v7);
      UnityEngine_GameObject__SendMessage(v8, (System_String_o *)StringLiteral_10093/*"OnSubmit"*/, 1, 0LL);
    }
  }
}