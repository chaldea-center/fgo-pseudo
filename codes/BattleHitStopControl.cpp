void __fastcall BattleHitStopControl___ctor(BattleHitStopControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleHitStopControl__Clear(BattleHitStopControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *stopobjlist; // x0

  if ( (byte_40F7314 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    byte_40F7314 = 1;
  }
  stopobjlist = this->fields.stopobjlist;
  if ( !stopobjlist )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)stopobjlist,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall BattleHitStopControl__Start(BattleHitStopControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20

  if ( (byte_40F7313 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40F7313 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.stopobjlist = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_B16F98(&this->fields.stopobjlist, v7);
}


void __fastcall BattleHitStopControl__actWait(BattleHitStopControl_o *this, float time, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleHitStopControl__stopwaitCor(this, time, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleHitStopControl__setTargetObject(
        BattleHitStopControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *stopobjlist; // x0

  if ( (byte_40F7315 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    byte_40F7315 = 1;
  }
  stopobjlist = this->fields.stopobjlist;
  if ( !stopobjlist )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)stopobjlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)obj,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


System_Collections_IEnumerator_o *__fastcall BattleHitStopControl__stopwaitCor(
        BattleHitStopControl_o *this,
        float time,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  BattleHitStopControl__stopwaitCor_d__5_o *v8; // x20

  if ( (byte_40F7316 & 1) == 0 )
  {
    sub_B16FFC(&BattleHitStopControl__stopwaitCor_d__5_TypeInfo, method);
    byte_40F7316 = 1;
  }
  v8 = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_B170CC(
                                                     BattleHitStopControl__stopwaitCor_d__5_TypeInfo,
                                                     method,
                                                     v3,
                                                     v4,
                                                     v5);
  BattleHitStopControl__stopwaitCor_d__5___ctor(v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  v8->fields.__4__this = this;
  sub_B16F98(&v8->fields.__4__this, this);
  v8->fields.time = time;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall BattleHitStopControl__stopwaitCor_d__5___ctor(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleHitStopControl__stopwaitCor_d__5__MoveNext(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w9
  struct BattleHitStopControl_o *_4__this; // x8
  DefCoroutine_c *v12; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v14; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v17; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *stopobjlist; // x0
  float time; // s8
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  UnityEngine_WaitForSeconds_o *v24; // x20
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F8519 & 1) == 0 )
  {
    sub_B16FFC(&DefCoroutine_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_21714/*"resumeAnimation"*/, v8);
    sub_B16FFC(&StringLiteral_22237/*"stopAnimation"*/, v9);
    byte_40F8519 = 1;
  }
  memset(&i, 0, sizeof(i));
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      stopobjlist = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.stopobjlist;
      if ( stopobjlist )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v25,
          stopobjlist,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        for ( i = v25;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
              UnityEngine_GameObject__SendMessage_40693392(
                (UnityEngine_GameObject_o *)i.fields.current,
                (System_String_o *)StringLiteral_21714/*"resumeAnimation"*/,
                0LL) )
        {
          if ( !i.fields.current )
            sub_B170D4();
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        return 0;
      }
    }
LABEL_27:
    sub_B170D4();
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v12 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v12 = DefCoroutine_TypeInfo;
      }
      static_fields = (Il2CppObject **)v12->static_fields;
      v14 = *static_fields;
      this->fields.__2__current = *static_fields;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, v14);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_27;
  v17 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.stopobjlist;
  if ( !v17 )
    goto LABEL_27;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    v17,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v25;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        UnityEngine_GameObject__SendMessage_40693392(
          (UnityEngine_GameObject_o *)i.fields.current,
          (System_String_o *)StringLiteral_22237/*"stopAnimation"*/,
          0LL) )
  {
    if ( !i.fields.current )
      sub_B170D4();
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  time = this->fields.time;
  v24 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v20, v21, v22, v23);
  UnityEngine_WaitForSeconds___ctor(v24, time, 0LL);
  this->fields.__2__current = (Il2CppObject *)v24;
  sub_B16F98(&this->fields.__2__current, v24);
  result = 1;
  this->fields.__1__state = 2;
  return result;
}


Il2CppObject *__fastcall BattleHitStopControl__stopwaitCor_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleHitStopControl__stopwaitCor_d__5__System_Collections_IEnumerator_Reset(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
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
  sub_B17000(&Method_BattleHitStopControl__stopwaitCor_d__5_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleHitStopControl__stopwaitCor_d__5__System_Collections_IEnumerator_get_Current(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleHitStopControl__stopwaitCor_d__5__System_IDisposable_Dispose(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  ;
}