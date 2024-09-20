void __fastcall UserEventMaster___ctor(UserEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BDC6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
    byte_4A5BDC6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    97,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *__fastcall UserEventMaster__GetEntity(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BDC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
    byte_4A5BDC4 = 1;
  }
  PK = (Il2CppObject *)UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *__fastcall UserEventMaster__GetEntityDefinitely(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x23
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v18; // x10
  __int64 v19; // x0
  UserEventEntity_o *v20; // x19
  const MethodInfo *v21; // x3
  UserEventEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BDC7 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&UserEventEntity_TypeInfo);
    byte_4A5BDC7 = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_25;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v11,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v20 = (UserEventEntity_o *)sub_1B887FC(UserEventEntity_TypeInfo);
    UserEventEntity___ctor_40078772(v20, userId, eventId, v21);
    return v20;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_25:
    sub_1B8880C(lookup, v9);
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v18 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = (__int64)&v15->vtable[*(_DWORD *)v18 + 2].method;
  }
  else
  {
LABEL_16:
    v19 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserEventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v19)(
                                  v16,
                                  PK,
                                  *(_QWORD *)(v19 + 8));
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

  if ( (byte_4A5BDC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
    byte_4A5BDC5 = 1;
  }
  PK = (Il2CppObject *)UserEventEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
}


UserEventEntity_array *__fastcall UserEventMaster__getList(UserEventMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4A5BDC8 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BDC8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventMaster__getList_40087392(this, UserId, v4);
}


UserEventEntity_array *__fastcall UserEventMaster__getList_40087392(
        UserEventMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  v3 = userId;
  if ( (byte_4A5BDC9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserEventEntity__TypeInfo);
    sub_1B885B0(&UserEventEntity_TypeInfo);
    byte_4A5BDC9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserEventEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        methodPtr_low = LOBYTE(UserEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_UserEventEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = (Il2CppClass *)userId;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), userId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, userId);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return (UserEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserEventEntity__ToArray__);
}