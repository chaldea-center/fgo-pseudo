void UserServantCollectionMaster___ctor(UserServantCollectionMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC8397 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
    sub_1C713B0(&UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
    byte_4CC8397 = 1;
  }
  v3 = (Il2CppObject *)sub_1C715FC(UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.cachedUserServantCollectionEntityData = (struct UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)v3;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.cachedUserServantCollectionEntityData,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    30,
    (const MethodInfo_340B614 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *UserServantCollectionMaster__GetEntity(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC8395 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
    byte_4CC8395 = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_340D938 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *UserServantCollectionMaster__GetEntityDefinitely(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v11; // x23
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v18; // x10
  __int64 v19; // x0
  UserServantCollectionEntity_o *v20; // x19
  const MethodInfo *v21; // x3

  if ( (byte_4CC8398 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo);
    sub_1C713B0(&UserServantCollectionEntity_TypeInfo);
    byte_4CC8398 = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_340B72C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_20;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_8;
    }
    v14 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v14 = sub_1C47738(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
            0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v14)(
          v11,
          PK,
          *(_QWORD *)(v14 + 8))
      & 1) == 0 )
  {
    v20 = (UserServantCollectionEntity_o *)sub_1C715FC(UserServantCollectionEntity_TypeInfo);
    UserServantCollectionEntity___ctor_43417804(v20, userId, svtId, v21);
    return v20;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_340B72C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
  if ( !lookup )
LABEL_20:
    sub_1C71608(lookup, v9);
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v18 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = (__int64)&v15->vtable[*(_DWORD *)v18 + 2];
  }
  else
  {
LABEL_16:
    v19 = sub_1C47738(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
            2);
  }
  return (UserServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v19)(
                                            v16,
                                            PK,
                                            *(_QWORD *)(v19 + 8));
}


System_Int32_array *UserServantCollectionMaster__GetNewList(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  System_Collections_ObjectModel_Collection_T__o *v8; // x23
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4CC839D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC839D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
      if ( list )
      {
        v8 = list;
        list = (System_Collections_ObjectModel_Collection_T__o *)UserServantCollectionEntity__IsNew(
                                                                   (UserServantCollectionEntity_o *)list,
                                                                   v4);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          klass = v8[1].klass;
          monitor = v8[1].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v15.fields.currentCryptoKey = klass;
          *(_QWORD *)&v15.fields.fakeValue = monitor;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                                     v15,
                                                                     0);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          v4 = (const MethodInfo *)(unsigned int)list;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              (int32_t)list,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = (int)list;
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C71608(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool UserServantCollectionMaster__IsCostumeAlreadyGet(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  NetworkManager_c *v7; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v9; // x1
  struct System_Int32_array *costumeIds; // x8
  il2cpp_array_size_t max_length; // x9
  bool v12; // vf
  int v13; // w9
  int v14; // w10
  int32_t v15; // w11
  bool result; // w0

  if ( (byte_4CC83A0 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC83A0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
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
    sub_1C71608(0, v9);
  costumeIds = EntityDefinitely->fields.costumeIds;
  if ( !costumeIds )
    return 0;
  max_length = costumeIds->max_length;
  if ( !max_length )
    return 0;
  v12 = __OFSUB__((_DWORD)max_length, 1);
  v13 = max_length - 1;
  if ( v13 < 0 != v12 )
    return 0;
  v14 = 0;
  do
  {
    v15 = costumeIds->m_Items[v14];
    result = v15 == costumeId;
    if ( v15 == costumeId )
      break;
  }
  while ( v13 != v14++ );
  return result;
}


bool UserServantCollectionMaster__IsGet(UserServantCollectionMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  NetworkManager_c *v6; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC83A2 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC83A2 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  v7 = UserServantCollectionMaster__TryGetEntity(this, &entity, v6->static_fields->userIdNumber, svtId, v3);
  if ( !v7 )
    return 0;
  if ( !entity )
    sub_1C71608(v7, v8);
  return entity->fields.status == 2;
}


// local variable allocation has failed, the output may be wrong!
bool UserServantCollectionMaster__IsNew(UserServantCollectionMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  UserServantCollectionEntity_o *v10; // x23
  Il2CppClass *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4CC839C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC839C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1C71608(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    if ( Item )
    {
      v10 = (UserServantCollectionEntity_o *)Item;
      monitor = Item[1].monitor;
      klass = Item[2].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v14.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v14.fields.fakeValue = klass;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v14, 0) == svtId )
        return UserServantCollectionEntity__IsNew(v10, *(const MethodInfo **)&svtId);
    }
    if ( v7 == ++v8 )
      return 0;
  }
}


bool UserServantCollectionMaster__IsServantHaving(
        UserServantCollectionMaster_o *this,
        System_Int32_array *svtIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UserServantCollectionMaster_o *v5; // x20
  il2cpp_array_size_t max_length; // x8
  bool v7; // w21
  unsigned __int64 v8; // x24
  int32_t v9; // w23
  NetworkManager_c *v10; // x0
  __int64 v11; // x1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v5 = this;
  if ( (byte_4CC83A1 & 1) == 0 )
  {
    this = (UserServantCollectionMaster_o *)sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC83A1 = 1;
  }
  if ( !svtIds )
    return 1;
  max_length = svtIds->max_length;
  if ( !max_length )
    return 1;
  v7 = 1;
  entity = 0;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C71610(this);
      v9 = svtIds->m_Items[v8];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CC112A )
      {
        sub_1C713B0(&NetworkManager_TypeInfo);
        byte_4CC112A = 1;
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
        sub_1C71608(this, v11);
      if ( (unsigned int)(entity->fields.status - 1) > 1 )
        break;
      LODWORD(max_length) = svtIds->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        return 1;
    }
    return 0;
  }
  return v7;
}


void UserServantCollectionMaster__OnListChangedImplementation(
        UserServantCollectionMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o **p_list; // x0
  __int64 v9; // x0
  System_NotImplementedException_o *v10; // x19
  __int64 v11; // x0

  if ( !e )
    goto LABEL_5;
  if ( e->fields._action > 4u )
  {
    v9 = sub_1C713C4(&System_NotImplementedException_TypeInfo);
    v10 = (System_NotImplementedException_o *)sub_1C715FC(v9);
    System_NotImplementedException___ctor(v10, 0);
    v11 = sub_1C713C4(&Method_UserServantCollectionMaster_OnListChangedImplementation__);
    sub_1C714D8(v10, v11);
  }
  this = (UserServantCollectionMaster_o *)this->fields.cachedUserServantCollectionEntityData;
  if ( !this )
LABEL_5:
    sub_1C71608(this, e);
  this->fields.list = 0;
  p_list = &this->fields.list;
  *(p_list - 3) = 0;
  *((_WORD *)p_list - 8) = 0;
  *(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o **)((char *)p_list - 12) = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_list, 0, (int32_t)method, v3, v4, v5, v6, v7);
}


bool UserServantCollectionMaster__TryGetEntity(
        UserServantCollectionMaster_o *this,
        UserServantCollectionEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC8396 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
    byte_4CC8396 = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
}


void UserServantCollectionMaster__continueDeviceServantComment(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ServantCommentMaster_o *v5; // x20
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v10; // x23
  Il2CppClass *klass; // x24
  void *monitor; // x25
  Il2CppClass *v13; // x23
  void *v14; // x24
  int32_t v15; // w0
  System_Int32_array *v16; // x24
  System_Int32_array *v17; // x23
  int32_t v18; // w25
  System_Int32_array *priorityList; // [xsp+8h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4CC839E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&ServantCommentManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC839E = 1;
  }
  idList = 0;
  priorityList = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_20;
  v5 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v8,
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
      if ( Item )
      {
        v10 = Item;
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v21.fields.fakeValue = klass;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v21, 0);
        if ( !v5 )
          break;
        if ( ServantCommentMaster__GetNewList(v5, &idList, &priorityList, (int32_t)Instance, 0) )
        {
          v14 = v10[1].monitor;
          v13 = v10[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v22.fields.currentCryptoKey = v14;
          *(_QWORD *)&v22.fields.fakeValue = v13;
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v22, 0);
          v16 = idList;
          v17 = priorityList;
          v18 = v15;
          if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          ServantCommentManager__SetOpen_43764036(v18, v16, v17, 0);
        }
      }
      if ( v7 == ++v8 )
        return;
    }
