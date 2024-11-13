void __fastcall ServantWaveTurnEventOwner___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ServantWaveTurnEventOwner_WaveTurnEventFactory_o *v20; // x20
  const MethodInfo *v21; // x3
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  ServantWaveTurnEventOwner_WaveTurnEventFactory_o *v27; // x20
  const MethodInfo *v28; // x3
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B18F31 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor__,
      v1,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__set_Item__,
      v4,
      v5);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__TypeInfo,
      v6,
      v7);
    sub_1BCA7E0(&Method_MoveToSubMemberWaveTurnEvent_CreateBySaveData__, v8, v9);
    sub_1BCA7E0(&ServantWaveTurnEventOwner_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UseNoblePhantasmWaveTurnEvent_CreateBySaveData__, v12, v13);
    sub_1BCA7E0(&ServantWaveTurnEventOwner_WaveTurnEventFactory_TypeInfo, v14, v15);
    byte_4B18F31 = 1;
  }
  v16 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__TypeInfo,
                                                                   v1,
                                                                   v2,
                                                                   v3);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v16,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor__);
  v20 = (ServantWaveTurnEventOwner_WaveTurnEventFactory_o *)sub_1BCAA2C(
                                                              ServantWaveTurnEventOwner_WaveTurnEventFactory_TypeInfo,
                                                              v17,
                                                              v18,
                                                              v19);
  ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor(
    v20,
    0LL,
    Method_MoveToSubMemberWaveTurnEvent_CreateBySaveData__,
    v21);
  if ( !v16 )
    sub_1BCAA3C(v22, v23);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    v16,
    1,
    (Il2CppObject *)v20,
    (const MethodInfo_3234FE4 *)Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__set_Item__);
  v27 = (ServantWaveTurnEventOwner_WaveTurnEventFactory_o *)sub_1BCAA2C(
                                                              ServantWaveTurnEventOwner_WaveTurnEventFactory_TypeInfo,
                                                              v24,
                                                              v25,
                                                              v26);
  ServantWaveTurnEventOwner_WaveTurnEventFactory___ctor(
    v27,
    0LL,
    Method_UseNoblePhantasmWaveTurnEvent_CreateBySaveData__,
    v28);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    v16,
    2,
    (Il2CppObject *)v27,
    (const MethodInfo_3234FE4 *)Method_System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__set_Item__);
  ServantWaveTurnEventOwner_TypeInfo->static_fields->WaveTurnEventTypeToFactoryMap = (struct System_Collections_Generic_Dictionary_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory__o *)v16;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantWaveTurnEventOwner_TypeInfo->static_fields,
    (int64_t)v16,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void __fastcall ServantWaveTurnEventOwner___ctor(ServantWaveTurnEventOwner_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18F30 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo, v5, v6);
    byte_4B18F30 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v7,
    (const MethodInfo_3243654 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
  this->fields.servantWaveTurnEventDict = (struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantWaveTurnEventOwner__Add(
        ServantWaveTurnEventOwner_o *this,
        ServantWaveTurnEvent_o *ev,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantWaveTurnEventOwner_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *servantWaveTurnEventDict; // x8
  _QWORD *v13; // x9
  __int64 klass_low; // x10
  System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___c **v15; // x8

  v5 = this;
  if ( (byte_4B18F2C & 1) == 0 )
  {
    this = (ServantWaveTurnEventOwner_o *)sub_1BCA7E0(
                                            &Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__,
                                            ev,
                                            method);
    byte_4B18F2C = 1;
  }
  if ( !ev
    || (this = (ServantWaveTurnEventOwner_o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                v5,
                                                ev->fields._Wave_k__BackingField,
                                                ev->fields._Turn_k__BackingField,
                                                v3)) == 0LL
    || (servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict,
        v13 = Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__,
        ++HIDWORD(this[1].klass),
        !servantWaveTurnEventDict) )
  {
    sub_1BCAA3C(this, ev);
  }
  klass_low = SLODWORD(this[1].klass);
  if ( (unsigned int)klass_low >= LODWORD(servantWaveTurnEventDict->fields._entries) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)ev,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &servantWaveTurnEventDict->klass + klass_low;
    LODWORD(this[1].klass) = klass_low + 1;
    v15[4] = (System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___c *)ev;
    sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 4), (int64_t)ev, v6, v7, v8, v9, v10, v11);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18F2B & 1) == 0 )
  {
    sub_1BCA7E0(&ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo, *(_QWORD *)&wave, *(_QWORD *)&turn);
    byte_4B18F2B = 1;
  }
  v7 = sub_1BCAA2C(ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo, *(_QWORD *)&wave, *(_QWORD *)&turn, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v7 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 52) = wave;
  *(_DWORD *)(v7 + 60) = turn;
  return (System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__o *)v7;
}


