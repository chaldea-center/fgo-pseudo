void UserServantStorageMaster___ctor(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939789 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
    byte_5939789 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    15,
    (const MethodInfo_3EDD598 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
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
  int64_t userIdNumber; // x29
  UserServantEntity_o *v12; // x24
  __int128 v13; // q1
  int v14; // w8
  __int64 v15; // x25
  __int64 v16; // x26
  __int64 v17; // x25
  __int64 v18; // x26
  int32_t v19; // w25
  __int64 v20; // x25
  __int64 v21; // x26
  int32_t v22; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_5939790 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5939790 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v12 = (UserServantEntity_o *)list;
      v13 = *(_OWORD *)&list[2].fields.items;
      v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v25.fields.fakeValue = v13;
      if ( !v14 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&svtId);
      v24 = v25;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v24, 0) == userIdNumber )
      {
        v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
        v16 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
        *(_QWORD *)&v26.fields.currentCryptoKey = v15;
        *(_QWORD *)&v26.fields.fakeValue = v16;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v26, 0) == svtId )
        {
          if ( !defaultTarget )
            goto LABEL_25;
          v17 = *(_QWORD *)&v12->fields.limitCount.fields.currentCryptoKey;
          v18 = *(_QWORD *)&v12->fields.limitCount.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
          *(_QWORD *)&v27.fields.currentCryptoKey = v17;
          *(_QWORD *)&v27.fields.fakeValue = v18;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v27, 0);
          if ( v19 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                       defaultTarget->fields.limitCount,
                       0)
            || v12->fields.lv > defaultTarget->fields.lv )
          {
            goto LABEL_25;
          }
          v20 = *(_QWORD *)&v12->fields.limitCount.fields.currentCryptoKey;
          v21 = *(_QWORD *)&v12->fields.limitCount.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
          *(_QWORD *)&v28.fields.currentCryptoKey = v20;
          *(_QWORD *)&v28.fields.fakeValue = v21;
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v28, 0);
          if ( v22 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                        defaultTarget->fields.limitCount,
                        0)
            && v12->fields.lv == defaultTarget->fields.lv
            && v12->fields.createdAt < defaultTarget->fields.createdAt )
          {
LABEL_25:
            defaultTarget = v12;
          }
        }
      }
      if ( Count == ++v10 )
        return defaultTarget;
    }
LABEL_35:
    sub_21FFECC(list, *(_QWORD *)&svtId);
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
  Il2CppObject *v12; // x24
  Il2CppObject v13; // q1
  int v14; // w8
  void *monitor; // x24
  Il2CppClass *klass; // x25
  Il2CppObject *Entity; // x0
  ServantEntity_o *v18; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_5939793 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939793 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_29;
  v6 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v12 = Item;
        v13 = Item[4];
        v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(Il2CppObject *)&v21.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v21.fields.fakeValue = v13;
        if ( !v14 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v20 = v21;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v20, 0) == v6
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v12, 0) )
        {
          klass = v12[5].klass;
          monitor = v12[5].monitor;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
          *(_QWORD *)&v22.fields.currentCryptoKey = klass;
          *(_QWORD *)&v22.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v22, 0);
          if ( !MasterData_object )
            break;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            v18 = (ServantEntity_o *)Entity;
            if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0) )
              v9 += ServantEntity__get_IsFriendShipSvtEquip(v18, 0);
          }
        }
      }
      if ( v8 == ++v10 )
        return v9;
    }
LABEL_29:
    sub_21FFECC(Instance, v4);
  }
  return 0;
}


void UserServantStorageMaster__continueDeviceUserServant(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t v4; // x1
  int64_t list; // x0
  int32_t Count; // w21
  int32_t v7; // w22
  __int64 v8; // x27
  int64_t v9; // x23
  __int128 v10; // q1
  int v11; // w8
  __int128 v12; // q1
  int v13; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  __int64 v17; // x1
  System_Int64_array *v18; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-70h]

  if ( (byte_593978F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&UserServantNewManager_TypeInfo);
    byte_593978F = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  list = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    list = (int64_t)NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v7 = 0;
    v8 = *(_QWORD *)(*(_QWORD *)(list + 184) + 64LL);
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v7,
                        (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v9 = list;
        v10 = *(_OWORD *)(list + 64);
        v11 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v21.fields.fakeValue = v10;
        if ( !v11 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v20 = v21;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v20, 0);
        if ( list == v8 )
        {
          list = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v9, 0);
          if ( (list & 1) == 0 )
          {
            v12 = *(_OWORD *)(v9 + 32);
            v13 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
            *(_OWORD *)&v21.fields.fakeValue = v12;
            if ( !v13 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
            v19 = v21;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v19, 0);
            if ( !v3 )
              break;
            items = v3->fields._items;
            v15 = Method_System_Collections_Generic_List_long__Add__;
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
                *(const MethodInfo_4438164 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v3->fields._size = size + 1;
              items->m_Items[size] = list;
            }
          }
        }
      }
      if ( Count == ++v7 )
        goto LABEL_26;
    }
LABEL_30:
    sub_21FFECC(list, v4);
  }
