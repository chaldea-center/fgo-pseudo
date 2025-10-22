void DebugBuffSelectComponent___ctor(DebugBuffSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugBuffSelectComponent__Close(DebugBuffSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


System_Collections_IEnumerator_o *DebugBuffSelectComponent__CreateListCoroutine(
        DebugBuffSelectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C58333 & 1) == 0 )
  {
    sub_1C3E564(&DebugBuffSelectComponent__CreateListCoroutine_d__8_TypeInfo);
    byte_4C58333 = 1;
  }
  v3 = sub_1C3E7B0(DebugBuffSelectComponent__CreateListCoroutine_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void DebugBuffSelectComponent__Open(
        DebugBuffSelectComponent_o *this,
        System_Action_int__string__string__int__o *callback,
        bool isFilter,
        int32_t filterBuffType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL4 isListCreate; // w8
  UnityEngine_Transform_o *v14; // x20
  UIPanel_o *v15; // x20
  const MethodInfo *v16; // x1
  System_Collections_IEnumerator_o *ListCoroutine; // x1

  if ( (byte_4C58332 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C58332 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.BaseCell;
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.callback = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callback, (int32_t)callback, v11, v12);
  isListCreate = this->fields.isListCreate;
  this->fields.isFilter = isFilter;
  this->fields.filterBuffType = filterBuffType;
  if ( isListCreate )
    return;
  gameObject = (UnityEngine_GameObject_o *)this->fields.ScrollView;
  this->fields.isListCreate = 1;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
  v14 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C506A1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !v14 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.ScrollView;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  v15 = (UIPanel_o *)gameObject;
  if ( !byte_4C5059A )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    byte_4C5059A = 1;
  }
  if ( !v15 )
LABEL_15:
    sub_1C3E7C0(gameObject, v10);
  UIPanel__set_clipOffset(v15, UnityEngine_Vector2_TypeInfo->static_fields->zeroVector, 0);
  ListCoroutine = DebugBuffSelectComponent__CreateListCoroutine(this, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
}


void DebugBuffSelectComponent__RemoveList(DebugBuffSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *grid; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C58334 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58334 = 1;
  }
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
LABEL_13:
    sub_1C3E7C0(grid, method);
  v4 = 0;
  while ( 1 )
  {
    grid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(grid, 0);
    if ( !grid )
      goto LABEL_13;
    if ( v4 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)grid, 0) )
      break;
    grid = (UnityEngine_Component_o *)this->fields.grid;
    if ( grid )
    {
      grid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(grid, 0);
      if ( grid )
      {
        grid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)grid, v4, 0);
        if ( grid )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(grid, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71341564(gameObject, 0);
          grid = (UnityEngine_Component_o *)this->fields.grid;
          ++v4;
          if ( grid )
            continue;
        }
      }
    }
    goto LABEL_13;
  }
  this->fields.isListCreate = 0;
}


