void DebugSkillSelectComponent___ctor(DebugSkillSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugSkillSelectComponent__Close(DebugSkillSelectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


System_Collections_IEnumerator_o *DebugSkillSelectComponent__CreateListCoroutine(
        DebugSkillSelectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5939CEA & 1) == 0 )
  {
    sub_21FFC50(&DebugSkillSelectComponent__CreateListCoroutine_d__5_TypeInfo);
    byte_5939CEA = 1;
  }
  v3 = sub_21FFEBC(DebugSkillSelectComponent__CreateListCoroutine_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void DebugSkillSelectComponent__Open(
        DebugSkillSelectComponent_o *this,
        System_Action_int__string__string__o *callback,
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
  System_Collections_IEnumerator_o *ListCoroutine; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.BaseCell) == 0) )
    sub_21FFECC(gameObject, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.callback = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callback, (int32_t)callback, v7, v8, v9, v10, v11, v12);
  if ( !this->fields.isListCreate )
  {
    this->fields.isListCreate = 1;
    ListCoroutine = DebugSkillSelectComponent__CreateListCoroutine(this, v13);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, ListCoroutine, 0);
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
  __int64 v8; // x1

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
    sub_21FFECC(0, v8);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *MasterData_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int v19; // w8
  Il2CppObject *BaseCell; // x21
  DebugSkillSelectComponent__CreateListCoroutine_d__5_o *v21; // x21
  DebugSkillSelectComponent__CreateListCoroutine_d__5_o *v22; // x22
  DebugSkillSelectComponent__CreateListCoroutine_d__5_o *v23; // x22
  DebugSkillSelectComponent__CreateListCoroutine_d__5_o *v24; // x22
  struct SkillEntity_array *v25; // x8
  System_String_o *monitor; // x22
  __int64 i_5__6; // x9
  SkillEntity_o *v28; // x8
  struct SkillEntity_array *v29; // x8
  __int64 v30; // x9
  DebugSkillSelectCellComponent_o *v31; // x21
  int32_t v32; // w23
  System_String_o *Name; // x24
  System_Action_T1__T2__T3__o *v34; // x25
  const MethodInfo *v35; // x5
  int32_t interval_5__4; // w9
  int v37; // w8
  struct SkillEntity_array *skillEntList_5__2; // x9
  bool result; // w0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_5939CEB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__string__string__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__getEntitys__);
    sub_21FFC50(&Method_DebugSkillSelectComponent_TapSkillSelectCallback__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_DebugSkillSelectCellComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939CEB = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  entity = 0;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_34;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)DataManager__GetMasterData_object_(
                                                                          (DataManager_o *)this,
                                                                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0
    || (Entitys = DataMasterBase_object__object__int___getEntitys(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    (const MethodInfo_3EDC704 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__getEntitys__),
        v2->fields._skillEntList_5__2 = (struct SkillEntity_array *)Entitys,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v2->fields._skillEntList_5__2,
          (int32_t)Entitys,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_44:
    sub_21FFECC(this, method);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillDetailMaster___);
  v2->fields._detailMst_5__3 = (struct SkillDetailMaster_o *)MasterData_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v2->fields._detailMst_5__3,
    (int32_t)MasterData_object,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = 0;
  v2->fields._i_5__6 = 0;
  *(_QWORD *)&v2->fields._interval_5__4 = 10;
  while ( 1 )
  {
    skillEntList_5__2 = v2->fields._skillEntList_5__2;
    if ( !skillEntList_5__2 )
      goto LABEL_44;
    if ( v19 >= SLODWORD(skillEntList_5__2->max_length) )
    {
      if ( _4__this )
      {
        this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)_4__this->fields.grid;
        if ( this )
        {
          ((void (__fastcall *)(DebugSkillSelectComponent__CreateListCoroutine_d__5_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
            this,
            this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
          return 0;
        }
      }
      goto LABEL_44;
    }
    if ( !_4__this )
      goto LABEL_44;
    BaseCell = (Il2CppObject *)_4__this->fields.BaseCell;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)UnityEngine_Object__Instantiate_object_(
                                                                      BaseCell,
                                                                      (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_44;
    v21 = this;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v21,
                                                                      0);
    if ( !_4__this->fields.grid )
      goto LABEL_44;
    v22 = this;
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)_4__this->fields.grid,
                                                                      0);
    if ( !v22 )
      goto LABEL_44;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v22, (UnityEngine_Transform_o *)this, 0);
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v21,
                                                                      0);
    v23 = this;
    if ( !byte_5931940 )
    {
      this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    if ( !v23 )
      goto LABEL_44;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v23,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)UnityEngine_GameObject__get_transform(
                                                                      (UnityEngine_GameObject_o *)v21,
                                                                      0);
    v24 = this;
    if ( !byte_5931945 )
    {
      this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    if ( !v24 )
      goto LABEL_44;
    UnityEngine_Transform__set_localScale(
      (UnityEngine_Transform_o *)v24,
      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
      0);
    v25 = v2->fields._skillEntList_5__2;
    entity = 0;
    monitor = (System_String_o *)StringLiteral_1/*""*/;
    if ( !v25 )
      goto LABEL_44;
    i_5__6 = v2->fields._i_5__6;
    if ( (unsigned int)i_5__6 >= LODWORD(v25->max_length) )
      goto LABEL_45;
    v28 = v25->m_Items[i_5__6];
    if ( !v28 )
      goto LABEL_44;
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)v2->fields._detailMst_5__3;
    if ( !this )
      goto LABEL_44;
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                      &entity,
                                                                      v28->fields.id,
                                                                      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_44;
      monitor = (System_String_o *)entity[1].monitor;
    }
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)v21,
                                                                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_DebugSkillSelectCellComponent___);
    v29 = v2->fields._skillEntList_5__2;
    if ( !v29 )
      goto LABEL_44;
    v30 = v2->fields._i_5__6;
    if ( (unsigned int)v30 >= LODWORD(v29->max_length) )
