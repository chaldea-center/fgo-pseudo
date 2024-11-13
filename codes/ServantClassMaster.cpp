void __fastcall ServantClassMaster___ctor(ServantClassMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B1687D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int_____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TypeInfo, v7, v8);
    byte_4B1687D = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_ValueTuple_int__bool___object____ctor(
    v9,
    (const MethodInfo_31C6714 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int_____ctor__);
  this->fields.cachedIndividualityWithRelatedDict = (struct System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____o *)v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cachedIndividualityWithRelatedDict,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    9,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantClassMaster__GetIndividualityWithRelated(
        ServantClassMaster_o *this,
        int32_t classId,
        bool isServant,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *cachedIndividualityWithRelatedDict; // x0
  const MethodInfo *v13; // x2
  System_Int32_array *v14; // x19
  System_ValueTuple_int__bool__o v15; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v16; // x20
  System_Int32_array *v18; // [xsp+0h] [xbp-40h] BYREF
  System_ValueTuple_int__bool__o key; // [xsp+8h] [xbp-38h] BYREF
  System_ValueTuple_int__bool__o p_key; // 0:x0.8
  System_ValueTuple_int__bool__o v21; // 0:x1.8
  System_ValueTuple_int__bool__o v22; // 0:x1.8
  System_ValueTuple_int__bool__o v23; // 0:x1.8

  if ( (byte_4B16884 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TryGetValue__,
      *(_QWORD *)&classId,
      isServant);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____set_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_ValueTuple_int__bool___ctor__, v9, v10);
    byte_4B16884 = 1;
  }
  p_key = (System_ValueTuple_int__bool__o)&key;
  v18 = 0LL;
  key = 0LL;
  System_ValueTuple_int__bool____ctor(
    p_key,
    classId,
    isServant,
    (const MethodInfo_38EF660 *)Method_System_ValueTuple_int__bool___ctor__);
  cachedIndividualityWithRelatedDict = (Il2CppObject *)this->fields.cachedIndividualityWithRelatedDict;
  if ( !cachedIndividualityWithRelatedDict )
    goto LABEL_9;
  v21 = key;
  if ( !System_Collections_Generic_Dictionary_ValueTuple_int__bool___object___TryGetValue(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)cachedIndividualityWithRelatedDict,
          v21,
          (Il2CppObject **)&v18,
          (const MethodInfo_31C885C *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TryGetValue__) )
  {
    v15 = key;
    v16 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.cachedIndividualityWithRelatedDict;
    v22 = key;
    cachedIndividualityWithRelatedDict = (Il2CppObject *)ServantClassMaster__GetIndividualityWithRelated_40341628(
                                                           this,
                                                           v22,
                                                           v13);
    if ( v16 )
    {
      v14 = (System_Int32_array *)cachedIndividualityWithRelatedDict;
      v23 = v15;
      System_Collections_Generic_Dictionary_ValueTuple_int__bool___object___set_Item(
        v16,
        v23,
        cachedIndividualityWithRelatedDict,
        (const MethodInfo_31C70D0 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____set_Item__);
      return v14;
    }
LABEL_9:
    sub_1BCAA3C(cachedIndividualityWithRelatedDict, v11);
  }
  return v18;
}


System_Int32_array *__fastcall ServantClassMaster__GetIndividualityWithRelated_40341628(
        ServantClassMaster_o *this,
        System_ValueTuple_int__bool__o tupleKey,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_int__o *v18; // x19
  Il2CppObject *Entity; // x0
  __int64 klass_low; // x1
  long double inited; // q0
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  Il2CppObject *v24; // x21
  __int64 size; // x10
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  _QWORD *v27; // x20
  __int64 v28; // x8
  __int64 v29; // x0
  __int64 v30; // x0

  if ( (byte_4B16885 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, tupleKey, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    byte_4B16885 = 1;
  }
  v18 = (System_Collections_Generic_List_int__o *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1BCAA2C)(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    tupleKey,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             tupleKey.fields.Item1,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( v18 )
      return System_Collections_Generic_List_int___ToArray(
               v18,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_1BCAA3C(Entity, klass_low);
  }
  if ( !v18 )
    goto LABEL_10;
  klass_low = LODWORD(Entity[2].klass);
  items = v18->fields._items;
  v23 = Method_System_Collections_Generic_List_int__Add__;
  v24 = Entity;
  ++v18->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v18->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v18,
      klass_low,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    if ( (*(_QWORD *)&tupleKey & 0x100000000LL) == 0 )
      return System_Collections_Generic_List_int___ToArray(
               v18,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  else
  {
    v18->fields._size = size + 1;
    items->m_Items[size + 1] = klass_low;
    if ( (*(_QWORD *)&tupleKey & 0x100000000LL) == 0 )
      return System_Collections_Generic_List_int___ToArray(
               v18,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  monitor = (System_Collections_Generic_IEnumerable_T__o *)v24[4].monitor;
  if ( !monitor )
  {
    v27 = Method_System_Array_Empty_int___;
    v28 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v28 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, 0LL);
      v28 = v27[7];
    }
    v29 = *(_QWORD *)(v28 + 16);
    if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
      v29 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v29 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v29, monitor);
    v30 = *(_QWORD *)(v27[7] + 16LL);
    if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
      v30 = sub_1C1C6BC(inited);
    monitor = **(System_Collections_Generic_IEnumerable_T__o ***)(v30 + 184);
  }
  System_Collections_Generic_List_int___AddRange(
    v18,
    monitor,
    (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v18,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantClassMaster__TryGetEntityByIndividuality(
        ServantClassMaster_o *this,
        ServantClassEntity_o **entity,
        int32_t individuality,
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  ServantClassEntity_o *v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x10
  bool v35; // w22
  int v36; // w24
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B16883 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      entity,
      *(_QWORD *)&individuality);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantClassEntity_TypeInfo, v13, v14);
    byte_4B16883 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, entity);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (ServantClassEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                    Enumerator,
                                    *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_34;
    methodPtr_low = LOBYTE(ServantClassEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v26->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantClassEntity_c *)v26->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantClassEntity_TypeInfo )
    {
      sub_1BCACFC(v26);
LABEL_34:
      sub_1BCAA3C(v26, v27);
    }
    if ( v26->fields.individuality == individuality )
    {
      *entity = v26;
      sub_1BCA784((PartyOrganizationUtility_o *)entity, (int64_t)v26, v28, v29, v30, v31, v32, v33);
      v35 = 1;
      v36 = 4;
      goto LABEL_24;
    }
  }
  v35 = 0;
  v36 = 5;
LABEL_24:
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_28;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_28:
    v40 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  if ( v36 == 5 )
  {
    *entity = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)entity, 0LL, v41, v42, v43, v44, v45, v46);
    return 0;
  }
  return v35;
}


