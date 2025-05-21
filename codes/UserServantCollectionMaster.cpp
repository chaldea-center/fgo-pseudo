void __fastcall UserServantCollectionMaster___ctor(UserServantCollectionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B45999 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__,
      method);
    sub_1BDB878(&UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo, v3);
    byte_4B45999 = 1;
  }
  v4 = (Il2CppObject *)sub_1BDBAC4(UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
  System_Object___ctor(v4, 0LL);
  this->fields.cachedUserServantCollectionEntityData = (struct UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.cachedUserServantCollectionEntityData, (int32_t)v4, v5, v6);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    30,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
}


UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntity(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B45997 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__,
      userId);
    byte_4B45997 = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, 0LL);
  return (UserServantCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_32E68F4 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
}


UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntityDefinitely(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v13; // x23
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v17; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v18; // x20
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v20; // x10
  __int64 v21; // x0
  UserServantCollectionEntity_o *v22; // x19

  if ( (byte_4B4599A & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__,
      userId);
    sub_1BDB878(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo, v7);
    sub_1BDB878(&UserServantCollectionEntity_TypeInfo, v8);
    byte_4B4599A = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, 0LL);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_20;
  klass = lookup->klass;
  v13 = lookup;
  v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C2C00C(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))p_method)(
          v13,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v22 = (UserServantCollectionEntity_o *)sub_1BDBAC4(UserServantCollectionEntity_TypeInfo);
    UserServantCollectionEntity___ctor_42069636(v22, userId, svtId, 0LL);
    return v22;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
  if ( !lookup )
LABEL_20:
    sub_1BDBAD4(lookup, v11);
  v17 = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v20 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_16;
    }
    v21 = (__int64)&v17->vtable[*(_DWORD *)v20 + 2].method;
  }
  else
  {
LABEL_16:
    v21 = sub_1C2C00C(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
            2LL);
  }
  return (UserServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v21)(
                                            v18,
                                            PK,
                                            *(_QWORD *)(v21 + 8));
}


