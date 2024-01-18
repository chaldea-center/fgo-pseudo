void __fastcall BackTaskAmountAdjuster___ctor(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  System_Diagnostics_Stopwatch_o *v3; // x20
  float v4; // s0

  if ( (byte_41849B2 & 1) == 0 )
  {
    sub_B2C35C(&System_Diagnostics_Stopwatch_TypeInfo, method);
    byte_41849B2 = 1;
  }
  v3 = (System_Diagnostics_Stopwatch_o *)sub_B2C42C(System_Diagnostics_Stopwatch_TypeInfo);
  System_Diagnostics_Stopwatch___ctor(v3, 0LL);
  this->fields.stopwatch = v3;
  sub_B2C2F8(&this->fields.stopwatch, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = 1.0 / (float)UnityEngine_Application__get_targetFrameRate(0LL);
  this->fields.plannedWorkDeltaTime = v4 * 0.5;
  this->fields.expectedDeltaTime = v4;
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
  BackTaskAmountAdjuster__Execute_d__9_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_41849B3 & 1) == 0 )
  {
    sub_B2C35C(&BackTaskAmountAdjuster__Execute_d__9_TypeInfo, bgTask);
    byte_41849B3 = 1;
  }
  v5 = (BackTaskAmountAdjuster__Execute_d__9_o *)sub_B2C42C(BackTaskAmountAdjuster__Execute_d__9_TypeInfo);
  BackTaskAmountAdjuster__Execute_d__9___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v5->fields.__4__this = this;
  sub_B2C2F8(&v5->fields.__4__this, this);
  v5->fields.bgTask = bgTask;
  sub_B2C2F8(&v5->fields.bgTask, bgTask);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall BackTaskAmountAdjuster__IsOverWork(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  struct System_Diagnostics_Stopwatch_o *stopwatch; // x0
  float plannedWorkDeltaTime; // s8

  stopwatch = this->fields.stopwatch;
  if ( !stopwatch )
    sub_B2C434(0LL, method);
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
    sub_B2C434(stopwatch, v3);
  System_Diagnostics_Stopwatch__Start(stopwatch, 0LL);
}


void __fastcall BackTaskAmountAdjuster__SaveActualWorkDeltaTime(
        BackTaskAmountAdjuster_o *this,
        const MethodInfo *method)
{
  System_Diagnostics_Stopwatch_o *stopwatch; // x0

  stopwatch = this->fields.stopwatch;
  if ( !stopwatch )
    sub_B2C434(0LL, method);
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
  BackTaskAmountAdjuster__Execute_d__9_o *v2; // x19
  BackTaskAmountAdjuster_o *_4__this; // x20
  __int64 v4; // x3
  struct System_Collections_IEnumerator_o *bgTask; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v7; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v10; // x3
  struct System_Collections_IEnumerator_o *v11; // x21
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  bool result; // w0
  BattleServantConfConponent_o *v31; // x19

  v2 = this;
  if ( (byte_4186BDC & 1) == 0 )
  {
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, method);
    byte_4186BDC = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( v2->fields.__1__state > 2u )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
LABEL_26:
    sub_B2C434(this, method);
  BackTaskAmountAdjuster__PlanNextWork(_4__this, 0LL);
  while ( 1 )
  {
    bgTask = v2->fields.bgTask;
    if ( !bgTask )
      goto LABEL_26;
    klass = bgTask->klass;
    if ( *(_WORD *)&bgTask->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&bgTask->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AC5258(v2->fields.bgTask, System_Collections_IEnumerator_TypeInfo, 0LL, v4);
    }
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       bgTask,
                                                       *(_QWORD *)(p_method + 8));
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    v11 = v2->fields.bgTask;
    if ( !v11 )
      goto LABEL_26;
    v12 = v11->klass;
    if ( *(_WORD *)&v11->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_19:
      v15 = sub_AC5258(v2->fields.bgTask, System_Collections_IEnumerator_TypeInfo, 1LL, v10);
    }
    v16 = (System_Int32_array **)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v15)(
                                   v11,
                                   *(_QWORD *)(v15 + 8));
    if ( v16 )
      break;
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)BackTaskAmountAdjuster__IsOverWork(_4__this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      BackTaskAmountAdjuster__SaveActualWorkDeltaTime(_4__this, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(p__2__current, 0LL, v24, v25, v26, v27, v28, v29);
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
      return 1;
    }
  }
  v2->fields.__2__current = (Il2CppObject *)v16;
  v31 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B2C2F8(v31, v16, v17, v18, v19, v20, v21, v22);
  result = 1;
  *(_DWORD *)&v31[-1].fields.isOpenAfter = 1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BackTaskAmountAdjuster__Execute_d__9_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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