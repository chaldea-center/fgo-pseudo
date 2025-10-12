void UserItemMaster___ctor(UserItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C388B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
    byte_4C388B0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    36,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *UserItemMaster__GetEntity(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C388AE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
    byte_4C388AE = 1;
  }
  PK = (Il2CppObject *)UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  return (UserItemEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_339B2F0 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
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
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x23
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  DataMasterBase_TMaster__TEntity__PKType__c *v14; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x19
  __int64 v16; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__c **v17; // x10
  __int64 v18; // x0
  UserItemEntity_o *v19; // x21
  const MethodInfo *v20; // x3
  UserSvtCoinEntity_o *v22; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C388B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo);
    sub_1C32C20(&UserItemEntity_TypeInfo);
    byte_4C388B2 = 1;
  }
  v22 = 0;
  entity = 0;
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___get_lookup(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           (const MethodInfo_33990E4 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_34;
  klass = lookup->klass;
  v10 = lookup;
  v11 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_8:
    v13 = sub_1C83438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, _QWORD))v13)(
          v10,
          PK,
          *(_QWORD *)(v13 + 8))
      & 1) == 0 )
  {
    v19 = (UserItemEntity_o *)sub_1C32E6C(UserItemEntity_TypeInfo);
    UserItemEntity___ctor_42997496(v19, userId, itemId, v20);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( lookup )
    {
      lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                               lookup,
                                                               &entity,
                                                               itemId,
                                                               (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)lookup & 1) == 0 )
        return v19;
      if ( entity )
      {
        if ( LODWORD(entity[3].klass) != 29 )
          return v19;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
        if ( entity && lookup )
        {
          lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)UserSvtCoinMaster__TryGetEntity(
                                                                   (UserSvtCoinMaster_o *)lookup,
                                                                   &v22,
                                                                   userId,
                                                                   (int32_t)entity[4].klass,
                                                                   0);
          if ( ((unsigned __int8)lookup & 1) == 0 )
            return v19;
          if ( v22 && v19 )
          {
            v19->fields.num = v22->fields.num;
            return v19;
          }
        }
      }
    }
LABEL_34:
    sub_1C32E7C(lookup);
  }
  lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___get_lookup(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           (const MethodInfo_33990E4 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_34;
  v14 = lookup->klass;
  v15 = lookup;
  v16 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v17 = (System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__c **)&v14->_1.interfaceOffsets->offset;
    while ( *(v17 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo )
    {
      --v16;
      v17 += 2;
      if ( !v16 )
        goto LABEL_16;
    }
    v18 = (__int64)(&v14->vtable._2_GetHashCode + *(_DWORD *)v17);
  }
  else
  {
LABEL_16:
    v18 = sub_1C83438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo, 2);
  }
  return (UserItemEntity_o *)(*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, _QWORD))v18)(
                               v15,
                               PK,
                               *(_QWORD *)(v18 + 8));
}


int32_t UserItemMaster__GetUserStoneFragmentNum(UserItemMaster_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  int64_t userIdNumber; // x20
  _DWORD *Master_object; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C388B5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C388B5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = UserItemMaster__GetEntityDefinitely(this, userIdNumber, Master_object[23], v6)) == 0 )
  {
    sub_1C32E7C(Master_object);
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

  if ( (byte_4C388AF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
    byte_4C388AF = 1;
  }
  PK = (Il2CppObject *)UserItemEntity__CreatePK(userId, itemId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
}


bool UserItemMaster__TryGetItemMaxLeft(UserItemMaster_o *this, int32_t *left, int32_t itemId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  bool result; // w0
  int32_t MaxNum; // w0
  const MethodInfo *v10; // x2
  int32_t v11; // w22
  NetworkManager_c *v12; // x0
  Il2CppObject *PK; // x0
  int monitor_high; // w8
  int32_t v15; // w8
  Il2CppObject *v16; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C388B6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C388B6 = 1;
  }
  entity = 0;
  v16 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_22;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    itemId,
    (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = (char)entity;
  if ( entity )
  {
    MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)entity, 0);
    if ( MaxNum >= 1 )
    {
      v11 = MaxNum;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      v12 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v12 = NetworkManager_TypeInfo;
      }
      PK = (Il2CppObject *)UserItemEntity__CreatePK(v12->static_fields->userIdNumber, itemId, v10);
      Master_object = (Il2CppObject *)DataMasterBase_object__object__object___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        &v16,
                                        PK,
                                        (const MethodInfo_339B33C *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        monitor_high = 0;
        goto LABEL_20;
      }
      if ( v16 )
      {
        monitor_high = HIDWORD(v16[1].monitor);
LABEL_20:
        v15 = v11 - monitor_high;
        result = 1;
        goto LABEL_21;
      }
LABEL_22:
      sub_1C32E7C(Master_object);
    }
    v15 = 0;
    result = 0;
  }
  else
  {
    v15 = 0;
  }
LABEL_21:
  *left = v15;
  return result;
}


UserItemEntity_array *UserItemMaster__getList(UserItemMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4C388B1 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C388B1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserItemMaster__getList_42998188(this, v4->static_fields->userIdNumber, v2);
}


UserItemEntity_array *UserItemMaster__getList_42998188(
        UserItemMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C388B4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserItemEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserItemEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserItemEntity__TypeInfo);
    byte_4C388B4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserItemEntity___ctor__);
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
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( list->fields.items == (struct System_Collections_Generic_IList_T__o *)userId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_UserItemEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v11;
            sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C32E7C(list);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (UserItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
}


int32_t UserItemMaster__getSum(UserItemMaster_o *this, int64_t userId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4C388B3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
    byte_4C388B3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
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
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
      if ( Item && Item[1].klass == (Il2CppClass *)userId )
        ++v8;
      if ( v7 == ++v9 )
        return v8;
    }
LABEL_14:
    sub_1C32E7C(list);
  }
  return 0;
}