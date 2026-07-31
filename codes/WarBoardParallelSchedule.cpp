void WarBoardParallelSchedule___ctor(
        WarBoardParallelSchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  this->fields.tasks = taskBases;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tasks, (int32_t)taskBases, v5, v6, v7, v8, v9, v10);
}


void WarBoardParallelSchedule___ctor_45152560(
        WarBoardParallelSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5936256 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_5936256 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_21FFECC(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tasks, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}


System_Collections_IEnumerator_o *WarBoardParallelSchedule__Execute(
        WarBoardParallelSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5936257 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardParallelSchedule__Execute_d__4_TypeInfo);
    byte_5936257 = 1;
  }
  v3 = sub_21FFEBC(WarBoardParallelSchedule__Execute_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x20
  __int64 v7; // x21
  struct WarBoardTaskBase_array *v8; // x8

  StartCallback = this->fields.StartCallback;
  v3 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardParallelSchedule_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
                                           StartCallback->fields.method_code,
                                           StartCallback->fields.method);
  tasks = v3->fields.tasks;
  if ( !tasks )
    goto LABEL_12;
  max_length = tasks->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    v7 = (unsigned int)max_length;
    while ( 1 )
    {
      v8 = v3->fields.tasks;
      if ( !v8 )
        break;
      if ( v6 >= LODWORD(v8->max_length) )
        sub_21FFED4(this);
      this = (WarBoardParallelSchedule_o *)v8->m_Items[v6];
      if ( this )
        this = (WarBoardParallelSchedule_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule_o *, const MethodInfo *))this->klass->vtable._5_OnStart.methodPtr)(
                                               this,
                                               this->klass->vtable._5_OnStart.method);
      if ( v7 == ++v6 )
        return;
    }
LABEL_12:
    sub_21FFECC(this, method);
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
  System_String_o *v2; // x2
  WarBoardParallelSchedule__Execute_d__4_o *v3; // x19
  int32_t _1__state; // w8
  struct WarBoardParallelSchedule_o *_4__this; // x23
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length_low; // x1
  Il2CppClass *v8; // x0
  __int64 v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x0
  unsigned int **p_executes_5__5; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  unsigned __int64 v36; // x22
  __int64 v37; // x24
  unsigned int *v38; // x8
  struct WarBoardTaskBase_array *v39; // x8
  unsigned int *v40; // x25
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  WarBoardParallelSchedule__Execute_d__4_o *v47; // x21
  __int64 v48; // x1
  System_Collections_Generic_IEnumerable_TSource__o *endFlags_5__3; // x20
  WarBoardParallelSchedule___c_c *v50; // x0
  struct WarBoardParallelSchedule___c_StaticFields *static_fields; // x8
  System_Func_bool__bool__o *_9__4_0; // x21
  Il2CppObject *v53; // x22
  struct WarBoardParallelSchedule___c_StaticFields *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  bool result; // w0
  unsigned __int64 v68; // x21
  struct System_Boolean_array *v69; // x26
  bool *v70; // x27
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v72; // x20
  unsigned int *currentObjects_5__4; // x26
  System_Collections_IEnumerator_c *v74; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v76; // x9
  System_Collections_IEnumerator_c **p_offset; // x10
  __int64 v78; // x0
  WarBoardParallelSchedule__Execute_d__4_o *v79; // x20
  unsigned int *v80; // x0
  struct System_Boolean_array *v81; // x8
  struct WarBoardTaskBase_array *v82; // x8
  struct System_Object_array *v83; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  __int64 v85; // x0

  v3 = this;
  if ( (byte_5936259 & 1) == 0 )
  {
    sub_21FFC50(&bool___TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_All_bool___);
    sub_21FFC50(&System_Func_bool__bool__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator___TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&Method_WarBoardParallelSchedule___c__Execute_b__4_0__);
    sub_21FFC50(&WarBoardParallelSchedule___c_TypeInfo);
    this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_21FFC50(&WarBoardManager_TypeInfo);
    byte_5936259 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_64;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_64;
    max_length_low = LODWORD(tasks->max_length);
    v8 = bool___TypeInfo;
    v3->fields._count_5__2 = max_length_low;
    v9 = sub_21FFD10(v8, max_length_low);
    v3->fields._endFlags_5__3 = (struct System_Boolean_array *)v9;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields._endFlags_5__3, v9, v10, v11, v12, v13, v14, v15);
    v16 = sub_21FFD10(object___TypeInfo, (unsigned int)v3->fields._count_5__2);
    v3->fields._currentObjects_5__4 = (struct System_Object_array *)v16;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields._currentObjects_5__4, v16, v17, v18, v19, v20, v21, v22);
    v23 = sub_21FFD10(System_Collections_IEnumerator___TypeInfo, (unsigned int)v3->fields._count_5__2);
    v3->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v23;
    p_executes_5__5 = (unsigned int **)&v3->fields._executes_5__5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields._executes_5__5, v23, v25, v26, v27, v28, v29, v30);
    if ( v3->fields._count_5__2 >= 1 )
    {
      v36 = 0;
      v37 = 8;
      while ( 1 )
      {
        v38 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v36 >= v38[6] )
          goto LABEL_65;
        *(_QWORD *)&v38[v37] = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v38[v37], 0, v2, v31, v32, v33, v34, v35);
        v39 = _4__this->fields.tasks;
        if ( !v39 )
          break;
        if ( v36 >= LODWORD(v39->max_length) )
          goto LABEL_65;
        this = *(WarBoardParallelSchedule__Execute_d__4_o **)((char *)&v39->obj.klass + v37 * 4);
        if ( this )
        {
          v40 = *p_executes_5__5;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
                                                               this,
                                                               this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
          if ( !v40 )
            break;
          v47 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_21FFDA4(this, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
            if ( !this )
            {
LABEL_66:
              v85 = sub_21FFEF0(this, v48);
              sub_21FFD90(v85, 0);
            }
          }
          if ( v36 >= v40[6] )
LABEL_65:
            sub_21FFED4(this);
          *(_QWORD *)&v40[v37] = v47;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40[v37], (int32_t)v47, v41, v42, v43, v44, v45, v46);
        }
        ++v36;
        v37 += 2;
        if ( (__int64)v36 >= v3->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_64:
      sub_21FFECC(this, method);
    }
  }
