void ServantWaveTurnEventOwner___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  ServantWaveTurnEventOwner_WaveTurnEventFactory_o *v2; // x20
  const MethodInfo *v3; // x3
  __int64 v4; // x0
  __int64 v5; // x1
  ServantWaveTurnEventOwner_WaveTurnEventFactory_o *v6; // x20
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2A45B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__TypeInfo);
    sub_1C2D490(&Method_MoveToSubMemberWaveTurnEvent_CreateBySaveData__);
    sub_1C2D490(&ServantWaveTurnEventOwner_TypeInfo);
    sub_1C2D490(&Method_UseNoblePhantasmWaveTurnEvent_CreateBySaveData__);
    sub_1C2D490(&ServantWaveTurnEventOwner_WaveTurnEventFactory_TypeInfo);
    byte_4C2A45B = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3413944 *)Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor__);
  v2 = (ServantWaveTurnEventOwner_WaveTurnEventFactory_o *)sub_1C2D6DC(ServantWaveTurnEventOwner_WaveTurnEventFactory_TypeInfo);
  ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor(
    v2,
    0,
    Method_MoveToSubMemberWaveTurnEvent_CreateBySaveData__,
    v3);
  if ( !v1 )
    sub_1C2D6EC(v4, v5);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    v1,
    1,
    (Il2CppObject *)v2,
    (const MethodInfo_3414304 *)Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__set_Item__);
  v6 = (ServantWaveTurnEventOwner_WaveTurnEventFactory_o *)sub_1C2D6DC(ServantWaveTurnEventOwner_WaveTurnEventFactory_TypeInfo);
  ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor(
    v6,
    0,
    Method_UseNoblePhantasmWaveTurnEvent_CreateBySaveData__,
    v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    v1,
    2,
    (Il2CppObject *)v6,
    (const MethodInfo_3414304 *)Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__set_Item__);
  ServantWaveTurnEventOwner_TypeInfo->static_fields->WaveTurnEventTypeToFactoryMap = (struct System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ServantWaveTurnEventOwner_TypeInfo->static_fields, (int32_t)v1, v8, v9);
}


void ServantWaveTurnEventOwner___ctor(ServantWaveTurnEventOwner_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2A45A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo);
    byte_4C2A45A = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v3,
    (const MethodInfo_3425714 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
  this->fields.servantWaveTurnEventDict = (struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantWaveTurnEventOwner__Add(
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
  if ( (byte_4C2A456 & 1) == 0 )
  {
    this = (ServantWaveTurnEventOwner_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__);
    byte_4C2A456 = 1;
  }
  if ( !ev
    || (this = (ServantWaveTurnEventOwner_o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                v5,
                                                ev->fields._Wave_k__BackingField,
                                                ev->fields._Turn_k__BackingField,
                                                v3)) == 0
    || (servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict,
        v9 = Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__,
        ++HIDWORD(this[1].klass),
        !servantWaveTurnEventDict) )
  {
    sub_1C2D6EC(this, ev);
  }
  klass_low = SLODWORD(this[1].klass);
  if ( (unsigned int)klass_low >= LODWORD(servantWaveTurnEventDict->fields._entries) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)ev,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &servantWaveTurnEventDict->klass + klass_low;
    LODWORD(this[1].klass) = klass_low + 1;
    v11[4] = (System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___c *)ev;
    sub_1C2D434((CGThumbnailListItem_o *)(v11 + 4), (int32_t)ev, v6, v7);
  }
}


int64_t ServantWaveTurnEventOwner__CalcWaveTurnVal(int32_t wave, int32_t turn, const MethodInfo *method)
{
  return wave + 100 * turn;
}


System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__o *ServantWaveTurnEventOwner__EventEnumerator(
        ServantWaveTurnEventOwner_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2A455 & 1) == 0 )
  {
    sub_1C2D490(&ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo);
    byte_4C2A455 = 1;
  }
  v7 = sub_1C2D6DC(ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v7 + 40) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 52) = wave;
  *(_DWORD *)(v7 + 60) = turn;
  return (System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__o *)v7;
}


