void __fastcall WarBoardVerticalSchedule___ctor(WarBoardVerticalSchedule_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, method);
  this->fields.tasks = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tasks, 0, v3, v4);
}


void __fastcall WarBoardVerticalSchedule___ctor_35781720(
        WarBoardVerticalSchedule_o *this,
        WarBoardTaskBase_array *taskBases,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  this->fields.tasks = taskBases;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tasks, (int32_t)taskBases, v5, v6);
}


void __fastcall WarBoardVerticalSchedule___ctor_35781764(
        WarBoardVerticalSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A59110 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_4A59110 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)taskBases);
  if ( !taskBases )
    sub_1B8880C(v5, v6);
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = (struct WarBoardTaskBase_array *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tasks, (int32_t)v7, v8, v9);
}


System_Collections_IEnumerator_o *__fastcall WarBoardVerticalSchedule__Execute(
        WarBoardVerticalSchedule_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A59112 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
    byte_4A59112 = 1;
  }
  v3 = sub_1B887FC(WarBoardVerticalSchedule__Execute_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
    sub_1B8880C(this, method);
  }
}


void __fastcall WarBoardVerticalSchedule__SetTask(
        WarBoardVerticalSchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  WarBoardVerticalSchedule_o *v4; // x19
  System_Object_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  v4 = this;
  if ( (byte_4A59111 & 1) == 0 )
  {
    this = (WarBoardVerticalSchedule_o *)sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_4A59111 = 1;
  }
  if ( !taskBases )
    sub_1B8880C(this, taskBases);
  v5 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)taskBases,
         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  v4->fields.tasks = (struct WarBoardTaskBase_array *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.tasks, (int32_t)v5, v6, v7);
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
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x0
  unsigned int **p_executes_5__5; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  unsigned __int64 v19; // x22
  __int64 v20; // x24
  unsigned int *v21; // x8
  struct WarBoardTaskBase_array *v22; // x8
  unsigned int *v23; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  WarBoardVerticalSchedule__Execute_d__7_o *v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *endFlags_5__3; // x20
  WarBoardVerticalSchedule___c_c *v28; // x0
  System_Func_bool__bool__o *_9__7_0; // x21
  Il2CppObject *v30; // x22
  struct WarBoardVerticalSchedule___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  bool result; // w0
  int count_5__2; // w8
  unsigned __int64 v38; // x21
  struct System_Boolean_array *v39; // x26
  bool *v40; // x27
  struct System_Collections_IEnumerator_array *executes_5__5; // x8
  System_Collections_IEnumerator_o *v42; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned int *currentObjects_5__4; // x26
  __int64 v45; // x9
  System_Collections_IEnumerator_c **p_offset; // x10
  __int64 p_method; // x0
  struct System_Object_array *v48; // x8
  Il2CppClass **v49; // x0
  WarBoardVerticalSchedule__Execute_d__7_o *v50; // x20
  ServantStatusBattleListViewItem_o *v51; // x0
  unsigned int *v52; // x0
  struct System_Boolean_array *v53; // x8
  struct WarBoardTaskBase_array *v54; // x8
  struct WarBoardTaskBase_array *v55; // x8
  __int64 currentExecuteIndex; // x9
  int v57; // w10
  struct System_Object_array *v58; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  __int64 v60; // x0

  v2 = this;
  if ( (byte_4A59114 & 1) == 0 )
  {
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_All_bool___);
    sub_1B885B0(&System_Func_bool__bool__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator___TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&Method_WarBoardVerticalSchedule___c__Execute_b__7_0__);
    sub_1B885B0(&WarBoardVerticalSchedule___c_TypeInfo);
    this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1B885B0(&WarBoardManager_TypeInfo);
    byte_4A59114 = 1;
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
    v7 = sub_1B88658(bool___TypeInfo, max_length);
    v2->fields._endFlags_5__3 = (struct System_Boolean_array *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._endFlags_5__3, v7, v8, v9);
    v10 = sub_1B88658(object___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._currentObjects_5__4 = (struct System_Object_array *)v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._currentObjects_5__4, v10, v11, v12);
    v13 = sub_1B88658(System_Collections_IEnumerator___TypeInfo, (unsigned int)v2->fields._count_5__2);
    v2->fields._executes_5__5 = (struct System_Collections_IEnumerator_array *)v13;
    p_executes_5__5 = (unsigned int **)&v2->fields._executes_5__5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._executes_5__5, v13, v15, v16);
    if ( v2->fields._count_5__2 >= 1 )
    {
      v19 = 0LL;
      v20 = 8LL;
      while ( 1 )
      {
        v21 = *p_executes_5__5;
        if ( !*p_executes_5__5 )
          break;
        if ( v19 >= v21[6] )
          goto LABEL_73;
        *(_QWORD *)&v21[v20] = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v21[v20], 0, v17, v18);
        v22 = _4__this->fields.tasks;
        if ( !v22 )
          break;
        if ( v19 >= v22->max_length )
          goto LABEL_73;
        this = *(WarBoardVerticalSchedule__Execute_d__7_o **)((char *)&v22->obj.klass + v20 * 4);
        if ( this )
        {
          v23 = *p_executes_5__5;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                               this,
                                                               this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
          if ( !v23 )
            break;
          v26 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
            if ( !this )
            {
LABEL_74:
              v60 = sub_1B88830(this);
              sub_1B886D8(v60, 0LL);
            }
          }
          if ( v19 >= v23[6] )
LABEL_73:
            sub_1B88814(this, method);
          *(_QWORD *)&v23[v20] = v26;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v23[v20], (int32_t)v26, v24, v25);
        }
        ++v19;
        v20 += 2LL;
        if ( (__int64)v19 >= v2->fields._count_5__2 )
          goto LABEL_22;
      }
