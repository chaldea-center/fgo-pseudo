void __fastcall WarBoardVerticalSchedule___ctor(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, method);
  this->fields.tasks = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tasks, 0, v3, v4);
}


void __fastcall WarBoardVerticalSchedule___ctor_36472888(
        WarBoardVerticalSchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  this->fields.tasks = taskBases;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tasks, (int32_t)taskBases, v5, v6);
}


void __fastcall WarBoardVerticalSchedule___ctor_36472932(
        WarBoardVerticalSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A4C1BD & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_4A4C1BD = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_1B86614(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tasks, (int32_t)v7, v8, v9);
}


System_Collections_IEnumerator_o *__fastcall WarBoardVerticalSchedule__Execute(
        WarBoardVerticalSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4A4C1BF & 1) == 0 )
  {
    sub_1B863B8(&WarBoardVerticalSchedule__Execute_d__7_TypeInfo, method);
    byte_4A4C1BF = 1;
  }
  v3 = sub_1B86604(WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardVerticalSchedule__OnEnd(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardVerticalSchedule__OnStart(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  WarBoardVerticalSchedule_o *v3; // x19
  struct WarBoardTaskBase_array *tasks; // x8

  StartCallback = this->fields.StartCallback;
  v3 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardVerticalSchedule_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
                                           StartCallback->fields.original_method_info,
                                           *(_QWORD *)&StartCallback->fields.extra_arg);
  tasks = v3->fields.tasks;
  v3->fields.currentExecuteIndex = 0;
  if ( !tasks )
    goto LABEL_8;
  if ( (int)tasks->max_length >= 1 )
  {
    this = (WarBoardVerticalSchedule_o *)tasks->m_Items[0];
    if ( this )
    {
      ((void (__fastcall *)(WarBoardVerticalSchedule_o *, Il2CppMethodPointer))this->klass->vtable._5_OnStart.method)(
        this,
        this->klass->vtable._6_OnEnd.methodPtr);
      return;
    }
LABEL_8:
    sub_1B86614(this, method);
  }
}


void __fastcall WarBoardVerticalSchedule__SetTask(
        WarBoardVerticalSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  WarBoardVerticalSchedule_o *v4; // x19
  System_Object_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v4 = this;
  if ( (byte_4A4C1BE & 1) == 0 )
  {
    this = (WarBoardVerticalSchedule_o *)sub_1B863B8(
                                           &Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__,
                                           taskBases);
    byte_4A4C1BE = 1;
  }
  if ( !taskBases )
    sub_1B86614(this, taskBases);
  v5 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  v4->fields.tasks = (struct WarBoardTaskBase_array *)v5;
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.tasks, (int32_t)v5, v6, v7);
}