LABEL_45:
      sub_21FFED4(this);
    v31 = (DebugSkillSelectCellComponent_o *)this;
    this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)v29->m_Items[v30];
    if ( !this )
      goto LABEL_44;
    v32 = this->fields.__1__state;
    Name = SkillEntity__getName((SkillEntity_o *)this, 0);
    v34 = (System_Action_T1__T2__T3__o *)sub_21FFEBC(System_Action_int__string__string__TypeInfo);
    System_Action_int__object__object____ctor(
      v34,
      (Il2CppObject *)_4__this,
      Method_DebugSkillSelectComponent_TapSkillSelectCallback__,
      0);
    if ( !v31 )
      goto LABEL_44;
    DebugSkillSelectCellComponent__Set(v31, v32, Name, monitor, (System_Action_int__string__string__o *)v34, v35);
    interval_5__4 = v2->fields._interval_5__4;
    v37 = v2->fields._cnt_5__5 + 1;
    v2->fields._cnt_5__5 = v37;
    if ( v37 > interval_5__4 )
      break;
LABEL_34:
    v19 = v2->fields._i_5__6 + 1;
    v2->fields._i_5__6 = v19;
  }
  this = (DebugSkillSelectComponent__CreateListCoroutine_d__5_o *)_4__this->fields.grid;
  v2->fields._cnt_5__5 = 0;
  if ( !this )
    goto LABEL_44;
  ((void (__fastcall *)(DebugSkillSelectComponent__CreateListCoroutine_d__5_o *, const MethodInfo *))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
    this,
    this->klass->vtable._8_System_Collections_IEnumerator_Reset.method);
  v2->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_21FFBF4(p__2__current, 0, v41, v42, v43, v44, v45, v46);
  result = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_DebugSkillSelectComponent__CreateListCoroutine_d__5_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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