ServantWaveTurnEventOwner_SaveData_o *ServantWaveTurnEventOwner__ExportSaveData(
        ServantWaveTurnEventOwner_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *servantWaveTurnEventDict; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  ServantWaveTurnEventOwner___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  System_Func_object__object__o *_9__8_0; // x21
  Il2CppObject *v10; // x22
  struct ServantWaveTurnEventOwner___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C2A458 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Values__);
    sub_1C2D490(&Method_System_Linq_Enumerable_SelectMany_List_ServantWaveTurnEvent___ServantWaveTurnEvent_SaveData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_ServantWaveTurnEvent_SaveData___);
    sub_1C2D490(&System_Func_List_ServantWaveTurnEvent___IEnumerable_ServantWaveTurnEvent_SaveData___TypeInfo);
    sub_1C2D490(&ServantWaveTurnEventOwner_SaveData_TypeInfo);
    sub_1C2D490(&Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_0__);
    sub_1C2D490(&ServantWaveTurnEventOwner___c_TypeInfo);
    byte_4C2A458 = 1;
  }
  v3 = sub_1C2D6DC(ServantWaveTurnEventOwner_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_12;
  Values = System_Collections_Generic_Dictionary_long__object___get_Values(
             servantWaveTurnEventDict,
             (const MethodInfo_3425EF4 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Values__);
  v7 = ServantWaveTurnEventOwner___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !ServantWaveTurnEventOwner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner___c_TypeInfo);
    v7 = ServantWaveTurnEventOwner___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__object__o *)v7->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ServantWaveTurnEventOwner___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__8_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_List_ServantWaveTurnEvent___IEnumerable_ServantWaveTurnEvent_SaveData___TypeInfo);
    System_Func_object__object____ctor(_9__8_0, v10, Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_0__, 0);
    static_fields = ServantWaveTurnEventOwner___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_List_ServantWaveTurnEvent___IEnumerable_ServantWaveTurnEvent_SaveData___o *)_9__8_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v8,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__8_0,
                                                               (const MethodInfo_3107E0C *)Method_System_Linq_Enumerable_SelectMany_List_ServantWaveTurnEvent___ServantWaveTurnEvent_SaveData___);
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                        v14,
                                                                                        (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_ServantWaveTurnEvent_SaveData___);
  if ( !v3 )