LABEL_20:
    sub_1C71608(Instance, v4);
  }
}


void UserServantCollectionMaster__continueDeviceUserServantCollection(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v6; // w21
  int32_t v7; // w22
  void *monitor; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  System_Int32_array *v13; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4CC839F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&UserServantCollectionManager_TypeInfo);
    byte_4CC839F = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
      if ( list && LODWORD(list[1].fields.items) == 2 )
      {
        klass = list[1].klass;
        monitor = list[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v14.fields.currentCryptoKey = klass;
        *(_QWORD *)&v14.fields.fakeValue = monitor;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                                   v14,
                                                                   0);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v11 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        v4 = (unsigned int)list;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            (int32_t)list,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = (int)list;
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_17;
    }
LABEL_21:
    sub_1C71608(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_21;
  v13 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__SetOld_43851972(v13, 0);
}


UserServantCollectionEntity_array *UserServantCollectionMaster__getCollectionList(
        UserServantCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
        bool isEquip,
        bool ignoreHideStateSvt,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x7
  NetworkManager_c *v11; // x0
  const MethodInfo *userIdNumber; // x1
  __int64 cachedUserServantCollectionEntityData; // x0
  __int64 v14; // x20
  __int64 v15; // x25
  System_Collections_Generic_List_object__o *v16; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  unsigned __int64 i; // x29
  System_String_o *v24; // x26
  System_String_o *v25; // x0
  System_String_o *v26; // x26
  __int64 v27; // x8
  __int64 v28; // x27
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x27
  __int64 v34; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v35; // x10
  __int64 v36; // x0
  int64_t v37; // x27
  int32_t v38; // w28
  UserServantCollectionEntity_o *v39; // x26
  const MethodInfo *v40; // x3
  int32_t status; // w8
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  const MethodInfo *v46; // x10
  int32_t v47; // w8
  int32_t v48; // w9
  GrandQuestFolderBoardItem_o *v49; // x0
  int32_t *v51; // [xsp+10h] [xbp-90h]
  int32_t v53; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList; // [xsp+28h] [xbp-78h] BYREF
  int32_t findSuma[2]; // [xsp+30h] [xbp-70h] BYREF
  const MethodInfo *v56; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CC839A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&UserServantCollectionEntity_TypeInfo);
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    byte_4CC839A = 1;
  }
  userServantCollectionEntityList = 0;
  *(_QWORD *)findSuma = 0;
  v53 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  userIdNumber = (const MethodInfo *)v11->static_fields->userIdNumber;
  v56 = userIdNumber;
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  if ( UserServantCollectionMaster_UserServantCollectionEntityDataCache__LoadCache(
         (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)cachedUserServantCollectionEntityData,
         (int64_t)userIdNumber,
         isEquip,
         ignoreHideStateSvt,
         &findSuma[1],
         findSuma,
         &userServantCollectionEntityList,
         v6) )
  {
    *getSum = findSuma[1];
    *findSum = findSuma[0];
    cachedUserServantCollectionEntityData = (__int64)userServantCollectionEntityList;
    if ( userServantCollectionEntityList )
      return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                    (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                    (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
LABEL_57:
    sub_1C71608(cachedUserServantCollectionEntityData, userIdNumber);
  }
  cachedUserServantCollectionEntityData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)cachedUserServantCollectionEntityData,
                                                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)ServantMaster__GetCollectionList_43007544(
                                                     (ServantMaster_o *)cachedUserServantCollectionEntityData,
                                                     isEquip,
                                                     0);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  v14 = *(_QWORD *)(cachedUserServantCollectionEntityData + 24);
  v15 = cachedUserServantCollectionEntityData;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  v51 = getSum;
  *getSum = 0;
  *findSum = 0;
  if ( (int)v14 >= 1 )
  {
    for ( i = 0; i != (unsigned int)v14; ++i )
    {
      if ( i >= *(unsigned int *)(v15 + 24) )
        sub_1C71610(cachedUserServantCollectionEntityData);
      v53 = *(_DWORD *)(v15 + 4 * i + 32);
      v24 = System_Int64__ToString((int64_t)&v56, 0);
      v25 = System_Int32__ToString((int32_t)&v53, 0);
      v26 = System_String__Concat_64069988(v24, (System_String_o *)StringLiteral_1450/*":"*/, v25, 0);
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase_object__object__object___get_lookup(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                         (const MethodInfo_340B72C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_57;
      v27 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v28 = cachedUserServantCollectionEntityData;
      v29 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
      {
        v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
        {
          --v29;
          v30 += 4;
          if ( !v29 )
            goto LABEL_24;
        }
        v31 = v27 + 16LL * *v30 + 312;
      }
      else
      {
LABEL_24:
        v31 = sub_1C47738(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v31)(v28, v26, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      {
        v37 = (int64_t)v56;
        v38 = v53;
        v39 = (UserServantCollectionEntity_o *)sub_1C715FC(UserServantCollectionEntity_TypeInfo);
        UserServantCollectionEntity___ctor_43417804(v39, v37, v38, v40);
        if ( ignoreHideStateSvt )
        {
          if ( !v39 )
            goto LABEL_57;
          cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(v39, userIdNumber);
          if ( (cachedUserServantCollectionEntityData & 1) != 0 )
            continue;
        }
        goto LABEL_47;
      }
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase_object__object__object___get_lookup(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                         (const MethodInfo_340B72C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_57;
      v32 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v33 = cachedUserServantCollectionEntityData;
      v34 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
      {
        v35 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *(v35 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
        {
          --v34;
          v35 += 2;
          if ( !v34 )
            goto LABEL_32;
        }
        v36 = v32 + 16LL * (*(_DWORD *)v35 + 2) + 312;
      }
      else
      {
LABEL_32:
        v36 = sub_1C47738(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                2);
      }
      cachedUserServantCollectionEntityData = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v36)(
                                                v33,
                                                v26,
                                                *(_QWORD *)(v36 + 8));
      v39 = (UserServantCollectionEntity_o *)cachedUserServantCollectionEntityData;
      if ( ignoreHideStateSvt )
      {
        if ( !cachedUserServantCollectionEntityData )
          goto LABEL_57;
        cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(
                                                  (UserServantCollectionEntity_o *)cachedUserServantCollectionEntityData,
                                                  userIdNumber);
        if ( (cachedUserServantCollectionEntityData & 1) != 0 )
          continue;
      }
      else if ( !cachedUserServantCollectionEntityData )
      {
        goto LABEL_57;
      }
      status = v39->fields.status;
      if ( status != 1 )
      {
        if ( status != 2 )
          goto LABEL_47;
        ++*v51;
      }
      ++*findSum;
LABEL_47:
      if ( !v16 )
        goto LABEL_57;
      items = v16->fields._items;
      v43 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_57;
      size = v16->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)v39,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v39;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)v39, v17, v18, v19, v20, v21, v22);
      }
    }
  }
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  v46 = v56;
  v47 = *findSum;
  v48 = *v51;
  *(_QWORD *)(cachedUserServantCollectionEntityData + 40) = v16;
  v49 = (GrandQuestFolderBoardItem_o *)(cachedUserServantCollectionEntityData + 40);
  LOBYTE(v49[-1].fields._ListCreatedTime_k__BackingField) = isEquip;
  BYTE1(v49[-1].fields._ListCreatedTime_k__BackingField) = ignoreHideStateSvt;
  *(_QWORD *)&v49[-1].fields._IconId_k__BackingField = v46;
  HIDWORD(v49[-1].fields._ListCreatedTime_k__BackingField) = v48;
  LODWORD(v49[-1].fields._ClosedMessage_k__BackingField) = v47;
  sub_1C71354(v49, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  if ( !v16 )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)v16;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


UserServantCollectionEntity_array *UserServantCollectionMaster__getList(
        UserServantCollectionMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  NetworkManager_c *v6; // x0
  __int64 Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  unsigned __int64 v10; // x25
  __int64 v11; // x29
  System_String_o *v12; // x0
  System_String_o *v13; // x23
  System_String_o *v14; // x0
  System_String_o *v15; // x23
  __int64 v16; // x8
  __int64 v17; // x24
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x24
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v24; // x10
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t userIdNumber; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC8399 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    byte_4CC8399 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  v9 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) >= 1 )
  {
    v10 = 0;
    v11 = (unsigned int)*(_QWORD *)(Instance + 24);
    while ( 1 )
    {
      v12 = System_Int64__ToString((int64_t)&userIdNumber, 0);
      if ( v10 >= *(unsigned int *)(v9 + 24) )
        sub_1C71610(v12);
      v13 = v12;
      v14 = System_Int32__ToString((int)v9 + 4 * (int)v10 + 32, 0);
      v15 = System_String__Concat_64069988(v13, (System_String_o *)StringLiteral_1450/*":"*/, v14, 0);
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_340B72C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
      if ( !Instance )
        break;
      v16 = *(_QWORD *)Instance;
      v17 = Instance;
      v18 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v19 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_20;
        }
        v20 = v16 + 16LL * *v19 + 312;
      }
      else
      {
LABEL_20:
        v20 = sub_1C47738(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                0);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v20)(v17, v15, *(_QWORD *)(v20 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              (const MethodInfo_340B72C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
        if ( !Instance )
          break;
        v21 = *(_QWORD *)Instance;
        v22 = Instance;
        v23 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
        {
          v24 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)(*(_QWORD *)(v21 + 176) + 8LL);
          while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
          {
            --v23;
            v24 += 2;
            if ( !v23 )
              goto LABEL_28;
          }
          v25 = v21 + 16LL * (*(_DWORD *)v24 + 2) + 312;
        }
        else
        {
LABEL_28:
          v25 = sub_1C47738(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                  2);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v25)(v22, v15, *(_QWORD *)(v25 + 8));
        if ( !Instance )
          break;
        v8 = Instance;
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v33 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Instance,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v35[4] = (Il2CppClass *)v8;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v35 + 4), v8, v26, v27, v28, v29, v30, v31);
          }
        }
      }
      if ( ++v10 == v11 )
        goto LABEL_38;
    }
