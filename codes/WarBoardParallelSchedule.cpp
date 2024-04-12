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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tasks,
    (System_Int32_array **)taskBases,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardParallelSchedule___ctor_22671844(
        WarBoardParallelSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct WarBoardTaskBase_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42AEA8A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_42AEA8A = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( !taskBases )
    sub_B52A5C(v5, v6);
  v7 = (struct WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = v7;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.tasks, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
}


System_Collections_IEnumerator_o *__fastcall WarBoardParallelSchedule__Execute(
        WarBoardParallelSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42AEA8B & 1) == 0 )
  {
    sub_B52984(&WarBoardParallelSchedule__Execute_d__4_TypeInfo);
    byte_42AEA8B = 1;
  }
  v3 = sub_B52A54(WarBoardParallelSchedule__Execute_d__4_TypeInfo);
  WarBoardParallelSchedule__Execute_d__4___ctor((WarBoardParallelSchedule__Execute_d__4_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
    sub_B52A5C(v3, v4);
  v6 = *(_QWORD *)&tasks->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    v8 = (int)v6;
    while ( 1 )
    {
      if ( v7 >= tasks->max_length )
      {
        v9 = sub_B52A88(v3);
        sub_B52A28(v9, 0LL);
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
  WarBoardParallelSchedule__Execute_d__4_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardParallelSchedule_o *_4__this; // x24
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length; // x1
  System_Collections_Generic_IEnumerable_TSource__o **p_endFlags_5__3; // x20
  unsigned int **p_executes_5__5; // x21
  unsigned __int64 v9; // x23
  __int64 v10; // x25
  unsigned int *v11; // x8
  long double v12; // q0
  struct WarBoardTaskBase_array *v13; // x8
  unsigned int *v14; // x26
  WarBoardParallelSchedule__Execute_d__4_o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  WarBoardParallelSchedule___c_c *v17; // x0
  struct WarBoardParallelSchedule___c_StaticFields *static_fields; // x8
  System_Func_bool__bool__o *_9__4_0; // x22
  Il2CppObject *v20; // x23
  struct WarBoardParallelSchedule___c_StaticFields *v21; // x0
  bool result; // w0
  unsigned __int64 v23; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x27
  bool *v25; // x28
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v27; // x21
  __int64 v28; // x3
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x27
  unsigned __int64 v31; // x10
  System_Collections_IEnumerator_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_Object_array *v34; // x8
  Il2CppClass **v35; // x0
  unsigned int *v36; // x0
  WarBoardParallelSchedule__Execute_d__4_o *v37; // x21
  unsigned int *v38; // x0
  long double v39; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x8
  struct WarBoardTaskBase_array *v41; // x8
  __int64 v42; // x0
  __int64 v43; // x0

  v2 = this;
  if ( (byte_42AD730 & 1) == 0 )
  {
    sub_B52984(&bool___TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_All_bool___);
    sub_B52984(&Method_System_Func_bool__bool___ctor__);
    sub_B52984(&System_Func_bool__bool__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator___TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&Method_WarBoardParallelSchedule___c__Execute_b__4_0__);
    sub_B52984(&WarBoardParallelSchedule___c_TypeInfo);
    this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B52984(&WarBoardManager_TypeInfo);
    byte_42AD730 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o **)&v2->fields._endFlags_5__3;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_68;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_68;
    max_length = tasks->max_length;
    v2->fields._count_5__2 = max_length;
    p_endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o **)&v2->fields._endFlags_5__3;
    v2->fields._endFlags_5__3 = (struct System_Boolean_array *)sub_B5299C(bool___TypeInfo, max_length);
    sub_B52920(&v2->fields._endFlags_5__3);
    v2->fields._currentObjects_5__4 = (struct System_Object_array *)sub_B5299C(
                                                                      object___TypeInfo,
                                                                      (unsigned int)v2->fields._count_5__2);
    sub_B52920(&v2->fields._currentObjects_5__4);
    p_executes_5__5 = (unsigned int **)&v2->fields._executes_5__5;
    v2->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)sub_B5299C(
                                                                                 System_Collections_IEnumerator___TypeInfo,
                                                                                 (unsigned int)v2->fields._count_5__2);
    sub_B52920(&v2->fields._executes_5__5);
    if ( v2->fields._count_5__2 >= 1 )
    {
      v9 = 0LL;
      v10 = 8LL;
      while ( 1 )
      {
        v11 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v9 >= v11[6] )
          goto LABEL_69;
        *(_QWORD *)&v11[v10] = 0LL;
        *(__n128 *)&v12 = sub_B52920(&v11[v10]);
        v13 = _4__this->fields.tasks;
        if ( !v13 )
          break;
        if ( v9 >= v13->max_length )
          goto LABEL_69;
        this = *(WarBoardParallelSchedule__Execute_d__4_o **)((char *)&v13->obj.klass + v10 * 4);
        if ( this )
        {
          v14 = *p_executes_5__5;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer, long double))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr,
                                                               v12);
          if ( !v14 )
            break;
          v15 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B52A44(this, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
            if ( !this )
            {
LABEL_70:
              v43 = sub_B52A7C();
              sub_B52A28(v43, 0LL);
            }
          }
          if ( v9 >= v14[6] )
          {
LABEL_69:
            v42 = sub_B52A88(this);
            sub_B52A28(v42, 0LL);
          }
          *(_QWORD *)&v14[v10] = v15;
          sub_B52920(&v14[v10]);
        }
        ++v9;
        v10 += 2LL;
        if ( (__int64)v9 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_68:
      sub_B52A5C(this, method);
    }
  }
