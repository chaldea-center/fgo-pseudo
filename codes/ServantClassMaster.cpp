void __fastcall ServantClassMaster___ctor(ServantClassMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189E80 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__, method);
    byte_4189E80 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    9,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
  System_String_array **v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  ServantClassEntity_o *v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x10
  System_Collections_Generic_IEnumerator_T__o *v32; // x23
  bool v33; // w22
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int v45; // [xsp+0h] [xbp-40h]

  if ( (byte_4189E86 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entity);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&ServantClassEntity_TypeInfo, v10);
    byte_4189E86 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, entity);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v19);
    }
    v24 = (ServantClassEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                    Enumerator,
                                    *(_QWORD *)(v23 + 8));
    if ( !v24 )
      goto LABEL_34;
    v31 = *(&ServantClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (ServantClassEntity_c *)v24->klass->_2.typeHierarchy[v31 - 1] != ServantClassEntity_TypeInfo )
    {
      sub_B2C728(v24);
LABEL_34:
      sub_B2C434(v24, v25);
    }
    if ( v24->fields.individuality == individuality )
    {
      *entity = v24;
      sub_B2C2F8((BattleServantConfConponent_o *)entity, (System_Int32_array **)v24, v26, v13, v27, v28, v29, v30);
      v32 = Enumerator;
      v45 = 67;
      v33 = 1;
      goto LABEL_24;
    }
  }
  v33 = 0;
  v45 = 62;
  v32 = Enumerator;
LABEL_24:
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_28:
    v37 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(v32, *(_QWORD *)(v37 + 8));
  if ( v45 == 62 )
  {
    *entity = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)entity, 0LL, v38, v39, v40, v41, v42, v43);
    return 0;
  }
  return v33;
}


float __fastcall ServantClassMaster__getClassAtk(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4189E81 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4189E81 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      classId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  return (float)SHIDWORD(Instance->fields.lookup) / 1000.0;
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
  System_Collections_Generic_List_int__o *v10; // x19
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  int32_t *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x9
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_4189E85 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B2C35C(&ServantClassEntity_TypeInfo, v9);
    byte_4189E85 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v25 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                       Enumerator,
                       *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_32;
    v27 = *(&ServantClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) < (unsigned int)v27
      || *(ServantClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v27 - 8) != ServantClassEntity_TypeInfo )
    {
      sub_B2C728(v25);
LABEL_32:
      sub_B2C434(v25, v26);
    }
    if ( v25[16] == 8 )
    {
      if ( !v10 )
        sub_B2C434(v25, ServantClassEntity_TypeInfo);
      System_Collections_Generic_List_int___Add(
        v10,
        v25[4],
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_28:
    v31 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v10;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantClassMaster__getRelationId(
        ServantClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  WarEntity_o *Entity; // x0
  __int64 v6; // x1

  if ( (byte_4189E82 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, *(_QWORD *)&classId);
    byte_4189E82 = 1;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             classId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
    sub_B2C434(0LL, v6);
  return Entity->fields.materialParentWarId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantClassMaster__getSupportGroupType(
        ServantClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4189E84 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, *(_QWORD *)&classId);
    byte_4189E84 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         classId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
  if ( !v5 )
    return 999;
  if ( !entity )
    sub_B2C434(v5, v6);
  return entity->fields.flag;
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
  System_Collections_Generic_Dictionary_int__int__o *v11; // x19
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  int32_t *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x9
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  AtlasManager_c *v40; // x0
  struct AtlasManager_StaticFields *static_fields; // x0

  if ( (byte_4189E83 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&ServantClassEntity_TypeInfo, v10);
    byte_4189E83 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v11,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v26 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                       Enumerator,
                       *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_39;
    v28 = *(&ServantClassEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 300LL) < (unsigned int)v28
      || *(ServantClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * v28 - 8) != ServantClassEntity_TypeInfo )
    {
      sub_B2C728(v26);
LABEL_39:
      sub_B2C434(v26, v27);
    }
    if ( !v11 )
      sub_B2C434(v26, ServantClassEntity_TypeInfo);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      v11,
      v26[4],
      v26[14],
      (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_27:
    v32 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !byte_4189F3F )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, v33);
    byte_4189F3F = 1;
  }
  v40 = AtlasManager_TypeInfo;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v40 = AtlasManager_TypeInfo;
  }
  static_fields = v40->static_fields;
  static_fields->classFrameIdList = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->classFrameIdList,
    (System_Int32_array **)v11,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  return 1;
}