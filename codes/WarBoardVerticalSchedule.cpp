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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.tasks, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardVerticalSchedule___ctor_26384832(
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


void __fastcall WarBoardVerticalSchedule___ctor_26384884(
        WarBoardVerticalSchedule_o *this,
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

  if ( (byte_42B0BE5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_42B0BE5 = 1;
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


System_Collections_IEnumerator_o *__fastcall WarBoardVerticalSchedule__Execute(
        WarBoardVerticalSchedule_o *this,
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

  if ( (byte_42B0BE7 & 1) == 0 )
  {
    sub_B52984(&WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
    byte_42B0BE7 = 1;
  }
  v3 = sub_B52A54(WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
  WarBoardVerticalSchedule__Execute_d__7___ctor((WarBoardVerticalSchedule__Execute_d__7_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardVerticalSchedule__OnEnd(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardVerticalSchedule__OnStart(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  WarBoardTaskBase_o *v3; // x0
  __int64 v4; // x1
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
    sub_B52A5C(v3, v4);
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
  if ( (byte_42B0BE6 & 1) == 0 )
  {
    this = (WarBoardVerticalSchedule_o *)sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_42B0BE6 = 1;
  }
  if ( !taskBases )
    sub_B52A5C(this, taskBases);
  v5 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  v4->fields.tasks = (struct WarBoardTaskBase_array *)v5;
  sub_B52920((BattleServantConfConponent_o *)&v4->fields.tasks, v5, v6, v7, v8, v9, v10, v11);
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
  int32_t _1__state; // w8
  struct WarBoardVerticalSchedule_o *_4__this; // x24
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
  WarBoardVerticalSchedule__Execute_d__7_o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  WarBoardVerticalSchedule___c_c *v17; // x0
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x8
  System_Func_bool__bool__o *_9__7_0; // x22
  Il2CppObject *v20; // x23
  struct WarBoardVerticalSchedule___c_StaticFields *v21; // x0
  bool result; // w0
  int count_5__2; // w8
  unsigned __int64 v24; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x27
  bool *v26; // x28
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v28; // x21
  __int64 v29; // x3
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x27
  unsigned __int64 v32; // x10
  System_Collections_IEnumerator_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_Object_array *v35; // x8
  Il2CppClass **v36; // x0
  unsigned int *v37; // x0
  WarBoardVerticalSchedule__Execute_d__7_o *v38; // x21
  unsigned int *v39; // x0
  long double v40; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x8
  struct WarBoardTaskBase_array *v42; // x8
  struct WarBoardTaskBase_array *v43; // x8
  __int64 currentExecuteIndex; // x9
  int v45; // w10
  __int64 v46; // x0
  __int64 v47; // x0

  v2 = this;
  if ( (byte_42AD76B & 1) == 0 )
  {
    sub_B52984(&bool___TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_All_bool___);
    sub_B52984(&Method_System_Func_bool__bool___ctor__);
    sub_B52984(&System_Func_bool__bool__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator___TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&Method_WarBoardVerticalSchedule___c__Execute_b__7_0__);
    sub_B52984(&WarBoardVerticalSchedule___c_TypeInfo);
    this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_B52984(&WarBoardManager_TypeInfo);
    byte_42AD76B = 1;
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
      goto LABEL_75;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_75;
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
          goto LABEL_76;
        *(_QWORD *)&v11[v10] = 0LL;
        *(__n128 *)&v12 = sub_B52920(&v11[v10]);
        v13 = _4__this->fields.tasks;
        if ( !v13 )
          break;
        if ( v9 >= v13->max_length )
          goto LABEL_76;
        this = *(WarBoardVerticalSchedule__Execute_d__7_o **)((char *)&v13->obj.klass + v10 * 4);
        if ( this )
        {
          v14 = *p_executes_5__5;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer, long double))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr,
                                                               v12);
          if ( !v14 )
            break;
          v15 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_B52A44(this, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
            if ( !this )
            {
LABEL_77:
              v47 = sub_B52A7C();
              sub_B52A28(v47, 0LL);
            }
          }
          if ( v9 >= v14[6] )
          {
LABEL_76:
            v46 = sub_B52A88(this);
            sub_B52A28(v46, 0LL);
          }
          *(_QWORD *)&v14[v10] = v15;
          sub_B52920(&v14[v10]);
        }
        ++v9;
        v10 += 2LL;
        if ( (__int64)v9 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_75:
      sub_B52A5C(this, method);
    }
  }
LABEL_22:
  v16 = *p_endFlags_5__3;
  v17 = WarBoardVerticalSchedule___c_TypeInfo;
  if ( (BYTE3(WarBoardVerticalSchedule___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardVerticalSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardVerticalSchedule___c_TypeInfo);
    v17 = WarBoardVerticalSchedule___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_bool__bool__o *)sub_B52A54(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(
      _9__7_0,
      v20,
      Method_WarBoardVerticalSchedule___c__Execute_b__7_0__,
      (const MethodInfo_278223C *)Method_System_Func_bool__bool___ctor__);
    v21 = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    v21->__9__7_0 = _9__7_0;
    sub_B52920(&v21->__9__7_0);
  }
  this = (WarBoardVerticalSchedule__Execute_d__7_o *)System_Linq_Enumerable__All_bool_(
                                                       v16,
                                                       (System_Func_TSource__bool__o *)_9__7_0,
                                                       (const MethodInfo_1A53308 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  count_5__2 = v2->fields._count_5__2;
  if ( count_5__2 > 0 )
  {
    v24 = 0LL;
    do
    {
      v25 = *p_endFlags_5__3;
      if ( !*p_endFlags_5__3 )
        goto LABEL_75;
      if ( v24 >= LODWORD(v25[1].monitor) )
        goto LABEL_76;
      v26 = (bool *)&v25[2] + v24;
      if ( !*v26 )
      {
        executes_5__5 = v2->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_75;
        if ( v24 >= executes_5__5->max_length )
          goto LABEL_76;
        v28 = executes_5__5->m_Items[v24];
        if ( v28 )
        {
          if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)WarBoardManager__IEnumeratorExecute(v28, 0LL);
          if ( v24 >= LODWORD(v25[1].monitor) )
            goto LABEL_76;
          *v26 = ((unsigned __int8)this & 1) == 0;
          klass = v28->klass;
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          if ( *(_WORD *)&v28->klass->_2.bitflags1 )
          {
            v32 = 0LL;
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v32;
              p_offset += 2;
              if ( v32 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
                goto LABEL_48;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_48:
            p_method = sub_AEB880(v28, System_Collections_IEnumerator_TypeInfo, 1LL, v29);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v28,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_75;
          v38 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_B52A44(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_77;
          }
          if ( v24 >= currentObjects_5__4[6] )
            goto LABEL_76;
          v39 = &currentObjects_5__4[2 * v24];
          *((_QWORD *)v39 + 4) = v38;
          v37 = v39 + 8;
        }
        else
        {
          *v26 = 1;
          v35 = v2->fields._currentObjects_5__4;
          if ( !v35 )
            goto LABEL_75;
          if ( v24 >= v35->max_length )
            goto LABEL_76;
          v36 = &v35->obj.klass + v24;
          v36[4] = 0LL;
          v37 = (unsigned int *)(v36 + 4);
        }
        *(__n128 *)&v40 = sub_B52920(v37);
        v41 = *p_endFlags_5__3;
        if ( !*p_endFlags_5__3 )
          goto LABEL_75;
        if ( v24 >= LODWORD(v41[1].monitor) )
          goto LABEL_76;
        if ( *((_BYTE *)&v41[2].klass + v24) )
        {
          if ( !_4__this )
            goto LABEL_75;
          v42 = _4__this->fields.tasks;
          ++_4__this->fields.currentExecuteIndex;
          if ( !v42 )
            goto LABEL_75;
          if ( v24 >= v42->max_length )
            goto LABEL_76;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)v42->m_Items[v24];
          if ( !this )
            goto LABEL_75;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer, long double))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr,
                                                               v40);
          v43 = _4__this->fields.tasks;
          if ( !v43 )
            goto LABEL_75;
          currentExecuteIndex = _4__this->fields.currentExecuteIndex;
          v45 = v43->max_length;
          if ( (int)currentExecuteIndex < v45 )
          {
            if ( (unsigned int)currentExecuteIndex >= v45 )
              goto LABEL_76;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)v43->m_Items[currentExecuteIndex];
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
        if ( (__int64)v24 >= _4__this->fields.currentExecuteIndex )
          break;
        count_5__2 = v2->fields._count_5__2;
      }
    }
    while ( (__int64)++v24 < count_5__2 );
  }
  v2->fields.__2__current = &v2->fields._currentObjects_5__4->obj;
  sub_B52920(&v2->fields.__2__current);
  result = 1;
  v2->fields.__1__state = 1;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_WarBoardVerticalSchedule__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject *v1; // x19
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x0

  if ( (byte_42AD76A & 1) == 0 )
  {
    sub_B52984(&WarBoardVerticalSchedule___c_TypeInfo);
    byte_42AD76A = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardVerticalSchedule___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardVerticalSchedule___c_o *)v1;
  sub_B52920(static_fields);
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