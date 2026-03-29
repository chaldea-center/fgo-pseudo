void UIDragCamera___ctor(UIDragCamera_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragCamera__Awake(UIDragCamera_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_draggableCamera; // x20
  UnityEngine_Object_o *draggableCamera; // x21
  UnityEngine_GameObject_o *gameObject; // x19
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D35072 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIDraggableCamera___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35072 = 1;
  }
  p_draggableCamera = (GrandQuestFolderBoardItem_o *)&this->fields.draggableCamera;
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
           (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIDraggableCamera___);
    p_draggableCamera->klass = (GrandQuestFolderBoardItem_c *)v6;
    sub_1C93A78(p_draggableCamera, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_4D35074 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35074 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_50071416(gameObject, 0) )
    {
      draggableCamera = (UnityEngine_Object_o *)this->fields.draggableCamera;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(draggableCamera, 0, 0) )
      {
        v9 = this->fields.draggableCamera;
        if ( !v9 )
          sub_1C93D2C(0, v8);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  UIDraggableCamera_o *v9; // x0

  if ( (byte_4D35073 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35073 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_50071416(gameObject, 0) )
    {
      draggableCamera = (UnityEngine_Object_o *)this->fields.draggableCamera;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(draggableCamera, 0, 0) )
      {
        v9 = this->fields.draggableCamera;
        if ( !v9 )
          sub_1C93D2C(0, v7);
        UIDraggableCamera__Press(v9, isPressed, v8);
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

  if ( (byte_4D35075 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35075 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_50071416(gameObject, 0) )
    {
      draggableCamera = (UnityEngine_Object_o *)this->fields.draggableCamera;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(draggableCamera, 0, 0) )
      {
        v8 = this->fields.draggableCamera;
        if ( !v8 )
          sub_1C93D2C(0, v7);
        UIDraggableCamera__Scroll(v8, delta, v7);
      }
    }
  }
}