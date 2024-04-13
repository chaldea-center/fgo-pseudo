void __fastcall WarBoardParallelSchedule___ctor(
        WarBoardParallelSchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  this->fields.tasks = taskBases;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tasks,
    (System_Int32_array **)taskBases,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardParallelSchedule___ctor_22972048(
        WarBoardParallelSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  struct WarBoardTaskBase_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E75E2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__,
      (_DWORD)taskBases,
      (_DWORD)method,
      v3);
    byte_42E75E2 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( !taskBases )
    sub_B5D69C(v6, v7);
  v8 = (struct WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tasks,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


System_Collections_IEnumerator_o *__fastcall WarBoardParallelSchedule__Execute(
        WarBoardParallelSchedule_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E75E3 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardParallelSchedule__Execute_d__4_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E75E3 = 1;
  }
  v5 = sub_B5D694(WarBoardParallelSchedule__Execute_d__4_TypeInfo);
  WarBoardParallelSchedule__Execute_d__4___ctor((WarBoardParallelSchedule__Execute_d__4_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardParallelSchedule__OnEnd(WarBoardParallelSchedule_o *this, const MethodInfo *method)
{
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardParallelSchedule__OnStart(WarBoardParallelSchedule_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 v6; // x9
  unsigned __int64 v7; // x20
  signed __int64 v8; // x21
  __int64 v9; // x0

  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  tasks = this->fields.tasks;
  if ( !tasks )
LABEL_9:
    sub_B5D69C(v3, v4);
  v6 = *(_QWORD *)&tasks->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    v8 = (int)v6;
    while ( 1 )
    {
      if ( v7 >= tasks->max_length )
      {
        v9 = sub_B5D6C8(v3);
        sub_B5D668(v9, 0LL);
      }
      v3 = (__int64)tasks->m_Items[v7];
      if ( v3 )
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 392LL))(
               v3,
               *(_QWORD *)(*(_QWORD *)v3 + 400LL));
      if ( (__int64)++v7 >= v8 )
        break;
      tasks = this->fields.tasks;
      if ( !tasks )
        goto LABEL_9;
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardParallelSchedule__Execute_d__4_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int32_t _1__state; // w8
  struct WarBoardParallelSchedule_o *_4__this; // x24
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length; // x1
  System_Collections_Generic_IEnumerable_TSource__o **p_endFlags_5__3; // x20
  unsigned int **p_executes_5__5; // x21
  unsigned __int64 v38; // x23
  __int64 v39; // x25
  unsigned int *v40; // x8
  long double v41; // q0
  struct WarBoardTaskBase_array *v42; // x8
  unsigned int *v43; // x26
  WarBoardParallelSchedule__Execute_d__4_o *v44; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x21
  WarBoardParallelSchedule___c_c *v46; // x0
  struct WarBoardParallelSchedule___c_StaticFields *static_fields; // x8
  System_Func_bool__bool__o *_9__4_0; // x22
  Il2CppObject *v49; // x23
  struct WarBoardParallelSchedule___c_StaticFields *v50; // x0
  bool result; // w0
  unsigned __int64 v52; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x27
  bool *v54; // x28
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v56; // x21
  __int64 v57; // x3
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x27
  unsigned __int64 v60; // x10
  System_Collections_IEnumerator_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_Object_array *v63; // x8
  Il2CppClass **v64; // x0
  unsigned int *v65; // x0
  WarBoardParallelSchedule__Execute_d__4_o *v66; // x21
  unsigned int *v67; // x0
  long double v68; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x8
  struct WarBoardTaskBase_array *v70; // x8
  __int64 v71; // x0
  __int64 v72; // x0

  v4 = this;
  if ( (byte_42E5FA9 & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_All_bool___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_bool__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_bool__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_IEnumerator___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&object___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_WarBoardParallelSchedule___c__Execute_b__4_0__, v23, v24, v25);
    sub_B5D5C4(&WarBoardParallelSchedule___c_TypeInfo, v26, v27, v28);
    this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B5D5C4(&WarBoardManager_TypeInfo, v29, v30, v31);
    byte_42E5FA9 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o **)&v4->fields._endFlags_5__3;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_68;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_68;
    max_length = tasks->max_length;
    v4->fields._count_5__2 = max_length;
    p_endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o **)&v4->fields._endFlags_5__3;
    v4->fields._endFlags_5__3 = (struct System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, max_length);
    sub_B5D560(&v4->fields._endFlags_5__3);
    v4->fields._currentObjects_5__4 = (struct System_Object_array *)sub_B5D5DC(
                                                                      object___TypeInfo,
                                                                      (unsigned int)v4->fields._count_5__2);
    sub_B5D560(&v4->fields._currentObjects_5__4);
    p_executes_5__5 = (unsigned int **)&v4->fields._executes_5__5;
    v4->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)sub_B5D5DC(
                                                                                 System_Collections_IEnumerator___TypeInfo,
                                                                                 (unsigned int)v4->fields._count_5__2);
    sub_B5D560(&v4->fields._executes_5__5);
    if ( v4->fields._count_5__2 >= 1 )
    {
      v38 = 0LL;
      v39 = 8LL;
      while ( 1 )
      {
        v40 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v38 >= v40[6] )
          goto LABEL_69;
        *(_QWORD *)&v40[v39] = 0LL;
        *(__n128 *)&v41 = sub_B5D560(&v40[v39]);
        v42 = _4__this->fields.tasks;
        if ( !v42 )
          break;
        if ( v38 >= v42->max_length )
          goto LABEL_69;
        this = *(WarBoardParallelSchedule__Execute_d__4_o **)((char *)&v42->obj.klass + v39 * 4);
        if ( this )
        {
          v43 = *p_executes_5__5;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer, long double))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr,
                                                               v41);
          if ( !v43 )
            break;
          v44 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
            if ( !this )
            {
LABEL_70:
              v72 = sub_B5D6BC();
              sub_B5D668(v72, 0LL);
            }
          }
          if ( v38 >= v43[6] )
          {
LABEL_69:
            v71 = sub_B5D6C8(this);
            sub_B5D668(v71, 0LL);
          }
          *(_QWORD *)&v43[v39] = v44;
          sub_B5D560(&v43[v39]);
        }
        ++v38;
        v39 += 2LL;
        if ( (__int64)v38 >= v4->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_68:
      sub_B5D69C(this, method);
    }
  }
