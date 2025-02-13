void __fastcall WarBoardVerticalSchedule___ctor(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, method);
  this->fields.tasks = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.tasks, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardVerticalSchedule___ctor_36883624(
        WarBoardVerticalSchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  this->fields.tasks = taskBases;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.tasks, (int64_t)taskBases, v5, v6, v7, v8, v9, v10);
}


void __fastcall WarBoardVerticalSchedule___ctor_36883668(
        WarBoardVerticalSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDA38D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_4BDA38D = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_1C22094(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.tasks, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


System_Collections_IEnumerator_o *__fastcall WarBoardVerticalSchedule__Execute(
        WarBoardVerticalSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDA38F & 1) == 0 )
  {
    sub_1C21E38(&WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
    byte_4BDA38F = 1;
  }
  v3 = sub_1C22084(WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardVerticalSchedule__OnEnd(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardVerticalSchedule__OnStart(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  WarBoardVerticalSchedule_o *v3; // x19
  struct WarBoardTaskBase_array *tasks; // x8

  StartCallback = this->fields.StartCallback;
  v3 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardVerticalSchedule_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
                                           StartCallback->fields.original_method_info,
                                           *(_QWORD *)&StartCallback->fields.extra_arg);
  tasks = v3->fields.tasks;
  v3->fields.currentExecuteIndex = 0;
  if ( !tasks )
    goto LABEL_8;
  if ( (int)tasks->max_length >= 1 )
  {
    this = (WarBoardVerticalSchedule_o *)tasks->m_Items[0];
    if ( this )
    {
      ((void (__fastcall *)(WarBoardVerticalSchedule_o *, Il2CppMethodPointer))this->klass->vtable._5_OnStart.method)(
        this,
        this->klass->vtable._6_OnEnd.methodPtr);
      return;
    }
LABEL_8:
    sub_1C22094(this, method);
  }
}


void __fastcall WarBoardVerticalSchedule__SetTask(
        WarBoardVerticalSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  WarBoardVerticalSchedule_o *v4; // x19
  System_Object_array *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v4 = this;
  if ( (byte_4BDA38E & 1) == 0 )
  {
    this = (WarBoardVerticalSchedule_o *)sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_4BDA38E = 1;
  }
  if ( !taskBases )
    sub_1C22094(this, taskBases);
  v5 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  v4->fields.tasks = (struct WarBoardTaskBase_array *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.tasks, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
  struct WarBoardVerticalSchedule_o *_4__this; // x23
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length; // x1
  int64_t v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x0
  unsigned int **p_executes_5__5; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  unsigned __int64 v35; // x22
  __int64 v36; // x24
  unsigned int *v37; // x8
  struct WarBoardTaskBase_array *v38; // x8
  unsigned int *v39; // x25
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  WarBoardVerticalSchedule__Execute_d__7_o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *endFlags_5__3; // x20
  WarBoardVerticalSchedule___c_c *v48; // x0
  System_Func_bool__bool__o *_9__7_0; // x21
  Il2CppObject *v50; // x22
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  bool result; // w0
  int count_5__2; // w8
  unsigned __int64 v66; // x21
  struct System_Boolean_array *v67; // x26
  bool *v68; // x27
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v70; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x26
  __int64 v73; // x9
  System_Collections_IEnumerator_c **p_offset; // x10
  __int64 p_method; // x0
  struct System_Object_array *v76; // x8
  Il2CppClass **v77; // x0
  WarBoardVerticalSchedule__Execute_d__7_o *v78; // x20
  PartyOrganizationUtility_o *v79; // x0
  unsigned int *v80; // x0
  struct System_Boolean_array *v81; // x8
  struct WarBoardTaskBase_array *v82; // x8
  struct WarBoardTaskBase_array *v83; // x8
  __int64 currentExecuteIndex; // x9
  int v85; // w10
  int64_t v86; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  __int64 v88; // x0

  v2 = this;
  if ( (byte_4BDA391 & 1) == 0 )
  {
    sub_1C21E38(&bool___TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_All_bool___);
    sub_1C21E38(&System_Func_bool__bool__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator___TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&Method_WarBoardVerticalSchedule___c__Execute_b__7_0__);
    sub_1C21E38(&WarBoardVerticalSchedule___c_TypeInfo);
    this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1C21E38(&WarBoardManager_TypeInfo);
    byte_4BDA391 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_72;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_72;
    max_length = tasks->max_length;
    v2->fields._count_5__2 = max_length;
    v7 = sub_1C21EE0(bool___TypeInfo, max_length);
    v2->fields._endFlags_5__3 = (struct System_Boolean_array *)v7;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._endFlags_5__3, v7, v8, v9, v10, v11, v12, v13);
    v14 = sub_1C21EE0(object___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._currentObjects_5__4 = (struct System_Object_array *)v14;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._currentObjects_5__4, v14, v15, v16, v17, v18, v19, v20);
    v21 = sub_1C21EE0(System_Collections_IEnumerator___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v21;
    p_executes_5__5 = (unsigned int **)&v2->fields._executes_5__5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._executes_5__5, v21, v23, v24, v25, v26, v27, v28);
    if ( v2->fields._count_5__2 >= 1 )
    {
      v35 = 0LL;
      v36 = 8LL;
      while ( 1 )
      {
        v37 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v35 >= v37[6] )
          goto LABEL_73;
        *(_QWORD *)&v37[v36] = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v37[v36], 0LL, v29, v30, v31, v32, v33, v34);
        v38 = _4__this->fields.tasks;
        if ( !v38 )
          break;
        if ( v35 >= v38->max_length )
          goto LABEL_73;
        this = *(WarBoardVerticalSchedule__Execute_d__7_o **)((char *)&v38->obj.klass + v36 * 4);
        if ( this )
        {
          v39 = *p_executes_5__5;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
          if ( !v39 )
            break;
          v46 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1C21F74(this, *(_QWORD *)(*(_QWORD *)v39 + 64LL));
            if ( !this )
            {
LABEL_74:
              v88 = sub_1C220B8();
              sub_1C21F60(v88, 0LL);
            }
          }
          if ( v35 >= v39[6] )
LABEL_73:
            sub_1C2209C(this, method);
          *(_QWORD *)&v39[v36] = v46;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v39[v36], (int64_t)v46, v40, v41, v42, v43, v44, v45);
        }
        ++v35;
        v36 += 2LL;
        if ( (__int64)v35 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_72:
      sub_1C22094(this, method);
    }
  }
LABEL_22:
  endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._endFlags_5__3;
  v48 = WarBoardVerticalSchedule___c_TypeInfo;
  if ( !WarBoardVerticalSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardVerticalSchedule___c_TypeInfo);
    v48 = WarBoardVerticalSchedule___c_TypeInfo;
  }
  _9__7_0 = v48->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = WarBoardVerticalSchedule___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v48->static_fields->__9;
    _9__7_0 = (System_Func_bool__bool__o *)sub_1C22084(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__7_0, v50, Method_WarBoardVerticalSchedule___c__Execute_b__7_0__, 0LL);
    static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = _9__7_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v52, v53, v54, v55, v56, v57);
  }
  this = (WarBoardVerticalSchedule__Execute_d__7_o *)System_Linq_Enumerable__All_bool_(
                                                       endFlags_5__3,
                                                       (System_Func_TSource__bool__o *)_9__7_0,
                                                       (const MethodInfo_2FB94EC *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  count_5__2 = v2->fields._count_5__2;
  if ( count_5__2 >= 1 )
  {
    v66 = 0LL;
    do
    {
      v67 = v2->fields._endFlags_5__3;
      if ( !v67 )
        goto LABEL_72;
      if ( v66 >= v67->max_length )
        goto LABEL_73;
      v68 = &v67->m_Items[v66 + 4];
      if ( !*v68 )
      {
        executes_5__5 = v2->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_72;
        if ( v66 >= executes_5__5->max_length )
          goto LABEL_73;
        v70 = executes_5__5->m_Items[v66];
        if ( v70 )
        {
          if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)WarBoardManager__IEnumeratorExecute(v70, 0LL);
          if ( v66 >= v67->max_length )
            goto LABEL_73;
          *v68 = ((unsigned __int8)this & 1) == 0;
          klass = v70->klass;
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          v73 = *(unsigned __int16 *)(&v70->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v70->klass->_2.bitflags2 + 3) )
          {
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v73;
              p_offset += 2;
              if ( !v73 )
                goto LABEL_45;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_45:
            p_method = sub_1C73E18(v70, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v70,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_72;
          v78 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1C21F74(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_74;
          }
          if ( v66 >= currentObjects_5__4[6] )
            goto LABEL_73;
          v80 = &currentObjects_5__4[2 * v66];
          *((_QWORD *)v80 + 4) = v78;
          v79 = (PartyOrganizationUtility_o *)(v80 + 8);
        }
        else
        {
          *v68 = 1;
          v76 = v2->fields._currentObjects_5__4;
          if ( !v76 )
            goto LABEL_72;
          if ( v66 >= v76->max_length )
            goto LABEL_73;
          v77 = &v76->obj.klass + v66;
          v78 = 0LL;
          v77[4] = 0LL;
          v79 = (PartyOrganizationUtility_o *)(v77 + 4);
        }
        sub_1C21DDC(v79, (int64_t)v78, v58, v59, v60, v61, v62, v63);
        v81 = v2->fields._endFlags_5__3;
        if ( !v81 )
          goto LABEL_72;
        if ( v66 >= v81->max_length )
          goto LABEL_73;
        if ( v81->m_Items[v66 + 4] )
        {
          if ( !_4__this )
            goto LABEL_72;
          v82 = _4__this->fields.tasks;
          ++_4__this->fields.currentExecuteIndex;
          if ( !v82 )
            goto LABEL_72;
          if ( v66 >= v82->max_length )
            goto LABEL_73;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)v82->m_Items[v66];
          if ( !this )
            goto LABEL_72;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
          v83 = _4__this->fields.tasks;
          if ( !v83 )
            goto LABEL_72;
          currentExecuteIndex = _4__this->fields.currentExecuteIndex;
          v85 = v83->max_length;
          if ( (int)currentExecuteIndex < v85 )
          {
            if ( (unsigned int)currentExecuteIndex >= v85 )
              goto LABEL_73;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)v83->m_Items[currentExecuteIndex];
            if ( !this )
              goto LABEL_72;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                                 this,
                                                                 this->klass->vtable._6_MoveNext.methodPtr);
          }
        }
        else if ( !_4__this )
        {
          goto LABEL_72;
        }
        if ( (__int64)v66 >= _4__this->fields.currentExecuteIndex )
          break;
        count_5__2 = v2->fields._count_5__2;
      }
    }
    while ( (__int64)++v66 < count_5__2 );
  }
  v86 = (int64_t)v2->fields._currentObjects_5__4;
  v2->fields.__2__current = (Il2CppObject *)v86;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C21DDC(p__2__current, v86, v58, v59, v60, v61, v62, v63);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_WarBoardVerticalSchedule__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDA390 & 1) == 0 )
  {
    sub_1C21E38(&WarBoardVerticalSchedule___c_TypeInfo);
    byte_4BDA390 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(WarBoardVerticalSchedule___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardVerticalSchedule___c_TypeInfo->static_fields->__9 = (struct WarBoardVerticalSchedule___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)WarBoardVerticalSchedule___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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