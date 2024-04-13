void __fastcall UIForwardEvents___ctor(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIForwardEvents__OnClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *target; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_42F2A0C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10049/*"OnClick"*/, v5, v6, v7);
    byte_42F2A0C = 1;
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
      v10 = this->fields.target;
      if ( !v10 )
        sub_B5D69C(0LL, v9);
      UnityEngine_GameObject__SendMessage(v10, (System_String_o *)StringLiteral_10049/*"OnClick"*/, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *target; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_42F2A0D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10093/*"OnDoubleClick"*/, v5, v6, v7);
    byte_42F2A0D = 1;
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
      v10 = this->fields.target;
      if ( !v10 )
        sub_B5D69C(0LL, v9);
      UnityEngine_GameObject__SendMessage(v10, (System_String_o *)StringLiteral_10093/*"OnDoubleClick"*/, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIForwardEvents__OnDrag(UIForwardEvents_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float y; // s8
  float x; // s9
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v15; // x19
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  int v18[2]; // [xsp+8h] [xbp-28h] BYREF

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_42F2A0F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&UnityEngine_Vector2_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_10095/*"OnDrag"*/, v11, v12, v13);
    byte_42F2A0F = 1;
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
      v15 = this->fields.target;
      *(float *)v18 = x;
      *(float *)&v18[1] = y;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, v18);
      if ( !v15 )
        sub_B5D69C(v16, v17);
      UnityEngine_GameObject__SendMessage_41593868(v15, (System_String_o *)StringLiteral_10095/*"OnDrag"*/, v16, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnDrop(
        UIForwardEvents_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *target; // x21
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x0

  if ( (byte_42F2A10 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)go, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_10100/*"OnDrop"*/, v6, v7, v8);
    byte_42F2A10 = 1;
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
      v11 = this->fields.target;
      if ( !v11 )
        sub_B5D69C(0LL, v10);
      UnityEngine_GameObject__SendMessage_41593868(
        v11,
        (System_String_o *)StringLiteral_10100/*"OnDrop"*/,
        (Il2CppObject *)go,
        1,
        0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnHover(UIForwardEvents_o *this, bool isOver, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v13; // x20
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  char v16[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42F2A0A & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isOver, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_10116/*"OnHover"*/, v9, v10, v11);
    byte_42F2A0A = 1;
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
      v13 = this->fields.target;
      v16[0] = isOver;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v16);
      if ( !v13 )
        sub_B5D69C(v14, v15);
      UnityEngine_GameObject__SendMessage_41593868(v13, (System_String_o *)StringLiteral_10116/*"OnHover"*/, v14, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnPress(UIForwardEvents_o *this, bool pressed, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v13; // x20
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  char v16[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42F2A0B & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, pressed, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_10146/*"OnPress"*/, v9, v10, v11);
    byte_42F2A0B = 1;
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
      v13 = this->fields.target;
      v16[0] = pressed;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v16);
      if ( !v13 )
        sub_B5D69C(v14, v15);
      UnityEngine_GameObject__SendMessage_41593868(v13, (System_String_o *)StringLiteral_10146/*"OnPress"*/, v14, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnScroll(UIForwardEvents_o *this, float delta, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v14; // x19
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  float v17; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42F2A12 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&float_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_10153/*"OnScroll"*/, v10, v11, v12);
    byte_42F2A12 = 1;
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
      v14 = this->fields.target;
      v17 = delta;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v17);
      if ( !v14 )
        sub_B5D69C(v15, v16);
      UnityEngine_GameObject__SendMessage_41593868(v14, (System_String_o *)StringLiteral_10153/*"OnScroll"*/, v15, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnSelect(UIForwardEvents_o *this, bool selected, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v13; // x20
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  char v16[4]; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42F2A0E & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, selected, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_10156/*"OnSelect"*/, v9, v10, v11);
    byte_42F2A0E = 1;
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
      v13 = this->fields.target;
      v16[0] = selected;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v16);
      if ( !v13 )
        sub_B5D69C(v14, v15);
      UnityEngine_GameObject__SendMessage_41593868(v13, (System_String_o *)StringLiteral_10156/*"OnSelect"*/, v14, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *target; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_42F2A11 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10166/*"OnSubmit"*/, v5, v6, v7);
    byte_42F2A11 = 1;
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
      v10 = this->fields.target;
      if ( !v10 )
        sub_B5D69C(0LL, v9);
      UnityEngine_GameObject__SendMessage(v10, (System_String_o *)StringLiteral_10166/*"OnSubmit"*/, 1, 0LL);
    }
  }
}