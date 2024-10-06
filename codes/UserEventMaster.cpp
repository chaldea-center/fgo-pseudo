void __fastcall UserEventMaster___ctor(UserEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70AD5 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__, method);
    byte_4A70AD5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    97,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *__fastcall UserEventMaster__GetEntity(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A70AD3 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__, userId);
    byte_4A70AD3 = 1;
  }
  PK = (Il2CppObject *)UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_312C900 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *__fastcall UserEventMaster__GetEntityDefinitely(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v10; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v12; // x23
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v16; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x20
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v19; // x10
  __int64 v20; // x0
  UserEventEntity_o *v21; // x19
  const MethodInfo *v22; // x3
  UserEventEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A70AD6 & 1) == 0 )
  {
    sub_1B90010(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1B90010(&UserEventEntity_TypeInfo, v7);
    byte_4A70AD6 = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_25;
  klass = lookup->klass;
  v12 = lookup;
  v13 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BE1FF0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v12,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v21 = (UserEventEntity_o *)sub_1B9025C(UserEventEntity_TypeInfo);
    UserEventEntity___ctor_40132512(v21, userId, eventId, v22);
    return v21;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_25:
    sub_1B9026C(lookup, v10);
  v16 = lookup->klass;
  v17 = lookup;
  v18 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v19 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_16;
    }
    v20 = (__int64)&v16->vtable[*(_DWORD *)v19 + 2].method;
  }
  else
  {
LABEL_16:
    v20 = sub_1BE1FF0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserEventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v20)(
                                  v17,
                                  PK,
                                  *(_QWORD *)(v20 + 8));
  if ( result )
  {
    methodPtr_low = LOBYTE(UserEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (UserEventEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != UserEventEntity_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


bool __fastcall UserEventMaster__TryGetEntity(
        UserEventMaster_o *this,
        UserEventEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A70AD4 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__, entity);
    byte_4A70AD4 = 1;
  }
  PK = (Il2CppObject *)UserEventEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
}


UserEventEntity_array *__fastcall UserEventMaster__getList(UserEventMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4A70AD7 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    byte_4A70AD7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventMaster__getList_40141132(this, UserId, v4);
}


UserEventEntity_array *__fastcall UserEventMaster__getList_40141132(
        UserEventMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w23
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v3 = userId;
  if ( (byte_4A70AD8 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_UserEventEntity__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_UserEventEntity__ToArray__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_UserEventEntity___ctor__, v8);
    sub_1B90010(&System_Collections_Generic_List_UserEventEntity__TypeInfo, v9);
    sub_1B90010(&UserEventEntity_TypeInfo, v10);
    byte_4A70AD8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_UserEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_UserEventEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        methodPtr_low = LOBYTE(UserEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v19 = Method_System_Collections_Generic_List_UserEventEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v21[4] = (Il2CppClass *)userId;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v21 + 4), userId, v15, v16);
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B9026C(list, userId);
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
  return (UserEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_UserEventEntity__ToArray__);
}