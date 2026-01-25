void UserServantStorageMaster___ctor(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF6D9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
    byte_4CEF6D9 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    15,
    (const MethodInfo_342E534 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *UserServantStorageMaster__CostumeTargetEntity(
        UserServantStorageMaster_o *this,
        int32_t svtId,
        UserServantEntity_o *defaultTarget,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  NetworkManager_c *v9; // x0
  int32_t v10; // w23
  int64_t userIdNumber; // x27
  __int128 v12; // q0
  UserServantEntity_o *v13; // x24
  __int64 v14; // x25
  __int64 v15; // x26
  __int64 v16; // x25
  __int64 v17; // x26
  int32_t v18; // w25
  __int64 v19; // x25
  __int64 v20; // x26
  int32_t v21; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4CEF6E0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CEF6E0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v10 = 0;
    userIdNumber = v9->static_fields->userIdNumber;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v12 = *(_OWORD *)&list[2].fields.items;
      v13 = (UserServantEntity_o *)list;
      *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v24.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v23 = v24;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v23, 0) == userIdNumber )
      {
        v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v25.fields.currentCryptoKey = v15;
        *(_QWORD *)&v25.fields.fakeValue = v14;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v25, 0) == svtId )
        {
          if ( !defaultTarget )
            goto LABEL_25;
          v17 = *(_QWORD *)&v13->fields.limitCount.fields.currentCryptoKey;
          v16 = *(_QWORD *)&v13->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v26.fields.currentCryptoKey = v17;
          *(_QWORD *)&v26.fields.fakeValue = v16;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v26, 0);
          if ( v18 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                       defaultTarget->fields.limitCount,
                       0)
            || v13->fields.lv > defaultTarget->fields.lv )
          {
            goto LABEL_25;
          }
          v20 = *(_QWORD *)&v13->fields.limitCount.fields.currentCryptoKey;
          v19 = *(_QWORD *)&v13->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = v20;
          *(_QWORD *)&v27.fields.fakeValue = v19;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v27, 0);
          if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                        defaultTarget->fields.limitCount,
                        0)
            && v13->fields.lv == defaultTarget->fields.lv
            && v13->fields.createdAt < defaultTarget->fields.createdAt )
          {
LABEL_25:
            defaultTarget = v13;
          }
        }
      }
      if ( Count == ++v10 )
        return defaultTarget;
    }
LABEL_35:
    sub_1C7BD40(list, *(_QWORD *)&svtId);
  }
  return defaultTarget;
}


int32_t UserServantStorageMaster__GetSvtEquipFriendShip(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x26
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w21
  int32_t v10; // w23
  Il2CppObject *Item; // x0
  Il2CppObject v12; // q0
  Il2CppObject *v13; // x24
  void *monitor; // x24
  Il2CppClass *klass; // x25
  Il2CppObject *Entity; // x0
  ServantEntity_o *v17; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4CEF6E3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6E3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_29;
  v6 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v10,
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v12 = Item[4];
        v13 = Item;
        *(Il2CppObject *)&v20.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v20.fields.fakeValue = v12;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v19 = v20;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v19, 0) == v6
          && (BYTE4(v13[18].monitor) & 4) == 0 )
        {
          klass = v13[5].klass;
          monitor = v13[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v21.fields.currentCryptoKey = klass;
          *(_QWORD *)&v21.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v21, 0);
          if ( !MasterData_object )
            break;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            v17 = (ServantEntity_o *)Entity;
            if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0) )
              v9 += ServantEntity__get_IsFriendShipSvtEquip(v17, 0);
          }
        }
      }
      if ( v8 == ++v10 )
        return v9;
    }
LABEL_29:
    sub_1C7BD40(Instance, v4);
  }
  return 0;
}


void UserServantStorageMaster__continueDeviceUserServant(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t v4; // x1
  int64_t list; // x0
  int32_t Count; // w21
  __int64 v7; // x24
  int32_t v8; // w22
  __int128 v9; // q0
  int64_t v10; // x23
  __int128 v11; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  System_Int64_array *v15; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-70h]

  if ( (byte_4CEF6DF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&UserServantNewManager_TypeInfo);
    byte_4CEF6DF = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  list = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (int64_t)NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(list + 184) + 64LL);
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v8,
                        (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v9 = *(_OWORD *)(list + 64);
        v10 = list;
        *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v18.fields.fakeValue = v9;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v17 = v18;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v17, 0);
        if ( list == v7 && (*(_BYTE *)(v10 + 300) & 4) == 0 )
        {
          v11 = *(_OWORD *)(v10 + 32);
          *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
          *(_OWORD *)&v18.fields.fakeValue = v11;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v16 = v18;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v16, 0);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_long__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          v4 = list;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v3,
              list,
              *(const MethodInfo_3826E30 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = list;
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_26;
    }
LABEL_30:
    sub_1C7BD40(list, v4);
  }
LABEL_26:
  if ( !v3 )
    goto LABEL_30;
  v15 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_44174592(v15, 0);
}


