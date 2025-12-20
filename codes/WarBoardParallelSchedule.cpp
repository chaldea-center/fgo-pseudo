void WarBoardParallelSchedule___ctor(
        WarBoardParallelSchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  this->fields.tasks = taskBases;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.tasks, (int32_t)taskBases, v5, v6, v7, v8, v9, v10);
}


void WarBoardParallelSchedule___ctor_38927880(
        WarBoardParallelSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2A404 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_4D2A404 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_1C942F0(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.tasks, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}


System_Collections_IEnumerator_o *WarBoardParallelSchedule__Execute(
        WarBoardParallelSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2A405 & 1) == 0 )
  {
    sub_1C94098(&WarBoardParallelSchedule__Execute_d__4_TypeInfo);
    byte_4D2A405 = 1;
  }
  v3 = sub_1C942E4(WarBoardParallelSchedule__Execute_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardParallelSchedule__OnEnd(WarBoardParallelSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardParallelSchedule__OnStart(WarBoardParallelSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  WarBoardParallelSchedule_o *v3; // x19
  struct WarBoardTaskBase_array *tasks; // x8
  unsigned __int64 v5; // x20
  __int64 max_length; // x21

  StartCallback = this->fields.StartCallback;
  v3 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardParallelSchedule_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
                                           StartCallback->fields.method_code,
                                           StartCallback->fields.method);
  tasks = v3->fields.tasks;
  if ( !tasks )
LABEL_11:
    sub_1C942F0(this, method);
  if ( (int)tasks->max_length >= 1 )
  {
    v5 = 0;
    max_length = (unsigned int)tasks->max_length;
    while ( 1 )
    {
      if ( v5 >= LODWORD(tasks->max_length) )
        sub_1C942F8(this);
      this = (WarBoardParallelSchedule_o *)tasks->m_Items[v5];
      if ( this )
        this = (WarBoardParallelSchedule_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule_o *, const MethodInfo *))this->klass->vtable._5_OnStart.methodPtr)(
                                               this,
                                               this->klass->vtable._5_OnStart.method);
      if ( max_length == ++v5 )
        break;
      tasks = v3->fields.tasks;
      if ( !tasks )
        goto LABEL_11;
    }
  }
}