System_Int32_array *__fastcall UserServantCollectionMaster__GetNewList(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v12; // w21
  int32_t v13; // w22
  System_Collections_ObjectModel_Collection_T__o *v14; // x23
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B4599F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4B4599F = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
      if ( list )
      {
        v14 = list;
        list = (System_Collections_ObjectModel_Collection_T__o *)UserServantCollectionEntity__IsNew(
                                                                   (UserServantCollectionEntity_o *)list,
                                                                   0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          klass = v14[1].klass;
          monitor = v14[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v21.fields.currentCryptoKey = klass;
          *(_QWORD *)&v21.fields.fakeValue = monitor;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                     v21,
                                                                     0LL);
          if ( !v9 )
            break;
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          v10 = (unsigned int)list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              (int32_t)list,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size + 1] = (int)list;
          }
        }
      }
      if ( v12 == ++v13 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BDBAD4(list, v10);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster__IsCostumeAlreadyGet(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  NetworkManager_c *v7; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v9; // x1
  struct System_Int32_array *costumeIds; // x8
  __int64 v11; // x9
  bool v12; // vf
  int v13; // w9
  int v14; // w10
  int32_t v15; // w11
  bool result; // w0

  if ( (byte_4B459A2 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4B459A2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4B3ED56 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       this,
                       v7->static_fields->userIdNumber,
                       svtId,
                       method);
  if ( !EntityDefinitely )
    sub_1BDBAD4(0LL, v9);
  costumeIds = EntityDefinitely->fields.costumeIds;
  if ( !costumeIds )
    return 0;
  v11 = *(_QWORD *)&costumeIds->max_length;
  if ( !v11 )
    return 0;
  v12 = __OFSUB__((_DWORD)v11, 1);
  v13 = v11 - 1;
  if ( v13 < 0 != v12 )
    return 0;
  v14 = 0;
  do
  {
    v15 = costumeIds->m_Items[v14 + 1];
    result = v15 == costumeId;
    if ( v15 == costumeId )
      break;
  }
  while ( v13 != v14++ );
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster__IsGet(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  NetworkManager_c *v6; // x0
  __int64 v7; // x1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B459A4 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4B459A4 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4B3ED56 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  if ( UserServantCollectionMaster__TryGetEntity(this, &entity, v6->static_fields->userIdNumber, svtId, v3) )
  {
    if ( !entity )
      sub_1BDBAD4(0LL, v7);
    return UserServantCollectionEntity__IsGet(entity, 0LL);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster__IsNew(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  UserServantCollectionEntity_o *v12; // x23
  Il2CppClass *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B4599E & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__,
      *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__, v5);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B4599E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1BDBAD4(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v10,
             (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    if ( Item )
    {
      v12 = (UserServantCollectionEntity_o *)Item;
      monitor = Item[1].monitor;
      klass = Item[2].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v16.fields.fakeValue = klass;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v16, 0LL) == svtId )
        return UserServantCollectionEntity__IsNew(v12, 0LL);
    }
    if ( v9 == ++v10 )
      return 0;
  }
}


bool __fastcall UserServantCollectionMaster__IsServantHaving(
        UserServantCollectionMaster_o *this,
        System_Int32_array *svtIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UserServantCollectionMaster_o *v5; // x20
  __int64 v6; // x8
  bool v7; // w21
  unsigned __int64 v8; // x24
  int32_t v9; // w23
  NetworkManager_c *v10; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v5 = this;
  if ( (byte_4B459A3 & 1) == 0 )
  {
    this = (UserServantCollectionMaster_o *)sub_1BDB878(&NetworkManager_TypeInfo, svtIds);
    byte_4B459A3 = 1;
  }
  if ( !svtIds )
    return 1;
  v6 = *(_QWORD *)&svtIds->max_length;
  if ( !v6 )
    return 1;
  v7 = 1;
  entity = 0LL;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v6 )
        sub_1BDBADC(this, svtIds, method);
      v9 = svtIds->m_Items[v8 + 1];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, svtIds);
        byte_4B3ED56 = 1;
      }
      v10 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v10 = NetworkManager_TypeInfo;
      }
      this = (UserServantCollectionMaster_o *)UserServantCollectionMaster__TryGetEntity(
                                                v5,
                                                &entity,
                                                v10->static_fields->userIdNumber,
                                                v9,
                                                v3);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      if ( !entity )
        sub_1BDBAD4(this, svtIds);
      if ( (unsigned int)(entity->fields.status - 1) > 1 )
        break;
      LODWORD(v6) = svtIds->max_length;
      if ( (__int64)++v8 >= (int)v6 )
        return 1;
    }
    return 0;
  }
  return v7;
}


void __fastcall UserServantCollectionMaster__OnListChangedImplementation(
        UserServantCollectionMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o **p_list; // x0
  __int64 v5; // x0
  System_NotImplementedException_o *v6; // x19
  __int64 v7; // x0

  if ( !e )
    goto LABEL_5;
  if ( e->fields._action > 4u )
  {
    v5 = sub_1BDB88C(&System_NotImplementedException_TypeInfo);
    v6 = (System_NotImplementedException_o *)sub_1BDBAC4(v5);
    System_NotImplementedException___ctor(v6, 0LL);
    v7 = sub_1BDB88C(&Method_UserServantCollectionMaster_OnListChangedImplementation__);
    sub_1BDB9A0(v6, v7);
  }
  this = (UserServantCollectionMaster_o *)this->fields.cachedUserServantCollectionEntityData;
  if ( !this )
LABEL_5:
    sub_1BDBAD4(this, e);
  this->fields.list = 0LL;
  p_list = &this->fields.list;
  *(p_list - 3) = 0LL;
  *((_WORD *)p_list - 8) = 0;
  *(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o **)((char *)p_list - 12) = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)p_list, 0, (int32_t)method, v3);
}


