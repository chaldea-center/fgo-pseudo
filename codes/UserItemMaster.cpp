void __fastcall UserItemMaster___ctor(UserItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6AAB & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__, method);
    byte_4AB6AAB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    36,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntity(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB6AA9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__, userId);
    byte_4AB6AA9 = 1;
  }
  PK = (Il2CppObject *)UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  return (UserItemEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31640E8 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntityDefinitely(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *PK; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *lookup; // x0
  __int64 v14; // x1
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x23
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  DataMasterBase_TMaster__TEntity__PKType__c *v20; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x19
  __int64 v22; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x10
  __int64 v24; // x0
  UserItemEntity_o *v25; // x21
  const MethodInfo *v26; // x3
  UserItemEntity_o *v27; // x0
  __int64 methodPtr_low; // x10
  UserSvtCoinEntity_o *v30; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4AB6AAD & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_ItemMaster___, userId);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_1BAB41C(&DataManager_TypeInfo, v8);
    sub_1BAB41C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1BAB41C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_1BAB41C(&UserItemEntity_TypeInfo, v11);
    byte_4AB6AAD = 1;
  }
  entity = 0LL;
  v30 = 0LL;
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_39;
  klass = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_8;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_8:
    v19 = sub_1BFD3FC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, _QWORD))v19)(
          v16,
          PK,
          *(_QWORD *)(v19 + 8)) & 1) == 0 )
  {
    v25 = (UserItemEntity_o *)sub_1BAB668(UserItemEntity_TypeInfo);
    UserItemEntity___ctor_40528412(v25, userId, itemId, v26);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( lookup )
    {
      lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                               lookup,
                                                               &entity,
                                                               itemId,
                                                               (const MethodInfo_3163DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)lookup & 1) == 0 )
        return v25;
      if ( entity )
      {
        if ( LODWORD(entity[3].klass) != 29 )
          return v25;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
        if ( entity && lookup )
        {
          lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)UserSvtCoinMaster__TryGetEntity(
                                                                   (UserSvtCoinMaster_o *)lookup,
                                                                   &v30,
                                                                   userId,
                                                                   (int32_t)entity[4].klass,
                                                                   0LL);
          if ( ((unsigned __int8)lookup & 1) == 0 )
            return v25;
          if ( v30 && v25 )
          {
            v25->fields.num = v30->fields.num;
            return v25;
          }
        }
      }
    }
LABEL_39:
    sub_1BAB678(lookup, v14);
  }
  lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_39;
  v20 = lookup->klass;
  v21 = lookup;
  v22 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v23 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v22;
      v23 += 2;
      if ( !v22 )
        goto LABEL_16;
    }
    v24 = (__int64)(&v20->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v23);
  }
  else
  {
LABEL_16:
    v24 = sub_1BFD3FC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v27 = (UserItemEntity_o *)(*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, _QWORD))v24)(
                              v21,
                              PK,
                              *(_QWORD *)(v24 + 8));
  if ( !v27 )
    return 0LL;
  methodPtr_low = LOBYTE(UserItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v27->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserItemEntity_c *)v27->klass->_2.typeHierarchy[methodPtr_low - 1] == UserItemEntity_TypeInfo )
    return v27;
  return 0LL;
}


int32_t __fastcall UserItemMaster__GetUserStoneFragmentNum(UserItemMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t UserId; // x20
  _DWORD *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4AB6AB0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_ItemMaster___, method);
    sub_1BAB41C(&DataManager_TypeInfo, v3);
    sub_1BAB41C(&NetworkManager_TypeInfo, v4);
    byte_4AB6AB0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = UserItemMaster__GetEntityDefinitely(this, UserId, Master_object[22], v8)) == 0LL )
  {
    sub_1BAB678(Master_object, v7);
  }
  return Master_object[7];
}


bool __fastcall UserItemMaster__TryGetEntity(
        UserItemMaster_o *this,
        UserItemEntity_o **entity,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB6AAA & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__, entity);
    byte_4AB6AAA = 1;
  }
  PK = (Il2CppObject *)UserItemEntity__CreatePK(userId, itemId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
}


UserItemEntity_array *__fastcall UserItemMaster__getList(UserItemMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4AB6AAC & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    byte_4AB6AAC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserItemMaster__getList_40529052(this, UserId, v4);
}


UserItemEntity_array *__fastcall UserItemMaster__getList_40529052(
        UserItemMaster_o *this,
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
  if ( (byte_4AB6AAF & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UserItemEntity__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UserItemEntity__ToArray__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UserItemEntity___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_UserItemEntity__TypeInfo, v9);
    sub_1BAB41C(&UserItemEntity_TypeInfo, v10);
    byte_4AB6AAF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_UserItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_UserItemEntity___ctor__);
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
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        methodPtr_low = LOBYTE(UserItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserItemEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserItemEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v19 = Method_System_Collections_Generic_List_UserItemEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v21[4] = (Il2CppClass *)userId;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v21 + 4), userId, v15, v16);
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BAB678(list, userId);
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
  return (UserItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v13,
                                   (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
}


int32_t __fastcall UserItemMaster__getSum(UserItemMaster_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w21
  int32_t v11; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4AB6AAE & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&UserItemEntity_TypeInfo, v6);
    byte_4AB6AAE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v11,
               (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(UserItemEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserItemEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserItemEntity_TypeInfo
          && Item[1].klass == (Il2CppClass *)userId )
        {
          ++v10;
        }
      }
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_16:
    sub_1BAB678(list, userId);
  }
  return 0;
}