void __fastcall UserServantStorageMaster___ctor(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67AC9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__, method);
    byte_4B67AC9 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    15,
    (const MethodInfo_31FD930 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  NetworkManager_c *v13; // x0
  int64_t userIdNumber; // x28
  int32_t v15; // w23
  UserServantEntity_o *v16; // x24
  __int64 methodPtr_low; // x10
  __int128 v18; // q0
  __int64 v19; // x25
  __int64 v20; // x26
  __int64 v21; // x25
  __int64 v22; // x26
  int32_t v23; // w25
  __int64 v24; // x25
  __int64 v25; // x26
  int32_t v26; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B67AD1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BE4ACC(&UserServantEntity_TypeInfo, v10);
    byte_4B67AD1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4B61717 = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    userIdNumber = v13->static_fields->userIdNumber;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v16 = (UserServantEntity_o *)list;
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v18 = *(_OWORD *)&list[2].fields.items;
      *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v30.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v29 = v30;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v29, 0LL) == userIdNumber )
      {
        v20 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v31.fields.currentCryptoKey = v20;
        *(_QWORD *)&v31.fields.fakeValue = v19;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v31, 0LL) == svtId )
        {
          if ( !defaultTarget )
            goto LABEL_27;
          v22 = *(_QWORD *)&v16->fields.limitCount.fields.currentCryptoKey;
          v21 = *(_QWORD *)&v16->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v32.fields.currentCryptoKey = v22;
          *(_QWORD *)&v32.fields.fakeValue = v21;
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v32, 0LL);
          if ( v23 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                       defaultTarget->fields.limitCount,
                       0LL)
            || v16->fields.lv > defaultTarget->fields.lv )
          {
            goto LABEL_27;
          }
          v25 = *(_QWORD *)&v16->fields.limitCount.fields.currentCryptoKey;
          v24 = *(_QWORD *)&v16->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v33.fields.currentCryptoKey = v25;
          *(_QWORD *)&v33.fields.fakeValue = v24;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v33, 0LL);
          if ( v26 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                        defaultTarget->fields.limitCount,
                        0LL)
            && v16->fields.lv == defaultTarget->fields.lv
            && v16->fields.createdAt < defaultTarget->fields.createdAt )
          {
LABEL_27:
            defaultTarget = v16;
          }
        }
      }
      if ( Count == ++v15 )
        return defaultTarget;
    }
LABEL_37:
    sub_1BE4D28(list, *(_QWORD *)&svtId);
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
  Il2CppObject *MasterData_object; // x20
  __int64 v14; // x26
  int32_t Count; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v16; // x25
  int32_t v17; // w22
  int32_t v18; // w21
  int32_t v19; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v21; // x24
  __int64 methodPtr_low; // x10
  Il2CppObject v23; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v25; // x29
  void *monitor; // x24
  Il2CppClass *klass; // x25
  Il2CppObject *Entity; // x0
  ServantEntity_o *v29; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B67AD4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BE4ACC(&UserServantEntity_TypeInfo, v10);
    byte_4B67AD4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
    byte_4B61717 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_31;
  v14 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v17 = Count;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v19,
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v23 = Item[4];
          *(Il2CppObject *)&v32.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v32.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v31 = v32;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v31, 0LL) == v14
            && (BYTE4(v21[18].monitor) & 4) == 0 )
          {
            v24 = *v16;
            v25 = v16;
            klass = v21[5].klass;
            monitor = v21[5].monitor;
            if ( !v24->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v24);
            *(_QWORD *)&v33.fields.currentCryptoKey = klass;
            *(_QWORD *)&v33.fields.fakeValue = monitor;
            v12 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v33, 0LL);
            Instance = (DataManager_o *)MasterData_object;
            if ( !MasterData_object )
              break;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v12,
                       (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v16 = v25;
            if ( Entity )
            {
              v29 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0LL) )
                v18 += ServantEntity__get_IsFriendShipSvtEquip(v29, 0LL);
            }
          }
        }
      }
      if ( v17 == ++v19 )
        return v18;
    }
