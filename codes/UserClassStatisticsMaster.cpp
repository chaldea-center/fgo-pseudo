void UserClassStatisticsMaster___ctor(UserClassStatisticsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF3B8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string___ctor__);
    byte_4CEF3B8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    551,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string___ctor__);
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
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4CEF3B7 & 1) == 0 )
  {
    sub_1C7BAE8(&ClassStatisticsInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserClassStatisticsEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__getEntityList__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassStatisticsInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassStatisticsInfo__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassStatisticsInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ClassStatisticsInfo__TypeInfo);
    byte_4CEF3B7 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ClassStatisticsInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ClassStatisticsInfo___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_UserClassStatisticsEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v6);
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
      v11 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v15 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1C7BD40(0, v17);
    v18 = *(_DWORD *)(v16 + 24);
    v19 = *(_DWORD *)(v16 + 28);
    v20 = *(_QWORD *)(v16 + 32);
    v21 = (ClassStatisticsInfo_o *)sub_1C7BD34(ClassStatisticsInfo_TypeInfo);
    ClassStatisticsInfo___ctor_42162596(v21, v18, v19, v20, 0);
    if ( !v3 )
      sub_1C7BD40(v22, v23);
    items = v3->fields._items;
    v31 = Method_System_Collections_Generic_List_ClassStatisticsInfo__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1C7BD40(v22, v23);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v21,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v21;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v21, v24, v25, v26, v27, v28, v29);
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_28;
    }
    v37 = (__int64)&v34->vtable[*v36];
  }
  else
  {
LABEL_28:
    v37 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                             Enumerator,
                                                             *(_QWORD *)(v37 + 8));
  if ( !v3 )
LABEL_35:
    sub_1C7BD40(list, v4);
  return (ClassStatisticsInfo_array *)System_Collections_Generic_List_object___ToArray(
                                        v3,
                                        (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_ClassStatisticsInfo__ToArray__);
}


UserClassStatisticsEntity_o *UserClassStatisticsMaster__GetEntity(
        UserClassStatisticsMaster_o *this,
        int64_t userId,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF3B9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__GetEntity__);
    byte_4CEF3B9 = 1;
  }
  PK = (Il2CppObject *)UserClassStatisticsEntity__CreatePK(userId, classId, type, 0);
  return (UserClassStatisticsEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3432DB4 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__GetEntity__);
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

  if ( (byte_4CEF3BA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__TryGetEntity__);
    byte_4CEF3BA = 1;
  }
  PK = (Il2CppObject *)UserClassStatisticsEntity__CreatePK(userId, classId, type, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__TryGetEntity__);
}