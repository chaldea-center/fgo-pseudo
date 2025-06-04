void __fastcall UserItemMaster___ctor(UserItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02EAA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__, method);
    byte_4B02EAA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    36,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall UserItemMaster__GetEntity(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B02EA8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__, userId);
    byte_4B02EA8 = 1;
  }
  PK = (Il2CppObject *)UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  return (UserItemEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_32B3B28 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
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
  __int64 v12; // x1
  System_String_o *PK; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *lookup; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x23
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  DataMasterBase_TMaster__TEntity__PKType__c *v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x19
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__c **v24; // x10
  __int64 v25; // x0
  UserItemEntity_o *v26; // x21
  const MethodInfo *v27; // x3
  UserSvtCoinEntity_o *v29; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B02EAC & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, userId);
    sub_1BC3008(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1BC3008(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__get_lookup__, v10);
    sub_1BC3008(&System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo, v11);
    sub_1BC3008(&UserItemEntity_TypeInfo, v12);
    byte_4B02EAC = 1;
  }
  v29 = 0LL;
  entity = 0LL;
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___get_lookup(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           (const MethodInfo_32B191C *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_34;
  klass = lookup->klass;
  v17 = lookup;
  v18 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_8;
    }
    v20 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_8:
    v20 = sub_1C13570(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, _QWORD))v20)(
          v17,
          PK,
          *(_QWORD *)(v20 + 8)) & 1) == 0 )
  {
    v26 = (UserItemEntity_o *)sub_1BC3254(UserItemEntity_TypeInfo);
    UserItemEntity___ctor_42073904(v26, userId, itemId, v27);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( lookup )
    {
      lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                               lookup,
                                                               &entity,
                                                               itemId,
                                                               (const MethodInfo_32AF0BC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)lookup & 1) == 0 )
        return v26;
      if ( entity )
      {
        if ( LODWORD(entity[3].klass) != 29 )
          return v26;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
        if ( entity && lookup )
        {
          lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)UserSvtCoinMaster__TryGetEntity(
                                                                   (UserSvtCoinMaster_o *)lookup,
                                                                   &v29,
                                                                   userId,
                                                                   (int32_t)entity[4].klass,
                                                                   0LL);
          if ( ((unsigned __int8)lookup & 1) == 0 )
            return v26;
          if ( v29 && v26 )
          {
            v26->fields.num = v29->fields.num;
            return v26;
          }
        }
      }
    }
LABEL_34:
    sub_1BC3264(lookup, v15);
  }
  lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___get_lookup(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           (const MethodInfo_32B191C *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_34;
  v21 = lookup->klass;
  v22 = lookup;
  v23 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v24 = (System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__c **)&v21->_1.interfaceOffsets->offset;
    while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo )
    {
      --v23;
      v24 += 2;
      if ( !v23 )
        goto LABEL_16;
    }
    v25 = (__int64)(&v21->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v24);
  }
  else
  {
LABEL_16:
    v25 = sub_1C13570(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo, 2LL);
  }
  return (UserItemEntity_o *)(*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, _QWORD))v25)(
                               v22,
                               PK,
                               *(_QWORD *)(v25 + 8));
}


int32_t __fastcall UserItemMaster__GetUserStoneFragmentNum(UserItemMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  int64_t userIdNumber; // x20
  _DWORD *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B02EAF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    byte_4B02EAF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    byte_4AFC1F1 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = UserItemMaster__GetEntityDefinitely(this, userIdNumber, Master_object[23], v9)) == 0LL )
  {
    sub_1BC3264(Master_object, v8);
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

  if ( (byte_4B02EA9 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__, entity);
    byte_4B02EA9 = 1;
  }
  PK = (Il2CppObject *)UserItemEntity__CreatePK(userId, itemId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
}


UserItemEntity_array *__fastcall UserItemMaster__getList(UserItemMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4B02EAB & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    byte_4B02EAB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    byte_4AFC1F1 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserItemMaster__getList_42074596(this, v4->static_fields->userIdNumber, v2);
}


UserItemEntity_array *__fastcall UserItemMaster__getList_42074596(
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  v3 = userId;
  if ( (byte_4B02EAE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__, userId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserItemEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserItemEntity__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserItemEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_UserItemEntity__TypeInfo, v9);
    byte_4B02EAE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserItemEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        if ( list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v17 = Method_System_Collections_Generic_List_UserItemEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v19[4] = (Il2CppClass *)userId;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 4), userId, v14, v15);
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BC3264(list, userId);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (UserItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v12,
                                   (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
}


int32_t __fastcall UserItemMaster__getSum(UserItemMaster_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w21
  int32_t v10; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4B02EAD & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__, userId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__, v5);
    byte_4B02EAD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
      if ( Item && Item[1].klass == (Il2CppClass *)userId )
        ++v9;
      if ( v8 == ++v10 )
        return v9;
    }
LABEL_14:
    sub_1BC3264(list, userId);
  }
  return 0;
}