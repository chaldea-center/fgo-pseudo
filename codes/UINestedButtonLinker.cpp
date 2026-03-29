void UINestedButtonLinker___ctor(UINestedButtonLinker_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D322B3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D322B3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.nestedGameObjects = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.nestedGameObjects, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UINestedButtonLinker__Awake(UINestedButtonLinker_o *this, const MethodInfo *method)
{
  UINestedButtonLinker_o *v2; // x19
  struct UnityEngine_BoxCollider_array *nestedBoxColliders; // x21
  int max_length; // w8
  unsigned int v5; // w22
  System_Collections_Generic_List_object__o *nestedGameObjects; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  UINestedButtonLinker_o *v16; // x1
  Il2CppClass **v17; // x0

  v2 = this;
  if ( (byte_4D322AF & 1) == 0 )
  {
    this = (UINestedButtonLinker_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4D322AF = 1;
  }
  nestedBoxColliders = v2->fields.nestedBoxColliders;
  if ( !nestedBoxColliders )
    goto LABEL_15;
  max_length = nestedBoxColliders->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C93D34(this);
      this = (UINestedButtonLinker_o *)nestedBoxColliders->m_Items[v5];
      if ( !this )
        break;
      nestedGameObjects = (System_Collections_Generic_List_object__o *)v2->fields.nestedGameObjects;
      this = (UINestedButtonLinker_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !nestedGameObjects )
        break;
      items = nestedGameObjects->fields._items;
      v14 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++nestedGameObjects->fields._version;
      if ( !items )
        break;
      size = nestedGameObjects->fields._size;
      v16 = this;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          nestedGameObjects,
          (Il2CppObject *)this,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        nestedGameObjects->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
      }
      max_length = nestedBoxColliders->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_15:
    sub_1C93D2C(this, method);
  }
}


void UINestedButtonLinker__OnDisable(UINestedButtonLinker_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UINestedButtonLinker__SetOtherBoxCollidersEnabled(this, 1, v2);
}


void UINestedButtonLinker__OnDragOut(
        UINestedButtonLinker_o *this,
        UnityEngine_GameObject_o *draggedObject,
        const MethodInfo *method)
{
  UICamera_c *v4; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *pressed; // x20
  UnityEngine_Object_o *targetButton; // x21
  UnityEngine_Object_o *gameObject; // x21
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *nestedGameObjects; // x0

  if ( (byte_4D322B1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D322B1 = 1;
  }
  v4 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v4 = UICamera_TypeInfo;
  }
  currentTouch = v4->static_fields->currentTouch;
  if ( currentTouch )
    pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
  else
    pressed = 0;
  targetButton = (UnityEngine_Object_o *)this->fields.targetButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetButton, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pressed, 0, 0) )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(pressed, gameObject, 0) )
        goto LABEL_19;
      nestedGameObjects = (System_Collections_Generic_List_object__o *)this->fields.nestedGameObjects;
      if ( !nestedGameObjects )
        goto LABEL_22;
      if ( System_Collections_Generic_List_object___Contains(
             nestedGameObjects,
             (Il2CppObject *)pressed,
             (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_GameObject__Contains__) )
      {
LABEL_19:
        nestedGameObjects = (System_Collections_Generic_List_object__o *)this->fields.targetButton;
        if ( nestedGameObjects )
        {
          ((void (__fastcall *)(System_Collections_Generic_List_object__o *, _QWORD, _QWORD, const MethodInfo *))nestedGameObjects->klass->vtable._14_CopyTo.methodPtr)(
            nestedGameObjects,
            0,
            0,
            nestedGameObjects->klass->vtable._14_CopyTo.method);
          return;
        }
LABEL_22:
        sub_1C93D2C(nestedGameObjects, v9);
      }
    }
  }
}


void UINestedButtonLinker__OnDragOver(
        UINestedButtonLinker_o *this,
        UnityEngine_GameObject_o *draggedObject,
        const MethodInfo *method)
{
  UICamera_c *v4; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *pressed; // x20
  UnityEngine_Object_o *targetButton; // x21
  UnityEngine_Object_o *gameObject; // x21
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *nestedGameObjects; // x0

  if ( (byte_4D322B0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D322B0 = 1;
  }
  v4 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v4 = UICamera_TypeInfo;
  }
  currentTouch = v4->static_fields->currentTouch;
  if ( currentTouch )
    pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
  else
    pressed = 0;
  targetButton = (UnityEngine_Object_o *)this->fields.targetButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetButton, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pressed, 0, 0) )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(pressed, gameObject, 0) )
        goto LABEL_19;
      nestedGameObjects = (System_Collections_Generic_List_object__o *)this->fields.nestedGameObjects;
      if ( !nestedGameObjects )
        goto LABEL_22;
      if ( System_Collections_Generic_List_object___Contains(
             nestedGameObjects,
             (Il2CppObject *)pressed,
             (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_GameObject__Contains__) )
      {
LABEL_19:
        nestedGameObjects = (System_Collections_Generic_List_object__o *)this->fields.targetButton;
        if ( nestedGameObjects )
        {
          ((void (__fastcall *)(System_Collections_Generic_List_object__o *, __int64, _QWORD, const MethodInfo *))nestedGameObjects->klass->vtable._14_CopyTo.methodPtr)(
            nestedGameObjects,
            2,
            0,
            nestedGameObjects->klass->vtable._14_CopyTo.method);
          return;
        }
LABEL_22:
        sub_1C93D2C(nestedGameObjects, v9);
      }
    }
  }
}


void UINestedButtonLinker__OnPress(UINestedButtonLinker_o *this, bool isPressed, const MethodInfo *method)
{
  UINestedButtonLinker__SetOtherBoxCollidersEnabled(this, !isPressed, method);
}


void UINestedButtonLinker__SetOtherBoxCollidersEnabled(
        UINestedButtonLinker_o *this,
        bool enable,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct UnityEngine_BoxCollider_array *nestedBoxColliders; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
  bool v10; // w19
  UnityEngine_Object_o *v11; // x20

  if ( (byte_4D322B2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D322B2 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.nestedBoxColliders, 0);
  if ( !IsNullOrEmpty )
  {
    nestedBoxColliders = this->fields.nestedBoxColliders;
    if ( !nestedBoxColliders )
LABEL_16:
      sub_1C93D2C(IsNullOrEmpty, v6);
    max_length = nestedBoxColliders->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      v10 = enable;
      do
      {
        if ( v9 >= (unsigned int)max_length )
          sub_1C93D34(IsNullOrEmpty);
        v11 = (UnityEngine_Object_o *)nestedBoxColliders->m_Items[v9];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        IsNullOrEmpty = UnityEngine_Object__op_Inequality(v11, 0, 0);
        if ( IsNullOrEmpty )
        {
          if ( !v11 )
            goto LABEL_16;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v11, v10, 0);
        }
        LODWORD(max_length) = nestedBoxColliders->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)max_length );
    }
  }
}