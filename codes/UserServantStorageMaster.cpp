void __fastcall UserServantStorageMaster___ctor(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F475 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__, method);
    byte_4A4F475 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    15,
    (const MethodInfo_32144B8 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantStorageMaster__CostumeTargetEntity(
        UserServantStorageMaster_o *this,
        int32_t svtId,
        UserServantEntity_o *defaultTarget,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  NetworkManager_c *v13; // x0
  int32_t v14; // w23
  int64_t userIdNumber; // x27
  __int128 v16; // q0
  UserServantEntity_o *v17; // x24
  __int64 v18; // x25
  __int64 v19; // x26
  __int64 v20; // x25
  __int64 v21; // x26
  int32_t v22; // w25
  __int64 v23; // x25
  __int64 v24; // x26
  int32_t v25; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4A4F47D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_4A4F47D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4A48C25 = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v14 = 0;
    userIdNumber = v13->static_fields->userIdNumber;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v16 = *(_OWORD *)&list[2].fields.items;
      v17 = (UserServantEntity_o *)list;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v28.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v28;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v27, 0LL) == userIdNumber )
      {
        v19 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v29.fields.currentCryptoKey = v19;
        *(_QWORD *)&v29.fields.fakeValue = v18;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v29, 0LL) == svtId )
        {
          if ( !defaultTarget )
            goto LABEL_25;
          v21 = *(_QWORD *)&v17->fields.limitCount.fields.currentCryptoKey;
          v20 = *(_QWORD *)&v17->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v30.fields.currentCryptoKey = v21;
          *(_QWORD *)&v30.fields.fakeValue = v20;
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v30, 0LL);
          if ( v22 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                       defaultTarget->fields.limitCount,
                       0LL)
            || v17->fields.lv > defaultTarget->fields.lv )
          {
            goto LABEL_25;
          }
          v24 = *(_QWORD *)&v17->fields.limitCount.fields.currentCryptoKey;
          v23 = *(_QWORD *)&v17->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v31.fields.currentCryptoKey = v24;
          *(_QWORD *)&v31.fields.fakeValue = v23;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v31, 0LL);
          if ( v25 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                        defaultTarget->fields.limitCount,
                        0LL)
            && v17->fields.lv == defaultTarget->fields.lv
            && v17->fields.createdAt < defaultTarget->fields.createdAt )
          {
LABEL_25:
            defaultTarget = v17;
          }
        }
      }
      if ( Count == ++v14 )
        return defaultTarget;
    }
LABEL_35:
    sub_1B86614(list, *(_QWORD *)&svtId);
  }
  return defaultTarget;
}


int32_t __fastcall UserServantStorageMaster__GetSvtEquipFriendShip(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v13; // x26
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w21
  int32_t v17; // w23
  Il2CppObject *Item; // x0
  Il2CppObject v19; // q0
  Il2CppObject *v20; // x24
  void *monitor; // x24
  Il2CppClass *klass; // x25
  Il2CppObject *Entity; // x0
  ServantEntity_o *v24; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A4F480 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A4F480 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v11);
    byte_4A48C25 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_29;
  v13 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v17,
               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v19 = Item[4];
        v20 = Item;
        *(Il2CppObject *)&v27.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v27.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v26 = v27;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v26, 0LL) == v13
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v20, 0LL) )
        {
          klass = v20[5].klass;
          monitor = v20[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v28.fields.currentCryptoKey = klass;
          *(_QWORD *)&v28.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v28, 0LL);
          if ( !MasterData_object )
            break;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            v24 = (ServantEntity_o *)Entity;
            if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0LL) )
              v16 += ServantEntity__get_IsFriendShipSvtEquip(v24, 0LL);
          }
        }
      }
      if ( v15 == ++v17 )
        return v16;
    }
LABEL_29:
    sub_1B86614(Instance, v11);
  }
  return 0;
}


