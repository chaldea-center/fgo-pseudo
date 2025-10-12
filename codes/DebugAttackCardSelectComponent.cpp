void DebugAttackCardSelectComponent___ctor(DebugAttackCardSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugAttackCardSelectComponent__Close(DebugAttackCardSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


System_Collections_IEnumerator_o *DebugAttackCardSelectComponent__CreateListCoroutine(
        DebugAttackCardSelectComponent_o *this,
        System_Collections_Generic_List_string__o *nameList,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C38E97 & 1) == 0 )
  {
    sub_1C32C20(&DebugAttackCardSelectComponent__CreateListCoroutine_d__6_TypeInfo);
    byte_4C38E97 = 1;
  }
  v5 = sub_1C32E6C(DebugAttackCardSelectComponent__CreateListCoroutine_d__6_TypeInfo);
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6___ctor(
    (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = nameList;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)nameList, v9, v10);
  return (System_Collections_IEnumerator_o *)v5;
}


void DebugAttackCardSelectComponent__Open(
        DebugAttackCardSelectComponent_o *this,
        System_Action_int__string__o *callback,
        System_Collections_Generic_List_string__o *nameList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w21
  UnityEngine_Object_o *v11; // x22
  UIPanel_o *v12; // x21
  const MethodInfo *v13; // x2
  System_Collections_IEnumerator_o *ListCoroutine; // x1

  if ( (byte_4C38E96 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C38E96 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.baseCell;
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.actionCallback = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.actionCallback, (int32_t)callback, v8, v9);
  if ( this->fields.isListCreate )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.grid;
    if ( gameObject )
    {
      v10 = 0;
      do
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0);
        if ( !gameObject )
          break;
        if ( v10 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0) )
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
                                                   v10,
                                                   0);
        if ( !gameObject )
          break;
        v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71223640(v11, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.grid;
        ++v10;
      }
      while ( gameObject );
    }
LABEL_22:
    sub_1C32E7C(gameObject);
  }
LABEL_17:
  gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
  this->fields.isListCreate = 1;
  if ( !gameObject )
    goto LABEL_22;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  v12 = (UIPanel_o *)gameObject;
  if ( !byte_4C312CA )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
  }
  if ( !v12 )
    goto LABEL_22;
  UIPanel__set_clipOffset(v12, UnityEngine_Vector2_TypeInfo->static_fields->zeroVector, 0);
  ListCoroutine = DebugAttackCardSelectComponent__CreateListCoroutine(this, nameList, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
}


void DebugAttackCardSelectComponent__TapAttackCardSelectCallback(
        DebugAttackCardSelectComponent_o *this,
        int32_t selectIdx,
        System_String_o *selectName,
        const MethodInfo *method)
{
  struct System_Action_int__string__o *actionCallback; // x8
  UnityEngine_GameObject_o *gameObject; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
    ((void (__fastcall *)(intptr_t, int32_t, System_String_o *, intptr_t))actionCallback->fields.invoke_impl)(
      actionCallback->fields.method_code,
      selectIdx,
      selectName,
      actionCallback->fields.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *v4; // x19
  int32_t _1__state; // w8
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  struct System_Collections_Generic_List_string__o *nameList; // x8
  struct DebugAttackCardSelectComponent_o *_4__this; // x20
  int32_t v10; // w21
  Il2CppObject *baseCell; // x23
  UnityEngine_Transform_o *transform; // x24
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *v13; // x23
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *v14; // x24
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *v15; // x24
  DebugAttackCardSelectCellComponent_o *v16; // x23
  Il2CppObject *Item; // x24
  System_Action_T1__T2__o *v18; // x25

  v4 = this;
  if ( (byte_4C38F6C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__string__TypeInfo);
    sub_1C32C20(&Method_DebugAttackCardSelectComponent_TapAttackCardSelectCallback__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_DebugAttackCardSelectCellComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C38F6C = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    nameList = v4->fields.nameList;
    v4->fields.__1__state = -1;
    if ( !nameList || !_4__this )
      goto LABEL_27;
    v10 = 0;
    while ( v10 < nameList->fields._size )
    {
      this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)_4__this->fields.grid;
      if ( this )
      {
        baseCell = (Il2CppObject *)_4__this->fields.baseCell;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)UnityEngine_Object__Instantiate_object__51812484(
                                                                               baseCell,
                                                                               transform,
                                                                               (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
        if ( this )
        {
          v13 = this;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)UnityEngine_GameObject__get_transform(
                                                                                 (UnityEngine_GameObject_o *)v13,
                                                                                 0);
          v14 = this;
          if ( !byte_4C313D1 )
          {
            this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
            byte_4C313D1 = 1;
          }
          if ( v14 )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)v14,
              UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
              0);
            this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)UnityEngine_GameObject__get_transform(
                                                                                   (UnityEngine_GameObject_o *)v13,
                                                                                   0);
            v15 = this;
            if ( !byte_4C313D6 )
            {
              this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
              byte_4C313D6 = 1;
            }
            if ( v15 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v15,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0);
              this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                     (UnityEngine_GameObject_o *)v13,
                                                                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_DebugAttackCardSelectCellComponent___);
              if ( v4->fields.nameList )
              {
                v16 = (DebugAttackCardSelectCellComponent_o *)this;
                Item = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)v4->fields.nameList,
                         v10,
                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
                v18 = (System_Action_T1__T2__o *)sub_1C32E6C(System_Action_int__string__TypeInfo);
                System_Action_int__object____ctor(
                  v18,
                  (Il2CppObject *)_4__this,
                  Method_DebugAttackCardSelectComponent_TapAttackCardSelectCallback__,
                  0);
                if ( v16 )
                {
                  DebugAttackCardSelectCellComponent__Set(
                    v16,
                    v10,
                    (System_String_o *)Item,
                    (System_Action_int__string__o *)v18,
                    0);
                  nameList = v4->fields.nameList;
                  ++v10;
                  if ( nameList )
                    continue;
                }
              }
            }
          }
        }
      }
      goto LABEL_27;
    }
    this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)_4__this->fields.grid;
    if ( !this )
LABEL_27:
      sub_1C32E7C(this);
    ((void (__fastcall *)(DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
      this,
      this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
  }
  else if ( !_1__state )
  {
    v4->fields.__2__current = 0;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = -1;
    sub_1C32BC4(p__2__current, 0, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  return 0;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_DebugAttackCardSelectComponent__CreateListCoroutine_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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