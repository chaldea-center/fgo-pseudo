void UserClassStatisticsMaster___ctor(UserClassStatisticsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939461 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string___ctor__);
    byte_5939461 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    553,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string___ctor__);
}


ClassStatisticsInfo_array *UserClassStatisticsMaster__GetClassStatisticsInfos(
        UserClassStatisticsMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w21
  int32_t v20; // w22
  int64_t v21; // x23
  ClassStatisticsInfo_o *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  System_Collections_Generic_IEnumerator_T__o *v40; // [xsp+18h] [xbp-58h]

  if ( (byte_5939460 & 1) == 0 )
  {
    sub_21FFC50(&ClassStatisticsInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserClassStatisticsEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__getEntityList__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassStatisticsInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassStatisticsInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassStatisticsInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ClassStatisticsInfo__TypeInfo);
    byte_5939460 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ClassStatisticsInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ClassStatisticsInfo___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserClassStatisticsEntity__GetEnumerator__);
  v40 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v7);
  for ( i = Enumerator; ; i = v40 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
             i,
             *(_QWORD *)(v12 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v40 )
      sub_21FFECC(list, v4);
    v13 = v40->klass;
    v14 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_18:
      v16 = sub_2237E2C(v40, System_Collections_Generic_IEnumerator_UserClassStatisticsEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            v40,
            *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_21FFECC(0, v18);
    v19 = *(_DWORD *)(v17 + 24);
    v20 = *(_DWORD *)(v17 + 28);
    v21 = *(_QWORD *)(v17 + 32);
    v22 = (ClassStatisticsInfo_o *)sub_21FFEBC(ClassStatisticsInfo_TypeInfo);
    ClassStatisticsInfo___ctor_48538964(v22, v19, v20, v21, 0);
    if ( !v3
      || (items = v3->fields._items,
          v32 = Method_System_Collections_Generic_List_ClassStatisticsInfo__Add__,
          ++v3->fields._version,
          !items) )
    {
      sub_21FFECC(v23, v24);
    }
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v22,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v22;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v22, v25, v26, v27, v28, v29, v30);
    }
  }
  if ( v40 )
  {
    v35 = v40->klass;
    v36 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_33;
      }
      v38 = (__int64)&v35->vtable[*v37];
    }
    else
    {
LABEL_33:
      v38 = sub_2237E2C(v40, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
             v40,
             *(_QWORD *)(v38 + 8));
  }
  if ( !v3 )
LABEL_41:
    sub_21FFECC(list, v4);
  return (ClassStatisticsInfo_array *)System_Collections_Generic_List_object___ToArray(
                                        v3,
                                        (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ClassStatisticsInfo__ToArray__);
}


UserClassStatisticsEntity_o *UserClassStatisticsMaster__GetEntity(
        UserClassStatisticsMaster_o *this,
        int64_t userId,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939462 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__GetEntity__);
    byte_5939462 = 1;
  }
  PK = (Il2CppObject *)UserClassStatisticsEntity__CreatePK(userId, classId, type, 0);
  return (UserClassStatisticsEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__GetEntity__);
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

  if ( (byte_5939463 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__TryGetEntity__);
    byte_5939463 = 1;
  }
  PK = (Il2CppObject *)UserClassStatisticsEntity__CreatePK(userId, classId, type, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserClassStatisticsMaster__UserClassStatisticsEntity__string__TryGetEntity__);
}