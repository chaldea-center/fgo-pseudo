void __fastcall UserServantStorageMaster___ctor(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B5E34 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
    byte_42B5E34 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    15,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantStorageMaster__CostumeTargetEntity(
        UserServantStorageMaster_o *this,
        int32_t svtId,
        UserServantEntity_o *defaultTarget,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  int64_t v9; // x23
  int32_t v10; // w24
  __int64 v11; // x26
  __int64 v12; // x27
  int32_t v13; // w26
  UserServantEntity_o *v14; // x25
  __int64 v15; // x10
  __int128 v16; // q0
  __int64 v17; // x26
  __int64 v18; // x27
  __int64 v19; // x26
  __int64 v20; // x27
  int32_t v21; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_42B5E3C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserServantEntity_TypeInfo);
    byte_42B5E3C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v9 = UserId;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v10,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = (UserServantEntity_o *)list;
      v15 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v16 = *(_OWORD *)&list[2].klass;
      *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__Fields *)&v25.fields.currentCryptoKey = list[1].fields;
      *(_OWORD *)&v25.fields.fakeValue = v16;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v24 = v25;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v24, 0LL) == v9 )
      {
        v18 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
        v17 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v27.fields.currentCryptoKey = v18;
        *(_QWORD *)&v27.fields.fakeValue = v17;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v27, 0LL) == svtId )
        {
          if ( !defaultTarget )
            goto LABEL_34;
          v20 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
          v19 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v28.fields.currentCryptoKey = v20;
          *(_QWORD *)&v28.fields.fakeValue = v19;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v28, 0LL);
          if ( v21 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                       defaultTarget->fields.limitCount,
                       0LL)
            || v14->fields.lv > defaultTarget->fields.lv )
          {
            goto LABEL_34;
          }
          v12 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
          v11 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v26.fields.currentCryptoKey = v12;
          *(_QWORD *)&v26.fields.fakeValue = v11;
          v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v26, 0LL);
          if ( v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                        defaultTarget->fields.limitCount,
                        0LL)
            && v14->fields.lv == defaultTarget->fields.lv
            && v14->fields.createdAt < defaultTarget->fields.createdAt )
          {
LABEL_34:
            defaultTarget = v14;
          }
        }
      }
      if ( ++v10 >= Count )
        return defaultTarget;
    }
LABEL_37:
    sub_B52A5C(list, *(_QWORD *)&svtId);
  }
  return defaultTarget;
}


int32_t __fastcall UserServantStorageMaster__GetSvtEquipFriendShip(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v6; // x21
  int32_t Count; // w0
  int32_t v8; // w23
  int32_t v9; // w22
  int32_t v10; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v12; // x25
  __int64 v13; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v14; // q0
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  WarEntity_o *Entity; // x0
  ServantEntity_o *v18; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_42B5E3F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantEntity_TypeInfo);
    byte_42B5E3F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v10,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = Item;
        v13 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == UserServantEntity_TypeInfo )
        {
          v14 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v21.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v21.fields.fakeValue = v14;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v20 = v21;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v20, 0LL) == v6
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v12, 0LL) )
          {
            klass = v12[5].klass;
            monitor = v12[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v22.fields.currentCryptoKey = klass;
            *(_QWORD *)&v22.fields.fakeValue = monitor;
            v4 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v22, 0LL);
            Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       v4,
                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v18 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(*(&Entity->fields.startType + 1), 0LL) )
                v9 += ServantEntity__get_IsFriendShipSvtEquip(v18, 0LL);
            }
          }
        }
      }
      if ( ++v10 >= v8 )
        return v9;
    }
LABEL_30:
    sub_B52A5C(Instance, v4);
  }
  return 0;
}