LABEL_40:
    sub_1C71608(Instance, v8);
  }
LABEL_38:
  if ( !v5 )
    goto LABEL_40;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


System_Collections_Generic_List_UserServantCollectionEntity__o *UserServantCollectionMaster__getServantEquipCollectionList(
        UserServantCollectionMaster_o *this,
        System_Collections_Generic_Dictionary_int__string__o *servantEquipIdStrDic,
        const MethodInfo *method)
{
  NetworkManager_c *v5; // x0
  System_String_o *v6; // x21
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  System_Collections_Generic_List_object__o *v11; // x23
  __int64 v12; // x0
  unsigned __int64 v13; // x26
  __int64 v14; // x27
  int32_t v15; // w1
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  DataManager_c *klass; // x8
  Il2CppObject *v19; // x25
  DataManager_o *v20; // x24
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  DataManager_c *v24; // x8
  Il2CppObject *v25; // x25
  DataManager_o *v26; // x24
  __int64 v27; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v28; // x10
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  DataManager_o *v39; // x1
  Il2CppClass **v40; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-78h] BYREF
  int32_t key; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CC839B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    byte_4CC839B = 1;
  }
  key = 0;
  value = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  v6 = System_Int64__ToString((int64_t)&userIdNumber, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)ServantMaster__GetCollectionList_43007544((ServantMaster_o *)Instance, 1, 0);
  if ( !Instance )
    goto LABEL_41;
  v9 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v13 = 0;
    v14 = (unsigned int)m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v13 >= LODWORD(v9->fields.m_CancellationTokenSource) )
        sub_1C71610(v12);
      v15 = *((_DWORD *)&v9->fields._DispLog + v13);
      key = v15;
      if ( servantEquipIdStrDic )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
                v15,
                &value,
                (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
        {
          v16 = System_Int32__ToString((int32_t)&key, 0);
          value = (Il2CppObject *)System_String__Concat_64069988(v6, (System_String_o *)StringLiteral_1450/*":"*/, v16, 0);
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
            key,
            value,
            (const MethodInfo_3462294 *)Method_System_Collections_Generic_Dictionary_int__string__Add__);
        }
      }
      else
      {
        v17 = System_Int32__ToString((int32_t)&key, 0);
        value = (Il2CppObject *)System_String__Concat_64069988(v6, (System_String_o *)StringLiteral_1450/*":"*/, v17, 0);
      }
      Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    (const MethodInfo_340B72C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
      if ( !Instance )
        break;
      klass = Instance->klass;
      v19 = value;
      v20 = Instance;
      v21 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
        {
          --v21;
          p_offset += 4;
          if ( !v21 )
            goto LABEL_24;
        }
        v23 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_24:
        v23 = sub_1C47738(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                0);
      }
      v12 = (*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v23)(v20, v19, *(_QWORD *)(v23 + 8));
      if ( (v12 & 1) != 0 )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      (const MethodInfo_340B72C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
        if ( !Instance )
          break;
        v24 = Instance->klass;
        v25 = value;
        v26 = Instance;
        v27 = *(unsigned __int16 *)&Instance->klass->_2.rank;
        if ( *(_WORD *)&Instance->klass->_2.rank )
        {
          v28 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)&v24->_1.interfaceOffsets->offset;
          while ( *(v28 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
          {
            --v27;
            v28 += 2;
            if ( !v27 )
              goto LABEL_32;
          }
          v29 = (__int64)(&v24->vtable._2_GetHashCode + *(_DWORD *)v28);
        }
        else
        {
LABEL_32:
          v29 = sub_1C47738(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                  2);
        }
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v29)(
                                      v26,
                                      v25,
                                      *(_QWORD *)(v29 + 8));
        if ( !v11 )
          break;
        items = v11->fields._items;
        v37 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        v39 = Instance;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)Instance,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v39;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)v39, v30, v31, v32, v33, v34, v35);
        }
      }
      if ( ++v13 == v14 )
        return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v11;
    }
