void __fastcall WarBoardParallelSchedule___ctor(
        WarBoardParallelSchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  this->fields.tasks = taskBases;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.tasks, (int32_t)taskBases, v5, v6);
}


void __fastcall WarBoardParallelSchedule___ctor_36156556(
        WarBoardParallelSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49B8C7A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_49B8C7A = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_1B4D1EC(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.tasks, (int32_t)v7, v8, v9);
}


System_Collections_IEnumerator_o *__fastcall WarBoardParallelSchedule__Execute(
        WarBoardParallelSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49B8C7B & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardParallelSchedule__Execute_d__4_TypeInfo, method);
    byte_49B8C7B = 1;
  }
  v3 = sub_1B4D1DC(WarBoardParallelSchedule__Execute_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardParallelSchedule__OnEnd(WarBoardParallelSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardParallelSchedule__OnStart(WarBoardParallelSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  WarBoardParallelSchedule_o *v3; // x19
  struct WarBoardTaskBase_array *tasks; // x8
  unsigned __int64 v5; // x20
  __int64 v6; // x21

  StartCallback = this->fields.StartCallback;
  v3 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardParallelSchedule_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
                                           StartCallback->fields.original_method_info,
                                           *(_QWORD *)&StartCallback->fields.extra_arg);
  tasks = v3->fields.tasks;
  if ( !tasks )
LABEL_11:
    sub_1B4D1EC(this, method);
  if ( (int)*(_QWORD *)&tasks->max_length >= 1 )
  {
    v5 = 0LL;
    v6 = (unsigned int)*(_QWORD *)&tasks->max_length;
    while ( 1 )
    {
      if ( v5 >= tasks->max_length )
        sub_1B4D1F4(this, method);
      this = (WarBoardParallelSchedule_o *)tasks->m_Items[v5];
      if ( this )
        this = (WarBoardParallelSchedule_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule_o *, Il2CppMethodPointer))this->klass->vtable._5_OnStart.method)(
                                               this,
                                               this->klass->vtable._6_OnEnd.methodPtr);
      if ( v6 == ++v5 )
        break;
      tasks = v3->fields.tasks;
      if ( !tasks )
        goto LABEL_11;
    }
  }
}


