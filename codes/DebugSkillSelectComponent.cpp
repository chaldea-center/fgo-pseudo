void DebugSkillSelectComponent___ctor(DebugSkillSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugSkillSelectComponent__Close(DebugSkillSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


System_Collections_IEnumerator_o *DebugSkillSelectComponent__CreateListCoroutine(
        DebugSkillSelectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C38FCD & 1) == 0 )
  {
    sub_1C32C20(&DebugSkillSelectComponent__CreateListCoroutine_d__5_TypeInfo);
    byte_4C38FCD = 1;
  }
  v3 = sub_1C32E6C(DebugSkillSelectComponent__CreateListCoroutine_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void DebugSkillSelectComponent__Open(
        DebugSkillSelectComponent_o *this,
        System_Action_int__string__string__o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  System_Collections_IEnumerator_o *ListCoroutine; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.BaseCell) == 0) )
    sub_1C32E7C(gameObject);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.callback = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callback, (int32_t)callback, v6, v7);
  if ( !this->fields.isListCreate )
  {
    this->fields.isListCreate = 1;
    ListCoroutine = DebugSkillSelectComponent__CreateListCoroutine(this, v8);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
  }
}


void DebugSkillSelectComponent__TapSkillSelectCallback(
        DebugSkillSelectComponent_o *this,
        int32_t id,
        System_String_o *name,
        System_String_o *detail,
        const MethodInfo *method)
{
  struct System_Action_int__string__string__o *callback; // x8
  UnityEngine_GameObject_o *gameObject; // x0

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, int32_t, System_String_o *, System_String_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      id,
      name,
      detail,
      callback->fields.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void DebugSkillSelectComponent__CreateListCoroutine_d__5___ctor(
        DebugSkillSelectComponent__CreateListCoroutine_d__5_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DebugSkillSelectComponent__CreateListCoroutine_d__5__MoveNext(
        DebugSkillSelectComponent__CreateListCoroutine_d__5_o *this,
        const MethodInfo *method)
{
  DebugSkillSelectComponent__CreateListCoroutine_d__5_o *v2; // x19
  int32_t _1__state; // w8
  struct DebugSkillSelectComponent_o *_4__this; // x20
  System_Object_array *Entitys; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int v11; // w8
  Il2CppObject *BaseCell; // x21
  DebugSkillSelectComponent__CreateListCoroutine_d__5_o *v13; // x21
  DebugSkillSelectComponent__CreateListCoroutine_d__5_o *v14; // x22
  DebugSkillSelectComponent__CreateListCoroutine_d__5_o *v15; // x22
  DebugSkillSelectComponent__CreateListCoroutine_d__5_o *v16; // x22
  struct SkillEntity_array *v17; // x8
  System_String_o *monitor; // x22
  __int64 i_5__6; // x9
  SkillEntity_o *v20; // x8
  struct SkillEntity_array *v21; // x8
  __int64 v22; // x9
  DebugSkillSelectCellComponent_o *v23; // x21
  int32_t v24; // w23
  System_String_o *Name; // x24
  System_Action_T1__T2__T3__o *v26; // x25
  const MethodInfo *v27; // x5
  int32_t interval_5__4; // w9
  int v29; // w8
  struct SkillEntity_array *skillEntList_5__2; // x9
  bool result; // w0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4C38FCE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__string__string__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__getEntitys__);
    sub_1C32C20(&Method_DebugSkillSelectComponent_TapSkillSelectCallback__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_DebugSkillSelectCellComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C38FCE = 1;
  }
  entity = 0;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_33;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)DataManager__GetMasterData_object_(
                                                                          (DataManager_o *)this,
                                                                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0
    || (Entitys = DataMasterBase_object__object__int___getEntitys(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    (const MethodInfo_3395ABC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__getEntitys__),
        v2->fields._skillEntList_5__2 = (struct SkillEntity_array *)Entitys,
        sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._skillEntList_5__2, (int32_t)Entitys, v6, v7),
        (this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_43:
    sub_1C32E7C(this);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillDetailMaster___);
  v2->fields._detailMst_5__3 = (struct SkillDetailMaster_o *)MasterData_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._detailMst_5__3, (int32_t)MasterData_object, v9, v10);
  v11 = 0;
  v2->fields._i_5__6 = 0;
  *(_QWORD *)&v2->fields._interval_5__4 = 10;
  while ( 1 )
  {
    skillEntList_5__2 = v2->fields._skillEntList_5__2;
    if ( !skillEntList_5__2 || !_4__this )
      goto LABEL_43;
    if ( v11 >= SLODWORD(skillEntList_5__2->max_length) )
    {
      this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)_4__this->fields.grid;
      if ( this )
      {
        ((void (__fastcall *)(DebugSkillSelectComponent__CreateListCoroutine_d__5_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
          this,
          this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
        return 0;
      }
      goto LABEL_43;
    }
    BaseCell = (Il2CppObject *)_4__this->fields.BaseCell;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)UnityEngine_Object__Instantiate_object_(
                                                                      BaseCell,
                                                                      (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_43;
    v13 = this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v13,
                                                                      0);
    if ( !_4__this->fields.grid )
      goto LABEL_43;
    v14 = this;
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)_4__this->fields.grid,
                                                                      0);
    if ( !v14 )
      goto LABEL_43;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v14, (UnityEngine_Transform_o *)this, 0);
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v13,
                                                                      0);
    v15 = this;
    if ( !byte_4C313D1 )
    {
      this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    if ( !v15 )
      goto LABEL_43;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v15,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v13,
                                                                      0);
    v16 = this;
    if ( !byte_4C313D6 )
    {
      this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D6 = 1;
    }
    if ( !v16 )
      goto LABEL_43;
    UnityEngine_Transform__set_localScale(
      (UnityEngine_Transform_o *)v16,
      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
      0);
    entity = 0;
    v17 = v2->fields._skillEntList_5__2;
    monitor = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v17 )
      goto LABEL_43;
    i_5__6 = v2->fields._i_5__6;
    if ( (unsigned int)i_5__6 >= LODWORD(v17->max_length) )
      goto LABEL_44;
    v20 = v17->m_Items[i_5__6];
    if ( !v20 )
      goto LABEL_43;
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)v2->fields._detailMst_5__3;
    if ( !this )
      goto LABEL_43;
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                      &entity,
                                                                      v20->fields.id,
                                                                      (const MethodInfo_3396884 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_43;
      monitor = (System_String_o *)entity[1].monitor;
    }
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)v13,
                                                                      (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_DebugSkillSelectCellComponent___);
    v21 = v2->fields._skillEntList_5__2;
    if ( !v21 )
      goto LABEL_43;
    v22 = v2->fields._i_5__6;
    if ( (unsigned int)v22 >= LODWORD(v21->max_length) )
