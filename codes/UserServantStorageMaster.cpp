void __fastcall UserServantStorageMaster___ctor(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D262 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__, method);
    byte_418D262 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    15,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantStorageMaster__CostumeTargetEntity(
        UserServantStorageMaster_o *this,
        int32_t svtId,
        UserServantEntity_o *defaultTarget,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  int64_t v14; // x23
  int32_t v15; // w24
  __int64 v16; // x26
  __int64 v17; // x27
  int32_t v18; // w26
  UserServantEntity_o *v19; // x25
  __int64 v20; // x10
  __int128 v21; // q0
  __int64 v22; // x26
  __int64 v23; // x27
  __int64 v24; // x26
  __int64 v25; // x27
  int32_t v26; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_418D26A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&UserServantEntity_TypeInfo, v10);
    byte_418D26A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v14 = UserId;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v15,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v19 = (UserServantEntity_o *)list;
      v20 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v21 = *(_OWORD *)&list[2].klass;
      *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__Fields *)&v30.fields.currentCryptoKey = list[1].fields;
      *(_OWORD *)&v30.fields.fakeValue = v21;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v29 = v30;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v29, 0LL) == v14 )
      {
        v23 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v32.fields.currentCryptoKey = v23;
        *(_QWORD *)&v32.fields.fakeValue = v22;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL) == svtId )
        {
          if ( !defaultTarget )
            goto LABEL_34;
          v25 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
          v24 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v33.fields.currentCryptoKey = v25;
          *(_QWORD *)&v33.fields.fakeValue = v24;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v33, 0LL);
          if ( v26 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       defaultTarget->fields.limitCount,
                       0LL)
            || v19->fields.lv > defaultTarget->fields.lv )
          {
            goto LABEL_34;
          }
          v17 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
          v16 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v31.fields.currentCryptoKey = v17;
          *(_QWORD *)&v31.fields.fakeValue = v16;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v31, 0LL);
          if ( v18 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                        defaultTarget->fields.limitCount,
                        0LL)
            && v19->fields.lv == defaultTarget->fields.lv
            && v19->fields.createdAt < defaultTarget->fields.createdAt )
          {
LABEL_34:
            defaultTarget = v19;
          }
        }
      }
      if ( ++v15 >= Count )
        return defaultTarget;
    }
LABEL_37:
    sub_B2C434(list, *(_QWORD *)&svtId);
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
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v14; // x21
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w22
  int32_t v18; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v20; // x25
  __int64 v21; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v22; // q0
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  WarEntity_o *Entity; // x0
  ServantEntity_o *v26; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_418D26D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&UserServantEntity_TypeInfo, v10);
    byte_418D26D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v14 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v18,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = Item;
        v21 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == UserServantEntity_TypeInfo )
        {
          v22 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v29.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v29.fields.fakeValue = v22;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v28 = v29;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v28, 0LL) == v14
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v20, 0LL) )
          {
            klass = v20[5].klass;
            monitor = v20[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v30.fields.currentCryptoKey = klass;
            *(_QWORD *)&v30.fields.fakeValue = monitor;
            v12 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL);
            Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       v12,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v26 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(*(&Entity->fields.startType + 1), 0LL) )
                v17 += ServantEntity__get_IsFriendShipSvtEquip(v26, 0LL);
            }
          }
        }
      }
      if ( ++v18 >= v16 )
        return v17;
    }
LABEL_30:
    sub_B2C434(Instance, v12);
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
  __int64 v11; // x1
  System_Collections_Generic_List_long__o *v12; // x20
  __int64 v13; // x1
  int64_t list; // x0
  int32_t Count; // w21
  int64_t v16; // x22
  int32_t v17; // w23
  int64_t v18; // x24
  __int64 v19; // x10
  __int128 v20; // q0
  __int128 v21; // q0
  const MethodInfo *v22; // x1
  System_Int64_array *v23; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-70h]

  if ( (byte_418D269 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&UserServantEntity_TypeInfo, v10);
    sub_B2C35C(&UserServantNewManager_TypeInfo, v11);
    byte_418D269 = 1;
  }
  v12 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v16 = list;
    v17 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v17,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = list;
        v19 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v19
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v19 - 8) == UserServantEntity_TypeInfo )
        {
          v20 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v26.fields.fakeValue = v20;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v25 = v26;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v25, 0LL);
          if ( list == v16 )
          {
            list = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v18, 0LL);
            if ( (list & 1) == 0 )
            {
              v21 = *(_OWORD *)(v18 + 32);
              *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
              *(_OWORD *)&v26.fields.fakeValue = v21;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v24 = v26;
              list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v24, 0LL);
              if ( !v12 )
                break;
              System_Collections_Generic_List_long___Add(
                v12,
                list,
                (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
        }
      }
      if ( ++v17 >= Count )
        goto LABEL_24;
    }
LABEL_29:
    sub_B2C434(list, v13);
  }
