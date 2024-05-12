void __fastcall BattleHitStopControl___ctor(BattleHitStopControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleHitStopControl__Clear(BattleHitStopControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *stopobjlist; // x0

  if ( (byte_43880CE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    byte_43880CE = 1;
  }
  stopobjlist = this->fields.stopobjlist;
  if ( !stopobjlist )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)stopobjlist,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall BattleHitStopControl__Start(BattleHitStopControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20

  if ( (byte_43880CD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_43880CD = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.stopobjlist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_B77560(&this->fields.stopobjlist);
}


void __fastcall BattleHitStopControl__actWait(BattleHitStopControl_o *this, float time, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleHitStopControl__stopwaitCor(this, time, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleHitStopControl__setTargetObject(
        BattleHitStopControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *stopobjlist; // x0

  if ( (byte_43880CF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_43880CF = 1;
  }
  stopobjlist = this->fields.stopobjlist;
  if ( !stopobjlist )
    sub_B7769C(0LL, obj);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)stopobjlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)obj,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


System_Collections_IEnumerator_o *__fastcall BattleHitStopControl__stopwaitCor(
        BattleHitStopControl_o *this,
        float time,
        const MethodInfo *method)
{
  BattleHitStopControl__stopwaitCor_d__5_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_43880D0 & 1) == 0 )
  {
    sub_B775C4(&BattleHitStopControl__stopwaitCor_d__5_TypeInfo);
    byte_43880D0 = 1;
  }
  v5 = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_B77694(BattleHitStopControl__stopwaitCor_d__5_TypeInfo);
  BattleHitStopControl__stopwaitCor_d__5___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.__4__this = this;
  sub_B77560(&v5->fields.__4__this);
  v5->fields.time = time;
  return (System_Collections_IEnumerator_o *)v5;
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleHitStopControl__stopwaitCor_d__5_o *v8; // x19
  int32_t _1__state; // w9
  struct BattleHitStopControl_o *_4__this; // x8
  DefCoroutine_c *v11; // x0
  System_Int32_array ***static_fields; // x8
  System_Int32_array **v13; // x1
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  __int64 v16; // x1
  __int64 v17; // x1
  float time; // s8
  UnityEngine_WaitForSeconds_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-40h] BYREF

  v8 = this;
  if ( (byte_438ABC7 & 1) == 0 )
  {
    sub_B775C4(&DefCoroutine_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B775C4(&StringLiteral_22271/*"resumeAnimation"*/);
    this = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_B775C4(&StringLiteral_22803/*"stopAnimation"*/);
    byte_438ABC7 = 1;
  }
  memset(&i, 0, sizeof(i));
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleHitStopControl__stopwaitCor_d__5_o *)_4__this->fields.stopobjlist;
      if ( this )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v26,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        for ( i = v26;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
              UnityEngine_GameObject__SendMessage_41438608(
                (UnityEngine_GameObject_o *)i.fields.current,
                (System_String_o *)StringLiteral_22271/*"resumeAnimation"*/,
                0LL) )
        {
          if ( !i.fields.current )
            sub_B7769C(0LL, v17);
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        return 0;
      }
    }
LABEL_27:
    sub_B7769C(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v8->fields.__1__state = -1;
      v11 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v11 = DefCoroutine_TypeInfo;
      }
      static_fields = (System_Int32_array ***)v11->static_fields;
      v13 = *static_fields;
      v8->fields.__2__current = (Il2CppObject *)*static_fields;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B77560(p__2__current, v13, v2, v3, v4, v5, v6, v7);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
    return 0;
  }
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_27;
  this = (BattleHitStopControl__stopwaitCor_d__5_o *)_4__this->fields.stopobjlist;
  if ( !this )
    goto LABEL_27;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v26;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        UnityEngine_GameObject__SendMessage_41438608(
          (UnityEngine_GameObject_o *)i.fields.current,
          (System_String_o *)StringLiteral_22803/*"stopAnimation"*/,
          0LL) )
  {
    if ( !i.fields.current )
      sub_B7769C(0LL, v16);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  time = v8->fields.time;
  v19 = (UnityEngine_WaitForSeconds_o *)sub_B77694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v19, time, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v19;
  sub_B77560(
    (BattleServantConfConponent_o *)&v8->fields.__2__current,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  result = 1;
  v8->fields.__1__state = 2;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleHitStopControl__stopwaitCor_d__5_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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