void WarBoardParallelSchedule__Execute_d__4___ctor(
        WarBoardParallelSchedule__Execute_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardParallelSchedule__Execute_d__4__MoveNext(
        WarBoardParallelSchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  WarBoardParallelSchedule__Execute_d__4_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardParallelSchedule_o *_4__this; // x23
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length_low; // x1
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x0
  unsigned int **p_executes_5__5; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  unsigned __int64 v35; // x22
  __int64 v36; // x24
  unsigned int *v37; // x8
  struct WarBoardTaskBase_array *v38; // x8
  unsigned int *v39; // x25
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  WarBoardParallelSchedule__Execute_d__4_o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *endFlags_5__3; // x20
  WarBoardParallelSchedule___c_c *v48; // x0
  System_Func_bool__bool__o *_9__4_0; // x21
  Il2CppObject *v50; // x22
  struct WarBoardParallelSchedule___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  bool result; // w0
  unsigned __int64 v65; // x21
  struct System_Boolean_array *v66; // x26
  bool *v67; // x27
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v69; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x26
  __int64 v72; // x9
  System_Collections_IEnumerator_c **p_offset; // x10
  __int64 v74; // x0
  struct System_Object_array *v75; // x8
  Il2CppClass **v76; // x0
  WarBoardParallelSchedule__Execute_d__4_o *v77; // x20
  GrandQuestFolderBoardItem_o *v78; // x0
  unsigned int *v79; // x0
  struct System_Boolean_array *v80; // x8
  struct WarBoardTaskBase_array *v81; // x8
  struct System_Object_array *v82; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  __int64 v84; // x0

  v2 = this;
  if ( (byte_4D2A407 & 1) == 0 )
  {
    sub_1C94098(&bool___TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_All_bool___);
    sub_1C94098(&System_Func_bool__bool__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator___TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&Method_WarBoardParallelSchedule___c__Execute_b__4_0__);
    sub_1C94098(&WarBoardParallelSchedule___c_TypeInfo);
    this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_1C94098(&WarBoardManager_TypeInfo);
    byte_4D2A407 = 1;
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
    max_length_low = LODWORD(tasks->max_length);
    v2->fields._count_5__2 = max_length_low;
    v7 = sub_1C94140(bool___TypeInfo, max_length_low);
    v2->fields._endFlags_5__3 = (struct System_Boolean_array *)v7;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields._endFlags_5__3, v7, v8, v9, v10, v11, v12, v13);
    v14 = sub_1C94140(object___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._currentObjects_5__4 = (struct System_Object_array *)v14;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields._currentObjects_5__4, v14, v15, v16, v17, v18, v19, v20);
    v21 = sub_1C94140(System_Collections_IEnumerator___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v21;
    p_executes_5__5 = (unsigned int **)&v2->fields._executes_5__5;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields._executes_5__5, v21, v23, v24, v25, v26, v27, v28);
    if ( v2->fields._count_5__2 >= 1 )
    {
      v35 = 0;
      v36 = 8;
      while ( 1 )
      {
        v37 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v35 >= v37[6] )
          goto LABEL_66;
        *(_QWORD *)&v37[v36] = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v37[v36], 0, v29, v30, v31, v32, v33, v34);
        v38 = _4__this->fields.tasks;
        if ( !v38 )
          break;
        if ( v35 >= LODWORD(v38->max_length) )
          goto LABEL_66;
        this = *(WarBoardParallelSchedule__Execute_d__4_o **)((char *)&v38->obj.klass + v36 * 4);
        if ( this )
        {
          v39 = *p_executes_5__5;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
                                                               this,
                                                               this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
          if ( !v39 )
            break;
          v46 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_1C941D4(this, *(_QWORD *)(*(_QWORD *)v39 + 64LL));
            if ( !this )
            {
LABEL_67:
              v84 = sub_1C94314();
              sub_1C941C0(v84, 0);
            }
          }
          if ( v35 >= v39[6] )
LABEL_66:
            sub_1C942F8(this);
          *(_QWORD *)&v39[v36] = v46;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v39[v36], (int32_t)v46, v40, v41, v42, v43, v44, v45);
        }
        ++v35;
        v36 += 2;
        if ( (__int64)v35 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_65:
      sub_1C942F0(this, method);
    }
  }