ServantWaveTurnEventOwner_SaveData_o *__fastcall ServantWaveTurnEventOwner__ExportSaveData(
        ServantWaveTurnEventOwner_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *servantWaveTurnEventDict; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  ServantWaveTurnEventOwner___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  System_Func_object__object__o *_9__8_0; // x21
  Il2CppObject *v27; // x22
  struct ServantWaveTurnEventOwner___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4B18F2E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Values__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_SelectMany_List_ServantWaveTurnEvent___ServantWaveTurnEvent_SaveData___,
      v5,
      v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ServantWaveTurnEvent_SaveData___, v7, v8);
    sub_1BCA7E0(&System_Func_List_ServantWaveTurnEvent___IEnumerable_ServantWaveTurnEvent_SaveData___TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantWaveTurnEventOwner_SaveData_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_0__, v13, v14);
    sub_1BCA7E0(&ServantWaveTurnEventOwner___c_TypeInfo, v15, v16);
    byte_4B18F2E = 1;
  }
  v17 = sub_1BCAA2C(ServantWaveTurnEventOwner_SaveData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_12;
  Values = System_Collections_Generic_Dictionary_long__object___get_Values(
             servantWaveTurnEventDict,
             (const MethodInfo_3243E34 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Values__);
  v24 = ServantWaveTurnEventOwner___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !ServantWaveTurnEventOwner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner___c_TypeInfo, v21);
    v24 = ServantWaveTurnEventOwner___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__object__o *)v24->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24, v21);
      v24 = ServantWaveTurnEventOwner___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__8_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_List_ServantWaveTurnEvent___IEnumerable_ServantWaveTurnEvent_SaveData___TypeInfo,
                                                 v21,
                                                 v22,
                                                 v23);
    System_Func_object__object____ctor(_9__8_0, v27, Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_0__, 0LL);
    static_fields = ServantWaveTurnEventOwner___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_List_ServantWaveTurnEvent___IEnumerable_ServantWaveTurnEvent_SaveData___o *)_9__8_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v29, v30, v31, v32, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v25,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__8_0,
                                                               (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_List_ServantWaveTurnEvent___ServantWaveTurnEvent_SaveData___);
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                        v35,
                                                                                        (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ServantWaveTurnEvent_SaveData___);
  if ( !v17 )
