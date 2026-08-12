void DebugBuffTypeSelectComponent___ctor(DebugBuffTypeSelectComponent_o *this, const MethodInfo *method)
{
  Il2CppType *v3; // x20
  __int64 v4; // x1
  System_Type_o *TypeFromHandle; // x20
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  struct System_Collections_Generic_List_BuffList_TYPE__o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5971E57 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_BuffList_TYPE___);
    sub_2213A60(&BuffList_TYPE_var);
    byte_5971E57 = 1;
  }
  v3 = BuffList_TYPE_var;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, method);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v3, 0);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v4);
  Values = System_Enum__GetValues(TypeFromHandle, 0);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                              (System_Collections_IEnumerable_o *)Values,
                                                              (const MethodInfo_3868A20 *)Method_System_Linq_Enumerable_Cast_BuffList_TYPE___);
  v8 = (struct System_Collections_Generic_List_BuffList_TYPE__o *)System_Linq_Enumerable__ToList_Int32Enum_(
                                                                    v7,
                                                                    (const MethodInfo_38A0BF0 *)Method_System_Linq_Enumerable_ToList_BuffList_TYPE___);
  this->fields.buffList = v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.buffList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugBuffTypeSelectComponent__Close(DebugBuffTypeSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
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
  if ( (byte_5971E56 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BuffList_TYPE__TypeInfo);
    sub_2213A60(&Method_DebugBuffTypeSelectComponent_TapBuffTypeSelectCallback__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_DebugBuffTypeSelectCellComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_BuffList_TYPE__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BuffList_TYPE__get_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (DebugBuffTypeSelectComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971E56 = 1;
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
                                               (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
          if ( !byte_5969AE0 )
          {
            this = (DebugBuffTypeSelectComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE0 = 1;
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
            if ( !byte_5969AE5 )
            {
              this = (DebugBuffTypeSelectComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
              byte_5969AE5 = 1;
            }
            if ( v9 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v9,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0);
              this = (DebugBuffTypeSelectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)v6,
                                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_DebugBuffTypeSelectCellComponent___);
              if ( v2->fields.buffList )
              {
                v10 = (DebugBuffTypeSelectCellComponent_o *)this;
                Item = System_Collections_Generic_List_Int32Enum___get_Item(
                         (System_Collections_Generic_List_T__o *)v2->fields.buffList,
                         v4,
                         (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_BuffList_TYPE__get_Item__);
                v12 = (System_Action_T__o *)sub_2213CCC(System_Action_BuffList_TYPE__TypeInfo);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(gameObject, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.callback = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callback, (int32_t)callback, v7, v8, v9, v10, v11, v12);
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
    sub_2213CDC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}