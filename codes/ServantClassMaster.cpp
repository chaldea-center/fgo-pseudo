void __fastcall ServantClassMaster___ctor(ServantClassMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B67261 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int_____ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TypeInfo, v4);
    byte_4B67261 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TypeInfo);
  System_Collections_Generic_Dictionary_ValueTuple_int__bool___object____ctor(
    v5,
    (const MethodInfo_3211098 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int_____ctor__);
  this->fields.cachedIndividualityWithRelatedDict = (struct System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____o *)v5;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.cachedIndividualityWithRelatedDict,
    (int64_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    9,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantClassMaster__GetIndividualityWithRelated(
        ServantClassMaster_o *this,
        int32_t classId,
        bool isServant,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *cachedIndividualityWithRelatedDict; // x0
  const MethodInfo *v11; // x2
  System_Int32_array *v12; // x19
  System_ValueTuple_int__bool__o v13; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x20
  System_Int32_array *v16; // [xsp+0h] [xbp-40h] BYREF
  System_ValueTuple_int__bool__o key; // [xsp+8h] [xbp-38h] BYREF
  System_ValueTuple_int__bool__o p_key; // 0:x0.8
  System_ValueTuple_int__bool__o v19; // 0:x1.8
  System_ValueTuple_int__bool__o v20; // 0:x1.8
  System_ValueTuple_int__bool__o v21; // 0:x1.8

  if ( (byte_4B67268 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TryGetValue__,
      *(_QWORD *)&classId);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____set_Item__, v7);
    sub_1BE4ACC(&Method_System_ValueTuple_int__bool___ctor__, v8);
    byte_4B67268 = 1;
  }
  p_key = (System_ValueTuple_int__bool__o)&key;
  v16 = 0LL;
  key = 0LL;
  System_ValueTuple_int__bool____ctor(
    p_key,
    classId,
    isServant,
    (const MethodInfo_3938ED0 *)Method_System_ValueTuple_int__bool___ctor__);
  cachedIndividualityWithRelatedDict = (Il2CppObject *)this->fields.cachedIndividualityWithRelatedDict;
  if ( !cachedIndividualityWithRelatedDict )
    goto LABEL_9;
  v19 = key;
  if ( !System_Collections_Generic_Dictionary_ValueTuple_int__bool___object___TryGetValue(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)cachedIndividualityWithRelatedDict,
          v19,
          (Il2CppObject **)&v16,
          (const MethodInfo_32131E0 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TryGetValue__) )
  {
    v13 = key;
    v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.cachedIndividualityWithRelatedDict;
    v20 = key;
    cachedIndividualityWithRelatedDict = (Il2CppObject *)ServantClassMaster__GetIndividualityWithRelated_40560596(
                                                           this,
                                                           v20,
                                                           v11);
    if ( v14 )
    {
      v12 = (System_Int32_array *)cachedIndividualityWithRelatedDict;
      v21 = v13;
      System_Collections_Generic_Dictionary_ValueTuple_int__bool___object___set_Item(
        v14,
        v21,
        cachedIndividualityWithRelatedDict,
        (const MethodInfo_3211A54 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____set_Item__);
      return v12;
    }
LABEL_9:
    sub_1BE4D28(cachedIndividualityWithRelatedDict, v9);
  }
  return v16;
}


System_Int32_array *__fastcall ServantClassMaster__GetIndividualityWithRelated_40560596(
        ServantClassMaster_o *this,
        System_ValueTuple_int__bool__o tupleKey,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  Il2CppObject *Entity; // x0
  __int64 klass_low; // x1
  long double inited; // q0
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  Il2CppObject *v17; // x21
  __int64 size; // x10
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x0
  __int64 v23; // x0

  if ( (byte_4B67269 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_int___, tupleKey);
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4B67269 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             tupleKey.fields.Item1,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( v11 )
      return System_Collections_Generic_List_int___ToArray(
               v11,
               (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_1BE4D28(Entity, klass_low);
  }
  if ( !v11 )
    goto LABEL_10;
  klass_low = LODWORD(Entity[2].klass);
  items = v11->fields._items;
  v16 = Method_System_Collections_Generic_List_int__Add__;
  v17 = Entity;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      klass_low,
      *(const MethodInfo_35CF200 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    if ( (*(_QWORD *)&tupleKey & 0x100000000LL) == 0 )
      return System_Collections_Generic_List_int___ToArray(
               v11,
               (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  else
  {
    v11->fields._size = size + 1;
    items->m_Items[size + 1] = klass_low;
    if ( (*(_QWORD *)&tupleKey & 0x100000000LL) == 0 )
      return System_Collections_Generic_List_int___ToArray(
               v11,
               (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  monitor = (System_Collections_Generic_IEnumerable_T__o *)v17[4].monitor;
  if ( !monitor )
  {
    v20 = Method_System_Array_Empty_int___;
    v21 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v21 )
    {
      sub_1C36A04(Method_System_Array_Empty_int___);
      v21 = v20[7];
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C369A8(inited);
    if ( !*(_DWORD *)(v22 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v22);
    v23 = *(_QWORD *)(v20[7] + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C369A8(inited);
    monitor = **(System_Collections_Generic_IEnumerable_T__o ***)(v23 + 184);
  }
  System_Collections_Generic_List_int___AddRange(
    v11,
    monitor,
    (const MethodInfo_35CF40C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall ServantClassMaster__TryGetEntityByIndividuality(
        ServantClassMaster_o *this,
        ServantClassEntity_o **entity,
        int32_t individuality,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  ServantClassEntity_o *v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 methodPtr_low; // x10
  bool v31; // w22
  int v32; // w24
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B67267 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entity);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&ServantClassEntity_TypeInfo, v10);
    byte_4B67267 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, entity);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (ServantClassEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                    Enumerator,
                                    *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_34;
    methodPtr_low = LOBYTE(ServantClassEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v22->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantClassEntity_c *)v22->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantClassEntity_TypeInfo )
    {
      sub_1BE4FE8(v22);
LABEL_34:
      sub_1BE4D28(v22, v23);
    }
    if ( v22->fields.individuality == individuality )
    {
      *entity = v22;
      sub_1BE4A70((PartyOrganizationUtility_o *)entity, (int64_t)v22, v24, v25, v26, v27, v28, v29);
      v31 = 1;
      v32 = 4;
      goto LABEL_24;
    }
  }
  v31 = 0;
  v32 = 5;
LABEL_24:
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_28;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_28:
    v36 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  if ( v32 == 5 )
  {
    *entity = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)entity, 0LL, v37, v38, v39, v40, v41, v42);
    return 0;
  }
  return v31;
}


float __fastcall ServantClassMaster__getClassAtk(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B67262 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B67262 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     classId,
                     (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BE4D28(Instance, v6);
  }
  return (float)SHIDWORD(Instance[2].klass) / 1000.0;
}


System_Collections_Generic_List_int__o *__fastcall ServantClassMaster__getExtraClassIdList(
        ServantClassMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  unsigned int *v23; // x0
  __int64 v24; // x1
  __int64 methodPtr_low; // x9
  __int64 v26; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B67266 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v3);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1BE4ACC(&ServantClassEntity_TypeInfo, v9);
    byte_4B67266 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                            Enumerator,
                            *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(ServantClassEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) != ServantClassEntity_TypeInfo )
    {
      sub_1BE4FE8(v23);
LABEL_35:
      sub_1BE4D28(v23, v24);
    }
    if ( v23[16] == 8 )
    {
      if ( !v10 )
        sub_1BE4D28(v23, ServantClassEntity_TypeInfo);
      v26 = v23[4];
      items = v10->fields._items;
      v28 = Method_System_Collections_Generic_List_int__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1BE4D28(v23, v26);
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v10,
          v26,
          *(const MethodInfo_35CF200 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v10->fields._size = size + 1;
        items->m_Items[size + 1] = v26;
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_31;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_31:
    v33 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v10;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantClassMaster__getRelationId(
        ServantClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  __int64 v6; // x1

  if ( (byte_4B67263 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, *(_QWORD *)&classId);
    byte_4B67263 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             classId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
    sub_1BE4D28(0LL, v6);
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

  if ( (byte_4B67265 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, *(_QWORD *)&classId);
    byte_4B67265 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         classId,
         (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
  if ( !v5 )
    return 999;
  if ( !entity )
    sub_1BE4D28(v5, v6);
  return (int32_t)entity[4].klass;
}


bool __fastcall ServantClassMaster__preProcess(ServantClassMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__int__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  int32_t *v24; // x0
  __int64 v25; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  AtlasManager_c *v38; // x0
  struct AtlasManager_StaticFields *static_fields; // x0

  if ( (byte_4B67264 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v5);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&ServantClassEntity_TypeInfo, v10);
    byte_4B67264 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v11,
    (const MethodInfo_3247234 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                       Enumerator,
                       *(_QWORD *)(v23 + 8));
    if ( !v24 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(ServantClassEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * methodPtr_low - 8) != ServantClassEntity_TypeInfo )
    {
      sub_1BE4FE8(v24);
LABEL_37:
      sub_1BE4D28(v24, v25);
    }
    if ( !v11 )
      sub_1BE4D28(v24, ServantClassEntity_TypeInfo);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      v11,
      v24[4],
      v24[12],
      (const MethodInfo_3247BE4 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_27;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_27:
    v30 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !byte_4B67339 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, v31);
    byte_4B67339 = 1;
  }
  v38 = AtlasManager_TypeInfo;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v38 = AtlasManager_TypeInfo;
  }
  static_fields = v38->static_fields;
  static_fields->classFrameIdList = v11;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&static_fields->classFrameIdList,
    (int64_t)v11,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  return 1;
}