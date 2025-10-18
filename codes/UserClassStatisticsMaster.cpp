void UserClassStatisticsMaster___ctor(UserClassStatisticsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43D0F & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string___ctor__);
    byte_4C43D0F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    551,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string___ctor__);
}


ClassStatisticsInfo_array *UserClassStatisticsMaster__GetClassStatisticsInfos(
        UserClassStatisticsMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  int32_t v15; // w22
  int32_t v16; // w23
  int64_t v17; // x24
  ClassStatisticsInfo_o *v18; // x21
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4C43D0E & 1) == 0 )
  {
    sub_1C37058(&ClassStatisticsInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserClassStatisticsEntity__GetEnumerator__);
    sub_1C37058(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__getEntityList__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassStatisticsInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassStatisticsInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassStatisticsInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ClassStatisticsInfo__TypeInfo);
    byte_4C43D0E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassStatisticsInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassStatisticsInfo___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_UserClassStatisticsEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v9 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_16:
      v13 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_1C372B4(0);
    v15 = *(_DWORD *)(v14 + 24);
    v16 = *(_DWORD *)(v14 + 28);
    v17 = *(_QWORD *)(v14 + 32);
    v18 = (ClassStatisticsInfo_o *)sub_1C372A4(ClassStatisticsInfo_TypeInfo);
    ClassStatisticsInfo___ctor_41587912(v18, v15, v16, v17, 0);
    if ( !v3 )
      sub_1C372B4(v19);
    items = v3->fields._items;
    v23 = Method_System_Collections_Generic_List_ClassStatisticsInfo__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1C372B4(v19);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v18,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v18;
      sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v18, v20, v21);
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_28;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_28:
    v29 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                             Enumerator,
                                                             *(_QWORD *)(v29 + 8));
  if ( !v3 )
LABEL_35:
    sub_1C372B4(list);
  return (ClassStatisticsInfo_array *)System_Collections_Generic_List_object___ToArray(
                                        v3,
                                        (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ClassStatisticsInfo__ToArray__);
}


UserClassStatisticsEntity_o *UserClassStatisticsMaster__GetEntity(
        UserClassStatisticsMaster_o *this,
        int64_t userId,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C43D10 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__GetEntity__);
    byte_4C43D10 = 1;
  }
  PK = (Il2CppObject *)UserClassStatisticsEntity__CreatePK(userId, classId, type, 0);
  return (UserClassStatisticsEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_33A5B58 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__GetEntity__);
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

  if ( (byte_4C43D11 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__TryGetEntity__);
    byte_4C43D11 = 1;
  }
  PK = (Il2CppObject *)UserClassStatisticsEntity__CreatePK(userId, classId, type, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__TryGetEntity__);
}