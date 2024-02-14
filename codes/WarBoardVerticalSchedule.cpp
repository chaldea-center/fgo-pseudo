void __fastcall WarBoardVerticalSchedule___ctor(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  this->fields.tasks = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.tasks, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardVerticalSchedule___ctor_26264624(
        WarBoardVerticalSchedule_o *this,
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tasks,
    (System_Int32_array **)taskBases,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardVerticalSchedule___ctor_26264676(
        WarBoardVerticalSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  struct WarBoardTaskBase_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4215660 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_4215660 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( !taskBases )
    sub_B0D97C(v5);
  v6 = (struct WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = v6;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.tasks, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
}


System_Collections_IEnumerator_o *__fastcall WarBoardVerticalSchedule__Execute(
        WarBoardVerticalSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4215662 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardVerticalSchedule__Execute_d__7_TypeInfo, method);
    byte_4215662 = 1;
  }
  v4 = sub_B0D974(WarBoardVerticalSchedule__Execute_d__7_TypeInfo, method, v2);
  WarBoardVerticalSchedule__Execute_d__7___ctor((WarBoardVerticalSchedule__Execute_d__7_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall WarBoardVerticalSchedule__OnEnd(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardVerticalSchedule__OnStart(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  WarBoardTaskBase_o *v3; // x0
  struct WarBoardTaskBase_array *tasks; // x8

  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  tasks = this->fields.tasks;
  this->fields.currentExecuteIndex = 0;
  if ( !tasks )
    goto LABEL_6;
  if ( (int)tasks->max_length >= 1 )
  {
    v3 = tasks->m_Items[0];
    if ( v3 )
    {
      ((void (__fastcall *)(WarBoardTaskBase_o *, Il2CppMethodPointer))v3->klass->vtable._5_OnStart.method)(
        v3,
        v3->klass->vtable._6_OnEnd.methodPtr);
      return;
    }
LABEL_6:
    sub_B0D97C(v3);
  }
}


void __fastcall WarBoardVerticalSchedule__SetTask(
        WarBoardVerticalSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  WarBoardVerticalSchedule_o *v4; // x19
  System_Int32_array **v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v4 = this;
  if ( (byte_4215661 & 1) == 0 )
  {
    this = (WarBoardVerticalSchedule_o *)sub_B0D8A4(
                                           &Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__,
                                           taskBases);
    byte_4215661 = 1;
  }
  if ( !taskBases )
    sub_B0D97C(this);
  v5 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  v4->fields.tasks = (struct WarBoardTaskBase_array *)v5;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.tasks, v5, v6, v7, v8, v9, v10, v11);
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
  __int64 v2; // x2
  WarBoardVerticalSchedule__Execute_d__7_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t _1__state; // w8
  struct WarBoardVerticalSchedule_o *_4__this; // x24
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length; // x1
  __int64 v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_endFlags_5__3; // x20
  __int64 v19; // x0
  __int64 v20; // x0
  unsigned int **p_executes_5__5; // x21
  unsigned __int64 v22; // x23
  __int64 v23; // x25
  unsigned int *v24; // x8
  long double v25; // q0
  struct WarBoardTaskBase_array *v26; // x8
  unsigned int *v27; // x26
  WarBoardVerticalSchedule__Execute_d__7_o *v28; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x21
  WarBoardVerticalSchedule___c_c *v30; // x0
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x8
  System_Func_bool__bool__o *_9__7_0; // x22
  Il2CppObject *v33; // x23
  struct WarBoardVerticalSchedule___c_StaticFields *v34; // x0
  bool result; // w0
  int count_5__2; // w8
  unsigned __int64 v37; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x27
  bool *v39; // x28
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v41; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x27
  unsigned __int64 v44; // x10
  System_Collections_IEnumerator_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_Object_array *v47; // x8
  Il2CppClass **v48; // x0
  unsigned int *v49; // x0
  WarBoardVerticalSchedule__Execute_d__7_o *v50; // x1
  WarBoardVerticalSchedule__Execute_d__7_o *v51; // x21
  unsigned int *v52; // x0
  long double v53; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x8
  struct WarBoardTaskBase_array *v55; // x8
  struct WarBoardTaskBase_array *v56; // x8
  __int64 currentExecuteIndex; // x9
  int v58; // w10
  struct System_Object_array *v59; // x1
  __int64 v60; // x0
  __int64 v61; // x0

  v3 = this;
  if ( (byte_4211F26 & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_All_bool___, v4);
    sub_B0D8A4(&Method_System_Func_bool__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_bool__bool__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator___TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&object___TypeInfo, v9);
    sub_B0D8A4(&Method_WarBoardVerticalSchedule___c__Execute_b__7_0__, v10);
    sub_B0D8A4(&WarBoardVerticalSchedule___c_TypeInfo, v11);
    this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_B0D8A4(&WarBoardManager_TypeInfo, v12);
    byte_4211F26 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o **)&v3->fields._endFlags_5__3;
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_75;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_75;
    max_length = tasks->max_length;
    v3->fields._count_5__2 = max_length;
    v17 = sub_B0D8BC(bool___TypeInfo, max_length);
    p_endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o **)&v3->fields._endFlags_5__3;
    v3->fields._endFlags_5__3 = (struct System_Boolean_array *)v17;
    sub_B0D840(&v3->fields._endFlags_5__3, v17);
    v19 = sub_B0D8BC(object___TypeInfo, (unsigned int)v3->fields._count_5__2);
    v3->fields._currentObjects_5__4 = (struct System_Object_array *)v19;
    sub_B0D840(&v3->fields._currentObjects_5__4, v19);
    v20 = sub_B0D8BC(System_Collections_IEnumerator___TypeInfo, (unsigned int)v3->fields._count_5__2);
    p_executes_5__5 = (unsigned int **)&v3->fields._executes_5__5;
    v3->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v20;
    sub_B0D840(&v3->fields._executes_5__5, v20);
    if ( v3->fields._count_5__2 >= 1 )
    {
      v22 = 0LL;
      v23 = 8LL;
      while ( 1 )
      {
        v24 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v22 >= v24[6] )
          goto LABEL_76;
        *(_QWORD *)&v24[v23] = 0LL;
        *(__n128 *)&v25 = sub_B0D840(&v24[v23], 0LL);
        v26 = _4__this->fields.tasks;
        if ( !v26 )
          break;
        if ( v22 >= v26->max_length )
          goto LABEL_76;
        this = *(WarBoardVerticalSchedule__Execute_d__7_o **)((char *)&v26->obj.klass + v23 * 4);
        if ( this )
        {
          v27 = *p_executes_5__5;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer, long double))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr,
                                                               v25);
          if ( !v27 )
            break;
          v28 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v27 + 64LL));
            if ( !this )
            {
LABEL_77:
              v61 = sub_B0D99C();
              sub_B0D948(v61, 0LL);
            }
          }
          if ( v22 >= v27[6] )
          {
LABEL_76:
            v60 = sub_B0D9A8(this);
            sub_B0D948(v60, 0LL);
          }
          *(_QWORD *)&v27[v23] = v28;
          sub_B0D840(&v27[v23], v28);
        }
        ++v22;
        v23 += 2LL;
        if ( (__int64)v22 >= v3->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_75:
      sub_B0D97C(this);
    }
  }
