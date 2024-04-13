void __fastcall BackTaskAmountAdjuster___ctor(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Diagnostics_Stopwatch_o *v5; // x20
  float v6; // s0

  if ( (byte_42E65E9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Diagnostics_Stopwatch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E65E9 = 1;
  }
  v5 = (System_Diagnostics_Stopwatch_o *)sub_B5D694(System_Diagnostics_Stopwatch_TypeInfo);
  System_Diagnostics_Stopwatch___ctor(v5, 0LL);
  this->fields.stopwatch = v5;
  sub_B5D560(&this->fields.stopwatch);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = 1.0 / (float)UnityEngine_Application__get_targetFrameRate(0LL);
  this->fields.plannedWorkDeltaTime = v6 * 0.5;
  this->fields.expectedDeltaTime = v6;
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
  BackTaskAmountAdjuster__Execute_d__9_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42E65EA & 1) == 0 )
  {
    sub_B5D5C4(&BackTaskAmountAdjuster__Execute_d__9_TypeInfo, (_DWORD)bgTask, (_DWORD)method, v3);
    byte_42E65EA = 1;
  }
  v6 = (BackTaskAmountAdjuster__Execute_d__9_o *)sub_B5D694(BackTaskAmountAdjuster__Execute_d__9_TypeInfo);
  BackTaskAmountAdjuster__Execute_d__9___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  v6->fields.__4__this = this;
  sub_B5D560(&v6->fields.__4__this);
  v6->fields.bgTask = bgTask;
  sub_B5D560(&v6->fields.bgTask);
  return (System_Collections_IEnumerator_o *)v6;
}


bool __fastcall BackTaskAmountAdjuster__IsOverWork(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  struct System_Diagnostics_Stopwatch_o *stopwatch; // x0
  float plannedWorkDeltaTime; // s8

  stopwatch = this->fields.stopwatch;
  if ( !stopwatch )
    sub_B5D69C(0LL, method);
  if ( !stopwatch->fields.is_running )
    return 1;
  plannedWorkDeltaTime = this->fields.plannedWorkDeltaTime;
  return plannedWorkDeltaTime <= (float)((float)System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(stopwatch, 0LL)
                                       / 1000.0);
}


void __fastcall BackTaskAmountAdjuster__PlanNextWork(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float deltaTime; // s0
  float expectedDeltaTime; // s1
  float minWorkDeltaTime; // s8
  float actualWorkDeltaTime; // s9
  float v8; // s0
  float v9; // s0
  System_Diagnostics_Stopwatch_o *stopwatch; // x0

  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  expectedDeltaTime = this->fields.expectedDeltaTime;
  if ( (float)(expectedDeltaTime * 1.1) >= deltaTime )
  {
    v9 = (float)(expectedDeltaTime * 0.1) + this->fields.plannedWorkDeltaTime;
  }
  else
  {
    minWorkDeltaTime = this->fields.minWorkDeltaTime;
    actualWorkDeltaTime = this->fields.actualWorkDeltaTime;
    v8 = UnityEngine_Mathf__Max(0.0, deltaTime - expectedDeltaTime, 0LL);
    v9 = UnityEngine_Mathf__Max(minWorkDeltaTime, actualWorkDeltaTime - v8, 0LL);
  }
  stopwatch = this->fields.stopwatch;
  this->fields.plannedWorkDeltaTime = v9;
  if ( !stopwatch || (System_Diagnostics_Stopwatch__Reset(stopwatch, 0LL), (stopwatch = this->fields.stopwatch) == 0LL) )
    sub_B5D69C(stopwatch, v3);
  System_Diagnostics_Stopwatch__Start(stopwatch, 0LL);
}


void __fastcall BackTaskAmountAdjuster__SaveActualWorkDeltaTime(
        BackTaskAmountAdjuster_o *this,
        const MethodInfo *method)
{
  System_Diagnostics_Stopwatch_o *stopwatch; // x0

  stopwatch = this->fields.stopwatch;
  if ( !stopwatch )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  BackTaskAmountAdjuster__Execute_d__9_o *v4; // x19
  BackTaskAmountAdjuster_o *_4__this; // x20
  __int64 v6; // x3
  struct System_Collections_IEnumerator_o *bgTask; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v9; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x3
  struct System_Collections_IEnumerator_o *v13; // x21
  System_Collections_IEnumerator_c *v14; // x8
  unsigned __int64 v15; // x10
  System_Collections_IEnumerator_c **v16; // x11
  __int64 v17; // x0
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  bool result; // w0
  BattleServantConfConponent_o *v33; // x19

  v4 = this;
  if ( (byte_42E7548 & 1) == 0 )
  {
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)sub_B5D5C4(
                                                       &System_Collections_IEnumerator_TypeInfo,
                                                       (_DWORD)method,
                                                       v2,
                                                       v3);
    byte_42E7548 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( v4->fields.__1__state > 2u )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
LABEL_26:
    sub_B5D69C(this, method);
  BackTaskAmountAdjuster__PlanNextWork(_4__this, 0LL);
  while ( 1 )
  {
    bgTask = v4->fields.bgTask;
    if ( !bgTask )
      goto LABEL_26;
    klass = bgTask->klass;
    if ( *(_WORD *)&bgTask->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&bgTask->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AF54C0(v4->fields.bgTask, System_Collections_IEnumerator_TypeInfo, 0LL, v6);
    }
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       bgTask,
                                                       *(_QWORD *)(p_method + 8));
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    v13 = v4->fields.bgTask;
    if ( !v13 )
      goto LABEL_26;
    v14 = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        v16 += 2;
        if ( v15 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_19:
      v17 = sub_AF54C0(v4->fields.bgTask, System_Collections_IEnumerator_TypeInfo, 1LL, v12);
    }
    v18 = (System_Int32_array **)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v17)(
                                   v13,
                                   *(_QWORD *)(v17 + 8));
    if ( v18 )
      break;
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)BackTaskAmountAdjuster__IsOverWork(_4__this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      BackTaskAmountAdjuster__SaveActualWorkDeltaTime(_4__this, 0LL);
      v4->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(p__2__current, 0LL, v26, v27, v28, v29, v30, v31);
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
      return 1;
    }
  }
  v4->fields.__2__current = (Il2CppObject *)v18;
  v33 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
  sub_B5D560(v33, v18, v19, v20, v21, v22, v23, v24);
  result = 1;
  *(_DWORD *)&v33[-1].fields.isOpenAfter = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BackTaskAmountAdjuster__Execute_d__9_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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