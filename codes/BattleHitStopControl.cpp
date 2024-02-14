void __fastcall BattleHitStopControl___ctor(BattleHitStopControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleHitStopControl__Clear(BattleHitStopControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *stopobjlist; // x0

  if ( (byte_42117EA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    byte_42117EA = 1;
  }
  stopobjlist = this->fields.stopobjlist;
  if ( !stopobjlist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)stopobjlist,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall BattleHitStopControl__Start(BattleHitStopControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20

  if ( (byte_42117E9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_42117E9 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.stopobjlist = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_B0D840(&this->fields.stopobjlist, v5);
}


void __fastcall BattleHitStopControl__actWait(BattleHitStopControl_o *this, float time, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleHitStopControl__stopwaitCor(this, time, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleHitStopControl__setTargetObject(
        BattleHitStopControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *stopobjlist; // x0

  if ( (byte_42117EB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    byte_42117EB = 1;
  }
  stopobjlist = this->fields.stopobjlist;
  if ( !stopobjlist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)stopobjlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)obj,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


System_Collections_IEnumerator_o *__fastcall BattleHitStopControl__stopwaitCor(
        BattleHitStopControl_o *this,
        float time,
        const MethodInfo *method)
{
  __int64 v3; // x2
  BattleHitStopControl__stopwaitCor_d__5_o *v6; // x20
  __int64 v7; // x0

  if ( (byte_42117EC & 1) == 0 )
  {
    sub_B0D8A4(&BattleHitStopControl__stopwaitCor_d__5_TypeInfo, method);
    byte_42117EC = 1;
  }
  v6 = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_B0D974(
                                                     BattleHitStopControl__stopwaitCor_d__5_TypeInfo,
                                                     method,
                                                     v3);
  BattleHitStopControl__stopwaitCor_d__5___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B0D97C(v7);
  v6->fields.__4__this = this;
  sub_B0D840(&v6->fields.__4__this, this);
  v6->fields.time = time;
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t _1__state; // w9
  struct BattleHitStopControl_o *_4__this; // x8
  DefCoroutine_c *v18; // x0
  System_Int32_array ***static_fields; // x8
  System_Int32_array **v20; // x1
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  float time; // s8
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_WaitForSeconds_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-40h] BYREF

  v8 = this;
  if ( (byte_4213908 & 1) == 0 )
  {
    sub_B0D8A4(&DefCoroutine_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_21877/*"resumeAnimation"*/, v14);
    this = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_B0D8A4(&StringLiteral_22405/*"stopAnimation"*/, v15);
    byte_4213908 = 1;
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
          &v33,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        for ( i = v33;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
              UnityEngine_GameObject__SendMessage_40784904(
                (UnityEngine_GameObject_o *)i.fields.current,
                (System_String_o *)StringLiteral_21877/*"resumeAnimation"*/,
                0LL) )
        {
          if ( !i.fields.current )
            sub_B0D97C(0LL);
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        return 0;
      }
    }
LABEL_27:
    sub_B0D97C(this);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v8->fields.__1__state = -1;
      v18 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v18 = DefCoroutine_TypeInfo;
      }
      static_fields = (System_Int32_array ***)v18->static_fields;
      v20 = *static_fields;
      v8->fields.__2__current = (Il2CppObject *)*static_fields;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B0D840(p__2__current, v20, v2, v3, v4, v5, v6, v7);
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
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v33;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        UnityEngine_GameObject__SendMessage_40784904(
          (UnityEngine_GameObject_o *)i.fields.current,
          (System_String_o *)StringLiteral_22405/*"stopAnimation"*/,
          0LL) )
  {
    if ( !i.fields.current )
      sub_B0D97C(0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  time = v8->fields.time;
  v26 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v24, v25);
  UnityEngine_WaitForSeconds___ctor(v26, time, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v26;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v8->fields.__2__current,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleHitStopControl__stopwaitCor_d__5_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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