void UIForwardEvents___ctor(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIForwardEvents__OnClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4CCBAD5 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_9839/*"OnClick"*/);
    byte_4CCBAD5 = 1;
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
        sub_1C71608(0, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_9839/*"OnClick"*/, 1, 0);
    }
  }
}


void UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4CCBAD6 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_9890/*"OnDoubleClick"*/);
    byte_4CCBAD6 = 1;
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
        sub_1C71608(0, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_9890/*"OnDoubleClick"*/, 1, 0);
    }
  }
}


void UIForwardEvents__OnDrag(UIForwardEvents_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v7; // x19
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  _DWORD v10[2]; // [xsp+18h] [xbp-18h] BYREF

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4CCBAD8 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    sub_1C713B0(&StringLiteral_9892/*"OnDrag"*/);
    byte_4CCBAD8 = 1;
  }
  if ( this->fields.onDrag )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v7 = this->fields.target;
      *(float *)v10 = x;
      *(float *)&v10[1] = y;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, v10);
      if ( !v7 )
        sub_1C71608(v8, v9);
      UnityEngine_GameObject__SendMessage_71704892(v7, (System_String_o *)StringLiteral_9892/*"OnDrag"*/, v8, 1, 0);
    }
  }
}


void UIForwardEvents__OnDrop(UIForwardEvents_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CCBAD9 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_9897/*"OnDrop"*/);
    byte_4CCBAD9 = 1;
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
        sub_1C71608(0, v6);
      UnityEngine_GameObject__SendMessage_71704892(v7, (System_String_o *)StringLiteral_9897/*"OnDrop"*/, (Il2CppObject *)go, 1, 0);
    }
  }
}


void UIForwardEvents__OnHover(UIForwardEvents_o *this, bool isOver, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v6; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  bool v9[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CCBAD3 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_9915/*"OnHover"*/);
    byte_4CCBAD3 = 1;
  }
  if ( this->fields.onHover )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v6 = this->fields.target;
      v9[0] = isOver;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v9);
      if ( !v6 )
        sub_1C71608(v7, v8);
      UnityEngine_GameObject__SendMessage_71704892(v6, (System_String_o *)StringLiteral_9915/*"OnHover"*/, v7, 1, 0);
    }
  }
}


void UIForwardEvents__OnPress(UIForwardEvents_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v6; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  bool v9[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CCBAD4 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_9946/*"OnPress"*/);
    byte_4CCBAD4 = 1;
  }
  if ( this->fields.onPress )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v6 = this->fields.target;
      v9[0] = pressed;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v9);
      if ( !v6 )
        sub_1C71608(v7, v8);
      UnityEngine_GameObject__SendMessage_71704892(v6, (System_String_o *)StringLiteral_9946/*"OnPress"*/, v7, 1, 0);
    }
  }
}


void UIForwardEvents__OnScroll(UIForwardEvents_o *this, float delta, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v6; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  float v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CCBADB & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&StringLiteral_9954/*"OnScroll"*/);
    byte_4CCBADB = 1;
  }
  if ( this->fields.onScroll )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v6 = this->fields.target;
      v9 = delta;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v9);
      if ( !v6 )
        sub_1C71608(v7, v8);
      UnityEngine_GameObject__SendMessage_71704892(v6, (System_String_o *)StringLiteral_9954/*"OnScroll"*/, v7, 1, 0);
    }
  }
}


void UIForwardEvents__OnSelect(UIForwardEvents_o *this, bool selected, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  UnityEngine_GameObject_o *v6; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  bool v9[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CCBAD7 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_9958/*"OnSelect"*/);
    byte_4CCBAD7 = 1;
  }
  if ( this->fields.onSelect )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v6 = this->fields.target;
      v9[0] = selected;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v9);
      if ( !v6 )
        sub_1C71608(v7, v8);
      UnityEngine_GameObject__SendMessage_71704892(v6, (System_String_o *)StringLiteral_9958/*"OnSelect"*/, v7, 1, 0);
    }
  }
}


void UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4CCBADA & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_9968/*"OnSubmit"*/);
    byte_4CCBADA = 1;
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
        sub_1C71608(0, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_9968/*"OnSubmit"*/, 1, 0);
    }
  }
}