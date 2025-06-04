void __fastcall ServantWaveTurnEventOwner___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x19
  ServantWaveTurnEventOwner_WaveTurnEventFactory_o *v9; // x20
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  ServantWaveTurnEventOwner_WaveTurnEventFactory_o *v13; // x20
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B05075 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor__,
      v1);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__set_Item__,
      v2);
    sub_1BC3008(
      &System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__TypeInfo,
      v3);
    sub_1BC3008(&Method_MoveToSubMemberWaveTurnEvent_CreateBySaveData__, v4);
    sub_1BC3008(&ServantWaveTurnEventOwner_TypeInfo, v5);
    sub_1BC3008(&Method_UseNoblePhantasmWaveTurnEvent_CreateBySaveData__, v6);
    sub_1BC3008(&ServantWaveTurnEventOwner_WaveTurnEventFactory_TypeInfo, v7);
    byte_4B05075 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v8,
    (const MethodInfo_33393F4 *)Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor__);
  v9 = (ServantWaveTurnEventOwner_WaveTurnEventFactory_o *)sub_1BC3254(ServantWaveTurnEventOwner_WaveTurnEventFactory_TypeInfo);
  ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor(
    v9,
    0LL,
    Method_MoveToSubMemberWaveTurnEvent_CreateBySaveData__,
    v10);
  if ( !v8 )
    sub_1BC3264(v11, v12);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    v8,
    1,
    (Il2CppObject *)v9,
    (const MethodInfo_3339DB4 *)Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__set_Item__);
  v13 = (ServantWaveTurnEventOwner_WaveTurnEventFactory_o *)sub_1BC3254(ServantWaveTurnEventOwner_WaveTurnEventFactory_TypeInfo);
  ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor(
    v13,
    0LL,
    Method_UseNoblePhantasmWaveTurnEvent_CreateBySaveData__,
    v14);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    v8,
    2,
    (Il2CppObject *)v13,
    (const MethodInfo_3339DB4 *)Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__set_Item__);
  ServantWaveTurnEventOwner_TypeInfo->static_fields->WaveTurnEventTypeToFactoryMap = (struct System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__o *)v8;
  sub_1BC2FAC((CGThumbnailListItem_o *)ServantWaveTurnEventOwner_TypeInfo->static_fields, (int32_t)v8, v15, v16);
}


void __fastcall ServantWaveTurnEventOwner___ctor(ServantWaveTurnEventOwner_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B05074 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__, method);
    sub_1BC3008(&System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo, v3);
    byte_4B05074 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v4,
    (const MethodInfo_334B364 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
  this->fields.servantWaveTurnEventDict = (struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *)v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
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
  const MethodInfo *v7; // x3
  struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *servantWaveTurnEventDict; // x8
  _QWORD *v9; // x9
  __int64 klass_low; // x10
  System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___c **v11; // x8

  v5 = this;
  if ( (byte_4B05070 & 1) == 0 )
  {
    this = (ServantWaveTurnEventOwner_o *)sub_1BC3008(
                                            &Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__,
                                            ev);
    byte_4B05070 = 1;
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
    sub_1BC3264(this, ev);
  }
  klass_low = SLODWORD(this[1].klass);
  if ( (unsigned int)klass_low >= LODWORD(servantWaveTurnEventDict->fields._entries) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)ev,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &servantWaveTurnEventDict->klass + klass_low;
    LODWORD(this[1].klass) = klass_low + 1;
    v11[4] = (System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___c *)ev;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 4), (int32_t)ev, v6, v7);
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
  const MethodInfo *v9; // x3

  if ( (byte_4B0506F & 1) == 0 )
  {
    sub_1BC3008(&ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo, *(_QWORD *)&wave);
    byte_4B0506F = 1;
  }
  v7 = sub_1BC3254(ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v7 + 40) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 52) = wave;
  *(_DWORD *)(v7 + 60) = turn;
  return (System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__o *)v7;
}


