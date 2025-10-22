void DebugBuffTypeSelectComponent___ctor(DebugBuffTypeSelectComponent_o *this, const MethodInfo *method)
{
  Il2CppType *v3; // x20
  System_RuntimeTypeHandle_o v4; // x0
  System_Type_o *TypeFromHandle; // x20
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  struct System_Collections_Generic_List_BuffList_TYPE__o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C58338 & 1) == 0 )
  {
    sub_1C3E564(&System_Enum_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_BuffList_TYPE___);
    sub_1C3E564(&BuffList_TYPE_var);
    sub_1C3E564(&System_Type_TypeInfo);
    byte_4C58338 = 1;
  }
  v3 = BuffList_TYPE_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = (intptr_t)v3;
  TypeFromHandle = System_Type__GetTypeFromHandle(v4, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                              (System_Collections_IEnumerable_o *)Values,
                                                              (const MethodInfo_3108198 *)Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
  v8 = (struct System_Collections_Generic_List_BuffList_TYPE__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                    v7,
                                                                    (const MethodInfo_313DC94 *)Method_System_Linq_Enumerable_ToList_BuffList_TYPE___);
  this->fields.buffList = v8;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.buffList, (int32_t)v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugBuffTypeSelectComponent__Close(DebugBuffTypeSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void DebugBuffTypeSelectComponent__CreateListCoroutine(DebugBuffTypeSelectComponent_o *this, const MethodInfo *method)
{
  DebugBuffTypeSelectComponent_o *v2; // x19
  struct System_Collections_Generic_List_BuffList_TYPE__o *buffList; // x8
  int32_t v4; // w20
  Il2CppObject *BaseCell; // x22
  DebugBuffTypeSelectComponent_o *v6; // x22
  DebugBuffTypeSelectComponent_o *v7; // x23
  DebugBuffTypeSelectComponent_o *v8; // x23
  DebugBuffTypeSelectComponent_o *v9; // x23
  DebugBuffTypeSelectCellComponent_o *v10; // x22
  int32_t Item; // w23
  System_Action_T__o *v12; // x24
  const MethodInfo *v13; // x3

  v2 = this;
  if ( (byte_4C58337 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BuffList_TYPE__TypeInfo);
    sub_1C3E564(&Method_DebugBuffTypeSelectComponent_TapBuffTypeSelectCallback__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_DebugBuffTypeSelectCellComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BuffList_TYPE__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BuffList_TYPE__get_Item__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (DebugBuffTypeSelectComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58337 = 1;
  }
  buffList = v2->fields.buffList;
  if ( !buffList )
    goto LABEL_23;
  v4 = 0;
  while ( v4 < buffList->fields._size )
  {
    BaseCell = (Il2CppObject *)v2->fields.BaseCell;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (DebugBuffTypeSelectComponent_o *)UnityEngine_Object__Instantiate_object_(
                                               BaseCell,
                                               (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v6 = this;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (DebugBuffTypeSelectComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
      if ( v2->fields.grid )
      {
        v7 = this;
        this = (DebugBuffTypeSelectComponent_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)v2->fields.grid,
                                                   0);
        if ( v7 )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v7, (UnityEngine_Transform_o *)this, 0);
          this = (DebugBuffTypeSelectComponent_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)v6,
                                                     0);
          v8 = this;
          if ( !byte_4C506A1 )
          {
            this = (DebugBuffTypeSelectComponent_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
            byte_4C506A1 = 1;
          }
          if ( v8 )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)v8,
              UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
              0);
            this = (DebugBuffTypeSelectComponent_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)v6,
                                                       0);
            v9 = this;
            if ( !byte_4C506A6 )
            {
              this = (DebugBuffTypeSelectComponent_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
              byte_4C506A6 = 1;
            }
            if ( v9 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v9,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0);
              this = (DebugBuffTypeSelectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)v6,
                                                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_DebugBuffTypeSelectCellComponent___);
              if ( v2->fields.buffList )
              {
                v10 = (DebugBuffTypeSelectCellComponent_o *)this;
                Item = System_Collections_Generic_List_Int32Enum___get_Item(
                         (System_Collections_Generic_List_T__o *)v2->fields.buffList,
                         v4,
                         (const MethodInfo_379A978 *)Method_System_Collections_Generic_List_BuffList_TYPE__get_Item__);
                v12 = (System_Action_T__o *)sub_1C3E7B0(System_Action_BuffList_TYPE__TypeInfo);
                System_Action_Int32Enum____ctor(
                  v12,
                  (Il2CppObject *)v2,
                  Method_DebugBuffTypeSelectComponent_TapBuffTypeSelectCallback__,
                  0);
                if ( v10 )
                {
                  DebugBuffTypeSelectCellComponent__Set(v10, Item, (System_Action_BuffList_TYPE__o *)v12, v13);
                  buffList = v2->fields.buffList;
                  ++v4;
                  if ( buffList )
                    continue;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_23;
  }
  this = (DebugBuffTypeSelectComponent_o *)v2->fields.grid;
  if ( !this )
LABEL_23:
    sub_1C3E7C0(this, method);
  ((void (__fastcall *)(DebugBuffTypeSelectComponent_o *, Il2CppClass *))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass);
}


void DebugBuffTypeSelectComponent__Open(
        DebugBuffTypeSelectComponent_o *this,
        System_Action_BuffList_TYPE__o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.BaseCell) == 0) )
    sub_1C3E7C0(gameObject, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.callback = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callback, (int32_t)callback, v7, v8);
  if ( !this->fields.isListCreate )
  {
    this->fields.isListCreate = 1;
    DebugBuffTypeSelectComponent__CreateListCoroutine(this, v9);
  }
}


void DebugBuffTypeSelectComponent__TapBuffTypeSelectCallback(
        DebugBuffTypeSelectComponent_o *this,
        int32_t buffType,
        const MethodInfo *method)
{
  struct System_Action_BuffList_TYPE__o *callback; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, int32_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      buffType,
      callback->fields.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}