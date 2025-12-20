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
    sub_1C942F0(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


System_Collections_IEnumerator_o *DebugBuffSelectComponent__CreateListCoroutine(
        DebugBuffSelectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2DE67 & 1) == 0 )
  {
    sub_1C94098(&DebugBuffSelectComponent__CreateListCoroutine_d__8_TypeInfo);
    byte_4D2DE67 = 1;
  }
  v3 = sub_1C942E4(DebugBuffSelectComponent__CreateListCoroutine_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  _BOOL4 isListCreate; // w8
  UnityEngine_Transform_o *v18; // x20
  UIPanel_o *v19; // x20
  const MethodInfo *v20; // x1
  System_Collections_IEnumerator_o *ListCoroutine; // x1

  if ( (byte_4D2DE66 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4D2DE66 = 1;
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callback, (int32_t)callback, v11, v12, v13, v14, v15, v16);
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
  v18 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4D25F19 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  if ( !v18 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.ScrollView;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  v19 = (UIPanel_o *)gameObject;
  if ( !byte_4D25DF9 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector2_TypeInfo);
    byte_4D25DF9 = 1;
  }
  if ( !v19 )
LABEL_15:
    sub_1C942F0(gameObject, v10);
  UIPanel__set_clipOffset(v19, UnityEngine_Vector2_TypeInfo->static_fields->zeroVector, 0);
  ListCoroutine = DebugBuffSelectComponent__CreateListCoroutine(this, v20);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
}


void DebugBuffSelectComponent__RemoveList(DebugBuffSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *grid; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4D2DE68 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DE68 = 1;
  }
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
LABEL_13:
    sub_1C942F0(grid, method);
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
          UnityEngine_Object__Destroy_72110972(gameObject, 0);
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
    sub_1C942F0(0, v9);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  DebugBuffSelectComponent__CreateListCoroutine_d__8_o *v8; // x19
  int32_t _1__state; // w8
  struct DebugBuffSelectComponent_o *_4__this; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  System_Object_array *Entitys; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int v20; // w8
  BuffEntity_o *v21; // x8
  Il2CppObject *BaseCell; // x21
  DebugBuffSelectComponent__CreateListCoroutine_d__8_o *v23; // x21
  DebugBuffSelectComponent__CreateListCoroutine_d__8_o *v24; // x22
  DebugBuffSelectComponent__CreateListCoroutine_d__8_o *v25; // x22
  DebugBuffSelectComponent__CreateListCoroutine_d__8_o *v26; // x22
  struct BuffEntity_array *v27; // x8
  __int64 i_5__5; // x9
  BuffEntity_o *v29; // x8
  DebugBuffSelectCellComponent_o *v30; // x21
  System_String_o *name; // x22
  System_String_o *detail; // x23
  int32_t type; // w24
  int32_t id; // w25
  System_Action_T1__T2__T3__T4__o *v35; // x26
  const MethodInfo *v36; // x6
  int32_t interval_5__3; // w9
  int v38; // w8
  struct BuffEntity_array *entList_5__2; // x9
  int max_length; // w10
  GrandQuestFolderBoardItem_o *v41; // x19
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7

  v8 = this;
  if ( (byte_4D2DE69 & 1) == 0 )
  {
    sub_1C94098(&System_Action_int__string__string__int__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C94098(&Method_DataMasterBase_BuffMaster__BuffEntity__int__getEntitys__);
    sub_1C94098(&Method_DebugBuffSelectComponent_TapBuffSelectCallback__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_DebugBuffSelectCellComponent___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DE69 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_31;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
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
  v8->fields.__1__state = -1;
  this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)DataManager__GetMasterData_object_(
                                                                         (DataManager_o *)this,
                                                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BuffMaster___)) == 0 )
  {
LABEL_40:
    sub_1C942F0(this, method);
  }
  Entitys = DataMasterBase_object__object__int___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              (const MethodInfo_345A744 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__getEntitys__);
  v8->fields._entList_5__2 = (struct BuffEntity_array *)Entitys;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._entList_5__2, (int32_t)Entitys, v14, v15, v16, v17, v18, v19);
  v20 = 0;
  v8->fields._i_5__5 = 0;
  *(_QWORD *)&v8->fields._interval_5__3 = 10;
  while ( 1 )
  {
    entList_5__2 = v8->fields._entList_5__2;
    if ( !entList_5__2 || !_4__this )
      goto LABEL_40;
    max_length = entList_5__2->max_length;
    if ( v20 >= max_length )
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
    if ( v20 >= (unsigned int)max_length )
      goto LABEL_41;
    v21 = entList_5__2->m_Items[v20];
    if ( !v21 )
      goto LABEL_40;
    if ( v21->fields.type == _4__this->fields.filterBuffType )
    {
LABEL_44:
      BaseCell = (Il2CppObject *)_4__this->fields.BaseCell;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)UnityEngine_Object__Instantiate_object_(
                                                                       BaseCell,
                                                                       (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !this )
        goto LABEL_40;
      v23 = this;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)v23,
                                                                       0);
      if ( !_4__this->fields.grid )
        goto LABEL_40;
      v24 = this;
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)_4__this->fields.grid,
                                                                       0);
      if ( !v24 )
        goto LABEL_40;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v24, (UnityEngine_Transform_o *)this, 0);
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)v23,
                                                                       0);
      v25 = this;
      if ( !byte_4D25F19 )
      {
        this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
        byte_4D25F19 = 1;
      }
      if ( !v25 )
        goto LABEL_40;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)v25,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)v23,
                                                                       0);
      v26 = this;
      if ( !byte_4D25F1E )
      {
        this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
        byte_4D25F1E = 1;
      }
      if ( !v26 )
        goto LABEL_40;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)v26,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0);
      this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       (UnityEngine_GameObject_o *)v23,
                                                                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_DebugBuffSelectCellComponent___);
      v27 = v8->fields._entList_5__2;
      if ( !v27 )
        goto LABEL_40;
      i_5__5 = v8->fields._i_5__5;
      if ( (unsigned int)i_5__5 >= LODWORD(v27->max_length) )