ServantWaveTurnEventOwner_SaveData_o *__fastcall ServantWaveTurnEventOwner__ExportSaveData(
        ServantWaveTurnEventOwner_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *servantWaveTurnEventDict; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  ServantWaveTurnEventOwner___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__object__o *_9__8_0; // x21
  Il2CppObject *v16; // x22
  struct ServantWaveTurnEventOwner___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4B05072 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Values__, method);
    sub_1BC3008(
      &Method_System_Linq_Enumerable_SelectMany_List_ServantWaveTurnEvent___ServantWaveTurnEvent_SaveData___,
      v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_ServantWaveTurnEvent_SaveData___, v4);
    sub_1BC3008(&System_Func_List_ServantWaveTurnEvent___IEnumerable_ServantWaveTurnEvent_SaveData___TypeInfo, v5);
    sub_1BC3008(&ServantWaveTurnEventOwner_SaveData_TypeInfo, v6);
    sub_1BC3008(&Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_0__, v7);
    sub_1BC3008(&ServantWaveTurnEventOwner___c_TypeInfo, v8);
    byte_4B05072 = 1;
  }
  v9 = sub_1BC3254(ServantWaveTurnEventOwner_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_12;
  Values = System_Collections_Generic_Dictionary_long__object___get_Values(
             servantWaveTurnEventDict,
             (const MethodInfo_334BB44 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Values__);
  v13 = ServantWaveTurnEventOwner___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !ServantWaveTurnEventOwner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner___c_TypeInfo);
    v13 = ServantWaveTurnEventOwner___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__object__o *)v13->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = ServantWaveTurnEventOwner___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__8_0 = (System_Func_object__object__o *)sub_1BC3254(System_Func_List_ServantWaveTurnEvent___IEnumerable_ServantWaveTurnEvent_SaveData___TypeInfo);
    System_Func_object__object____ctor(_9__8_0, v16, Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_0__, 0LL);
    static_fields = ServantWaveTurnEventOwner___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_List_ServantWaveTurnEvent___IEnumerable_ServantWaveTurnEvent_SaveData___o *)_9__8_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v14,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__8_0,
                                                               (const MethodInfo_3038834 *)Method_System_Linq_Enumerable_SelectMany_List_ServantWaveTurnEvent___ServantWaveTurnEvent_SaveData___);
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                        v20,
                                                                                        (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_ServantWaveTurnEvent_SaveData___);
  if ( !v9 )
