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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.tasks, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardVerticalSchedule___ctor_36795204(
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.tasks, (int64_t)taskBases, v5, v6, v7, v8, v9, v10);
}


void __fastcall WarBoardVerticalSchedule___ctor_36795248(
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

  if ( (byte_4BB2540 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_4BB2540 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_1C13F80(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.tasks, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4BB2542 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardVerticalSchedule__Execute_d__7_TypeInfo, method);
    byte_4BB2542 = 1;
  }
  v3 = sub_1C13F70(WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
    sub_1C13F80(this, method);
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
  if ( (byte_4BB2541 & 1) == 0 )
  {
    this = (WarBoardVerticalSchedule_o *)sub_1C13D24(
                                           &Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__,
                                           taskBases);
    byte_4BB2541 = 1;
  }
  if ( !taskBases )
    sub_1C13F80(this, taskBases);
  v5 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  v4->fields.tasks = (struct WarBoardTaskBase_array *)v5;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.tasks, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct WarBoardVerticalSchedule_o *_4__this; // x23
  struct WarBoardTaskBase_array *tasks; // x8
  __int64 max_length; // x1
  int64_t v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x0
  unsigned int **p_executes_5__5; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  unsigned __int64 v43; // x22
  __int64 v44; // x24
  unsigned int *v45; // x8
  struct WarBoardTaskBase_array *v46; // x8
  unsigned int *v47; // x25
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  WarBoardVerticalSchedule__Execute_d__7_o *v54; // x21
  System_Collections_Generic_IEnumerable_TSource__o *endFlags_5__3; // x20
  WarBoardVerticalSchedule___c_c *v56; // x0
  System_Func_bool__bool__o *_9__7_0; // x21
  Il2CppObject *v58; // x22
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  bool result; // w0
  int count_5__2; // w8
  unsigned __int64 v74; // x21
  struct System_Boolean_array *v75; // x26
  bool *v76; // x27
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v78; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x26
  __int64 v81; // x9
  System_Collections_IEnumerator_c **p_offset; // x10
  __int64 p_method; // x0
  struct System_Object_array *v84; // x8
  Il2CppClass **v85; // x0
  WarBoardVerticalSchedule__Execute_d__7_o *v86; // x20
  PartyOrganizationUtility_o *v87; // x0
  unsigned int *v88; // x0
  struct System_Boolean_array *v89; // x8
  struct WarBoardTaskBase_array *v90; // x8
  struct WarBoardTaskBase_array *v91; // x8
  __int64 currentExecuteIndex; // x9
  int v93; // w10
  int64_t v94; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  __int64 v96; // x0

  v2 = this;
  if ( (byte_4BB2544 & 1) == 0 )
  {
    sub_1C13D24(&bool___TypeInfo, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_All_bool___, v3);
    sub_1C13D24(&System_Func_bool__bool__TypeInfo, v4);
    sub_1C13D24(&System_Collections_IEnumerator___TypeInfo, v5);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1C13D24(&object___TypeInfo, v7);
    sub_1C13D24(&Method_WarBoardVerticalSchedule___c__Execute_b__7_0__, v8);
    sub_1C13D24(&WarBoardVerticalSchedule___c_TypeInfo, v9);
    this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1C13D24(&WarBoardManager_TypeInfo, v10);
    byte_4BB2544 = 1;
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
    v15 = sub_1C13DCC(bool___TypeInfo, max_length);
    v2->fields._endFlags_5__3 = (struct System_Boolean_array *)v15;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields._endFlags_5__3, v15, v16, v17, v18, v19, v20, v21);
    v22 = sub_1C13DCC(object___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._currentObjects_5__4 = (struct System_Object_array *)v22;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields._currentObjects_5__4, v22, v23, v24, v25, v26, v27, v28);
    v29 = sub_1C13DCC(System_Collections_IEnumerator___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v29;
    p_executes_5__5 = (unsigned int **)&v2->fields._executes_5__5;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields._executes_5__5, v29, v31, v32, v33, v34, v35, v36);
    if ( v2->fields._count_5__2 >= 1 )
    {
      v43 = 0LL;
      v44 = 8LL;
      while ( 1 )
      {
        v45 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v43 >= v45[6] )
          goto LABEL_73;
        *(_QWORD *)&v45[v44] = 0LL;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v45[v44], 0LL, v37, v38, v39, v40, v41, v42);
        v46 = _4__this->fields.tasks;
        if ( !v46 )
          break;
        if ( v43 >= v46->max_length )
          goto LABEL_73;
        this = *(WarBoardVerticalSchedule__Execute_d__7_o **)((char *)&v46->obj.klass + v44 * 4);
        if ( this )
        {
          v47 = *p_executes_5__5;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
          if ( !v47 )
            break;
          v54 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1C13E60(this, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
            if ( !this )
            {
LABEL_74:
              v96 = sub_1C13FA4();
              sub_1C13E4C(v96, 0LL);
            }
          }
          if ( v43 >= v47[6] )
LABEL_73:
            sub_1C13F88(this, method);
          *(_QWORD *)&v47[v44] = v54;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v47[v44], (int64_t)v54, v48, v49, v50, v51, v52, v53);
        }
        ++v43;
        v44 += 2LL;
        if ( (__int64)v43 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_72:
      sub_1C13F80(this, method);
    }
  }
LABEL_22:
  endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._endFlags_5__3;
  v56 = WarBoardVerticalSchedule___c_TypeInfo;
  if ( !WarBoardVerticalSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardVerticalSchedule___c_TypeInfo);
    v56 = WarBoardVerticalSchedule___c_TypeInfo;
  }
  _9__7_0 = v56->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v56 = WarBoardVerticalSchedule___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v56->static_fields->__9;
    _9__7_0 = (System_Func_bool__bool__o *)sub_1C13F70(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__7_0, v58, Method_WarBoardVerticalSchedule___c__Execute_b__7_0__, 0LL);
    static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = _9__7_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v60, v61, v62, v63, v64, v65);
  }
  this = (WarBoardVerticalSchedule__Execute_d__7_o *)System_Linq_Enumerable__All_bool_(
                                                       endFlags_5__3,
                                                       (System_Func_TSource__bool__o *)_9__7_0,
                                                       (const MethodInfo_2F98B54 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  count_5__2 = v2->fields._count_5__2;
  if ( count_5__2 >= 1 )
  {
    v74 = 0LL;
    do
    {
      v75 = v2->fields._endFlags_5__3;
      if ( !v75 )
        goto LABEL_72;
      if ( v74 >= v75->max_length )
        goto LABEL_73;
      v76 = &v75->m_Items[v74 + 4];
      if ( !*v76 )
      {
        executes_5__5 = v2->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_72;
        if ( v74 >= executes_5__5->max_length )
          goto LABEL_73;
        v78 = executes_5__5->m_Items[v74];
        if ( v78 )
        {
          if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)WarBoardManager__IEnumeratorExecute(v78, 0LL);
          if ( v74 >= v75->max_length )
            goto LABEL_73;
          *v76 = ((unsigned __int8)this & 1) == 0;
          klass = v78->klass;
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          v81 = *(unsigned __int16 *)(&v78->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v78->klass->_2.bitflags2 + 3) )
          {
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v81;
              p_offset += 2;
              if ( !v81 )
                goto LABEL_45;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_45:
            p_method = sub_1C65D04(v78, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v78,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_72;
          v86 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1C13E60(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_74;
          }
          if ( v74 >= currentObjects_5__4[6] )
            goto LABEL_73;
          v88 = &currentObjects_5__4[2 * v74];
          *((_QWORD *)v88 + 4) = v86;
          v87 = (PartyOrganizationUtility_o *)(v88 + 8);
        }
        else
        {
          *v76 = 1;
          v84 = v2->fields._currentObjects_5__4;
          if ( !v84 )
            goto LABEL_72;
          if ( v74 >= v84->max_length )
            goto LABEL_73;
          v85 = &v84->obj.klass + v74;
          v86 = 0LL;
          v85[4] = 0LL;
          v87 = (PartyOrganizationUtility_o *)(v85 + 4);
        }
        sub_1C13CC8(v87, (int64_t)v86, v66, v67, v68, v69, v70, v71);
        v89 = v2->fields._endFlags_5__3;
        if ( !v89 )
          goto LABEL_72;
        if ( v74 >= v89->max_length )
          goto LABEL_73;
        if ( v89->m_Items[v74 + 4] )
        {
          if ( !_4__this )
            goto LABEL_72;
          v90 = _4__this->fields.tasks;
          ++_4__this->fields.currentExecuteIndex;
          if ( !v90 )
            goto LABEL_72;
          if ( v74 >= v90->max_length )
            goto LABEL_73;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)v90->m_Items[v74];
          if ( !this )
            goto LABEL_72;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
          v91 = _4__this->fields.tasks;
          if ( !v91 )
            goto LABEL_72;
          currentExecuteIndex = _4__this->fields.currentExecuteIndex;
          v93 = v91->max_length;
          if ( (int)currentExecuteIndex < v93 )
          {
            if ( (unsigned int)currentExecuteIndex >= v93 )
              goto LABEL_73;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)v91->m_Items[currentExecuteIndex];
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
        if ( (__int64)v74 >= _4__this->fields.currentExecuteIndex )
          break;
        count_5__2 = v2->fields._count_5__2;
      }
    }
    while ( (__int64)++v74 < count_5__2 );
  }
  v94 = (int64_t)v2->fields._currentObjects_5__4;
  v2->fields.__2__current = (Il2CppObject *)v94;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C13CC8(p__2__current, v94, v66, v67, v68, v69, v70, v71);
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

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_WarBoardVerticalSchedule__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB2543 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardVerticalSchedule___c_TypeInfo, v1);
    byte_4BB2543 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(WarBoardVerticalSchedule___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardVerticalSchedule___c_TypeInfo->static_fields->__9 = (struct WarBoardVerticalSchedule___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardVerticalSchedule___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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