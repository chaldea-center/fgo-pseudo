void __fastcall WarBoardParallelSchedule___ctor(
        WarBoardParallelSchedule_o *this,
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tasks, (int64_t)taskBases, v5, v6, v7, v8, v9, v10);
}


void __fastcall WarBoardParallelSchedule___ctor_36387696(
        WarBoardParallelSchedule_o *this,
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

  if ( (byte_4B14086 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases, method);
    byte_4B14086 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_1BCAA3C(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tasks, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


System_Collections_IEnumerator_o *__fastcall WarBoardParallelSchedule__Execute(
        WarBoardParallelSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B14087 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardParallelSchedule__Execute_d__4_TypeInfo, method, v2);
    byte_4B14087 = 1;
  }
  v5 = sub_1BCAA2C(WarBoardParallelSchedule__Execute_d__4_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardParallelSchedule__OnEnd(WarBoardParallelSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardParallelSchedule__OnStart(WarBoardParallelSchedule_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  WarBoardParallelSchedule_o *v3; // x19
  struct WarBoardTaskBase_array *tasks; // x8
  unsigned __int64 v5; // x20
  __int64 v6; // x21

  StartCallback = this->fields.StartCallback;
  v3 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardParallelSchedule_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
                                           StartCallback->fields.original_method_info,
                                           *(_QWORD *)&StartCallback->fields.extra_arg);
  tasks = v3->fields.tasks;
  if ( !tasks )
LABEL_11:
    sub_1BCAA3C(this, method);
  if ( (int)*(_QWORD *)&tasks->max_length >= 1 )
  {
    v5 = 0LL;
    v6 = (unsigned int)*(_QWORD *)&tasks->max_length;
    while ( 1 )
    {
      if ( v5 >= tasks->max_length )
        sub_1BCAA44(this, method);
      this = (WarBoardParallelSchedule_o *)tasks->m_Items[v5];
      if ( this )
        this = (WarBoardParallelSchedule_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule_o *, Il2CppMethodPointer))this->klass->vtable._5_OnStart.method)(
                                               this,
                                               this->klass->vtable._6_OnEnd.methodPtr);
      if ( v6 == ++v5 )
        break;
      tasks = v3->fields.tasks;
      if ( !tasks )
        goto LABEL_11;
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
  int64_t v2; // x2
  __int64 v3; // x3
  WarBoardParallelSchedule__Execute_d__4_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t _1__state; // w8
  struct WarBoardParallelSchedule_o *_4__this; // x23
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length; // x1
  int64_t v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x0
  unsigned int **p_executes_5__5; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  unsigned __int64 v51; // x22
  __int64 v52; // x24
  unsigned int *v53; // x8
  struct WarBoardTaskBase_array *v54; // x8
  unsigned int *v55; // x25
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  WarBoardParallelSchedule__Execute_d__4_o *v62; // x21
  System_Collections_Generic_IEnumerable_TSource__o *endFlags_5__3; // x20
  WarBoardParallelSchedule___c_c *v64; // x0
  System_Func_bool__bool__o *_9__4_0; // x21
  Il2CppObject *v66; // x22
  struct WarBoardParallelSchedule___c_StaticFields *static_fields; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  bool result; // w0
  unsigned __int64 v81; // x21
  struct System_Boolean_array *v82; // x26
  bool *v83; // x27
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v85; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x26
  __int64 v88; // x9
  System_Collections_IEnumerator_c **p_offset; // x10
  __int64 p_method; // x0
  struct System_Object_array *v91; // x8
  Il2CppClass **v92; // x0
  WarBoardParallelSchedule__Execute_d__4_o *v93; // x20
  PartyOrganizationUtility_o *v94; // x0
  unsigned int *v95; // x0
  struct System_Boolean_array *v96; // x8
  struct WarBoardTaskBase_array *v97; // x8
  int64_t v98; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  __int64 v100; // x0

  v4 = this;
  if ( (byte_4B14089 & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_bool___, v5, v6);
    sub_1BCA7E0(&System_Func_bool__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_IEnumerator___TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&object___TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardParallelSchedule___c__Execute_b__4_0__, v15, v16);
    sub_1BCA7E0(&WarBoardParallelSchedule___c_TypeInfo, v17, v18);
    this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_1BCA7E0(&WarBoardManager_TypeInfo, v19, v20);
    byte_4B14089 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_65;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_65;
    max_length = tasks->max_length;
    v4->fields._count_5__2 = max_length;
    v25 = sub_1BCA888(bool___TypeInfo, max_length);
    v4->fields._endFlags_5__3 = (struct System_Boolean_array *)v25;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._endFlags_5__3, v25, v26, v27, v28, v29, v30, v31);
    v32 = sub_1BCA888(object___TypeInfo, (unsigned int)v4->fields._count_5__2);
    v4->fields._currentObjects_5__4 = (struct System_Object_array *)v32;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._currentObjects_5__4, v32, v33, v34, v35, v36, v37, v38);
    v39 = sub_1BCA888(System_Collections_IEnumerator___TypeInfo, (unsigned int)v4->fields._count_5__2);
    v4->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v39;
    p_executes_5__5 = (unsigned int **)&v4->fields._executes_5__5;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._executes_5__5, v39, v41, v42, v43, v44, v45, v46);
    if ( v4->fields._count_5__2 >= 1 )
    {
      v51 = 0LL;
      v52 = 8LL;
      while ( 1 )
      {
        v53 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v51 >= v53[6] )
          goto LABEL_66;
        *(_QWORD *)&v53[v52] = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v53[v52], 0LL, v2, v3, v47, v48, v49, v50);
        v54 = _4__this->fields.tasks;
        if ( !v54 )
          break;
        if ( v51 >= v54->max_length )
          goto LABEL_66;
        this = *(WarBoardParallelSchedule__Execute_d__4_o **)((char *)&v54->obj.klass + v52 * 4);
        if ( this )
        {
          v55 = *p_executes_5__5;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
          if ( !v55 )
            break;
          v62 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
            if ( !this )
            {
LABEL_67:
              v100 = sub_1BCAA60(this);
              sub_1BCA908(v100, 0LL);
            }
          }
          if ( v51 >= v55[6] )
LABEL_66:
            sub_1BCAA44(this, method);
          *(_QWORD *)&v55[v52] = v62;
          sub_1BCA784((PartyOrganizationUtility_o *)&v55[v52], (int64_t)v62, v56, v57, v58, v59, v60, v61);
        }
        ++v51;
        v52 += 2LL;
        if ( (__int64)v51 >= v4->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_65:
      sub_1BCAA3C(this, method);
    }
  }
