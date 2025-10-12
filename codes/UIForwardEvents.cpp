void UIForwardEvents___ctor(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIForwardEvents__OnClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C3C02D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9837/*"OnClick"*/);
    byte_4C3C02D = 1;
  }
  if ( this->fields.onClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v4 = this->fields.target;
      if ( !v4 )
        sub_1C32E7C(0);
      UnityEngine_GameObject__SendMessage(v4, (System_String_o *)StringLiteral_9837/*"OnClick"*/, 1, 0);
    }
  }
}


void UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C3C02E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9888/*"OnDoubleClick"*/);
    byte_4C3C02E = 1;
  }
  if ( this->fields.onDoubleClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v4 = this->fields.target;
      if ( !v4 )
        sub_1C32E7C(0);
      UnityEngine_GameObject__SendMessage(v4, (System_String_o *)StringLiteral_9888/*"OnDoubleClick"*/, 1, 0);
    }
  }
}


void UIForwardEvents__OnDrag(UIForwardEvents_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *target; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  UnityEngine_GameObject_o *v13; // x19
  Il2CppObject *v14; // x0
  _DWORD v15[2]; // [xsp+18h] [xbp-18h] BYREF

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4C3C030 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    sub_1C32C20(&StringLiteral_9890/*"OnDrag"*/);
    byte_4C3C030 = 1;
  }
  if ( this->fields.onDrag )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v13 = this->fields.target;
      *(float *)v15 = x;
      *(float *)&v15[1] = y;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, v15, v7, v8, v9, v10, v11, v12);
      if ( !v13 )
        sub_1C32E7C(v14);
      UnityEngine_GameObject__SendMessage_71204432(v13, (System_String_o *)StringLiteral_9890/*"OnDrag"*/, v14, 1, 0);
    }
  }
}


void UIForwardEvents__OnDrop(UIForwardEvents_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4C3C031 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9895/*"OnDrop"*/);
    byte_4C3C031 = 1;
  }
  if ( this->fields.onDrop )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v6 = this->fields.target;
      if ( !v6 )
        sub_1C32E7C(0);
      UnityEngine_GameObject__SendMessage_71204432(v6, (System_String_o *)StringLiteral_9895/*"OnDrop"*/, (Il2CppObject *)go, 1, 0);
    }
  }
}


void UIForwardEvents__OnHover(UIForwardEvents_o *this, bool isOver, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  UnityEngine_GameObject_o *v12; // x20
  Il2CppObject *v13; // x0
  bool v14[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3C02B & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9913/*"OnHover"*/);
    byte_4C3C02B = 1;
  }
  if ( this->fields.onHover )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v12 = this->fields.target;
      v14[0] = isOver;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v14, v6, v7, v8, v9, v10, v11);
      if ( !v12 )
        sub_1C32E7C(v13);
      UnityEngine_GameObject__SendMessage_71204432(v12, (System_String_o *)StringLiteral_9913/*"OnHover"*/, v13, 1, 0);
    }
  }
}


void UIForwardEvents__OnPress(UIForwardEvents_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  UnityEngine_GameObject_o *v12; // x20
  Il2CppObject *v13; // x0
  bool v14[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3C02C & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9944/*"OnPress"*/);
    byte_4C3C02C = 1;
  }
  if ( this->fields.onPress )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v12 = this->fields.target;
      v14[0] = pressed;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v14, v6, v7, v8, v9, v10, v11);
      if ( !v12 )
        sub_1C32E7C(v13);
      UnityEngine_GameObject__SendMessage_71204432(v12, (System_String_o *)StringLiteral_9944/*"OnPress"*/, v13, 1, 0);
    }
  }
}


void UIForwardEvents__OnScroll(UIForwardEvents_o *this, float delta, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  UnityEngine_GameObject_o *v12; // x19
  Il2CppObject *v13; // x0
  float v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3C033 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&StringLiteral_9952/*"OnScroll"*/);
    byte_4C3C033 = 1;
  }
  if ( this->fields.onScroll )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v12 = this->fields.target;
      v14 = delta;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v14, v6, v7, v8, v9, v10, v11);
      if ( !v12 )
        sub_1C32E7C(v13);
      UnityEngine_GameObject__SendMessage_71204432(v12, (System_String_o *)StringLiteral_9952/*"OnScroll"*/, v13, 1, 0);
    }
  }
}


void UIForwardEvents__OnSelect(UIForwardEvents_o *this, bool selected, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  UnityEngine_GameObject_o *v12; // x20
  Il2CppObject *v13; // x0
  bool v14[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3C02F & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9956/*"OnSelect"*/);
    byte_4C3C02F = 1;
  }
  if ( this->fields.onSelect )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v12 = this->fields.target;
      v14[0] = selected;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v14, v6, v7, v8, v9, v10, v11);
      if ( !v12 )
        sub_1C32E7C(v13);
      UnityEngine_GameObject__SendMessage_71204432(v12, (System_String_o *)StringLiteral_9956/*"OnSelect"*/, v13, 1, 0);
    }
  }
}


void UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C3C032 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9966/*"OnSubmit"*/);
    byte_4C3C032 = 1;
  }
  if ( this->fields.onSubmit )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v4 = this->fields.target;
      if ( !v4 )
        sub_1C32E7C(0);
      UnityEngine_GameObject__SendMessage(v4, (System_String_o *)StringLiteral_9966/*"OnSubmit"*/, 1, 0);
    }
  }
}