bool __fastcall UserServantCollectionMaster__TryGetEntity(
        UserServantCollectionMaster_o *this,
        UserServantCollectionEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B45998 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__,
      entity);
    byte_4B45998 = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserServantCollectionMaster__continueDeviceServantComment(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  ServantCommentMaster_o *v10; // x20
  int32_t Count; // w0
  int32_t v12; // w21
  int32_t v13; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x23
  Il2CppClass *klass; // x24
  void *monitor; // x25
  Il2CppClass *v18; // x23
  void *v19; // x24
  int32_t v20; // w0
  System_Int32_array *v21; // x24
  System_Int32_array *v22; // x23
  int32_t v23; // w25
  System_Int32_array *priorityList; // [xsp+8h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B459A0 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCommentMaster___, v4);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BDB878(&ServantCommentManager_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B459A0 = 1;
  }
  idList = 0LL;
  priorityList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_20;
  v10 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v13,
               (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
      if ( Item )
      {
        v15 = Item;
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v26.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v26.fields.fakeValue = klass;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v26, 0LL);
        if ( !v10 )
          break;
        if ( ServantCommentMaster__GetNewList(v10, &idList, &priorityList, (int32_t)Instance, 0LL) )
        {
          v19 = v15[1].monitor;
          v18 = v15[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = v19;
          *(_QWORD *)&v27.fields.fakeValue = v18;
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v27, 0LL);
          v21 = idList;
          v22 = priorityList;
          v23 = v20;
          if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          ServantCommentManager__SetOpen_42405232(v23, v21, v22, 0LL);
        }
      }
      if ( v12 == ++v13 )
        return;
    }
LABEL_20:
    sub_1BDBAD4(Instance, v9);
  }
}


void __fastcall UserServantCollectionMaster__continueDeviceUserServantCollection(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w21
  int32_t v14; // w22
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_Int32_array *v20; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B459A1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BDB878(&UserServantCollectionManager_TypeInfo, v9);
    byte_4B459A1 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
      if ( list && LODWORD(list[1].fields.items) == 2 )
      {
        klass = list[1].klass;
        monitor = list[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = klass;
        *(_QWORD *)&v21.fields.fakeValue = monitor;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                   v21,
                                                                   0LL);
        if ( !v10 )
          break;
        items = v10->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        v11 = (unsigned int)list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            (int32_t)list,
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size + 1] = (int)list;
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_17;
    }
