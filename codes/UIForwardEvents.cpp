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

  if ( (byte_4A7475D & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&StringLiteral_9842/*"OnClick"*/, v3);
    byte_4A7475D = 1;
  }
  if ( this->fields.onClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v6 = this->fields.target;
      if ( !v6 )
        sub_1B9026C(0LL, v5);
      UnityEngine_GameObject__SendMessage(v6, (System_String_o *)StringLiteral_9842/*"OnClick"*/, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4A7475E & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&StringLiteral_9889/*"OnDoubleClick"*/, v3);
    byte_4A7475E = 1;
  }
  if ( this->fields.onDoubleClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v6 = this->fields.target;
      if ( !v6 )
        sub_1B9026C(0LL, v5);
      UnityEngine_GameObject__SendMessage(v6, (System_String_o *)StringLiteral_9889/*"OnDoubleClick"*/, 1, 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  UnityEngine_GameObject_o *v12; // x19
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  int v15[2]; // [xsp+18h] [xbp-18h] BYREF

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4A74760 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&UnityEngine_Vector2_TypeInfo, v6);
    sub_1B90010(&StringLiteral_9891/*"OnDrag"*/, v7);
    byte_4A74760 = 1;
  }
  if ( this->fields.onDrag )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v12 = this->fields.target;
      *(float *)v15 = x;
      *(float *)&v15[1] = y;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, v15, v9, v10, v11);
      if ( !v12 )
        sub_1B9026C(v13, v14);
      UnityEngine_GameObject__SendMessage_69519756(v12, (System_String_o *)StringLiteral_9891/*"OnDrag"*/, v13, 1, 0LL);
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

  if ( (byte_4A74761 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, go);
    sub_1B90010(&StringLiteral_9896/*"OnDrop"*/, v5);
    byte_4A74761 = 1;
  }
  if ( this->fields.onDrop )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v8 = this->fields.target;
      if ( !v8 )
        sub_1B9026C(0LL, v7);
      UnityEngine_GameObject__SendMessage_69519756(
        v8,
        (System_String_o *)StringLiteral_9896/*"OnDrop"*/,
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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  UnityEngine_GameObject_o *v11; // x20
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  char v14[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A7475B & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, isOver);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&StringLiteral_9913/*"OnHover"*/, v6);
    byte_4A7475B = 1;
  }
  if ( this->fields.onHover )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v11 = this->fields.target;
      v14[0] = isOver;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v14, v8, v9, v10);
      if ( !v11 )
        sub_1B9026C(v12, v13);
      UnityEngine_GameObject__SendMessage_69519756(v11, (System_String_o *)StringLiteral_9913/*"OnHover"*/, v12, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIForwardEvents__OnPress(UIForwardEvents_o *this, bool pressed, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *target; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  UnityEngine_GameObject_o *v11; // x20
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  char v14[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A7475C & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, pressed);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&StringLiteral_9945/*"OnPress"*/, v6);
    byte_4A7475C = 1;
  }
  if ( this->fields.onPress )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v11 = this->fields.target;
      v14[0] = pressed;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v14, v8, v9, v10);
      if ( !v11 )
        sub_1B9026C(v12, v13);
      UnityEngine_GameObject__SendMessage_69519756(v11, (System_String_o *)StringLiteral_9945/*"OnPress"*/, v12, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnScroll(UIForwardEvents_o *this, float delta, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  UnityEngine_GameObject_o *v11; // x19
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  float v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A74763 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&float_TypeInfo, v5);
    sub_1B90010(&StringLiteral_9953/*"OnScroll"*/, v6);
    byte_4A74763 = 1;
  }
  if ( this->fields.onScroll )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v11 = this->fields.target;
      v14 = delta;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v14, v8, v9, v10);
      if ( !v11 )
        sub_1B9026C(v12, v13);
      UnityEngine_GameObject__SendMessage_69519756(v11, (System_String_o *)StringLiteral_9953/*"OnScroll"*/, v12, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIForwardEvents__OnSelect(UIForwardEvents_o *this, bool selected, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *target; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  UnityEngine_GameObject_o *v11; // x20
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  char v14[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A7475F & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, selected);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&StringLiteral_9956/*"OnSelect"*/, v6);
    byte_4A7475F = 1;
  }
  if ( this->fields.onSelect )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v11 = this->fields.target;
      v14[0] = selected;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v14, v8, v9, v10);
      if ( !v11 )
        sub_1B9026C(v12, v13);
      UnityEngine_GameObject__SendMessage_69519756(v11, (System_String_o *)StringLiteral_9956/*"OnSelect"*/, v12, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4A74762 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&StringLiteral_9966/*"OnSubmit"*/, v3);
    byte_4A74762 = 1;
  }
  if ( this->fields.onSubmit )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v6 = this->fields.target;
      if ( !v6 )
        sub_1B9026C(0LL, v5);
      UnityEngine_GameObject__SendMessage(v6, (System_String_o *)StringLiteral_9966/*"OnSubmit"*/, 1, 0LL);
    }
  }
}