void __fastcall WarBoardVerticalSchedule__Execute_d__7___ctor(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardVerticalSchedule__Execute_d__7__MoveNext(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  WarBoardVerticalSchedule__Execute_d__7_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct WarBoardVerticalSchedule_o *_4__this; // x23
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
  WarBoardVerticalSchedule__Execute_d__7_o *v34; // x21
  System_Collections_Generic_IEnumerable_TSource__o *endFlags_5__3; // x20
  WarBoardVerticalSchedule___c_c *v36; // x0
  System_Func_bool__bool__o *_9__7_0; // x21
  Il2CppObject *v38; // x22
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  bool result; // w0
  int count_5__2; // w8
  unsigned __int64 v46; // x21
  struct System_Boolean_array *v47; // x26
  bool *v48; // x27
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v50; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x26
  __int64 v53; // x9
  System_Collections_IEnumerator_c **p_offset; // x10
  __int64 p_method; // x0
  struct System_Object_array *v56; // x8
  Il2CppClass **v57; // x0
  WarBoardVerticalSchedule__Execute_d__7_o *v58; // x20
  CGThumbnailListItem_o *v59; // x0
  unsigned int *v60; // x0
  struct System_Boolean_array *v61; // x8
  struct WarBoardTaskBase_array *v62; // x8
  struct WarBoardTaskBase_array *v63; // x8
  __int64 currentExecuteIndex; // x9
  int v65; // w10
  struct System_Object_array *v66; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  __int64 v68; // x0

  v2 = this;
  if ( (byte_4A4C1C1 & 1) == 0 )
  {
    sub_1B863B8(&bool___TypeInfo, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_All_bool___, v3);
    sub_1B863B8(&System_Func_bool__bool__TypeInfo, v4);
    sub_1B863B8(&System_Collections_IEnumerator___TypeInfo, v5);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1B863B8(&object___TypeInfo, v7);
    sub_1B863B8(&Method_WarBoardVerticalSchedule___c__Execute_b__7_0__, v8);
    sub_1B863B8(&WarBoardVerticalSchedule___c_TypeInfo, v9);
    this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1B863B8(&WarBoardManager_TypeInfo, v10);
    byte_4A4C1C1 = 1;
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
      goto LABEL_72;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_72;
    max_length = tasks->max_length;
    v2->fields._count_5__2 = max_length;
    v15 = sub_1B86460(bool___TypeInfo, max_length);
    v2->fields._endFlags_5__3 = (struct System_Boolean_array *)v15;
    sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._endFlags_5__3, v15, v16, v17);
    v18 = sub_1B86460(object___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._currentObjects_5__4 = (struct System_Object_array *)v18;
    sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._currentObjects_5__4, v18, v19, v20);
    v21 = sub_1B86460(System_Collections_IEnumerator___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v21;
    p_executes_5__5 = (unsigned int **)&v2->fields._executes_5__5;
    sub_1B8635C((CGThumbnailListItem_o *)&v2->fields._executes_5__5, v21, v23, v24);
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
          goto LABEL_73;
        *(_QWORD *)&v29[v28] = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v29[v28], 0, v25, v26);
        v30 = _4__this->fields.tasks;
        if ( !v30 )
          break;
        if ( v27 >= v30->max_length )
          goto LABEL_73;
        this = *(WarBoardVerticalSchedule__Execute_d__7_o **)((char *)&v30->obj.klass + v28 * 4);
        if ( this )
        {
          v31 = *p_executes_5__5;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
          if ( !v31 )
            break;
          v34 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1B864F4(this, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
            if ( !this )
            {
LABEL_74:
              v68 = sub_1B86638();
              sub_1B864E0(v68, 0LL);
            }
          }
          if ( v27 >= v31[6] )
LABEL_73:
            sub_1B8661C(this, method);
          *(_QWORD *)&v31[v28] = v34;
          sub_1B8635C((CGThumbnailListItem_o *)&v31[v28], (int32_t)v34, v32, v33);
        }
        ++v27;
        v28 += 2LL;
        if ( (__int64)v27 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_72:
      sub_1B86614(this, method);
    }
  }
LABEL_22:
  endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._endFlags_5__3;
  v36 = WarBoardVerticalSchedule___c_TypeInfo;
  if ( !WarBoardVerticalSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardVerticalSchedule___c_TypeInfo);
    v36 = WarBoardVerticalSchedule___c_TypeInfo;
  }
  _9__7_0 = v36->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = WarBoardVerticalSchedule___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__7_0 = (System_Func_bool__bool__o *)sub_1B86604(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__7_0, v38, Method_WarBoardVerticalSchedule___c__Execute_b__7_0__, 0LL);
    static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = _9__7_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v40, v41);
  }
  this = (WarBoardVerticalSchedule__Execute_d__7_o *)System_Linq_Enumerable__All_bool_(
                                                       endFlags_5__3,
                                                       (System_Func_TSource__bool__o *)_9__7_0,
                                                       (const MethodInfo_2F7988C *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  count_5__2 = v2->fields._count_5__2;
  if ( count_5__2 >= 1 )
  {
    v46 = 0LL;
    do
    {
      v47 = v2->fields._endFlags_5__3;
      if ( !v47 )
        goto LABEL_72;
      if ( v46 >= v47->max_length )
        goto LABEL_73;
      v48 = &v47->m_Items[v46 + 4];
      if ( !*v48 )
      {
        executes_5__5 = v2->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_72;
        if ( v46 >= executes_5__5->max_length )
          goto LABEL_73;
        v50 = executes_5__5->m_Items[v46];
        if ( v50 )
        {
          if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)WarBoardManager__IEnumeratorExecute(v50, 0LL);
          if ( v46 >= v47->max_length )
            goto LABEL_73;
          *v48 = ((unsigned __int8)this & 1) == 0;
          klass = v50->klass;
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          v53 = *(unsigned __int16 *)(&v50->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v50->klass->_2.bitflags2 + 3) )
          {
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v53;
              p_offset += 2;
              if ( !v53 )
                goto LABEL_45;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_45:
            p_method = sub_1BD6B4C(v50, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v50,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_72;
          v58 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1B864F4(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_74;
          }
          if ( v46 >= currentObjects_5__4[6] )
            goto LABEL_73;
          v60 = &currentObjects_5__4[2 * v46];
          *((_QWORD *)v60 + 4) = v58;
          v59 = (CGThumbnailListItem_o *)(v60 + 8);
        }
        else
        {
          *v48 = 1;
          v56 = v2->fields._currentObjects_5__4;
          if ( !v56 )
            goto LABEL_72;
          if ( v46 >= v56->max_length )
            goto LABEL_73;
          v57 = &v56->obj.klass + v46;
          LODWORD(v58) = 0;
          v57[4] = 0LL;
          v59 = (CGThumbnailListItem_o *)(v57 + 4);
        }
        sub_1B8635C(v59, (int32_t)v58, v42, v43);
        v61 = v2->fields._endFlags_5__3;
        if ( !v61 )
          goto LABEL_72;
        if ( v46 >= v61->max_length )
          goto LABEL_73;
        if ( v61->m_Items[v46 + 4] )
        {
          if ( !_4__this )
            goto LABEL_72;
          v62 = _4__this->fields.tasks;
          ++_4__this->fields.currentExecuteIndex;
          if ( !v62 )
            goto LABEL_72;
          if ( v46 >= v62->max_length )
            goto LABEL_73;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)v62->m_Items[v46];
          if ( !this )
            goto LABEL_72;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
          v63 = _4__this->fields.tasks;
          if ( !v63 )
            goto LABEL_72;
          currentExecuteIndex = _4__this->fields.currentExecuteIndex;
          v65 = v63->max_length;
          if ( (int)currentExecuteIndex < v65 )
          {
            if ( (unsigned int)currentExecuteIndex >= v65 )
              goto LABEL_73;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)v63->m_Items[currentExecuteIndex];
            if ( !this )
              goto LABEL_72;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                 this,
                                                                 this->klass->vtable._6_MoveNext.methodPtr);
          }
        }
        else if ( !_4__this )
        {
          goto LABEL_72;
        }
        if ( (__int64)v46 >= _4__this->fields.currentExecuteIndex )
          break;
        count_5__2 = v2->fields._count_5__2;
      }
    }
    while ( (__int64)++v46 < count_5__2 );
  }
  v66 = v2->fields._currentObjects_5__4;
  v2->fields.__2__current = &v66->obj;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1B8635C(p__2__current, (int32_t)v66, v42, v43);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall WarBoardVerticalSchedule__Execute_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardVerticalSchedule__Execute_d__7__System_Collections_IEnumerator_Reset(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_WarBoardVerticalSchedule__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall WarBoardVerticalSchedule__Execute_d__7__System_Collections_IEnumerator_get_Current(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardVerticalSchedule__Execute_d__7__System_IDisposable_Dispose(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardVerticalSchedule___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4C1C0 & 1) == 0 )
  {
    sub_1B863B8(&WarBoardVerticalSchedule___c_TypeInfo, v1);
    byte_4A4C1C0 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(WarBoardVerticalSchedule___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardVerticalSchedule___c_TypeInfo->static_fields->__9 = (struct WarBoardVerticalSchedule___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)WarBoardVerticalSchedule___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall WarBoardVerticalSchedule___c___ctor(WarBoardVerticalSchedule___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardVerticalSchedule___c___Execute_b__7_0(
        WarBoardVerticalSchedule___c_o *this,
        bool x,
        const MethodInfo *method)
{
  return x;
}