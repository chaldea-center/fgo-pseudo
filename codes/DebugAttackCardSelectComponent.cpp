void DebugAttackCardSelectComponent___ctor(DebugAttackCardSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugAttackCardSelectComponent__Close(DebugAttackCardSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


System_Collections_IEnumerator_o *DebugAttackCardSelectComponent__CreateListCoroutine(
        DebugAttackCardSelectComponent_o *this,
        System_Collections_Generic_List_string__o *nameList,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5939C8A & 1) == 0 )
  {
    sub_21FFC50(&DebugAttackCardSelectComponent__CreateListCoroutine_d__6_TypeInfo);
    byte_5939C8A = 1;
  }
  v5 = sub_21FFEBC(DebugAttackCardSelectComponent__CreateListCoroutine_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = nameList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)nameList, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void DebugAttackCardSelectComponent__Open(
        DebugAttackCardSelectComponent_o *this,
        System_Action_int__string__o *callback,
        System_Collections_Generic_List_string__o *nameList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // w21
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x22
  UIPanel_o *v18; // x21
  const MethodInfo *v19; // x2
  System_Collections_IEnumerator_o *ListCoroutine; // x1

  if ( (byte_5939C89 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939C89 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.baseCell;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.actionCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.actionCallback,
    (int32_t)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( this->fields.isListCreate )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.grid;
    if ( gameObject )
    {
      v15 = 0;
      do
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0);
        if ( !gameObject )
          break;
        if ( v15 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0) )
          goto LABEL_17;
        gameObject = (UnityEngine_GameObject_o *)this->fields.grid;
        if ( !gameObject )
          break;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0);
        if ( !gameObject )
          break;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   v15,
                                                   0);
        if ( !gameObject )
          break;
        v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
        UnityEngine_Object__Destroy_83246496(v17, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.grid;
        ++v15;
      }
      while ( gameObject );
    }
LABEL_16:
    sub_21FFECC(gameObject, v8);
  }
LABEL_17:
  gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
  this->fields.isListCreate = 1;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  v18 = (UIPanel_o *)gameObject;
  if ( !byte_5931820 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
  }
  if ( !v18 )
    goto LABEL_16;
  UIPanel__set_clipOffset(v18, UnityEngine_Vector2_TypeInfo->static_fields->zeroVector, 0);
  ListCoroutine = DebugAttackCardSelectComponent__CreateListCoroutine(this, nameList, v19);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
}


void DebugAttackCardSelectComponent__TapAttackCardSelectCallback(
        DebugAttackCardSelectComponent_o *this,
        int32_t selectIdx,
        System_String_o *selectName,
        const MethodInfo *method)
{
  struct System_Action_int__string__o *actionCallback; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
    ((void (__fastcall *)(intptr_t, int32_t, System_String_o *, intptr_t))actionCallback->fields.invoke_impl)(
      actionCallback->fields.method_code,
      selectIdx,
      selectName,
      actionCallback->fields.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v7);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void DebugAttackCardSelectComponent__CreateListCoroutine_d__6___ctor(
        DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DebugAttackCardSelectComponent__CreateListCoroutine_d__6__MoveNext(
        DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *v8; // x19
  int _1__state; // w20
  struct System_Collections_Generic_List_string__o *nameList; // x8
  struct DebugAttackCardSelectComponent_o *_4__this; // x20
  int32_t v12; // w21
  Il2CppObject *baseCell; // x23
  __int64 v14; // x1
  UnityEngine_Transform_o *transform; // x24
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *v16; // x23
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *v17; // x24
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *v18; // x24
  DebugAttackCardSelectCellComponent_o *v19; // x23
  Il2CppObject *Item; // x24
  System_Action_T1__T2__o *v21; // x25
  const MethodInfo *v22; // x4
  MissionNaviTransitionBoardItem_o *p__2__current; // x19

  v8 = this;
  if ( (byte_5939C8B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__string__TypeInfo);
    sub_21FFC50(&Method_DebugAttackCardSelectComponent_TapAttackCardSelectCallback__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_DebugAttackCardSelectCellComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939C8B = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = v8->fields.__4__this;
      nameList = v8->fields.nameList;
      v8->fields.__1__state = -1;
      if ( !nameList )
        goto LABEL_22;
      v12 = 0;
      while ( v12 < nameList->fields._size )
      {
        if ( _4__this )
        {
          this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)_4__this->fields.grid;
          if ( this )
          {
            baseCell = (Il2CppObject *)_4__this->fields.baseCell;
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
            this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)UnityEngine_Object__Instantiate_object__59506996(
                                                                                   baseCell,
                                                                                   transform,
                                                                                   (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
            if ( this )
            {
              v16 = this;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)UnityEngine_GameObject__get_transform(
                                                                                     (UnityEngine_GameObject_o *)v16,
                                                                                     0);
              v17 = this;
              if ( !byte_5931940 )
              {
                this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
                byte_5931940 = 1;
              }
              if ( v17 )
              {
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)v17,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0);
                this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)UnityEngine_GameObject__get_transform(
                                                                                       (UnityEngine_GameObject_o *)v16,
                                                                                       0);
                v18 = this;
                if ( !byte_5931945 )
                {
                  this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
                  byte_5931945 = 1;
                }
                if ( v18 )
                {
                  UnityEngine_Transform__set_localScale(
                    (UnityEngine_Transform_o *)v18,
                    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                    0);
                  this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                         (UnityEngine_GameObject_o *)v16,
                                                                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_DebugAttackCardSelectCellComponent___);
                  if ( v8->fields.nameList )
                  {
                    v19 = (DebugAttackCardSelectCellComponent_o *)this;
                    Item = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)v8->fields.nameList,
                             v12,
                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
                    v21 = (System_Action_T1__T2__o *)sub_21FFEBC(System_Action_int__string__TypeInfo);
                    System_Action_int__object____ctor(
                      v21,
                      (Il2CppObject *)_4__this,
                      Method_DebugAttackCardSelectComponent_TapAttackCardSelectCallback__,
                      0);
                    if ( v19 )
                    {
                      DebugAttackCardSelectCellComponent__Set(
                        v19,
                        v12,
                        (System_String_o *)Item,
                        (System_Action_int__string__o *)v21,
                        v22);
                      nameList = v8->fields.nameList;
                      ++v12;
                      if ( nameList )
                        continue;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_22;
      }
      if ( !_4__this
        || (this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)_4__this->fields.grid) == 0 )
      {
LABEL_22:
        sub_21FFECC(this, method);
      }
      ((void (__fastcall *)(DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
        this,
        this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
      _1__state = 1;
    }
  }
  else
  {
    v8->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    p__2__current[-1].fields._BoardType_k__BackingField = -1;
    sub_21FFBF4(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
}


Il2CppObject *DebugAttackCardSelectComponent__CreateListCoroutine_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DebugAttackCardSelectComponent__CreateListCoroutine_d__6__System_Collections_IEnumerator_Reset(
        DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_DebugAttackCardSelectComponent__CreateListCoroutine_d__6_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *DebugAttackCardSelectComponent__CreateListCoroutine_d__6__System_Collections_IEnumerator_get_Current(
        DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DebugAttackCardSelectComponent__CreateListCoroutine_d__6__System_IDisposable_Dispose(
        DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *this,
        const MethodInfo *method)
{
  ;
}