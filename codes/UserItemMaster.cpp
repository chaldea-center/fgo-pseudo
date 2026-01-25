void UserItemMaster___ctor(UserItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF540 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
    byte_4CEF540 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    36,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *UserItemMaster__GetEntity(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF53E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
    byte_4CEF53E = 1;
  }
  PK = (Il2CppObject *)UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  return (UserItemEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_3432DB4 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *UserItemMaster__GetEntityDefinitely(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *lookup; // x0
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x23
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  DataMasterBase_TMaster__TEntity__PKType__c *v15; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__c **v18; // x10
  __int64 v19; // x0
  UserItemEntity_o *v20; // x21
  const MethodInfo *v21; // x3
  UserSvtCoinEntity_o *v23; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEF542 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__get_lookup__);
    sub_1C7BAE8(&System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo);
    sub_1C7BAE8(&UserItemEntity_TypeInfo);
    byte_4CEF542 = 1;
  }
  v23 = 0;
  entity = 0;
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___get_lookup(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           (const MethodInfo_3430BA8 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_34;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_8;
    }
    v14 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_8:
    v14 = sub_1C51E70(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, _QWORD))v14)(
          v11,
          PK,
          *(_QWORD *)(v14 + 8))
      & 1) == 0 )
  {
    v20 = (UserItemEntity_o *)sub_1C7BD34(UserItemEntity_TypeInfo);
    UserItemEntity___ctor_43636772(v20, userId, itemId, v21);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( lookup )
    {
      lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                               lookup,
                                                               &entity,
                                                               itemId,
                                                               (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)lookup & 1) == 0 )
        return v20;
      if ( entity )
      {
        if ( LODWORD(entity[3].klass) != 29 )
          return v20;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
        if ( entity && lookup )
        {
          lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)UserSvtCoinMaster__TryGetEntity(
                                                                   (UserSvtCoinMaster_o *)lookup,
                                                                   &v23,
                                                                   userId,
                                                                   (int32_t)entity[4].klass,
                                                                   0);
          if ( ((unsigned __int8)lookup & 1) == 0 )
            return v20;
          if ( v23 && v20 )
          {
            v20->fields.num = v23->fields.num;
            return v20;
          }
        }
      }
    }
LABEL_34:
    sub_1C7BD40(lookup, v9);
  }
  lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___get_lookup(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           (const MethodInfo_3430BA8 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_34;
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v18 = (System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = (__int64)(&v15->vtable._2_GetHashCode + *(_DWORD *)v18);
  }
  else
  {
LABEL_16:
    v19 = sub_1C51E70(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo, 2);
  }
  return (UserItemEntity_o *)(*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, _QWORD))v19)(
                               v16,
                               PK,
                               *(_QWORD *)(v19 + 8));
}


int32_t UserItemMaster__GetUserStoneFragmentNum(UserItemMaster_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  int64_t userIdNumber; // x20
  _DWORD *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4CEF545 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEF545 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  userIdNumber = v3->static_fields->userIdNumber;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = UserItemMaster__GetEntityDefinitely(this, userIdNumber, Master_object[23], v7)) == 0 )
  {
    sub_1C7BD40(Master_object, v6);
  }
  return Master_object[7];
}


bool UserItemMaster__IsItemMaxLeftEqual(UserItemMaster_o *this, int32_t itemId, int32_t num, const MethodInfo *method)
{
  bool ItemMaxLeft; // w0
  int32_t left; // [xsp+Ch] [xbp-14h] BYREF

  left = 0;
  ItemMaxLeft = UserItemMaster__TryGetItemMaxLeft(this, &left, itemId, method);
  return ItemMaxLeft && left == num;
}


bool UserItemMaster__TryGetEntity(
        UserItemMaster_o *this,
        UserItemEntity_o **entity,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF53F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
    byte_4CEF53F = 1;
  }
  PK = (Il2CppObject *)UserItemEntity__CreatePK(userId, itemId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
}


bool UserItemMaster__TryGetItemMaxLeft(UserItemMaster_o *this, int32_t *left, int32_t itemId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  bool result; // w0
  int32_t MaxNum; // w0
  const MethodInfo *v11; // x2
  int32_t v12; // w22
  NetworkManager_c *v13; // x0
  Il2CppObject *PK; // x0
  int monitor_high; // w8
  int32_t v16; // w8
  Il2CppObject *v17; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CEF546 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEF546 = 1;
  }
  entity = 0;
  v17 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_22;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    itemId,
    (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = (char)entity;
  if ( entity )
  {
    MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0);
    if ( MaxNum >= 1 )
    {
      v12 = MaxNum;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CE827C )
      {
        sub_1C7BAE8(&NetworkManager_TypeInfo);
        byte_4CE827C = 1;
      }
      v13 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v13 = NetworkManager_TypeInfo;
      }
      PK = (Il2CppObject *)UserItemEntity__CreatePK(v13->static_fields->userIdNumber, itemId, v11);
      Master_object = (Il2CppObject *)DataMasterBase_object__object__object___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        &v17,
                                        PK,
                                        (const MethodInfo_3432E00 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        monitor_high = 0;
        goto LABEL_20;
      }
      if ( v17 )
      {
        monitor_high = HIDWORD(v17[1].monitor);
LABEL_20:
        v16 = v12 - monitor_high;
        result = 1;
        goto LABEL_21;
      }
LABEL_22:
      sub_1C7BD40(Master_object, v8);
    }
    v16 = 0;
    result = 0;
  }
  else
  {
    v16 = 0;
  }
LABEL_21:
  *left = v16;
  return result;
}


UserItemEntity_array *UserItemMaster__getList(UserItemMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4CEF541 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEF541 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserItemMaster__getList_43637448(this, v4->static_fields->userIdNumber, v2);
}


UserItemEntity_array *UserItemMaster__getList_43637448(
        UserItemMaster_o *this,
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
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = userId;
  if ( (byte_4CEF544 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserItemEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserItemEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserItemEntity__TypeInfo);
    byte_4CEF544 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserItemEntity___ctor__);
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
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        if ( list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_UserItemEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = (Il2CppClass *)userId;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 4), userId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C7BD40(list, userId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (UserItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
}


int32_t UserItemMaster__getSum(UserItemMaster_o *this, int64_t userId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4CEF543 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
    byte_4CEF543 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
      if ( Item && Item[1].klass == (Il2CppClass *)userId )
        ++v8;
      if ( v7 == ++v9 )
        return v8;
    }
LABEL_14:
    sub_1C7BD40(list, userId);
  }
  return 0;
}