void EventInfoCondenseLabel___ctor(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_593990B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593990B = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.beforeText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.beforeText, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoCondenseLabel__SetCondensedScale(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  UILabel_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UILabel_o *v12; // x8
  struct System_String_o *mText; // x1

  if ( (byte_593990A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593990A = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = (UILabel_o *)UnityEngine_Object__op_Inequality(label, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 && this->fields.condensedWidth >= 1 )
  {
    v12 = this->fields.label;
    if ( !v12
      || (mText = v12->fields.mText,
          this->fields.beforeText = mText,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.beforeText,
            (int32_t)mText,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          (v4 = this->fields.label) == 0) )
    {
      sub_21FFECC(v4, v5);
    }
    UILabel__SetCondensedScale(v4, this->fields.condensedWidth, 0, 0);
  }
}


void EventInfoCondenseLabel__Start(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1

  if ( (byte_5939908 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_5939908 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this->fields.label = (struct UILabel_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.label,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  EventInfoCondenseLabel__SetCondensedScale(this, v12);
}


void EventInfoCondenseLabel__Update(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UILabel_o *v6; // x8
  const MethodInfo *v7; // x1

  if ( (byte_5939909 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939909 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(label, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.label;
    if ( !v6 )
      sub_21FFECC(v4, v5);
    if ( System_String__op_Inequality(this->fields.beforeText, v6->fields.mText, 0) )
      EventInfoCondenseLabel__SetCondensedScale(this, v7);
  }
}