void __fastcall UserServantStorageMaster___ctor(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2EDE4 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__, method);
    byte_4A2EDE4 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    15,
    (const MethodInfo_30FF8EC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
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
  int64_t UserId; // x0
  int64_t v14; // x23
  int32_t v15; // w24
  UserServantEntity_o *v16; // x25
  __int64 methodPtr_low; // x10
  __int128 v18; // q0
  __int64 v19; // x26
  __int64 v20; // x27
  __int64 v21; // x26
  __int64 v22; // x27
  int32_t v23; // w26
  __int64 v24; // x26
  __int64 v25; // x27
  int32_t v26; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4A2EDEC & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B761C0(&NetworkManager_TypeInfo, v7);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B761C0(&UserServantEntity_TypeInfo, v10);
    byte_4A2EDEC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v14 = UserId;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v29, 0LL) == v14 )
      {
        v20 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v31.fields.currentCryptoKey = v20;
        *(_QWORD *)&v31.fields.fakeValue = v19;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v31, 0LL) == svtId )
        {
          if ( !defaultTarget )
            goto LABEL_23;
          v22 = *(_QWORD *)&v16->fields.limitCount.fields.currentCryptoKey;
          v21 = *(_QWORD *)&v16->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v32.fields.currentCryptoKey = v22;
          *(_QWORD *)&v32.fields.fakeValue = v21;
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v32, 0LL);
          if ( v23 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(
                       defaultTarget->fields.limitCount,
                       0LL)
            || v16->fields.lv > defaultTarget->fields.lv )
          {
            goto LABEL_23;
          }
          v25 = *(_QWORD *)&v16->fields.limitCount.fields.currentCryptoKey;
          v24 = *(_QWORD *)&v16->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v33.fields.currentCryptoKey = v25;
          *(_QWORD *)&v33.fields.fakeValue = v24;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v33, 0LL);
          if ( v26 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(
                        defaultTarget->fields.limitCount,
                        0LL)
            && v16->fields.lv == defaultTarget->fields.lv
            && v16->fields.createdAt < defaultTarget->fields.createdAt )
          {
LABEL_23:
            defaultTarget = v16;
          }
        }
      }
      if ( Count == ++v15 )
        return defaultTarget;
    }
LABEL_33:
    sub_1B7641C(list, *(_QWORD *)&svtId);
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
  DataManager_o *v14; // x21
  int32_t Count; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v16; // x26
  int32_t v17; // w23
  int32_t v18; // w22
  int32_t v19; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v21; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject v23; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v25; // x29
  void *monitor; // x25
  Il2CppClass *klass; // x26
  Il2CppObject *Entity; // x0
  ServantEntity_o *v29; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4A2EDEF & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B761C0(&NetworkManager_TypeInfo, v6);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B761C0(&UserServantEntity_TypeInfo, v10);
    byte_4A2EDEF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_27;
  v14 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v31, 0LL) == v14
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
            v12 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v33, 0LL);
            Instance = (DataManager_o *)MasterData_object;
            if ( !MasterData_object )
              break;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v12,
                       (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
LABEL_27:
    sub_1B7641C(Instance, v12);
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
  int64_t v16; // x22
  int32_t v17; // w23
  int64_t v18; // x24
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

  if ( (byte_4A2EDEB & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1B761C0(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1B761C0(&NetworkManager_TypeInfo, v8);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B761C0(&UserServantEntity_TypeInfo, v10);
    sub_1B761C0(&UserServantNewManager_TypeInfo, v11);
    byte_4A2EDEB = 1;
  }
  v12 = (System_Collections_Generic_List_long__o *)sub_1B7640C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_34BEDB4 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v17,
                        (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v27, 0LL);
          if ( list == v16 && (*(_BYTE *)(v18 + 300) & 4) == 0 )
          {
            v21 = *(_OWORD *)(v18 + 32);
            *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
            *(_OWORD *)&v28.fields.fakeValue = v21;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v26 = v28;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v26, 0LL);
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
                *(const MethodInfo_34BF608 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
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
        goto LABEL_24;
    }
LABEL_28:
    sub_1B7641C(list, v13);
  }
LABEL_24:
  if ( !v12 )
    goto LABEL_28;
  v25 = System_Collections_Generic_List_long___ToArray(
          v12,
          (const MethodInfo_34C10C0 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_40384432(v25, 0LL);
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
  int64_t Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x23
  int64_t v20; // x24
  int32_t Count; // w0
  int32_t v22; // w25
  int32_t v23; // w26
  int32_t v24; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v26; // x28
  __int64 methodPtr_low; // x10
  Il2CppObject v28; // q0
  void *monitor; // x28
  Il2CppClass *klass; // x29
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w29
  ServantEntity_o *v33; // x28
  int32_t *v34; // x9
  int32_t *v36; // [xsp+8h] [xbp-B8h]
  bool v37; // [xsp+14h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A2EDE5 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B761C0(&NetworkManager_TypeInfo, v12);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B761C0(&UserServantEntity_TypeInfo, v16);
    byte_4A2EDE5 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_32:
    sub_1B7641C(Instance, v18);
  v20 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v36 = servantEquipSum;
    v37 = friendShipSvtEqExclude;
    v22 = Count;
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v24,
               (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v28 = Item[4];
          *(Il2CppObject *)&v39.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v39.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v38, 0LL) == v20
            && (BYTE4(v26[18].monitor) & 4) == 0 )
          {
            klass = v26[5].klass;
            monitor = v26[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = klass;
            *(_QWORD *)&v40.fields.fakeValue = monitor;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v40, 0LL);
            if ( !MasterData_object )
              goto LABEL_32;
            ++v23;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       Instance,
                       (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              v33 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(klass_high, 0LL) )
              {
                v34 = servantSum;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(klass_high, 0LL)
                  || v37 && ServantEntity__get_IsFriendShipSvtEquip(v33, 0LL) )
                {
                  goto LABEL_28;
                }
                v34 = v36;
              }
              ++*v34;
            }
          }
        }
      }
