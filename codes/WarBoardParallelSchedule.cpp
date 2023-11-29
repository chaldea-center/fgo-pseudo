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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tasks,
    (System_Int32_array **)taskBases,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardParallelSchedule___ctor_22127580(
        WarBoardParallelSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  struct WarBoardTaskBase_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F85A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_40F85A5 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( !taskBases )
    sub_B170D4();
  v5 = (struct WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.tasks, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
}


System_Collections_IEnumerator_o *__fastcall WarBoardParallelSchedule__Execute(
        WarBoardParallelSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F85A6 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardParallelSchedule__Execute_d__4_TypeInfo, method);
    byte_40F85A6 = 1;
  }
  v6 = sub_B170CC(WarBoardParallelSchedule__Execute_d__4_TypeInfo, method, v2, v3, v4);
  WarBoardParallelSchedule__Execute_d__4___ctor((WarBoardParallelSchedule__Execute_d__4_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardParallelSchedule__OnEnd(WarBoardParallelSchedule_o *this, const MethodInfo *method)
{
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardParallelSchedule__OnStart(WarBoardParallelSchedule_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 v7; // x9
  unsigned __int64 v8; // x20
  signed __int64 v9; // x21

  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  tasks = this->fields.tasks;
  if ( !tasks )
LABEL_9:
    sub_B170D4();
  v7 = *(_QWORD *)&tasks->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    v9 = (int)v7;
    while ( 1 )
    {
      if ( v8 >= tasks->max_length )
      {
        sub_B17100(v3, v4, v5);
        sub_B170A0();
      }
      v3 = (__int64)tasks->m_Items[v8];
      if ( v3 )
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 392LL))(
               v3,
               *(_QWORD *)(*(_QWORD *)v3 + 400LL));
      if ( (__int64)++v8 >= v9 )
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t _1__state; // w8
  struct WarBoardParallelSchedule_o *_4__this; // x24
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length; // x1
  struct System_Boolean_array *v19; // x0
  struct System_Boolean_array **p_endFlags_5__3; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x2
  struct System_Object_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x2
  struct System_Collections_IEnumerator_array *v36; // x0
  struct System_Collections_IEnumerator_array **p_executes_5__5; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x0
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  unsigned __int64 v48; // x23
  __int64 v49; // x25
  struct System_Collections_IEnumerator_array *v50; // x8
  struct WarBoardTaskBase_array *v51; // x8
  unsigned int *v52; // x26
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x21
  WarBoardParallelSchedule___c_c *v60; // x0
  struct WarBoardParallelSchedule___c_StaticFields *static_fields; // x8
  System_Func_bool__bool__o *_9__4_0; // x22
  Il2CppObject *v63; // x23
  struct WarBoardParallelSchedule___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  bool result; // w0
  unsigned __int64 v77; // x22
  struct System_Boolean_array *v78; // x27
  bool *v79; // x28
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v81; // x21
  System_Collections_IEnumerator_c *klass; // x8
  struct System_Object_array *currentObjects_5__4; // x27
  unsigned __int64 v84; // x10
  System_Collections_IEnumerator_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_Object_array *v87; // x8
  Il2CppClass **v88; // x0
  BattleServantConfConponent_o *v89; // x0
  System_Int32_array **v90; // x1
  System_Int32_array **v91; // x21
  Il2CppClass **v92; // x0
  struct System_Boolean_array *v93; // x8
  struct WarBoardTaskBase_array *v94; // x8
  WarBoardTaskBase_o *v95; // x0
  struct System_Object_array *v96; // x1

  if ( (byte_40F784E & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_All_bool___, v6);
    sub_B16FFC(&Method_System_Func_bool__bool___ctor__, v7);
    sub_B16FFC(&System_Func_bool__bool__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator___TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&object___TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardParallelSchedule___c__Execute_b__4_0__, v12);
    sub_B16FFC(&WarBoardParallelSchedule___c_TypeInfo, v13);
    sub_B16FFC(&WarBoardManager_TypeInfo, v14);
    byte_40F784E = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_endFlags_5__3 = &this->fields._endFlags_5__3;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_68;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_68;
    max_length = tasks->max_length;
    this->fields._count_5__2 = max_length;
    v19 = (struct System_Boolean_array *)sub_B17014(bool___TypeInfo, max_length, v2);
    p_endFlags_5__3 = &this->fields._endFlags_5__3;
    this->fields._endFlags_5__3 = v19;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._endFlags_5__3,
      (System_Int32_array **)v19,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v28 = (struct System_Object_array *)sub_B17014(object___TypeInfo, (unsigned int)this->fields._count_5__2, v27);
    this->fields._currentObjects_5__4 = v28;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._currentObjects_5__4,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v36 = (struct System_Collections_IEnumerator_array *)sub_B17014(
                                                           System_Collections_IEnumerator___TypeInfo,
                                                           (unsigned int)this->fields._count_5__2,
                                                           v35);
    p_executes_5__5 = &this->fields._executes_5__5;
    this->fields._executes_5__5 = v36;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._executes_5__5,
      (System_Int32_array **)v36,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    if ( this->fields._count_5__2 >= 1 )
    {
      v48 = 0LL;
      v49 = 8LL;
      while ( 1 )
      {
        v50 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v48 >= v50->max_length )
          goto LABEL_69;
        *(Il2CppClass **)((char *)&v50->obj.klass + v49 * 4) = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)((char *)v50 + v49 * 4), 0LL, v2, v3, v4, v45, v46, v47);
        v51 = _4__this->fields.tasks;
        if ( !v51 )
          break;
        if ( v48 >= v51->max_length )
          goto LABEL_69;
        v44 = *(__int64 *)((char *)&v51->obj.klass + v49 * 4);
        if ( v44 )
        {
          v52 = (unsigned int *)*p_executes_5__5;
          v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v44 + 376LL))(
                  v44,
                  *(_QWORD *)(*(_QWORD *)v44 + 384LL));
          if ( !v52 )
            break;
          v58 = (System_Int32_array **)v44;
          if ( v44 )
          {
            v44 = sub_B170BC(v44, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
            if ( !v44 )
            {
LABEL_70:
              sub_B170F4(v44);
              sub_B170A0();
            }
          }
          if ( v48 >= v52[6] )
          {
LABEL_69:
            sub_B17100(v44, method, v2);
            sub_B170A0();
          }
          *(_QWORD *)&v52[v49] = v58;
          sub_B16F98((BattleServantConfConponent_o *)&v52[v49], v58, v2, v53, v54, v55, v56, v57);
        }
        ++v48;
        v49 += 2LL;
        if ( (__int64)v48 >= this->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_68:
      sub_B170D4();
    }
  }
LABEL_22:
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_endFlags_5__3;
  v60 = WarBoardParallelSchedule___c_TypeInfo;
  if ( (BYTE3(WarBoardParallelSchedule___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardParallelSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardParallelSchedule___c_TypeInfo);
    v60 = WarBoardParallelSchedule___c_TypeInfo;
  }
  static_fields = v60->static_fields;
  _9__4_0 = static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      static_fields = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_bool__bool__o *)sub_B170CC(System_Func_bool__bool__TypeInfo, method, v2, v3, v4);
    System_Func_bool__bool____ctor(
      _9__4_0,
      v63,
      Method_WarBoardParallelSchedule___c__Execute_b__4_0__,
      (const MethodInfo_2B63150 *)Method_System_Func_bool__bool___ctor__);
    v64 = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    v64->__9__4_0 = _9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v64->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  v44 = System_Linq_Enumerable__All_bool_(
          v59,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_18C6DA0 *)Method_System_Linq_Enumerable_All_bool___);
  if ( (v44 & 1) != 0 )
    return 0;
  if ( this->fields._count_5__2 > 0 )
  {
    v77 = 0LL;
    do
    {
      v78 = *p_endFlags_5__3;
      if ( !*p_endFlags_5__3 )
        goto LABEL_68;
      if ( v77 >= v78->max_length )
        goto LABEL_69;
      v79 = &v78->m_Items[v77 + 4];
      if ( !*v79 )
      {
        executes_5__5 = this->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_68;
        if ( v77 >= executes_5__5->max_length )
          goto LABEL_69;
        v81 = executes_5__5->m_Items[v77];
        if ( v81 )
        {
          if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          }
          v44 = WarBoardManager__IEnumeratorExecute(v81, 0LL);
          if ( v77 >= v78->max_length )
            goto LABEL_69;
          *v79 = (v44 & 1) == 0;
          klass = v81->klass;
          currentObjects_5__4 = this->fields._currentObjects_5__4;
          if ( *(_WORD *)&v81->klass->_2.bitflags1 )
          {
            v84 = 0LL;
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v84;
              p_offset += 2;
              if ( v84 >= *(unsigned __int16 *)&v81->klass->_2.bitflags1 )
                goto LABEL_48;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_48:
            p_method = sub_AAFEF8(v81, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v44 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  v81,
                  *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_68;
          v91 = (System_Int32_array **)v44;
          if ( v44 )
          {
            v44 = sub_B170BC(v44, currentObjects_5__4->obj.klass->_1.element_class);
            if ( !v44 )
              goto LABEL_70;
          }
          if ( v77 >= currentObjects_5__4->max_length )
            goto LABEL_69;
          v92 = &currentObjects_5__4->obj.klass + v77;
          v92[4] = (Il2CppClass *)v91;
          v89 = (BattleServantConfConponent_o *)(v92 + 4);
          v90 = v91;
        }
        else
        {
          *v79 = 1;
          v87 = this->fields._currentObjects_5__4;
          if ( !v87 )
            goto LABEL_68;
          if ( v77 >= v87->max_length )
            goto LABEL_69;
          v88 = &v87->obj.klass + v77;
          v88[4] = 0LL;
          v89 = (BattleServantConfConponent_o *)(v88 + 4);
          v90 = 0LL;
        }
        sub_B16F98(v89, v90, v2, v71, v72, v73, v74, v75);
        v93 = *p_endFlags_5__3;
        if ( !*p_endFlags_5__3 )
          goto LABEL_68;
        if ( v77 >= v93->max_length )
          goto LABEL_69;
        if ( v93->m_Items[v77 + 4] )
        {
          if ( !_4__this )
            goto LABEL_68;
          v94 = _4__this->fields.tasks;
          if ( !v94 )
            goto LABEL_68;
          if ( v77 >= v94->max_length )
            goto LABEL_69;
          v95 = v94->m_Items[v77];
          if ( !v95 )
            goto LABEL_68;
          v44 = ((__int64 (__fastcall *)(WarBoardTaskBase_o *, Il2CppMethodPointer))v95->klass->vtable._6_OnEnd.method)(
                  v95,
                  v95->klass->vtable._7_OnPause.methodPtr);
        }
      }
    }
    while ( (__int64)++v77 < this->fields._count_5__2 );
  }
  v96 = this->fields._currentObjects_5__4;
  this->fields.__2__current = &v96->obj;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v96,
    v2,
    v71,
    v72,
    v73,
    v74,
    v75);
  result = 1;
  this->fields.__1__state = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardParallelSchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F784D & 1) == 0 )
  {
    sub_B16FFC(&WarBoardParallelSchedule___c_TypeInfo, v1);
    byte_40F784D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardParallelSchedule___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardParallelSchedule___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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