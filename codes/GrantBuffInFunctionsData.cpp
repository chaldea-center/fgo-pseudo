void GrantBuffInFunctionsData___ctor(GrantBuffInFunctionsData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5973C71 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData___TypeInfo);
    byte_5973C71 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData____ctor__);
  this->fields.grantBuffListEachSvtDict = (struct System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData___o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrantBuffInFunctionsData__Add(
        GrantBuffInFunctionsData_o *this,
        int32_t svtUniqueId,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *grantBuffListEachSvtDict; // x0
  struct System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData___o *v8; // x22
  System_Collections_Generic_List_object__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_Dictionary_int__object__o *v16; // x8
  struct System_Int32_array *buckets; // x9
  _QWORD *v18; // x10
  __int64 entries_low; // x11
  __int64 v20; // x0

  if ( (byte_5973C6F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData___set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_5973C6F = 1;
  }
  grantBuffListEachSvtDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.grantBuffListEachSvtDict;
  if ( !grantBuffListEachSvtDict )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          grantBuffListEachSvtDict,
          svtUniqueId,
          (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData___ContainsKey__) )
  {
    v8 = this->fields.grantBuffListEachSvtDict;
    v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !v8 )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v8,
      svtUniqueId,
      (Il2CppObject *)v9,
      (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData___set_Item__);
  }
  grantBuffListEachSvtDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.grantBuffListEachSvtDict;
  if ( !grantBuffListEachSvtDict
    || (grantBuffListEachSvtDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                             grantBuffListEachSvtDict,
                                                                                             svtUniqueId,
                                                                                             (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData___get_Item__)) == 0
    || (v16 = grantBuffListEachSvtDict,
        buckets = grantBuffListEachSvtDict->fields._buckets,
        v18 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
        ++HIDWORD(grantBuffListEachSvtDict->fields._entries),
        !buckets) )
  {
LABEL_13:
    sub_2213CDC(grantBuffListEachSvtDict, *(_QWORD *)&svtUniqueId);
  }
  entries_low = SLODWORD(grantBuffListEachSvtDict->fields._entries);
  if ( (unsigned int)entries_low >= LODWORD(buckets->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)grantBuffListEachSvtDict,
      (Il2CppObject *)buffData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = (__int64)buckets + 8 * entries_low;
    LODWORD(v16->fields._entries) = entries_low + 1;
    *(_QWORD *)(v20 + 32) = buffData;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 32), (int32_t)buffData, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t GrantBuffInFunctionsData__GetSatisfyIndividualityUniqueId(
        GrantBuffInFunctionsData_o *this,
        int32_t svtUniqueId,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *grantBuffListEachSvtDict; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x20
  __int64 v11; // x1
  System_Int32_array *Individualty; // x21
  int32_t monitor_high; // w19
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_5973C70 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_2213A60(&Individuality_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_5973C70 = 1;
  }
  grantBuffListEachSvtDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.grantBuffListEachSvtDict;
  value = 0;
  memset(&v15, 0, sizeof(v15));
  if ( !grantBuffListEachSvtDict )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          grantBuffListEachSvtDict,
          svtUniqueId,
          &value,
          (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_BattleBuffData_BuffData___TryGetValue__) )
    return -1;
  grantBuffListEachSvtDict = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
LABEL_17:
    sub_2213CDC(grantBuffListEachSvtDict, *(_QWORD *)&svtUniqueId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v8 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_2213CDC(v8, v9);
    Individualty = BattleBuffData_BuffData__GetIndividualty(
                     (BattleBuffData_BuffData_o *)v15.fields._current,
                     0,
                     0,
                     0,
                     0);
    if ( Individualty )
    {
      if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v11);
      if ( Individuality__ContainsIndividualities(Individualty, individuality, 0) )
      {
        monitor_high = HIDWORD(current[8].monitor);
        goto LABEL_15;
      }
    }
  }
  monitor_high = -1;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return monitor_high;
}