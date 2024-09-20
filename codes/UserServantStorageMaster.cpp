void __fastcall UserServantStorageMaster___ctor(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C014 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
    byte_4A5C014 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    15,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantStorageMaster__CostumeTargetEntity(
        UserServantStorageMaster_o *this,
        int32_t svtId,
        UserServantEntity_o *defaultTarget,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  int64_t v9; // x23
  int32_t v10; // w24
  UserServantEntity_o *v11; // x25
  __int64 methodPtr_low; // x10
  __int128 v13; // q0
  __int64 v14; // x26
  __int64 v15; // x27
  __int64 v16; // x26
  __int64 v17; // x27
  int32_t v18; // w26
  __int64 v19; // x26
  __int64 v20; // x27
  int32_t v21; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5C01C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C01C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v9 = UserId;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v11 = (UserServantEntity_o *)list;
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v13 = *(_OWORD *)&list[2].fields.items;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v25.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v24 = v25;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v24, 0LL) == v9 )
      {
        v15 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v26.fields.currentCryptoKey = v15;
        *(_QWORD *)&v26.fields.fakeValue = v14;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v26, 0LL) == svtId )
        {
          if ( !defaultTarget )
            goto LABEL_23;
          v17 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
          v16 = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = v17;
          *(_QWORD *)&v27.fields.fakeValue = v16;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27, 0LL);
          if ( v18 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       defaultTarget->fields.limitCount,
                       0LL)
            || v11->fields.lv > defaultTarget->fields.lv )
          {
            goto LABEL_23;
          }
          v20 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
          v19 = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v28.fields.currentCryptoKey = v20;
          *(_QWORD *)&v28.fields.fakeValue = v19;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
          if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                        defaultTarget->fields.limitCount,
                        0LL)
            && v11->fields.lv == defaultTarget->fields.lv
            && v11->fields.createdAt < defaultTarget->fields.createdAt )
          {
LABEL_23:
            defaultTarget = v11;
          }
        }
      }
      if ( Count == ++v10 )
        return defaultTarget;
    }
LABEL_33:
    sub_1B8880C(list, *(_QWORD *)&svtId);
  }
  return defaultTarget;
}


int32_t __fastcall UserServantStorageMaster__GetSvtEquipFriendShip(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v6; // x21
  int32_t Count; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v8; // x26
  int32_t v9; // w23
  int32_t v10; // w22
  int32_t v11; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v13; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject v15; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v17; // x29
  void *monitor; // x25
  Il2CppClass *klass; // x26
  Il2CppObject *Entity; // x0
  ServantEntity_o *v21; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4A5C01F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C01F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_27;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v8 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v11,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v15 = Item[4];
          *(Il2CppObject *)&v24.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v24.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v23 = v24;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v23, 0LL) == v6
            && (BYTE4(v13[18].monitor) & 4) == 0 )
          {
            v16 = *v8;
            v17 = v8;
            klass = v13[5].klass;
            monitor = v13[5].monitor;
            if ( !v16->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v16);
            *(_QWORD *)&v25.fields.currentCryptoKey = klass;
            *(_QWORD *)&v25.fields.fakeValue = monitor;
            v4 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL);
            Instance = (DataManager_o *)MasterData_object;
            if ( !MasterData_object )
              break;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v4,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v8 = v17;
            if ( Entity )
            {
              v21 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0LL) )
                v10 += ServantEntity__get_IsFriendShipSvtEquip(v21, 0LL);
            }
          }
        }
      }
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_27:
    sub_1B8880C(Instance, v4);
  }
  return 0;
}


void __fastcall UserServantStorageMaster__continueDeviceUserServant(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t v4; // x1
  int64_t list; // x0
  int32_t Count; // w21
  int64_t v7; // x22
  int32_t v8; // w23
  int64_t v9; // x24
  __int64 methodPtr_low; // x10
  __int128 v11; // q0
  __int128 v12; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Int64_array *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+40h] [xbp-80h]

  if ( (byte_4A5C01B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    sub_1B885B0(&UserServantNewManager_TypeInfo);
    byte_4A5C01B = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v8,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v11 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v19.fields.fakeValue = v11;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v18 = v19;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v18, 0LL);
          if ( list == v7 && (*(_BYTE *)(v9 + 300) & 4) == 0 )
          {
            v12 = *(_OWORD *)(v9 + 32);
            *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
            *(_OWORD *)&v19.fields.fakeValue = v12;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v17 = v19;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v17, 0LL);
            if ( !v3 )
              break;
            items = v3->fields._items;
            v14 = Method_System_Collections_Generic_List_long__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            v4 = list;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v3,
                list,
                *(const MethodInfo_34E5868 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v3->fields._size = size + 1;
              items->m_Items[size] = list;
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_24;
    }
LABEL_28:
    sub_1B8880C(list, v4);
  }
LABEL_24:
  if ( !v3 )
    goto LABEL_28;
  v16 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_40569840(v16, 0LL);
}


