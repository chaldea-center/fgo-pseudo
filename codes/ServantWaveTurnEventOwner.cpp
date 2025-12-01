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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CCA778 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__set_Item__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__TypeInfo);
    sub_1C713B0(&Method_MoveToSubMemberWaveTurnEvent_CreateBySaveData__);
    sub_1C713B0(&ServantWaveTurnEventOwner_TypeInfo);
    sub_1C713B0(&Method_UseNoblePhantasmWaveTurnEvent_CreateBySaveData__);
    sub_1C713B0(&ServantWaveTurnEventOwner_WaveTurnEventFactory_TypeInfo);
    byte_4CCA778 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C715FC(System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3494CFC *)Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor__);
  v2 = (ServantWaveTurnEventOwner_WaveTurnEventFactory_o *)sub_1C715FC(ServantWaveTurnEventOwner_WaveTurnEventFactory_TypeInfo);
  ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor(
    v2,
    0,
    Method_MoveToSubMemberWaveTurnEvent_CreateBySaveData__,
    v3);
  if ( !v1 )
    sub_1C71608(v4, v5);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    v1,
    1,
    (Il2CppObject *)v2,
    (const MethodInfo_34956BC *)Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__set_Item__);
  v6 = (ServantWaveTurnEventOwner_WaveTurnEventFactory_o *)sub_1C715FC(ServantWaveTurnEventOwner_WaveTurnEventFactory_TypeInfo);
  ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor(
    v6,
    0,
    Method_UseNoblePhantasmWaveTurnEvent_CreateBySaveData__,
    v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    v1,
    2,
    (Il2CppObject *)v6,
    (const MethodInfo_34956BC *)Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__set_Item__);
  ServantWaveTurnEventOwner_TypeInfo->static_fields->WaveTurnEventTypeToFactoryMap = (struct System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ServantWaveTurnEventOwner_TypeInfo->static_fields,
    (int32_t)v1,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void ServantWaveTurnEventOwner___ctor(ServantWaveTurnEventOwner_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCA777 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo);
    byte_4CCA777 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C715FC(System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v3,
    (const MethodInfo_34A6B9C *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
  this->fields.servantWaveTurnEventDict = (struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *servantWaveTurnEventDict; // x8
  _QWORD *v13; // x9
  __int64 klass_low; // x10
  System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___c **v15; // x8

  v5 = this;
  if ( (byte_4CCA773 & 1) == 0 )
  {
    this = (ServantWaveTurnEventOwner_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__);
    byte_4CCA773 = 1;
  }
  if ( !ev
    || (this = (ServantWaveTurnEventOwner_o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                v5,
                                                ev->fields._Wave_k__BackingField,
                                                ev->fields._Turn_k__BackingField,
                                                v3)) == 0
    || (servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict,
        v13 = Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__,
        ++HIDWORD(this[1].klass),
        !servantWaveTurnEventDict) )
  {
    sub_1C71608(this, ev);
  }
  klass_low = SLODWORD(this[1].klass);
  if ( (unsigned int)klass_low >= LODWORD(servantWaveTurnEventDict->fields._entries) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)ev,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &servantWaveTurnEventDict->klass + klass_low;
    LODWORD(this[1].klass) = klass_low + 1;
    v15[4] = (System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___c *)ev;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)ev, v6, v7, v8, v9, v10, v11);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CCA772 & 1) == 0 )
  {
    sub_1C713B0(&ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo);
    byte_4CCA772 = 1;
  }
  v7 = sub_1C715FC(ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v7 + 40) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4CCA775 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Values__);
    sub_1C713B0(&Method_System_Linq_Enumerable_SelectMany_List_ServantWaveTurnEvent___ServantWaveTurnEvent_SaveData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_ServantWaveTurnEvent_SaveData___);
    sub_1C713B0(&System_Func_List_ServantWaveTurnEvent___IEnumerable_ServantWaveTurnEvent_SaveData___TypeInfo);
    sub_1C713B0(&ServantWaveTurnEventOwner_SaveData_TypeInfo);
    sub_1C713B0(&Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_0__);
    sub_1C713B0(&ServantWaveTurnEventOwner___c_TypeInfo);
    byte_4CCA775 = 1;
  }
  v3 = sub_1C715FC(ServantWaveTurnEventOwner_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_12;
  Values = System_Collections_Generic_Dictionary_long__object___get_Values(
             servantWaveTurnEventDict,
             (const MethodInfo_34A737C *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Values__);
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
    _9__8_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_List_ServantWaveTurnEvent___IEnumerable_ServantWaveTurnEvent_SaveData___TypeInfo);
    System_Func_object__object____ctor(_9__8_0, v10, Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_0__, 0);
    static_fields = ServantWaveTurnEventOwner___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_List_ServantWaveTurnEvent___IEnumerable_ServantWaveTurnEvent_SaveData___o *)_9__8_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v8,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__8_0,
                                                               (const MethodInfo_31846A4 *)Method_System_Linq_Enumerable_SelectMany_List_ServantWaveTurnEvent___ServantWaveTurnEvent_SaveData___);
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                        v18,
                                                                                        (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_ServantWaveTurnEvent_SaveData___);
  if ( !v3 )