LABEL_21:
    sub_1BDBAD4(list, v11);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_21;
  v20 = System_Collections_Generic_List_int___ToArray(
          v10,
          (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__SetOld_42490388(v20, 0LL);
}


UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getCollectionList(
        UserServantCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
        bool isEquip,
        bool ignoreHideStateSvt,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  NetworkManager_c *v21; // x0
  int64_t userIdNumber; // x1
  __int64 cachedUserServantCollectionEntityData; // x0
  __int64 v24; // x20
  __int64 v25; // x25
  System_Collections_Generic_List_object__o *v26; // x24
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  unsigned __int64 i; // x29
  System_String_o *v30; // x26
  System_String_o *v31; // x0
  System_String_o *v32; // x26
  __int64 v33; // x8
  __int64 v34; // x27
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x27
  __int64 v40; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v41; // x10
  __int64 v42; // x0
  int64_t v43; // x27
  int32_t v44; // w28
  UserServantCollectionEntity_o *v45; // x26
  int32_t status; // w8
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  __int64 v51; // x10
  int32_t v52; // w8
  int32_t v53; // w9
  CGThumbnailListItem_o *v54; // x0
  int32_t *v56; // [xsp+10h] [xbp-90h]
  int32_t v58; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList; // [xsp+28h] [xbp-78h] BYREF
  __int64 findSuma; // [xsp+30h] [xbp-70h] BYREF
  int64_t v61; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B4599C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, getSum);
    sub_1BDB878(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__,
      v11);
    sub_1BDB878(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v15);
    sub_1BDB878(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v16);
    sub_1BDB878(&NetworkManager_TypeInfo, v17);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BDB878(&UserServantCollectionEntity_TypeInfo, v19);
    sub_1BDB878(&StringLiteral_1479/*":"*/, v20);
    byte_4B4599C = 1;
  }
  userServantCollectionEntityList = 0LL;
  findSuma = 0LL;
  v58 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, getSum);
    byte_4B3ED56 = 1;
  }
  v21 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v21 = NetworkManager_TypeInfo;
  }
  userIdNumber = v21->static_fields->userIdNumber;
  v61 = userIdNumber;
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  if ( UserServantCollectionMaster_UserServantCollectionEntityDataCache__LoadCache(
         (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)cachedUserServantCollectionEntityData,
         userIdNumber,
         isEquip,
         ignoreHideStateSvt,
         (int32_t *)&findSuma + 1,
         (int32_t *)&findSuma,
         &userServantCollectionEntityList,
         v6) )
  {
    *getSum = HIDWORD(findSuma);
    *findSum = findSuma;
    cachedUserServantCollectionEntityData = (__int64)userServantCollectionEntityList;
    if ( userServantCollectionEntityList )
      return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                    (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
LABEL_57:
    sub_1BDBAD4(cachedUserServantCollectionEntityData, userIdNumber);
  }
  cachedUserServantCollectionEntityData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)cachedUserServantCollectionEntityData,
                                                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)ServantMaster__GetCollectionList_41671668(
                                                     (ServantMaster_o *)cachedUserServantCollectionEntityData,
                                                     isEquip,
                                                     0LL);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  v24 = *(_QWORD *)(cachedUserServantCollectionEntityData + 24);
  v25 = cachedUserServantCollectionEntityData;
  v26 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  v56 = getSum;
  *getSum = 0;
  *findSum = 0;
  if ( (int)v24 >= 1 )
  {
    for ( i = 0LL; i != (unsigned int)v24; ++i )
    {
      if ( i >= *(unsigned int *)(v25 + 24) )
        sub_1BDBADC(cachedUserServantCollectionEntityData, userIdNumber, v27);
      v58 = *(_DWORD *)(v25 + 4 * i + 32);
      v30 = System_Int64__ToString((int64_t)&v61, 0LL);
      v31 = System_Int32__ToString((int32_t)&v58, 0LL);
      v32 = System_String__Concat_62610508(v30, (System_String_o *)StringLiteral_1479/*":"*/, v31, 0LL);
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase_object__object__object___get_lookup(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                         (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_57;
      v33 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v34 = cachedUserServantCollectionEntityData;
      v35 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
      {
        v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)v36 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_24;
        }
        v37 = v33 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_24:
        v37 = sub_1C2C00C(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v37)(v34, v32, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      {
        v43 = v61;
        v44 = v58;
        v45 = (UserServantCollectionEntity_o *)sub_1BDBAC4(UserServantCollectionEntity_TypeInfo);
        UserServantCollectionEntity___ctor_42069636(v45, v43, v44, 0LL);
        if ( ignoreHideStateSvt )
        {
          if ( !v45 )
            goto LABEL_57;
          cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(v45, 0LL);
          if ( (cachedUserServantCollectionEntityData & 1) != 0 )
            continue;
        }
        goto LABEL_47;
      }
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase_object__object__object___get_lookup(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                         (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_57;
      v38 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v39 = cachedUserServantCollectionEntityData;
      v40 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
      {
        v41 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *(v41 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
        {
          --v40;
          v41 += 2;
          if ( !v40 )
            goto LABEL_32;
        }
        v42 = v38 + 16LL * (*(_DWORD *)v41 + 2) + 312;
      }
      else
      {
LABEL_32:
        v42 = sub_1C2C00C(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                2LL);
      }
      cachedUserServantCollectionEntityData = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v42)(
                                                v39,
                                                v32,
                                                *(_QWORD *)(v42 + 8));
      v45 = (UserServantCollectionEntity_o *)cachedUserServantCollectionEntityData;
      if ( ignoreHideStateSvt )
      {
        if ( !cachedUserServantCollectionEntityData )
          goto LABEL_57;
        cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(
                                                  (UserServantCollectionEntity_o *)cachedUserServantCollectionEntityData,
                                                  0LL);
        if ( (cachedUserServantCollectionEntityData & 1) != 0 )
          continue;
      }
      else if ( !cachedUserServantCollectionEntityData )
      {
        goto LABEL_57;
      }
      status = v45->fields.status;
      if ( status != 1 )
      {
        if ( status != 2 )
          goto LABEL_47;
        ++*v56;
      }
      ++*findSum;
LABEL_47:
      if ( !v26 )
        goto LABEL_57;
      items = v26->fields._items;
      v48 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
      ++v26->fields._version;
      if ( !items )
        goto LABEL_57;
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)v45,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        v26->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v45;
        sub_1BDB81C((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v45, v27, v28);
      }
    }
  }
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  v51 = v61;
  v52 = *findSum;
  v53 = *v56;
  *(_QWORD *)(cachedUserServantCollectionEntityData + 40) = v26;
  v54 = (CGThumbnailListItem_o *)(cachedUserServantCollectionEntityData + 40);
  LOBYTE(v54[-1].fields._Type_k__BackingField) = isEquip;
  BYTE1(v54[-1].fields._Type_k__BackingField) = ignoreHideStateSvt;
  *(_QWORD *)&v54[-1].fields._Id_k__BackingField = v51;
  *(_DWORD *)&v54[-1].fields._HaveDifferenceCG_k__BackingField = v53;
  LODWORD(v54[-1].fields._ThumbnailSpritePath_k__BackingField) = v52;
  sub_1BDB81C(v54, (int32_t)v26, v27, v28);
  if ( !v26 )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)v26;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getList(
        UserServantCollectionMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 v15; // x1
  NetworkManager_c *v16; // x0
  __int64 Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x22
  unsigned __int64 v20; // x25
  __int64 v21; // x29
  System_String_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o *v25; // x23
  System_String_o *v26; // x0
  System_String_o *v27; // x23
  __int64 v28; // x8
  __int64 v29; // x24
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x24
  __int64 v35; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v36; // x10
  __int64 v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int64_t userIdNumber; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B4599B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind);
    sub_1BDB878(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__,
      v5);
    sub_1BDB878(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v9);
    sub_1BDB878(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v10);
    sub_1BDB878(&NetworkManager_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BDB878(&StringLiteral_1479/*":"*/, v13);
    byte_4B4599B = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v15);
    byte_4B3ED56 = 1;
  }
  v16 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v16 = NetworkManager_TypeInfo;
  }
  userIdNumber = v16->static_fields->userIdNumber;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  v19 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) >= 1 )
  {
    v20 = 0LL;
    v21 = (unsigned int)*(_QWORD *)(Instance + 24);
    while ( 1 )
    {
      v22 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
      if ( v20 >= *(unsigned int *)(v19 + 24) )
        sub_1BDBADC(v22, v23, v24);
      v25 = v22;
      v26 = System_Int32__ToString((int)v19 + 4 * (int)v20 + 32, 0LL);
      v27 = System_String__Concat_62610508(v25, (System_String_o *)StringLiteral_1479/*":"*/, v26, 0LL);
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
      if ( !Instance )
        break;
      v28 = *(_QWORD *)Instance;
      v29 = Instance;
      v30 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)v31 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_20;
        }
        v32 = v28 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_20:
        v32 = sub_1C2C00C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v32)(v29, v27, *(_QWORD *)(v32 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
        if ( !Instance )
          break;
        v33 = *(_QWORD *)Instance;
        v34 = Instance;
        v35 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
        {
          v36 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *(v36 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
          {
            --v35;
            v36 += 2;
            if ( !v35 )
              goto LABEL_28;
          }
          v37 = v33 + 16LL * (*(_DWORD *)v36 + 2) + 312;
        }
        else
        {
LABEL_28:
          v37 = sub_1C2C00C(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v37)(v34, v27, *(_QWORD *)(v37 + 8));
        if ( !Instance )
          break;
        v18 = Instance;
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v41 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)Instance,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v18;
            sub_1BDB81C((CGThumbnailListItem_o *)(v43 + 4), v18, v38, v39);
          }
        }
      }
      if ( ++v20 == v21 )
        goto LABEL_38;
    }
