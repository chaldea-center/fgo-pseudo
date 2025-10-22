void UIForwardEvents___ctor(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIForwardEvents__OnClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4C5B39F & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_9838/*"OnClick"*/);
    byte_4C5B39F = 1;
  }
  if ( this->fields.onClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        sub_1C3E7C0(0, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_9838/*"OnClick"*/, 1, 0);
    }
  }
}


void UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4C5B3A0 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_9889/*"OnDoubleClick"*/);
    byte_4C5B3A0 = 1;
  }
  if ( this->fields.onDoubleClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        sub_1C3E7C0(0, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_9889/*"OnDoubleClick"*/, 1, 0);
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
  __int64 v15; // x1
  _DWORD v16[2]; // [xsp+18h] [xbp-18h] BYREF

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4C5B3A2 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    sub_1C3E564(&StringLiteral_9891/*"OnDrag"*/);
    byte_4C5B3A2 = 1;
  }
  if ( this->fields.onDrag )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v13 = this->fields.target;
      *(float *)v16 = x;
      *(float *)&v16[1] = y;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, v16, v7, v8, v9, v10, v11, v12);
      if ( !v13 )
        sub_1C3E7C0(v14, v15);
      UnityEngine_GameObject__SendMessage_71322356(v13, (System_String_o *)StringLiteral_9891/*"OnDrag"*/, v14, 1, 0);
    }
  }
}


void UIForwardEvents__OnDrop(UIForwardEvents_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4C5B3A3 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_9896/*"OnDrop"*/);
    byte_4C5B3A3 = 1;
  }
  if ( this->fields.onDrop )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v7 = this->fields.target;
      if ( !v7 )
        sub_1C3E7C0(0, v6);
      UnityEngine_GameObject__SendMessage_71322356(v7, (System_String_o *)StringLiteral_9896/*"OnDrop"*/, (Il2CppObject *)go, 1, 0);
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
  __int64 v14; // x1
  bool v15[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C5B39D & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_9914/*"OnHover"*/);
    byte_4C5B39D = 1;
  }
  if ( this->fields.onHover )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v12 = this->fields.target;
      v15[0] = isOver;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v15, v6, v7, v8, v9, v10, v11);
      if ( !v12 )
        sub_1C3E7C0(v13, v14);
      UnityEngine_GameObject__SendMessage_71322356(v12, (System_String_o *)StringLiteral_9914/*"OnHover"*/, v13, 1, 0);
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
  __int64 v14; // x1
  bool v15[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C5B39E & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_9945/*"OnPress"*/);
    byte_4C5B39E = 1;
  }
  if ( this->fields.onPress )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v12 = this->fields.target;
      v15[0] = pressed;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v15, v6, v7, v8, v9, v10, v11);
      if ( !v12 )
        sub_1C3E7C0(v13, v14);
      UnityEngine_GameObject__SendMessage_71322356(v12, (System_String_o *)StringLiteral_9945/*"OnPress"*/, v13, 1, 0);
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
  __int64 v14; // x1
  float v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C5B3A5 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_9953/*"OnScroll"*/);
    byte_4C5B3A5 = 1;
  }
  if ( this->fields.onScroll )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v12 = this->fields.target;
      v15 = delta;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v15, v6, v7, v8, v9, v10, v11);
      if ( !v12 )
        sub_1C3E7C0(v13, v14);
      UnityEngine_GameObject__SendMessage_71322356(v12, (System_String_o *)StringLiteral_9953/*"OnScroll"*/, v13, 1, 0);
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
  __int64 v14; // x1
  bool v15[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C5B3A1 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_9957/*"OnSelect"*/);
    byte_4C5B3A1 = 1;
  }
  if ( this->fields.onSelect )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v12 = this->fields.target;
      v15[0] = selected;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v15, v6, v7, v8, v9, v10, v11);
      if ( !v12 )
        sub_1C3E7C0(v13, v14);
      UnityEngine_GameObject__SendMessage_71322356(v12, (System_String_o *)StringLiteral_9957/*"OnSelect"*/, v13, 1, 0);
    }
  }
}


void UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4C5B3A4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_9967/*"OnSubmit"*/);
    byte_4C5B3A4 = 1;
  }
  if ( this->fields.onSubmit )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        sub_1C3E7C0(0, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_9967/*"OnSubmit"*/, 1, 0);
    }
  }
}