LABEL_12:
    sub_1C71608(servantWaveTurnEventDict, v4);
  *(_QWORD *)(v3 + 16) = servantWaveTurnEventDict;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)servantWaveTurnEventDict, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_4CCA774 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo);
    sub_1C713B0(&ServantWaveTurnEventOwner_TypeInfo);
    byte_4CCA774 = 1;
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
          (const MethodInfo_34A7760 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__) )
  {
    v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
    v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    if ( !v9 )
      goto LABEL_11;
    System_Collections_Generic_Dictionary_long__object___set_Item(
      v9,
      v8,
      (Il2CppObject *)v10,
      (const MethodInfo_34A7558 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
  }
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
LABEL_11:
    sub_1C71608(servantWaveTurnEventDict, *(_QWORD *)&wave);
  return (System_Collections_Generic_List_ServantWaveTurnEvent__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                                      servantWaveTurnEventDict,
                                                                      v8,
                                                                      (const MethodInfo_34A74CC *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
}


void ServantWaveTurnEventOwner__ImportSaveData(
        ServantWaveTurnEventOwner_o *this,
        ServantWaveTurnEventOwner_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *servantWaveTurnEventDict; // x0
  struct ServantWaveTurnEvent_SaveData_array *WaveTurnEventArray; // x22
  int max_length; // w8
  unsigned int v9; // w24
  ServantWaveTurnEvent_SaveData_o *v10; // x20
  ServantWaveTurnEventOwner_c *v11; // x0
  int32_t TypeValue; // w21
  const MethodInfo *v13; // x2

  if ( (byte_4CCA776 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_GetValue_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___Clear__);
    sub_1C713B0(&ServantWaveTurnEventOwner_TypeInfo);
    byte_4CCA776 = 1;
  }
  if ( saveData
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)saveData->fields.WaveTurnEventArray, 0) )
  {
    servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
    if ( !servantWaveTurnEventDict )
      goto LABEL_18;
    System_Collections_Generic_Dictionary_long__object___Clear(
      servantWaveTurnEventDict,
      (const MethodInfo_34A76F4 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___Clear__);
    WaveTurnEventArray = saveData->fields.WaveTurnEventArray;
    if ( !WaveTurnEventArray )
      goto LABEL_18;
    max_length = WaveTurnEventArray->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
          sub_1C71610(servantWaveTurnEventDict);
        v10 = WaveTurnEventArray->m_Items[v9];
        if ( !v10 )
          break;
        v11 = ServantWaveTurnEventOwner_TypeInfo;
        TypeValue = v10->fields.TypeValue;
        if ( !ServantWaveTurnEventOwner_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner_TypeInfo);
          v11 = ServantWaveTurnEventOwner_TypeInfo;
        }
        servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BasicHelper__GetValue_Int32Enum__object_(
                                                                                              (System_Collections_Generic_Dictionary_K__V__o *)v11->static_fields->WaveTurnEventTypeToFactoryMap,
                                                                                              TypeValue,
                                                                                              0,
                                                                                              (const MethodInfo_3138D0C *)Method_BasicHelper_GetValue_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___);
        if ( servantWaveTurnEventDict )
        {
          servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)((__int64 (__fastcall *)(struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *, ServantWaveTurnEvent_SaveData_o *, _QWORD))servantWaveTurnEventDict->fields._entries)(
                                                                                                servantWaveTurnEventDict->fields._values,
                                                                                                v10,
                                                                                                *(_QWORD *)&servantWaveTurnEventDict->fields._freeCount);
          if ( servantWaveTurnEventDict )
            ServantWaveTurnEventOwner__Add(this, (ServantWaveTurnEvent_o *)servantWaveTurnEventDict, v13);
        }
        max_length = WaveTurnEventArray->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_18:
      sub_1C71608(servantWaveTurnEventDict, v5);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AAA838;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_1C71468(method);
        v16 = sub_1C719FC(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1AAA934;
          else
            v13 = sub_1AAA8F8;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1AAA874;
        }
        else
        {
          v13 = sub_1AAA848;
        }
      }
      else
      {
        v13 = sub_1AAA818;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AAA7C8;
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
  return (System_IAsyncResult_o *)sub_1C71364(this, &v6, callback, object);
}


ServantWaveTurnEvent_o *ServantWaveTurnEventOwner_WaveTurnEventFactory__EndInvoke(
        ServantWaveTurnEventOwner_WaveTurnEventFactory_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (ServantWaveTurnEvent_o *)sub_1C71368(result, 0, method);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  bool v24; // w8
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v25; // x0
  struct ServantWaveTurnEvent_o *current; // x1
  bool result; // w0
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v28; // x8
  System_Collections_Generic_List_Enumerator_T__o v29[2]; // [xsp+8h] [xbp-68h] BYREF
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o **v30; // [xsp+48h] [xbp-28h]
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v31; // [xsp+58h] [xbp-18h] BYREF

  v31 = this;
  v3 = this;
  if ( (byte_4CCA77B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    byte_4CCA77B = 1;
  }
  v30 = &v31;
  _1__state = v3->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C71608(0, method);
    WaveTurnEventDictValue = (System_Collections_Generic_List_object__o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                                            _4__this,
                                                                            v3->fields.wave,
                                                                            v3->fields.turn,
                                                                            v2);
    if ( !WaveTurnEventDictValue )
      sub_1C71608(0, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      v29,
      WaveTurnEventDictValue,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    v8 = v31;
    v9 = *(_OWORD *)&v29[0].fields._list;
    p__7__wrap1 = &v31->fields.__7__wrap1;
    v29[1] = v29[0];
    v31->fields.__7__wrap1.fields._current = (struct ServantWaveTurnEvent_o *)v29[0].fields._current;
    *(_OWORD *)&v8->fields.__7__wrap1.fields._list = v9;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p__7__wrap1, 0, v11, v12, v13, v14, v15, v16);
    v3 = v31;
  }
  v3->fields.__1__state = -3;
  v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v3->fields.__7__wrap1,
          (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__);
  v25 = v31;
  if ( v24 )
  {
    current = v31->fields.__7__wrap1.fields._current;
    v31->fields.__2__current = current;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&v25->fields.__2__current,
      (int32_t)current,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    result = 1;
    v31->fields.__1__state = 1;
  }
  else
  {
    ServantWaveTurnEventOwner__EventEnumerator_d__4____m__Finally1(v31, v17);
    v28 = v31;
    result = 0;
    v31->fields.__7__wrap1.fields._list = 0;
    *(_QWORD *)&v28->fields.__7__wrap1.fields._index = 0;
    v28->fields.__7__wrap1.fields._current = 0;
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *result; // x0

  if ( (byte_4CCA77D & 1) == 0 )
  {
    sub_1C713B0(&ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo);
    byte_4CCA77D = 1;
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
    v4 = (ServantWaveTurnEventOwner__EventEnumerator_d__4_o *)sub_1C715FC(ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ServantWaveTurnEventOwner__EventEnumerator_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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
  if ( (byte_4CCA77C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
    byte_4CCA77C = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
}


void ServantWaveTurnEventOwner___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCA779 & 1) == 0 )
  {
    sub_1C713B0(&ServantWaveTurnEventOwner___c_TypeInfo);
    byte_4CCA779 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ServantWaveTurnEventOwner___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantWaveTurnEventOwner___c_TypeInfo->static_fields->__9 = (struct ServantWaveTurnEventOwner___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ServantWaveTurnEventOwner___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CCA77A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData___);
    sub_1C713B0(&System_Func_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData__TypeInfo);
    sub_1C713B0(&Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_1__);
    sub_1C713B0(&ServantWaveTurnEventOwner___c_TypeInfo);
    byte_4CCA77A = 1;
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
    _9__8_1 = (System_Func_object__object__o *)sub_1C715FC(System_Func_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData__TypeInfo);
    System_Func_object__object____ctor(_9__8_1, v6, Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_1__, 0);
    static_fields = ServantWaveTurnEventOwner___c_TypeInfo->static_fields;
    static_fields->__9__8_1 = (struct System_Func_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData__o *)_9__8_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_1, (int32_t)_9__8_1, v8, v9, v10, v11, v12, v13);
  }
  return (System_Collections_Generic_IEnumerable_ServantWaveTurnEvent_SaveData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                                      (System_Func_TSource__TResult__o *)_9__8_1,
                                                                                      (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData___);
}


ServantWaveTurnEvent_SaveData_o *ServantWaveTurnEventOwner___c___ExportSaveData_b__8_1(
        ServantWaveTurnEventOwner___c_o *this,
        ServantWaveTurnEvent_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C71608(this, 0);
  return (ServantWaveTurnEvent_SaveData_o *)((__int64 (__fastcall *)(ServantWaveTurnEvent_o *, const MethodInfo *))y->klass->vtable._5_ExportSaveData.methodPtr)(
                                              y,
                                              y->klass->vtable._5_ExportSaveData.method);
}