void __fastcall UserServantStorageMaster__continueDeviceUserServant(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x20
  int64_t v12; // x1
  int64_t list; // x0
  int32_t Count; // w21
  __int64 v15; // x24
  int32_t v16; // w22
  __int128 v17; // q0
  int64_t v18; // x23
  __int128 v19; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Int64_array *v23; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-70h]

  if ( (byte_4A4F47C & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B863B8(&UserServantNewManager_TypeInfo, v10);
    byte_4A4F47C = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_1B86604(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_35E4138 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v12);
    byte_4A48C25 = 1;
  }
  list = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (int64_t)NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(list + 184) + 64LL);
    v16 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v16,
                        (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v17 = *(_OWORD *)(list + 64);
        v18 = list;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v26.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v25, 0LL);
        if ( list == v15 )
        {
          list = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v18, 0LL);
          if ( (list & 1) == 0 )
          {
            v19 = *(_OWORD *)(v18 + 32);
            *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
            *(_OWORD *)&v26.fields.fakeValue = v19;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v24 = v26;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v24, 0LL);
            if ( !v11 )
              break;
            items = v11->fields._items;
            v21 = Method_System_Collections_Generic_List_long__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            v12 = list;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v11,
                list,
                *(const MethodInfo_35E498C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v11->fields._size = size + 1;
              items->m_Items[size] = list;
            }
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_26;
    }
LABEL_30:
    sub_1B86614(list, v12);
  }
LABEL_26:
  if ( !v11 )
    goto LABEL_30;
  v23 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_35E6444 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_41623348(v23, 0LL);
}


int32_t __fastcall UserServantStorageMaster__getCount(
        UserServantStorageMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v18; // x29
  int32_t Count; // w0
  int32_t v20; // w24
  int32_t v21; // w25
  int32_t v22; // w26
  Il2CppObject *Item; // x0
  Il2CppObject v24; // q0
  Il2CppObject *v25; // x27
  void *monitor; // x27
  Il2CppClass *klass; // x28
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w28
  ServantEntity_o *v30; // x27
  int32_t *v32; // [xsp+0h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4A4F476 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, servantSum);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v8);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B863B8(&NetworkManager_TypeInfo, v11);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4A4F476 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v16);
    byte_4A48C25 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_33;
  v18 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v32 = servantEquipSum;
    v20 = Count;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v22,
               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v24 = Item[4];
        v25 = Item;
        *(Il2CppObject *)&v35.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v35.fields.fakeValue = v24;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v34 = v35;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v34, 0LL) == v18
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v25, 0LL) )
        {
          klass = v25[5].klass;
          monitor = v25[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v36.fields.currentCryptoKey = klass;
          *(_QWORD *)&v36.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v36, 0LL);
          if ( !MasterData_object )
            break;
          ++v21;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            klass_high = HIDWORD(Entity[5].klass);
            v30 = (ServantEntity_o *)Entity;
            if ( SvtType__IsKeepServant(klass_high, 0LL) )
            {
              ++*servantSum;
            }
            else if ( SvtType__IsKeepServantEquip(klass_high, 0LL)
                   && (!friendShipSvtEqExclude || !ServantEntity__get_IsFriendShipSvtEquip(v30, 0LL)) )
            {
              ++*v32;
            }
          }
        }
      }
      if ( v20 == ++v22 )
        return v21;
    }
LABEL_33:
    sub_1B86614(Instance, v16);
  }
  return 0;
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getKeepServantEquipList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v17; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w23
  __int128 v21; // q0
  int64_t v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4A4F47A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A4F47A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v15);
    byte_4A48C25 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v17 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v33.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v32, 0LL);
        if ( Instance == v17 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v24 = *(_QWORD *)(v22 + 80);
            v23 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v34.fields.currentCryptoKey = v24;
            *(_QWORD *)&v34.fields.fakeValue = v23;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v34, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v19 )
                break;
              items = v19->fields._items;
              v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v30 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v30[4] = (Il2CppClass *)v22;
                sub_1B8635C((CGThumbnailListItem_o *)(v30 + 4), v22, v25, v26);
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1B86614(Instance, v15);
  }