LABEL_22:
  v16 = *p_endFlags_5__3;
  v17 = WarBoardParallelSchedule___c_TypeInfo;
  if ( (BYTE3(WarBoardParallelSchedule___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardParallelSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardParallelSchedule___c_TypeInfo);
    v17 = WarBoardParallelSchedule___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__4_0 = static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_bool__bool__o *)sub_B52A54(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(
      _9__4_0,
      v20,
      Method_WarBoardParallelSchedule___c__Execute_b__4_0__,
      (const MethodInfo_278223C *)Method_System_Func_bool__bool___ctor__);
    v21 = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    v21->__9__4_0 = _9__4_0;
    sub_B52920(&v21->__9__4_0);
  }
  this = (WarBoardParallelSchedule__Execute_d__4_o *)System_Linq_Enumerable__All_bool_(
                                                       v16,
                                                       (System_Func_TSource__bool__o *)_9__4_0,
                                                       (const MethodInfo_1A53308 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( v2->fields._count_5__2 > 0 )
  {
    v23 = 0LL;
    do
    {
      v24 = *p_endFlags_5__3;
      if ( !*p_endFlags_5__3 )
        goto LABEL_68;
      if ( v23 >= LODWORD(v24[1].monitor) )
        goto LABEL_69;
      v25 = (bool *)&v24[2] + v23;
      if ( !*v25 )
      {
        executes_5__5 = v2->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_68;
        if ( v23 >= executes_5__5->max_length )
          goto LABEL_69;
        v27 = executes_5__5->m_Items[v23];
        if ( v27 )
        {
          if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)WarBoardManager__IEnumeratorExecute(v27, 0LL);
          if ( v23 >= LODWORD(v24[1].monitor) )
            goto LABEL_69;
          *v25 = ((unsigned __int8)this & 1) == 0;
          klass = v27->klass;
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          if ( *(_WORD *)&v27->klass->_2.bitflags1 )
          {
            v31 = 0LL;
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v31;
              p_offset += 2;
              if ( v31 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
                goto LABEL_48;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_48:
            p_method = sub_AEB880(v27, System_Collections_IEnumerator_TypeInfo, 1LL, v28);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v27,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_68;
          v37 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B52A44(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_70;
          }
          if ( v23 >= currentObjects_5__4[6] )
            goto LABEL_69;
          v38 = &currentObjects_5__4[2 * v23];
          *((_QWORD *)v38 + 4) = v37;
          v36 = v38 + 8;
        }
        else
        {
          *v25 = 1;
          v34 = v2->fields._currentObjects_5__4;
          if ( !v34 )
            goto LABEL_68;
          if ( v23 >= v34->max_length )
            goto LABEL_69;
          v35 = &v34->obj.klass + v23;
          v35[4] = 0LL;
          v36 = (unsigned int *)(v35 + 4);
        }
        *(__n128 *)&v39 = sub_B52920(v36);
        v40 = *p_endFlags_5__3;
        if ( !*p_endFlags_5__3 )
          goto LABEL_68;
        if ( v23 >= LODWORD(v40[1].monitor) )
          goto LABEL_69;
        if ( *((_BYTE *)&v40[2].klass + v23) )
        {
          if ( !_4__this )
            goto LABEL_68;
          v41 = _4__this->fields.tasks;
          if ( !v41 )
            goto LABEL_68;
          if ( v23 >= v41->max_length )
            goto LABEL_69;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)v41->m_Items[v23];
          if ( !this )
            goto LABEL_68;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer, long double))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr,
                                                               v39);
        }
      }
    }
    while ( (__int64)++v23 < v2->fields._count_5__2 );
  }
  v2->fields.__2__current = &v2->fields._currentObjects_5__4->obj;
  sub_B52920(&v2->fields.__2__current);
  result = 1;
  v2->fields.__1__state = 1;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_WarBoardParallelSchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject *v1; // x19
  struct WarBoardParallelSchedule___c_StaticFields *static_fields; // x0

  if ( (byte_42AD72F & 1) == 0 )
  {
    sub_B52984(&WarBoardParallelSchedule___c_TypeInfo);
    byte_42AD72F = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardParallelSchedule___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = WarBoardParallelSchedule___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardParallelSchedule___c_o *)v1;
  sub_B52920(static_fields);
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