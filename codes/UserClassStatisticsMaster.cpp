void __fastcall UserClassStatisticsMaster___ctor(UserClassStatisticsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B45768 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string___ctor__, method);
    byte_4B45768 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    551,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string___ctor__);
}


ClassStatisticsInfo_array *__fastcall UserClassStatisticsMaster__GetClassStatisticsInfos(
        UserClassStatisticsMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w22
  int32_t v28; // w23
  int64_t v29; // x24
  ClassStatisticsInfo_o *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  if ( (byte_4B45767 & 1) == 0 )
  {
    sub_1BDB878(&ClassStatisticsInfo_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserClassStatisticsEntity__GetEnumerator__, v3);
    sub_1BDB878(
      &Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__getEntityList__,
      v4);
    sub_1BDB878(&System_IDisposable_TypeInfo, v5);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo, v6);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassStatisticsInfo__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassStatisticsInfo__ToArray__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassStatisticsInfo___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_ClassStatisticsInfo__TypeInfo, v11);
    byte_4B45767 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ClassStatisticsInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ClassStatisticsInfo___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_UserClassStatisticsEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    if ( !v25 )
      sub_1BDBAD4(0LL, v26);
    v27 = *(_DWORD *)(v25 + 24);
    v28 = *(_DWORD *)(v25 + 28);
    v29 = *(_QWORD *)(v25 + 32);
    v30 = (ClassStatisticsInfo_o *)sub_1BDBAC4(ClassStatisticsInfo_TypeInfo);
    ClassStatisticsInfo___ctor_40588948(v30, v27, v28, v29, 0LL);
    if ( !v12 )
      sub_1BDBAD4(v31, v32);
    items = v12->fields._items;
    v36 = Method_System_Collections_Generic_List_ClassStatisticsInfo__Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1BDBAD4(v31, v32);
    size = v12->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)v30,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v38[4] = (Il2CppClass *)v30;
      sub_1BDB81C((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v30, v33, v34);
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
        goto LABEL_28;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_28:
    v42 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                                             Enumerator,
                                                             *(_QWORD *)(v42 + 8));
  if ( !v12 )
LABEL_35:
    sub_1BDBAD4(list, v13);
  return (ClassStatisticsInfo_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_ClassStatisticsInfo__ToArray__);
}


UserClassStatisticsEntity_o *__fastcall UserClassStatisticsMaster__GetEntity(
        UserClassStatisticsMaster_o *this,
        int64_t userId,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B45769 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__GetEntity__,
      userId);
    byte_4B45769 = 1;
  }
  PK = (Il2CppObject *)UserClassStatisticsEntity__CreatePK(userId, classId, type, 0LL);
  return (UserClassStatisticsEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_32E68F4 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__GetEntity__);
}


bool __fastcall UserClassStatisticsMaster__TryGetEntity(
        UserClassStatisticsMaster_o *this,
        UserClassStatisticsEntity_o **entity,
        int64_t userId,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B4576A & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__TryGetEntity__,
      entity);
    byte_4B4576A = 1;
  }
  PK = (Il2CppObject *)UserClassStatisticsEntity__CreatePK(userId, classId, type, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__TryGetEntity__);
}