LABEL_22:
  endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._endFlags_5__3;
  v48 = WarBoardParallelSchedule___c_TypeInfo;
  if ( !WarBoardParallelSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardParallelSchedule___c_TypeInfo);
    v48 = WarBoardParallelSchedule___c_TypeInfo;
  }
  _9__4_0 = v48->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = WarBoardParallelSchedule___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v48->static_fields->__9;
    _9__4_0 = (System_Func_bool__bool__o *)sub_1C942E4(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__4_0, v50, Method_WarBoardParallelSchedule___c__Execute_b__4_0__, 0);
    static_fields = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = _9__4_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v52, v53, v54, v55, v56, v57);
  }
  this = (WarBoardParallelSchedule__Execute_d__4_o *)System_Linq_Enumerable__All_bool_(
                                                       endFlags_5__3,
                                                       (System_Func_TSource__bool__o *)_9__4_0,
                                                       (const MethodInfo_31A5C5C *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( v2->fields._count_5__2 >= 1 )
  {
    v65 = 0;
    do
    {
      v66 = v2->fields._endFlags_5__3;
      if ( !v66 )
        goto LABEL_65;
      if ( v65 >= LODWORD(v66->max_length) )
        goto LABEL_66;
      v67 = &v66->m_Items[v65];
      if ( !*v67 )
      {
        executes_5__5 = v2->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_65;
        if ( v65 >= LODWORD(executes_5__5->max_length) )
          goto LABEL_66;
        v69 = executes_5__5->m_Items[v65];
        if ( v69 )
        {
          if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          this = (WarBoardParallelSchedule__Execute_d__4_o *)WarBoardManager__IEnumeratorExecute(v69, 0);
          if ( v65 >= LODWORD(v66->max_length) )
            goto LABEL_66;
          *v67 = ((unsigned __int8)this & 1) == 0;
          klass = v69->klass;
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          v72 = *(unsigned __int16 *)&v69->klass->_2.rank;
          if ( *(_WORD *)&v69->klass->_2.rank )
          {
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v72;
              p_offset += 2;
              if ( !v72 )
                goto LABEL_45;
            }
            v74 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
          }
          else
          {
LABEL_45:
            v74 = sub_1C6A420(v69, System_Collections_IEnumerator_TypeInfo, 1);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v74)(
                                                               v69,
                                                               *(_QWORD *)(v74 + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_65;
          v77 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_1C941D4(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_67;
          }
          if ( v65 >= currentObjects_5__4[6] )
            goto LABEL_66;
          v79 = &currentObjects_5__4[2 * v65];
          *((_QWORD *)v79 + 4) = v77;
          v78 = (GrandQuestFolderBoardItem_o *)(v79 + 8);
        }
        else
        {
          *v67 = 1;
          v75 = v2->fields._currentObjects_5__4;
          if ( !v75 )
            goto LABEL_65;
          if ( v65 >= LODWORD(v75->max_length) )
            goto LABEL_66;
          v76 = &v75->obj.klass + v65;
          LODWORD(v77) = 0;
          v76[4] = 0;
          v78 = (GrandQuestFolderBoardItem_o *)(v76 + 4);
        }
        sub_1C9403C(v78, (int32_t)v77, v58, v59, v60, v61, v62, v63);
        v80 = v2->fields._endFlags_5__3;
        if ( !v80 )
          goto LABEL_65;
        if ( v65 >= LODWORD(v80->max_length) )
          goto LABEL_66;
        if ( v80->m_Items[v65] )
        {
          if ( !_4__this )
            goto LABEL_65;
          v81 = _4__this->fields.tasks;
          if ( !v81 )
            goto LABEL_65;
          if ( v65 >= LODWORD(v81->max_length) )
            goto LABEL_66;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)v81->m_Items[v65];
          if ( !this )
            goto LABEL_65;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                               this,
                                                               this->klass->vtable._6_MoveNext.method);
        }
      }
    }
    while ( (__int64)++v65 < v2->fields._count_5__2 );
  }
  v82 = v2->fields._currentObjects_5__4;
  v2->fields.__2__current = &v82->obj;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C9403C(p__2__current, (int32_t)v82, v58, v59, v60, v61, v62, v63);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return result;
}


Il2CppObject *WarBoardParallelSchedule__Execute_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardParallelSchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardParallelSchedule__Execute_d__4__System_Collections_IEnumerator_Reset(
        WarBoardParallelSchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_WarBoardParallelSchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *WarBoardParallelSchedule__Execute_d__4__System_Collections_IEnumerator_get_Current(
        WarBoardParallelSchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardParallelSchedule__Execute_d__4__System_IDisposable_Dispose(
        WarBoardParallelSchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardParallelSchedule___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2A406 & 1) == 0 )
  {
    sub_1C94098(&WarBoardParallelSchedule___c_TypeInfo);
    byte_4D2A406 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(WarBoardParallelSchedule___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardParallelSchedule___c_TypeInfo->static_fields->__9 = (struct WarBoardParallelSchedule___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)WarBoardParallelSchedule___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardParallelSchedule___c___ctor(WarBoardParallelSchedule___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardParallelSchedule___c___Execute_b__4_0(
        WarBoardParallelSchedule___c_o *this,
        bool x,
        const MethodInfo *method)
{
  return x;
}