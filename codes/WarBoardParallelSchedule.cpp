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


void __fastcall WarBoardParallelSchedule___ctor_21941716(
        WarBoardParallelSchedule_o *this,
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

  if ( (byte_421330E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_421330E = 1;
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


System_Collections_IEnumerator_o *__fastcall WarBoardParallelSchedule__Execute(
        WarBoardParallelSchedule_o *this,
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

  if ( (byte_421330F & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardParallelSchedule__Execute_d__4_TypeInfo, method);
    byte_421330F = 1;
  }
  v4 = sub_B0D974(WarBoardParallelSchedule__Execute_d__4_TypeInfo, method, v2);
  WarBoardParallelSchedule__Execute_d__4___ctor((WarBoardParallelSchedule__Execute_d__4_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall WarBoardParallelSchedule__OnEnd(WarBoardParallelSchedule_o *this, const MethodInfo *method)
{
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardParallelSchedule__OnStart(WarBoardParallelSchedule_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 v5; // x9
  unsigned __int64 v6; // x20
  signed __int64 v7; // x21
  __int64 v8; // x0

  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  tasks = this->fields.tasks;
  if ( !tasks )
LABEL_9:
    sub_B0D97C(v3);
  v5 = *(_QWORD *)&tasks->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    v7 = (int)v5;
    while ( 1 )
    {
      if ( v6 >= tasks->max_length )
      {
        v8 = sub_B0D9A8(v3);
        sub_B0D948(v8, 0LL);
      }
      v3 = (__int64)tasks->m_Items[v6];
      if ( v3 )
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 392LL))(
               v3,
               *(_QWORD *)(*(_QWORD *)v3 + 400LL));
      if ( (__int64)++v6 >= v7 )
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
  WarBoardParallelSchedule__Execute_d__4_o *v3; // x19
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
  struct WarBoardParallelSchedule_o *_4__this; // x24
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length; // x1
  System_Int32_array **v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_endFlags_5__3; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x0
  unsigned int **p_executes_5__5; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  unsigned __int64 v45; // x23
  __int64 v46; // x25
  unsigned int *v47; // x8
  struct WarBoardTaskBase_array *v48; // x8
  unsigned int *v49; // x26
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x21
  WarBoardParallelSchedule___c_c *v58; // x0
  struct WarBoardParallelSchedule___c_StaticFields *static_fields; // x8
  System_Func_bool__bool__o *_9__4_0; // x22
  Il2CppObject *v61; // x23
  struct WarBoardParallelSchedule___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  bool result; // w0
  unsigned __int64 v76; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x27
  bool *v78; // x28
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v80; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x27
  unsigned __int64 v83; // x10
  System_Collections_IEnumerator_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_Object_array *v86; // x8
  Il2CppClass **v87; // x0
  BattleServantConfConponent_o *v88; // x0
  System_Int32_array **v89; // x1
  WarBoardParallelSchedule__Execute_d__4_o *v90; // x21
  unsigned int *v91; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x8
  struct WarBoardTaskBase_array *v93; // x8
  System_Int32_array **v94; // x1
  __int64 v95; // x0
  __int64 v96; // x0

  v3 = this;
  if ( (byte_4213875 & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_All_bool___, v4);
    sub_B0D8A4(&Method_System_Func_bool__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_bool__bool__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator___TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&object___TypeInfo, v9);
    sub_B0D8A4(&Method_WarBoardParallelSchedule___c__Execute_b__4_0__, v10);
    sub_B0D8A4(&WarBoardParallelSchedule___c_TypeInfo, v11);
    this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B0D8A4(&WarBoardManager_TypeInfo, v12);
    byte_4213875 = 1;
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
      goto LABEL_68;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_68;
    max_length = tasks->max_length;
    v3->fields._count_5__2 = max_length;
    v17 = (System_Int32_array **)sub_B0D8BC(bool___TypeInfo, max_length);
    p_endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o **)&v3->fields._endFlags_5__3;
    v3->fields._endFlags_5__3 = (struct System_Boolean_array *)v17;
    sub_B0D840((BattleServantConfConponent_o *)&v3->fields._endFlags_5__3, v17, v19, v20, v21, v22, v23, v24);
    v25 = (System_Int32_array **)sub_B0D8BC(object___TypeInfo, (unsigned int)v3->fields._count_5__2);
    v3->fields._currentObjects_5__4 = (struct System_Object_array *)v25;
    sub_B0D840((BattleServantConfConponent_o *)&v3->fields._currentObjects_5__4, v25, v26, v27, v28, v29, v30, v31);
    v32 = (System_Int32_array **)sub_B0D8BC(
                                   System_Collections_IEnumerator___TypeInfo,
                                   (unsigned int)v3->fields._count_5__2);
    p_executes_5__5 = (unsigned int **)&v3->fields._executes_5__5;
    v3->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v32;
    sub_B0D840((BattleServantConfConponent_o *)&v3->fields._executes_5__5, v32, v34, v35, v36, v37, v38, v39);
    if ( v3->fields._count_5__2 >= 1 )
    {
      v45 = 0LL;
      v46 = 8LL;
      while ( 1 )
      {
        v47 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v45 >= v47[6] )
          goto LABEL_69;
        *(_QWORD *)&v47[v46] = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&v47[v46], 0LL, v2, v40, v41, v42, v43, v44);
        v48 = _4__this->fields.tasks;
        if ( !v48 )
          break;
        if ( v45 >= v48->max_length )
          goto LABEL_69;
        this = *(WarBoardParallelSchedule__Execute_d__4_o **)((char *)&v48->obj.klass + v46 * 4);
        if ( this )
        {
          v49 = *p_executes_5__5;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
          if ( !v49 )
            break;
          v56 = (System_Int32_array **)this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
            if ( !this )
            {
LABEL_70:
              v96 = sub_B0D99C();
              sub_B0D948(v96, 0LL);
            }
          }
          if ( v45 >= v49[6] )
          {
LABEL_69:
            v95 = sub_B0D9A8(this);
            sub_B0D948(v95, 0LL);
          }
          *(_QWORD *)&v49[v46] = v56;
          sub_B0D840((BattleServantConfConponent_o *)&v49[v46], v56, v50, v51, v52, v53, v54, v55);
        }
        ++v45;
        v46 += 2LL;
        if ( (__int64)v45 >= v3->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_68:
      sub_B0D97C(this);
    }
  }
LABEL_22:
  v57 = *p_endFlags_5__3;
  v58 = WarBoardParallelSchedule___c_TypeInfo;
  if ( (BYTE3(WarBoardParallelSchedule___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardParallelSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardParallelSchedule___c_TypeInfo);
    v58 = WarBoardParallelSchedule___c_TypeInfo;
  }
  static_fields = v58->static_fields;
  _9__4_0 = static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      static_fields = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    }
    v61 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_bool__bool__o *)sub_B0D974(System_Func_bool__bool__TypeInfo, method, v2);
    System_Func_bool__bool____ctor(
      _9__4_0,
      v61,
      Method_WarBoardParallelSchedule___c__Execute_b__4_0__,
      (const MethodInfo_2610FC8 *)Method_System_Func_bool__bool___ctor__);
    v62 = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    v62->__9__4_0 = _9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v62->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
  }
  this = (WarBoardParallelSchedule__Execute_d__4_o *)System_Linq_Enumerable__All_bool_(
                                                       v57,
                                                       (System_Func_TSource__bool__o *)_9__4_0,
                                                       (const MethodInfo_17180C4 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( v3->fields._count_5__2 > 0 )
  {
    v76 = 0LL;
    do
    {
      v77 = *p_endFlags_5__3;
      if ( !*p_endFlags_5__3 )
        goto LABEL_68;
      if ( v76 >= LODWORD(v77[1].monitor) )
        goto LABEL_69;
      v78 = (bool *)&v77[2] + v76;
      if ( !*v78 )
      {
        executes_5__5 = v3->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_68;
        if ( v76 >= executes_5__5->max_length )
          goto LABEL_69;
        v80 = executes_5__5->m_Items[v76];
        if ( v80 )
        {
          if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)WarBoardManager__IEnumeratorExecute(v80, 0LL);
          if ( v76 >= LODWORD(v77[1].monitor) )
            goto LABEL_69;
          *v78 = ((unsigned __int8)this & 1) == 0;
          klass = v80->klass;
          currentObjects_5__4 = (unsigned int *)v3->fields._currentObjects_5__4;
          if ( *(_WORD *)&v80->klass->_2.bitflags1 )
          {
            v83 = 0LL;
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v83;
              p_offset += 2;
              if ( v83 >= *(unsigned __int16 *)&v80->klass->_2.bitflags1 )
                goto LABEL_48;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_48:
            p_method = sub_AA67A0(v80, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v80,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_68;
          v90 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B0D964(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_70;
          }
          if ( v76 >= currentObjects_5__4[6] )
            goto LABEL_69;
          v91 = &currentObjects_5__4[2 * v76];
          *((_QWORD *)v91 + 4) = v90;
          v88 = (BattleServantConfConponent_o *)(v91 + 8);
          v89 = (System_Int32_array **)v90;
        }
        else
        {
          *v78 = 1;
          v86 = v3->fields._currentObjects_5__4;
          if ( !v86 )
            goto LABEL_68;
          if ( v76 >= v86->max_length )
            goto LABEL_69;
          v87 = &v86->obj.klass + v76;
          v87[4] = 0LL;
          v88 = (BattleServantConfConponent_o *)(v87 + 4);
          v89 = 0LL;
        }
        sub_B0D840(v88, v89, v69, v70, v71, v72, v73, v74);
        v92 = *p_endFlags_5__3;
        if ( !*p_endFlags_5__3 )
          goto LABEL_68;
        if ( v76 >= LODWORD(v92[1].monitor) )
          goto LABEL_69;
        if ( *((_BYTE *)&v92[2].klass + v76) )
        {
          if ( !_4__this )
            goto LABEL_68;
          v93 = _4__this->fields.tasks;
          if ( !v93 )
            goto LABEL_68;
          if ( v76 >= v93->max_length )
            goto LABEL_69;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)v93->m_Items[v76];
          if ( !this )
            goto LABEL_68;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        }
      }
    }
    while ( (__int64)++v76 < v3->fields._count_5__2 );
  }
  v94 = (System_Int32_array **)v3->fields._currentObjects_5__4;
  v3->fields.__2__current = (Il2CppObject *)v94;
  sub_B0D840((BattleServantConfConponent_o *)&v3->fields.__2__current, v94, v69, v70, v71, v72, v73, v74);
  result = 1;
  v3->fields.__1__state = 1;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardParallelSchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213874 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardParallelSchedule___c_TypeInfo, v1);
    byte_4213874 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardParallelSchedule___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardParallelSchedule___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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