LABEL_44:
      sub_1C32E84(this);
    v23 = (DebugSkillSelectCellComponent_o *)this;
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)v21->m_Items[v22];
    if ( !this )
      goto LABEL_43;
    v24 = this->fields.__1__state;
    Name = SkillEntity__getName((SkillEntity_o *)this, 0);
    v26 = (System_Action_T1__T2__T3__o *)sub_1C32E6C(System_Action_int__string__string__TypeInfo);
    System_Action_int__object__object____ctor(
      v26,
      (Il2CppObject *)_4__this,
      Method_DebugSkillSelectComponent_TapSkillSelectCallback__,
      0);
    if ( !v23 )
      goto LABEL_43;
    DebugSkillSelectCellComponent__Set(v23, v24, Name, monitor, (System_Action_int__string__string__o *)v26, v27);
    interval_5__4 = v2->fields._interval_5__4;
    v29 = v2->fields._cnt_5__5 + 1;
    v2->fields._cnt_5__5 = v29;
    if ( v29 > interval_5__4 )
      break;
LABEL_33:
    v11 = v2->fields._i_5__6 + 1;
    v2->fields._i_5__6 = v11;
  }
  v2->fields._cnt_5__5 = 0;
  this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)_4__this->fields.grid;
  if ( !this )
    goto LABEL_43;
  ((void (__fastcall *)(DebugSkillSelectComponent__CreateListCoroutine_d__5_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
    this,
    this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
  v2->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C32BC4(p__2__current, 0, v33, v34);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *DebugSkillSelectComponent__CreateListCoroutine_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DebugSkillSelectComponent__CreateListCoroutine_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DebugSkillSelectComponent__CreateListCoroutine_d__5__System_Collections_IEnumerator_Reset(
        DebugSkillSelectComponent__CreateListCoroutine_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_DebugSkillSelectComponent__CreateListCoroutine_d__5_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *DebugSkillSelectComponent__CreateListCoroutine_d__5__System_Collections_IEnumerator_get_Current(
        DebugSkillSelectComponent__CreateListCoroutine_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DebugSkillSelectComponent__CreateListCoroutine_d__5__System_IDisposable_Dispose(
        DebugSkillSelectComponent__CreateListCoroutine_d__5_o *this,
        const MethodInfo *method)
{
  ;
}