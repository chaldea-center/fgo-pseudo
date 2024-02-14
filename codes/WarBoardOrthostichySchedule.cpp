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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tasks,
    (System_Int32_array **)taskBases,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardOrthostichySchedule___ctor_21959728(
        WarBoardOrthostichySchedule_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskBases,
        const MethodInfo *method)
{
  __int64 v5; // x0
  struct WarBoardTaskBase_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4213301 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_4213301 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( !taskBases )
    sub_B0D97C(v5);
  v6 = (struct WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = v6;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.tasks, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
}


System_Collections_IEnumerator_o *__fastcall WarBoardOrthostichySchedule__Execute(
        WarBoardOrthostichySchedule_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4213302 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardOrthostichySchedule__Execute_d__4_TypeInfo, method);
    byte_4213302 = 1;
  }
  v4 = sub_B0D974(WarBoardOrthostichySchedule__Execute_d__4_TypeInfo, method, v2);
  WarBoardOrthostichySchedule__Execute_d__4___ctor((WarBoardOrthostichySchedule__Execute_d__4_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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
  WarBoardOrthostichySchedule__Execute_d__4_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardOrthostichySchedule_o *_4__this; // x22
  struct WarBoardTaskBase_array *tasks; // x9
  int32_t max_length; // w9
  int32_t *p_i_5__3; // x21
  int32_t v8; // w8
  BattleServantConfConponent_o *p_executes_5__4; // x20
  struct WarBoardTaskBase_array *v10; // x10
  struct WarBoardTaskBase_array *v11; // x8
  __int64 v12; // x9
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleServantConfConponent_c *klass; // x21
  _QWORD *image; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  struct WarBoardTaskBase_array *v25; // x8
  __int64 i_5__3; // x9
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  bool result; // w0
  BattleServantConfConponent_c *v34; // x20
  _QWORD *v35; // x8
  unsigned __int64 v36; // x10
  System_Collections_IEnumerator_c **v37; // x11
  __int64 v38; // x0
  System_Int32_array **v39; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0

  v2 = this;
  if ( (byte_4213870 & 1) == 0 )
  {
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, method);
    byte_4213870 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_executes_5__4 = (BattleServantConfConponent_o *)&v2->fields._executes_5__4;
    v2->fields.__1__state = -1;
    goto LABEL_16;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_40;
  tasks = _4__this->fields.tasks;
  if ( !tasks )
    goto LABEL_40;
  max_length = tasks->max_length;
  v2->fields._i_5__3 = 0;
  p_i_5__3 = &v2->fields._i_5__3;
  v8 = 0;
  v2->fields._count_5__2 = max_length;
  while ( 1 )
  {
    if ( v8 >= max_length )
      return 0;
    v10 = _4__this->fields.tasks;
    if ( !v10 )
      goto LABEL_40;
    if ( v8 >= v10->max_length )
      goto LABEL_41;
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v10->m_Items[v8];
    if ( this )
      break;
LABEL_29:
    *p_i_5__3 = ++v8;
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                          this,
                                                          this->klass->vtable._6_MoveNext.methodPtr);
  v11 = _4__this->fields.tasks;
  if ( !v11 )
    goto LABEL_40;
  v12 = *p_i_5__3;
  if ( (unsigned int)v12 >= v11->max_length )
  {
LABEL_41:
    v47 = sub_B0D9A8(this);
    sub_B0D948(v47, 0LL);
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v11->m_Items[v12];
  if ( !this )
    goto LABEL_40;
  v13 = (System_Int32_array **)((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                 this,
                                 this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
  v2->fields._executes_5__4 = (struct System_Collections_IEnumerator_o *)v13;
  p_executes_5__4 = (BattleServantConfConponent_o *)&v2->fields._executes_5__4;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields._executes_5__4, v13, v14, v15, v16, v17, v18, v19);
LABEL_16:
  klass = p_executes_5__4->klass;
  if ( !p_executes_5__4->klass )
    goto LABEL_40;
  image = klass->_1.image;
  if ( *((_WORD *)klass->_1.image + 149) )
  {
    v22 = 0LL;
    v23 = (int *)(image[22] + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *((unsigned __int16 *)klass->_1.image + 149) )
        goto LABEL_21;
    }
    v24 = (__int64)&image[2 * *v23 + 39];
  }
  else
  {
LABEL_21:
    v24 = sub_AA67A0(p_executes_5__4->klass, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v24)(
                                                          klass,
                                                          *(_QWORD *)(v24 + 8));
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !_4__this )
      goto LABEL_40;
    v25 = _4__this->fields.tasks;
    p_i_5__3 = &v2->fields._i_5__3;
    i_5__3 = v2->fields._i_5__3;
    if ( !v25 )
      goto LABEL_40;
    if ( (unsigned int)i_5__3 >= v25->max_length )
      goto LABEL_41;
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v25->m_Items[i_5__3];
    if ( !this )
      goto LABEL_40;
    ((void (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
      this,
      this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
    v2->fields._executes_5__4 = 0LL;
    sub_B0D840(p_executes_5__4, 0LL, v27, v28, v29, v30, v31, v32);
    max_length = v2->fields._count_5__2;
    v8 = v2->fields._i_5__3;
    goto LABEL_29;
  }
  v34 = p_executes_5__4->klass;
  if ( !v34 )
LABEL_40:
    sub_B0D97C(this);
  v35 = v34->_1.image;
  if ( *((_WORD *)v34->_1.image + 149) )
  {
    v36 = 0LL;
    v37 = (System_Collections_IEnumerator_c **)(v35[22] + 8LL);
    while ( *(v37 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v36;
      v37 += 2;
      if ( v36 >= *((unsigned __int16 *)v34->_1.image + 149) )
        goto LABEL_37;
    }
    v38 = (__int64)&v35[2 * *(_DWORD *)v37 + 41];
  }
  else
  {
LABEL_37:
    v38 = sub_AA67A0(v34, System_Collections_IEnumerator_TypeInfo, 1LL);
  }
  v39 = (System_Int32_array **)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v38)(
                                 v34,
                                 *(_QWORD *)(v38 + 8));
  v2->fields.__2__current = (Il2CppObject *)v39;
  p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B0D840(p__2__current, v39, v41, v42, v43, v44, v45, v46);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardOrthostichySchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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