LABEL_41:
        sub_1C942F8(this);
      v29 = v27->m_Items[i_5__5];
      if ( !v29 )
        goto LABEL_40;
      v30 = (DebugBuffSelectCellComponent_o *)this;
      name = v29->fields.name;
      detail = v29->fields.detail;
      id = v29->fields.id;
      type = v29->fields.type;
      v35 = (System_Action_T1__T2__T3__T4__o *)sub_1C942E4(System_Action_int__string__string__int__TypeInfo);
      System_Action_int__object__object__int____ctor(
        v35,
        (Il2CppObject *)_4__this,
        Method_DebugBuffSelectComponent_TapBuffSelectCallback__,
        0);
      if ( !v30 )
        goto LABEL_40;
      DebugBuffSelectCellComponent__Set(
        v30,
        id,
        name,
        detail,
        type,
        (System_Action_int__string__string__int__o *)v35,
        v36);
      interval_5__3 = v8->fields._interval_5__3;
      v38 = v8->fields._cnt_5__4 + 1;
      v8->fields._cnt_5__4 = v38;
      if ( v38 > interval_5__3 )
        break;
    }
LABEL_31:
    v20 = v8->fields._i_5__5 + 1;
    v8->fields._i_5__5 = v20;
  }
  v8->fields._cnt_5__4 = 0;
  this = (DebugBuffSelectComponent__CreateListCoroutine_d__8_o *)_4__this->fields.grid;
  if ( !this )
    goto LABEL_40;
  ((void (__fastcall *)(DebugBuffSelectComponent__CreateListCoroutine_d__8_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
    this,
    this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
  v8->fields.__2__current = 0;
  v41 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C9403C(v41, 0, v42, v43, v44, v45, v46, v47);
  LODWORD(v41[-1].fields._ClosedMessage_k__BackingField) = 2;
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_DebugBuffSelectComponent__CreateListCoroutine_d__8_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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