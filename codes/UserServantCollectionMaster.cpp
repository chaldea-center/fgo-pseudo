void UserServantCollectionMaster___ctor(UserServantCollectionMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971856 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
    sub_2213A60(&UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
    byte_5971856 = 1;
  }
  v3 = (Il2CppObject *)sub_2213CCC(UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.cachedUserServantCollectionEntityData = (struct UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedUserServantCollectionEntityData,
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
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *UserServantCollectionMaster__GetEntity(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5971854 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
    byte_5971854 = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3F157EC *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
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

  if ( (byte_5971857 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo);
    sub_2213A60(&UserServantCollectionEntity_TypeInfo);
    byte_5971857 = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3F134B8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
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
    v14 = sub_224BC3C(
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
    v20 = (UserServantCollectionEntity_o *)sub_2213CCC(UserServantCollectionEntity_TypeInfo);
    UserServantCollectionEntity___ctor_50146804(v20, userId, svtId, v21);
    return v20;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3F134B8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
  if ( !lookup )
LABEL_20:
    sub_2213CDC(lookup, v9);
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
    v19 = sub_224BC3C(
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

  if ( (byte_597185B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597185B = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
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
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
          *(_QWORD *)&v15.fields.currentCryptoKey = klass;
          *(_QWORD *)&v15.fields.fakeValue = monitor;
          list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
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
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_2213CDC(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t *m_Items; // x8
  int v15; // t1
  bool result; // w0

  if ( (byte_597185E & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597185E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    v7 = NetworkManager_TypeInfo;
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       this,
                       v7->static_fields->userIdNumber,
                       svtId,
                       method);
  if ( !EntityDefinitely )
    sub_2213CDC(0, v9);
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
  m_Items = costumeIds->m_Items;
  do
  {
    v15 = *m_Items++;
    result = v15 == costumeId;
    if ( v15 == costumeId )
      break;
  }
  while ( v13-- );
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool UserServantCollectionMaster__IsGet(UserServantCollectionMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  NetworkManager_c *v6; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971860 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5971860 = 1;
  }
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    v6 = NetworkManager_TypeInfo;
  }
  v7 = UserServantCollectionMaster__TryGetEntity(this, &entity, v6->static_fields->userIdNumber, svtId, v3);
  if ( !v7 )
    return 0;
  if ( !entity )
    sub_2213CDC(v7, v8);
  return entity->fields.status == 2;
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
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v5 = this;
  if ( (byte_597185F & 1) == 0 )
  {
    this = (UserServantCollectionMaster_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_597185F = 1;
  }
  entity = 0;
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
        sub_2213CE4(this);
      v9 = svtIds->m_Items[v8];
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, svtIds);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v10 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, svtIds);
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
        sub_2213CDC(this, svtIds);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o **p_list; // x0
  __int64 v9; // x0
  System_NotImplementedException_o *v10; // x19
  __int64 v11; // x0

  if ( !e )
    goto LABEL_5;
  if ( e->fields._action > 4u )
  {
    v9 = sub_2213A74(&System_NotImplementedException_TypeInfo);
    v10 = (System_NotImplementedException_o *)sub_2213CCC(v9);
    System_NotImplementedException___ctor(v10, 0);
    v11 = sub_2213A74(&Method_UserServantCollectionMaster_OnListChangedImplementation__);
    sub_2213BA0(v10, v11);
  }
  this = (UserServantCollectionMaster_o *)this->fields.cachedUserServantCollectionEntityData;
  if ( !this )
LABEL_5:
    sub_2213CDC(this, e);
  this->fields.list = 0;
  p_list = &this->fields.list;
  *(p_list - 3) = 0;
  *((_WORD *)p_list - 8) = 0;
  *(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o **)((char *)p_list - 12) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_list, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
}


bool UserServantCollectionMaster__TryGetEntity(
        UserServantCollectionMaster_o *this,
        UserServantCollectionEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5971855 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
    byte_5971855 = 1;
  }
  PK = (Il2CppObject *)UserServantCollectionEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
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
  void *monitor; // x24
  Il2CppClass *klass; // x25
  Il2CppClass *v13; // x23
  void *v14; // x24
  int32_t v15; // w0
  __int64 v16; // x1
  System_Int32_array *v17; // x23
  int32_t v18; // w25
  System_Int32_array *v19; // x24
  System_Int32_array *priorityList; // [xsp+8h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_597185C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597185C = 1;
  }
  idList = 0;
  priorityList = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_20;
  v5 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
      if ( Item )
      {
        v10 = Item;
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
        *(_QWORD *)&v22.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v22.fields.fakeValue = klass;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v22, 0);
        if ( !v5 )
          break;
        if ( ServantCommentMaster__GetNewList(v5, &idList, &priorityList, (int32_t)Instance, 0) )
        {
          v14 = v10[1].monitor;
          v13 = v10[2].klass;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
          *(_QWORD *)&v23.fields.currentCryptoKey = v14;
          *(_QWORD *)&v23.fields.fakeValue = v13;
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v23, 0);
          v17 = idList;
          v18 = v15;
          v19 = priorityList;
          if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v16);
          ServantCommentManager__SetOpen(v18, v17, v19, 0);
        }
      }
      if ( v7 == ++v8 )
        return;
    }
LABEL_20:
    sub_2213CDC(Instance, v4);
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
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  void *monitor; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  __int64 v13; // x1
  System_Int32_array *v14; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_597185D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&UserServantCollectionManager_TypeInfo);
    byte_597185D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Count__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserServantCollectionEntity__get_Item__);
      if ( list && LODWORD(list[1].fields.items) == 2 )
      {
        klass = list[1].klass;
        monitor = list[1].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
        *(_QWORD *)&v15.fields.currentCryptoKey = klass;
        *(_QWORD *)&v15.fields.fakeValue = monitor;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                   v15,
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
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
    sub_2213CDC(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_21;
  v14 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v13);
  UserServantCollectionManager__SetOld_50651516(v14, 0);
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
  _BOOL4 v7; // w21
  int v11; // w8
  NetworkManager_c *v12; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  __int64 cachedUserServantCollectionEntityData; // x0
  const MethodInfo *userIdNumber; // x1
  int32_t v16; // w9
  System_Collections_Generic_List_object__o *v17; // x24
  __int64 v18; // x25
  __int64 v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o **v26; // x28
  const MethodInfo_3F134B8 **v27; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v28; // x19
  unsigned __int64 v29; // x29
  System_String_o *v30; // x26
  System_String_o *v31; // x0
  System_String_o *v32; // x26
  __int64 v33; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c *v34; // x1
  __int64 v35; // x27
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c *v40; // x1
  __int64 v41; // x27
  __int64 v42; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v43; // x10
  __int64 v44; // x0
  int64_t v45; // x27
  unsigned __int64 v46; // x26
  System_Collections_Generic_List_object__o *v47; // x29
  __int64 v48; // x24
  UserServantCollectionMaster_o *v49; // x25
  __int64 v50; // x23
  _BOOL4 v51; // w22
  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **v52; // x21
  const MethodInfo_3F134B8 **v53; // x19
  System_String_o **v54; // x20
  int32_t v55; // w28
  UserServantCollectionEntity_o *v56; // x0
  int32_t v57; // w2
  UserServantCollectionEntity_o *v58; // x26
  const MethodInfo *v59; // x3
  int32_t status; // w8
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  struct System_String_o *v65; // x8
  MissionNaviTransitionBoardItem_o *v66; // x0
  bool v68; // [xsp+Ch] [xbp-94h]
  int32_t *v69; // [xsp+10h] [xbp-90h]
  int32_t v71; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList; // [xsp+28h] [xbp-78h] BYREF
  int32_t findSuma[2]; // [xsp+30h] [xbp-70h] BYREF
  const MethodInfo *v74; // [xsp+38h] [xbp-68h] BYREF

  v7 = ignoreHideStateSvt;
  if ( (byte_5971859 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UserServantCollectionEntity_TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971859 = 1;
  }
  *(_QWORD *)findSuma = 0;
  v74 = 0;
  userServantCollectionEntityList = 0;
  v11 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  v71 = 0;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, getSum);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, getSum);
    v12 = NetworkManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  userIdNumber = (const MethodInfo *)static_fields->userIdNumber;
  v74 = userIdNumber;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_56;
  cachedUserServantCollectionEntityData = UserServantCollectionMaster_UserServantCollectionEntityDataCache__LoadCache(
                                            (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)cachedUserServantCollectionEntityData,
                                            (int64_t)userIdNumber,
                                            isEquip,
                                            v7,
                                            &findSuma[1],
                                            findSuma,
                                            &userServantCollectionEntityList,
                                            v6);
  if ( (cachedUserServantCollectionEntityData & 1) == 0 )
  {
    cachedUserServantCollectionEntityData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( cachedUserServantCollectionEntityData )
    {
      cachedUserServantCollectionEntityData = (__int64)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)cachedUserServantCollectionEntityData,
                                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( cachedUserServantCollectionEntityData )
      {
        v68 = isEquip;
        cachedUserServantCollectionEntityData = (__int64)ServantMaster__GetCollectionList_49746676(
                                                           (ServantMaster_o *)cachedUserServantCollectionEntityData,
                                                           isEquip,
                                                           0);
        if ( cachedUserServantCollectionEntityData )
        {
          v18 = cachedUserServantCollectionEntityData;
          v19 = *(_QWORD *)(cachedUserServantCollectionEntityData + 24);
          v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v17,
            (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
          v69 = getSum;
          *getSum = 0;
          *findSum = 0;
          if ( (int)v19 >= 1 )
          {
            v26 = (System_String_o **)&StringLiteral_1533/*":"*/;
            v27 = (const MethodInfo_3F134B8 **)&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__;
            v28 = &System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo;
            v29 = 0;
            v19 = (unsigned int)v19;
            do
            {
              if ( v29 >= *(unsigned int *)(v18 + 24) )
                sub_2213CE4(cachedUserServantCollectionEntityData);
              v71 = *(_DWORD *)(v18 + 4 * v29 + 32);
              v30 = System_Int64__ToString((int64_t)&v74, 0);
              v31 = System_Int32__ToString((int32_t)&v71, 0);
              v32 = System_String__Concat_75694928(v30, *v26, v31, 0);
              cachedUserServantCollectionEntityData = (__int64)DataMasterBase_object__object__object___get_lookup(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                 *v27);
              if ( !cachedUserServantCollectionEntityData )
                goto LABEL_56;
              v33 = *(_QWORD *)cachedUserServantCollectionEntityData;
              v34 = *v28;
              v35 = cachedUserServantCollectionEntityData;
              v36 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
              if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
              {
                v37 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
                while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)v37
                        - 1) != v34 )
                {
                  --v36;
                  v37 += 4;
                  if ( !v36 )
                    goto LABEL_24;
                }
                v38 = v33 + 16LL * *v37 + 312;
              }
              else
              {
LABEL_24:
                v38 = sub_224BC3C(cachedUserServantCollectionEntityData, v34, 0);
              }
              if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v38)(v35, v32, *(_QWORD *)(v38 + 8))
                  & 1) == 0 )
              {
                v45 = (int64_t)v74;
                v46 = v29;
                v47 = v17;
                v48 = v18;
                v49 = this;
                v50 = v19;
                v51 = v7;
                v52 = v28;
                v53 = v27;
                v54 = v26;
                v55 = v71;
                v56 = (UserServantCollectionEntity_o *)sub_2213CCC(UserServantCollectionEntity_TypeInfo);
                v57 = v55;
                v26 = v54;
                v27 = v53;
                v28 = v52;
                v7 = v51;
                v19 = v50;
                this = v49;
                v18 = v48;
                v17 = v47;
                v29 = v46;
                v58 = v56;
                UserServantCollectionEntity___ctor_50146804(v56, v45, v57, v59);
                if ( v7 )
                {
                  if ( !v58 )
                    goto LABEL_56;
                  cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(
                                                            v58,
                                                            userIdNumber);
                  if ( (cachedUserServantCollectionEntityData & 1) != 0 )
                    goto LABEL_52;
                }
                goto LABEL_47;
              }
              cachedUserServantCollectionEntityData = (__int64)DataMasterBase_object__object__object___get_lookup(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                 *v27);
              if ( !cachedUserServantCollectionEntityData )
                goto LABEL_56;
              v39 = *(_QWORD *)cachedUserServantCollectionEntityData;
              v40 = *v28;
              v41 = cachedUserServantCollectionEntityData;
              v42 = *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL);
              if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 302LL) )
              {
                v43 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *(v43 - 1) != v40 )
                {
                  --v42;
                  v43 += 2;
                  if ( !v42 )
                    goto LABEL_32;
                }
                v44 = v39 + 16LL * (*(_DWORD *)v43 + 2) + 312;
              }
              else
              {
LABEL_32:
                v44 = sub_224BC3C(cachedUserServantCollectionEntityData, v40, 2);
              }
              cachedUserServantCollectionEntityData = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v44)(
                                                        v41,
                                                        v32,
                                                        *(_QWORD *)(v44 + 8));
              v58 = (UserServantCollectionEntity_o *)cachedUserServantCollectionEntityData;
              if ( v7 )
              {
                if ( !cachedUserServantCollectionEntityData )
                  goto LABEL_56;
                cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(
                                                          (UserServantCollectionEntity_o *)cachedUserServantCollectionEntityData,
                                                          userIdNumber);
                if ( (cachedUserServantCollectionEntityData & 1) != 0 )
                  goto LABEL_52;
              }
              else if ( !cachedUserServantCollectionEntityData )
              {
                goto LABEL_56;
              }
              status = v58->fields.status;
              if ( status != 1 )
              {
                if ( status != 2 )
                  goto LABEL_47;
                ++*v69;
              }
              ++*findSum;
