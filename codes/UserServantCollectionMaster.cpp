void __fastcall UserServantCollectionMaster___ctor(UserServantCollectionMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDD39D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
    sub_1C21E38(&UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
    byte_4BDD39D = 1;
  }
  v3 = (Il2CppObject *)sub_1C22084(UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.cachedUserServantCollectionEntityData = (struct UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.cachedUserServantCollectionEntityData,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    30,
    (const MethodInfo_325E55C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntity(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDD39B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
    byte_4BDD39B = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3260880 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntityDefinitely(
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
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v18; // x10
  __int64 v19; // x0
  UserServantCollectionEntity_o *v20; // x19
  const MethodInfo *v21; // x3

  if ( (byte_4BDD39E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo);
    sub_1C21E38(&UserServantCollectionEntity_TypeInfo);
    byte_4BDD39E = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_325E674 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_20;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
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
    p_method = sub_1C73E18(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))p_method)(
          v11,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v20 = (UserServantCollectionEntity_o *)sub_1C22084(UserServantCollectionEntity_TypeInfo);
    UserServantCollectionEntity___ctor_41440736(v20, userId, svtId, v21);
    return v20;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_325E674 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
  if ( !lookup )
LABEL_20:
    sub_1C22094(lookup, v9);
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v18 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
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
    v19 = sub_1C73E18(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
            2LL);
  }
  return (UserServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v19)(
                                            v16,
                                            PK,
                                            *(_QWORD *)(v19 + 8));
}


System_Int32_array *__fastcall UserServantCollectionMaster__GetNewList(
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

  if ( (byte_4BDD3A3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDD3A3 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
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
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
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
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                                     v15,
                                                                     0LL);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          v4 = (const MethodInfo *)(unsigned int)list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              (int32_t)list,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size + 1] = (int)list;
          }
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C22094(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


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

  if ( (byte_4BDD3A6 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDD3A6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
    sub_1C22094(0LL, v9);
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


bool __fastcall UserServantCollectionMaster__IsGet(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  NetworkManager_c *v6; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDD3A8 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDD3A8 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
    sub_1C22094(v7, v8);
  return entity->fields.status == 2;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster__IsNew(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
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

  if ( (byte_4BDD3A2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDD3A2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1C22094(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
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
             (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    if ( Item )
    {
      v10 = (UserServantCollectionEntity_o *)Item;
      monitor = Item[1].monitor;
      klass = Item[2].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v14.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v14.fields.fakeValue = klass;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v14, 0LL) == svtId )
        return UserServantCollectionEntity__IsNew(v10, *(const MethodInfo **)&svtId);
    }
    if ( v7 == ++v8 )
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
  if ( (byte_4BDD3A7 & 1) == 0 )
  {
    this = (UserServantCollectionMaster_o *)sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDD3A7 = 1;
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
        sub_1C2209C(this, svtIds);
      v9 = svtIds->m_Items[v8 + 1];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
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
        sub_1C22094(this, svtIds);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o **p_list; // x0
  __int64 v9; // x0
  System_NotImplementedException_o *v10; // x19
  __int64 v11; // x0

  if ( !e )
    goto LABEL_5;
  if ( e->fields._action > 4u )
  {
    v9 = sub_1C21E4C(&System_NotImplementedException_TypeInfo);
    v10 = (System_NotImplementedException_o *)sub_1C22084(v9);
    System_NotImplementedException___ctor(v10, 0LL);
    v11 = sub_1C21E4C(&Method_UserServantCollectionMaster_OnListChangedImplementation__);
    sub_1C21F60(v10, v11);
  }
  this = (UserServantCollectionMaster_o *)this->fields.cachedUserServantCollectionEntityData;
  if ( !this )
LABEL_5:
    sub_1C22094(this, e);
  this->fields.list = 0LL;
  p_list = &this->fields.list;
  *(p_list - 3) = 0LL;
  *((_WORD *)p_list - 8) = 0;
  *(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o **)((char *)p_list - 12) = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_list, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
}


bool __fastcall UserServantCollectionMaster__TryGetEntity(
        UserServantCollectionMaster_o *this,
        UserServantCollectionEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDD39C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
    byte_4BDD39C = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserServantCollectionMaster__continueDeviceServantComment(
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

  if ( (byte_4BDD3A4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD3A4 = 1;
  }
  idList = 0LL;
  priorityList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_20;
  v5 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
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
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
      if ( Item )
      {
        v10 = Item;
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v21.fields.fakeValue = klass;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v21, 0LL);
        if ( !v5 )
          break;
        if ( ServantCommentMaster__GetNewList(v5, &idList, &priorityList, (int32_t)Instance, 0LL) )
        {
          v14 = v10[1].monitor;
          v13 = v10[2].klass;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v22.fields.currentCryptoKey = v14;
          *(_QWORD *)&v22.fields.fakeValue = v13;
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v22, 0LL);
          v16 = idList;
          v17 = priorityList;
          v18 = v15;
          if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
          ServantCommentManager__SetOpen_41763684(v18, v16, v17, 0LL);
        }
      }
      if ( v7 == ++v8 )
        return;
    }
LABEL_20:
    sub_1C22094(Instance, v4);
  }
}


void __fastcall UserServantCollectionMaster__continueDeviceUserServantCollection(
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

  if ( (byte_4BDD3A5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    byte_4BDD3A5 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
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
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
      if ( list && LODWORD(list[1].fields.items) == 2 )
      {
        klass = list[1].klass;
        monitor = list[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v14.fields.currentCryptoKey = klass;
        *(_QWORD *)&v14.fields.fakeValue = monitor;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                                   v14,
                                                                   0LL);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v11 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        v4 = (unsigned int)list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            (int32_t)list,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size + 1] = (int)list;
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_17;
    }
LABEL_21:
    sub_1C22094(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_21;
  v13 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__SetOld_41847064(v13, 0LL);
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
  NetworkManager_c *v11; // x0
  const MethodInfo *userIdNumber; // x1
  __int64 cachedUserServantCollectionEntityData; // x0
  __int64 v14; // x20
  __int64 v15; // x25
  System_Collections_Generic_List_object__o *v16; // x24
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
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
  __int64 v46; // x10
  int32_t v47; // w8
  int32_t v48; // w9
  PartyOrganizationUtility_o *v49; // x0
  int32_t *v51; // [xsp+10h] [xbp-90h]
  int32_t v53; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList; // [xsp+28h] [xbp-78h] BYREF
  __int64 findSuma; // [xsp+30h] [xbp-70h] BYREF
  const MethodInfo *v56; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BDD3A0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&UserServantCollectionEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDD3A0 = 1;
  }
  userServantCollectionEntityList = 0LL;
  findSuma = 0LL;
  v53 = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
                                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
LABEL_57:
    sub_1C22094(cachedUserServantCollectionEntityData, userIdNumber);
  }
  cachedUserServantCollectionEntityData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)cachedUserServantCollectionEntityData,
                                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)ServantMaster__GetCollectionList_41060436(
                                                     (ServantMaster_o *)cachedUserServantCollectionEntityData,
                                                     isEquip,
                                                     0LL);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  v14 = *(_QWORD *)(cachedUserServantCollectionEntityData + 24);
  v15 = cachedUserServantCollectionEntityData;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  v51 = getSum;
  *getSum = 0;
  *findSum = 0;
  if ( (int)v14 >= 1 )
  {
    for ( i = 0LL; i != (unsigned int)v14; ++i )
    {
      if ( i >= *(unsigned int *)(v15 + 24) )
        sub_1C2209C(cachedUserServantCollectionEntityData, userIdNumber);
      v53 = *(_DWORD *)(v15 + 4 * i + 32);
      v24 = System_Int64__ToString((int64_t)&v56, 0LL);
      v25 = System_Int32__ToString((int32_t)&v53, 0LL);
      v26 = System_String__Concat_63126736(v24, (System_String_o *)StringLiteral_1546/*":"*/, v25, 0LL);
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase_object__object__object___get_lookup(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                         (const MethodInfo_325E674 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
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
        v31 = sub_1C73E18(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v31)(v28, v26, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      {
        v37 = (int64_t)v56;
        v38 = v53;
        v39 = (UserServantCollectionEntity_o *)sub_1C22084(UserServantCollectionEntity_TypeInfo);
        UserServantCollectionEntity___ctor_41440736(v39, v37, v38, v40);
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
                                                         (const MethodInfo_325E674 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
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
        v36 = sub_1C73E18(
                cachedUserServantCollectionEntityData,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                2LL);
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
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)v39,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v39;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v39, v17, v18, v19, v20, v21, v22);
      }
    }
  }
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  v46 = (__int64)v56;
  v47 = *findSum;
  v48 = *v51;
  *(_QWORD *)(cachedUserServantCollectionEntityData + 40) = v16;
  v49 = (PartyOrganizationUtility_o *)(cachedUserServantCollectionEntityData + 40);
  LOBYTE(v49[-1].fields._TransitionDestinationFromDetail_k__BackingField) = isEquip;
  BYTE1(v49[-1].fields._TransitionDestinationFromDetail_k__BackingField) = ignoreHideStateSvt;
  v49[-1].fields.temporaryPartyInfo = (struct PartyOrganizationUtility_TemporaryPartyInfo_o *)v46;
  HIDWORD(v49[-1].fields._TransitionDestinationFromDetail_k__BackingField) = v48;
  *(_DWORD *)&v49[-1].fields._IsQuestStartMenuMode_k__BackingField = v47;
  sub_1C21DDC(v49, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  if ( !v16 )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)v16;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                (System_Collections_Generic_List_object__o *)cachedUserServantCollectionEntityData,
                                                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getList(
        UserServantCollectionMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  NetworkManager_c *v6; // x0
  __int64 Instance; // x0
  int64_t v8; // x1
  __int64 v9; // x22
  unsigned __int64 v10; // x25
  __int64 v11; // x29
  System_String_o *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x23
  System_String_o *v15; // x0
  System_String_o *v16; // x23
  __int64 v17; // x8
  __int64 v18; // x24
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x24
  __int64 v24; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v25; // x10
  __int64 v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int64_t userIdNumber; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDD39F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDD39F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  v9 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) >= 1 )
  {
    v10 = 0LL;
    v11 = (unsigned int)*(_QWORD *)(Instance + 24);
    while ( 1 )
    {
      v12 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
      if ( v10 >= *(unsigned int *)(v9 + 24) )
        sub_1C2209C(v12, v13);
      v14 = v12;
      v15 = System_Int32__ToString((int)v9 + 4 * (int)v10 + 32, 0LL);
      v16 = System_String__Concat_63126736(v14, (System_String_o *)StringLiteral_1546/*":"*/, v15, 0LL);
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_325E674 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
      if ( !Instance )
        break;
      v17 = *(_QWORD *)Instance;
      v18 = Instance;
      v19 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v20 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_20;
        }
        v21 = v17 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_20:
        v21 = sub_1C73E18(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v21)(v18, v16, *(_QWORD *)(v21 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              (const MethodInfo_325E674 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
        if ( !Instance )
          break;
        v22 = *(_QWORD *)Instance;
        v23 = Instance;
        v24 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
        {
          v25 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)(*(_QWORD *)(v22 + 176) + 8LL);
          while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
          {
            --v24;
            v25 += 2;
            if ( !v24 )
              goto LABEL_28;
          }
          v26 = v22 + 16LL * (*(_DWORD *)v25 + 2) + 312;
        }
        else
        {
LABEL_28:
          v26 = sub_1C73E18(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v26)(v23, v16, *(_QWORD *)(v26 + 8));
        if ( !Instance )
          break;
        v8 = Instance;
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v34 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Instance,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v8;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v36 + 4), v8, v27, v28, v29, v30, v31, v32);
          }
        }
      }
      if ( ++v10 == v11 )
        goto LABEL_38;
    }
LABEL_40:
    sub_1C22094(Instance, v8);
  }
LABEL_38:
  if ( !v5 )
    goto LABEL_40;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v5,
                                                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


System_Collections_Generic_List_UserServantCollectionEntity__o *__fastcall UserServantCollectionMaster__getServantEquipCollectionList(
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
  __int64 v13; // x1
  unsigned __int64 v14; // x26
  __int64 v15; // x27
  int32_t v16; // w1
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  DataManager_c *klass; // x8
  Il2CppObject *v20; // x25
  DataManager_o *v21; // x24
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  DataManager_c *v25; // x8
  Il2CppObject *v26; // x25
  DataManager_o *v27; // x24
  __int64 v28; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v29; // x10
  __int64 v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  int64_t v40; // x1
  Il2CppClass **v41; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-78h] BYREF
  int32_t key; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BDD3A1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDD3A1 = 1;
  }
  key = 0;
  value = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  v6 = System_Int64__ToString((int64_t)&userIdNumber, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)ServantMaster__GetCollectionList_41060436((ServantMaster_o *)Instance, 1, 0LL);
  if ( !Instance )
    goto LABEL_41;
  v9 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v14 = 0LL;
    v15 = (unsigned int)m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v14 >= LODWORD(v9->fields.m_CancellationTokenSource) )
        sub_1C2209C(v12, v13);
      v16 = *((_DWORD *)&v9->fields._DispLog + v14);
      key = v16;
      if ( servantEquipIdStrDic )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
                v16,
                &value,
                (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
        {
          v17 = System_Int32__ToString((int32_t)&key, 0LL);
          value = (Il2CppObject *)System_String__Concat_63126736(v6, (System_String_o *)StringLiteral_1546/*":"*/, v17, 0LL);
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
            key,
            value,
            (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__string__Add__);
        }
      }
      else
      {
        v18 = System_Int32__ToString((int32_t)&key, 0LL);
        value = (Il2CppObject *)System_String__Concat_63126736(v6, (System_String_o *)StringLiteral_1546/*":"*/, v18, 0LL);
      }
      Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    (const MethodInfo_325E674 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
      if ( !Instance )
        break;
      klass = Instance->klass;
      v20 = value;
      v21 = Instance;
      v22 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
        {
          --v22;
          p_offset += 4;
          if ( !v22 )
            goto LABEL_24;
        }
        v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_24:
        v24 = sub_1C73E18(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                0LL);
      }
      v12 = (*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v24)(v21, v20, *(_QWORD *)(v24 + 8));
      if ( (v12 & 1) != 0 )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      (const MethodInfo_325E674 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
        if ( !Instance )
          break;
        v25 = Instance->klass;
        v26 = value;
        v27 = Instance;
        v28 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
        {
          v29 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)&v25->_1.interfaceOffsets->offset;
          while ( *(v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
          {
            --v28;
            v29 += 2;
            if ( !v28 )
              goto LABEL_32;
          }
          v30 = (__int64)(&v25->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v29);
        }
        else
        {
LABEL_32:
          v30 = sub_1C73E18(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                  2LL);
        }
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v30)(
                                      v27,
                                      v26,
                                      *(_QWORD *)(v30 + 8));
        if ( !v11 )
          break;
        items = v11->fields._items;
        v38 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        v40 = (int64_t)Instance;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)Instance,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v40;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 4), v40, v31, v32, v33, v34, v35, v36);
        }
      }
      if ( ++v14 == v15 )
        return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v11;
    }
