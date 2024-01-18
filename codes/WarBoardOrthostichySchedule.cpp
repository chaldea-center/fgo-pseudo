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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tasks,
    (System_Int32_array **)taskBases,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardOrthostichySchedule___ctor_22398892(
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

  if ( (byte_418654F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, taskBases);
    byte_418654F = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  if ( !taskBases )
    sub_B2C434(v5, v6);
  v7 = (struct WarBoardTaskBase_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)taskBases,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
  this->fields.tasks = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.tasks, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4186550 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardOrthostichySchedule__Execute_d__4_TypeInfo, method);
    byte_4186550 = 1;
  }
  v3 = sub_B2C42C(WarBoardOrthostichySchedule__Execute_d__4_TypeInfo);
  WarBoardOrthostichySchedule__Execute_d__4___ctor((WarBoardOrthostichySchedule__Execute_d__4_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  BattleServantConfConponent_o *p_executes_5__4; // x20
  struct WarBoardTaskBase_array *v11; // x10
  struct WarBoardTaskBase_array *v12; // x8
  __int64 v13; // x9
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantConfConponent_c *klass; // x21
  _QWORD *image; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x3
  struct WarBoardTaskBase_array *v27; // x8
  __int64 i_5__3; // x9
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  bool result; // w0
  BattleServantConfConponent_c *v36; // x20
  _QWORD *v37; // x8
  unsigned __int64 v38; // x10
  System_Collections_IEnumerator_c **v39; // x11
  __int64 v40; // x0
  System_Int32_array **v41; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0

  v3 = this;
  if ( (byte_41866F5 & 1) == 0 )
  {
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, method);
    byte_41866F5 = 1;
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
    v49 = sub_B2C460(this);
    sub_B2C400(v49, 0LL);
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v12->m_Items[v13];
  if ( !this )
    goto LABEL_40;
  v14 = (System_Int32_array **)((__int64 (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                 this,
                                 this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
  v3->fields._executes_5__4 = (struct System_Collections_IEnumerator_o *)v14;
  p_executes_5__4 = (BattleServantConfConponent_o *)&v3->fields._executes_5__4;
  sub_B2C2F8((BattleServantConfConponent_o *)&v3->fields._executes_5__4, v14, v15, v16, v17, v18, v19, v20);
LABEL_16:
  klass = p_executes_5__4->klass;
  if ( !p_executes_5__4->klass )
    goto LABEL_40;
  image = klass->_1.image;
  if ( *((_WORD *)klass->_1.image + 149) )
  {
    v23 = 0LL;
    v24 = (int *)(image[22] + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *((unsigned __int16 *)klass->_1.image + 149) )
        goto LABEL_21;
    }
    v25 = (__int64)&image[2 * *v24 + 39];
  }
  else
  {
LABEL_21:
    v25 = sub_AC5258(p_executes_5__4->klass, System_Collections_IEnumerator_TypeInfo, 0LL, v2);
  }
  this = (WarBoardOrthostichySchedule__Execute_d__4_o *)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v25)(
                                                          klass,
                                                          *(_QWORD *)(v25 + 8));
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
    this = (WarBoardOrthostichySchedule__Execute_d__4_o *)v27->m_Items[i_5__3];
    if ( !this )
      goto LABEL_40;
    ((void (__fastcall *)(WarBoardOrthostichySchedule__Execute_d__4_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
      this,
      this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
    v3->fields._executes_5__4 = 0LL;
    sub_B2C2F8(p_executes_5__4, 0LL, v29, v30, v31, v32, v33, v34);
    max_length = v3->fields._count_5__2;
    v9 = v3->fields._i_5__3;
    goto LABEL_29;
  }
  v36 = p_executes_5__4->klass;
  if ( !v36 )
LABEL_40:
    sub_B2C434(this, method);
  v37 = v36->_1.image;
  if ( *((_WORD *)v36->_1.image + 149) )
  {
    v38 = 0LL;
    v39 = (System_Collections_IEnumerator_c **)(v37[22] + 8LL);
    while ( *(v39 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v38;
      v39 += 2;
      if ( v38 >= *((unsigned __int16 *)v36->_1.image + 149) )
        goto LABEL_37;
    }
    v40 = (__int64)&v37[2 * *(_DWORD *)v39 + 41];
  }
  else
  {
LABEL_37:
    v40 = sub_AC5258(v36, System_Collections_IEnumerator_TypeInfo, 1LL, v26);
  }
  v41 = (System_Int32_array **)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v40)(
                                 v36,
                                 *(_QWORD *)(v40 + 8));
  v3->fields.__2__current = (Il2CppObject *)v41;
  p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
  sub_B2C2F8(p__2__current, v41, v43, v44, v45, v46, v47, v48);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardOrthostichySchedule__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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