LABEL_47:
              if ( !v17 )
                goto LABEL_56;
              items = v17->fields._items;
              v62 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
              ++v17->fields._version;
              if ( !items )
                goto LABEL_56;
              size = v17->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v17,
                  (Il2CppObject *)v58,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v64 = &items->obj.klass + size;
                v17->fields._size = size + 1;
                v64[4] = (Il2CppClass *)v58;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v64 + 4), (int32_t)v58, v20, v21, v22, v23, v24, v25);
              }
LABEL_52:
              ++v29;
            }
            while ( v29 != v19 );
          }
          cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
          if ( cachedUserServantCollectionEntityData )
          {
            v65 = (struct System_String_o *)v74;
            *(_QWORD *)(cachedUserServantCollectionEntityData + 40) = v17;
            v66 = (MissionNaviTransitionBoardItem_o *)(cachedUserServantCollectionEntityData + 40);
            v66[-1].fields._ClosedMessage_k__BackingField = v65;
            LOBYTE(v66[-1].fields._NaviAction_k__BackingField) = v68;
            LODWORD(v65) = *findSum;
            BYTE1(v66[-1].fields._NaviAction_k__BackingField) = v7;
            HIDWORD(v66[-1].fields._NaviAction_k__BackingField) = *v69;
            v66[-1].fields._BoardType_k__BackingField = (int)v65;
            sub_2213A04(v66, (int32_t)v17, v20, v21, v22, v23, v24, v25);
            if ( v17 )
              return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                            v17,
                                                            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
          }
        }
      }
    }
