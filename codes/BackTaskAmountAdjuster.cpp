void __fastcall BackTaskAmountAdjuster___ctor(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Diagnostics_Stopwatch_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  float v15; // s0

  if ( (byte_4B17C12 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Diagnostics_Stopwatch_TypeInfo, v5, v6);
    byte_4B17C12 = 1;
  }
  v7 = (System_Diagnostics_Stopwatch_o *)sub_1BCAA2C(System_Diagnostics_Stopwatch_TypeInfo, method, v2, v3);
  System_Diagnostics_Stopwatch___ctor(v7, 0LL);
  this->fields.stopwatch = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.stopwatch, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v14);
  v15 = 1.0 / (float)UnityEngine_Application__get_targetFrameRate(0LL);
  this->fields.plannedWorkDeltaTime = v15 * 0.5;
  this->fields.expectedDeltaTime = v15;
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
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B17C13 & 1) == 0 )
  {
    sub_1BCA7E0(&BackTaskAmountAdjuster__Execute_d__9_TypeInfo, bgTask, method);
    byte_4B17C13 = 1;
  }
  v6 = sub_1BCAA2C(BackTaskAmountAdjuster__Execute_d__9_TypeInfo, bgTask, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = bgTask;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)bgTask, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


bool __fastcall BackTaskAmountAdjuster__IsOverWork(BackTaskAmountAdjuster_o *this, const MethodInfo *method)
{
  struct System_Diagnostics_Stopwatch_o *stopwatch; // x0
  float plannedWorkDeltaTime; // s8

  stopwatch = this->fields.stopwatch;
  if ( !stopwatch )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(stopwatch, v3);
  System_Diagnostics_Stopwatch__Start(stopwatch, 0LL);
}


void __fastcall BackTaskAmountAdjuster__SaveActualWorkDeltaTime(
        BackTaskAmountAdjuster_o *this,
        const MethodInfo *method)
{
  System_Diagnostics_Stopwatch_o *stopwatch; // x0

  stopwatch = this->fields.stopwatch;
  if ( !stopwatch )
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  BackTaskAmountAdjuster__Execute_d__9_o *v3; // x19
  BackTaskAmountAdjuster_o *_4__this; // x20
  struct System_Collections_IEnumerator_o *bgTask; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct System_Collections_IEnumerator_o *v10; // x21
  System_Collections_IEnumerator_c *v11; // x8
  __int64 v12; // x9
  System_Collections_IEnumerator_c **v13; // x10
  __int64 v14; // x0
  int64_t v15; // x0
  const MethodInfo *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  bool result; // w0
  PartyOrganizationUtility_o *v31; // x19

  v3 = this;
  if ( (byte_4B17C14 & 1) == 0 )
  {
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, method, v2);
    byte_4B17C14 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( v3->fields.__1__state > 2u )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
LABEL_26:
    sub_1BCAA3C(this, method);
  BackTaskAmountAdjuster__PlanNextWork(_4__this, method);
  while ( 1 )
  {
    bgTask = v3->fields.bgTask;
    if ( !bgTask )
      goto LABEL_26;
    klass = bgTask->klass;
    v7 = *(unsigned __int16 *)(&bgTask->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&bgTask->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(v3->fields.bgTask, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       bgTask,
                                                       *(_QWORD *)(p_method + 8));
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    v10 = v3->fields.bgTask;
    if ( !v10 )
      goto LABEL_26;
    v11 = v10->klass;
    v12 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 2;
        if ( !v12 )
          goto LABEL_19;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1].method;
    }
    else
    {
LABEL_19:
      v14 = sub_1C1C7C0(v3->fields.bgTask, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v15 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8));
    if ( v15 )
      break;
    this = (BackTaskAmountAdjuster__Execute_d__9_o *)BackTaskAmountAdjuster__IsOverWork(_4__this, v16);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      BackTaskAmountAdjuster__SaveActualWorkDeltaTime(_4__this, method);
      v3->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, v24, v25, v26, v27, v28, v29);
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return 1;
    }
  }
  v3->fields.__2__current = (Il2CppObject *)v15;
  v31 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(v31, v15, v17, v18, v19, v20, v21, v22);
  result = 1;
  *(_DWORD *)&v31[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BackTaskAmountAdjuster__Execute_d__9_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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