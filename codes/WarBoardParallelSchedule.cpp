void __fastcall WarBoardParallelSchedule___ctor(
        WarBoardParallelSchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  this->fields.tasks = taskBases;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.tasks, (int32_t)taskBases, v5, v6);
}


void __fastcall WarBoardParallelSchedule___ctor_37353208(
        WarBoardParallelSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4AFFD58 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_4AFFD58 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_1BC3264(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.tasks, (int32_t)v7, v8, v9);
}


System_Collections_IEnumerator_o *__fastcall WarBoardParallelSchedule__Execute(
        WarBoardParallelSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4AFFD59 & 1) == 0 )
  {
    sub_1BC3008(&WarBoardParallelSchedule__Execute_d__4_TypeInfo, method);
    byte_4AFFD59 = 1;
  }
  v3 = sub_1BC3254(WarBoardParallelSchedule__Execute_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  __int64 v2; // x2
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  WarBoardParallelSchedule_o *v4; // x19
  struct WarBoardTaskBase_array *tasks; // x8
  unsigned __int64 v6; // x20
  __int64 v7; // x21

  StartCallback = this->fields.StartCallback;
  v4 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardParallelSchedule_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
                                           StartCallback->fields.original_method_info,
                                           *(_QWORD *)&StartCallback->fields.extra_arg);
  tasks = v4->fields.tasks;
  if ( !tasks )
LABEL_11:
    sub_1BC3264(this, method);
  if ( (int)*(_QWORD *)&tasks->max_length >= 1 )
  {
    v6 = 0LL;
    v7 = (unsigned int)*(_QWORD *)&tasks->max_length;
    while ( 1 )
    {
      if ( v6 >= tasks->max_length )
        sub_1BC326C(this, method, v2);
      this = (WarBoardParallelSchedule_o *)tasks->m_Items[v6];
      if ( this )
        this = (WarBoardParallelSchedule_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule_o *, Il2CppMethodPointer))this->klass->vtable._5_OnStart.method)(
                                               this,
                                               this->klass->vtable._6_OnEnd.methodPtr);
      if ( v7 == ++v6 )
        break;
      tasks = v4->fields.tasks;
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
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  unsigned __int64 v27; // x22
  __int64 v28; // x24
  unsigned int *v29; // x8
  struct WarBoardTaskBase_array *v30; // x8
  unsigned int *v31; // x25
  const MethodInfo *v32; // x3
  WarBoardParallelSchedule__Execute_d__4_o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *endFlags_5__3; // x20
  WarBoardParallelSchedule___c_c *v35; // x0
  System_Func_bool__bool__o *_9__4_0; // x21
  Il2CppObject *v37; // x22
  struct WarBoardParallelSchedule___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  bool result; // w0
  unsigned __int64 v43; // x21
  struct System_Boolean_array *v44; // x26
  bool *v45; // x27
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v47; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x26
  __int64 v50; // x9
  System_Collections_IEnumerator_c **p_offset; // x10
  __int64 p_method; // x0
  struct System_Object_array *v53; // x8
  Il2CppClass **v54; // x0
  WarBoardParallelSchedule__Execute_d__4_o *v55; // x20
  CGThumbnailListItem_o *v56; // x0
  unsigned int *v57; // x0
  struct System_Boolean_array *v58; // x8
  struct WarBoardTaskBase_array *v59; // x8
  struct System_Object_array *v60; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  __int64 v62; // x0

  v2 = this;
  if ( (byte_4AFFD5B & 1) == 0 )
  {
    sub_1BC3008(&bool___TypeInfo, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_All_bool___, v3);
    sub_1BC3008(&System_Func_bool__bool__TypeInfo, v4);
    sub_1BC3008(&System_Collections_IEnumerator___TypeInfo, v5);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1BC3008(&object___TypeInfo, v7);
    sub_1BC3008(&Method_WarBoardParallelSchedule___c__Execute_b__4_0__, v8);
    sub_1BC3008(&WarBoardParallelSchedule___c_TypeInfo, v9);
    this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_1BC3008(&WarBoardManager_TypeInfo, v10);
    byte_4AFFD5B = 1;
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
    v15 = sub_1BC30B0(bool___TypeInfo, max_length);
    v2->fields._endFlags_5__3 = (struct System_Boolean_array *)v15;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields._endFlags_5__3, v15, v16, v17);
    v18 = sub_1BC30B0(object___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._currentObjects_5__4 = (struct System_Object_array *)v18;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields._currentObjects_5__4, v18, v19, v20);
    v21 = sub_1BC30B0(System_Collections_IEnumerator___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v21;
    p_executes_5__5 = (unsigned int **)&v2->fields._executes_5__5;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields._executes_5__5, v21, v23, v24);
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
        sub_1BC2FAC((CGThumbnailListItem_o *)&v29[v28], 0, v25, v26);
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
          v33 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_1BC3144(this, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
            if ( !this )
            {
LABEL_67:
              v62 = sub_1BC3288();
              sub_1BC3130(v62, 0LL);
            }
          }
          if ( v27 >= v31[6] )
