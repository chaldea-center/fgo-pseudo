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
    sub_1C942F0(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


System_Collections_IEnumerator_o *DebugAttackCardSelectComponent__CreateListCoroutine(
        DebugAttackCardSelectComponent_o *this,
        System_Collections_Generic_List_string__o *nameList,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2DE63 & 1) == 0 )
  {
    sub_1C94098(&DebugAttackCardSelectComponent__CreateListCoroutine_d__6_TypeInfo);
    byte_4D2DE63 = 1;
  }
  v5 = sub_1C942E4(DebugAttackCardSelectComponent__CreateListCoroutine_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = nameList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)nameList, v12, v13, v14, v15, v16, v17);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w21
  UnityEngine_Object_o *v16; // x22
  UIPanel_o *v17; // x21
  const MethodInfo *v18; // x2
  System_Collections_IEnumerator_o *ListCoroutine; // x1

  if ( (byte_4D2DE62 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DE62 = 1;
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
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.actionCallback,
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
        v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_72110972(v16, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.grid;
        ++v15;
      }
      while ( gameObject );
    }
LABEL_22:
    sub_1C942F0(gameObject, v8);
  }
LABEL_17:
  gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
  this->fields.isListCreate = 1;
  if ( !gameObject )
    goto LABEL_22;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  v17 = (UIPanel_o *)gameObject;
  if ( !byte_4D25DF9 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector2_TypeInfo);
    byte_4D25DF9 = 1;
  }
  if ( !v17 )
    goto LABEL_22;
  UIPanel__set_clipOffset(v17, UnityEngine_Vector2_TypeInfo->static_fields->zeroVector, 0);
  ListCoroutine = DebugAttackCardSelectComponent__CreateListCoroutine(this, nameList, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
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
    sub_1C942F0(0, v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *v8; // x19
  int32_t _1__state; // w8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  struct System_Collections_Generic_List_string__o *nameList; // x8
  struct DebugAttackCardSelectComponent_o *_4__this; // x20
  int32_t v14; // w21
  Il2CppObject *baseCell; // x23
  UnityEngine_Transform_o *transform; // x24
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *v17; // x23
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *v18; // x24
  DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *v19; // x24
  DebugAttackCardSelectCellComponent_o *v20; // x23
  Il2CppObject *Item; // x24
  System_Action_T1__T2__o *v22; // x25
  const MethodInfo *v23; // x4

  v8 = this;
  if ( (byte_4D2DE64 & 1) == 0 )
  {
    sub_1C94098(&System_Action_int__string__TypeInfo);
    sub_1C94098(&Method_DebugAttackCardSelectComponent_TapAttackCardSelectCallback__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_DebugAttackCardSelectCellComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DE64 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    nameList = v8->fields.nameList;
    v8->fields.__1__state = -1;
    if ( !nameList || !_4__this )
      goto LABEL_27;
    v14 = 0;
    while ( v14 < nameList->fields._size )
    {
      this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)_4__this->fields.grid;
      if ( this )
      {
        baseCell = (Il2CppObject *)_4__this->fields.baseCell;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)UnityEngine_Object__Instantiate_object__52598436(
                                                                               baseCell,
                                                                               transform,
                                                                               (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
        if ( this )
        {
          v17 = this;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)UnityEngine_GameObject__get_transform(
                                                                                 (UnityEngine_GameObject_o *)v17,
                                                                                 0);
          v18 = this;
          if ( !byte_4D25F19 )
          {
            this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
            byte_4D25F19 = 1;
          }
          if ( v18 )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)v18,
              UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
              0);
            this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)UnityEngine_GameObject__get_transform(
                                                                                   (UnityEngine_GameObject_o *)v17,
                                                                                   0);
            v19 = this;
            if ( !byte_4D25F1E )
            {
              this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
              byte_4D25F1E = 1;
            }
            if ( v19 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v19,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0);
              this = (DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                     (UnityEngine_GameObject_o *)v17,
                                                                                     (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_DebugAttackCardSelectCellComponent___);
              if ( v8->fields.nameList )
              {
                v20 = (DebugAttackCardSelectCellComponent_o *)this;
                Item = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)v8->fields.nameList,
                         v14,
                         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
                v22 = (System_Action_T1__T2__o *)sub_1C942E4(System_Action_int__string__TypeInfo);
                System_Action_int__object____ctor(
                  v22,
                  (Il2CppObject *)_4__this,
                  Method_DebugAttackCardSelectComponent_TapAttackCardSelectCallback__,
                  0);
                if ( v20 )
                {
                  DebugAttackCardSelectCellComponent__Set(
                    v20,
                    v14,
                    (System_String_o *)Item,
                    (System_Action_int__string__o *)v22,
                    v23);
                  nameList = v8->fields.nameList;
                  ++v14;
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
      sub_1C942F0(this, method);
    ((void (__fastcall *)(DebugAttackCardSelectComponent__CreateListCoroutine_d__6_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
      this,
      this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
  }
  else if ( !_1__state )
  {
    v8->fields.__2__current = 0;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = -1;
    sub_1C9403C(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_DebugAttackCardSelectComponent__CreateListCoroutine_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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