LABEL_12:
    sub_1BCAA3C(servantWaveTurnEventDict, v18);
  *(_QWORD *)(v17 + 16) = servantWaveTurnEventDict;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)servantWaveTurnEventDict, v36, v37, v38, v39, v40, v41);
  return (ServantWaveTurnEventOwner_SaveData_o *)v17;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantWaveTurnEvent__o *__fastcall ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
        ServantWaveTurnEventOwner_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *servantWaveTurnEventDict; // x0
  int64_t v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v21; // x21
  System_Collections_Generic_List_object__o *v22; // x22

  if ( (byte_4B18F2D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__,
      *(_QWORD *)&wave,
      *(_QWORD *)&turn);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantWaveTurnEventOwner_TypeInfo, v15, v16);
    byte_4B18F2D = 1;
  }
  if ( !ServantWaveTurnEventOwner_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner_TypeInfo, *(_QWORD *)&wave);
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_11;
  v18 = wave + 100 * turn;
  if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
          servantWaveTurnEventDict,
          v18,
          (const MethodInfo_3244218 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__) )
  {
    v21 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
    v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo,
                                                         *(_QWORD *)&wave,
                                                         v19,
                                                         v20);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    if ( !v21 )
      goto LABEL_11;
    System_Collections_Generic_Dictionary_long__object___set_Item(
      v21,
      v18,
      (Il2CppObject *)v22,
      (const MethodInfo_3244010 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
  }
  servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
LABEL_11:
    sub_1BCAA3C(servantWaveTurnEventDict, *(_QWORD *)&wave);
  return (System_Collections_Generic_List_ServantWaveTurnEvent__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                                      servantWaveTurnEventDict,
                                                                      v18,
                                                                      (const MethodInfo_3243F84 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
}


void __fastcall ServantWaveTurnEventOwner__ImportSaveData(
        ServantWaveTurnEventOwner_o *this,
        ServantWaveTurnEventOwner_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *servantWaveTurnEventDict; // x0
  struct ServantWaveTurnEvent_SaveData_array *WaveTurnEventArray; // x22
  int max_length; // w8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v13; // x23
  unsigned int v14; // w24
  ServantWaveTurnEvent_SaveData_o *v15; // x20
  ServantWaveTurnEventOwner_c *v16; // x0
  int32_t TypeValue; // w21
  const MethodInfo *v18; // x2

  if ( (byte_4B18F2F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_GetValue_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___,
      saveData,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___Clear__, v5, v6);
    sub_1BCA7E0(&ServantWaveTurnEventOwner_TypeInfo, v7, v8);
    byte_4B18F2F = 1;
  }
  if ( saveData
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)saveData->fields.WaveTurnEventArray, 0LL) )
  {
    servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
    if ( !servantWaveTurnEventDict )
      goto LABEL_21;
    System_Collections_Generic_Dictionary_long__object___Clear(
      servantWaveTurnEventDict,
      (const MethodInfo_32441AC *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___Clear__);
    WaveTurnEventArray = saveData->fields.WaveTurnEventArray;
    if ( !WaveTurnEventArray )
      goto LABEL_21;
    max_length = WaveTurnEventArray->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0LL;
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          sub_1BCAA44(servantWaveTurnEventDict, v9);
        v15 = WaveTurnEventArray->m_Items[v14];
        if ( !v15 )
          break;
        v16 = ServantWaveTurnEventOwner_TypeInfo;
        TypeValue = v15->fields.TypeValue;
        if ( !ServantWaveTurnEventOwner_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner_TypeInfo, v9);
          v16 = ServantWaveTurnEventOwner_TypeInfo;
        }
        servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BasicHelper__GetValue_Int32Enum__object_(
                                                                                              (System_Collections_Generic_Dictionary_K__V__o *)v16->static_fields->WaveTurnEventTypeToFactoryMap,
                                                                                              TypeValue,
                                                                                              0LL,
                                                                                              (const MethodInfo_2F01190 *)Method_BasicHelper_GetValue_WaveTurnEventType__ServantWaveTurnEventOwner_WaveTurnEventFactory___);
        if ( servantWaveTurnEventDict )
          v13 = servantWaveTurnEventDict;
        if ( servantWaveTurnEventDict )
        {
          if ( !v13 )
            break;
          servantWaveTurnEventDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)((__int64 (__fastcall *)(struct System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *, ServantWaveTurnEvent_SaveData_o *, _QWORD))v13->fields._entries)(
                                                                                                v13->fields._values,
                                                                                                v15,
                                                                                                *(_QWORD *)&v13->fields._freeCount);
          if ( servantWaveTurnEventDict )
            ServantWaveTurnEventOwner__Add(this, (ServantWaveTurnEvent_o *)servantWaveTurnEventDict, v18);
        }
        max_length = WaveTurnEventArray->max_length;
        if ( (int)++v14 >= max_length )
          return;
      }