LABEL_22:
  v45 = *p_endFlags_5__3;
  v46 = WarBoardParallelSchedule___c_TypeInfo;
  if ( (BYTE3(WarBoardParallelSchedule___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardParallelSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardParallelSchedule___c_TypeInfo);
    v46 = WarBoardParallelSchedule___c_TypeInfo;
  }
  static_fields = v46->static_fields;
  _9__4_0 = static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      static_fields = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_bool__bool__o *)sub_B5D694(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(
      _9__4_0,
      v49,
      Method_WarBoardParallelSchedule___c__Execute_b__4_0__,
      (const MethodInfo_279B910 *)Method_System_Func_bool__bool___ctor__);
    v50 = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    v50->__9__4_0 = _9__4_0;
    sub_B5D560(&v50->__9__4_0);
  }
  this = (WarBoardParallelSchedule__Execute_d__4_o *)System_Linq_Enumerable__All_bool_(
                                                       v45,
                                                       (System_Func_TSource__bool__o *)_9__4_0,
                                                       (const MethodInfo_1C97808 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( v4->fields._count_5__2 > 0 )
  {
    v52 = 0LL;
    do
    {
      v53 = *p_endFlags_5__3;
      if ( !*p_endFlags_5__3 )
        goto LABEL_68;
      if ( v52 >= LODWORD(v53[1].monitor) )
        goto LABEL_69;
      v54 = (bool *)&v53[2] + v52;
      if ( !*v54 )
      {
        executes_5__5 = v4->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_68;
        if ( v52 >= executes_5__5->max_length )
          goto LABEL_69;
        v56 = executes_5__5->m_Items[v52];
        if ( v56 )
        {
          if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)WarBoardManager__IEnumeratorExecute(v56, 0LL);
          if ( v52 >= LODWORD(v53[1].monitor) )
            goto LABEL_69;
          *v54 = ((unsigned __int8)this & 1) == 0;
          klass = v56->klass;
          currentObjects_5__4 = (unsigned int *)v4->fields._currentObjects_5__4;
          if ( *(_WORD *)&v56->klass->_2.bitflags1 )
          {
            v60 = 0LL;
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v60;
              p_offset += 2;
              if ( v60 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
                goto LABEL_48;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_48:
            p_method = sub_AF54C0(v56, System_Collections_IEnumerator_TypeInfo, 1LL, v57);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v56,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_68;
          v66 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B5D684(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_70;
          }
          if ( v52 >= currentObjects_5__4[6] )
            goto LABEL_69;
          v67 = &currentObjects_5__4[2 * v52];
          *((_QWORD *)v67 + 4) = v66;
          v65 = v67 + 8;
        }
        else
        {
          *v54 = 1;
          v63 = v4->fields._currentObjects_5__4;
          if ( !v63 )
            goto LABEL_68;
          if ( v52 >= v63->max_length )
            goto LABEL_69;
          v64 = &v63->obj.klass + v52;
          v64[4] = 0LL;
          v65 = (unsigned int *)(v64 + 4);
        }
        *(__n128 *)&v68 = sub_B5D560(v65);
        v69 = *p_endFlags_5__3;
        if ( !*p_endFlags_5__3 )
          goto LABEL_68;
        if ( v52 >= LODWORD(v69[1].monitor) )
          goto LABEL_69;
        if ( *((_BYTE *)&v69[2].klass + v52) )
        {
          if ( !_4__this )
            goto LABEL_68;
          v70 = _4__this->fields.tasks;
          if ( !v70 )
            goto LABEL_68;
          if ( v52 >= v70->max_length )
            goto LABEL_69;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)v70->m_Items[v52];
          if ( !this )
            goto LABEL_68;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer, long double))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr,
                                                               v68);
        }
      }
    }
    while ( (__int64)++v52 < v4->fields._count_5__2 );
  }
  v4->fields.__2__current = &v4->fields._currentObjects_5__4->obj;
  sub_B5D560(&v4->fields.__2__current);
  result = 1;
  v4->fields.__1__state = 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardParallelSchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardParallelSchedule___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FA8 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardParallelSchedule___c_TypeInfo, v1, v2, v3);
    byte_42E5FA8 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardParallelSchedule___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardParallelSchedule___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardParallelSchedule___c_o *)v4;
  sub_B5D560(static_fields);
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