LABEL_56:
    sub_2213CDC(cachedUserServantCollectionEntityData, userIdNumber);
  }
  v16 = findSuma[0];
  v17 = (System_Collections_Generic_List_object__o *)userServantCollectionEntityList;
  *getSum = findSuma[1];
  *findSum = v16;
  if ( !v17 )
    goto LABEL_56;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v17,
                                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


UserServantCollectionEntity_array *UserServantCollectionMaster__getList(
        UserServantCollectionMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  __int64 v5; // x1
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
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t userIdNumber; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5971858 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971858 = 1;
  }
  userIdNumber = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
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
        sub_2213CE4(v12);
      v13 = v12;
      v14 = System_Int32__ToString((int)v9 + 32 + 4 * (int)v10, 0);
      v15 = System_String__Concat_75694928(v13, (System_String_o *)StringLiteral_1533/*":"*/, v14, 0);
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_3F134B8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
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
        v20 = sub_224BC3C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                0);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v20)(v17, v15, *(_QWORD *)(v20 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              (const MethodInfo_3F134B8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
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
          v25 = sub_224BC3C(
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
          if ( !v4 )
            break;
          items = v4->fields._items;
          v33 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)Instance,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v35[4] = (Il2CppClass *)v8;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), v8, v26, v27, v28, v29, v30, v31);
          }
        }
      }
      if ( ++v10 == v11 )
        goto LABEL_38;
    }
