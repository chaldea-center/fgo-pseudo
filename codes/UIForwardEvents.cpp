void UIForwardEvents___ctor(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIForwardEvents__OnClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_5974FE4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10237/*"OnClick"*/);
    byte_5974FE4 = 1;
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
        sub_2213CDC(0, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10237/*"OnClick"*/, 1, 0);
    }
  }
}


void UIForwardEvents__OnDoubleClick(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_5974FE5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10290/*"OnDoubleClick"*/);
    byte_5974FE5 = 1;
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
        sub_2213CDC(0, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10290/*"OnDoubleClick"*/, 1, 0);
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
  if ( (byte_5974FE7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    sub_2213A60(&StringLiteral_10292/*"OnDrag"*/);
    byte_5974FE7 = 1;
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
        sub_2213CDC(v8, v9);
      UnityEngine_GameObject__SendMessage_83433568(v7, (System_String_o *)StringLiteral_10292/*"OnDrag"*/, v8, 1, 0);
    }
  }
}


void UIForwardEvents__OnDrop(UIForwardEvents_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_5974FE8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10297/*"OnDrop"*/);
    byte_5974FE8 = 1;
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
        sub_2213CDC(0, v6);
      UnityEngine_GameObject__SendMessage_83433568(v7, (System_String_o *)StringLiteral_10297/*"OnDrop"*/, (Il2CppObject *)go, 1, 0);
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

  if ( (byte_5974FE2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10316/*"OnHover"*/);
    byte_5974FE2 = 1;
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
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v10);
      if ( !v7 )
        sub_2213CDC(v8, v9);
      UnityEngine_GameObject__SendMessage_83433568(v7, (System_String_o *)StringLiteral_10316/*"OnHover"*/, v8, 1, 0);
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

  if ( (byte_5974FE3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10348/*"OnPress"*/);
    byte_5974FE3 = 1;
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
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v10);
      if ( !v7 )
        sub_2213CDC(v8, v9);
      UnityEngine_GameObject__SendMessage_83433568(v7, (System_String_o *)StringLiteral_10348/*"OnPress"*/, v8, 1, 0);
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

  if ( (byte_5974FEA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10356/*"OnScroll"*/);
    byte_5974FEA = 1;
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
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &v9);
      if ( !v6 )
        sub_2213CDC(v7, v8);
      UnityEngine_GameObject__SendMessage_83433568(v6, (System_String_o *)StringLiteral_10356/*"OnScroll"*/, v7, 1, 0);
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

  if ( (byte_5974FE6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10360/*"OnSelect"*/);
    byte_5974FE6 = 1;
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
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v10);
      if ( !v7 )
        sub_2213CDC(v8, v9);
      UnityEngine_GameObject__SendMessage_83433568(v7, (System_String_o *)StringLiteral_10360/*"OnSelect"*/, v8, 1, 0);
    }
  }
}


void UIForwardEvents__OnSubmit(UIForwardEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_5974FE9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10370/*"OnSubmit"*/);
    byte_5974FE9 = 1;
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
        sub_2213CDC(0, v4);
      UnityEngine_GameObject__SendMessage(v5, (System_String_o *)StringLiteral_10370/*"OnSubmit"*/, 1, 0);
    }
  }
}