LABEL_24:
  if ( !v12 )
    goto LABEL_29;
  v23 = System_Collections_Generic_List_long___ToArray(
          v12,
          (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__SetOld_34323412(v23, v22);
}


int32_t __fastcall UserServantStorageMaster__getCount(
        UserServantStorageMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  DataManager_o *v20; // x24
  int32_t Count; // w0
  int32_t v22; // w25
  int32_t v23; // w26
  int32_t v24; // w27
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v26; // x28
  __int64 v27; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v28; // q0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x19
  void *monitor; // x28
  WarEntity_o *Entity; // x0
  int32_t v32; // w19
  ServantEntity_o *v33; // x28
  int32_t *v34; // x9
  int32_t *v36; // [xsp+10h] [xbp-A0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // [xsp+18h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_418D263 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&UserServantEntity_TypeInfo, v16);
    byte_418D263 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_35:
    sub_B2C434(Instance, v18);
  v20 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v36 = servantSum;
    v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v22 = Count;
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_35;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v24,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = Item;
        v27 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == UserServantEntity_TypeInfo )
        {
          v28 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.fakeValue = v28;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v38 = v39;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v38, 0LL) == v20
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v26, 0LL) )
          {
            klass = v26[5].klass;
            monitor = v26[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v40.fields.currentCryptoKey = klass;
            *(_QWORD *)&v40.fields.fakeValue = monitor;
            v18 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
            Instance = (DataManager_o *)v37;
            if ( !v37 )
              goto LABEL_35;
            ++v23;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v37,
                       v18,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v32 = *(&Entity->fields.startType + 1);
              v33 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(v32, 0LL) )
              {
                v34 = v36;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(v32, 0LL)
                  || friendShipSvtEqExclude && ServantEntity__get_IsFriendShipSvtEquip(v33, 0LL) )
                {
                  goto LABEL_31;
                }
                v34 = servantEquipSum;
              }
              ++*v34;
            }
          }
        }
      }
LABEL_31:
      if ( ++v24 >= v22 )
        return v23;
    }
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
  __int64 v14; // x1
  int64_t Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v18; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 v23; // x10
  __int128 v24; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  __int64 v26; // x26
  __int64 v27; // x27
  int64_t v29; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_418D267 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&UserServantEntity_TypeInfo, v14);
    byte_418D267 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v21,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        v23 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v23
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v23 - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v31.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
          if ( Instance == v18 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v29 = v18;
              v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v27 = *(_QWORD *)(v22 + 80);
              v26 = *(_QWORD *)(v22 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v32.fields.currentCryptoKey = v27;
              *(_QWORD *)&v32.fields.fakeValue = v26;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
              if ( !v25 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v25;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v25,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v18 = v29;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v20 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B2C434(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v14; // x1
  int64_t Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v18; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 v23; // x10
  __int128 v24; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  __int64 v26; // x26
  __int64 v27; // x27
  int64_t v29; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_418D266 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&UserServantEntity_TypeInfo, v14);
    byte_418D266 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v21,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        v23 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v23
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v23 - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v31.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
          if ( Instance == v18 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v29 = v18;
              v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v27 = *(_QWORD *)(v22 + 80);
              v26 = *(_QWORD *)(v22 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v32.fields.currentCryptoKey = v27;
              *(_QWORD *)&v32.fields.fakeValue = v26;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
              if ( !v25 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v25;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v25,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v18 = v29;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v20 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B2C434(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_418D264 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418D264 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantStorageMaster__getList_34339280(this, UserId, v4);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList_34339280(
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
  __int64 v11; // x1
  int64_t list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  int32_t v15; // w23
  UserServantEntity_o *v16; // x24
  __int64 v17; // x10
  __int128 v18; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-70h]

  if ( (byte_418D265 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B2C35C(&UserServantEntity_TypeInfo, v11);
    byte_418D265 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v15,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (UserServantEntity_o *)list;
        v17 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v17
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v17 - 8) == UserServantEntity_TypeInfo )
        {
          v18 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v21.fields.fakeValue = v18;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v20 = v21;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v20, 0LL);
          if ( list == userId )
          {
            list = UserServantEntity__IsWithdrawal(v16, 0LL);
            if ( (list & 1) == 0 )
            {
              if ( !v14 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v14,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v15 >= Count )
        goto LABEL_18;
    }
LABEL_20:
    sub_B2C434(list, userId);
  }
LABEL_18:
  if ( !v14 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v14; // x1
  int64_t Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v18; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 v23; // x10
  __int128 v24; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  __int64 v26; // x26
  __int64 v27; // x27
  int64_t v29; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_418D26B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&UserServantEntity_TypeInfo, v14);
    byte_418D26B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v21,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        v23 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v23
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v23 - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v31.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
          if ( Instance == v18 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v29 = v18;
              v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v27 = *(_QWORD *)(v22 + 80);
              v26 = *(_QWORD *)(v22 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v32.fields.currentCryptoKey = v27;
              *(_QWORD *)&v32.fields.fakeValue = v26;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
              if ( !v25 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v25;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v25,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v18 = v29;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v20 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B2C434(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v14; // x1
  int64_t Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v18; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 v23; // x10
  __int128 v24; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  __int64 v26; // x26
  __int64 v27; // x27
  int64_t v29; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_418D268 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&UserServantEntity_TypeInfo, v14);
    byte_418D268 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v21,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        v23 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v23
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v23 - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v31.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
          if ( Instance == v18 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v29 = v18;
              v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v27 = *(_QWORD *)(v22 + 80);
              v26 = *(_QWORD *)(v22 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v32.fields.currentCryptoKey = v27;
              *(_QWORD *)&v32.fields.fakeValue = v26;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
              if ( !v25 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v25;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v25,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v18 = v29;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v20 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B2C434(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


bool __fastcall UserServantStorageMaster__isOnList(
        UserServantStorageMaster_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v9; // x20
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int64_t v14; // [xsp+8h] [xbp-18h] BYREF

  v14 = userServantId;
  if ( (byte_418D26C & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userServantId);
    byte_418D26C = 1;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v5 = System_Int64__ToString((int64_t)&v14, 0LL);
  if ( !lookup )
    sub_B2C434(v5, v6);
  klass = lookup->klass;
  v9 = v5;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v7);
  }
  return (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
           lookup,
           v9,
           *(_QWORD *)(p_method + 8)) & 1;
}