LABEL_28:
      if ( v22 == ++v24 )
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
  Il2CppObject *MasterData_object; // x21
  int64_t v18; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x26
  int32_t v22; // w24
  int64_t v23; // x25
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x26
  __int64 v29; // x27
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t v37; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A2EDE9 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B761C0(&NetworkManager_TypeInfo, v10);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B761C0(&UserServantEntity_TypeInfo, v14);
    byte_4A2EDE9 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v39.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v38 = v39;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v38, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v37 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v29;
            *(_QWORD *)&v40.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v40, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
            v18 = v37;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v35[4] = (Il2CppClass *)v23;
                sub_1B76164((ServantStatusBattleListViewItem_o *)(v35 + 4), v23, v30, v31);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B7641C(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x21
  int64_t v18; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x26
  int32_t v22; // w24
  int64_t v23; // x25
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x26
  __int64 v29; // x27
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t v37; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A2EDE8 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B761C0(&NetworkManager_TypeInfo, v10);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B761C0(&UserServantEntity_TypeInfo, v14);
    byte_4A2EDE8 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v39.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v38 = v39;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v38, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v37 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v29;
            *(_QWORD *)&v40.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v40, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            v18 = v37;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v35[4] = (Il2CppClass *)v23;
                sub_1B76164((ServantStatusBattleListViewItem_o *)(v35 + 4), v23, v30, v31);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B7641C(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4A2EDE6 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    byte_4A2EDE6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantStorageMaster__getList_40086860(this, UserId, v4);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList_40086860(
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
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]

  if ( (byte_4A2EDE7 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B761C0(&UserServantEntity_TypeInfo, v11);
    byte_4A2EDE7 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                        (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v18 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v27.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v26 = v27;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v26, 0LL);
          if ( list == userId && (*(_BYTE *)(v16 + 300) & 4) == 0 )
          {
            if ( !v14 )
              break;
            items = v14->fields._items;
            v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                (Il2CppObject *)v16,
                *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v16;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v24 + 4), v16, v19, v20);
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B7641C(list, userId);
  }
LABEL_20:
  if ( !v14 )
    goto LABEL_22;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v14,
                                      (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x21
  int64_t v18; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x26
  int32_t v22; // w24
  int64_t v23; // x25
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x26
  __int64 v29; // x27
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t v37; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A2EDED & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B761C0(&NetworkManager_TypeInfo, v10);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B761C0(&UserServantEntity_TypeInfo, v14);
    byte_4A2EDED = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v39.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v38 = v39;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v38, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v37 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v29;
            *(_QWORD *)&v40.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v40, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            v18 = v37;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v35[4] = (Il2CppClass *)v23;
                sub_1B76164((ServantStatusBattleListViewItem_o *)(v35 + 4), v23, v30, v31);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B7641C(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x21
  int64_t v18; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x26
  int32_t v22; // w24
  int64_t v23; // x25
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x26
  __int64 v29; // x27
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t v37; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A2EDEA & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B761C0(&NetworkManager_TypeInfo, v10);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B761C0(&UserServantEntity_TypeInfo, v14);
    byte_4A2EDEA = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v39.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v38 = v39;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46340496(&v38, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v37 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v29;
            *(_QWORD *)&v40.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v40, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v18 = v37;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v35[4] = (Il2CppClass *)v23;
                sub_1B76164((ServantStatusBattleListViewItem_o *)(v35 + 4), v23, v30, v31);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B7641C(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  if ( (byte_4A2EDEE & 1) == 0 )
  {
    sub_1B761C0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userServantId);
    byte_4A2EDEE = 1;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v5 = System_Int64__ToString((int64_t)&v13, 0LL);
  if ( !lookup )
    sub_1B7641C(v5, v6);
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
    p_method = sub_1BC81A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
           lookup,
           v8,
           *(_QWORD *)(p_method + 8)) & 1;
}