LABEL_40:
    sub_1BDBAD4(Instance, v18);
  }
LABEL_38:
  if ( !v14 )
    goto LABEL_40;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v14,
                                                (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


System_Collections_Generic_List_UserServantCollectionEntity__o *__fastcall UserServantCollectionMaster__getServantEquipCollectionList(
        UserServantCollectionMaster_o *this,
        System_Collections_Generic_Dictionary_int__string__o *servantEquipIdStrDic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  NetworkManager_c *v15; // x0
  System_String_o *v16; // x21
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  DataManager_o *v19; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  System_Collections_Generic_List_object__o *v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x26
  __int64 v26; // x27
  int32_t v27; // w1
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  DataManager_c *klass; // x8
  Il2CppObject *v31; // x25
  DataManager_o *v32; // x24
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  DataManager_c *v36; // x8
  Il2CppObject *v37; // x25
  DataManager_o *v38; // x24
  __int64 v39; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v40; // x10
  __int64 v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  DataManager_o *v47; // x1
  Il2CppClass **v48; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-78h] BYREF
  int32_t key; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B4599D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, servantEquipIdStrDic);
    sub_1BDB878(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__,
      v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__string__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__, v7);
    sub_1BDB878(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v11);
    sub_1BDB878(&NetworkManager_TypeInfo, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BDB878(&StringLiteral_1479/*":"*/, v14);
    byte_4B4599D = 1;
  }
  key = 0;
  value = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, servantEquipIdStrDic);
    byte_4B3ED56 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  userIdNumber = v15->static_fields->userIdNumber;
  v16 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)ServantMaster__GetCollectionList_41671668((ServantMaster_o *)Instance, 1, 0LL);
  if ( !Instance )
    goto LABEL_41;
  v19 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v21 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v25 = 0LL;
    v26 = (unsigned int)m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v25 >= LODWORD(v19->fields.m_CancellationTokenSource) )
        sub_1BDBADC(v22, v23, v24);
      v27 = *((_DWORD *)&v19->fields._DispLog + v25);
      key = v27;
      if ( servantEquipIdStrDic )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
                v27,
                &value,
                (const MethodInfo_333CAAC *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
        {
          v28 = System_Int32__ToString((int32_t)&key, 0LL);
          value = (Il2CppObject *)System_String__Concat_62610508(v16, (System_String_o *)StringLiteral_1479/*":"*/, v28, 0LL);
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
            key,
            value,
            (const MethodInfo_333B320 *)Method_System_Collections_Generic_Dictionary_int__string__Add__);
        }
      }
      else
      {
        v29 = System_Int32__ToString((int32_t)&key, 0LL);
        value = (Il2CppObject *)System_String__Concat_62610508(v16, (System_String_o *)StringLiteral_1479/*":"*/, v29, 0LL);
      }
      Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
      if ( !Instance )
        break;
      klass = Instance->klass;
      v31 = value;
      v32 = Instance;
      v33 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
        {
          --v33;
          p_offset += 4;
          if ( !v33 )
            goto LABEL_24;
        }
        v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_24:
        v35 = sub_1C2C00C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                0LL);
      }
      v22 = (*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v35)(v32, v31, *(_QWORD *)(v35 + 8));
      if ( (v22 & 1) != 0 )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      (const MethodInfo_32E46E8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
        if ( !Instance )
          break;
        v36 = Instance->klass;
        v37 = value;
        v38 = Instance;
        v39 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
        {
          v40 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)&v36->_1.interfaceOffsets->offset;
          while ( *(v40 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
          {
            --v39;
            v40 += 2;
            if ( !v39 )
              goto LABEL_32;
          }
          v41 = (__int64)(&v36->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v40);
        }
        else
        {
LABEL_32:
          v41 = sub_1C2C00C(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                  2LL);
        }
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v41)(
                                      v38,
                                      v37,
                                      *(_QWORD *)(v41 + 8));
        if ( !v21 )
          break;
        items = v21->fields._items;
        v45 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        v47 = Instance;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)Instance,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v47;
          sub_1BDB81C((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v47, v42, v43);
        }
      }
      if ( ++v25 == v26 )
        return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v21;
    }
