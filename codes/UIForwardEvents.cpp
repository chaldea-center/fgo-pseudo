void __fastcall UIForwardEvents___ctor(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIForwardEvents__OnClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4BE0E29 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_10033/*"OnClick"*/);
    byte_4BE0E29 = 1;
  }
  if ( this->fields.onClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        sub_1C22094(0LL, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10033/*"OnClick"*/, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4BE0E2A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_10080/*"OnDoubleClick"*/);
    byte_4BE0E2A = 1;
  }
  if ( this->fields.onDoubleClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        sub_1C22094(0LL, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10080/*"OnDoubleClick"*/, 1, 0LL);
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
  __int64 v8; // x3
  __int64 v9; // x4
  UnityEngine_GameObject_o *v10; // x19
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  int v13[2]; // [xsp+18h] [xbp-18h] BYREF

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4BE0E2C & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Vector2_TypeInfo);
    sub_1C21E38(&StringLiteral_10082/*"OnDrag"*/);
    byte_4BE0E2C = 1;
  }
  if ( this->fields.onDrag )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v10 = this->fields.target;
      *(float *)v13 = x;
      *(float *)&v13[1] = y;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, v13, v7, v8, v9);
      if ( !v10 )
        sub_1C22094(v11, v12);
      UnityEngine_GameObject__SendMessage_70849928(v10, (System_String_o *)StringLiteral_10082/*"OnDrag"*/, v11, 1, 0LL);
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

  if ( (byte_4BE0E2D & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_10087/*"OnDrop"*/);
    byte_4BE0E2D = 1;
  }
  if ( this->fields.onDrop )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v7 = this->fields.target;
      if ( !v7 )
        sub_1C22094(0LL, v6);
      UnityEngine_GameObject__SendMessage_70849928(
        v7,
        (System_String_o *)StringLiteral_10087/*"OnDrop"*/,
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
  __int64 v7; // x3
  __int64 v8; // x4
  UnityEngine_GameObject_o *v9; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  char v12[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BE0E27 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_10105/*"OnHover"*/);
    byte_4BE0E27 = 1;
  }
  if ( this->fields.onHover )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v9 = this->fields.target;
      v12[0] = isOver;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v12, v6, v7, v8);
      if ( !v9 )
        sub_1C22094(v10, v11);
      UnityEngine_GameObject__SendMessage_70849928(v9, (System_String_o *)StringLiteral_10105/*"OnHover"*/, v10, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnPress(UIForwardEvents_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  UnityEngine_GameObject_o *v9; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  char v12[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BE0E28 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_10136/*"OnPress"*/);
    byte_4BE0E28 = 1;
  }
  if ( this->fields.onPress )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v9 = this->fields.target;
      v12[0] = pressed;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v12, v6, v7, v8);
      if ( !v9 )
        sub_1C22094(v10, v11);
      UnityEngine_GameObject__SendMessage_70849928(v9, (System_String_o *)StringLiteral_10136/*"OnPress"*/, v10, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnScroll(UIForwardEvents_o *this, float delta, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  UnityEngine_GameObject_o *v9; // x19
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  float v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BE0E2F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_10144/*"OnScroll"*/);
    byte_4BE0E2F = 1;
  }
  if ( this->fields.onScroll )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v9 = this->fields.target;
      v12 = delta;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v12, v6, v7, v8);
      if ( !v9 )
        sub_1C22094(v10, v11);
      UnityEngine_GameObject__SendMessage_70849928(v9, (System_String_o *)StringLiteral_10144/*"OnScroll"*/, v10, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnSelect(UIForwardEvents_o *this, bool selected, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  UnityEngine_GameObject_o *v9; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  char v12[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BE0E2B & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_10147/*"OnSelect"*/);
    byte_4BE0E2B = 1;
  }
  if ( this->fields.onSelect )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v9 = this->fields.target;
      v12[0] = selected;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v12, v6, v7, v8);
      if ( !v9 )
        sub_1C22094(v10, v11);
      UnityEngine_GameObject__SendMessage_70849928(v9, (System_String_o *)StringLiteral_10147/*"OnSelect"*/, v10, 1, 0LL);
    }
  }
}


void __fastcall UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4BE0E2E & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_10157/*"OnSubmit"*/);
    byte_4BE0E2E = 1;
  }
  if ( this->fields.onSubmit )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        sub_1C22094(0LL, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10157/*"OnSubmit"*/, 1, 0LL);
    }
  }
}