int32_t UserServantStorageMaster__getCount(
        UserServantStorageMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v11; // x29
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  int32_t v15; // w26
  Il2CppObject *Item; // x0
  Il2CppObject v17; // q0
  Il2CppObject *v18; // x27
  void *monitor; // x27
  Il2CppClass *klass; // x28
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w28
  ServantEntity_o *v23; // x27
  int32_t *v25; // [xsp+0h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4CEF6DA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6DA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_33;
  v11 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v25 = servantEquipSum;
    v13 = Count;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v15,
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v17 = Item[4];
        v18 = Item;
        *(Il2CppObject *)&v28.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v28.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v27 = v28;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v27, 0) == v11
          && (BYTE4(v18[18].monitor) & 4) == 0 )
        {
          klass = v18[5].klass;
          monitor = v18[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v29.fields.currentCryptoKey = klass;
          *(_QWORD *)&v29.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v29, 0);
          if ( !MasterData_object )
            break;
          ++v14;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            klass_high = HIDWORD(Entity[5].klass);
            v23 = (ServantEntity_o *)Entity;
            if ( SvtType__IsKeepServant(klass_high, 0) )
            {
              ++*servantSum;
            }
            else if ( SvtType__IsKeepServantEquip(klass_high, 0)
                   && (!friendShipSvtEqExclude || !ServantEntity__get_IsFriendShipSvtEquip(v23, 0)) )
            {
              ++*v25;
            }
          }
        }
      }
      if ( v13 == ++v15 )
        return v14;
    }
LABEL_33:
    sub_1C7BD40(Instance, v9);
  }
  return 0;
}


UserServantEntity_array *UserServantStorageMaster__getKeepServantList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w23
  __int128 v10; // q0
  int64_t v11; // x24
  __int64 v12; // x25
  __int64 v13; // x26
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4CEF6DD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6DD = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v9,
                            (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v26.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v25, 0);
        if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
        {
          v13 = *(_QWORD *)(v11 + 80);
          v12 = *(_QWORD *)(v11 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = v13;
          *(_QWORD *)&v27.fields.fakeValue = v12;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v27, 0);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v8 )
              break;
            items = v8->fields._items;
            v21 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v11,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v11;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C7BD40(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantStorageMaster__getList(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4CEF6DB & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEF6DB = 1;
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
  return UserServantStorageMaster__getList_43782164(this, v4->static_fields->userIdNumber, v2);
}


UserServantEntity_array *UserServantStorageMaster__getList_43782164(
        UserServantStorageMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w23
  __int128 v9; // q0
  int64_t v10; // x24
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-70h]

  if ( (byte_4CEF6DC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CEF6DC = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v8,
                        (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v9 = *(_OWORD *)(list + 64);
        v10 = list;
        *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v23.fields.fakeValue = v9;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v22 = v23;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v22, 0);
        if ( list == userId && (*(_BYTE *)(v10 + 300) & 4) == 0 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v18 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v10,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), v10, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C7BD40(list, userId);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantStorageMaster__getOrganizationList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w23
  __int128 v10; // q0
  int64_t v11; // x24
  __int64 v12; // x25
  __int64 v13; // x26
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4CEF6E1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6E1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v9,
                            (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v26.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v25, 0);
        if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
        {
          v13 = *(_QWORD *)(v11 + 80);
          v12 = *(_QWORD *)(v11 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = v13;
          *(_QWORD *)&v27.fields.fakeValue = v12;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v27, 0);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v8 )
              break;
            items = v8->fields._items;
            v21 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v11,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v11;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C7BD40(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantStorageMaster__getServantEquipList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w23
  __int128 v10; // q0
  int64_t v11; // x24
  __int64 v12; // x25
  __int64 v13; // x26
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4CEF6DE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6DE = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v9,
                            (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v26.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v25, 0);
        if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
        {
          v13 = *(_QWORD *)(v11 + 80);
          v12 = *(_QWORD *)(v11 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = v13;
          *(_QWORD *)&v27.fields.fakeValue = v12;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v27, 0);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v8 )
              break;
            items = v8->fields._items;
            v21 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v11,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v11;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C7BD40(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


bool UserServantStorageMaster__isOnList(
        UserServantStorageMaster_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_String_o *v8; // x20
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  int64_t v13; // [xsp+8h] [xbp-28h] BYREF

  v13 = userServantId;
  if ( (byte_4CEF6E2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__get_lookup__);
    sub_1C7BAE8(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantEntity__TypeInfo);
    byte_4CEF6E2 = 1;
  }
  lookup = DataMasterBase_object__object__long___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_342E64C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__get_lookup__);
  v5 = System_Int64__ToString((int64_t)&v13, 0);
  if ( !lookup )
    sub_1C7BD40(v5, v6);
  klass = lookup->klass;
  v8 = v5;
  v9 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantEntity__TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_8;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v11 = sub_1C51E70(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserServantEntity__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v11)(
           lookup,
           v8,
           *(_QWORD *)(v11 + 8))
       & 1;
}