void __fastcall UserServantStorageMaster__continueDeviceUserServant(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  __int64 v4; // x1
  int64_t list; // x0
  int32_t Count; // w21
  int64_t v7; // x22
  int32_t v8; // w23
  int64_t v9; // x24
  __int64 v10; // x10
  __int128 v11; // q0
  __int128 v12; // q0
  const MethodInfo *v13; // x1
  System_Int64_array *v14; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+40h] [xbp-70h]

  if ( (byte_42B5E3B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserServantEntity_TypeInfo);
    sub_B52984(&UserServantNewManager_TypeInfo);
    byte_42B5E3B = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v7 = list;
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v8,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = list;
        v10 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v10
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v10 - 8) == UserServantEntity_TypeInfo )
        {
          v11 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v17.fields.fakeValue = v11;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v16 = v17;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v16, 0LL);
          if ( list == v7 )
          {
            list = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v9, 0LL);
            if ( (list & 1) == 0 )
            {
              v12 = *(_OWORD *)(v9 + 32);
              *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
              *(_OWORD *)&v17.fields.fakeValue = v12;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v15 = v17;
              list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v15, 0LL);
              if ( !v3 )
                break;
              System_Collections_Generic_List_long___Add(
                v3,
                list,
                (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_24;
    }
LABEL_29:
    sub_B52A5C(list, v4);
  }
LABEL_24:
  if ( !v3 )
    goto LABEL_29;
  v14 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__SetOld_35308768(v14, v13);
}


int32_t __fastcall UserServantStorageMaster__getCount(
        UserServantStorageMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  DataManager_o *v12; // x24
  int32_t Count; // w0
  int32_t v14; // w25
  int32_t v15; // w26
  int32_t v16; // w27
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v18; // x28
  __int64 v19; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v20; // q0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x19
  void *monitor; // x28
  WarEntity_o *Entity; // x0
  int32_t v24; // w19
  ServantEntity_o *v25; // x28
  int32_t *v26; // x9
  int32_t *v28; // [xsp+10h] [xbp-A0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // [xsp+18h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_42B5E35 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantEntity_TypeInfo);
    byte_42B5E35 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_35:
    sub_B52A5C(Instance, v10);
  v12 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v28 = servantSum;
    v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v14 = Count;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_35;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v16,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = Item;
        v19 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == UserServantEntity_TypeInfo )
        {
          v20 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v31.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v31.fields.fakeValue = v20;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v30, 0LL) == v12
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v18, 0LL) )
          {
            klass = v18[5].klass;
            monitor = v18[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v32.fields.currentCryptoKey = klass;
            *(_QWORD *)&v32.fields.fakeValue = monitor;
            v10 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v32, 0LL);
            Instance = (DataManager_o *)v29;
            if ( !v29 )
              goto LABEL_35;
            ++v15;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v29,
                       v10,
                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v24 = *(&Entity->fields.startType + 1);
              v25 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(v24, 0LL) )
              {
                v26 = v28;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(v24, 0LL)
                  || friendShipSvtEqExclude && ServantEntity__get_IsFriendShipSvtEquip(v25, 0LL) )
                {
                  goto LABEL_31;
                }
                v26 = servantEquipSum;
              }
              ++*v26;
            }
          }
        }
      }
