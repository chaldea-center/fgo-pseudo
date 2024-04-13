void __fastcall BattleHitStopControl___ctor(BattleHitStopControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleHitStopControl__Clear(BattleHitStopControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_GameObject__o *stopobjlist; // x0

  if ( (byte_42E593A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, (_DWORD)method, v2, v3);
    byte_42E593A = 1;
  }
  stopobjlist = this->fields.stopobjlist;
  if ( !stopobjlist )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)stopobjlist,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall BattleHitStopControl__Start(BattleHitStopControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20

  if ( (byte_42E5939 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6, v7);
    byte_42E5939 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.stopobjlist = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B5D560(&this->fields.stopobjlist);
}


void __fastcall BattleHitStopControl__actWait(BattleHitStopControl_o *this, float time, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleHitStopControl__stopwaitCor(this, time, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleHitStopControl__setTargetObject(
        BattleHitStopControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_GameObject__o *stopobjlist; // x0

  if ( (byte_42E593B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, (_DWORD)obj, (_DWORD)method, v3);
    byte_42E593B = 1;
  }
  stopobjlist = this->fields.stopobjlist;
  if ( !stopobjlist )
    sub_B5D69C(0LL, obj);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)stopobjlist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)obj,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


System_Collections_IEnumerator_o *__fastcall BattleHitStopControl__stopwaitCor(
        BattleHitStopControl_o *this,
        float time,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  BattleHitStopControl__stopwaitCor_d__5_o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42E593C & 1) == 0 )
  {
    sub_B5D5C4(&BattleHitStopControl__stopwaitCor_d__5_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E593C = 1;
  }
  v7 = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_B5D694(BattleHitStopControl__stopwaitCor_d__5_TypeInfo);
  BattleHitStopControl__stopwaitCor_d__5___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  v7->fields.__4__this = this;
  sub_B5D560(&v7->fields.__4__this);
  v7->fields.time = time;
  return (System_Collections_IEnumerator_o *)v7;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int32_t _1__state; // w9
  struct BattleHitStopControl_o *_4__this; // x8
  DefCoroutine_c *v32; // x0
  System_Int32_array ***static_fields; // x8
  System_Int32_array **v34; // x1
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  __int64 v37; // x1
  __int64 v38; // x1
  float time; // s8
  UnityEngine_WaitForSeconds_o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-40h] BYREF

  v8 = this;
  if ( (byte_42E7C33 & 1) == 0 )
  {
    sub_B5D5C4(&DefCoroutine_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_22102/*"resumeAnimation"*/, v24, v25, v26);
    this = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_B5D5C4(&StringLiteral_22632/*"stopAnimation"*/, v27, v28, v29);
    byte_42E7C33 = 1;
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
          &v47,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        for ( i = v47;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
              UnityEngine_GameObject__SendMessage_41595196(
                (UnityEngine_GameObject_o *)i.fields.current,
                (System_String_o *)StringLiteral_22102/*"resumeAnimation"*/,
                0LL) )
        {
          if ( !i.fields.current )
            sub_B5D69C(0LL, v38);
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        return 0;
      }
    }
LABEL_27:
    sub_B5D69C(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v8->fields.__1__state = -1;
      v32 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v32 = DefCoroutine_TypeInfo;
      }
      static_fields = (System_Int32_array ***)v32->static_fields;
      v34 = *static_fields;
      v8->fields.__2__current = (Il2CppObject *)*static_fields;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B5D560(p__2__current, v34, v2, v3, v4, v5, v6, v7);
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
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v47;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        UnityEngine_GameObject__SendMessage_41595196(
          (UnityEngine_GameObject_o *)i.fields.current,
          (System_String_o *)StringLiteral_22632/*"stopAnimation"*/,
          0LL) )
  {
    if ( !i.fields.current )
      sub_B5D69C(0LL, v37);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  time = v8->fields.time;
  v40 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v40, time, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v8->fields.__2__current,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleHitStopControl__stopwaitCor_d__5_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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