void DebugBuffSelectComponent__TapBuffSelectCallback(
        DebugBuffSelectComponent_o *this,
        int32_t id,
        System_String_o *name,
        System_String_o *detail,
        int32_t buffType,
        const MethodInfo *method)
{
  struct System_Action_int__string__string__int__o *callback; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, int32_t, System_String_o *, System_String_o *, int32_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      id,
      name,
      detail,
      buffType,
      callback->fields.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v9);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void DebugBuffSelectComponent__CreateListCoroutine_d__8___ctor(
        DebugBuffSelectComponent__CreateListCoroutine_d__8_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DebugBuffSelectComponent__CreateListCoroutine_d__8__MoveNext(
        DebugBuffSelectComponent__CreateListCoroutine_d__8_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  DebugBuffSelectComponent__CreateListCoroutine_d__8_o *v4; // x19
  int32_t _1__state; // w8
  struct DebugBuffSelectComponent_o *_4__this; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  System_Object_array *Entitys; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int v12; // w8
  BuffEntity_o *v13; // x8
  Il2CppObject *BaseCell; // x21
  DebugBuffSelectComponent__CreateListCoroutine_d__8_o *v15; // x21
  DebugBuffSelectComponent__CreateListCoroutine_d__8_o *v16; // x22
  DebugBuffSelectComponent__CreateListCoroutine_d__8_o *v17; // x22
  DebugBuffSelectComponent__CreateListCoroutine_d__8_o *v18; // x22
  struct BuffEntity_array *v19; // x8
  __int64 i_5__5; // x9
  BuffEntity_o *v21; // x8
  DebugBuffSelectCellComponent_o *v22; // x21
  System_String_o *name; // x22
  System_String_o *detail; // x23
  int32_t type; // w24
  int32_t id; // w25
  System_Action_T1__T2__T3__T4__o *v27; // x26
  const MethodInfo *v28; // x6
  int32_t interval_5__3; // w9
  int v30; // w8
  struct BuffEntity_array *entList_5__2; // x9
  int max_length; // w10
  CGThumbnailListItem_o *v33; // x19
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  v4 = this;
  if ( (byte_4C58335 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_int__string__string__int__TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C3E564(&Method_DataMasterBase_BuffMaster__BuffEntity__int__getEntitys__);
    sub_1C3E564(&Method_DebugBuffSelectComponent_TapBuffSelectCallback__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_DebugBuffSelectCellComponent___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C58335 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_31;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = -1;
      sub_1C3E508(p__2__current, 0, v2, v3);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)DataManager__GetMasterData_object_(
                                                                         (DataManager_o *)this,
                                                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_BuffMaster___)) == 0 )
  {
LABEL_40:
    sub_1C3E7C0(this, method);
  }
  Entitys = DataMasterBase_object__object__int___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_33B21DC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__getEntitys__);
  v4->fields._entList_5__2 = (struct BuffEntity_array *)Entitys;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._entList_5__2, (int32_t)Entitys, v10, v11);
  v12 = 0;
  v4->fields._i_5__5 = 0;
  *(_QWORD *)&v4->fields._interval_5__3 = 10;
  while ( 1 )
  {
    entList_5__2 = v4->fields._entList_5__2;
    if ( !entList_5__2 || !_4__this )
      goto LABEL_40;
    max_length = entList_5__2->max_length;
    if ( v12 >= max_length )
    {
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)_4__this->fields.grid;
      if ( this )
      {
        ((void (__fastcall *)(DebugBuffSelectComponent__CreateListCoroutine_d__8_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
          this,
          this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
        return 0;
      }
      goto LABEL_40;
    }
    if ( !_4__this->fields.isFilter )
      goto LABEL_44;
    if ( v12 >= (unsigned int)max_length )
      goto LABEL_41;
    v13 = entList_5__2->m_Items[v12];
    if ( !v13 )
      goto LABEL_40;
    if ( v13->fields.type == _4__this->fields.filterBuffType )
    {
LABEL_44:
      BaseCell = (Il2CppObject *)_4__this->fields.BaseCell;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)UnityEngine_Object__Instantiate_object_(
                                                                       BaseCell,
                                                                       (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_40;
      v15 = this;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)v15,
                                                                       0);
      if ( !_4__this->fields.grid )
        goto LABEL_40;
      v16 = this;
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)_4__this->fields.grid,
                                                                       0);
      if ( !v16 )
        goto LABEL_40;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v16, (UnityEngine_Transform_o *)this, 0);
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)v15,
                                                                       0);
      v17 = this;
      if ( !byte_4C506A1 )
      {
        this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A1 = 1;
      }
      if ( !v17 )
        goto LABEL_40;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)v17,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)v15,
                                                                       0);
      v18 = this;
      if ( !byte_4C506A6 )
      {
        this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A6 = 1;
      }
      if ( !v18 )
        goto LABEL_40;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)v18,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0);
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)v15,
                                                                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_DebugBuffSelectCellComponent___);
      v19 = v4->fields._entList_5__2;
      if ( !v19 )
        goto LABEL_40;
      i_5__5 = v4->fields._i_5__5;
      if ( (unsigned int)i_5__5 >= LODWORD(v19->max_length) )
LABEL_41:
        sub_1C3E7C8(this, method);
      v21 = v19->m_Items[i_5__5];
      if ( !v21 )
        goto LABEL_40;
      v22 = (DebugBuffSelectCellComponent_o *)this;
      name = v21->fields.name;
      detail = v21->fields.detail;
      id = v21->fields.id;
      type = v21->fields.type;
      v27 = (System_Action_T1__T2__T3__T4__o *)sub_1C3E7B0(System_Action_int__string__string__int__TypeInfo);
      System_Action_int__object__object__int____ctor(
        v27,
        (Il2CppObject *)_4__this,
        Method_DebugBuffSelectComponent_TapBuffSelectCallback__,
        0);
      if ( !v22 )
        goto LABEL_40;
      DebugBuffSelectCellComponent__Set(
        v22,
        id,
        name,
        detail,
        type,
        (System_Action_int__string__string__int__o *)v27,
        v28);
      interval_5__3 = v4->fields._interval_5__3;
      v30 = v4->fields._cnt_5__4 + 1;
      v4->fields._cnt_5__4 = v30;
      if ( v30 > interval_5__3 )
        break;
    }
LABEL_31:
    v12 = v4->fields._i_5__5 + 1;
    v4->fields._i_5__5 = v12;
  }
  v4->fields._cnt_5__4 = 0;
  this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)_4__this->fields.grid;
  if ( !this )
    goto LABEL_40;
  ((void (__fastcall *)(DebugBuffSelectComponent__CreateListCoroutine_d__8_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
    this,
    this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
  v4->fields.__2__current = 0;
  v33 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C3E508(v33, 0, v34, v35);
  LODWORD(v33[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
  return 1;
}


Il2CppObject *DebugBuffSelectComponent__CreateListCoroutine_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DebugBuffSelectComponent__CreateListCoroutine_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DebugBuffSelectComponent__CreateListCoroutine_d__8__System_Collections_IEnumerator_Reset(
        DebugBuffSelectComponent__CreateListCoroutine_d__8_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_DebugBuffSelectComponent__CreateListCoroutine_d__8_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *DebugBuffSelectComponent__CreateListCoroutine_d__8__System_Collections_IEnumerator_get_Current(
        DebugBuffSelectComponent__CreateListCoroutine_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DebugBuffSelectComponent__CreateListCoroutine_d__8__System_IDisposable_Dispose(
        DebugBuffSelectComponent__CreateListCoroutine_d__8_o *this,
        const MethodInfo *method)
{
  ;
}