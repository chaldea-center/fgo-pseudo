void UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB7288 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
    byte_4CB7288 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    260,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB7286 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
    byte_4CB7286 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_33FDB94 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
}


System_Collections_Generic_List_long__o *UserServantCommandCodeMaster__GetEquipedCommandCodeList(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  _QWORD *monitor; // x25
  __int64 v10; // x26
  __int64 v11; // x27
  struct System_Int64_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4CB7289 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CB7289 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( !list )
        break;
      monitor = list[3].monitor;
      if ( !monitor )
        break;
      if ( (int)monitor[3] >= 1 )
      {
        v10 = 0;
        v11 = (unsigned int)monitor[3] - 1LL;
        while ( 1 )
        {
          v4 = monitor[v10 + 4];
          if ( v4 >= 1 )
          {
            if ( !v3 )
              goto LABEL_22;
            items = v3->fields._items;
            v13 = Method_System_Collections_Generic_List_long__Add__;
            ++v3->fields._version;
            if ( !items )
              goto LABEL_22;
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v3,
                v4,
                *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v3->fields._size = size + 1;
              items->m_Items[size] = v4;
            }
          }
          if ( v11 == v10 )
            break;
          if ( ++v10 >= (unsigned __int64)*((unsigned int *)monitor + 6) )
            sub_1C6BC68(list);
        }
      }
      if ( ++v8 == v7 )
        return v3;
    }
LABEL_22:
    sub_1C6BC60(list, v4);
  }
  return v3;
}


System_Collections_Generic_Dictionary_long__long__o *UserServantCommandCodeMaster__GetEquippedCommandCodeDic(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__long__o *v3; // x20
  int64_t v4; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int128 v9; // q0
  __int64 v10; // x27
  int64_t v11; // x23
  __int64 v12; // x28
  __int64 v13; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-80h]

  if ( (byte_4CB728A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_long__long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_long__long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_long__long__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB728A = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__long__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_long__long__TypeInfo);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v3,
    (const MethodInfo_3493E90 *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v8,
                        (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( !list )
        break;
      v9 = *(_OWORD *)(list + 64);
      v10 = *(_QWORD *)(list + 80);
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)(list + 48);
      *(_OWORD *)&v16.fields.fakeValue = v9;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v15 = v16;
      list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v15, 0);
      if ( !v10 )
        break;
      if ( (int)*(_QWORD *)(v10 + 24) >= 1 )
      {
        v11 = list;
        v12 = 0;
        v13 = (unsigned int)*(_QWORD *)(v10 + 24) - 1LL;
        while ( 1 )
        {
          v4 = *(_QWORD *)(v10 + 32 + 8 * v12);
          if ( v4 >= 1 )
          {
            if ( !v3 )
              goto LABEL_21;
            System_Collections_Generic_Dictionary_long__long___Add(
              v3,
              v4,
              v11,
              (const MethodInfo_3494860 *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
          }
          if ( v13 == v12 )
            break;
          if ( ++v12 >= (unsigned __int64)*(unsigned int *)(v10 + 24) )
            sub_1C6BC68(list);
        }
      }
      if ( ++v8 == v7 )
        return v3;
    }
LABEL_21:
    sub_1C6BC60(list, v4);
  }
  return v3;
}


