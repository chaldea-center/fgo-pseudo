void UIDragCamera___ctor(UIDragCamera_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragCamera__Awake(UIDragCamera_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_draggableCamera; // x19
  UnityEngine_Object_o *draggableCamera; // x21
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593CCD6 & 1) == 0 )
  {
    sub_21FFC50(&Method_NGUITools_FindInParents_UIDraggableCamera___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCD6 = 1;
  }
  p_draggableCamera = (MissionNaviTransitionBoardItem_o *)&this->fields.draggableCamera;
  draggableCamera = (UnityEngine_Object_o *)this->fields.draggableCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(draggableCamera, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
    v7 = NGUITools__FindInParents_object_(
           gameObject,
           (const MethodInfo_38BD680 *)Method_NGUITools_FindInParents_UIDraggableCamera___);
    p_draggableCamera->klass = (MissionNaviTransitionBoardItem_c *)v7;
    sub_21FFBF4(p_draggableCamera, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  }
}


void UIDragCamera__OnDrag(UIDragCamera_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *draggableCamera; // x20
  const MethodInfo *v10; // x1
  UIDraggableCamera_o *v11; // x0
  UnityEngine_Vector2_o v12; // 0:s0.4,4:s1.4

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_593CCD8 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCD8 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6);
    if ( NGUITools__GetActive_56206348(gameObject, 0) )
    {
      draggableCamera = (UnityEngine_Object_o *)this->fields.draggableCamera;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(draggableCamera, 0, 0) )
      {
        v11 = this->fields.draggableCamera;
        if ( !v11 )
          sub_21FFECC(0, v10);
        v12.fields.x = x;
        v12.fields.y = y;
        UIDraggableCamera__Drag(v11, v12, v10);
      }
    }
  }
}


void UIDragCamera__OnPress(UIDragCamera_o *this, bool isPressed, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *draggableCamera; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  UIDraggableCamera_o *v11; // x0

  if ( (byte_593CCD7 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCD7 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
    if ( NGUITools__GetActive_56206348(gameObject, 0) )
    {
      draggableCamera = (UnityEngine_Object_o *)this->fields.draggableCamera;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( UnityEngine_Object__op_Inequality(draggableCamera, 0, 0) )
      {
        v11 = this->fields.draggableCamera;
        if ( !v11 )
          sub_21FFECC(0, v9);
        UIDraggableCamera__Press(v11, isPressed, v10);
      }
    }
  }
}


void UIDragCamera__OnScroll(UIDragCamera_o *this, float delta, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *draggableCamera; // x20
  const MethodInfo *v9; // x1
  UIDraggableCamera_o *v10; // x0

  if ( (byte_593CCD9 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCD9 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
    if ( NGUITools__GetActive_56206348(gameObject, 0) )
    {
      draggableCamera = (UnityEngine_Object_o *)this->fields.draggableCamera;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( UnityEngine_Object__op_Inequality(draggableCamera, 0, 0) )
      {
        v10 = this->fields.draggableCamera;
        if ( !v10 )
          sub_21FFECC(0, v9);
        UIDraggableCamera__Scroll(v10, delta, v9);
      }
    }
  }
}