LABEL_41:
    sub_1C71608(Instance, v8);
  }
  return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v11;
}


void UserServantCollectionMaster_UserServantCollectionEntityDataCache___ctor(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserServantCollectionMaster_UserServantCollectionEntityDataCache__Clear(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_List_UserServantCollectionEntity__o **p_cachedUserServantCollectionEntityList; // x0

  this->fields.cachedUserServantCollectionEntityList = 0;
  p_cachedUserServantCollectionEntityList = &this->fields.cachedUserServantCollectionEntityList;
  *(p_cachedUserServantCollectionEntityList - 3) = 0;
  *((_WORD *)p_cachedUserServantCollectionEntityList - 8) = 0;
  *(struct System_Collections_Generic_List_UserServantCollectionEntity__o **)((char *)p_cachedUserServantCollectionEntityList
                                                                            - 12) = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_cachedUserServantCollectionEntityList, 0, v2, v3, v4, v5, v6, v7);
}


bool UserServantCollectionMaster_UserServantCollectionEntityDataCache__LoadCache(
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
  char v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  bool result; // w0
  System_Collections_Generic_List_UserServantCollectionEntity__o *cachedUserServantCollectionEntityList; // x1

  *getSum = 0;
  *findSum = 0;
  *userServantCollectionEntityList = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)userServantCollectionEntityList,
    0,
    isEquip,
    ignoreHideStateServant,
    (System_String_o *)getSum,
    (int32_t)findSum,
    (int64_t)userServantCollectionEntityList,
    (System_String_o *)method);
  result = 0;
  if ( this->fields.cachedUserId == userId )
  {
    if ( this->fields.cachedIsEquip == isEquip && this->fields.cachedIgnoreHideStateServant == ignoreHideStateServant )
    {
      *getSum = this->fields.cachedGetSum;
      *findSum = this->fields.cachedFindSum;
      cachedUserServantCollectionEntityList = this->fields.cachedUserServantCollectionEntityList;
      *userServantCollectionEntityList = cachedUserServantCollectionEntityList;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)userServantCollectionEntityList,
        (int32_t)cachedUserServantCollectionEntityList,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
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
void UserServantCollectionMaster_UserServantCollectionEntityDataCache__SaveCache(
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
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)p_cachedUserServantCollectionEntityList,
    (int32_t)userServantCollectionEntityList,
    isEquip,
    ignoreHideStateServant,
    *(System_String_o **)&getSum,
    findSum,
    (int64_t)userServantCollectionEntityList,
    (System_String_o *)method);
}