bool UserServantCommandCodeMaster__IsAttach(
        UserServantCommandCodeMaster_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_long__o *v7; // x0
  int32_t v8; // w22
  bool v9; // w24
  Il2CppObject *Item; // x0
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v13; // w10

  if ( (byte_4CB728E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CB728E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1C6BC60(list, userCommandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  v7 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count < 1 )
  {
    return 0;
  }
  else
  {
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_17;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v8,
               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( Item )
      {
        klass = Item[5].klass;
        if ( klass )
        {
          namespaze = (int)klass->_1.namespaze;
          if ( namespaze >= 1 )
            break;
        }
      }
LABEL_13:
      v9 = ++v8 < Count;
      if ( v8 == Count )
        return v9;
    }
    v13 = 0;
    while ( *((_QWORD *)&klass->_1.byval_arg.data + v13) != userCommandCodeId )
    {
      if ( namespaze == ++v13 )
        goto LABEL_13;
    }
  }
  return v9;
}


bool UserServantCommandCodeMaster__TryGetEntity(
        UserServantCommandCodeMaster_o *this,
        UserServantCommandCodeEntity_o **entity,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB7287 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
    byte_4CB7287 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
}


void UserServantCommandCodeMaster__getAttachList(
        UserServantCommandCodeMaster_o *this,
        System_Int64_array **userCommandCodeIdList,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_long__o *v9; // x22
  int32_t v10; // w24
  __int128 v11; // q0
  UserServantCommandCodeEntity_o *v12; // x25
  const MethodInfo *v13; // x2
  System_Int64_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-70h]

  if ( (byte_4CB728B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB728B = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  v9 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v10,
                        (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( list )
      {
        v11 = *(_OWORD *)(list + 32);
        v12 = (UserServantCommandCodeEntity_o *)list;
        *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)(list + 16);
        *(_OWORD *)&v18.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v17 = v18;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v17, 0);
        if ( list == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v12, v9, v13);
      }
      if ( Count == ++v10 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C6BC60(list, userCommandCodeIdList);
  }
LABEL_13:
  if ( !v9 )
    goto LABEL_15;
  v14 = System_Collections_Generic_List_long___ToArray(
          v9,
          (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)userCommandCodeIdList, (int32_t)v14, v15, v16);
}


System_Int32_array *UserServantCommandCodeMaster__getCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v9; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w21
  BalanceConfig_c *v12; // x0
  Il2CppObject *v13; // x20
  unsigned __int64 v14; // x23
  __int64 v15; // x24
  struct System_Int64_array *v16; // x8
  int64_t v17; // x2
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v21; // [xsp+0h] [xbp-60h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4CB728C & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB728C = 1;
  }
  v21 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = (Il2CppObject *)UserServantCommandCodeMaster__TryGetEntity(
                               (UserServantCommandCodeMaster_o *)Instance,
                               &entity,
                               userId,
                               svtId,
                               v9);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_33;
  userCommandCodeIds = entity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    goto LABEL_33;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  Instance = (Il2CppObject *)sub_1C6BAB0(int___TypeInfo, (unsigned int)v12->static_fields->SvtCommandCardMax);
  v13 = Instance;
  if ( BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax >= max_length )
    goto LABEL_16;
  max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  }
  if ( max_length >= 1 )
  {
LABEL_16:
    v14 = 0;
    v15 = (unsigned int)max_length;
    while ( entity )
    {
      v16 = entity->fields.userCommandCodeIds;
      if ( !v16 )
        break;
      if ( v14 >= LODWORD(v16->max_length) )
        goto LABEL_34;
      v17 = v16->m_Items[v14];
      if ( v17 >= 1 )
      {
        if ( !MasterData_object )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                     &v21,
                                     v17,
                                     (const MethodInfo_33FB684 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v21 )
            break;
          klass = v21[5].klass;
          monitor = v21[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v23.fields.currentCryptoKey = klass;
          *(_QWORD *)&v23.fields.fakeValue = monitor;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v23, 0);
          if ( !v13 )
            break;
          if ( v14 >= LODWORD(v13[1].monitor) )
LABEL_34:
            sub_1C6BC68(Instance);
          *((_DWORD *)&v13[2].klass + v14) = (_DWORD)Instance;
        }
      }
      if ( v15 == ++v14 )
        return (System_Int32_array *)v13;
    }
LABEL_33:
    sub_1C6BC60(Instance, v7);
  }
  return (System_Int32_array *)v13;
}


System_Collections_Generic_List_long__o *UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  int64_t v7; // x1
  const MethodInfo *v8; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int32_t max_length; // w21
  System_Collections_Generic_List_long__o *v11; // x19
  unsigned __int64 v12; // x20
  struct System_Int64_array *v13; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB728D & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB728D = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v8);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_30;
  userCommandCodeIds = entity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    goto LABEL_30;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  }
  if ( *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 60LL) >= max_length )
    goto LABEL_16;
  max_length = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 60LL);
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  }
  if ( max_length >= 1 )
  {
LABEL_16:
    v12 = 0;
    while ( entity )
    {
      v13 = entity->fields.userCommandCodeIds;
      if ( !v13 )
        break;
      if ( v12 >= LODWORD(v13->max_length) )
        sub_1C6BC68(Instance);
      v7 = v13->m_Items[v12];
      if ( v7 >= 1 )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v15 = Method_System_Collections_Generic_List_long__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v11,
            v7,
            *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size] = v7;
        }
      }
      if ( max_length == ++v12 )
        return v11;
    }
LABEL_30:
    sub_1C6BC60(Instance, v7);
  }
  return v11;
}