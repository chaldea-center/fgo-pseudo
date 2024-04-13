void __fastcall UserServantStorageMaster___ctor(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE69B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EE69B = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    15,
    (const MethodInfo_23FAF9C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantStorageMaster__CostumeTargetEntity(
        UserServantStorageMaster_o *this,
        int32_t svtId,
        UserServantEntity_o *defaultTarget,
        const MethodInfo *method)
{
  UserServantEntity_o *v4; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  int64_t v24; // x23
  int32_t v25; // w24
  __int64 v26; // x26
  __int64 v27; // x27
  int32_t v28; // w26
  UserServantEntity_o *v29; // x25
  __int64 v30; // x10
  __int128 v31; // q0
  __int64 v32; // x26
  __int64 v33; // x27
  __int64 v34; // x26
  __int64 v35; // x27
  int32_t v36; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v4 = defaultTarget;
  if ( (byte_42EE6A3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      svtId,
      (_DWORD)defaultTarget,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v18, v19, v20);
    byte_42EE6A3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v24 = UserId;
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v25,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v29 = (UserServantEntity_o *)list;
      v30 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v30
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[v30 - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v31 = *(_OWORD *)&list[2].klass;
      *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__Fields *)&v40.fields.currentCryptoKey = list[1].fields;
      *(_OWORD *)&v40.fields.fakeValue = v31;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v39 = v40;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v39, 0LL) == v24 )
      {
        v33 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
        v32 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v42.fields.currentCryptoKey = v33;
        *(_QWORD *)&v42.fields.fakeValue = v32;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v42, 0LL) == svtId )
        {
          if ( !v4 )
            goto LABEL_34;
          v35 = *(_QWORD *)&v29->fields.limitCount.fields.currentCryptoKey;
          v34 = *(_QWORD *)&v29->fields.limitCount.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v43.fields.currentCryptoKey = v35;
          *(_QWORD *)&v43.fields.fakeValue = v34;
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
          if ( v36 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v4->fields.limitCount, 0LL)
            || v29->fields.lv > v4->fields.lv )
          {
            goto LABEL_34;
          }
          v27 = *(_QWORD *)&v29->fields.limitCount.fields.currentCryptoKey;
          v26 = *(_QWORD *)&v29->fields.limitCount.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v41.fields.currentCryptoKey = v27;
          *(_QWORD *)&v41.fields.fakeValue = v26;
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v41, 0LL);
          if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v4->fields.limitCount, 0LL)
            && v29->fields.lv == v4->fields.lv
            && v29->fields.createdAt < v4->fields.createdAt )
          {
LABEL_34:
            v4 = v29;
          }
        }
      }
      if ( ++v25 >= Count )
        return v4;
    }
LABEL_37:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  }
  return v4;
}


int32_t __fastcall UserServantStorageMaster__GetSvtEquipFriendShip(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v32; // x21
  int32_t Count; // w0
  int32_t v34; // w23
  int32_t v35; // w22
  int32_t v36; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v38; // x25
  __int64 v39; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v40; // q0
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  WarEntity_o *Entity; // x0
  ServantEntity_o *v44; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_42EE6A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v26, v27, v28);
    byte_42EE6A6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v34 = Count;
    v35 = 0;
    v36 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v36,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v38 = Item;
        v39 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v39
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v39 - 1] == UserServantEntity_TypeInfo )
        {
          v40 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v47.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v47.fields.fakeValue = v40;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v46 = v47;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v46, 0LL) == v32
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v38, 0LL) )
          {
            klass = v38[5].klass;
            monitor = v38[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v48.fields.currentCryptoKey = klass;
            *(_QWORD *)&v48.fields.fakeValue = monitor;
            v30 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v48, 0LL);
            Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       v30,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v44 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(*(&Entity->fields.startType + 1), 0LL) )
                v35 += ServantEntity__get_IsFriendShipSvtEquip(v44, 0LL);
            }
          }
        }
      }
      if ( ++v36 >= v34 )
        return v35;
    }
LABEL_30:
    sub_B5D69C(Instance, v30);
  }
  return 0;
}


