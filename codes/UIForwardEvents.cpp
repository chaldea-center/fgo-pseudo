void UIForwardEvents___ctor(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIForwardEvents__OnClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_593CD0D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10224/*"OnClick"*/);
    byte_593CD0D = 1;
  }
  if ( this->fields.onClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        sub_21FFECC(0, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10224/*"OnClick"*/, 1, 0);
    }
  }
}


void UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_593CD0E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10277/*"OnDoubleClick"*/);
    byte_593CD0E = 1;
  }
  if ( this->fields.onDoubleClick )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        sub_21FFECC(0, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10277/*"OnDoubleClick"*/, 1, 0);
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
  if ( (byte_593CD10 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    sub_21FFC50(&StringLiteral_10279/*"OnDrag"*/);
    byte_593CD10 = 1;
  }
  if ( this->fields.onDrag )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v7 = this->fields.target;
      *(float *)v10 = x;
      *(float *)&v10[1] = y;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, v10);
      if ( !v7 )
        sub_21FFECC(v8, v9);
      UnityEngine_GameObject__SendMessage_83220264(v7, (System_String_o *)StringLiteral_10279/*"OnDrag"*/, v8, 1, 0);
    }
  }
}


void UIForwardEvents__OnDrop(UIForwardEvents_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_593CD11 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10284/*"OnDrop"*/);
    byte_593CD11 = 1;
  }
  if ( this->fields.onDrop )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v7 = this->fields.target;
      if ( !v7 )
        sub_21FFECC(0, v6);
      UnityEngine_GameObject__SendMessage_83220264(v7, (System_String_o *)StringLiteral_10284/*"OnDrop"*/, (Il2CppObject *)go, 1, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIForwardEvents__OnHover(UIForwardEvents_o *this, bool isOver, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  bool v6; // w9
  UnityEngine_GameObject_o *v7; // x19
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  bool v10[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593CD0B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10303/*"OnHover"*/);
    byte_593CD0B = 1;
  }
  if ( this->fields.onHover )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOver);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v6 = isOver;
      v7 = this->fields.target;
      v10[0] = v6;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C050, v10);
      if ( !v7 )
        sub_21FFECC(v8, v9);
      UnityEngine_GameObject__SendMessage_83220264(v7, (System_String_o *)StringLiteral_10303/*"OnHover"*/, v8, 1, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIForwardEvents__OnPress(UIForwardEvents_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  bool v6; // w9
  UnityEngine_GameObject_o *v7; // x19
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  bool v10[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593CD0C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10335/*"OnPress"*/);
    byte_593CD0C = 1;
  }
  if ( this->fields.onPress )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v6 = pressed;
      v7 = this->fields.target;
      v10[0] = v6;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C050, v10);
      if ( !v7 )
        sub_21FFECC(v8, v9);
      UnityEngine_GameObject__SendMessage_83220264(v7, (System_String_o *)StringLiteral_10335/*"OnPress"*/, v8, 1, 0);
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

  if ( (byte_593CD13 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10343/*"OnScroll"*/);
    byte_593CD13 = 1;
  }
  if ( this->fields.onScroll )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v6 = this->fields.target;
      v9 = delta;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, &v9);
      if ( !v6 )
        sub_21FFECC(v7, v8);
      UnityEngine_GameObject__SendMessage_83220264(v6, (System_String_o *)StringLiteral_10343/*"OnScroll"*/, v7, 1, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIForwardEvents__OnSelect(UIForwardEvents_o *this, bool selected, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  bool v6; // w9
  UnityEngine_GameObject_o *v7; // x19
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  bool v10[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593CD0F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10347/*"OnSelect"*/);
    byte_593CD0F = 1;
  }
  if ( this->fields.onSelect )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, selected);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v6 = selected;
      v7 = this->fields.target;
      v10[0] = v6;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C050, v10);
      if ( !v7 )
        sub_21FFECC(v8, v9);
      UnityEngine_GameObject__SendMessage_83220264(v7, (System_String_o *)StringLiteral_10347/*"OnSelect"*/, v8, 1, 0);
    }
  }
}


void UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_593CD12 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10357/*"OnSubmit"*/);
    byte_593CD12 = 1;
  }
  if ( this->fields.onSubmit )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v5 = this->fields.target;
      if ( !v5 )
        sub_21FFECC(0, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10357/*"OnSubmit"*/, 1, 0);
    }
  }
}