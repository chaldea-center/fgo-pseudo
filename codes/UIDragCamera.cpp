void UIDragCamera___ctor(UIDragCamera_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragCamera__Awake(UIDragCamera_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_draggableCamera; // x20
  UnityEngine_Object_o *draggableCamera; // x21
  UnityEngine_GameObject_o *gameObject; // x19
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C47571 & 1) == 0 )
  {
    sub_1C37058(&Method_NGUITools_FindInParents_UIDraggableCamera___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47571 = 1;
  }
  p_draggableCamera = (CGThumbnailListItem_o *)&this->fields.draggableCamera;
  draggableCamera = (UnityEngine_Object_o *)this->fields.draggableCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(draggableCamera, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    v6 = NGUITools__FindInParents_object_(
           gameObject,
           (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIDraggableCamera___);
    p_draggableCamera->klass = (CGThumbnailListItem_c *)v6;
    sub_1C36FFC(p_draggableCamera, (int32_t)v6, v7, v8);
  }
}


void UIDragCamera__OnDrag(UIDragCamera_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *draggableCamera; // x20
  const MethodInfo *v8; // x1
  UIDraggableCamera_o *v9; // x0
  UnityEngine_Vector2_o v10; // 0:s0.4,4:s1.4

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4C47573 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47573 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49345096(gameObject, 0) )
    {
      draggableCamera = (UnityEngine_Object_o *)this->fields.draggableCamera;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(draggableCamera, 0, 0) )
      {
        v9 = this->fields.draggableCamera;
        if ( !v9 )
          sub_1C372B4(0);
        v10.fields.x = x;
        v10.fields.y = y;
        UIDraggableCamera__Drag(v9, v10, v8);
      }
    }
  }
}


void UIDragCamera__OnPress(UIDragCamera_o *this, bool isPressed, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *draggableCamera; // x21
  const MethodInfo *v7; // x2
  UIDraggableCamera_o *v8; // x0

  if ( (byte_4C47572 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47572 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49345096(gameObject, 0) )
    {
      draggableCamera = (UnityEngine_Object_o *)this->fields.draggableCamera;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(draggableCamera, 0, 0) )
      {
        v8 = this->fields.draggableCamera;
        if ( !v8 )
          sub_1C372B4(0);
        UIDraggableCamera__Press(v8, isPressed, v7);
      }
    }
  }
}


void UIDragCamera__OnScroll(UIDragCamera_o *this, float delta, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *draggableCamera; // x20
  const MethodInfo *v7; // x1
  UIDraggableCamera_o *v8; // x0

  if ( (byte_4C47574 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47574 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49345096(gameObject, 0) )
    {
      draggableCamera = (UnityEngine_Object_o *)this->fields.draggableCamera;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(draggableCamera, 0, 0) )
      {
        v8 = this->fields.draggableCamera;
        if ( !v8 )
          sub_1C372B4(0);
        UIDraggableCamera__Scroll(v8, delta, v7);
      }
    }
  }
}