LABEL_12:
    sub_1C2D6EC(servantWaveTurnEventDict, v4);
  *(_QWORD *)(v3 + 16) = servantWaveTurnEventDict;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)servantWaveTurnEventDict, v15, v16);
  return (ServantWaveTurnEventOwner_SaveData_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantWaveTurnEvent__o *ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
        ServantWaveTurnEventOwner_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *servantWaveTurnEventDict; // x0
  int64_t v8; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x21
  System_Collections_Generic_List_object__o *v10; // x22

  if ( (byte_4C2A457 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo);
    sub_1C2D490(&ServantWaveTurnEventOwner_TypeInfo);
    byte_4C2A457 = 1;
  }
  if ( !ServantWaveTurnEventOwner_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner_TypeInfo);
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_11;
  v8 = wave + 100 * turn;
  if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
          servantWaveTurnEventDict,
          v8,
          (const MethodInfo_34262D8 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__) )
  {
    v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
    v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    if ( !v9 )
      goto LABEL_11;
    System_Collections_Generic_Dictionary_long__object___set_Item(
      v9,
      v8,
      (Il2CppObject *)v10,
      (const MethodInfo_34260D0 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
  }
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
LABEL_11:
    sub_1C2D6EC(servantWaveTurnEventDict, *(_QWORD *)&wave);
  return (System_Collections_Generic_List_ServantWaveTurnEvent__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                                      servantWaveTurnEventDict,
                                                                      v8,
                                                                      (const MethodInfo_3426044 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
}


void ServantWaveTurnEventOwner__ImportSaveData(
        ServantWaveTurnEventOwner_o *this,
        ServantWaveTurnEventOwner_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *servantWaveTurnEventDict; // x0
  const MethodInfo *v7; // x2
  struct ServantWaveTurnEvent_SaveData_array *WaveTurnEventArray; // x22
  int max_length; // w8
  unsigned int v10; // w24
  ServantWaveTurnEvent_SaveData_o *v11; // x20
  ServantWaveTurnEventOwner_c *v12; // x0
  int32_t TypeValue; // w21

  if ( (byte_4C2A459 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___Clear__);
    sub_1C2D490(&ServantWaveTurnEventOwner_TypeInfo);
    byte_4C2A459 = 1;
  }
  if ( saveData
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)saveData->fields.WaveTurnEventArray, 0) )
  {
    servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
    if ( !servantWaveTurnEventDict )
      goto LABEL_18;
    System_Collections_Generic_Dictionary_long__object___Clear(
      servantWaveTurnEventDict,
      (const MethodInfo_342626C *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___Clear__);
    WaveTurnEventArray = saveData->fields.WaveTurnEventArray;
    if ( !WaveTurnEventArray )
      goto LABEL_18;
    max_length = WaveTurnEventArray->max_length;
    if ( max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
          sub_1C2D6F4(servantWaveTurnEventDict, v5, v7);
        v11 = WaveTurnEventArray->m_Items[v10];
        if ( !v11 )
          break;
        v12 = ServantWaveTurnEventOwner_TypeInfo;
        TypeValue = v11->fields.TypeValue;
        if ( !ServantWaveTurnEventOwner_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner_TypeInfo);
          v12 = ServantWaveTurnEventOwner_TypeInfo;
        }
        servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BasicHelper__GetValue_Int32Enum__object_(
                                                                                              (System_Collections_Generic_Dictionary_K__V__o *)v12->static_fields->WaveTurnEventTypeToFactoryMap,
                                                                                              TypeValue,
                                                                                              0,
                                                                                              (const MethodInfo_30BC828 *)Method_BasicHelper_GetValue_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___);
        if ( servantWaveTurnEventDict )
        {
          servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)((__int64 (__fastcall *)(struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *, ServantWaveTurnEvent_SaveData_o *, _QWORD))servantWaveTurnEventDict->fields._entries)(
                                                                                                servantWaveTurnEventDict->fields._values,
                                                                                                v11,
                                                                                                *(_QWORD *)&servantWaveTurnEventDict->fields._freeCount);
          if ( servantWaveTurnEventDict )
            ServantWaveTurnEventOwner__Add(this, (ServantWaveTurnEvent_o *)servantWaveTurnEventDict, v7);
        }
        max_length = WaveTurnEventArray->max_length;
        if ( (int)++v10 >= max_length )
          return;
      }
LABEL_18:
      sub_1C2D6EC(servantWaveTurnEventDict, v5);
    }
  }
}


void ServantWaveTurnEventOwner_SaveData___ctor(ServantWaveTurnEventOwner_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor(
        ServantWaveTurnEventOwner_WaveTurnEventFactory_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A750CC;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C2D548(method);
        v12 = sub_1C2DA04(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A751C8;
          else
            v9 = sub_1A7518C;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A75108;
        }
        else
        {
          v9 = sub_1A750DC;
        }
      }
      else
      {
        v9 = sub_1A750AC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A7505C;
}


System_IAsyncResult_o *ServantWaveTurnEventOwner_WaveTurnEventFactory__BeginInvoke(
        ServantWaveTurnEventOwner_WaveTurnEventFactory_o *this,
        ServantWaveTurnEvent_SaveData_o *saveData,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  ServantWaveTurnEvent_SaveData_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = saveData;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v6, callback, object);
}