void __fastcall UserServantStorageMaster__continueDeviceUserServant(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_long__o *v32; // x20
  __int64 v33; // x1
  int64_t list; // x0
  int32_t Count; // w21
  int64_t v36; // x22
  int32_t v37; // w23
  int64_t v38; // x24
  __int64 v39; // x10
  __int128 v40; // q0
  __int128 v41; // q0
  const MethodInfo *v42; // x1
  System_Int64_array *v43; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-70h]

  if ( (byte_42EE6A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v29, v30, v31);
    byte_42EE6A2 = 1;
  }
  v32 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v32,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v36 = list;
    v37 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v37,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v38 = list;
        v39 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v39
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v39 - 8) == UserServantEntity_TypeInfo )
        {
          v40 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v46.fields.fakeValue = v40;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v45 = v46;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v45, 0LL);
          if ( list == v36 )
          {
            list = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v38, 0LL);
            if ( (list & 1) == 0 )
            {
              v41 = *(_OWORD *)(v38 + 32);
              *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)(v38 + 16);
              *(_OWORD *)&v46.fields.fakeValue = v41;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v44 = v46;
              list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v44, 0LL);
              if ( !v32 )
                break;
              System_Collections_Generic_List_long___Add(
                v32,
                list,
                (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
        }
      }
      if ( ++v37 >= Count )
        goto LABEL_24;
    }
LABEL_29:
    sub_B5D69C(list, v33);
  }
LABEL_24:
  if ( !v32 )
    goto LABEL_29;
  v43 = System_Collections_Generic_List_long___ToArray(
          v32,
          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__SetOld_35224388(v43, v42);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantStorageMaster__getCount(
        UserServantStorageMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  DataManager_o *v36; // x24
  int32_t Count; // w0
  int32_t v38; // w25
  int32_t v39; // w26
  int32_t v40; // w27
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v42; // x28
  __int64 v43; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v44; // q0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x19
  void *monitor; // x28
  WarEntity_o *Entity; // x0
  int32_t v48; // w19
  ServantEntity_o *v49; // x28
  int32_t *v50; // x9
  int32_t *v52; // [xsp+10h] [xbp-A0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // [xsp+18h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_42EE69C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)servantSum,
      (_DWORD)servantEquipSum,
      friendShipSvtEqExclude);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v30, v31, v32);
    byte_42EE69C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_35:
    sub_B5D69C(Instance, v34);
  v36 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v52 = servantSum;
    v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v38 = Count;
    v39 = 0;
    v40 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_35;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v40,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v42 = Item;
        v43 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v43
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v43 - 1] == UserServantEntity_TypeInfo )
        {
          v44 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v55.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v55.fields.fakeValue = v44;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v54 = v55;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v54, 0LL) == v36
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v42, 0LL) )
          {
            klass = v42[5].klass;
            monitor = v42[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v56.fields.currentCryptoKey = klass;
            *(_QWORD *)&v56.fields.fakeValue = monitor;
            v34 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v56, 0LL);
            Instance = (DataManager_o *)v53;
            if ( !v53 )
              goto LABEL_35;
            ++v39;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v53,
                       v34,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v48 = *(&Entity->fields.startType + 1);
              v49 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(v48, 0LL) )
              {
                v50 = v52;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(v48, 0LL)
                  || friendShipSvtEqExclude && ServantEntity__get_IsFriendShipSvtEquip(v49, 0LL) )
                {
                  goto LABEL_31;
                }
                v50 = servantEquipSum;
              }
              ++*v50;
            }
          }
        }
      }