LABEL_41:
    sub_1BDBAD4(Instance, v18);
  }
  return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v21;
}


void __fastcall UserServantCollectionMaster_UserServantCollectionEntityDataCache___ctor(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantCollectionMaster_UserServantCollectionEntityDataCache__Clear(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_List_UserServantCollectionEntity__o **p_cachedUserServantCollectionEntityList; // x0

  this->fields.cachedUserServantCollectionEntityList = 0LL;
  p_cachedUserServantCollectionEntityList = &this->fields.cachedUserServantCollectionEntityList;
  *(p_cachedUserServantCollectionEntityList - 3) = 0LL;
  *((_WORD *)p_cachedUserServantCollectionEntityList - 8) = 0;
  *(struct System_Collections_Generic_List_UserServantCollectionEntity__o **)((char *)p_cachedUserServantCollectionEntityList
                                                                            - 12) = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)p_cachedUserServantCollectionEntityList, 0, v2, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster_UserServantCollectionEntityDataCache__LoadCache(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        int64_t userId,
        bool isEquip,
        bool ignoreHideStateServant,
        int32_t *getSum,
        int32_t *findSum,
        System_Collections_Generic_List_UserServantCollectionEntity__o **userServantCollectionEntityList,
        const MethodInfo *method)
{
  char v15; // w2
  const MethodInfo *v16; // x3
  bool result; // w0
  System_Collections_Generic_List_UserServantCollectionEntity__o *cachedUserServantCollectionEntityList; // x1

  *getSum = 0;
  *findSum = 0;
  *userServantCollectionEntityList = 0LL;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)userServantCollectionEntityList,
    0,
    isEquip,
    (const MethodInfo *)ignoreHideStateServant);
  result = 0;
  if ( this->fields.cachedUserId == userId )
  {
    if ( this->fields.cachedIsEquip == isEquip && this->fields.cachedIgnoreHideStateServant == ignoreHideStateServant )
    {
      *getSum = this->fields.cachedGetSum;
      *findSum = this->fields.cachedFindSum;
      cachedUserServantCollectionEntityList = this->fields.cachedUserServantCollectionEntityList;
      *userServantCollectionEntityList = cachedUserServantCollectionEntityList;
      sub_1BDB81C(
        (CGThumbnailListItem_o *)userServantCollectionEntityList,
        (int32_t)cachedUserServantCollectionEntityList,
        v15,
        v16);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCollectionMaster_UserServantCollectionEntityDataCache__SaveCache(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        int64_t userId,
        bool isEquip,
        bool ignoreHideStateServant,
        int32_t getSum,
        int32_t findSum,
        System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UserServantCollectionEntity__o **p_cachedUserServantCollectionEntityList; // x0

  this->fields.cachedUserServantCollectionEntityList = userServantCollectionEntityList;
  p_cachedUserServantCollectionEntityList = &this->fields.cachedUserServantCollectionEntityList;
  *(p_cachedUserServantCollectionEntityList - 3) = (struct System_Collections_Generic_List_UserServantCollectionEntity__o *)userId;
  *((_BYTE *)p_cachedUserServantCollectionEntityList - 16) = isEquip;
  *((_BYTE *)p_cachedUserServantCollectionEntityList - 15) = ignoreHideStateServant;
  *((_DWORD *)p_cachedUserServantCollectionEntityList - 3) = getSum;
  *((_DWORD *)p_cachedUserServantCollectionEntityList - 2) = findSum;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)p_cachedUserServantCollectionEntityList,
    (int32_t)userServantCollectionEntityList,
    isEquip,
    (const MethodInfo *)ignoreHideStateServant);
}