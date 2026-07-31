void DebugBuffTypeSelectComponent___ctor(DebugBuffTypeSelectComponent_o *this, const MethodInfo *method)
{
  Il2CppType *v3; // x20
  System_RuntimeTypeHandle_o v4; // x0
  __int64 v5; // x1
  System_Type_o *TypeFromHandle; // x20
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  struct System_Collections_Generic_List_BuffList_TYPE__o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5939C93 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_BuffList_TYPE___);
    sub_21FFC50(&BuffList_TYPE_var);
    byte_5939C93 = 1;
  }
  v3 = BuffList_TYPE_var;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, method);
  v4.fields.value = (intptr_t)v3;
  TypeFromHandle = System_Type__GetTypeFromHandle(v4, 0);
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v5);
  Values = System_Enum__GetValues(TypeFromHandle, 0);
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                              (System_Collections_IEnumerable_o *)Values,
                                                              (const MethodInfo_3835558 *)Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
  v9 = (struct System_Collections_Generic_List_BuffList_TYPE__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                    v8,
                                                                    (const MethodInfo_386D728 *)Method_System_Linq_Enumerable_ToList_BuffList_TYPE___);
  this->fields.buffList = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.buffList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugBuffTypeSelectComponent__Close(DebugBuffTypeSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
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
  if ( (byte_5939C92 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BuffList_TYPE__TypeInfo);
    sub_21FFC50(&Method_DebugBuffTypeSelectComponent_TapBuffTypeSelectCallback__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_DebugBuffTypeSelectCellComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_BuffList_TYPE__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BuffList_TYPE__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (DebugBuffTypeSelectComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939C92 = 1;
  }
  buffList = v2->fields.buffList;
  if ( !buffList )
    goto LABEL_20;
  v4 = 0;
  while ( v4 < buffList->fields._size )
  {
    BaseCell = (Il2CppObject *)v2->fields.BaseCell;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (DebugBuffTypeSelectComponent_o *)UnityEngine_Object__Instantiate_object_(
                                               BaseCell,
                                               (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
          if ( !byte_5931940 )
          {
            this = (DebugBuffTypeSelectComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931940 = 1;
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
            if ( !byte_5931945 )
            {
              this = (DebugBuffTypeSelectComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
              byte_5931945 = 1;
            }
            if ( v9 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v9,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0);
              this = (DebugBuffTypeSelectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)v6,
                                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_DebugBuffTypeSelectCellComponent___);
              if ( v2->fields.buffList )
              {
                v10 = (DebugBuffTypeSelectCellComponent_o *)this;
                Item = System_Collections_Generic_List_Int32Enum___get_Item(
                         (System_Collections_Generic_List_T__o *)v2->fields.buffList,
                         v4,
                         (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_BuffList_TYPE__get_Item__);
                v12 = (System_Action_T__o *)sub_21FFEBC(System_Action_BuffList_TYPE__TypeInfo);
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
    goto LABEL_20;
  }
  this = (DebugBuffTypeSelectComponent_o *)v2->fields.grid;
  if ( !this )
LABEL_20:
    sub_21FFECC(this, method);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.BaseCell) == 0) )
    sub_21FFECC(gameObject, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.callback = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callback, (int32_t)callback, v7, v8, v9, v10, v11, v12);
  if ( !this->fields.isListCreate )
  {
    this->fields.isListCreate = 1;
    DebugBuffTypeSelectComponent__CreateListCoroutine(this, v13);
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
    sub_21FFECC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}