LABEL_40:
    sub_2213CDC(Instance, v8);
  }
LABEL_38:
  if ( !v4 )
    goto LABEL_40;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v4,
                                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


System_Collections_Generic_List_UserServantCollectionEntity__o *UserServantCollectionMaster__getServantEquipCollectionList(
        UserServantCollectionMaster_o *this,
        System_Collections_Generic_Dictionary_int__string__o *servantEquipIdStrDic,
        const MethodInfo *method)
{
  int v5; // w8
  NetworkManager_c *v6; // x0
  System_String_o *v7; // x21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  DataManager_o *v10; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  System_Collections_Generic_List_object__o *v12; // x23
  __int64 v13; // x0
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
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  DataManager_o *v40; // x1
  Il2CppClass **v41; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-78h] BYREF
  int32_t key; // [xsp+14h] [xbp-6Ch] BYREF
  int64_t userIdNumber; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_597185A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_597185A = 1;
  }
  userIdNumber = 0;
  key = 0;
  v5 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  value = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, servantEquipIdStrDic);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, servantEquipIdStrDic);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  v7 = System_Int64__ToString((int64_t)&userIdNumber, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)ServantMaster__GetCollectionList_49746676((ServantMaster_o *)Instance, 1, 0);
  if ( !Instance )
    goto LABEL_41;
  v10 = Instance;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v14 = 0;
    v15 = (unsigned int)m_CancellationTokenSource;
    while ( 1 )
    {
      if ( v14 >= LODWORD(v10->fields.m_CancellationTokenSource) )
        sub_2213CE4(v13);
      v16 = *((_DWORD *)&v10->fields._DispLog + v14);
      key = v16;
      if ( servantEquipIdStrDic )
      {
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
                v16,
                &value,
                (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
        {
          v17 = System_Int32__ToString((int32_t)&key, 0);
          value = (Il2CppObject *)System_String__Concat_75694928(v7, (System_String_o *)StringLiteral_1533/*":"*/, v17, 0);
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)servantEquipIdStrDic,
            key,
            value,
            (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__string__Add__);
        }
      }
      else
      {
        v18 = System_Int32__ToString((int32_t)&key, 0);
        value = (Il2CppObject *)System_String__Concat_75694928(v7, (System_String_o *)StringLiteral_1533/*":"*/, v18, 0);
      }
      Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    (const MethodInfo_3F134B8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
      if ( !Instance )
        break;
      klass = Instance->klass;
      v20 = value;
      v21 = Instance;
      v22 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
        {
          --v22;
          p_offset += 4;
          if ( !v22 )
            goto LABEL_24;
        }
        v24 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_24:
        v24 = sub_224BC3C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                0);
      }
      v13 = (*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v24)(v21, v20, *(_QWORD *)(v24 + 8));
      if ( (v13 & 1) != 0 )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      (const MethodInfo_3F134B8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__get_lookup__);
        if ( !Instance )
          break;
        v25 = Instance->klass;
        v26 = value;
        v27 = Instance;
        v28 = *(unsigned __int16 *)&Instance->klass->_2.rank;
        if ( *(_WORD *)&Instance->klass->_2.rank )
        {
          v29 = (System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__c **)&v25->_1.interfaceOffsets->offset;
          while ( *(v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo )
          {
            --v28;
            v29 += 2;
            if ( !v28 )
              goto LABEL_32;
          }
          v30 = (__int64)(&v25->vtable._2_GetHashCode + *(_DWORD *)v29);
        }
        else
        {
LABEL_32:
          v30 = sub_224BC3C(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__UserServantCollectionEntity__TypeInfo,
                  2);
        }
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppObject *, _QWORD))v30)(
                                      v27,
                                      v26,
                                      *(_QWORD *)(v30 + 8));
        if ( !v12 )
          break;
        items = v12->fields._items;
        v38 = Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        v40 = Instance;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)Instance,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v40;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v40, v31, v32, v33, v34, v35, v36);
        }
      }
      if ( ++v14 == v15 )
        return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v12;
    }
