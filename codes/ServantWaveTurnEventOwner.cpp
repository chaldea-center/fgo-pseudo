void __fastcall ServantWaveTurnEventOwner___ctor(ServantWaveTurnEventOwner_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5DE18 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo);
    byte_4A5DE18 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v3,
    (const MethodInfo_31AB7CC *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
  this->fields.servantWaveTurnEventDict = (struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
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
  if ( (byte_4A5DE16 & 1) == 0 )
  {
    this = (ServantWaveTurnEventOwner_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__);
    byte_4A5DE16 = 1;
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
    sub_1B8880C(this, ev);
  }
  klass_low = SLODWORD(this[1].klass);
  if ( (unsigned int)klass_low >= LODWORD(servantWaveTurnEventDict->fields._entries) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)ev,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &servantWaveTurnEventDict->klass + klass_low;
    LODWORD(this[1].klass) = klass_low + 1;
    v11[4] = (System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___c *)ev;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 4), (int32_t)ev, v6, v7);
  }
}


int64_t __fastcall ServantWaveTurnEventOwner__CalcWaveTurnVal(int32_t wave, int32_t turn, const MethodInfo *method)
{
  return wave + 100 * turn;
}


System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__o *__fastcall ServantWaveTurnEventOwner__EventEnumerator(
        ServantWaveTurnEventOwner_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5DE15 & 1) == 0 )
  {
    sub_1B885B0(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
    byte_4A5DE15 = 1;
  }
  v7 = sub_1B887FC(ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v8, v9);
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *servantWaveTurnEventDict; // x0
  int64_t v8; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x21
  System_Collections_Generic_List_object__o *v10; // x22

  if ( (byte_4A5DE17 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo);
    byte_4A5DE17 = 1;
  }
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_9;
  v8 = wave + 100 * turn;
  if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
          servantWaveTurnEventDict,
          v8,
          (const MethodInfo_31AC390 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__) )
  {
    v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
    v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    if ( !v9 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_long__object___set_Item(
      v9,
      v8,
      (Il2CppObject *)v10,
      (const MethodInfo_31AC188 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
  }
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
LABEL_9:
    sub_1B8880C(servantWaveTurnEventDict, *(_QWORD *)&wave);
  return (System_Collections_Generic_List_ServantWaveTurnEvent__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                                      servantWaveTurnEventDict,
                                                                      v8,
                                                                      (const MethodInfo_31AC0FC *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
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
  int32_t _1__state; // w8
  ServantWaveTurnEventOwner_o *_4__this; // x0
  System_Collections_Generic_List_object__o *WaveTurnEventDictValue; // x0
  __int64 v7; // x1
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v8; // x9
  __int128 v9; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  bool v16; // w8
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v17; // x0
  struct ServantWaveTurnEvent_o *current; // x1
  bool result; // w0
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v20; // x8
  System_Collections_Generic_List_Enumerator_T__o v21[2]; // [xsp+8h] [xbp-68h] BYREF
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o **v22; // [xsp+48h] [xbp-28h]
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v23; // [xsp+58h] [xbp-18h] BYREF

  v23 = this;
  v3 = this;
  if ( (byte_4A5DE19 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    byte_4A5DE19 = 1;
  }
  v22 = &v23;
  _1__state = v3->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B8880C(0LL, method);
    WaveTurnEventDictValue = (System_Collections_Generic_List_object__o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                                            _4__this,
                                                                            v3->fields.wave,
                                                                            v3->fields.turn,
                                                                            v2);
    if ( !WaveTurnEventDictValue )
      sub_1B8880C(0LL, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      v21,
      WaveTurnEventDictValue,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    v8 = v23;
    v9 = *(_OWORD *)&v21[0].fields._list;
    p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v23->fields.__7__wrap1;
    v21[1] = v21[0];
    v23->fields.__7__wrap1.fields._current = (struct ServantWaveTurnEvent_o *)v21[0].fields._current;
    *(_OWORD *)&v8->fields.__7__wrap1.fields._list = v9;
    sub_1B88554(p__7__wrap1, 0, v11, v12);
    v3 = v23;
  }
  v3->fields.__1__state = -3;
  v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v3->fields.__7__wrap1,
          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__);
  v17 = v23;
  if ( v16 )
  {
    current = v23->fields.__7__wrap1.fields._current;
    v23->fields.__2__current = current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->fields.__2__current, (int32_t)current, v14, v15);
    result = 1;
    v23->fields.__1__state = 1;
  }
  else
  {
    ServantWaveTurnEventOwner__EventEnumerator_d__1____m__Finally1(v23, v13);
    v20 = v23;
    result = 0;
    v23->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v20->fields.__7__wrap1.fields._index = 0LL;
    v20->fields.__7__wrap1.fields._current = 0LL;
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

  if ( (byte_4A5DE1B & 1) == 0 )
  {
    sub_1B885B0(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
    byte_4A5DE1B = 1;
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
    v4 = (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)sub_1B887FC(ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ServantWaveTurnEventOwner__EventEnumerator_d__1_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  if ( (byte_4A5DE1A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
    byte_4A5DE1A = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
}