float __fastcall ServantClassMaster__getClassAtk(int32_t classId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B1687E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1687E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     classId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return (float)SHIDWORD(Instance[2].klass) / 1000.0;
}


System_Collections_Generic_List_int__o *__fastcall ServantClassMaster__getExtraClassIdList(
        ServantClassMaster_o *this,
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x20
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  unsigned int *v32; // x0
  __int64 v33; // x1
  __int64 methodPtr_low; // x9
  __int64 v35; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  if ( (byte_4B16882 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantClassEntity_TypeInfo, v17, v18);
    byte_4B16882 = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v20);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_16;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_16:
      v31 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v32 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                            Enumerator,
                            *(_QWORD *)(v31 + 8));
    if ( !v32 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(ServantClassEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * methodPtr_low - 8) != ServantClassEntity_TypeInfo )
    {
      sub_1BCACFC(v32);
LABEL_35:
      sub_1BCAA3C(v32, v33);
    }
    if ( v32[16] == 8 )
    {
      if ( !v19 )
        sub_1BCAA3C(v32, ServantClassEntity_TypeInfo);
      v35 = v32[4];
      items = v19->fields._items;
      v37 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !items )
        sub_1BCAA3C(v32, v35);
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          v35,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = size + 1;
        items->m_Items[size + 1] = v35;
      }
    }
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_31;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_31:
    v42 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  return v19;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantClassMaster__getRelationId(
        ServantClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  __int64 v6; // x1

  if ( (byte_4B1687F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__,
      *(_QWORD *)&classId,
      method);
    byte_4B1687F = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             classId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
    sub_1BCAA3C(0LL, v6);
  return HIDWORD(Entity[3].monitor);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantClassMaster__getSupportGroupType(
        ServantClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16881 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__,
      *(_QWORD *)&classId,
      method);
    byte_4B16881 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         classId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
  if ( !v5 )
    return 999;
  if ( !entity )
    sub_1BCAA3C(v5, v6);
  return (int32_t)entity[4].klass;
}


bool __fastcall ServantClassMaster__preProcess(ServantClassMaster_o *this, const MethodInfo *method)
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_int__int__o *v21; // x20
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  int32_t *v34; // x0
  __int64 v35; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  AtlasManager_c *v48; // x0
  struct AtlasManager_StaticFields *static_fields; // x0

  if ( (byte_4B16880 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantClassEntity_TypeInfo, v19, v20);
    byte_4B16880 = 1;
  }
  v21 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               method,
                                                               v2,
                                                               v3);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v21,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v22);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_16;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_16:
      v33 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                       Enumerator,
                       *(_QWORD *)(v33 + 8));
    if ( !v34 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(ServantClassEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * methodPtr_low - 8) != ServantClassEntity_TypeInfo )
    {
      sub_1BCACFC(v34);
LABEL_37:
      sub_1BCAA3C(v34, v35);
    }
    if ( !v21 )
      sub_1BCAA3C(v34, ServantClassEntity_TypeInfo);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      v21,
      v34[4],
      v34[12],
      (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_27;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_27:
    v40 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v41);
  if ( !byte_4B16985 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, v41, v42);
    byte_4B16985 = 1;
  }
  v48 = AtlasManager_TypeInfo;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v41);
    v48 = AtlasManager_TypeInfo;
  }
  static_fields = v48->static_fields;
  static_fields->classFrameIdList = v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->classFrameIdList,
    (int64_t)v21,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  return 1;
}