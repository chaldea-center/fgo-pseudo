void EventInfoCondenseLabel___ctor(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4CB66DC & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB66DC = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.beforeText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.beforeText, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoCondenseLabel__SetCondensedScale(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  UILabel_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UILabel_o *v8; // x8
  struct System_String_o *mText; // x1

  if ( (byte_4CB66DB & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB66DB = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UILabel_o *)UnityEngine_Object__op_Inequality(label, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 && this->fields.condensedWidth >= 1 )
  {
    v8 = this->fields.label;
    if ( !v8
      || (mText = v8->fields.mText,
          this->fields.beforeText = mText,
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.beforeText, (int32_t)mText, v6, v7),
          (v4 = this->fields.label) == 0) )
    {
      sub_1C6BC60(v4, v5);
    }
    UILabel__SetCondensedScale(v4, this->fields.condensedWidth, 0, 0);
  }
}


void EventInfoCondenseLabel__Start(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4CB66D9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_4CB66D9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  this->fields.label = (struct UILabel_o *)Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.label, (int32_t)Component_object, v6, v7);
  EventInfoCondenseLabel__SetCondensedScale(this, v8);
}


void EventInfoCondenseLabel__Update(EventInfoCondenseLabel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UILabel_o *v6; // x8
  const MethodInfo *v7; // x1

  if ( (byte_4CB66DA & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB66DA = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(label, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.label;
    if ( !v6 )
      sub_1C6BC60(v4, v5);
    if ( System_String__op_Inequality(this->fields.beforeText, v6->fields.mText, 0) )
      EventInfoCondenseLabel__SetCondensedScale(this, v7);
  }
}