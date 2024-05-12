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
  sub_B77560((BattleServantConfConponent_o *)&this->fields.tasks, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardVerticalSchedule___ctor_26595436(
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


void __fastcall WarBoardVerticalSchedule___ctor_26595488(
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

  if ( (byte_438BDF4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_438BDF4 = 1;
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

  if ( (byte_438BDF6 & 1) == 0 )
  {
    sub_B775C4(&WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
    byte_438BDF6 = 1;
  }
  v3 = sub_B77694(WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
  WarBoardVerticalSchedule__Execute_d__7___ctor((WarBoardVerticalSchedule__Execute_d__7_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
    sub_B7769C(v3, v4);
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
  if ( (byte_438BDF5 & 1) == 0 )
  {
    this = (WarBoardVerticalSchedule_o *)sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_438BDF5 = 1;
  }
  if ( !taskBases )
    sub_B7769C(this, taskBases);
  v5 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  v4->fields.tasks = (struct WarBoardTaskBase_array *)v5;
  sub_B77560((BattleServantConfConponent_o *)&v4->fields.tasks, v5, v6, v7, v8, v9, v10, v11);
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
  WarBoardVerticalSchedule___c_c *v49; // x0
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x8
  System_Func_bool__bool__o *_9__7_0; // x22
  Il2CppObject *v52; // x23
  struct WarBoardVerticalSchedule___c_StaticFields *v53; // x0
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
  int count_5__2; // w8
  unsigned __int64 v68; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x27
  bool *v70; // x28
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v72; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x27
  unsigned __int64 v75; // x10
  System_Collections_IEnumerator_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_Object_array *v78; // x8
  Il2CppClass **v79; // x0
  BattleServantConfConponent_o *v80; // x0
  System_Int32_array **v81; // x1
  WarBoardVerticalSchedule__Execute_d__7_o *v82; // x21
  unsigned int *v83; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x8
  struct WarBoardTaskBase_array *v85; // x8
  struct WarBoardTaskBase_array *v86; // x8
  __int64 currentExecuteIndex; // x9
  int v88; // w10
  System_Int32_array **v89; // x1
  __int64 v90; // x0
  __int64 v91; // x0

  v2 = this;
  if ( (byte_4389298 & 1) == 0 )
  {
    sub_B775C4(&bool___TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_All_bool___);
    sub_B775C4(&Method_System_Func_bool__bool___ctor__);
    sub_B775C4(&System_Func_bool__bool__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator___TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&Method_WarBoardVerticalSchedule___c__Execute_b__7_0__);
    sub_B775C4(&WarBoardVerticalSchedule___c_TypeInfo);
    this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_B775C4(&WarBoardManager_TypeInfo);
    byte_4389298 = 1;
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
          goto LABEL_76;
        *(_QWORD *)&v38[v37] = 0LL;
        sub_B77560((BattleServantConfConponent_o *)&v38[v37], 0LL, v30, v31, v32, v33, v34, v35);
        v39 = _4__this->fields.tasks;
        if ( !v39 )
          break;
        if ( v36 >= v39->max_length )
          goto LABEL_76;
        this = *(WarBoardVerticalSchedule__Execute_d__7_o **)((char *)&v39->obj.klass + v37 * 4);
        if ( this )
        {
          v40 = *p_executes_5__5;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
          if ( !v40 )
            break;
          v47 = (System_Int32_array **)this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
            if ( !this )
            {
LABEL_77:
              v91 = sub_B776BC();
              sub_B77668(v91, 0LL);
            }
          }
          if ( v36 >= v40[6] )
          {
LABEL_76:
            v90 = sub_B776C8(this);
            sub_B77668(v90, 0LL);
          }
          *(_QWORD *)&v40[v37] = v47;
          sub_B77560((BattleServantConfConponent_o *)&v40[v37], v47, v41, v42, v43, v44, v45, v46);
        }
        ++v36;
        v37 += 2LL;
        if ( (__int64)v36 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_75:
      sub_B7769C(this, method);
    }
  }
LABEL_22:
  v48 = *p_endFlags_5__3;
  v49 = WarBoardVerticalSchedule___c_TypeInfo;
  if ( (BYTE3(WarBoardVerticalSchedule___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardVerticalSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardVerticalSchedule___c_TypeInfo);
    v49 = WarBoardVerticalSchedule___c_TypeInfo;
  }
  static_fields = v49->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_bool__bool__o *)sub_B77694(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(
      _9__7_0,
      v52,
      Method_WarBoardVerticalSchedule___c__Execute_b__7_0__,
      (const MethodInfo_29E061C *)Method_System_Func_bool__bool___ctor__);
    v53 = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    v53->__9__7_0 = _9__7_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v53->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  this = (WarBoardVerticalSchedule__Execute_d__7_o *)System_Linq_Enumerable__All_bool_(
                                                       v48,
                                                       (System_Func_TSource__bool__o *)_9__7_0,
                                                       (const MethodInfo_1D1C574 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  count_5__2 = v2->fields._count_5__2;
  if ( count_5__2 > 0 )
  {
    v68 = 0LL;
    do
    {
      v69 = *p_endFlags_5__3;
      if ( !*p_endFlags_5__3 )
        goto LABEL_75;
      if ( v68 >= LODWORD(v69[1].monitor) )
        goto LABEL_76;
      v70 = (bool *)&v69[2] + v68;
      if ( !*v70 )
      {
        executes_5__5 = v2->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_75;
        if ( v68 >= executes_5__5->max_length )
          goto LABEL_76;
        v72 = executes_5__5->m_Items[v68];
        if ( v72 )
        {
          if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)WarBoardManager__IEnumeratorExecute(v72, 0LL);
          if ( v68 >= LODWORD(v69[1].monitor) )
            goto LABEL_76;
          *v70 = ((unsigned __int8)this & 1) == 0;
          klass = v72->klass;
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          if ( *(_WORD *)&v72->klass->_2.bitflags1 )
          {
            v75 = 0LL;
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v75;
              p_offset += 2;
              if ( v75 >= *(unsigned __int16 *)&v72->klass->_2.bitflags1 )
                goto LABEL_48;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_48:
            p_method = sub_B0F4C0(v72, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v72,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_75;
          v82 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_B77684(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_77;
          }
          if ( v68 >= currentObjects_5__4[6] )
            goto LABEL_76;
          v83 = &currentObjects_5__4[2 * v68];
          *((_QWORD *)v83 + 4) = v82;
          v80 = (BattleServantConfConponent_o *)(v83 + 8);
          v81 = (System_Int32_array **)v82;
        }
        else
        {
          *v70 = 1;
          v78 = v2->fields._currentObjects_5__4;
          if ( !v78 )
            goto LABEL_75;
          if ( v68 >= v78->max_length )
            goto LABEL_76;
          v79 = &v78->obj.klass + v68;
          v79[4] = 0LL;
          v80 = (BattleServantConfConponent_o *)(v79 + 4);
          v81 = 0LL;
        }
        sub_B77560(v80, v81, v60, v61, v62, v63, v64, v65);
        v84 = *p_endFlags_5__3;
        if ( !*p_endFlags_5__3 )
          goto LABEL_75;
        if ( v68 >= LODWORD(v84[1].monitor) )
          goto LABEL_76;
        if ( *((_BYTE *)&v84[2].klass + v68) )
        {
          if ( !_4__this )
            goto LABEL_75;
          v85 = _4__this->fields.tasks;
          ++_4__this->fields.currentExecuteIndex;
          if ( !v85 )
            goto LABEL_75;
          if ( v68 >= v85->max_length )
            goto LABEL_76;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)v85->m_Items[v68];
          if ( !this )
            goto LABEL_75;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
          v86 = _4__this->fields.tasks;
          if ( !v86 )
            goto LABEL_75;
          currentExecuteIndex = _4__this->fields.currentExecuteIndex;
          v88 = v86->max_length;
          if ( (int)currentExecuteIndex < v88 )
          {
            if ( (unsigned int)currentExecuteIndex >= v88 )
              goto LABEL_76;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)v86->m_Items[currentExecuteIndex];
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
        if ( (__int64)v68 >= _4__this->fields.currentExecuteIndex )
          break;
        count_5__2 = v2->fields._count_5__2;
      }
    }
    while ( (__int64)++v68 < count_5__2 );
  }
  v89 = (System_Int32_array **)v2->fields._currentObjects_5__4;
  v2->fields.__2__current = (Il2CppObject *)v89;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.__2__current, v89, v60, v61, v62, v63, v64, v65);
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardVerticalSchedule__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389297 & 1) == 0 )
  {
    sub_B775C4(&WarBoardVerticalSchedule___c_TypeInfo);
    byte_4389297 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardVerticalSchedule___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardVerticalSchedule___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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