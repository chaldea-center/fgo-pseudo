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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tasks,
    (System_Int32_array **)taskBases,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardParallelSchedule___ctor_22380880(
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

  if ( (byte_418655C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_418655C = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( !taskBases )
    sub_B2C434(v5, v6);
  v7 = (struct WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.tasks, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_418655D & 1) == 0 )
  {
    sub_B2C35C(&WarBoardParallelSchedule__Execute_d__4_TypeInfo, method);
    byte_418655D = 1;
  }
  v3 = sub_B2C42C(WarBoardParallelSchedule__Execute_d__4_TypeInfo);
  WarBoardParallelSchedule__Execute_d__4___ctor((WarBoardParallelSchedule__Execute_d__4_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
    sub_B2C434(v3, v4);
  v6 = *(_QWORD *)&tasks->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    v8 = (int)v6;
    while ( 1 )
    {
      if ( v7 >= tasks->max_length )
      {
        v9 = sub_B2C460(v3);
        sub_B2C400(v9, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  struct WarBoardParallelSchedule_o *_4__this; // x24
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length; // x1
  System_Int32_array **v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_endFlags_5__3; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x0
  unsigned int **p_executes_5__5; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
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
  __int64 v81; // x3
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x27
  unsigned __int64 v84; // x10
  System_Collections_IEnumerator_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_Object_array *v87; // x8
  Il2CppClass **v88; // x0
  BattleServantConfConponent_o *v89; // x0
  System_Int32_array **v90; // x1
  WarBoardParallelSchedule__Execute_d__4_o *v91; // x21
  unsigned int *v92; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x8
  struct WarBoardTaskBase_array *v94; // x8
  System_Int32_array **v95; // x1
  __int64 v96; // x0
  __int64 v97; // x0

  v2 = this;
  if ( (byte_41866FA & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_All_bool___, v3);
    sub_B2C35C(&Method_System_Func_bool__bool___ctor__, v4);
    sub_B2C35C(&System_Func_bool__bool__TypeInfo, v5);
    sub_B2C35C(&System_Collections_IEnumerator___TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&object___TypeInfo, v8);
    sub_B2C35C(&Method_WarBoardParallelSchedule___c__Execute_b__4_0__, v9);
    sub_B2C35C(&WarBoardParallelSchedule___c_TypeInfo, v10);
    this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B2C35C(&WarBoardManager_TypeInfo, v11);
    byte_41866FA = 1;
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
    v16 = (System_Int32_array **)sub_B2C374(bool___TypeInfo, max_length);
    p_endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o **)&v2->fields._endFlags_5__3;
    v2->fields._endFlags_5__3 = (struct System_Boolean_array *)v16;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._endFlags_5__3, v16, v18, v19, v20, v21, v22, v23);
    v24 = (System_Int32_array **)sub_B2C374(object___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._currentObjects_5__4 = (struct System_Object_array *)v24;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._currentObjects_5__4, v24, v25, v26, v27, v28, v29, v30);
    v31 = (System_Int32_array **)sub_B2C374(
                                   System_Collections_IEnumerator___TypeInfo,
                                   (unsigned int)v2->fields._count_5__2);
    p_executes_5__5 = (unsigned int **)&v2->fields._executes_5__5;
    v2->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v31;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._executes_5__5, v31, v33, v34, v35, v36, v37, v38);
    if ( v2->fields._count_5__2 >= 1 )
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
        sub_B2C2F8((BattleServantConfConponent_o *)&v47[v46], 0LL, v39, v40, v41, v42, v43, v44);
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
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
            if ( !this )
            {
LABEL_70:
              v97 = sub_B2C454();
              sub_B2C400(v97, 0LL);
            }
          }
          if ( v45 >= v49[6] )
          {
LABEL_69:
            v96 = sub_B2C460(this);
            sub_B2C400(v96, 0LL);
          }
          *(_QWORD *)&v49[v46] = v56;
          sub_B2C2F8((BattleServantConfConponent_o *)&v49[v46], v56, v50, v51, v52, v53, v54, v55);
        }
        ++v45;
        v46 += 2LL;
        if ( (__int64)v45 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_68:
      sub_B2C434(this, method);
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
    _9__4_0 = (System_Func_bool__bool__o *)sub_B2C42C(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(
      _9__4_0,
      v61,
      Method_WarBoardParallelSchedule___c__Execute_b__4_0__,
      (const MethodInfo_270A214 *)Method_System_Func_bool__bool___ctor__);
    v62 = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    v62->__9__4_0 = _9__4_0;
    sub_B2C2F8(
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
                                                       (const MethodInfo_1737508 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( v2->fields._count_5__2 > 0 )
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
        executes_5__5 = v2->fields._executes_5__5;
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
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          if ( *(_WORD *)&v80->klass->_2.bitflags1 )
          {
            v84 = 0LL;
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v84;
              p_offset += 2;
              if ( v84 >= *(unsigned __int16 *)&v80->klass->_2.bitflags1 )
                goto LABEL_48;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_48:
            p_method = sub_AC5258(v80, System_Collections_IEnumerator_TypeInfo, 1LL, v81);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v80,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_68;
          v91 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_B2C41C(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_70;
          }
          if ( v76 >= currentObjects_5__4[6] )
            goto LABEL_69;
          v92 = &currentObjects_5__4[2 * v76];
          *((_QWORD *)v92 + 4) = v91;
          v89 = (BattleServantConfConponent_o *)(v92 + 8);
          v90 = (System_Int32_array **)v91;
        }
        else
        {
          *v78 = 1;
          v87 = v2->fields._currentObjects_5__4;
          if ( !v87 )
            goto LABEL_68;
          if ( v76 >= v87->max_length )
            goto LABEL_69;
          v88 = &v87->obj.klass + v76;
          v88[4] = 0LL;
          v89 = (BattleServantConfConponent_o *)(v88 + 4);
          v90 = 0LL;
        }
        sub_B2C2F8(v89, v90, v69, v70, v71, v72, v73, v74);
        v93 = *p_endFlags_5__3;
        if ( !*p_endFlags_5__3 )
          goto LABEL_68;
        if ( v76 >= LODWORD(v93[1].monitor) )
          goto LABEL_69;
        if ( *((_BYTE *)&v93[2].klass + v76) )
        {
          if ( !_4__this )
            goto LABEL_68;
          v94 = _4__this->fields.tasks;
          if ( !v94 )
            goto LABEL_68;
          if ( v76 >= v94->max_length )
            goto LABEL_69;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)v94->m_Items[v76];
          if ( !this )
            goto LABEL_68;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        }
      }
    }
    while ( (__int64)++v76 < v2->fields._count_5__2 );
  }
  v95 = (System_Int32_array **)v2->fields._currentObjects_5__4;
  v2->fields.__2__current = (Il2CppObject *)v95;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.__2__current, v95, v69, v70, v71, v72, v73, v74);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardParallelSchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41866F9 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardParallelSchedule___c_TypeInfo, v1);
    byte_41866F9 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardParallelSchedule___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardParallelSchedule___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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