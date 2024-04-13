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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tasks,
    (System_Int32_array **)taskBases,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardOrthostichySchedule___ctor_22990060(
        WarBoardOrthostichySchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  struct WarBoardTaskBase_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E75D5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__,
      (_DWORD)taskBases,
      (_DWORD)method,
      v3);
    byte_42E75D5 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( !taskBases )
    sub_B5D69C(v6, v7);
  v8 = (struct WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tasks,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


System_Collections_IEnumerator_o *__fastcall WarBoardOrthostichySchedule__Execute(
        WarBoardOrthostichySchedule_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E75D6 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardOrthostichySchedule__Execute_d__4_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E75D6 = 1;
  }
  v5 = sub_B5D694(WarBoardOrthostichySchedule__Execute_d__4_TypeInfo);
  WarBoardOrthostichySchedule__Execute_d__4___ctor((WarBoardOrthostichySchedule__Execute_d__4_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardOrthostichySchedule__Execute_d__4_o *v4; // x19
  int32_t _1__state; // w8
  struct WarBoardOrthostichySchedule_o *_4__this; // x22
  struct WarBoardTaskBase_array *tasks; // x9
  int32_t max_length; // w9
  int32_t *p_i_5__3; // x21
  int32_t v10; // w8
  struct System_Collections_IEnumerator_o **p_executes_5__4; // x20
  struct WarBoardTaskBase_array *v12; // x10
  struct WarBoardTaskBase_array *v13; // x8
  __int64 v14; // x9
  struct System_Collections_IEnumerator_o *v15; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v17; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  struct WarBoardTaskBase_array *v21; // x8
  __int64 i_5__3; // x9
  bool result; // w0
  struct System_Collections_IEnumerator_o *v24; // x20
  System_Collections_IEnumerator_c *v25; // x8
  unsigned __int64 v26; // x10
  System_Collections_IEnumerator_c **v27; // x11
  __int64 v28; // x0
  Il2CppObject **p__2__current; // x19
  __int64 v30; // x0

  v4 = this;
  if ( (byte_42E5FA4 & 1) == 0 )
  {
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)sub_B5D5C4(
                                                            &System_Collections_IEnumerator_TypeInfo,
                                                            (_DWORD)method,
                                                            v2,
                                                            v3);
    byte_42E5FA4 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_executes_5__4 = &v4->fields._executes_5__4;
    v4->fields.__1__state = -1;
    goto LABEL_16;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_40;
  tasks = _4__this->fields.tasks;
  if ( !tasks )
    goto LABEL_40;
  max_length = tasks->max_length;
  v4->fields._i_5__3 = 0;
  p_i_5__3 = &v4->fields._i_5__3;
  v10 = 0;
  v4->fields._count_5__2 = max_length;
  while ( 1 )
  {
    if ( v10 >= max_length )
      return 0;
    v12 = _4__this->fields.tasks;
    if ( !v12 )
      goto LABEL_40;
    if ( v10 >= v12->max_length )
      goto LABEL_41;
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v12->m_Items[v10];
    if ( this )
      break;
LABEL_29:
    *p_i_5__3 = ++v10;
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                          this,
                                                          this->klass->vtable._6_MoveNext.methodPtr);
  v13 = _4__this->fields.tasks;
  if ( !v13 )
    goto LABEL_40;
  v14 = *p_i_5__3;
  if ( (unsigned int)v14 >= v13->max_length )
  {
LABEL_41:
    v30 = sub_B5D6C8(this);
    sub_B5D668(v30, 0LL);
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v13->m_Items[v14];
  if ( !this )
    goto LABEL_40;
  v4->fields._executes_5__4 = (struct System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                                           this,
                                                                           this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
  p_executes_5__4 = &v4->fields._executes_5__4;
  sub_B5D560(&v4->fields._executes_5__4);
LABEL_16:
  v15 = *p_executes_5__4;
  if ( !*p_executes_5__4 )
    goto LABEL_40;
  klass = v15->klass;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_AF54C0(*p_executes_5__4, System_Collections_IEnumerator_TypeInfo, 0LL, v3);
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                          v15,
                                                          *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !_4__this )
      goto LABEL_40;
    v21 = _4__this->fields.tasks;
    p_i_5__3 = &v4->fields._i_5__3;
    i_5__3 = v4->fields._i_5__3;
    if ( !v21 )
      goto LABEL_40;
    if ( (unsigned int)i_5__3 >= v21->max_length )
      goto LABEL_41;
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v21->m_Items[i_5__3];
    if ( !this )
      goto LABEL_40;
    ((void (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
      this,
      this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
    v4->fields._executes_5__4 = 0LL;
    sub_B5D560(p_executes_5__4);
    max_length = v4->fields._count_5__2;
    v10 = v4->fields._i_5__3;
    goto LABEL_29;
  }
  v24 = *p_executes_5__4;
  if ( !v24 )
LABEL_40:
    sub_B5D69C(this, method);
  v25 = v24->klass;
  if ( *(_WORD *)&v24->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = (System_Collections_IEnumerator_c **)&v25->_1.interfaceOffsets->offset;
    while ( *(v27 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v26;
      v27 += 2;
      if ( v26 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v28 = (__int64)&v25->vtable[*(_DWORD *)v27 + 1].method;
  }
  else
  {
LABEL_37:
    v28 = sub_AF54C0(v24, System_Collections_IEnumerator_TypeInfo, 1LL, v20);
  }
  v4->fields.__2__current = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v28)(
                                              v24,
                                              *(_QWORD *)(v28 + 8));
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardOrthostichySchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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