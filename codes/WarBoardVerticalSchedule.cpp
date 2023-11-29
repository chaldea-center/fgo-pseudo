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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.tasks, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardVerticalSchedule___ctor_26381960(
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


void __fastcall WarBoardVerticalSchedule___ctor_26382012(
        WarBoardVerticalSchedule_o *this,
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

  if ( (byte_40FA917 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_40FA917 = 1;
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


System_Collections_IEnumerator_o *__fastcall WarBoardVerticalSchedule__Execute(
        WarBoardVerticalSchedule_o *this,
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

  if ( (byte_40FA919 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardVerticalSchedule__Execute_d__7_TypeInfo, method);
    byte_40FA919 = 1;
  }
  v6 = sub_B170CC(WarBoardVerticalSchedule__Execute_d__7_TypeInfo, method, v2, v3, v4);
  WarBoardVerticalSchedule__Execute_d__7___ctor((WarBoardVerticalSchedule__Execute_d__7_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardVerticalSchedule__OnEnd(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardVerticalSchedule__OnStart(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_array *tasks; // x8
  WarBoardTaskBase_o *v4; // x0

  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  tasks = this->fields.tasks;
  this->fields.currentExecuteIndex = 0;
  if ( !tasks )
    goto LABEL_6;
  if ( (int)tasks->max_length >= 1 )
  {
    v4 = tasks->m_Items[0];
    if ( v4 )
    {
      ((void (__fastcall *)(WarBoardTaskBase_o *, Il2CppMethodPointer))v4->klass->vtable._5_OnStart.method)(
        v4,
        v4->klass->vtable._6_OnEnd.methodPtr);
      return;
    }
LABEL_6:
    sub_B170D4();
  }
}


void __fastcall WarBoardVerticalSchedule__SetTask(
        WarBoardVerticalSchedule_o *this,
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

  if ( (byte_40FA918 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_40FA918 = 1;
  }
  if ( !taskBases )
    sub_B170D4();
  v5 = (struct WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.tasks, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
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
  struct WarBoardVerticalSchedule_o *_4__this; // x24
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
  WarBoardVerticalSchedule___c_c *v60; // x0
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x8
  System_Func_bool__bool__o *_9__7_0; // x22
  Il2CppObject *v63; // x23
  struct WarBoardVerticalSchedule___c_StaticFields *v64; // x0
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
  int32_t count_5__2; // w8
  unsigned __int64 v78; // x22
  struct System_Boolean_array *v79; // x27
  bool *v80; // x28
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v82; // x21
  System_Collections_IEnumerator_c *klass; // x8
  struct System_Object_array *currentObjects_5__4; // x27
  unsigned __int64 v85; // x10
  System_Collections_IEnumerator_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_Object_array *v88; // x8
  Il2CppClass **v89; // x0
  BattleServantConfConponent_o *v90; // x0
  System_Int32_array **v91; // x1
  System_Int32_array **v92; // x21
  Il2CppClass **v93; // x0
  struct System_Boolean_array *v94; // x8
  struct WarBoardTaskBase_array *v95; // x8
  WarBoardTaskBase_o *v96; // x0
  struct WarBoardTaskBase_array *v97; // x8
  __int64 currentExecuteIndex; // x9
  int v99; // w10
  WarBoardTaskBase_o *v100; // x0
  struct System_Object_array *v101; // x1

  if ( (byte_40F7889 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_All_bool___, v6);
    sub_B16FFC(&Method_System_Func_bool__bool___ctor__, v7);
    sub_B16FFC(&System_Func_bool__bool__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator___TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&object___TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardVerticalSchedule___c__Execute_b__7_0__, v12);
    sub_B16FFC(&WarBoardVerticalSchedule___c_TypeInfo, v13);
    sub_B16FFC(&WarBoardManager_TypeInfo, v14);
    byte_40F7889 = 1;
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
      goto LABEL_75;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_75;
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
          goto LABEL_76;
        *(Il2CppClass **)((char *)&v50->obj.klass + v49 * 4) = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)((char *)v50 + v49 * 4), 0LL, v2, v3, v4, v45, v46, v47);
        v51 = _4__this->fields.tasks;
        if ( !v51 )
          break;
        if ( v48 >= v51->max_length )
          goto LABEL_76;
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
LABEL_77:
              sub_B170F4(v44);
              sub_B170A0();
            }
          }
          if ( v48 >= v52[6] )
          {
LABEL_76:
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
LABEL_75:
      sub_B170D4();
    }
  }
LABEL_22:
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_endFlags_5__3;
  v60 = WarBoardVerticalSchedule___c_TypeInfo;
  if ( (BYTE3(WarBoardVerticalSchedule___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardVerticalSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardVerticalSchedule___c_TypeInfo);
    v60 = WarBoardVerticalSchedule___c_TypeInfo;
  }
  static_fields = v60->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_bool__bool__o *)sub_B170CC(System_Func_bool__bool__TypeInfo, method, v2, v3, v4);
    System_Func_bool__bool____ctor(
      _9__7_0,
      v63,
      Method_WarBoardVerticalSchedule___c__Execute_b__7_0__,
      (const MethodInfo_2B63150 *)Method_System_Func_bool__bool___ctor__);
    v64 = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    v64->__9__7_0 = _9__7_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v64->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  v44 = System_Linq_Enumerable__All_bool_(
          v59,
          (System_Func_TSource__bool__o *)_9__7_0,
          (const MethodInfo_18C6DA0 *)Method_System_Linq_Enumerable_All_bool___);
  if ( (v44 & 1) != 0 )
    return 0;
  count_5__2 = this->fields._count_5__2;
  if ( count_5__2 > 0 )
  {
    v78 = 0LL;
    do
    {
      v79 = *p_endFlags_5__3;
      if ( !*p_endFlags_5__3 )
        goto LABEL_75;
      if ( v78 >= v79->max_length )
        goto LABEL_76;
      v80 = &v79->m_Items[v78 + 4];
      if ( !*v80 )
      {
        executes_5__5 = this->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_75;
        if ( v78 >= executes_5__5->max_length )
          goto LABEL_76;
        v82 = executes_5__5->m_Items[v78];
        if ( v82 )
        {
          if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          }
          v44 = WarBoardManager__IEnumeratorExecute(v82, 0LL);
          if ( v78 >= v79->max_length )
            goto LABEL_76;
          *v80 = (v44 & 1) == 0;
          klass = v82->klass;
          currentObjects_5__4 = this->fields._currentObjects_5__4;
          if ( *(_WORD *)&v82->klass->_2.bitflags1 )
          {
            v85 = 0LL;
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v85;
              p_offset += 2;
              if ( v85 >= *(unsigned __int16 *)&v82->klass->_2.bitflags1 )
                goto LABEL_48;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_48:
            p_method = sub_AAFEF8(v82, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v44 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  v82,
                  *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_75;
          v92 = (System_Int32_array **)v44;
          if ( v44 )
          {
            v44 = sub_B170BC(v44, currentObjects_5__4->obj.klass->_1.element_class);
            if ( !v44 )
              goto LABEL_77;
          }
          if ( v78 >= currentObjects_5__4->max_length )
            goto LABEL_76;
          v93 = &currentObjects_5__4->obj.klass + v78;
          v93[4] = (Il2CppClass *)v92;
          v90 = (BattleServantConfConponent_o *)(v93 + 4);
          v91 = v92;
        }
        else
        {
          *v80 = 1;
          v88 = this->fields._currentObjects_5__4;
          if ( !v88 )
            goto LABEL_75;
          if ( v78 >= v88->max_length )
            goto LABEL_76;
          v89 = &v88->obj.klass + v78;
          v89[4] = 0LL;
          v90 = (BattleServantConfConponent_o *)(v89 + 4);
          v91 = 0LL;
        }
        sub_B16F98(v90, v91, v2, v71, v72, v73, v74, v75);
        v94 = *p_endFlags_5__3;
        if ( !*p_endFlags_5__3 )
          goto LABEL_75;
        if ( v78 >= v94->max_length )
          goto LABEL_76;
        if ( v94->m_Items[v78 + 4] )
        {
          if ( !_4__this )
            goto LABEL_75;
          v95 = _4__this->fields.tasks;
          ++_4__this->fields.currentExecuteIndex;
          if ( !v95 )
            goto LABEL_75;
          if ( v78 >= v95->max_length )
            goto LABEL_76;
          v96 = v95->m_Items[v78];
          if ( !v96 )
            goto LABEL_75;
          v44 = ((__int64 (__fastcall *)(WarBoardTaskBase_o *, Il2CppMethodPointer))v96->klass->vtable._6_OnEnd.method)(
                  v96,
                  v96->klass->vtable._7_OnPause.methodPtr);
          v97 = _4__this->fields.tasks;
          if ( !v97 )
            goto LABEL_75;
          currentExecuteIndex = _4__this->fields.currentExecuteIndex;
          v99 = v97->max_length;
          if ( (int)currentExecuteIndex < v99 )
          {
            if ( (unsigned int)currentExecuteIndex >= v99 )
              goto LABEL_76;
            v100 = v97->m_Items[currentExecuteIndex];
            if ( !v100 )
              goto LABEL_75;
            v44 = ((__int64 (__fastcall *)(WarBoardTaskBase_o *, Il2CppMethodPointer))v100->klass->vtable._5_OnStart.method)(
                    v100,
                    v100->klass->vtable._6_OnEnd.methodPtr);
          }
        }
        else if ( !_4__this )
        {
          goto LABEL_75;
        }
        if ( (__int64)v78 >= _4__this->fields.currentExecuteIndex )
          break;
        count_5__2 = this->fields._count_5__2;
      }
    }
    while ( (__int64)++v78 < count_5__2 );
  }
  v101 = this->fields._currentObjects_5__4;
  this->fields.__2__current = &v101->obj;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v101,
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardVerticalSchedule__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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

  if ( (byte_40F7888 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardVerticalSchedule___c_TypeInfo, v1);
    byte_40F7888 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardVerticalSchedule___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardVerticalSchedule___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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