void __fastcall BackTaskAmountAdjuster___ctor(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  System_Diagnostics_Stopwatch_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  float v13; // s0

  if ( (byte_40F6EAD & 1) == 0 )
  {
    sub_B16FFC(&System_Diagnostics_Stopwatch_TypeInfo, method);
    byte_40F6EAD = 1;
  }
  v6 = (System_Diagnostics_Stopwatch_o *)sub_B170CC(System_Diagnostics_Stopwatch_TypeInfo, method, v2, v3, v4);
  System_Diagnostics_Stopwatch___ctor(v6, 0LL);
  this->fields.stopwatch = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.stopwatch,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v13 = 1.0 / (float)UnityEngine_Application__get_targetFrameRate(0LL);
  this->fields.plannedWorkDeltaTime = v13 * 0.5;
  this->fields.expectedDeltaTime = v13;
}


float __fastcall BackTaskAmountAdjuster__CalcExtendedDeltaTime(
        BackTaskAmountAdjuster_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  return UnityEngine_Mathf__Max(0.0, deltaTime - this->fields.expectedDeltaTime, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BackTaskAmountAdjuster__Execute(
        BackTaskAmountAdjuster_o *this,
        System_Collections_IEnumerator_o *bgTask,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F6EAE & 1) == 0 )
  {
    sub_B16FFC(&BackTaskAmountAdjuster__Execute_d__9_TypeInfo, bgTask);
    byte_40F6EAE = 1;
  }
  v7 = sub_B170CC(BackTaskAmountAdjuster__Execute_d__9_TypeInfo, bgTask, method, v3, v4);
  BackTaskAmountAdjuster__Execute_d__9___ctor((BackTaskAmountAdjuster__Execute_d__9_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = bgTask;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)bgTask, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


bool __fastcall BackTaskAmountAdjuster__IsOverWork(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  struct System_Diagnostics_Stopwatch_o *stopwatch; // x0
  float plannedWorkDeltaTime; // s8

  stopwatch = this->fields.stopwatch;
  if ( !stopwatch )
    sub_B170D4();
  if ( !stopwatch->fields.is_running )
    return 1;
  plannedWorkDeltaTime = this->fields.plannedWorkDeltaTime;
  return plannedWorkDeltaTime <= (float)((float)System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(stopwatch, 0LL)
                                       / 1000.0);
}


void __fastcall BackTaskAmountAdjuster__PlanNextWork(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  float expectedDeltaTime; // s1
  float minWorkDeltaTime; // s8
  float actualWorkDeltaTime; // s9
  float v7; // s0
  float v8; // s0
  System_Diagnostics_Stopwatch_o *stopwatch; // x0
  System_Diagnostics_Stopwatch_o *v10; // x0

  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  expectedDeltaTime = this->fields.expectedDeltaTime;
  if ( (float)(expectedDeltaTime * 1.1) >= deltaTime )
  {
    v8 = (float)(expectedDeltaTime * 0.1) + this->fields.plannedWorkDeltaTime;
  }
  else
  {
    minWorkDeltaTime = this->fields.minWorkDeltaTime;
    actualWorkDeltaTime = this->fields.actualWorkDeltaTime;
    v7 = UnityEngine_Mathf__Max(0.0, deltaTime - expectedDeltaTime, 0LL);
    v8 = UnityEngine_Mathf__Max(minWorkDeltaTime, actualWorkDeltaTime - v7, 0LL);
  }
  stopwatch = this->fields.stopwatch;
  this->fields.plannedWorkDeltaTime = v8;
  if ( !stopwatch || (System_Diagnostics_Stopwatch__Reset(stopwatch, 0LL), (v10 = this->fields.stopwatch) == 0LL) )
    sub_B170D4();
  System_Diagnostics_Stopwatch__Start(v10, 0LL);
}


void __fastcall BackTaskAmountAdjuster__SaveActualWorkDeltaTime(
        BackTaskAmountAdjuster_o *this,
        const MethodInfo *method)
{
  System_Diagnostics_Stopwatch_o *stopwatch; // x0

  stopwatch = this->fields.stopwatch;
  if ( !stopwatch )
    sub_B170D4();
  this->fields.actualWorkDeltaTime = (float)System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(stopwatch, 0LL)
                                   / 1000.0;
}


void __fastcall BackTaskAmountAdjuster__Execute_d__9___ctor(
        BackTaskAmountAdjuster__Execute_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BackTaskAmountAdjuster__Execute_d__9__MoveNext(
        BackTaskAmountAdjuster__Execute_d__9_o *this,
        const MethodInfo *method)
{
  BackTaskAmountAdjuster_o *_4__this; // x20
  struct System_Collections_IEnumerator_o *bgTask; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct System_Collections_IEnumerator_o *v9; // x21
  System_Collections_IEnumerator_c *v10; // x8
  unsigned __int64 v11; // x10
  System_Collections_IEnumerator_c **v12; // x11
  __int64 v13; // x0
  Il2CppObject *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  Il2CppObject **p__2__current; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  bool result; // w0
  Il2CppObject **v29; // x19

  if ( (byte_40F9152 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, method);
    byte_40F9152 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( this->fields.__1__state > 2u )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
LABEL_26:
    sub_B170D4();
  BackTaskAmountAdjuster__PlanNextWork(_4__this, 0LL);
  while ( 1 )
  {
    bgTask = this->fields.bgTask;
    if ( !bgTask )
      goto LABEL_26;
    klass = bgTask->klass;
    if ( *(_WORD *)&bgTask->klass->_2.bitflags1 )
    {
      v6 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v6;
        p_offset += 4;
        if ( v6 >= *(unsigned __int16 *)&bgTask->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AAFEF8(this->fields.bgTask, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
            bgTask,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      return 0;
    v9 = this->fields.bgTask;
    if ( !v9 )
      goto LABEL_26;
    v10 = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        v12 += 2;
        if ( v11 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_19:
      v13 = sub_AAFEF8(this->fields.bgTask, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v13)(
                            v9,
                            *(_QWORD *)(v13 + 8));
    if ( v14 )
      break;
    if ( BackTaskAmountAdjuster__IsOverWork(_4__this, 0LL) )
    {
      BackTaskAmountAdjuster__SaveActualWorkDeltaTime(_4__this, 0LL);
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v22, v23, v24, v25, v26, v27);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
  }
  this->fields.__2__current = v14;
  v29 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v29, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  result = 1;
  *((_DWORD *)v29 - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BackTaskAmountAdjuster__Execute_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BackTaskAmountAdjuster__Execute_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BackTaskAmountAdjuster__Execute_d__9__System_Collections_IEnumerator_Reset(
        BackTaskAmountAdjuster__Execute_d__9_o *this,
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
  sub_B17000(&Method_BackTaskAmountAdjuster__Execute_d__9_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BackTaskAmountAdjuster__Execute_d__9__System_Collections_IEnumerator_get_Current(
        BackTaskAmountAdjuster__Execute_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BackTaskAmountAdjuster__Execute_d__9__System_IDisposable_Dispose(
        BackTaskAmountAdjuster__Execute_d__9_o *this,
        const MethodInfo *method)
{
  ;
}