LABEL_26:
  if ( !v3 )
    goto LABEL_30;
  v18 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !*(&UserServantNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v17);
  UserServantNewManager__SetOld_50594288(v18, 0);
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
  Il2CppObject *v17; // x27
  Il2CppObject v18; // q1
  int v19; // w8
  void *monitor; // x27
  Il2CppClass *klass; // x28
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w28
  ServantEntity_o *v24; // x27
  bool IsKeepServant; // w0
  int32_t *v26; // x8
  bool IsFriendShipSvtEquip; // w0
  int32_t *v29; // [xsp+0h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_593978A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593978A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v11 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v29 = servantEquipSum;
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v17 = Item;
        v18 = Item[4];
        v19 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(Il2CppObject *)&v32.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v32.fields.fakeValue = v18;
        if ( !v19 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
        v31 = v32;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v31, 0) == v11
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v17, 0) )
        {
          klass = v17[5].klass;
          monitor = v17[5].monitor;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
          *(_QWORD *)&v33.fields.currentCryptoKey = klass;
          *(_QWORD *)&v33.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v33, 0);
          if ( !MasterData_object )
            break;
          ++v14;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            klass_high = HIDWORD(Entity[5].klass);
            v24 = (ServantEntity_o *)Entity;
            IsKeepServant = SvtType__IsKeepServant(klass_high, 0);
            v26 = servantSum;
            if ( IsKeepServant
              || SvtType__IsKeepServantEquip(klass_high, 0)
              && ((v26 = v29, !friendShipSvtEqExclude)
               || (IsFriendShipSvtEquip = ServantEntity__get_IsFriendShipSvtEquip(v24, 0),
                   v26 = v29,
                   !IsFriendShipSvtEquip)) )
            {
              ++*v26;
            }
          }
        }
      }
      if ( v13 == ++v15 )
        return v14;
    }
LABEL_32:
    sub_21FFECC(Instance, v9);
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
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w23
  int64_t v10; // x24
  __int128 v11; // q1
  int v12; // w8
  __int64 v13; // x25
  __int64 v14; // x26
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_593978D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593978D = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(_OWORD *)(Instance + 64);
        v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v27.fields.fakeValue = v11;
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v26 = v27;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v26, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v10 + 80);
            v14 = *(_QWORD *)(v10 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
            *(_QWORD *)&v28.fields.currentCryptoKey = v13;
            *(_QWORD *)&v28.fields.fakeValue = v14;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v28, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v8 )
                break;
              items = v8->fields._items;
              v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v8->fields._version;
              if ( !items )
                break;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v10,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v10;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), v10, v15, v16, v17, v18, v19, v20);
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_21FFECC(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantStorageMaster__getList(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_593978B & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593978B = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v4 = NetworkManager_TypeInfo;
  }
  return UserServantStorageMaster__getList_50198056(this, v4->static_fields->userIdNumber, v2);
}


UserServantEntity_array *UserServantStorageMaster__getList_50198056(
        UserServantStorageMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  UserServantEntity_o *v9; // x24
  __int128 v10; // q1
  int v11; // w8
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-70h]

  if ( (byte_593978C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593978C = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                        (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v9 = (UserServantEntity_o *)list;
        v10 = *(_OWORD *)(list + 64);
        v11 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v24.fields.fakeValue = v10;
        if ( !v11 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userId);
        v23 = v24;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v23, 0);
        if ( list == userId )
        {
          list = UserServantEntity__IsWithdrawal(v9, 0);
          if ( (list & 1) == 0 )
          {
            if ( !v7 )
              break;
            items = v7->fields._items;
            v19 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v9,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v9;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_21FFECC(list, userId);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantStorageMaster__getOrganizationList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w23
  int64_t v10; // x24
  __int128 v11; // q1
  int v12; // w8
  __int64 v13; // x25
  __int64 v14; // x26
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_5939791 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939791 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(_OWORD *)(Instance + 64);
        v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v27.fields.fakeValue = v11;
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v26 = v27;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v26, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v10 + 80);
            v14 = *(_QWORD *)(v10 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
            *(_QWORD *)&v28.fields.currentCryptoKey = v13;
            *(_QWORD *)&v28.fields.fakeValue = v14;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v28, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v8 )
                break;
              items = v8->fields._items;
              v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v8->fields._version;
              if ( !items )
                break;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v10,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v10;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), v10, v15, v16, v17, v18, v19, v20);
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_21FFECC(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantStorageMaster__getServantEquipList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w23
  int64_t v10; // x24
  __int128 v11; // q1
  int v12; // w8
  __int64 v13; // x25
  __int64 v14; // x26
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_593978E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593978E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(_OWORD *)(Instance + 64);
        v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v27.fields.fakeValue = v11;
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v26 = v27;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v26, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v10 + 80);
            v14 = *(_QWORD *)(v10 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
            *(_QWORD *)&v28.fields.currentCryptoKey = v13;
            *(_QWORD *)&v28.fields.fakeValue = v14;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v28, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v8 )
                break;
              items = v8->fields._items;
              v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v8->fields._version;
              if ( !items )
                break;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v10,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v10;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), v10, v15, v16, v17, v18, v19, v20);
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_21FFECC(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  if ( (byte_5939792 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__get_lookup__);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantEntity__TypeInfo);
    byte_5939792 = 1;
  }
  lookup = DataMasterBase_object__object__long___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3EDD6B4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__get_lookup__);
  v5 = System_Int64__ToString((int64_t)&v13, 0);
  if ( !lookup )
    sub_21FFECC(v5, v6);
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
    v11 = sub_2237E2C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserServantEntity__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v11)(
           lookup,
           v8,
           *(_QWORD *)(v11 + 8))
       & 1;
}