ServantWaveTurnEvent_o *ServantWaveTurnEventOwner_WaveTurnEventFactory__EndInvoke(
        ServantWaveTurnEventOwner_WaveTurnEventFactory_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (ServantWaveTurnEvent_o *)sub_1C2D448(result, 0, method);
}


ServantWaveTurnEvent_o *ServantWaveTurnEventOwner_WaveTurnEventFactory__Invoke(
        ServantWaveTurnEventOwner_WaveTurnEventFactory_o *this,
        ServantWaveTurnEvent_SaveData_o *saveData,
        const MethodInfo *method)
{
  return (ServantWaveTurnEvent_o *)((__int64 (__fastcall *)(intptr_t, ServantWaveTurnEvent_SaveData_o *, intptr_t))this->fields.invoke_impl)(
                                     this->fields.method_code,
                                     saveData,
                                     this->fields.method);
}


void ServantWaveTurnEventOwner__EventEnumerator_d__4___ctor(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool ServantWaveTurnEventOwner__EventEnumerator_d__4__MoveNext(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v3; // x19
  int32_t _1__state; // w8
  ServantWaveTurnEventOwner_o *_4__this; // x0
  System_Collections_Generic_List_object__o *WaveTurnEventDictValue; // x0
  __int64 v7; // x1
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v8; // x9
  __int128 v9; // q0
  struct System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__o *p__7__wrap1; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  bool v16; // w8
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v17; // x0
  struct ServantWaveTurnEvent_o *current; // x1
  bool result; // w0
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v20; // x8
  System_Collections_Generic_List_Enumerator_T__o v21[2]; // [xsp+8h] [xbp-68h] BYREF
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o **v22; // [xsp+48h] [xbp-28h]
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v23; // [xsp+58h] [xbp-18h] BYREF

  v23 = this;
  v3 = this;
  if ( (byte_4C2A45E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    byte_4C2A45E = 1;
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
      sub_1C2D6EC(0, method);
    WaveTurnEventDictValue = (System_Collections_Generic_List_object__o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                                            _4__this,
                                                                            v3->fields.wave,
                                                                            v3->fields.turn,
                                                                            v2);
    if ( !WaveTurnEventDictValue )
      sub_1C2D6EC(0, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      v21,
      WaveTurnEventDictValue,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    v8 = v23;
    v9 = *(_OWORD *)&v21[0].fields._list;
    p__7__wrap1 = &v23->fields.__7__wrap1;
    v21[1] = v21[0];
    v23->fields.__7__wrap1.fields._current = (struct ServantWaveTurnEvent_o *)v21[0].fields._current;
    *(_OWORD *)&v8->fields.__7__wrap1.fields._list = v9;
    sub_1C2D434((CGThumbnailListItem_o *)p__7__wrap1, 0, v11, v12);
    v3 = v23;
  }
  v3->fields.__1__state = -3;
  v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v3->fields.__7__wrap1,
          (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__);
  v17 = v23;
  if ( v16 )
  {
    current = v23->fields.__7__wrap1.fields._current;
    v23->fields.__2__current = current;
    sub_1C2D434((CGThumbnailListItem_o *)&v17->fields.__2__current, (int32_t)current, v14, v15);
    result = 1;
    v23->fields.__1__state = 1;
  }
  else
  {
    ServantWaveTurnEventOwner__EventEnumerator_d__4____m__Finally1(v23, v13);
    v20 = v23;
    result = 0;
    v23->fields.__7__wrap1.fields._list = 0;
    *(_QWORD *)&v20->fields.__7__wrap1.fields._index = 0;
    v20->fields.__7__wrap1.fields._current = 0;
  }
  return result;
}


System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *ServantWaveTurnEventOwner__EventEnumerator_d__4__System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__GetEnumerator(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v4; // x20
  struct ServantWaveTurnEventOwner_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *result; // x0

  if ( (byte_4C2A460 & 1) == 0 )
  {
    sub_1C2D490(&ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo);
    byte_4C2A460 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (ServantWaveTurnEventOwner__EventEnumerator_d__4_o *)sub_1C2D6DC(ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7);
  }
  result = (System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *)v4;
  v4->fields.wave = this->fields.__3__wave;
  v4->fields.turn = this->fields.__3__turn;
  return result;
}


ServantWaveTurnEvent_o *ServantWaveTurnEventOwner__EventEnumerator_d__4__System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__get_Current(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantWaveTurnEventOwner__EventEnumerator_d__4__System_Collections_IEnumerator_Reset(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ServantWaveTurnEventOwner__EventEnumerator_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *ServantWaveTurnEventOwner__EventEnumerator_d__4__System_Collections_IEnumerator_get_Current(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void ServantWaveTurnEventOwner__EventEnumerator_d__4__System_IDisposable_Dispose(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    ServantWaveTurnEventOwner__EventEnumerator_d__4____m__Finally1(this, method);
}


void ServantWaveTurnEventOwner__EventEnumerator_d__4____m__Finally1(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2A45F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
    byte_4C2A45F = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
}


void ServantWaveTurnEventOwner___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2A45C & 1) == 0 )
  {
    sub_1C2D490(&ServantWaveTurnEventOwner___c_TypeInfo);
    byte_4C2A45C = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ServantWaveTurnEventOwner___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantWaveTurnEventOwner___c_TypeInfo->static_fields->__9 = (struct ServantWaveTurnEventOwner___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ServantWaveTurnEventOwner___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantWaveTurnEventOwner___c___ctor(ServantWaveTurnEventOwner___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_ServantWaveTurnEvent_SaveData__o *ServantWaveTurnEventOwner___c___ExportSaveData_b__8_0(
        ServantWaveTurnEventOwner___c_o *this,
        System_Collections_Generic_List_ServantWaveTurnEvent__o *x,
        const MethodInfo *method)
{
  ServantWaveTurnEventOwner___c_c *v4; // x0
  System_Func_object__object__o *_9__8_1; // x20
  Il2CppObject *v6; // x21
  struct ServantWaveTurnEventOwner___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2A45D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData___);
    sub_1C2D490(&System_Func_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData__TypeInfo);
    sub_1C2D490(&Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_1__);
    sub_1C2D490(&ServantWaveTurnEventOwner___c_TypeInfo);
    byte_4C2A45D = 1;
  }
  v4 = ServantWaveTurnEventOwner___c_TypeInfo;
  if ( !ServantWaveTurnEventOwner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner___c_TypeInfo);
    v4 = ServantWaveTurnEventOwner___c_TypeInfo;
  }
  _9__8_1 = (System_Func_object__object__o *)v4->static_fields->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ServantWaveTurnEventOwner___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__8_1 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData__TypeInfo);
    System_Func_object__object____ctor(_9__8_1, v6, Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_1__, 0);
    static_fields = ServantWaveTurnEventOwner___c_TypeInfo->static_fields;
    static_fields->__9__8_1 = (struct System_Func_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData__o *)_9__8_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__8_1, (int32_t)_9__8_1, v8, v9);
  }
  return (System_Collections_Generic_IEnumerable_ServantWaveTurnEvent_SaveData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                                      (System_Func_TSource__TResult__o *)_9__8_1,
                                                                                      (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData___);
}


ServantWaveTurnEvent_SaveData_o *ServantWaveTurnEventOwner___c___ExportSaveData_b__8_1(
        ServantWaveTurnEventOwner___c_o *this,
        ServantWaveTurnEvent_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C2D6EC(this, 0);
  return (ServantWaveTurnEvent_SaveData_o *)((__int64 (__fastcall *)(ServantWaveTurnEvent_o *, const MethodInfo *))y->klass->vtable._5_ExportSaveData.methodPtr)(
                                              y,
                                              y->klass->vtable._5_ExportSaveData.method);
}