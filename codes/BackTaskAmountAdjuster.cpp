void BackTaskAmountAdjuster___ctor(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  System_Diagnostics_Stopwatch_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  float v10; // s0

  if ( (byte_4CC90A7 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&System_Diagnostics_Stopwatch_TypeInfo);
    byte_4CC90A7 = 1;
  }
  v3 = (System_Diagnostics_Stopwatch_o *)sub_1C715FC(System_Diagnostics_Stopwatch_TypeInfo);
  System_Diagnostics_Stopwatch___ctor(v3, 0);
  this->fields.stopwatch = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.stopwatch, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  v10 = 1.0 / (float)UnityEngine_Application__get_targetFrameRate(0);
  this->fields.plannedWorkDeltaTime = v10 * 0.5;
  this->fields.expectedDeltaTime = v10;
}


float BackTaskAmountAdjuster__CalcExtendedDeltaTime(
        BackTaskAmountAdjuster_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  return fmaxf(deltaTime - this->fields.expectedDeltaTime, 0.0);
}


System_Collections_IEnumerator_o *BackTaskAmountAdjuster__Execute(
        BackTaskAmountAdjuster_o *this,
        System_Collections_IEnumerator_o *bgTask,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CC90A8 & 1) == 0 )
  {
    sub_1C713B0(&BackTaskAmountAdjuster__Execute_d__9_TypeInfo);
    byte_4CC90A8 = 1;
  }
  v5 = sub_1C715FC(BackTaskAmountAdjuster__Execute_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = bgTask;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)bgTask, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


bool BackTaskAmountAdjuster__IsOverWork(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  struct System_Diagnostics_Stopwatch_o *stopwatch; // x0
  float plannedWorkDeltaTime; // s8

  stopwatch = this->fields.stopwatch;
  if ( !stopwatch )
    sub_1C71608(0, method);
  if ( !stopwatch->fields.is_running )
    return 1;
  plannedWorkDeltaTime = this->fields.plannedWorkDeltaTime;
  return plannedWorkDeltaTime <= (float)((float)System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(stopwatch, 0)
                                       / 1000.0);
}


void BackTaskAmountAdjuster__PlanNextWork(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float deltaTime; // s0
  float expectedDeltaTime; // s1
  float minWorkDeltaTime; // s0
  System_Diagnostics_Stopwatch_o *stopwatch; // x0

  deltaTime = UnityEngine_Time__get_deltaTime(0);
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
  if ( !stopwatch || (System_Diagnostics_Stopwatch__Reset(stopwatch, 0), (stopwatch = this->fields.stopwatch) == 0) )
    sub_1C71608(stopwatch, v3);
  System_Diagnostics_Stopwatch__Start(stopwatch, 0);
}


void BackTaskAmountAdjuster__SaveActualWorkDeltaTime(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  System_Diagnostics_Stopwatch_o *stopwatch; // x0

  stopwatch = this->fields.stopwatch;
  if ( !stopwatch )
    sub_1C71608(0, method);
  this->fields.actualWorkDeltaTime = (float)System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(stopwatch, 0) / 1000.0;
}


void BackTaskAmountAdjuster__Execute_d__9___ctor(
        BackTaskAmountAdjuster__Execute_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BackTaskAmountAdjuster__Execute_d__9__MoveNext(
        BackTaskAmountAdjuster__Execute_d__9_o *this,
        const MethodInfo *method)
{
  BackTaskAmountAdjuster__Execute_d__9_o *v2; // x19
  BackTaskAmountAdjuster_o *_4__this; // x20
  struct System_Collections_IEnumerator_o *bgTask; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v6; // x9
  int *p_offset; // x10
  __int64 v8; // x0
  struct System_Collections_IEnumerator_o *v9; // x21
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  bool result; // w0
  GrandQuestFolderBoardItem_o *v30; // x19

  v2 = this;
  if ( (byte_4CC90A9 & 1) == 0 )
  {
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC90A9 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( v2->fields.__1__state > 2u )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
LABEL_26:
    sub_1C71608(this, method);
  BackTaskAmountAdjuster__PlanNextWork(_4__this, method);
  while ( 1 )
  {
    bgTask = v2->fields.bgTask;
    if ( !bgTask )
      goto LABEL_26;
    klass = bgTask->klass;
    v6 = *(unsigned __int16 *)&bgTask->klass->_2.rank;
    if ( *(_WORD *)&bgTask->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_11;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v8 = sub_1C47738(v2->fields.bgTask, System_Collections_IEnumerator_TypeInfo, 0);
    }
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v8)(
                                                       bgTask,
                                                       *(_QWORD *)(v8 + 8));
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    v9 = v2->fields.bgTask;
    if ( !v9 )
      goto LABEL_26;
    v10 = v9->klass;
    v11 = *(unsigned __int16 *)&v9->klass->_2.rank;
    if ( *(_WORD *)&v9->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_19;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_19:
      v13 = sub_1C47738(v2->fields.bgTask, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v13)(v9, *(_QWORD *)(v13 + 8));
    if ( v14 )
      break;
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)BackTaskAmountAdjuster__IsOverWork(_4__this, v15);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      BackTaskAmountAdjuster__SaveActualWorkDeltaTime(_4__this, method);
      v2->fields.__2__current = 0;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C71354(p__2__current, 0, v23, v24, v25, v26, v27, v28);
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 2;
      return 1;
    }
  }
  v2->fields.__2__current = (Il2CppObject *)v14;
  v30 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C71354(v30, v14, v16, v17, v18, v19, v20, v21);
  result = 1;
  LODWORD(v30[-1].fields._ClosedMessage_k__BackingField) = 1;
  return result;
}


Il2CppObject *BackTaskAmountAdjuster__Execute_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BackTaskAmountAdjuster__Execute_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BackTaskAmountAdjuster__Execute_d__9__System_Collections_IEnumerator_Reset(
        BackTaskAmountAdjuster__Execute_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_BackTaskAmountAdjuster__Execute_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *BackTaskAmountAdjuster__Execute_d__9__System_Collections_IEnumerator_get_Current(
        BackTaskAmountAdjuster__Execute_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BackTaskAmountAdjuster__Execute_d__9__System_IDisposable_Dispose(
        BackTaskAmountAdjuster__Execute_d__9_o *this,
        const MethodInfo *method)
{
  ;
}