LABEL_31:
    sub_1BE4D28(Instance, v12);
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
  int64_t v13; // x1
  int64_t list; // x0
  int32_t Count; // w21
  __int64 v16; // x25
  int32_t v17; // w22
  int64_t v18; // x23
  __int64 methodPtr_low; // x10
  __int128 v20; // q0
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Int64_array *v25; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-80h]

  if ( (byte_4B67AD0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BE4ACC(&UserServantEntity_TypeInfo, v10);
    sub_1BE4ACC(&UserServantNewManager_TypeInfo, v11);
    byte_4B67AD0 = 1;
  }
  v12 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v13);
    byte_4B61717 = 1;
  }
  list = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (int64_t)NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(list + 184) + 64LL);
    v17 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v17,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v20 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v28.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v27 = v28;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v27, 0LL);
          if ( list == v16 && (*(_BYTE *)(v18 + 300) & 4) == 0 )
          {
            v21 = *(_OWORD *)(v18 + 32);
            *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
            *(_OWORD *)&v28.fields.fakeValue = v21;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v26 = v28;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v26, 0LL);
            if ( !v12 )
              break;
            items = v12->fields._items;
            v23 = Method_System_Collections_Generic_List_long__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            v13 = list;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v12,
                list,
                *(const MethodInfo_35D4258 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v12->fields._size = size + 1;
              items->m_Items[size] = list;
            }
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_28;
    }
LABEL_32:
    sub_1BE4D28(list, v13);
  }
LABEL_28:
  if ( !v12 )
    goto LABEL_32;
  v25 = System_Collections_Generic_List_long___ToArray(
          v12,
          (const MethodInfo_35D5D10 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_41547608(v25, 0LL);
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
  Il2CppObject *MasterData_object; // x23
  __int64 v20; // x29
  int32_t Count; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v22; // x28
  int32_t v23; // w24
  int32_t v24; // w25
  int32_t v25; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v27; // x27
  __int64 methodPtr_low; // x10
  Il2CppObject v29; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v31; // x21
  void *monitor; // x27
  Il2CppClass *klass; // x28
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w28
  ServantEntity_o *v36; // x27
  int32_t *v38; // [xsp+0h] [xbp-C0h]
  bool v39; // [xsp+Ch] [xbp-B4h]
  int32_t *v40; // [xsp+10h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B67ACA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BE4ACC(&UserServantEntity_TypeInfo, v16);
    byte_4B67ACA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v18);
    byte_4B61717 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
LABEL_36:
    sub_1BE4D28(Instance, v18);
  v20 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v40 = servantSum;
    v38 = servantEquipSum;
    v39 = friendShipSvtEqExclude;
    v22 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v23 = Count;
    v24 = 0;
    v25 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_36;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v25,
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v27 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v29 = Item[4];
          *(Il2CppObject *)&v42.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v42.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v41 = v42;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v41, 0LL) == v20
            && (BYTE4(v27[18].monitor) & 4) == 0 )
          {
            v30 = *v22;
            v31 = v22;
            klass = v27[5].klass;
            monitor = v27[5].monitor;
            if ( !v30->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v30);
            *(_QWORD *)&v43.fields.currentCryptoKey = klass;
            *(_QWORD *)&v43.fields.fakeValue = monitor;
            v18 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v43, 0LL);
            Instance = (DataManager_o *)MasterData_object;
            if ( !MasterData_object )
              goto LABEL_36;
            ++v24;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v18,
                       (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              v36 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(klass_high, 0LL) )
              {
                ++*v40;
              }
              else if ( SvtType__IsKeepServantEquip(klass_high, 0LL) )
              {
                v22 = v31;
                if ( !v39 || !ServantEntity__get_IsFriendShipSvtEquip(v36, 0LL) )
                  ++*v38;
                goto LABEL_32;
              }
            }
            v22 = v31;
          }
        }
      }
LABEL_32:
      if ( v23 == ++v25 )
        return v24;
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
  Il2CppObject *MasterData_object; // x27
  __int64 v18; // x20
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x25
  int32_t v22; // w23
  int64_t v23; // x24
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x25
  __int64 v29; // x26
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v41; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B67ACE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BE4ACC(&UserServantEntity_TypeInfo, v14);
    byte_4B67ACE = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v16);
    byte_4B61717 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_34;
  v18 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v22,
                            (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v43.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v42 = v43;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v42, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v41 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v44.fields.currentCryptoKey = v29;
            *(_QWORD *)&v44.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v44, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
            v18 = v41;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v23;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), v23, v30, v31, v32, v33, v34, v35);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1BE4D28(Instance, v16);
  }