LABEL_12:
    sub_1BC3264(servantWaveTurnEventDict, v10);
  *(_QWORD *)(v9 + 16) = servantWaveTurnEventDict;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)servantWaveTurnEventDict, v21, v22);
  return (ServantWaveTurnEventOwner_SaveData_o *)v9;
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
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *servantWaveTurnEventDict; // x0
  int64_t v13; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x21
  System_Collections_Generic_List_object__o *v15; // x22

  if ( (byte_4B05071 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__,
      *(_QWORD *)&wave);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo, v10);
    sub_1BC3008(&ServantWaveTurnEventOwner_TypeInfo, v11);
    byte_4B05071 = 1;
  }
  if ( !ServantWaveTurnEventOwner_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner_TypeInfo);
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_11;
  v13 = wave + 100 * turn;
  if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
          servantWaveTurnEventDict,
          v13,
          (const MethodInfo_334BF28 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__) )
  {
    v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
    v15 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    if ( !v14 )
      goto LABEL_11;
    System_Collections_Generic_Dictionary_long__object___set_Item(
      v14,
      v13,
      (Il2CppObject *)v15,
      (const MethodInfo_334BD20 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
  }
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
LABEL_11:
    sub_1BC3264(servantWaveTurnEventDict, *(_QWORD *)&wave);
  return (System_Collections_Generic_List_ServantWaveTurnEvent__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                                      servantWaveTurnEventDict,
                                                                      v13,
                                                                      (const MethodInfo_334BC94 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
}


void __fastcall ServantWaveTurnEventOwner__ImportSaveData(
        ServantWaveTurnEventOwner_o *this,
        ServantWaveTurnEventOwner_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *servantWaveTurnEventDict; // x0
  const MethodInfo *v9; // x2
  struct ServantWaveTurnEvent_SaveData_array *WaveTurnEventArray; // x22
  int max_length; // w8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x23
  unsigned int v13; // w24
  ServantWaveTurnEvent_SaveData_o *v14; // x20
  ServantWaveTurnEventOwner_c *v15; // x0
  int32_t TypeValue; // w21

  if ( (byte_4B05073 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_BasicHelper_GetValue_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___,
      saveData);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___Clear__, v5);
    sub_1BC3008(&ServantWaveTurnEventOwner_TypeInfo, v6);
    byte_4B05073 = 1;
  }
  if ( saveData
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)saveData->fields.WaveTurnEventArray, 0LL) )
  {
    servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
    if ( !servantWaveTurnEventDict )
      goto LABEL_21;
    System_Collections_Generic_Dictionary_long__object___Clear(
      servantWaveTurnEventDict,
      (const MethodInfo_334BEBC *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___Clear__);
    WaveTurnEventArray = saveData->fields.WaveTurnEventArray;
    if ( !WaveTurnEventArray )
      goto LABEL_21;
    max_length = WaveTurnEventArray->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0LL;
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          sub_1BC326C(servantWaveTurnEventDict, v7, v9);
        v14 = WaveTurnEventArray->m_Items[v13];
        if ( !v14 )
          break;
        v15 = ServantWaveTurnEventOwner_TypeInfo;
        TypeValue = v14->fields.TypeValue;
        if ( !ServantWaveTurnEventOwner_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner_TypeInfo);
          v15 = ServantWaveTurnEventOwner_TypeInfo;
        }
        servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BasicHelper__GetValue_Int32Enum__object_(
                                                                                              (System_Collections_Generic_Dictionary_K__V__o *)v15->static_fields->WaveTurnEventTypeToFactoryMap,
                                                                                              TypeValue,
                                                                                              0LL,
                                                                                              (const MethodInfo_2FEFE14 *)Method_BasicHelper_GetValue_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___);
        if ( servantWaveTurnEventDict )
          v12 = servantWaveTurnEventDict;
        if ( servantWaveTurnEventDict )
        {
          if ( !v12 )
            break;
          servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)((__int64 (__fastcall *)(struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *, ServantWaveTurnEvent_SaveData_o *, _QWORD))v12->fields._entries)(
                                                                                                v12->fields._values,
                                                                                                v14,
                                                                                                *(_QWORD *)&v12->fields._freeCount);
          if ( servantWaveTurnEventDict )
            ServantWaveTurnEventOwner__Add(this, (ServantWaveTurnEvent_o *)servantWaveTurnEventDict, v9);
        }
        max_length = WaveTurnEventArray->max_length;
        if ( (int)++v13 >= max_length )
          return;
      }
LABEL_21:
      sub_1BC3264(servantWaveTurnEventDict, v7);
    }
  }
}


void __fastcall ServantWaveTurnEventOwner_SaveData___ctor(
        ServantWaveTurnEventOwner_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor(
        ServantWaveTurnEventOwner_WaveTurnEventFactory_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A108F8;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1BC30C0(v6);
        v12 = sub_1BC357C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_1A109F4;
          else
            v9 = (Il2CppObject *)sub_1A109B8;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_1A10934;
        }
        else
        {
          v9 = (Il2CppObject *)sub_1A10908;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_1A108D8;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A10888;
}


System_IAsyncResult_o *__fastcall ServantWaveTurnEventOwner_WaveTurnEventFactory__BeginInvoke(
        ServantWaveTurnEventOwner_WaveTurnEventFactory_o *this,
        ServantWaveTurnEvent_SaveData_o *saveData,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  ServantWaveTurnEvent_SaveData_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = saveData;
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, &v6, callback, object);
}


