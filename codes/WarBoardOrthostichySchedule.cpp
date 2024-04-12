void __fastcall WarBoardOrthostichySchedule___ctor(
        WarBoardOrthostichySchedule_o *this,
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tasks,
    (System_Int32_array **)taskBases,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardOrthostichySchedule___ctor_22689856(
        WarBoardOrthostichySchedule_o *this,
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

  if ( (byte_42AEA7D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    byte_42AEA7D = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( !taskBases )
    sub_B52A5C(v5, v6);
  v7 = (struct WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = v7;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.tasks, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
}


System_Collections_IEnumerator_o *__fastcall WarBoardOrthostichySchedule__Execute(
        WarBoardOrthostichySchedule_o *this,
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

  if ( (byte_42AEA7E & 1) == 0 )
  {
    sub_B52984(&WarBoardOrthostichySchedule__Execute_d__4_TypeInfo);
    byte_42AEA7E = 1;
  }
  v3 = sub_B52A54(WarBoardOrthostichySchedule__Execute_d__4_TypeInfo);
  WarBoardOrthostichySchedule__Execute_d__4___ctor((WarBoardOrthostichySchedule__Execute_d__4_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardOrthostichySchedule__OnEnd(WarBoardOrthostichySchedule_o *this, const MethodInfo *method)
{
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardOrthostichySchedule__OnStart(WarBoardOrthostichySchedule_o *this, const MethodInfo *method)
{
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardOrthostichySchedule__Execute_d__4___ctor(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardOrthostichySchedule__Execute_d__4__MoveNext(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  WarBoardOrthostichySchedule__Execute_d__4_o *v3; // x19
  int32_t _1__state; // w8
  struct WarBoardOrthostichySchedule_o *_4__this; // x22
  struct WarBoardTaskBase_array *tasks; // x9
  int32_t max_length; // w9
  int32_t *p_i_5__3; // x21
  int32_t v9; // w8
  struct System_Collections_IEnumerator_o **p_executes_5__4; // x20
  struct WarBoardTaskBase_array *v11; // x10
  struct WarBoardTaskBase_array *v12; // x8
  __int64 v13; // x9
  struct System_Collections_IEnumerator_o *v14; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v16; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  struct WarBoardTaskBase_array *v20; // x8
  __int64 i_5__3; // x9
  bool result; // w0
  struct System_Collections_IEnumerator_o *v23; // x20
  System_Collections_IEnumerator_c *v24; // x8
  unsigned __int64 v25; // x10
  System_Collections_IEnumerator_c **v26; // x11
  __int64 v27; // x0
  Il2CppObject **p__2__current; // x19
  __int64 v29; // x0

  v3 = this;
  if ( (byte_42AD72B & 1) == 0 )
  {
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42AD72B = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_executes_5__4 = &v3->fields._executes_5__4;
    v3->fields.__1__state = -1;
    goto LABEL_16;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_40;
  tasks = _4__this->fields.tasks;
  if ( !tasks )
    goto LABEL_40;
  max_length = tasks->max_length;
  v3->fields._i_5__3 = 0;
  p_i_5__3 = &v3->fields._i_5__3;
  v9 = 0;
  v3->fields._count_5__2 = max_length;
  while ( 1 )
  {
    if ( v9 >= max_length )
      return 0;
    v11 = _4__this->fields.tasks;
    if ( !v11 )
      goto LABEL_40;
    if ( v9 >= v11->max_length )
      goto LABEL_41;
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v11->m_Items[v9];
    if ( this )
      break;
LABEL_29:
    *p_i_5__3 = ++v9;
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                          this,
                                                          this->klass->vtable._6_MoveNext.methodPtr);
  v12 = _4__this->fields.tasks;
  if ( !v12 )
    goto LABEL_40;
  v13 = *p_i_5__3;
  if ( (unsigned int)v13 >= v12->max_length )
  {
LABEL_41:
    v29 = sub_B52A88(this);
    sub_B52A28(v29, 0LL);
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v12->m_Items[v13];
  if ( !this )
    goto LABEL_40;
  v3->fields._executes_5__4 = (struct System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                                           this,
                                                                           this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
  p_executes_5__4 = &v3->fields._executes_5__4;
  sub_B52920(&v3->fields._executes_5__4);
LABEL_16:
  v14 = *p_executes_5__4;
  if ( !*p_executes_5__4 )
    goto LABEL_40;
  klass = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_AEB880(*p_executes_5__4, System_Collections_IEnumerator_TypeInfo, 0LL, v2);
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                          v14,
                                                          *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !_4__this )
      goto LABEL_40;
    v20 = _4__this->fields.tasks;
    p_i_5__3 = &v3->fields._i_5__3;
    i_5__3 = v3->fields._i_5__3;
    if ( !v20 )
      goto LABEL_40;
    if ( (unsigned int)i_5__3 >= v20->max_length )
      goto LABEL_41;
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v20->m_Items[i_5__3];
    if ( !this )
      goto LABEL_40;
    ((void (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
      this,
      this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
    v3->fields._executes_5__4 = 0LL;
    sub_B52920(p_executes_5__4);
    max_length = v3->fields._count_5__2;
    v9 = v3->fields._i_5__3;
    goto LABEL_29;
  }
  v23 = *p_executes_5__4;
  if ( !v23 )
LABEL_40:
    sub_B52A5C(this, method);
  v24 = v23->klass;
  if ( *(_WORD *)&v23->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = (System_Collections_IEnumerator_c **)&v24->_1.interfaceOffsets->offset;
    while ( *(v26 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v25;
      v26 += 2;
      if ( v25 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 1].method;
  }
  else
  {
LABEL_37:
    v27 = sub_AEB880(v23, System_Collections_IEnumerator_TypeInfo, 1LL, v19);
  }
  v3->fields.__2__current = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v27)(
                                              v23,
                                              *(_QWORD *)(v27 + 8));
  p__2__current = &v3->fields.__2__current;
  sub_B52920(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall WarBoardOrthostichySchedule__Execute_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardOrthostichySchedule__Execute_d__4__System_Collections_IEnumerator_Reset(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_WarBoardOrthostichySchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall WarBoardOrthostichySchedule__Execute_d__4__System_Collections_IEnumerator_get_Current(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardOrthostichySchedule__Execute_d__4__System_IDisposable_Dispose(
        WarBoardOrthostichySchedule__Execute_d__4_o *this,
        const MethodInfo *method)
{
  ;
}