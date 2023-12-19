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


void __fastcall WarBoardOrthostichySchedule___ctor_22145592(
        WarBoardOrthostichySchedule_o *this,
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

  if ( (byte_40F8598 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_40F8598 = 1;
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


System_Collections_IEnumerator_o *__fastcall WarBoardOrthostichySchedule__Execute(
        WarBoardOrthostichySchedule_o *this,
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

  if ( (byte_40F8599 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardOrthostichySchedule__Execute_d__4_TypeInfo, method);
    byte_40F8599 = 1;
  }
  v6 = sub_B170CC(WarBoardOrthostichySchedule__Execute_d__4_TypeInfo, method, v2, v3, v4);
  WarBoardOrthostichySchedule__Execute_d__4___ctor((WarBoardOrthostichySchedule__Execute_d__4_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v2; // x2
  WarBoardOrthostichySchedule__Execute_d__4_o *v3; // x19
  int32_t _1__state; // w8
  struct WarBoardOrthostichySchedule_o *_4__this; // x22
  struct WarBoardTaskBase_array *tasks; // x9
  int32_t max_length; // w9
  int32_t *p_i_5__3; // x21
  int32_t v9; // w8
  BattleServantConfConponent_o *p_executes_5__4; // x20
  struct WarBoardTaskBase_array *v11; // x10
  struct WarBoardTaskBase_array *v12; // x8
  __int64 v13; // x9
  WarBoardTaskBase_o *v14; // x0
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleServantConfConponent_c *klass; // x21
  _QWORD *image; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  struct WarBoardTaskBase_array *v27; // x8
  __int64 i_5__3; // x9
  WarBoardTaskBase_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  bool result; // w0
  BattleServantConfConponent_c *v37; // x20
  _QWORD *v38; // x8
  unsigned __int64 v39; // x10
  System_Collections_IEnumerator_c **v40; // x11
  __int64 v41; // x0
  System_Int32_array **v42; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  v3 = this;
  if ( (byte_40F7849 & 1) == 0 )
  {
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, method);
    byte_40F7849 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_executes_5__4 = (BattleServantConfConponent_o *)&v3->fields._executes_5__4;
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
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v14 = v12->m_Items[v13];
  if ( !v14 )
    goto LABEL_40;
  v15 = (System_Int32_array **)((__int64 (__fastcall *)(WarBoardTaskBase_o *, Il2CppMethodPointer))v14->klass->vtable._4_Execute.method)(
                                 v14,
                                 v14->klass->vtable._5_OnStart.methodPtr);
  v3->fields._executes_5__4 = (struct System_Collections_IEnumerator_o *)v15;
  p_executes_5__4 = (BattleServantConfConponent_o *)&v3->fields._executes_5__4;
  sub_B16F98((BattleServantConfConponent_o *)&v3->fields._executes_5__4, v15, v16, v17, v18, v19, v20, v21);
LABEL_16:
  klass = p_executes_5__4->klass;
  if ( !p_executes_5__4->klass )
    goto LABEL_40;
  image = klass->_1.image;
  if ( *((_WORD *)klass->_1.image + 149) )
  {
    v24 = 0LL;
    v25 = (int *)(image[22] + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *((unsigned __int16 *)klass->_1.image + 149) )
        goto LABEL_21;
    }
    v26 = (__int64)&image[2 * *v25 + 39];
  }
  else
  {
LABEL_21:
    v26 = sub_AAFEF8(p_executes_5__4->klass, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v26)(
                                                          klass,
                                                          *(_QWORD *)(v26 + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !_4__this )
      goto LABEL_40;
    v27 = _4__this->fields.tasks;
    p_i_5__3 = &v3->fields._i_5__3;
    i_5__3 = v3->fields._i_5__3;
    if ( !v27 )
      goto LABEL_40;
    if ( (unsigned int)i_5__3 >= v27->max_length )
      goto LABEL_41;
    v29 = v27->m_Items[i_5__3];
    if ( !v29 )
      goto LABEL_40;
    ((void (__fastcall *)(WarBoardTaskBase_o *, Il2CppMethodPointer))v29->klass->vtable._6_OnEnd.method)(
      v29,
      v29->klass->vtable._7_OnPause.methodPtr);
    v3->fields._executes_5__4 = 0LL;
    sub_B16F98(p_executes_5__4, 0LL, v30, v31, v32, v33, v34, v35);
    max_length = v3->fields._count_5__2;
    v9 = v3->fields._i_5__3;
    goto LABEL_29;
  }
  v37 = p_executes_5__4->klass;
  if ( !v37 )
LABEL_40:
    sub_B170D4();
  v38 = v37->_1.image;
  if ( *((_WORD *)v37->_1.image + 149) )
  {
    v39 = 0LL;
    v40 = (System_Collections_IEnumerator_c **)(v38[22] + 8LL);
    while ( *(v40 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v39;
      v40 += 2;
      if ( v39 >= *((unsigned __int16 *)v37->_1.image + 149) )
        goto LABEL_37;
    }
    v41 = (__int64)&v38[2 * *(_DWORD *)v40 + 41];
  }
  else
  {
LABEL_37:
    v41 = sub_AAFEF8(v37, System_Collections_IEnumerator_TypeInfo, 1LL);
  }
  v42 = (System_Int32_array **)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v41)(
                                 v37,
                                 *(_QWORD *)(v41 + 8));
  v3->fields.__2__current = (Il2CppObject *)v42;
  p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
  sub_B16F98(p__2__current, v42, v44, v45, v46, v47, v48, v49);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardOrthostichySchedule__Execute_d__4_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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