LABEL_22:
  v29 = *p_endFlags_5__3;
  v30 = WarBoardVerticalSchedule___c_TypeInfo;
  if ( (BYTE3(WarBoardVerticalSchedule___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardVerticalSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardVerticalSchedule___c_TypeInfo);
    v30 = WarBoardVerticalSchedule___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_bool__bool__o *)sub_B0D974(System_Func_bool__bool__TypeInfo, method, v2);
    System_Func_bool__bool____ctor(
      _9__7_0,
      v33,
      Method_WarBoardVerticalSchedule___c__Execute_b__7_0__,
      (const MethodInfo_2610FC8 *)Method_System_Func_bool__bool___ctor__);
    v34 = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    v34->__9__7_0 = _9__7_0;
    sub_B0D840(&v34->__9__7_0, _9__7_0);
  }
  this = (WarBoardVerticalSchedule__Execute_d__7_o *)System_Linq_Enumerable__All_bool_(
                                                       v29,
                                                       (System_Func_TSource__bool__o *)_9__7_0,
                                                       (const MethodInfo_17180C4 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  count_5__2 = v3->fields._count_5__2;
  if ( count_5__2 > 0 )
  {
    v37 = 0LL;
    do
    {
      v38 = *p_endFlags_5__3;
      if ( !*p_endFlags_5__3 )
        goto LABEL_75;
      if ( v37 >= LODWORD(v38[1].monitor) )
        goto LABEL_76;
      v39 = (bool *)&v38[2] + v37;
      if ( !*v39 )
      {
        executes_5__5 = v3->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_75;
        if ( v37 >= executes_5__5->max_length )
          goto LABEL_76;
        v41 = executes_5__5->m_Items[v37];
        if ( v41 )
        {
          if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)WarBoardManager__IEnumeratorExecute(v41, 0LL);
          if ( v37 >= LODWORD(v38[1].monitor) )
            goto LABEL_76;
          *v39 = ((unsigned __int8)this & 1) == 0;
          klass = v41->klass;
          currentObjects_5__4 = (unsigned int *)v3->fields._currentObjects_5__4;
          if ( *(_WORD *)&v41->klass->_2.bitflags1 )
          {
            v44 = 0LL;
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v44;
              p_offset += 2;
              if ( v44 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
                goto LABEL_48;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_48:
            p_method = sub_AA67A0(v41, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v41,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_75;
          v51 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_B0D964(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_77;
          }
          if ( v37 >= currentObjects_5__4[6] )
            goto LABEL_76;
          v52 = &currentObjects_5__4[2 * v37];
          *((_QWORD *)v52 + 4) = v51;
          v49 = v52 + 8;
          v50 = v51;
        }
        else
        {
          *v39 = 1;
          v47 = v3->fields._currentObjects_5__4;
          if ( !v47 )
            goto LABEL_75;
          if ( v37 >= v47->max_length )
            goto LABEL_76;
          v48 = &v47->obj.klass + v37;
          v48[4] = 0LL;
          v49 = (unsigned int *)(v48 + 4);
          v50 = 0LL;
        }
        *(__n128 *)&v53 = sub_B0D840(v49, v50);
        v54 = *p_endFlags_5__3;
        if ( !*p_endFlags_5__3 )
          goto LABEL_75;
        if ( v37 >= LODWORD(v54[1].monitor) )
          goto LABEL_76;
        if ( *((_BYTE *)&v54[2].klass + v37) )
        {
          if ( !_4__this )
            goto LABEL_75;
          v55 = _4__this->fields.tasks;
          ++_4__this->fields.currentExecuteIndex;
          if ( !v55 )
            goto LABEL_75;
          if ( v37 >= v55->max_length )
            goto LABEL_76;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)v55->m_Items[v37];
          if ( !this )
            goto LABEL_75;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer, long double))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr,
                                                               v53);
          v56 = _4__this->fields.tasks;
          if ( !v56 )
            goto LABEL_75;
          currentExecuteIndex = _4__this->fields.currentExecuteIndex;
          v58 = v56->max_length;
          if ( (int)currentExecuteIndex < v58 )
          {
            if ( (unsigned int)currentExecuteIndex >= v58 )
              goto LABEL_76;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)v56->m_Items[currentExecuteIndex];
            if ( !this )
              goto LABEL_75;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                 this,
                                                                 this->klass->vtable._6_MoveNext.methodPtr);
          }
        }
        else if ( !_4__this )
        {
          goto LABEL_75;
        }
        if ( (__int64)v37 >= _4__this->fields.currentExecuteIndex )
          break;
        count_5__2 = v3->fields._count_5__2;
      }
    }
    while ( (__int64)++v37 < count_5__2 );
  }
  v59 = v3->fields._currentObjects_5__4;
  v3->fields.__2__current = &v59->obj;
  sub_B0D840(&v3->fields.__2__current, v59);
  result = 1;
  v3->fields.__1__state = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardVerticalSchedule__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x0

  if ( (byte_4211F25 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardVerticalSchedule___c_TypeInfo, v1);
    byte_4211F25 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardVerticalSchedule___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardVerticalSchedule___c_o *)v3;
  sub_B0D840(static_fields, v3);
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