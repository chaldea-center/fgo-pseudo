void __fastcall BackTaskAmountAdjuster___ctor(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Diagnostics_Stopwatch_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  float v8; // s0

  if ( (byte_49FDDC5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&System_Diagnostics_Stopwatch_TypeInfo, v4);
    byte_49FDDC5 = 1;
  }
  v5 = (System_Diagnostics_Stopwatch_o *)sub_1B64314(System_Diagnostics_Stopwatch_TypeInfo, method, v2);
  System_Diagnostics_Stopwatch___ctor(v5, 0LL);
  this->fields.stopwatch = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.stopwatch, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  v8 = 1.0 / (float)UnityEngine_Application__get_targetFrameRate(0LL);
  this->fields.plannedWorkDeltaTime = v8 * 0.5;
  this->fields.expectedDeltaTime = v8;
}


float __fastcall BackTaskAmountAdjuster__CalcExtendedDeltaTime(
        BackTaskAmountAdjuster_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  return fmaxf(deltaTime - this->fields.expectedDeltaTime, 0.0);
}


System_Collections_IEnumerator_o *__fastcall BackTaskAmountAdjuster__Execute(
        BackTaskAmountAdjuster_o *this,
        System_Collections_IEnumerator_o *bgTask,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FDDC6 & 1) == 0 )
  {
    sub_1B640C8(&BackTaskAmountAdjuster__Execute_d__9_TypeInfo, bgTask);
    byte_49FDDC6 = 1;
  }
  v5 = sub_1B64314(BackTaskAmountAdjuster__Execute_d__9_TypeInfo, bgTask, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = bgTask;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)bgTask, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall BackTaskAmountAdjuster__IsOverWork(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  struct System_Diagnostics_Stopwatch_o *stopwatch; // x0
  float plannedWorkDeltaTime; // s8

  stopwatch = this->fields.stopwatch;
  if ( !stopwatch )
    sub_1B64324(0LL);
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
  float minWorkDeltaTime; // s0
  System_Diagnostics_Stopwatch_o *stopwatch; // x0

  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  expectedDeltaTime = this->fields.expectedDeltaTime;
  if ( (float)(expectedDeltaTime * 1.1) >= deltaTime )
  {
    minWorkDeltaTime = (float)(expectedDeltaTime * 0.1) + this->fields.plannedWorkDeltaTime;
  }
  else
  {
    minWorkDeltaTime = this->fields.actualWorkDeltaTime - fmaxf(deltaTime - expectedDeltaTime, 0.0);
    if ( this->fields.minWorkDeltaTime > minWorkDeltaTime )
      minWorkDeltaTime = this->fields.minWorkDeltaTime;
  }
  stopwatch = this->fields.stopwatch;
  this->fields.plannedWorkDeltaTime = minWorkDeltaTime;
  if ( !stopwatch || (System_Diagnostics_Stopwatch__Reset(stopwatch, 0LL), (stopwatch = this->fields.stopwatch) == 0LL) )
    sub_1B64324(stopwatch);
  System_Diagnostics_Stopwatch__Start(stopwatch, 0LL);
}


void __fastcall BackTaskAmountAdjuster__SaveActualWorkDeltaTime(
        BackTaskAmountAdjuster_o *this,
        const MethodInfo *method)
{
  System_Diagnostics_Stopwatch_o *stopwatch; // x0

  stopwatch = this->fields.stopwatch;
  if ( !stopwatch )
    sub_1B64324(0LL);
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
  struct System_Collections_IEnumerator_o *bgTask; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v6; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct System_Collections_IEnumerator_o *v9; // x21
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  bool result; // w0
  ServantStatusBattleListViewItem_o *v23; // x19

  v2 = this;
  if ( (byte_49FDDC7 & 1) == 0 )
  {
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, method);
    byte_49FDDC7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( v2->fields.__1__state > 2u )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
LABEL_26:
    sub_1B64324(this);
  BackTaskAmountAdjuster__PlanNextWork(_4__this, method);
  while ( 1 )
  {
    bgTask = v2->fields.bgTask;
    if ( !bgTask )
      goto LABEL_26;
    klass = bgTask->klass;
    v6 = *(unsigned __int16 *)(&bgTask->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&bgTask->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB60A8(v2->fields.bgTask, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       bgTask,
                                                       *(_QWORD *)(p_method + 8));
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    v9 = v2->fields.bgTask;
    if ( !v9 )
      goto LABEL_26;
    v10 = v9->klass;
    v11 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_19;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_19:
      v13 = sub_1BB60A8(v2->fields.bgTask, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v13)(v9, *(_QWORD *)(v13 + 8));
    if ( v14 )
      break;
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)BackTaskAmountAdjuster__IsOverWork(_4__this, v15);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      BackTaskAmountAdjuster__SaveActualWorkDeltaTime(_4__this, v18);
      v2->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B6406C(p__2__current, 0, v20, v21);
      *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
      return 1;
    }
  }
  v2->fields.__2__current = (Il2CppObject *)v14;
  v23 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(v23, v14, v16, v17);
  result = 1;
  *(_DWORD *)&v23[-1].fields.isMine = 1;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BackTaskAmountAdjuster__Execute_d__9_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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