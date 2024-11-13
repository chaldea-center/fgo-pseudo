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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tasks, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardVerticalSchedule___ctor_36394844(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tasks, (int64_t)taskBases, v5, v6, v7, v8, v9, v10);
}


void __fastcall WarBoardVerticalSchedule___ctor_36394888(
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

  if ( (byte_4B1409B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases, method);
    byte_4B1409B = 1;
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


System_Collections_IEnumerator_o *__fastcall WarBoardVerticalSchedule__Execute(
        WarBoardVerticalSchedule_o *this,
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

  if ( (byte_4B1409D & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardVerticalSchedule__Execute_d__7_TypeInfo, method, v2);
    byte_4B1409D = 1;
  }
  v5 = sub_1BCAA2C(WarBoardVerticalSchedule__Execute_d__7_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
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
    sub_1BCAA3C(this, method);
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
  if ( (byte_4B1409C & 1) == 0 )
  {
    this = (WarBoardVerticalSchedule_o *)sub_1BCA7E0(
                                           &Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__,
                                           taskBases,
                                           method);
    byte_4B1409C = 1;
  }
  if ( !taskBases )
    sub_1BCAA3C(this, taskBases);
  v5 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  v4->fields.tasks = (struct WarBoardTaskBase_array *)v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.tasks, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
  int64_t v2; // x2
  __int64 v3; // x3
  WarBoardVerticalSchedule__Execute_d__7_o *v4; // x19
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
  struct WarBoardVerticalSchedule_o *_4__this; // x23
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
  WarBoardVerticalSchedule__Execute_d__7_o *v62; // x21
  System_Collections_Generic_IEnumerable_TSource__o *endFlags_5__3; // x20
  WarBoardVerticalSchedule___c_c *v64; // x0
  System_Func_bool__bool__o *_9__7_0; // x21
  Il2CppObject *v66; // x22
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x0
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
  int count_5__2; // w8
  unsigned __int64 v82; // x21
  struct System_Boolean_array *v83; // x26
  bool *v84; // x27
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v86; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x26
  __int64 v89; // x9
  System_Collections_IEnumerator_c **p_offset; // x10
  __int64 p_method; // x0
  struct System_Object_array *v92; // x8
  Il2CppClass **v93; // x0
  WarBoardVerticalSchedule__Execute_d__7_o *v94; // x20
  PartyOrganizationUtility_o *v95; // x0
  unsigned int *v96; // x0
  struct System_Boolean_array *v97; // x8
  struct WarBoardTaskBase_array *v98; // x8
  struct WarBoardTaskBase_array *v99; // x8
  __int64 currentExecuteIndex; // x9
  int v101; // w10
  int64_t v102; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  __int64 v104; // x0

  v4 = this;
  if ( (byte_4B1409F & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_bool___, v5, v6);
    sub_1BCA7E0(&System_Func_bool__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_IEnumerator___TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&object___TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardVerticalSchedule___c__Execute_b__7_0__, v15, v16);
    sub_1BCA7E0(&WarBoardVerticalSchedule___c_TypeInfo, v17, v18);
    this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1BCA7E0(&WarBoardManager_TypeInfo, v19, v20);
    byte_4B1409F = 1;
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
      goto LABEL_72;
    tasks = _4__this->fields.tasks;
    if ( !tasks )
      goto LABEL_72;
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
          goto LABEL_73;
        *(_QWORD *)&v53[v52] = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v53[v52], 0LL, v2, v3, v47, v48, v49, v50);
        v54 = _4__this->fields.tasks;
        if ( !v54 )
          break;
        if ( v51 >= v54->max_length )
          goto LABEL_73;
        this = *(WarBoardVerticalSchedule__Execute_d__7_o **)((char *)&v54->obj.klass + v52 * 4);
        if ( this )
        {
          v55 = *p_executes_5__5;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
          if ( !v55 )
            break;
          v62 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
            if ( !this )
            {
LABEL_74:
              v104 = sub_1BCAA60(this);
              sub_1BCA908(v104, 0LL);
            }
          }
          if ( v51 >= v55[6] )
LABEL_73:
            sub_1BCAA44(this, method);
          *(_QWORD *)&v55[v52] = v62;
          sub_1BCA784((PartyOrganizationUtility_o *)&v55[v52], (int64_t)v62, v56, v57, v58, v59, v60, v61);
        }
        ++v51;
        v52 += 2LL;
        if ( (__int64)v51 >= v4->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_72:
      sub_1BCAA3C(this, method);
    }
  }
LABEL_22:
  endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields._endFlags_5__3;
  v64 = WarBoardVerticalSchedule___c_TypeInfo;
  if ( !WarBoardVerticalSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardVerticalSchedule___c_TypeInfo, method);
    v64 = WarBoardVerticalSchedule___c_TypeInfo;
  }
  _9__7_0 = v64->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64, method);
      v64 = WarBoardVerticalSchedule___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v64->static_fields->__9;
    _9__7_0 = (System_Func_bool__bool__o *)sub_1BCAA2C(System_Func_bool__bool__TypeInfo, method, v2, v3);
    System_Func_bool__bool____ctor(_9__7_0, v66, Method_WarBoardVerticalSchedule___c__Execute_b__7_0__, 0LL);
    static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = _9__7_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v68, v69, v70, v71, v72, v73);
  }
  this = (WarBoardVerticalSchedule__Execute_d__7_o *)System_Linq_Enumerable__All_bool_(
                                                       endFlags_5__3,
                                                       (System_Func_TSource__bool__o *)_9__7_0,
                                                       (const MethodInfo_2F1CA8C *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  count_5__2 = v4->fields._count_5__2;
  if ( count_5__2 >= 1 )
  {
    v82 = 0LL;
    do
    {
      v83 = v4->fields._endFlags_5__3;
      if ( !v83 )
        goto LABEL_72;
      if ( v82 >= v83->max_length )
        goto LABEL_73;
      v84 = &v83->m_Items[v82 + 4];
      if ( !*v84 )
      {
        executes_5__5 = v4->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_72;
        if ( v82 >= executes_5__5->max_length )
          goto LABEL_73;
        v86 = executes_5__5->m_Items[v82];
        if ( v86 )
        {
          if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, method);
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)WarBoardManager__IEnumeratorExecute(v86, 0LL);
          if ( v82 >= v83->max_length )
            goto LABEL_73;
          *v84 = ((unsigned __int8)this & 1) == 0;
          klass = v86->klass;
          currentObjects_5__4 = (unsigned int *)v4->fields._currentObjects_5__4;
          v89 = *(unsigned __int16 *)(&v86->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v86->klass->_2.bitflags2 + 3) )
          {
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v89;
              p_offset += 2;
              if ( !v89 )
                goto LABEL_45;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_45:
            p_method = sub_1C1C7C0(v86, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v86,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_72;
          v94 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1BCA91C(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_74;
          }
          if ( v82 >= currentObjects_5__4[6] )
            goto LABEL_73;
          v96 = &currentObjects_5__4[2 * v82];
          *((_QWORD *)v96 + 4) = v94;
          v95 = (PartyOrganizationUtility_o *)(v96 + 8);
        }
        else
        {
          *v84 = 1;
          v92 = v4->fields._currentObjects_5__4;
          if ( !v92 )
            goto LABEL_72;
          if ( v82 >= v92->max_length )
            goto LABEL_73;
          v93 = &v92->obj.klass + v82;
          v94 = 0LL;
          v93[4] = 0LL;
          v95 = (PartyOrganizationUtility_o *)(v93 + 4);
        }
        sub_1BCA784(v95, (int64_t)v94, v74, v75, v76, v77, v78, v79);
        v97 = v4->fields._endFlags_5__3;
        if ( !v97 )
          goto LABEL_72;
        if ( v82 >= v97->max_length )
          goto LABEL_73;
        if ( v97->m_Items[v82 + 4] )
        {
          if ( !_4__this )
            goto LABEL_72;
          v98 = _4__this->fields.tasks;
          ++_4__this->fields.currentExecuteIndex;
          if ( !v98 )
            goto LABEL_72;
          if ( v82 >= v98->max_length )
            goto LABEL_73;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)v98->m_Items[v82];
          if ( !this )
            goto LABEL_72;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
          v99 = _4__this->fields.tasks;
          if ( !v99 )
            goto LABEL_72;
          currentExecuteIndex = _4__this->fields.currentExecuteIndex;
          v101 = v99->max_length;
          if ( (int)currentExecuteIndex < v101 )
          {
            if ( (unsigned int)currentExecuteIndex >= v101 )
              goto LABEL_73;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)v99->m_Items[currentExecuteIndex];
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
        if ( (__int64)v82 >= _4__this->fields.currentExecuteIndex )
          break;
        count_5__2 = v4->fields._count_5__2;
      }
    }
    while ( (__int64)++v82 < count_5__2 );
  }
  v102 = (int64_t)v4->fields._currentObjects_5__4;
  v4->fields.__2__current = (Il2CppObject *)v102;
  p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(p__2__current, v102, v74, v75, v76, v77, v78, v79);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardVerticalSchedule__Execute_d__7_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1409E & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardVerticalSchedule___c_TypeInfo, v1, v2);
    byte_4B1409E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardVerticalSchedule___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardVerticalSchedule___c_TypeInfo->static_fields->__9 = (struct WarBoardVerticalSchedule___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardVerticalSchedule___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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