ServantWaveTurnEvent_o *__fastcall ServantWaveTurnEventOwner_WaveTurnEventFactory__EndInvoke(
        ServantWaveTurnEventOwner_WaveTurnEventFactory_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (ServantWaveTurnEvent_o *)sub_1BC2FC0(result, 0LL, method);
}


ServantWaveTurnEvent_o *__fastcall ServantWaveTurnEventOwner_WaveTurnEventFactory__Invoke(
        ServantWaveTurnEventOwner_WaveTurnEventFactory_o *this,
        ServantWaveTurnEvent_SaveData_o *saveData,
        const MethodInfo *method)
{
  return (ServantWaveTurnEvent_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, ServantWaveTurnEvent_SaveData_o *, _QWORD))this->fields.m_target)(
                                     this->fields.original_method_info,
                                     saveData,
                                     *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ServantWaveTurnEventOwner__EventEnumerator_d__4___ctor(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall ServantWaveTurnEventOwner__EventEnumerator_d__4__MoveNext(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  ServantWaveTurnEventOwner_o *_4__this; // x0
  System_Collections_Generic_List_object__o *WaveTurnEventDictValue; // x0
  __int64 v9; // x1
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v10; // x9
  __int128 v11; // q0
  struct System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__o *p__7__wrap1; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool v18; // w8
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v19; // x0
  struct ServantWaveTurnEvent_o *current; // x1
  bool result; // w0
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v22; // x8
  System_Collections_Generic_List_Enumerator_T__o v23[2]; // [xsp+8h] [xbp-68h] BYREF
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o **v24; // [xsp+48h] [xbp-28h]
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v25; // [xsp+58h] [xbp-18h] BYREF

  v25 = this;
  v3 = this;
  if ( (byte_4B05078 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__, v5);
    byte_4B05078 = 1;
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
      sub_1BC3264(0LL, method);
    WaveTurnEventDictValue = (System_Collections_Generic_List_object__o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                                            _4__this,
                                                                            v3->fields.wave,
                                                                            v3->fields.turn,
                                                                            v2);
    if ( !WaveTurnEventDictValue )
      sub_1BC3264(0LL, v9);
    System_Collections_Generic_List_object___GetEnumerator(
      v23,
      WaveTurnEventDictValue,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    v10 = v25;
    v11 = *(_OWORD *)&v23[0].fields._list;
    p__7__wrap1 = &v25->fields.__7__wrap1;
    v23[1] = v23[0];
    v25->fields.__7__wrap1.fields._current = (struct ServantWaveTurnEvent_o *)v23[0].fields._current;
    *(_OWORD *)&v10->fields.__7__wrap1.fields._list = v11;
    sub_1BC2FAC((CGThumbnailListItem_o *)p__7__wrap1, 0, v13, v14);
    v3 = v25;
  }
  v3->fields.__1__state = -3;
  v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v3->fields.__7__wrap1,
          (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__);
  v19 = v25;
  if ( v18 )
  {
    current = v25->fields.__7__wrap1.fields._current;
    v25->fields.__2__current = current;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v19->fields.__2__current, (int32_t)current, v16, v17);
    result = 1;
    v25->fields.__1__state = 1;
  }
  else
  {
    ServantWaveTurnEventOwner__EventEnumerator_d__4____m__Finally1(v25, v15);
    v22 = v25;
    result = 0;
    v25->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v22->fields.__7__wrap1.fields._index = 0LL;
    v22->fields.__7__wrap1.fields._current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *__fastcall ServantWaveTurnEventOwner__EventEnumerator_d__4__System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__GetEnumerator(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v4; // x20
  struct ServantWaveTurnEventOwner_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *result; // x0

  if ( (byte_4B0507A & 1) == 0 )
  {
    sub_1BC3008(&ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo, method);
    byte_4B0507A = 1;
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
    v4 = (ServantWaveTurnEventOwner__EventEnumerator_d__4_o *)sub_1BC3254(ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7);
  }
  result = (System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *)v4;
  v4->fields.wave = this->fields.__3__wave;
  v4->fields.turn = this->fields.__3__turn;
  return result;
}


ServantWaveTurnEvent_o *__fastcall ServantWaveTurnEventOwner__EventEnumerator_d__4__System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__get_Current(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantWaveTurnEventOwner__EventEnumerator_d__4__System_Collections_IEnumerator_Reset(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ServantWaveTurnEventOwner__EventEnumerator_d__4_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall ServantWaveTurnEventOwner__EventEnumerator_d__4__System_Collections_IEnumerator_get_Current(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall ServantWaveTurnEventOwner__EventEnumerator_d__4__System_IDisposable_Dispose(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    ServantWaveTurnEventOwner__EventEnumerator_d__4____m__Finally1(this, method);
}


void __fastcall ServantWaveTurnEventOwner__EventEnumerator_d__4____m__Finally1(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B05079 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__, method);
    byte_4B05079 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
}


void __fastcall ServantWaveTurnEventOwner___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B05076 & 1) == 0 )
  {
    sub_1BC3008(&ServantWaveTurnEventOwner___c_TypeInfo, v1);
    byte_4B05076 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ServantWaveTurnEventOwner___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantWaveTurnEventOwner___c_TypeInfo->static_fields->__9 = (struct ServantWaveTurnEventOwner___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)ServantWaveTurnEventOwner___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantWaveTurnEventOwner___c___ctor(ServantWaveTurnEventOwner___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_ServantWaveTurnEvent_SaveData__o *__fastcall ServantWaveTurnEventOwner___c___ExportSaveData_b__8_0(
        ServantWaveTurnEventOwner___c_o *this,
        System_Collections_Generic_List_ServantWaveTurnEvent__o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantWaveTurnEventOwner___c_c *v7; // x0
  System_Func_object__object__o *_9__8_1; // x20
  Il2CppObject *v9; // x21
  struct ServantWaveTurnEventOwner___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B05077 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData___, x);
    sub_1BC3008(&System_Func_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData__TypeInfo, v4);
    sub_1BC3008(&Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_1__, v5);
    sub_1BC3008(&ServantWaveTurnEventOwner___c_TypeInfo, v6);
    byte_4B05077 = 1;
  }
  v7 = ServantWaveTurnEventOwner___c_TypeInfo;
  if ( !ServantWaveTurnEventOwner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner___c_TypeInfo);
    v7 = ServantWaveTurnEventOwner___c_TypeInfo;
  }
  _9__8_1 = (System_Func_object__object__o *)v7->static_fields->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ServantWaveTurnEventOwner___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__8_1 = (System_Func_object__object__o *)sub_1BC3254(System_Func_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData__TypeInfo);
    System_Func_object__object____ctor(_9__8_1, v9, Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_1__, 0LL);
    static_fields = ServantWaveTurnEventOwner___c_TypeInfo->static_fields;
    static_fields->__9__8_1 = (struct System_Func_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData__o *)_9__8_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__8_1, (int32_t)_9__8_1, v11, v12);
  }
  return (System_Collections_Generic_IEnumerable_ServantWaveTurnEvent_SaveData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                                      (System_Func_TSource__TResult__o *)_9__8_1,
                                                                                      (const MethodInfo_3036320 *)Method_System_Linq_Enumerable_Select_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData___);
}


ServantWaveTurnEvent_SaveData_o *__fastcall ServantWaveTurnEventOwner___c___ExportSaveData_b__8_1(
        ServantWaveTurnEventOwner___c_o *this,
        ServantWaveTurnEvent_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1BC3264(this, 0LL);
  return (ServantWaveTurnEvent_SaveData_o *)((__int64 (__fastcall *)(ServantWaveTurnEvent_o *, void *))y->klass->vtable._5_ExportSaveData.method)(
                                              y,
                                              y->klass[1]._1.image);
}