LABEL_22:
  endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._endFlags_5__3;
  v50 = WarBoardParallelSchedule___c_TypeInfo;
  if ( !*(&WarBoardParallelSchedule___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardParallelSchedule___c_TypeInfo, method, v2);
    v50 = WarBoardParallelSchedule___c_TypeInfo;
  }
  static_fields = v50->static_fields;
  _9__4_0 = static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v50->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v50, method, v2);
      static_fields = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_bool__bool__o *)sub_21FFEBC(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__4_0, v53, Method_WarBoardParallelSchedule___c__Execute_b__4_0__, 0);
    v54 = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    v54->__9__4_0 = _9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v54->__9__4_0, (int32_t)_9__4_0, v55, v56, v57, v58, v59, v60);
  }
  this = (WarBoardParallelSchedule__Execute_d__4_o *)System_Linq_Enumerable__All_bool_(
                                                       endFlags_5__3,
                                                       (System_Func_TSource__bool__o *)_9__4_0,
                                                       (const MethodInfo_3830F1C *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( v3->fields._count_5__2 >= 1 )
  {
    v68 = 0;
    do
    {
      v69 = v3->fields._endFlags_5__3;
      if ( !v69 )
        goto LABEL_64;
      if ( v68 >= LODWORD(v69->max_length) )
        goto LABEL_65;
      v70 = &v69->m_Items[v68];
      if ( !*v70 )
      {
        executes_5__5 = v3->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_64;
        if ( v68 >= LODWORD(executes_5__5->max_length) )
          goto LABEL_65;
        v72 = executes_5__5->m_Items[v68];
        if ( v72 )
        {
          if ( !*(&WarBoardManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, method, v61);
          this = (WarBoardParallelSchedule__Execute_d__4_o *)WarBoardManager__IEnumeratorExecute(v72, 0);
          if ( v68 >= LODWORD(v69->max_length) )
            goto LABEL_65;
          currentObjects_5__4 = (unsigned int *)v3->fields._currentObjects_5__4;
          v74 = System_Collections_IEnumerator_TypeInfo;
          *v70 = ((unsigned __int8)this & 1) == 0;
          klass = v72->klass;
          v76 = *(unsigned __int16 *)&v72->klass->_2.rank;
          if ( *(_WORD *)&v72->klass->_2.rank )
          {
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != v74 )
            {
              --v76;
              p_offset += 2;
              if ( !v76 )
                goto LABEL_45;
            }
            v78 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
          }
          else
          {
LABEL_45:
            v78 = sub_2237E2C(v72, v74, 1);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v78)(
                                                               v72,
                                                               *(_QWORD *)(v78 + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_64;
          v79 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_21FFDA4(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_66;
          }
          if ( v68 >= currentObjects_5__4[6] )
            goto LABEL_65;
        }
        else
        {
          currentObjects_5__4 = (unsigned int *)v3->fields._currentObjects_5__4;
          *v70 = 1;
          if ( !currentObjects_5__4 )
            goto LABEL_64;
          if ( v68 >= currentObjects_5__4[6] )
            goto LABEL_65;
          v79 = 0;
        }
        v80 = &currentObjects_5__4[2 * v68];
        *((_QWORD *)v80 + 4) = v79;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v80 + 8), (int32_t)v79, v61, v62, v63, v64, v65, v66);
        v81 = v3->fields._endFlags_5__3;
        if ( !v81 )
          goto LABEL_64;
        if ( v68 >= LODWORD(v81->max_length) )
          goto LABEL_65;
        if ( v81->m_Items[v68] )
        {
          if ( !_4__this )
            goto LABEL_64;
          v82 = _4__this->fields.tasks;
          if ( !v82 )
            goto LABEL_64;
          if ( v68 >= LODWORD(v82->max_length) )
            goto LABEL_65;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)v82->m_Items[v68];
          if ( !this )
            goto LABEL_64;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                               this,
                                                               this->klass->vtable._6_MoveNext.method);
        }
      }
    }
    while ( (__int64)++v68 < v3->fields._count_5__2 );
  }
  v83 = v3->fields._currentObjects_5__4;
  v3->fields.__2__current = &v83->obj;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
  sub_21FFBF4(p__2__current, (int32_t)v83, v61, v62, v63, v64, v65, v66);
  result = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardParallelSchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5936258 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardParallelSchedule___c_TypeInfo);
    byte_5936258 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardParallelSchedule___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardParallelSchedule___c_TypeInfo->static_fields->__9 = (struct WarBoardParallelSchedule___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardParallelSchedule___c_TypeInfo->static_fields,
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