LABEL_22:
  endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields._endFlags_5__3;
  v64 = WarBoardParallelSchedule___c_TypeInfo;
  if ( !WarBoardParallelSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardParallelSchedule___c_TypeInfo, method);
    v64 = WarBoardParallelSchedule___c_TypeInfo;
  }
  _9__4_0 = v64->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64, method);
      v64 = WarBoardParallelSchedule___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v64->static_fields->__9;
    _9__4_0 = (System_Func_bool__bool__o *)sub_1BCAA2C(System_Func_bool__bool__TypeInfo, method, v2, v3);
    System_Func_bool__bool____ctor(_9__4_0, v66, Method_WarBoardParallelSchedule___c__Execute_b__4_0__, 0LL);
    static_fields = WarBoardParallelSchedule___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = _9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v68, v69, v70, v71, v72, v73);
  }
  this = (WarBoardParallelSchedule__Execute_d__4_o *)System_Linq_Enumerable__All_bool_(
                                                       endFlags_5__3,
                                                       (System_Func_TSource__bool__o *)_9__4_0,
                                                       (const MethodInfo_2F1CA8C *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( v4->fields._count_5__2 >= 1 )
  {
    v81 = 0LL;
    do
    {
      v82 = v4->fields._endFlags_5__3;
      if ( !v82 )
        goto LABEL_65;
      if ( v81 >= v82->max_length )
        goto LABEL_66;
      v83 = &v82->m_Items[v81 + 4];
      if ( !*v83 )
      {
        executes_5__5 = v4->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_65;
        if ( v81 >= executes_5__5->max_length )
          goto LABEL_66;
        v85 = executes_5__5->m_Items[v81];
        if ( v85 )
        {
          if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, method);
          this = (WarBoardParallelSchedule__Execute_d__4_o *)WarBoardManager__IEnumeratorExecute(v85, 0LL);
          if ( v81 >= v82->max_length )
            goto LABEL_66;
          *v83 = ((unsigned __int8)this & 1) == 0;
          klass = v85->klass;
          currentObjects_5__4 = (unsigned int *)v4->fields._currentObjects_5__4;
          v88 = *(unsigned __int16 *)(&v85->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v85->klass->_2.bitflags2 + 3) )
          {
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v88;
              p_offset += 2;
              if ( !v88 )
                goto LABEL_45;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_45:
            p_method = sub_1C1C7C0(v85, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          this = (WarBoardParallelSchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v85,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_65;
          v93 = this;
          if ( this )
          {
            this = (WarBoardParallelSchedule__Execute_d__4_o *)sub_1BCA91C(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_67;
          }
          if ( v81 >= currentObjects_5__4[6] )
            goto LABEL_66;
          v95 = &currentObjects_5__4[2 * v81];
          *((_QWORD *)v95 + 4) = v93;
          v94 = (PartyOrganizationUtility_o *)(v95 + 8);
        }
        else
        {
          *v83 = 1;
          v91 = v4->fields._currentObjects_5__4;
          if ( !v91 )
            goto LABEL_65;
          if ( v81 >= v91->max_length )
            goto LABEL_66;
          v92 = &v91->obj.klass + v81;
          v93 = 0LL;
          v92[4] = 0LL;
          v94 = (PartyOrganizationUtility_o *)(v92 + 4);
        }
        sub_1BCA784(v94, (int64_t)v93, v74, v75, v76, v77, v78, v79);
        v96 = v4->fields._endFlags_5__3;
        if ( !v96 )
          goto LABEL_65;
        if ( v81 >= v96->max_length )
          goto LABEL_66;
        if ( v96->m_Items[v81 + 4] )
        {
          if ( !_4__this )
            goto LABEL_65;
          v97 = _4__this->fields.tasks;
          if ( !v97 )
            goto LABEL_65;
          if ( v81 >= v97->max_length )
            goto LABEL_66;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)v97->m_Items[v81];
          if ( !this )
            goto LABEL_65;
          this = (WarBoardParallelSchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardParallelSchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        }
      }
    }
    while ( (__int64)++v81 < v4->fields._count_5__2 );
  }
  v98 = (int64_t)v4->fields._currentObjects_5__4;
  v4->fields.__2__current = (Il2CppObject *)v98;
  p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(p__2__current, v98, v74, v75, v76, v77, v78, v79);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardParallelSchedule__Execute_d__4_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B14088 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardParallelSchedule___c_TypeInfo, v1, v2);
    byte_4B14088 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardParallelSchedule___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardParallelSchedule___c_TypeInfo->static_fields->__9 = (struct WarBoardParallelSchedule___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardParallelSchedule___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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