void __fastcall WarBoardParallelSchedule__Execute_d__4___ctor(
        WarBoardParallelSchedule__Execute_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardParallelSchedule__Execute_d__4__MoveNext(
        WarBoardParallelSchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  WarBoardParallelSchedule__Execute_d__4_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct WarBoardParallelSchedule_o *_4__this; // x23
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length; // x1
  __int64 v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  unsigned int **p_executes_5__5; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  unsigned __int64 v27; // x22
  __int64 v28; // x24
  unsigned int *v29; // x8
  struct WarBoardTaskBase_array *v30; // x8
  unsigned int *v31; // x25
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  WarBoardParallelSchedule__Execute_d__4_o *v34; // x21
  System_Collections_Generic_IEnumerable_TSource__o *endFlags_5__3; // x20
  WarBoardParallelSchedule___c_c *v36; // x0
  System_Func_bool__bool__o *_9__4_0; // x21
  Il2CppObject *v38; // x22
  struct WarBoardParallelSchedule___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  bool result; // w0
  unsigned __int64 v45; // x21
  struct System_Boolean_array *v46; // x26
  bool *v47; // x27
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v49; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x26
  __int64 v52; // x9
  System_Collections_IEnumerator_c **p_offset; // x10
  __int64 p_method; // x0
  struct System_Object_array *v55; // x8
  Il2CppClass **v56; // x0
  WarBoardParallelSchedule__Execute_d__4_o *v57; // x20
  CGThumbnailListItem_o *v58; // x0
  unsigned int *v59; // x0
  struct System_Boolean_array *v60; // x8
  struct WarBoardTaskBase_array *v61; // x8
  struct System_Object_array *v62; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  __int64 v64; // x0

  v2 = this;
  if ( (byte_49B8C7D & 1) == 0 )
  {
    sub_1B4CF90(&bool___TypeInfo, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_All_bool___, v3);
    sub_1B4CF90(&System_Func_bool__bool__TypeInfo, v4);
    sub_1B4CF90(&System_Collections_IEnumerator___TypeInfo, v5);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1B4CF90(&object___TypeInfo, v7);
    sub_1B4CF90(&Method_WarBoardParallelSchedule___c__Execute_b__4_0__, v8);
    sub_1B4CF90(&WarBoardParallelSchedule___c_TypeInfo, v9);
    this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_1B4CF90(&WarBoardManager_TypeInfo, v10);
    byte_49B8C7D = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_65;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_65;
    max_length = tasks->max_length;
    v2->fields._count_5__2 = max_length;
    v15 = sub_1B4D038(bool___TypeInfo, max_length);
    v2->fields._endFlags_5__3 = (struct System_Boolean_array *)v15;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._endFlags_5__3, v15, v16, v17);
    v18 = sub_1B4D038(object___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._currentObjects_5__4 = (struct System_Object_array *)v18;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._currentObjects_5__4, v18, v19, v20);
    v21 = sub_1B4D038(System_Collections_IEnumerator___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v21;
    p_executes_5__5 = (unsigned int **)&v2->fields._executes_5__5;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields._executes_5__5, v21, v23, v24);
    if ( v2->fields._count_5__2 >= 1 )
    {
      v27 = 0LL;
      v28 = 8LL;
      while ( 1 )
      {
        v29 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v27 >= v29[6] )
          goto LABEL_66;
        *(_QWORD *)&v29[v28] = 0LL;
        sub_1B4CF34((CGThumbnailListItem_o *)&v29[v28], 0, v25, v26);
        v30 = _4__this->fields.tasks;
        if ( !v30 )
          break;
        if ( v27 >= v30->max_length )
          goto LABEL_66;
        this = *(WarBoardParallelSchedule__Execute_d__4_o **)((char *)&v30->obj.klass + v28 * 4);
        if ( this )
        {
          v31 = *p_executes_5__5;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
          if ( !v31 )
            break;
          v34 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_1B4D0CC(this, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
            if ( !this )
            {
LABEL_67:
              v64 = sub_1B4D210();
              sub_1B4D0B8(v64, 0LL);
            }
          }
          if ( v27 >= v31[6] )
LABEL_66:
            sub_1B4D1F4(this, method);
          *(_QWORD *)&v31[v28] = v34;
          sub_1B4CF34((CGThumbnailListItem_o *)&v31[v28], (int32_t)v34, v32, v33);
        }
        ++v27;
        v28 += 2LL;
        if ( (__int64)v27 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_65:
      sub_1B4D1EC(this, method);
    }
  }
LABEL_22:
  endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._endFlags_5__3;
  v36 = WarBoardParallelSchedule___c_TypeInfo;
  if ( !WarBoardParallelSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardParallelSchedule___c_TypeInfo);
    v36 = WarBoardParallelSchedule___c_TypeInfo;
  }
  _9__4_0 = v36->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = WarBoardParallelSchedule___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__4_0 = (System_Func_bool__bool__o *)sub_1B4D1DC(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__4_0, v38, Method_WarBoardParallelSchedule___c__Execute_b__4_0__, 0LL);
    static_fields = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = _9__4_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v40, v41);
  }
  this = (WarBoardParallelSchedule__Execute_d__4_o *)System_Linq_Enumerable__All_bool_(
                                                       endFlags_5__3,
                                                       (System_Func_TSource__bool__o *)_9__4_0,
                                                       (const MethodInfo_2F0D6F8 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( v2->fields._count_5__2 >= 1 )
  {
    v45 = 0LL;
    do
    {
      v46 = v2->fields._endFlags_5__3;
      if ( !v46 )
        goto LABEL_65;
      if ( v45 >= v46->max_length )
        goto LABEL_66;
      v47 = &v46->m_Items[v45 + 4];
      if ( !*v47 )
      {
        executes_5__5 = v2->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_65;
        if ( v45 >= executes_5__5->max_length )
          goto LABEL_66;
        v49 = executes_5__5->m_Items[v45];
        if ( v49 )
        {
          if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          this = (WarBoardParallelSchedule__Execute_d__4_o *)WarBoardManager__IEnumeratorExecute(v49, 0LL);
          if ( v45 >= v46->max_length )
            goto LABEL_66;
          *v47 = ((unsigned __int8)this & 1) == 0;
          klass = v49->klass;
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          v52 = *(unsigned __int16 *)(&v49->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v49->klass->_2.bitflags2 + 3) )
          {
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v52;
              p_offset += 2;
              if ( !v52 )
                goto LABEL_45;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_45:
            p_method = sub_1B9D724(v49, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v49,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_65;
          v57 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_1B4D0CC(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_67;
          }
          if ( v45 >= currentObjects_5__4[6] )
            goto LABEL_66;
          v59 = &currentObjects_5__4[2 * v45];
          *((_QWORD *)v59 + 4) = v57;
          v58 = (CGThumbnailListItem_o *)(v59 + 8);
        }
        else
        {
          *v47 = 1;
          v55 = v2->fields._currentObjects_5__4;
          if ( !v55 )
            goto LABEL_65;
          if ( v45 >= v55->max_length )
            goto LABEL_66;
          v56 = &v55->obj.klass + v45;
          LODWORD(v57) = 0;
          v56[4] = 0LL;
          v58 = (CGThumbnailListItem_o *)(v56 + 4);
        }
        sub_1B4CF34(v58, (int32_t)v57, v42, v43);
        v60 = v2->fields._endFlags_5__3;
        if ( !v60 )
          goto LABEL_65;
        if ( v45 >= v60->max_length )
          goto LABEL_66;
        if ( v60->m_Items[v45 + 4] )
        {
          if ( !_4__this )
            goto LABEL_65;
          v61 = _4__this->fields.tasks;
          if ( !v61 )
            goto LABEL_65;
          if ( v45 >= v61->max_length )
            goto LABEL_66;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)v61->m_Items[v45];
          if ( !this )
            goto LABEL_65;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        }
      }
    }
    while ( (__int64)++v45 < v2->fields._count_5__2 );
  }
  v62 = v2->fields._currentObjects_5__4;
  v2->fields.__2__current = &v62->obj;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1B4CF34(p__2__current, (int32_t)v62, v42, v43);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall WarBoardParallelSchedule__Execute_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardParallelSchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardParallelSchedule__Execute_d__4__System_Collections_IEnumerator_Reset(
        WarBoardParallelSchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_WarBoardParallelSchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall WarBoardParallelSchedule__Execute_d__4__System_Collections_IEnumerator_get_Current(
        WarBoardParallelSchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardParallelSchedule__Execute_d__4__System_IDisposable_Dispose(
        WarBoardParallelSchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardParallelSchedule___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B8C7C & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardParallelSchedule___c_TypeInfo, v1);
    byte_49B8C7C = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(WarBoardParallelSchedule___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardParallelSchedule___c_TypeInfo->static_fields->__9 = (struct WarBoardParallelSchedule___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)WarBoardParallelSchedule___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall WarBoardParallelSchedule___c___ctor(WarBoardParallelSchedule___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardParallelSchedule___c___Execute_b__4_0(
        WarBoardParallelSchedule___c_o *this,
        bool x,
        const MethodInfo *method)
{
  return x;
}