LABEL_31:
      if ( ++v40 >= v38 )
        return v39;
    }
  }
  return 0;
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getKeepServantEquipList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t Instance; // x0
  __int64 v42; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v44; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x23
  int32_t v47; // w24
  int64_t v48; // x25
  __int64 v49; // x10
  __int128 v50; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  __int64 v52; // x26
  __int64 v53; // x27
  int64_t v55; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42EE6A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v38, v39, v40);
    byte_42EE6A0 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v44 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v47,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = Instance;
        v49 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v49
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v49 - 8) == UserServantEntity_TypeInfo )
        {
          v50 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v57.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v56 = v57;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v56, 0LL);
          if ( Instance == v44 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v48, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v55 = v44;
              v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v53 = *(_QWORD *)(v48 + 80);
              v52 = *(_QWORD *)(v48 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v58.fields.currentCryptoKey = v53;
              *(_QWORD *)&v58.fields.fakeValue = v52;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
              if ( !v51 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v51;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v51,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v44 = v55;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v46 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v46,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v47 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B5D69C(Instance, v42);
  }
LABEL_28:
  if ( !v46 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getKeepServantList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t Instance; // x0
  __int64 v42; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v44; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x23
  int32_t v47; // w24
  int64_t v48; // x25
  __int64 v49; // x10
  __int128 v50; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  __int64 v52; // x26
  __int64 v53; // x27
  int64_t v55; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42EE69F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v38, v39, v40);
    byte_42EE69F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v44 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v47,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = Instance;
        v49 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v49
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v49 - 8) == UserServantEntity_TypeInfo )
        {
          v50 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v57.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v56 = v57;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v56, 0LL);
          if ( Instance == v44 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v48, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v55 = v44;
              v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v53 = *(_QWORD *)(v48 + 80);
              v52 = *(_QWORD *)(v48 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v58.fields.currentCryptoKey = v53;
              *(_QWORD *)&v58.fields.fakeValue = v52;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
              if ( !v51 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v51;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v51,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v44 = v55;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v46 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v46,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v47 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B5D69C(Instance, v42);
  }
LABEL_28:
  if ( !v46 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t UserId; // x1
  const MethodInfo *v6; // x2

  if ( (byte_42EE69D & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE69D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantStorageMaster__getList_35240736(this, UserId, v6);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList_35240736(
        UserServantStorageMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int64_t list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x22
  int32_t v30; // w23
  UserServantEntity_o *v31; // x24
  __int64 v32; // x10
  __int128 v33; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-70h]

  if ( (byte_42EE69E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v24, v25, v26);
    byte_42EE69E = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v30,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v31 = (UserServantEntity_o *)list;
        v32 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v32
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v32 - 8) == UserServantEntity_TypeInfo )
        {
          v33 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v36.fields.fakeValue = v33;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v35 = v36;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v35, 0LL);
          if ( list == userId )
          {
            list = UserServantEntity__IsWithdrawal(v31, 0LL);
            if ( (list & 1) == 0 )
            {
              if ( !v29 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v29,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v30 >= Count )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(list, userId);
  }
LABEL_18:
  if ( !v29 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getOrganizationList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t Instance; // x0
  __int64 v42; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v44; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x23
  int32_t v47; // w24
  int64_t v48; // x25
  __int64 v49; // x10
  __int128 v50; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  __int64 v52; // x26
  __int64 v53; // x27
  int64_t v55; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42EE6A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v38, v39, v40);
    byte_42EE6A4 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v44 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v47,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = Instance;
        v49 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v49
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v49 - 8) == UserServantEntity_TypeInfo )
        {
          v50 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v57.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v56 = v57;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v56, 0LL);
          if ( Instance == v44 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v48, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v55 = v44;
              v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v53 = *(_QWORD *)(v48 + 80);
              v52 = *(_QWORD *)(v48 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v58.fields.currentCryptoKey = v53;
              *(_QWORD *)&v58.fields.fakeValue = v52;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
              if ( !v51 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v51;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v51,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v44 = v55;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v46 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v46,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v47 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B5D69C(Instance, v42);
  }
LABEL_28:
  if ( !v46 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getServantEquipList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t Instance; // x0
  __int64 v42; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v44; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x23
  int32_t v47; // w24
  int64_t v48; // x25
  __int64 v49; // x10
  __int128 v50; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  __int64 v52; // x26
  __int64 v53; // x27
  int64_t v55; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42EE6A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v38, v39, v40);
    byte_42EE6A1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v44 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v47,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = Instance;
        v49 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v49
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v49 - 8) == UserServantEntity_TypeInfo )
        {
          v50 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v57.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v56 = v57;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v56, 0LL);
          if ( Instance == v44 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v48, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v55 = v44;
              v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v53 = *(_QWORD *)(v48 + 80);
              v52 = *(_QWORD *)(v48 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v58.fields.currentCryptoKey = v53;
              *(_QWORD *)&v58.fields.fakeValue = v52;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
              if ( !v51 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v51;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v51,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v44 = v55;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v46 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v46,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v47 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B5D69C(Instance, v42);
  }
LABEL_28:
  if ( !v46 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


bool __fastcall UserServantStorageMaster__isOnList(
        UserServantStorageMaster_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v10; // x20
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int64_t v15; // [xsp+8h] [xbp-18h] BYREF

  v15 = userServantId;
  if ( (byte_42EE6A5 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userServantId,
      (_DWORD)method,
      v3);
    byte_42EE6A5 = 1;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v6 = System_Int64__ToString((int64_t)&v15, 0LL);
  if ( !lookup )
    sub_B5D69C(v6, v7);
  klass = lookup->klass;
  v10 = v6;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v8);
  }
  return (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
           lookup,
           v10,
           *(_QWORD *)(p_method + 8)) & 1;
}