LABEL_21:
      sub_1BCAA3C(servantWaveTurnEventDict, v9);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A1009C;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1BCA898(v10);
        v16 = sub_1BCAD54(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A10198;
          else
            v13 = (Il2CppObject *)sub_1A1015C;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A100D8;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A100AC;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A1007C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1002C;
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
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


ServantWaveTurnEvent_o *__fastcall ServantWaveTurnEventOwner_WaveTurnEventFactory__EndInvoke(
        ServantWaveTurnEventOwner_WaveTurnEventFactory_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (ServantWaveTurnEvent_o *)sub_1BCA798(result, 0LL, method);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  ServantWaveTurnEventOwner_o *_4__this; // x0
  System_Collections_Generic_List_object__o *WaveTurnEventDictValue; // x0
  __int64 v12; // x1
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v13; // x9
  __int128 v14; // q0
  struct System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__o *p__7__wrap1; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  bool v29; // w8
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v30; // x0
  struct ServantWaveTurnEvent_o *current; // x1
  bool result; // w0
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v33; // x8
  System_Collections_Generic_List_Enumerator_T__o v34[2]; // [xsp+8h] [xbp-68h] BYREF
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o **v35; // [xsp+48h] [xbp-28h]
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v36; // [xsp+58h] [xbp-18h] BYREF

  v36 = this;
  v4 = this;
  if ( (byte_4B18F34 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__get_Current__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__, v7, v8);
    byte_4B18F34 = 1;
  }
  v35 = &v36;
  _1__state = v4->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCAA3C(0LL, method);
    WaveTurnEventDictValue = (System_Collections_Generic_List_object__o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                                            _4__this,
                                                                            v4->fields.wave,
                                                                            v4->fields.turn,
                                                                            v3);
    if ( !WaveTurnEventDictValue )
      sub_1BCAA3C(0LL, v12);
    System_Collections_Generic_List_object___GetEnumerator(
      v34,
      WaveTurnEventDictValue,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    v13 = v36;
    v14 = *(_OWORD *)&v34[0].fields._list;
    p__7__wrap1 = &v36->fields.__7__wrap1;
    v34[1] = v34[0];
    v36->fields.__7__wrap1.fields._current = (struct ServantWaveTurnEvent_o *)v34[0].fields._current;
    *(_OWORD *)&v13->fields.__7__wrap1.fields._list = v14;
    sub_1BCA784((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v16, v17, v18, v19, v20, v21);
    v4 = v36;
  }
  v4->fields.__1__state = -3;
  v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v4->fields.__7__wrap1,
          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__);
  v30 = v36;
  if ( v29 )
  {
    current = v36->fields.__7__wrap1.fields._current;
    v36->fields.__2__current = current;
    sub_1BCA784((PartyOrganizationUtility_o *)&v30->fields.__2__current, (int64_t)current, v23, v24, v25, v26, v27, v28);
    result = 1;
    v36->fields.__1__state = 1;
  }
  else
  {
    ServantWaveTurnEventOwner__EventEnumerator_d__4____m__Finally1(v36, v22);
    v33 = v36;
    result = 0;
    v36->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v33->fields.__7__wrap1.fields._index = 0LL;
    v33->fields.__7__wrap1.fields._current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *__fastcall ServantWaveTurnEventOwner__EventEnumerator_d__4__System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__GetEnumerator(
        ServantWaveTurnEventOwner__EventEnumerator_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  ServantWaveTurnEventOwner__EventEnumerator_d__4_o *v6; // x20
  struct ServantWaveTurnEventOwner_o *_4__this; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *result; // x0

  if ( (byte_4B18F36 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo, method, v2);
    byte_4B18F36 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (ServantWaveTurnEventOwner__EventEnumerator_d__4_o *)sub_1BCAA2C(
                                                                ServantWaveTurnEventOwner__EventEnumerator_d__4_TypeInfo,
                                                                method,
                                                                v2,
                                                                v3);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.__4__this, (int64_t)_4__this, v8, v9, v10, v11, v12, v13);
  }
  result = (System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *)v6;
  v6->fields.wave = this->fields.__3__wave;
  v6->fields.turn = this->fields.__3__turn;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ServantWaveTurnEventOwner__EventEnumerator_d__4_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2

  if ( (byte_4B18F35 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__, method, v2);
    byte_4B18F35 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
}


void __fastcall ServantWaveTurnEventOwner___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18F32 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantWaveTurnEventOwner___c_TypeInfo, v1, v2);
    byte_4B18F32 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantWaveTurnEventOwner___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantWaveTurnEventOwner___c_TypeInfo->static_fields->__9 = (struct ServantWaveTurnEventOwner___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantWaveTurnEventOwner___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ServantWaveTurnEventOwner___c_c *v11; // x0
  System_Func_object__object__o *_9__8_1; // x20
  Il2CppObject *v13; // x21
  struct ServantWaveTurnEventOwner___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B18F33 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData___, x, method);
    sub_1BCA7E0(&System_Func_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_1__, v7, v8);
    sub_1BCA7E0(&ServantWaveTurnEventOwner___c_TypeInfo, v9, v10);
    byte_4B18F33 = 1;
  }
  v11 = ServantWaveTurnEventOwner___c_TypeInfo;
  if ( !ServantWaveTurnEventOwner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantWaveTurnEventOwner___c_TypeInfo, x);
    v11 = ServantWaveTurnEventOwner___c_TypeInfo;
  }
  _9__8_1 = (System_Func_object__object__o *)v11->static_fields->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, x);
      v11 = ServantWaveTurnEventOwner___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__8_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData__TypeInfo,
                                                 x,
                                                 method,
                                                 v3);
    System_Func_object__object____ctor(_9__8_1, v13, Method_ServantWaveTurnEventOwner___c__ExportSaveData_b__8_1__, 0LL);
    static_fields = ServantWaveTurnEventOwner___c_TypeInfo->static_fields;
    static_fields->__9__8_1 = (struct System_Func_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData__o *)_9__8_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_1, (int64_t)_9__8_1, v15, v16, v17, v18, v19, v20);
  }
  return (System_Collections_Generic_IEnumerable_ServantWaveTurnEvent_SaveData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                                      (System_Func_TSource__TResult__o *)_9__8_1,
                                                                                      (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_ServantWaveTurnEvent__ServantWaveTurnEvent_SaveData___);
}


ServantWaveTurnEvent_SaveData_o *__fastcall ServantWaveTurnEventOwner___c___ExportSaveData_b__8_1(
        ServantWaveTurnEventOwner___c_o *this,
        ServantWaveTurnEvent_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1BCAA3C(this, 0LL);
  return (ServantWaveTurnEvent_SaveData_o *)((__int64 (__fastcall *)(ServantWaveTurnEvent_o *, void *))y->klass->vtable._5_ExportSaveData.method)(
                                              y,
                                              y->klass[1]._1.image);
}