LABEL_31:
      if ( ++v16 >= v14 )
        return v15;
    }
  }
  return 0;
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getKeepServantEquipList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v6; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  int32_t v9; // w24
  int64_t v10; // x25
  __int64 v11; // x10
  __int128 v12; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x21
  __int64 v14; // x26
  __int64 v15; // x27
  int64_t v17; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_42B5E39 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantEntity_TypeInfo);
    byte_42B5E39 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v9,
                            (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v11
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) == UserServantEntity_TypeInfo )
        {
          v12 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v19.fields.fakeValue = v12;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v18 = v19;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v18, 0LL);
          if ( Instance == v6 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v17 = v6;
              v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v15 = *(_QWORD *)(v10 + 80);
              v14 = *(_QWORD *)(v10 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v20.fields.currentCryptoKey = v15;
              *(_QWORD *)&v20.fields.fakeValue = v14;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
              if ( !v13 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v13;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    Instance,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v6 = v17;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v8 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v9 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B52A5C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getKeepServantList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v6; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  int32_t v9; // w24
  int64_t v10; // x25
  __int64 v11; // x10
  __int128 v12; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x21
  __int64 v14; // x26
  __int64 v15; // x27
  int64_t v17; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_42B5E38 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantEntity_TypeInfo);
    byte_42B5E38 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v9,
                            (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v11
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) == UserServantEntity_TypeInfo )
        {
          v12 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v19.fields.fakeValue = v12;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v18 = v19;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v18, 0LL);
          if ( Instance == v6 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v17 = v6;
              v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v15 = *(_QWORD *)(v10 + 80);
              v14 = *(_QWORD *)(v10 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v20.fields.currentCryptoKey = v15;
              *(_QWORD *)&v20.fields.fakeValue = v14;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
              if ( !v13 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v13;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    Instance,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v6 = v17;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v8 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v9 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B52A5C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_42B5E36 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B5E36 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantStorageMaster__getList_35325116(this, UserId, v4);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList_35325116(
        UserServantStorageMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  UserServantEntity_o *v9; // x24
  __int64 v10; // x10
  __int128 v11; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-70h]

  if ( (byte_42B5E37 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserServantEntity_TypeInfo);
    byte_42B5E37 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v8,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = (UserServantEntity_o *)list;
        v10 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v10
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v10 - 8) == UserServantEntity_TypeInfo )
        {
          v11 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v14.fields.fakeValue = v11;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v13 = v14;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v13, 0LL);
          if ( list == userId )
          {
            list = UserServantEntity__IsWithdrawal(v9, 0LL);
            if ( (list & 1) == 0 )
            {
              if ( !v7 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v7,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_18;
    }
LABEL_20:
    sub_B52A5C(list, userId);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getOrganizationList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v6; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  int32_t v9; // w24
  int64_t v10; // x25
  __int64 v11; // x10
  __int128 v12; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x21
  __int64 v14; // x26
  __int64 v15; // x27
  int64_t v17; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_42B5E3D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantEntity_TypeInfo);
    byte_42B5E3D = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v9,
                            (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v11
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) == UserServantEntity_TypeInfo )
        {
          v12 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v19.fields.fakeValue = v12;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v18 = v19;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v18, 0LL);
          if ( Instance == v6 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v17 = v6;
              v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v15 = *(_QWORD *)(v10 + 80);
              v14 = *(_QWORD *)(v10 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v20.fields.currentCryptoKey = v15;
              *(_QWORD *)&v20.fields.fakeValue = v14;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
              if ( !v13 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v13;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    Instance,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v6 = v17;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v8 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v9 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B52A5C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getServantEquipList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v6; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  int32_t v9; // w24
  int64_t v10; // x25
  __int64 v11; // x10
  __int128 v12; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x21
  __int64 v14; // x26
  __int64 v15; // x27
  int64_t v17; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_42B5E3A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantEntity_TypeInfo);
    byte_42B5E3A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v9,
                            (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v11
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) == UserServantEntity_TypeInfo )
        {
          v12 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v19.fields.fakeValue = v12;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v18 = v19;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v18, 0LL);
          if ( Instance == v6 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v17 = v6;
              v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v15 = *(_QWORD *)(v10 + 80);
              v14 = *(_QWORD *)(v10 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v20.fields.currentCryptoKey = v15;
              *(_QWORD *)&v20.fields.fakeValue = v14;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
              if ( !v13 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v13;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    Instance,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v6 = v17;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v8 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v9 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B52A5C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  if ( (byte_42B5E3E & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_42B5E3E = 1;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v5 = System_Int64__ToString((int64_t)&v14, 0LL);
  if ( !lookup )
    sub_B52A5C(v5, v6);
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
    p_method = sub_AEB880(
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