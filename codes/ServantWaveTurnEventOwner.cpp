void __fastcall ServantWaveTurnEventOwner___ctor(ServantWaveTurnEventOwner_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF053 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo, v4);
    byte_49FF053 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v5,
    (const MethodInfo_3160DCC *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
  this->fields.servantWaveTurnEventDict = (struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
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
  if ( (byte_49FF051 & 1) == 0 )
  {
    this = (ServantWaveTurnEventOwner_o *)sub_1B640C8(
                                            &Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__,
                                            ev);
    byte_49FF051 = 1;
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
    sub_1B64324(this);
  }
  klass_low = SLODWORD(this[1].klass);
  if ( (unsigned int)klass_low >= LODWORD(servantWaveTurnEventDict->fields._entries) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)ev,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &servantWaveTurnEventDict->klass + klass_low;
    LODWORD(this[1].klass) = klass_low + 1;
    v11[4] = (System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___c *)ev;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 4), (int32_t)ev, v6, v7);
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

  if ( (byte_49FF050 & 1) == 0 )
  {
    sub_1B640C8(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, *(_QWORD *)&wave);
    byte_49FF050 = 1;
  }
  v7 = sub_1B64314(ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, *(_QWORD *)&wave, *(_QWORD *)&turn);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v8, v9);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x21
  System_Collections_Generic_List_object__o *v16; // x22

  if ( (byte_49FF052 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__,
      *(_QWORD *)&wave);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo, v10);
    byte_49FF052 = 1;
  }
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_9;
  v12 = wave + 100 * turn;
  if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
          servantWaveTurnEventDict,
          v12,
          (const MethodInfo_3161990 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__) )
  {
    v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
    v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo,
                                                         v13,
                                                         v14);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    if ( !v15 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_long__object___set_Item(
      v15,
      v12,
      (Il2CppObject *)v16,
      (const MethodInfo_3161788 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
  }
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
LABEL_9:
    sub_1B64324(servantWaveTurnEventDict);
  return (System_Collections_Generic_List_ServantWaveTurnEvent__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                                      servantWaveTurnEventDict,
                                                                      v12,
                                                                      (const MethodInfo_31616FC *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
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
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v9; // x9
  __int128 v10; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  bool v17; // w8
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v18; // x0
  struct ServantWaveTurnEvent_o *current; // x1
  bool result; // w0
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v21; // x8
  System_Collections_Generic_List_Enumerator_T__o v22[2]; // [xsp+8h] [xbp-68h] BYREF
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o **v23; // [xsp+48h] [xbp-28h]
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v24; // [xsp+58h] [xbp-18h] BYREF

  v24 = this;
  v3 = this;
  if ( (byte_49FF054 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__, v5);
    byte_49FF054 = 1;
  }
  v23 = &v24;
  _1__state = v3->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B64324(0LL);
    WaveTurnEventDictValue = (System_Collections_Generic_List_object__o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                                            _4__this,
                                                                            v3->fields.wave,
                                                                            v3->fields.turn,
                                                                            v2);
    if ( !WaveTurnEventDictValue )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      v22,
      WaveTurnEventDictValue,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    v9 = v24;
    v10 = *(_OWORD *)&v22[0].fields._list;
    p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v24->fields.__7__wrap1;
    v22[1] = v22[0];
    v24->fields.__7__wrap1.fields._current = (struct ServantWaveTurnEvent_o *)v22[0].fields._current;
    *(_OWORD *)&v9->fields.__7__wrap1.fields._list = v10;
    sub_1B6406C(p__7__wrap1, 0, v12, v13);
    v3 = v24;
  }
  v3->fields.__1__state = -3;
  v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v3->fields.__7__wrap1,
          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__);
  v18 = v24;
  if ( v17 )
  {
    current = v24->fields.__7__wrap1.fields._current;
    v24->fields.__2__current = current;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.__2__current, (int32_t)current, v15, v16);
    result = 1;
    v24->fields.__1__state = 1;
  }
  else
  {
    ServantWaveTurnEventOwner__EventEnumerator_d__1____m__Finally1(v24, v14);
    v21 = v24;
    result = 0;
    v24->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v21->fields.__7__wrap1.fields._index = 0LL;
    v21->fields.__7__wrap1.fields._current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *__fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1__System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__GetEnumerator(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v5; // x20
  struct ServantWaveTurnEventOwner_o *_4__this; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *result; // x0

  if ( (byte_49FF056 & 1) == 0 )
  {
    sub_1B640C8(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, method);
    byte_49FF056 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v5 = this;
  }
  else
  {
    v5 = (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)sub_1B64314(
                                                                ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo,
                                                                method,
                                                                v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    v5->fields.__1__state = 0;
    v5->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v5->fields.__4__this = _4__this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.__4__this, (int32_t)_4__this, v7, v8);
  }
  result = (System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *)v5;
  v5->fields.wave = this->fields.__3__wave;
  v5->fields.turn = this->fields.__3__turn;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ServantWaveTurnEventOwner__EventEnumerator_d__1_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_49FF055 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__, method);
    byte_49FF055 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
}