void __fastcall ServantWaveTurnEventOwner___ctor(ServantWaveTurnEventOwner_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A01776 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__, method);
    sub_1B64A00(&System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo, v3);
    byte_4A01776 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v4,
    (const MethodInfo_31636C0 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
  this->fields.servantWaveTurnEventDict = (struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *)v4;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantWaveTurnEventOwner__Add(
        ServantWaveTurnEventOwner_o *this,
        ServantWaveTurnEvent_o *ev,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantWaveTurnEventOwner_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *servantWaveTurnEventDict; // x8
  _QWORD *v9; // x9
  __int64 klass_low; // x10
  System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___c **v11; // x8

  v5 = this;
  if ( (byte_4A01774 & 1) == 0 )
  {
    this = (ServantWaveTurnEventOwner_o *)sub_1B64A00(
                                            &Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__,
                                            ev);
    byte_4A01774 = 1;
  }
  if ( !ev
    || (this = (ServantWaveTurnEventOwner_o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                v5,
                                                ev->fields._Wave_k__BackingField,
                                                ev->fields._Turn_k__BackingField,
                                                v3)) == 0LL
    || (servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict,
        v9 = Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__,
        ++HIDWORD(this[1].klass),
        !servantWaveTurnEventDict) )
  {
    sub_1B64C5C(this, ev);
  }
  klass_low = SLODWORD(this[1].klass);
  if ( (unsigned int)klass_low >= LODWORD(servantWaveTurnEventDict->fields._entries) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)ev,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &servantWaveTurnEventDict->klass + klass_low;
    LODWORD(this[1].klass) = klass_low + 1;
    v11[4] = (System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___c *)ev;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v11 + 4), (int32_t)ev, v6, v7);
  }
}


int64_t __fastcall ServantWaveTurnEventOwner__CalcWaveTurnVal(int32_t wave, int32_t turn, const MethodInfo *method)
{
  return wave + 100 * turn;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__o *__fastcall ServantWaveTurnEventOwner__EventEnumerator(
        ServantWaveTurnEventOwner_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A01773 & 1) == 0 )
  {
    sub_1B64A00(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, *(_QWORD *)&wave);
    byte_4A01773 = 1;
  }
  v7 = sub_1B64C4C(ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 52) = wave;
  *(_DWORD *)(v7 + 60) = turn;
  return (System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantWaveTurnEvent__o *__fastcall ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
        ServantWaveTurnEventOwner_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *servantWaveTurnEventDict; // x0
  int64_t v12; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v13; // x21
  System_Collections_Generic_List_object__o *v14; // x22

  if ( (byte_4A01775 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__,
      *(_QWORD *)&wave);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__, v9);
    sub_1B64A00(&System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo, v10);
    byte_4A01775 = 1;
  }
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_9;
  v12 = wave + 100 * turn;
  if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
          servantWaveTurnEventDict,
          v12,
          (const MethodInfo_3164284 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__) )
  {
    v13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
    v14 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    if ( !v13 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_long__object___set_Item(
      v13,
      v12,
      (Il2CppObject *)v14,
      (const MethodInfo_316407C *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
  }
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
LABEL_9:
    sub_1B64C5C(servantWaveTurnEventDict, *(_QWORD *)&wave);
  return (System_Collections_Generic_List_ServantWaveTurnEvent__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                                      servantWaveTurnEventDict,
                                                                      v12,
                                                                      (const MethodInfo_3163FF0 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
}


void __fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1___ctor(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1__MoveNext(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  ServantWaveTurnEventOwner_o *_4__this; // x0
  System_Collections_Generic_List_object__o *WaveTurnEventDictValue; // x0
  __int64 v9; // x1
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v10; // x9
  __int128 v11; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  bool v18; // w8
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v19; // x0
  struct ServantWaveTurnEvent_o *current; // x1
  bool result; // w0
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v22; // x8
  System_Collections_Generic_List_Enumerator_T__o v23[2]; // [xsp+8h] [xbp-68h] BYREF
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o **v24; // [xsp+48h] [xbp-28h]
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v25; // [xsp+58h] [xbp-18h] BYREF

  v25 = this;
  v3 = this;
  if ( (byte_4A01777 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__get_Current__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__, v5);
    byte_4A01777 = 1;
  }
  v24 = &v25;
  _1__state = v3->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B64C5C(0LL, method);
    WaveTurnEventDictValue = (System_Collections_Generic_List_object__o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                                            _4__this,
                                                                            v3->fields.wave,
                                                                            v3->fields.turn,
                                                                            v2);
    if ( !WaveTurnEventDictValue )
      sub_1B64C5C(0LL, v9);
    System_Collections_Generic_List_object___GetEnumerator(
      v23,
      WaveTurnEventDictValue,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    v10 = v25;
    v11 = *(_OWORD *)&v23[0].fields._list;
    p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v25->fields.__7__wrap1;
    v23[1] = v23[0];
    v25->fields.__7__wrap1.fields._current = (struct ServantWaveTurnEvent_o *)v23[0].fields._current;
    *(_OWORD *)&v10->fields.__7__wrap1.fields._list = v11;
    sub_1B649A4(p__7__wrap1, 0, v13, v14);
    v3 = v25;
  }
  v3->fields.__1__state = -3;
  v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v3->fields.__7__wrap1,
          (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__);
  v19 = v25;
  if ( v18 )
  {
    current = v25->fields.__7__wrap1.fields._current;
    v25->fields.__2__current = current;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v19->fields.__2__current, (int32_t)current, v16, v17);
    result = 1;
    v25->fields.__1__state = 1;
  }
  else
  {
    ServantWaveTurnEventOwner__EventEnumerator_d__1____m__Finally1(v25, v15);
    v22 = v25;
    result = 0;
    v25->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v22->fields.__7__wrap1.fields._index = 0LL;
    v22->fields.__7__wrap1.fields._current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *__fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1__System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__GetEnumerator(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v4; // x20
  struct ServantWaveTurnEventOwner_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *result; // x0

  if ( (byte_4A01779 & 1) == 0 )
  {
    sub_1B64A00(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, method);
    byte_4A01779 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)sub_1B64C4C(ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7);
  }
  result = (System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *)v4;
  v4->fields.wave = this->fields.__3__wave;
  v4->fields.turn = this->fields.__3__turn;
  return result;
}


ServantWaveTurnEvent_o *__fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1__System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__get_Current(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantWaveTurnEventOwner__EventEnumerator_d__1__System_Collections_IEnumerator_Reset(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_ServantWaveTurnEventOwner__EventEnumerator_d__1_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
}


Il2CppObject *__fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1__System_Collections_IEnumerator_get_Current(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1__System_IDisposable_Dispose(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    ServantWaveTurnEventOwner__EventEnumerator_d__1____m__Finally1(this, method);
}


void __fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1____m__Finally1(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A01778 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__, method);
    byte_4A01778 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
}