LABEL_41:
    sub_2213CDC(Instance, v9);
  }
  return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v12;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_List_UserServantCollectionEntity__o **p_cachedUserServantCollectionEntityList; // x0

  this->fields.cachedUserServantCollectionEntityList = 0;
  p_cachedUserServantCollectionEntityList = &this->fields.cachedUserServantCollectionEntityList;
  *(p_cachedUserServantCollectionEntityList - 3) = 0;
  *((_WORD *)p_cachedUserServantCollectionEntityList - 8) = 0;
  *(struct System_Collections_Generic_List_UserServantCollectionEntity__o **)((char *)p_cachedUserServantCollectionEntityList
                                                                            - 12) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_cachedUserServantCollectionEntityList, 0, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  bool result; // w0
  System_Collections_Generic_List_UserServantCollectionEntity__o *cachedUserServantCollectionEntityList; // x1
  int32_t cachedFindSum; // w8

  *getSum = 0;
  *findSum = 0;
  *userServantCollectionEntityList = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)userServantCollectionEntityList,
    0,
    (System_String_o *)isEquip,
    (System_String_o *)ignoreHideStateServant,
    (int32_t)getSum,
    (int32_t)findSum,
    (bool)userServantCollectionEntityList,
    (bool)method);
  result = 0;
  if ( this->fields.cachedUserId == userId )
  {
    if ( this->fields.cachedIsEquip == isEquip && this->fields.cachedIgnoreHideStateServant == ignoreHideStateServant )
    {
      cachedUserServantCollectionEntityList = this->fields.cachedUserServantCollectionEntityList;
      *getSum = this->fields.cachedGetSum;
      cachedFindSum = this->fields.cachedFindSum;
      *userServantCollectionEntityList = cachedUserServantCollectionEntityList;
      *findSum = cachedFindSum;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)userServantCollectionEntityList,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_cachedUserServantCollectionEntityList,
    (int32_t)userServantCollectionEntityList,
    (System_String_o *)isEquip,
    (System_String_o *)ignoreHideStateServant,
    getSum,
    findSum,
    (bool)userServantCollectionEntityList,
    (bool)method);
}