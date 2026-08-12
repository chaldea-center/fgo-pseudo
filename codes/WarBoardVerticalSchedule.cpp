void WarBoardVerticalSchedule___ctor(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, method);
  this->fields.tasks = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tasks, 0, v3, v4, v5, v6, v7, v8);
}


void WarBoardVerticalSchedule___ctor_45184008(
        WarBoardVerticalSchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  this->fields.tasks = taskBases;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tasks, (int32_t)taskBases, v5, v6, v7, v8, v9, v10);
}


void WarBoardVerticalSchedule___ctor_45184052(
        WarBoardVerticalSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596E3C5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_596E3C5 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_2213CDC(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tasks, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}


System_Collections_IEnumerator_o *WarBoardVerticalSchedule__Execute(
        WarBoardVerticalSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E3C7 & 1) == 0 )
  {
    sub_2213A60(&WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
    byte_596E3C7 = 1;
  }
  v3 = sub_2213CCC(WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardVerticalSchedule__OnEnd(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardVerticalSchedule__OnStart(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  WarBoardVerticalSchedule_o *v3; // x19
  struct WarBoardTaskBase_array *tasks; // x8

  StartCallback = this->fields.StartCallback;
  v3 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardVerticalSchedule_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
                                           StartCallback->fields.method_code,
                                           StartCallback->fields.method);
  tasks = v3->fields.tasks;
  v3->fields.currentExecuteIndex = 0;
  if ( !tasks )
    goto LABEL_8;
  if ( SLODWORD(tasks->max_length) >= 1 )
  {
    this = (WarBoardVerticalSchedule_o *)tasks->m_Items[0];
    if ( this )
    {
      ((void (__fastcall *)(WarBoardVerticalSchedule_o *, const MethodInfo *))this->klass->vtable._5_OnStart.methodPtr)(
        this,
        this->klass->vtable._5_OnStart.method);
      return;
    }
LABEL_8:
    sub_2213CDC(this, method);
  }
}


void WarBoardVerticalSchedule__SetTask(
        WarBoardVerticalSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  WarBoardVerticalSchedule_o *v4; // x19
  System_Object_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v4 = this;
  if ( (byte_596E3C6 & 1) == 0 )
  {
    this = (WarBoardVerticalSchedule_o *)sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_596E3C6 = 1;
  }
  if ( !taskBases )
    sub_2213CDC(this, taskBases);
  v5 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  v4->fields.tasks = (struct WarBoardTaskBase_array *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.tasks, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


void WarBoardVerticalSchedule__Execute_d__7___ctor(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardVerticalSchedule__Execute_d__7__MoveNext(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  WarBoardVerticalSchedule__Execute_d__7_o *v3; // x19
  int32_t _1__state; // w8
  struct WarBoardVerticalSchedule_o *_4__this; // x23
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length_low; // x1
  Il2CppClass *v8; // x0
  __int64 v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x0
  unsigned int **p_executes_5__5; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  unsigned __int64 v36; // x22
  __int64 v37; // x24
  unsigned int *v38; // x8
  struct WarBoardTaskBase_array *v39; // x8
  unsigned int *v40; // x25
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  WarBoardVerticalSchedule__Execute_d__7_o *v47; // x21
  __int64 v48; // x1
  System_Collections_Generic_IEnumerable_TSource__o *endFlags_5__3; // x20
  WarBoardVerticalSchedule___c_c *v50; // x0
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x8
  System_Func_bool__bool__o *_9__7_0; // x21
  Il2CppObject *v53; // x22
  struct WarBoardVerticalSchedule___c_StaticFields *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  int count_5__2; // w8
  unsigned __int64 v69; // x21
  struct System_Boolean_array *v70; // x26
  bool *v71; // x27
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v73; // x20
  unsigned int *currentObjects_5__4; // x26
  System_Collections_IEnumerator_c *v75; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v77; // x9
  System_Collections_IEnumerator_c **p_offset; // x10
  __int64 v79; // x0
  WarBoardVerticalSchedule__Execute_d__7_o *v80; // x20
  unsigned int *v81; // x0
  struct System_Boolean_array *v82; // x8
  struct WarBoardTaskBase_array *v83; // x8
  struct WarBoardTaskBase_array *v84; // x8
  __int64 currentExecuteIndex; // x9
  int max_length; // w10
  struct System_Object_array *v87; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  __int64 v89; // x0

  v3 = this;
  if ( (byte_596E3C9 & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_All_bool___);
    sub_2213A60(&System_Func_bool__bool__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator___TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&Method_WarBoardVerticalSchedule___c__Execute_b__7_0__);
    sub_2213A60(&WarBoardVerticalSchedule___c_TypeInfo);
    this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_2213A60(&WarBoardManager_TypeInfo);
    byte_596E3C9 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_71;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_71;
    max_length_low = LODWORD(tasks->max_length);
    v8 = bool___TypeInfo;
    v3->fields._count_5__2 = max_length_low;
    v9 = sub_2213B20(v8, max_length_low);
    v3->fields._endFlags_5__3 = (struct System_Boolean_array *)v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields._endFlags_5__3, v9, v10, v11, v12, v13, v14, v15);
    v16 = sub_2213B20(object___TypeInfo, (unsigned int)v3->fields._count_5__2);
    v3->fields._currentObjects_5__4 = (struct System_Object_array *)v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields._currentObjects_5__4, v16, v17, v18, v19, v20, v21, v22);
    v23 = sub_2213B20(System_Collections_IEnumerator___TypeInfo, (unsigned int)v3->fields._count_5__2);
    v3->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v23;
    p_executes_5__5 = (unsigned int **)&v3->fields._executes_5__5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields._executes_5__5, v23, v25, v26, v27, v28, v29, v30);
    if ( v3->fields._count_5__2 >= 1 )
    {
      v36 = 0;
      v37 = 8;
      while ( 1 )
      {
        v38 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v36 >= v38[6] )
          goto LABEL_72;
        *(_QWORD *)&v38[v37] = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v38[v37], 0, v2, v31, v32, v33, v34, v35);
        v39 = _4__this->fields.tasks;
        if ( !v39 )
          break;
        if ( v36 >= LODWORD(v39->max_length) )
          goto LABEL_72;
        this = *(WarBoardVerticalSchedule__Execute_d__7_o **)((char *)&v39->obj.klass + v37 * 4);
        if ( this )
        {
          v40 = *p_executes_5__5;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
                                                               this,
                                                               this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
          if ( !v40 )
            break;
          v47 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_2213BB4(this, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
            if ( !this )
            {
LABEL_73:
              v89 = sub_2213D00(this, v48);
              sub_2213BA0(v89, 0);
            }
          }
          if ( v36 >= v40[6] )
LABEL_72:
            sub_2213CE4(this);
          *(_QWORD *)&v40[v37] = v47;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40[v37], (int32_t)v47, v41, v42, v43, v44, v45, v46);
        }
        ++v36;
        v37 += 2;
        if ( (__int64)v36 >= v3->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_71:
      sub_2213CDC(this, method);
    }
  }
LABEL_22:
  endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._endFlags_5__3;
  v50 = WarBoardVerticalSchedule___c_TypeInfo;
  if ( !*(&WarBoardVerticalSchedule___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardVerticalSchedule___c_TypeInfo, method, v2);
    v50 = WarBoardVerticalSchedule___c_TypeInfo;
  }
  static_fields = v50->static_fields;
  _9__7_0 = static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v50->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v50, method, v2);
      static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_bool__bool__o *)sub_2213CCC(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__7_0, v53, Method_WarBoardVerticalSchedule___c__Execute_b__7_0__, 0);
    v54 = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    v54->__9__7_0 = _9__7_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v54->__9__7_0, (int32_t)_9__7_0, v55, v56, v57, v58, v59, v60);
  }
  this = (WarBoardVerticalSchedule__Execute_d__7_o *)System_Linq_Enumerable__All_bool_(
                                                       endFlags_5__3,
                                                       (System_Func_TSource__bool__o *)_9__7_0,
                                                       (const MethodInfo_38643E4 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  count_5__2 = v3->fields._count_5__2;
  if ( count_5__2 >= 1 )
  {
    v69 = 0;
    do
    {
      v70 = v3->fields._endFlags_5__3;
      if ( !v70 )
        goto LABEL_71;
      if ( v69 >= LODWORD(v70->max_length) )
        goto LABEL_72;
      v71 = &v70->m_Items[v69];
      if ( !*v71 )
      {
        executes_5__5 = v3->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_71;
        if ( v69 >= LODWORD(executes_5__5->max_length) )
          goto LABEL_72;
        v73 = executes_5__5->m_Items[v69];
        if ( v73 )
        {
          if ( !*(&WarBoardManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, method, v61);
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)WarBoardManager__IEnumeratorExecute(v73, 0);
          if ( v69 >= LODWORD(v70->max_length) )
            goto LABEL_72;
          currentObjects_5__4 = (unsigned int *)v3->fields._currentObjects_5__4;
          v75 = System_Collections_IEnumerator_TypeInfo;
          *v71 = ((unsigned __int8)this & 1) == 0;
          klass = v73->klass;
          v77 = *(unsigned __int16 *)&v73->klass->_2.rank;
          if ( *(_WORD *)&v73->klass->_2.rank )
          {
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != v75 )
            {
              --v77;
              p_offset += 2;
              if ( !v77 )
                goto LABEL_45;
            }
            v79 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
          }
          else
          {
LABEL_45:
            v79 = sub_224BC3C(v73, v75, 1);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v79)(
                                                               v73,
                                                               *(_QWORD *)(v79 + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_71;
          v80 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_2213BB4(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_73;
          }
          if ( v69 >= currentObjects_5__4[6] )
            goto LABEL_72;
        }
        else
        {
          currentObjects_5__4 = (unsigned int *)v3->fields._currentObjects_5__4;
          *v71 = 1;
          if ( !currentObjects_5__4 )
            goto LABEL_71;
          if ( v69 >= currentObjects_5__4[6] )
            goto LABEL_72;
          v80 = 0;
        }
        v81 = &currentObjects_5__4[2 * v69];
        *((_QWORD *)v81 + 4) = v80;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v81 + 8), (int32_t)v80, v61, v62, v63, v64, v65, v66);
        v82 = v3->fields._endFlags_5__3;
        if ( !v82 )
          goto LABEL_71;
        if ( v69 >= LODWORD(v82->max_length) )
          goto LABEL_72;
        if ( v82->m_Items[v69] )
        {
          if ( !_4__this )
            goto LABEL_71;
          v83 = _4__this->fields.tasks;
          ++_4__this->fields.currentExecuteIndex;
          if ( !v83 )
            goto LABEL_71;
          if ( v69 >= LODWORD(v83->max_length) )
            goto LABEL_72;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)v83->m_Items[v69];
          if ( !this )
            goto LABEL_71;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                               this,
                                                               this->klass->vtable._6_MoveNext.method);
          v84 = _4__this->fields.tasks;
          if ( !v84 )
            goto LABEL_71;
          currentExecuteIndex = _4__this->fields.currentExecuteIndex;
          max_length = v84->max_length;
          if ( (int)currentExecuteIndex < max_length )
          {
            if ( (unsigned int)currentExecuteIndex >= max_length )
              goto LABEL_72;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)v84->m_Items[currentExecuteIndex];
            if ( !this )
              goto LABEL_71;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                                 this,
                                                                 this->klass->vtable._5_System_IDisposable_Dispose.method);
          }
        }
        else if ( !_4__this )
        {
          goto LABEL_71;
        }
        if ( (__int64)v69 >= _4__this->fields.currentExecuteIndex )
          break;
        count_5__2 = v3->fields._count_5__2;
      }
    }
    while ( (__int64)++v69 < count_5__2 );
  }
  v87 = v3->fields._currentObjects_5__4;
  v3->fields.__2__current = &v87->obj;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
  sub_2213A04(p__2__current, (int32_t)v87, v61, v62, v63, v64, v65, v66);
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return 1;
}


Il2CppObject *WarBoardVerticalSchedule__Execute_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardVerticalSchedule__Execute_d__7__System_Collections_IEnumerator_Reset(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WarBoardVerticalSchedule__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *WarBoardVerticalSchedule__Execute_d__7__System_Collections_IEnumerator_get_Current(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardVerticalSchedule__Execute_d__7__System_IDisposable_Dispose(
        WarBoardVerticalSchedule__Execute_d__7_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardVerticalSchedule___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596E3C8 & 1) == 0 )
  {
    sub_2213A60(&WarBoardVerticalSchedule___c_TypeInfo);
    byte_596E3C8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarBoardVerticalSchedule___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardVerticalSchedule___c_TypeInfo->static_fields->__9 = (struct WarBoardVerticalSchedule___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardVerticalSchedule___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardVerticalSchedule___c___ctor(WarBoardVerticalSchedule___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardVerticalSchedule___c___Execute_b__7_0(
        WarBoardVerticalSchedule___c_o *this,
        bool x,
        const MethodInfo *method)
{
  return x;
}