LABEL_72:
      sub_1B8880C(this, method);
    }
  }
LABEL_22:
  endFlags_5__3 = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._endFlags_5__3;
  v28 = WarBoardVerticalSchedule___c_TypeInfo;
  if ( !WarBoardVerticalSchedule___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardVerticalSchedule___c_TypeInfo);
    v28 = WarBoardVerticalSchedule___c_TypeInfo;
  }
  _9__7_0 = v28->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = WarBoardVerticalSchedule___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__7_0 = (System_Func_bool__bool__o *)sub_1B887FC(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(_9__7_0, v30, Method_WarBoardVerticalSchedule___c__Execute_b__7_0__, 0LL);
    static_fields = WarBoardVerticalSchedule___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = _9__7_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v32, v33);
  }
  this = (WarBoardVerticalSchedule__Execute_d__7_o *)System_Linq_Enumerable__All_bool_(
                                                       endFlags_5__3,
                                                       (System_Func_TSource__bool__o *)_9__7_0,
                                                       (const MethodInfo_2E8B524 *)Method_System_Linq_Enumerable_All_bool___);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  count_5__2 = v2->fields._count_5__2;
  if ( count_5__2 >= 1 )
  {
    v38 = 0LL;
    do
    {
      v39 = v2->fields._endFlags_5__3;
      if ( !v39 )
        goto LABEL_72;
      if ( v38 >= v39->max_length )
        goto LABEL_73;
      v40 = &v39->m_Items[v38 + 4];
      if ( !*v40 )
      {
        executes_5__5 = v2->fields._executes_5__5;
        if ( !executes_5__5 )
          goto LABEL_72;
        if ( v38 >= executes_5__5->max_length )
          goto LABEL_73;
        v42 = executes_5__5->m_Items[v38];
        if ( v42 )
        {
          if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)WarBoardManager__IEnumeratorExecute(v42, 0LL);
          if ( v38 >= v39->max_length )
            goto LABEL_73;
          *v40 = ((unsigned __int8)this & 1) == 0;
          klass = v42->klass;
          currentObjects_5__4 = (unsigned int *)v2->fields._currentObjects_5__4;
          v45 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
          {
            p_offset = (System_Collections_IEnumerator_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v45;
              p_offset += 2;
              if ( !v45 )
                goto LABEL_45;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
          }
          else
          {
LABEL_45:
            p_method = sub_1BDA590(v42, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                               v42,
                                                               *(_QWORD *)(p_method + 8));
          if ( !currentObjects_5__4 )
            goto LABEL_72;
          v50 = this;
          if ( this )
          {
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)sub_1B886EC(
                                                                 this,
                                                                 *(_QWORD *)(*(_QWORD *)currentObjects_5__4 + 64LL));
            if ( !this )
              goto LABEL_74;
          }
          if ( v38 >= currentObjects_5__4[6] )
            goto LABEL_73;
          v52 = &currentObjects_5__4[2 * v38];
          *((_QWORD *)v52 + 4) = v50;
          v51 = (ServantStatusBattleListViewItem_o *)(v52 + 8);
        }
        else
        {
          *v40 = 1;
          v48 = v2->fields._currentObjects_5__4;
          if ( !v48 )
            goto LABEL_72;
          if ( v38 >= v48->max_length )
            goto LABEL_73;
          v49 = &v48->obj.klass + v38;
          LODWORD(v50) = 0;
          v49[4] = 0LL;
          v51 = (ServantStatusBattleListViewItem_o *)(v49 + 4);
        }
        sub_1B88554(v51, (int32_t)v50, v34, v35);
        v53 = v2->fields._endFlags_5__3;
        if ( !v53 )
          goto LABEL_72;
        if ( v38 >= v53->max_length )
          goto LABEL_73;
        if ( v53->m_Items[v38 + 4] )
        {
          if ( !_4__this )
            goto LABEL_72;
          v54 = _4__this->fields.tasks;
          ++_4__this->fields.currentExecuteIndex;
          if ( !v54 )
            goto LABEL_72;
          if ( v38 >= v54->max_length )
            goto LABEL_73;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)v54->m_Items[v38];
          if ( !this )
            goto LABEL_72;
          this = (WarBoardVerticalSchedule__Execute_d__7_o *)((__int64 (__fastcall *)(WarBoardVerticalSchedule__Execute_d__7_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                               this,
                                                               this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
          v55 = _4__this->fields.tasks;
          if ( !v55 )
            goto LABEL_72;
          currentExecuteIndex = _4__this->fields.currentExecuteIndex;
          v57 = v55->max_length;
          if ( (int)currentExecuteIndex < v57 )
          {
            if ( (unsigned int)currentExecuteIndex >= v57 )
              goto LABEL_73;
            this = (WarBoardVerticalSchedule__Execute_d__7_o *)v55->m_Items[currentExecuteIndex];
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
        if ( (__int64)v38 >= _4__this->fields.currentExecuteIndex )
          break;
        count_5__2 = v2->fields._count_5__2;
      }
    }
    while ( (__int64)++v38 < count_5__2 );
  }
  v58 = v2->fields._currentObjects_5__4;
  v2->fields.__2__current = &v58->obj;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(p__2__current, (int32_t)v58, v34, v35);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardVerticalSchedule__Execute_d__7_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A59113 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardVerticalSchedule___c_TypeInfo);
    byte_4A59113 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardVerticalSchedule___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardVerticalSchedule___c_TypeInfo->static_fields->__9 = (struct WarBoardVerticalSchedule___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardVerticalSchedule___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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