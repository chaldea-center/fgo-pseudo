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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tasks,
    (System_Int32_array **)taskBases,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardParallelSchedule___ctor_24866044(
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

  if ( (byte_438AECD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_438AECD = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( !taskBases )
    sub_B7769C(v5, v6);
  v7 = (struct WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                          (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = v7;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.tasks, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_438AECE & 1) == 0 )
  {
    sub_B775C4(&WarBoardParallelSchedule__Execute_d__4_TypeInfo);
    byte_438AECE = 1;
  }
  v3 = sub_B77694(WarBoardParallelSchedule__Execute_d__4_TypeInfo);
  WarBoardParallelSchedule__Execute_d__4___ctor((WarBoardParallelSchedule__Execute_d__4_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
    sub_B7769C(v3, v4);
  v6 = *(_QWORD *)&tasks->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    v8 = (int)v6;
    while ( 1 )
    {
      if ( v7 >= tasks->max_length )
      {
        v9 = sub_B776C8(v3);
        sub_B77668(v9, 0LL);
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
  System_Int32_array **v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_endFlags_5__3; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x0
  unsigned int **p_executes_5__5; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  unsigned __int64 v36; // x23
  __int64 v37; // x25
  unsigned int *v38; // x8
  struct WarBoardTaskBase_array *v39; // x8
  unsigned int *v40; // x26
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  WarBoardParallelSchedule___c_c *v49; // x0
  struct WarBoardParallelSchedule___c_StaticFields *static_fields; // x8
  System_Func_bool__bool__o *_9__4_0; // x22
  Il2CppObject *v52; // x23
  struct WarBoardParallelSchedule___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  bool result; // w0
  unsigned __int64 v67; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x27
  bool *v69; // x28
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v71; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x27
  unsigned __int64 v74; // x10
  System_Collections_IEnumerator_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_Object_array *v77; // x8
  Il2CppClass **v78; // x0
  BattleServantConfConponent_o *v79; // x0
  System_Int32_array **v80; // x1
  WarBoardParallelSchedule__Execute_d__4_o *v81; // x21
  unsigned int *v82; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x8
  struct WarBoardTaskBase_array *v84; // x8
  System_Int32_array **v85; // x1
  __int64 v86; // x0
  __int64 v87; // x0

  v2 = this;
  if ( (byte_438925D & 1) == 0 )
  {
    sub_B775C4(&bool___TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_All_bool___);
    sub_B775C4(&Method_System_Func_bool__bool___ctor__);
    sub_B775C4(&System_Func_bool__bool__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator___TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&Method_WarBoardParallelSchedule___c__Execute_b__4_0__);
    sub_B775C4(&WarBoardParallelSchedule___c_TypeInfo);
    this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B775C4(&WarBoardManager_TypeInfo);
    byte_438925D = 1;
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
    v7 = (System_Int32_array **)sub_B775DC(bool___TypeInfo, max_length);
    p_endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o **)&v2->fields._endFlags_5__3;
    v2->fields._endFlags_5__3 = (struct System_Boolean_array *)v7;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields._endFlags_5__3, v7, v9, v10, v11, v12, v13, v14);
    v15 = (System_Int32_array **)sub_B775DC(object___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._currentObjects_5__4 = (struct System_Object_array *)v15;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields._currentObjects_5__4, v15, v16, v17, v18, v19, v20, v21);
    v22 = (System_Int32_array **)sub_B775DC(
                                   System_Collections_IEnumerator___TypeInfo,
                                   (unsigned int)v2->fields._count_5__2);
    p_executes_5__5 = (unsigned int **)&v2->fields._executes_5__5;
    v2->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v22;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields._executes_5__5, v22, v24, v25, v26, v27, v28, v29);
    if ( v2->fields._count_5__2 >= 1 )
    {
      v36 = 0LL;
      v37 = 8LL;
      while ( 1 )
      {
        v38 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v36 >= v38[6] )
          goto LABEL_69;
        *(_QWORD *)&v38[v37] = 0LL;
        sub_B77560((BattleServantConfConponent_o *)&v38[v37], 0LL, v30, v31, v32, v33, v34, v35);
        v39 = _4__this->fields.tasks;
        if ( !v39 )
          break;
        if ( v36 >= v39->max_length )
          goto LABEL_69;
        this = *(WarBoardParallelSchedule__Execute_d__4_o **)((char *)&v39->obj.klass + v37 * 4);
        if ( this )
        {
          v40 = *p_executes_5__5;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
          if ( !v40 )
            break;
          v47 = (System_Int32_array **)this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
            if ( !this )
            {
LABEL_70:
              v87 = sub_B776BC();
              sub_B77668(v87, 0LL);
            }
          }
          if ( v36 >= v40[6] )
          {
LABEL_69:
            v86 = sub_B776C8(this);
            sub_B77668(v86, 0LL);
          }
          *(_QWORD *)&v40[v37] = v47;
          sub_B77560((BattleServantConfConponent_o *)&v40[v37], v47, v41, v42, v43, v44, v45, v46);
        }
        ++v36;
        v37 += 2LL;
        if ( (__int64)v36 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_68:
      sub_B7769C(this, method);
    }
  }
LABEL_22:
  v48 = *p_endFlags_5__3;
  v49 = WarBoardParallelSchedule___c_TypeInfo;
  if ( (BYTE3(WarBoardParallelSchedule___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardParallelSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardParallelSchedule___c_TypeInfo);
    v49 = WarBoardParallelSchedule___c_TypeInfo;
  }
  static_fields = v49->static_fields;
  _9__4_0 = static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      static_fields = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_bool__bool__o *)sub_B77694(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(
      _9__4_0,
      v52,
      Method_WarBoardParallelSchedule___c__Execute_b__4_0__,
      (const MethodInfo_29E061C *)Method_System_Func_bool__bool___ctor__);
    v53 = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    v53->__9__4_0 = _9__4_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v53->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  this = (WarBoardParallelSchedule__Execute_d__4_o *)System_Linq_Enumerable__All_bool_(
                                                       v48,
                                                       (System_Func_TSource__bool__o *)_9__4_0,
                                                       (const MethodInfo_1D1C574 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( v2->fields._count_5__2 > 0 )
  {
    v67 = 0LL;
    do
    {
      v68 = *p_endFlags_5__3;
      if ( !*p_endFlags_5__3 )
        goto LABEL_68;
      if ( v67 >= LODWORD(v68[1].monitor) )
        goto LABEL_69;
      v69 = (bool *)&v68[2] + v67;
      if ( !*v69 )
      {
        executes_5__5 = v2->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_68;
        if ( v67 >= executes_5__5->max_length )
          goto LABEL_69;
        v71 = executes_5__5->m_Items[v67];
        if ( v71 )
        {
          if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)WarBoardManager__IEnumeratorExecute(v71, 0LL);
          if ( v67 >= LODWORD(v68[1].monitor) )
            goto LABEL_69;
          *v69 = ((unsigned __int8)this & 1) == 0;
          klass = v71->klass;
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          if ( *(_WORD *)&v71->klass->_2.bitflags1 )
          {
            v74 = 0LL;
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v74;
              p_offset += 2;
              if ( v74 >= *(unsigned __int16 *)&v71->klass->_2.bitflags1 )
                goto LABEL_48;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_48:
            p_method = sub_B0F4C0(v71, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v71,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_68;
          v81 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B77684(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_70;
          }
          if ( v67 >= currentObjects_5__4[6] )
            goto LABEL_69;
          v82 = &currentObjects_5__4[2 * v67];
          *((_QWORD *)v82 + 4) = v81;
          v79 = (BattleServantConfConponent_o *)(v82 + 8);
          v80 = (System_Int32_array **)v81;
        }
        else
        {
          *v69 = 1;
          v77 = v2->fields._currentObjects_5__4;
          if ( !v77 )
            goto LABEL_68;
          if ( v67 >= v77->max_length )
            goto LABEL_69;
          v78 = &v77->obj.klass + v67;
          v78[4] = 0LL;
          v79 = (BattleServantConfConponent_o *)(v78 + 4);
          v80 = 0LL;
        }
        sub_B77560(v79, v80, v60, v61, v62, v63, v64, v65);
        v83 = *p_endFlags_5__3;
        if ( !*p_endFlags_5__3 )
          goto LABEL_68;
        if ( v67 >= LODWORD(v83[1].monitor) )
          goto LABEL_69;
        if ( *((_BYTE *)&v83[2].klass + v67) )
        {
          if ( !_4__this )
            goto LABEL_68;
          v84 = _4__this->fields.tasks;
          if ( !v84 )
            goto LABEL_68;
          if ( v67 >= v84->max_length )
            goto LABEL_69;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)v84->m_Items[v67];
          if ( !this )
            goto LABEL_68;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        }
      }
    }
    while ( (__int64)++v67 < v2->fields._count_5__2 );
  }
  v85 = (System_Int32_array **)v2->fields._currentObjects_5__4;
  v2->fields.__2__current = (Il2CppObject *)v85;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.__2__current, v85, v60, v61, v62, v63, v64, v65);
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardParallelSchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438925C & 1) == 0 )
  {
    sub_B775C4(&WarBoardParallelSchedule___c_TypeInfo);
    byte_438925C = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardParallelSchedule___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardParallelSchedule___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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