LABEL_66:
            sub_1BC326C(this, method, v25);
          *(_QWORD *)&v31[v28] = v33;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v31[v28], (int32_t)v33, v25, v32);
        }
        ++v27;
        v28 += 2LL;
        if ( (__int64)v27 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_65:
      sub_1BC3264(this, method);
    }
  }
LABEL_22:
  endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._endFlags_5__3;
  v35 = WarBoardParallelSchedule___c_TypeInfo;
  if ( !WarBoardParallelSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardParallelSchedule___c_TypeInfo);
    v35 = WarBoardParallelSchedule___c_TypeInfo;
  }
  _9__4_0 = v35->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = WarBoardParallelSchedule___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__4_0 = (System_Func_bool__bool__o *)sub_1BC3254(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__4_0, v37, Method_WarBoardParallelSchedule___c__Execute_b__4_0__, 0LL);
    static_fields = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = _9__4_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v39, v40);
  }
  this = (WarBoardParallelSchedule__Execute_d__4_o *)System_Linq_Enumerable__All_bool_(
                                                       endFlags_5__3,
                                                       (System_Func_TSource__bool__o *)_9__4_0,
                                                       (const MethodInfo_300B98C *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( v2->fields._count_5__2 >= 1 )
  {
    v43 = 0LL;
    do
    {
      v44 = v2->fields._endFlags_5__3;
      if ( !v44 )
        goto LABEL_65;
      if ( v43 >= v44->max_length )
        goto LABEL_66;
      v45 = &v44->m_Items[v43 + 4];
      if ( !*v45 )
      {
        executes_5__5 = v2->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_65;
        if ( v43 >= executes_5__5->max_length )
          goto LABEL_66;
        v47 = executes_5__5->m_Items[v43];
        if ( v47 )
        {
          if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          this = (WarBoardParallelSchedule__Execute_d__4_o *)WarBoardManager__IEnumeratorExecute(v47, 0LL);
          if ( v43 >= v44->max_length )
            goto LABEL_66;
          *v45 = ((unsigned __int8)this & 1) == 0;
          klass = v47->klass;
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          v50 = *(unsigned __int16 *)(&v47->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v47->klass->_2.bitflags2 + 3) )
          {
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v50;
              p_offset += 2;
              if ( !v50 )
                goto LABEL_45;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_45:
            p_method = sub_1C13570(v47, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v47,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_65;
          v55 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_1BC3144(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_67;
          }
          if ( v43 >= currentObjects_5__4[6] )
            goto LABEL_66;
          v57 = &currentObjects_5__4[2 * v43];
          *((_QWORD *)v57 + 4) = v55;
          v56 = (CGThumbnailListItem_o *)(v57 + 8);
        }
        else
        {
          *v45 = 1;
          v53 = v2->fields._currentObjects_5__4;
          if ( !v53 )
            goto LABEL_65;
          if ( v43 >= v53->max_length )
            goto LABEL_66;
          v54 = &v53->obj.klass + v43;
          LODWORD(v55) = 0;
          v54[4] = 0LL;
          v56 = (CGThumbnailListItem_o *)(v54 + 4);
        }
        sub_1BC2FAC(v56, (int32_t)v55, v25, v41);
        v58 = v2->fields._endFlags_5__3;
        if ( !v58 )
          goto LABEL_65;
        if ( v43 >= v58->max_length )
          goto LABEL_66;
        if ( v58->m_Items[v43 + 4] )
        {
          if ( !_4__this )
            goto LABEL_65;
          v59 = _4__this->fields.tasks;
          if ( !v59 )
            goto LABEL_65;
          if ( v43 >= v59->max_length )
            goto LABEL_66;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)v59->m_Items[v43];
          if ( !this )
            goto LABEL_65;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        }
      }
    }
    while ( (__int64)++v43 < v2->fields._count_5__2 );
  }
  v60 = v2->fields._currentObjects_5__4;
  v2->fields.__2__current = &v60->obj;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BC2FAC(p__2__current, (int32_t)v60, v25, v41);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_WarBoardParallelSchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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

  if ( (byte_4AFFD5A & 1) == 0 )
  {
    sub_1BC3008(&WarBoardParallelSchedule___c_TypeInfo, v1);
    byte_4AFFD5A = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(WarBoardParallelSchedule___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardParallelSchedule___c_TypeInfo->static_fields->__9 = (struct WarBoardParallelSchedule___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)WarBoardParallelSchedule___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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