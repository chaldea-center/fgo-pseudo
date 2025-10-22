void UserClassStatisticsMaster___ctor(UserClassStatisticsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57AC7 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string___ctor__);
    byte_4C57AC7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    551,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string___ctor__);
}


ClassStatisticsInfo_array *UserClassStatisticsMaster__GetClassStatisticsInfos(
        UserClassStatisticsMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w22
  int32_t v19; // w23
  int64_t v20; // x24
  ClassStatisticsInfo_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4C57AC6 & 1) == 0 )
  {
    sub_1C3E564(&ClassStatisticsInfo_TypeInfo);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserClassStatisticsEntity__GetEnumerator__);
    sub_1C3E564(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__getEntityList__);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ClassStatisticsInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ClassStatisticsInfo__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ClassStatisticsInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ClassStatisticsInfo__TypeInfo);
    byte_4C57AC6 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ClassStatisticsInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ClassStatisticsInfo___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_UserClassStatisticsEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3E7C0(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1C3E7C0(0, v17);
    v18 = *(_DWORD *)(v16 + 24);
    v19 = *(_DWORD *)(v16 + 28);
    v20 = *(_QWORD *)(v16 + 32);
    v21 = (ClassStatisticsInfo_o *)sub_1C3E7B0(ClassStatisticsInfo_TypeInfo);
    ClassStatisticsInfo___ctor_41636472(v21, v18, v19, v20, 0);
    if ( !v3 )
      sub_1C3E7C0(v22, v23);
    items = v3->fields._items;
    v27 = Method_System_Collections_Generic_List_ClassStatisticsInfo__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1C3E7C0(v22, v23);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v21,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v21;
      sub_1C3E508((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v21, v24, v25);
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_28;
    }
    v33 = (__int64)&v30->vtable[*v32];
  }
  else
  {
LABEL_28:
    v33 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                                             Enumerator,
                                                             *(_QWORD *)(v33 + 8));
  if ( !v3 )
LABEL_35:
    sub_1C3E7C0(list, v4);
  return (ClassStatisticsInfo_array *)System_Collections_Generic_List_object___ToArray(
                                        v3,
                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_ClassStatisticsInfo__ToArray__);
}


UserClassStatisticsEntity_o *UserClassStatisticsMaster__GetEntity(
        UserClassStatisticsMaster_o *this,
        int64_t userId,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C57AC8 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__GetEntity__);
    byte_4C57AC8 = 1;
  }
  PK = (Il2CppObject *)UserClassStatisticsEntity__CreatePK(userId, classId, type, 0);
  return (UserClassStatisticsEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_33B7A10 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__GetEntity__);
}


bool UserClassStatisticsMaster__TryGetEntity(
        UserClassStatisticsMaster_o *this,
        UserClassStatisticsEntity_o **entity,
        int64_t userId,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C57AC9 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__TryGetEntity__);
    byte_4C57AC9 = 1;
  }
  PK = (Il2CppObject *)UserClassStatisticsEntity__CreatePK(userId, classId, type, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__TryGetEntity__);
}