LABEL_41:
    sub_1C22094(Instance, v8);
  }
  return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v11;
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Collections_Generic_List_UserServantCollectionEntity__o **p_cachedUserServantCollectionEntityList; // x0

  this->fields.cachedUserServantCollectionEntityList = 0LL;
  p_cachedUserServantCollectionEntityList = &this->fields.cachedUserServantCollectionEntityList;
  *(p_cachedUserServantCollectionEntityList - 3) = 0LL;
  *((_WORD *)p_cachedUserServantCollectionEntityList - 8) = 0;
  *(struct System_Collections_Generic_List_UserServantCollectionEntity__o **)((char *)p_cachedUserServantCollectionEntityList
                                                                            - 12) = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_cachedUserServantCollectionEntityList, 0LL, v2, v3, v4, v5, v6, v7);
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
  int64_t v15; // x2
  char v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  bool result; // w0
  System_Collections_Generic_List_UserServantCollectionEntity__o *cachedUserServantCollectionEntityList; // x1

  *getSum = 0;
  *findSum = 0;
  *userServantCollectionEntityList = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)userServantCollectionEntityList,
    0LL,
    isEquip,
    ignoreHideStateServant,
    (System_String_o *)getSum,
    (BattleSetupInfo_o *)findSum,
    (FollowerInfo_o *)userServantCollectionEntityList,
    (PartyListViewItem_o *)method);
  result = 0;
  if ( this->fields.cachedUserId == userId )
  {
    if ( this->fields.cachedIsEquip == isEquip && this->fields.cachedIgnoreHideStateServant == ignoreHideStateServant )
    {
      *getSum = this->fields.cachedGetSum;
      *findSum = this->fields.cachedFindSum;
      cachedUserServantCollectionEntityList = this->fields.cachedUserServantCollectionEntityList;
      *userServantCollectionEntityList = cachedUserServantCollectionEntityList;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)userServantCollectionEntityList,
        (int64_t)cachedUserServantCollectionEntityList,
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)p_cachedUserServantCollectionEntityList,
    (int64_t)userServantCollectionEntityList,
    isEquip,
    ignoreHideStateServant,
    *(System_String_o **)&getSum,
    *(BattleSetupInfo_o **)&findSum,
    (FollowerInfo_o *)userServantCollectionEntityList,
    (PartyListViewItem_o *)method);
}