LABEL_32:
  if ( !v20 )
    goto LABEL_34;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x27
  __int64 v18; // x20
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x25
  int32_t v22; // w23
  int64_t v23; // x24
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x25
  __int64 v29; // x26
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v41; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B67ACD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BE4ACC(&UserServantEntity_TypeInfo, v14);
    byte_4B67ACD = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v16);
    byte_4B61717 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_34;
  v18 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v22,
                            (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v43.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v42 = v43;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v42, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v41 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v44.fields.currentCryptoKey = v29;
            *(_QWORD *)&v44.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v44, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            v18 = v41;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v23;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), v23, v30, v31, v32, v33, v34, v35);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1BE4D28(Instance, v16);
  }
LABEL_32:
  if ( !v20 )
    goto LABEL_34;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4B67ACB & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    byte_4B67ACB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    byte_4B61717 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserServantStorageMaster__getList_41236604(this, v4->static_fields->userIdNumber, v2);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList_41236604(
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
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w23
  int64_t v16; // x24
  __int64 methodPtr_low; // x10
  __int128 v18; // q0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-80h]

  if ( (byte_4B67ACC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1BE4ACC(&UserServantEntity_TypeInfo, v11);
    byte_4B67ACC = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v18 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v31.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v31;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v30, 0LL);
          if ( list == userId && (*(_BYTE *)(v16 + 300) & 4) == 0 )
          {
            if ( !v14 )
              break;
            items = v14->fields._items;
            v26 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                (Il2CppObject *)v16,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v16;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), v16, v19, v20, v21, v22, v23, v24);
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BE4D28(list, userId);
  }
LABEL_20:
  if ( !v14 )
    goto LABEL_22;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v14,
                                      (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x27
  __int64 v18; // x20
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x25
  int32_t v22; // w23
  int64_t v23; // x24
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x25
  __int64 v29; // x26
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v41; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B67AD2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BE4ACC(&UserServantEntity_TypeInfo, v14);
    byte_4B67AD2 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v16);
    byte_4B61717 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_34;
  v18 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v22,
                            (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v43.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v42 = v43;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v42, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v41 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v44.fields.currentCryptoKey = v29;
            *(_QWORD *)&v44.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v44, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            v18 = v41;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v23;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), v23, v30, v31, v32, v33, v34, v35);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1BE4D28(Instance, v16);
  }
LABEL_32:
  if ( !v20 )
    goto LABEL_34;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x27
  __int64 v18; // x20
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x25
  int32_t v22; // w23
  int64_t v23; // x24
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x25
  __int64 v29; // x26
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v41; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B67ACF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BE4ACC(&UserServantEntity_TypeInfo, v14);
    byte_4B67ACF = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v16);
    byte_4B61717 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_34;
  v18 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v22,
                            (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v43.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v42 = v43;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v42, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v41 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v44.fields.currentCryptoKey = v29;
            *(_QWORD *)&v44.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v44, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v18 = v41;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v23;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), v23, v30, v31, v32, v33, v34, v35);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1BE4D28(Instance, v16);
  }
LABEL_32:
  if ( !v20 )
    goto LABEL_34;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


bool __fastcall UserServantStorageMaster__isOnList(
        UserServantStorageMaster_o *this,
        int64_t userServantId,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v8; // x20
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v13; // [xsp+8h] [xbp-18h] BYREF

  v13 = userServantId;
  if ( (byte_4B67AD3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userServantId);
    byte_4B67AD3 = 1;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v5 = System_Int64__ToString((int64_t)&v13, 0LL);
  if ( !lookup )
    sub_1BE4D28(v5, v6);
  klass = lookup->klass;
  v8 = v5;
  v9 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C36AAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
           lookup,
           v8,
           *(_QWORD *)(p_method + 8)) & 1;
}