LABEL_30:
  if ( !v19 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getKeepServantList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v17; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w23
  __int128 v21; // q0
  int64_t v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4A4F479 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A4F479 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v15);
    byte_4A48C25 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v17 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v33.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v32, 0LL);
        if ( Instance == v17 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v24 = *(_QWORD *)(v22 + 80);
            v23 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v34.fields.currentCryptoKey = v24;
            *(_QWORD *)&v34.fields.fakeValue = v23;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v34, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v19 )
                break;
              items = v19->fields._items;
              v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v30 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v30[4] = (Il2CppClass *)v22;
                sub_1B8635C((CGThumbnailListItem_o *)(v30 + 4), v22, v25, v26);
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1B86614(Instance, v15);
  }
LABEL_30:
  if ( !v19 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4A4F477 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4F477 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A48C25 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserServantStorageMaster__getList_41312264(this, v4->static_fields->userIdNumber, v2);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList_41312264(
        UserServantStorageMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v13; // x21
  int32_t v14; // w23
  __int128 v15; // q0
  UserServantEntity_o *v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-70h]

  if ( (byte_4A4F478 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, userId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_4A4F478 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v15 = *(_OWORD *)(list + 64);
        v16 = (UserServantEntity_o *)list;
        *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v25.fields.fakeValue = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v25;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v24, 0LL);
        if ( list == userId )
        {
          list = UserServantEntity__IsWithdrawal(v16, 0LL);
          if ( (list & 1) == 0 )
          {
            if ( !v13 )
              break;
            items = v13->fields._items;
            v20 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v13->fields._version;
            if ( !items )
              break;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                (Il2CppObject *)v16,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v16;
              sub_1B8635C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
            }
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1B86614(list, userId);
  }
LABEL_18:
  if ( !v13 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v13,
                                      (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getOrganizationList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v17; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w23
  __int128 v21; // q0
  int64_t v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4A4F47E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A4F47E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v15);
    byte_4A48C25 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v17 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v33.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v32, 0LL);
        if ( Instance == v17 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v24 = *(_QWORD *)(v22 + 80);
            v23 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v34.fields.currentCryptoKey = v24;
            *(_QWORD *)&v34.fields.fakeValue = v23;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v34, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v19 )
                break;
              items = v19->fields._items;
              v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v30 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v30[4] = (Il2CppClass *)v22;
                sub_1B8635C((CGThumbnailListItem_o *)(v30 + 4), v22, v25, v26);
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1B86614(Instance, v15);
  }
LABEL_30:
  if ( !v19 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getServantEquipList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v17; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w23
  __int128 v21; // q0
  int64_t v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4A4F47B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A4F47B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v15);
    byte_4A48C25 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v17 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v33.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v32, 0LL);
        if ( Instance == v17 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v24 = *(_QWORD *)(v22 + 80);
            v23 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v34.fields.currentCryptoKey = v24;
            *(_QWORD *)&v34.fields.fakeValue = v23;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v34, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v19 )
                break;
              items = v19->fields._items;
              v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v30 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v30[4] = (Il2CppClass *)v22;
                sub_1B8635C((CGThumbnailListItem_o *)(v30 + 4), v22, v25, v26);
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1B86614(Instance, v15);
  }
LABEL_30:
  if ( !v19 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


bool __fastcall UserServantStorageMaster__isOnList(
        UserServantStorageMaster_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_String_o *v9; // x20
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v14; // [xsp+8h] [xbp-28h] BYREF

  v14 = userServantId;
  if ( (byte_4A4F47F & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__get_lookup__, userServantId);
    sub_1B863B8(&System_Collections_Generic_IReadOnlyDictionary_string__UserServantEntity__TypeInfo, v4);
    byte_4A4F47F = 1;
  }
  lookup = DataMasterBase_object__object__long___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_32145D0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__get_lookup__);
  v6 = System_Int64__ToString((int64_t)&v14, 0LL);
  if ( !lookup )
    sub_1B86614(v6, v7);
  klass = lookup->klass;
  v9 = v6;
  v10 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserServantEntity__TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BD6B4C(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserServantEntity__TypeInfo,
                 0LL);
  }
  return (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))p_method)(
           lookup,
           v9,
           *(_QWORD *)(p_method + 8)) & 1;
}