int32_t __fastcall UserServantStorageMaster__getCount(
        UserServantStorageMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x23
  int64_t v12; // x24
  int32_t Count; // w0
  int32_t v14; // w25
  int32_t v15; // w26
  int32_t v16; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v18; // x28
  __int64 methodPtr_low; // x10
  Il2CppObject v20; // q0
  void *monitor; // x28
  Il2CppClass *klass; // x29
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w29
  ServantEntity_o *v25; // x28
  int32_t *v26; // x9
  int32_t *v28; // [xsp+8h] [xbp-B8h]
  bool v29; // [xsp+14h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4A5C015 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C015 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_32:
    sub_1B8880C(Instance, v10);
  v12 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v28 = servantEquipSum;
    v29 = friendShipSvtEqExclude;
    v14 = Count;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v16,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v20 = Item[4];
          *(Il2CppObject *)&v31.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v31.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v31;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v30, 0LL) == v12
            && (BYTE4(v18[18].monitor) & 4) == 0 )
          {
            klass = v18[5].klass;
            monitor = v18[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v32.fields.currentCryptoKey = klass;
            *(_QWORD *)&v32.fields.fakeValue = monitor;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v32, 0LL);
            if ( !MasterData_object )
              goto LABEL_32;
            ++v15;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       Instance,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              v25 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(klass_high, 0LL) )
              {
                v26 = servantSum;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(klass_high, 0LL)
                  || v29 && ServantEntity__get_IsFriendShipSvtEquip(v25, 0LL) )
                {
                  goto LABEL_28;
                }
                v26 = v28;
              }
              ++*v26;
            }
          }
        }
      }
LABEL_28:
      if ( v14 == ++v16 )
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
  Il2CppObject *MasterData_object; // x21
  int64_t v6; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v9; // x26
  int32_t v10; // w24
  int64_t v11; // x25
  __int64 methodPtr_low; // x10
  __int128 v13; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v15; // x20
  __int64 v16; // x26
  __int64 v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int64_t v25; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5C019 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C019 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v10 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v10,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v11 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v13 = *(_OWORD *)(Instance + 64);
          v14 = *v9;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 48);
          *(_OWORD *)&v27.fields.fakeValue = v13;
          if ( !v14->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v14);
          v26 = v27;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
          if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
          {
            v25 = v6;
            v15 = v9;
            v17 = *(_QWORD *)(v11 + 80);
            v16 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v28.fields.currentCryptoKey = v17;
            *(_QWORD *)&v28.fields.fakeValue = v16;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v9 = v15;
            Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
            v6 = v25;
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
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v11;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), v11, v18, v19);
              }
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B8880C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getKeepServantList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v6; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v9; // x26
  int32_t v10; // w24
  int64_t v11; // x25
  __int64 methodPtr_low; // x10
  __int128 v13; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v15; // x20
  __int64 v16; // x26
  __int64 v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int64_t v25; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5C018 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C018 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v10 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v10,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v11 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v13 = *(_OWORD *)(Instance + 64);
          v14 = *v9;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 48);
          *(_OWORD *)&v27.fields.fakeValue = v13;
          if ( !v14->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v14);
          v26 = v27;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
          if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
          {
            v25 = v6;
            v15 = v9;
            v17 = *(_QWORD *)(v11 + 80);
            v16 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v28.fields.currentCryptoKey = v17;
            *(_QWORD *)&v28.fields.fakeValue = v16;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v9 = v15;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            v6 = v25;
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
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v11;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), v11, v18, v19);
              }
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B8880C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4A5C016 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5C016 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantStorageMaster__getList_40271808(this, UserId, v4);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList_40271808(
        UserServantStorageMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w23
  int64_t v9; // x24
  __int64 methodPtr_low; // x10
  __int128 v11; // q0
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-80h]

  if ( (byte_4A5C017 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C017 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v11 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v20.fields.fakeValue = v11;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v19 = v20;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v19, 0LL);
          if ( list == userId && (*(_BYTE *)(v9 + 300) & 4) == 0 )
          {
            if ( !v7 )
              break;
            items = v7->fields._items;
            v15 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v9,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v17 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v17[4] = (Il2CppClass *)v9;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), v9, v12, v13);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(list, userId);
  }
LABEL_20:
  if ( !v7 )
    goto LABEL_22;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getOrganizationList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v6; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v9; // x26
  int32_t v10; // w24
  int64_t v11; // x25
  __int64 methodPtr_low; // x10
  __int128 v13; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v15; // x20
  __int64 v16; // x26
  __int64 v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int64_t v25; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5C01D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C01D = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v10 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v10,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v11 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v13 = *(_OWORD *)(Instance + 64);
          v14 = *v9;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 48);
          *(_OWORD *)&v27.fields.fakeValue = v13;
          if ( !v14->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v14);
          v26 = v27;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
          if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
          {
            v25 = v6;
            v15 = v9;
            v17 = *(_QWORD *)(v11 + 80);
            v16 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v28.fields.currentCryptoKey = v17;
            *(_QWORD *)&v28.fields.fakeValue = v16;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v9 = v15;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            v6 = v25;
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
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v11;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), v11, v18, v19);
              }
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B8880C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getServantEquipList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v6; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v9; // x26
  int32_t v10; // w24
  int64_t v11; // x25
  __int64 methodPtr_low; // x10
  __int128 v13; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v15; // x20
  __int64 v16; // x26
  __int64 v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int64_t v25; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5C01A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C01A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v10 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v10,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v11 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v13 = *(_OWORD *)(Instance + 64);
          v14 = *v9;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 48);
          *(_OWORD *)&v27.fields.fakeValue = v13;
          if ( !v14->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v14);
          v26 = v27;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
          if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
          {
            v25 = v6;
            v15 = v9;
            v17 = *(_QWORD *)(v11 + 80);
            v16 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v28.fields.currentCryptoKey = v17;
            *(_QWORD *)&v28.fields.fakeValue = v16;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v9 = v15;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v6 = v25;
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
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v11;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), v11, v18, v19);
              }
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B8880C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  if ( (byte_4A5C01E & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_4A5C01E = 1;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v5 = System_Int64__ToString((int64_t)&v13, 0LL);
  if ( !lookup )
    sub_1B8880C(v5, v6);
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
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
           lookup,
           v8,
           *(_QWORD *)(p_method + 8)) & 1;
}