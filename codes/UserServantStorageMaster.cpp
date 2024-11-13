void __fastcall UserServantStorageMaster___ctor(UserServantStorageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B170CD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__, method, v2);
    byte_4B170CD = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    15,
    (const MethodInfo_31B2FAC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantStorageMaster__CostumeTargetEntity(
        UserServantStorageMaster_o *this,
        int32_t svtId,
        UserServantEntity_o *defaultTarget,
        const MethodInfo *method)
{
  UserServantEntity_o *v4; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  int32_t Count; // w22
  int64_t UserId; // x0
  int64_t v20; // x23
  int32_t v21; // w24
  UserServantEntity_o *v22; // x25
  __int64 methodPtr_low; // x10
  __int128 v24; // q0
  __int64 v25; // x26
  __int64 v26; // x27
  __int64 v27; // x26
  __int64 v28; // x27
  int32_t v29; // w26
  __int64 v30; // x26
  __int64 v31; // x27
  int32_t v32; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v4 = defaultTarget;
  if ( (byte_4B170D5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      defaultTarget);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v14, v15);
    byte_4B170D5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v20 = UserId;
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v21,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v22 = (UserServantEntity_o *)list;
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v24 = *(_OWORD *)&list[2].fields.items;
      *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v36.fields.fakeValue = v24;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&svtId);
      v35 = v36;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v35, 0LL) == v20 )
      {
        v26 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
        v25 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
        *(_QWORD *)&v37.fields.currentCryptoKey = v26;
        *(_QWORD *)&v37.fields.fakeValue = v25;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v37, 0LL) == svtId )
        {
          if ( !v4 )
            goto LABEL_23;
          v28 = *(_QWORD *)&v22->fields.limitCount.fields.currentCryptoKey;
          v27 = *(_QWORD *)&v22->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
          *(_QWORD *)&v38.fields.currentCryptoKey = v28;
          *(_QWORD *)&v38.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v38, 0LL);
          if ( v29 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v4->fields.limitCount, 0LL)
            || v22->fields.lv > v4->fields.lv )
          {
            goto LABEL_23;
          }
          v31 = *(_QWORD *)&v22->fields.limitCount.fields.currentCryptoKey;
          v30 = *(_QWORD *)&v22->fields.limitCount.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
          *(_QWORD *)&v39.fields.currentCryptoKey = v31;
          *(_QWORD *)&v39.fields.fakeValue = v30;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v39, 0LL);
          if ( v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v4->fields.limitCount, 0LL)
            && v22->fields.lv == v4->fields.lv
            && v22->fields.createdAt < v4->fields.createdAt )
          {
LABEL_23:
            v4 = v22;
          }
        }
      }
      if ( Count == ++v21 )
        return v4;
    }
LABEL_33:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  }
  return v4;
}


int32_t __fastcall UserServantStorageMaster__GetSvtEquipFriendShip(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v24; // x21
  int32_t Count; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v26; // x26
  int32_t v27; // w23
  int32_t v28; // w22
  int32_t v29; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v31; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject v33; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v35; // x29
  void *monitor; // x25
  Il2CppClass *klass; // x26
  Il2CppObject *Entity; // x0
  ServantEntity_o *v39; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B170D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v18, v19);
    byte_4B170D8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_27;
  v24 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v27 = Count;
    v28 = 0;
    v29 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v29,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v31 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v33 = Item[4];
          *(Il2CppObject *)&v42.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v42.fields.fakeValue = v33;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
          v41 = v42;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v41, 0LL) == v24
            && (BYTE4(v31[18].monitor) & 4) == 0 )
          {
            v34 = *v26;
            v35 = v26;
            klass = v31[5].klass;
            monitor = v31[5].monitor;
            if ( !v34->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v34, v21);
            *(_QWORD *)&v43.fields.currentCryptoKey = klass;
            *(_QWORD *)&v43.fields.fakeValue = monitor;
            v21 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v43, 0LL);
            Instance = (DataManager_o *)MasterData_object;
            if ( !MasterData_object )
              break;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v21,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v26 = v35;
            if ( Entity )
            {
              v39 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0LL) )
                v28 += ServantEntity__get_IsFriendShipSvtEquip(v39, 0LL);
            }
          }
        }
      }
      if ( v27 == ++v29 )
        return v28;
    }
LABEL_27:
    sub_1BCAA3C(Instance, v21);
  }
  return 0;
}


void __fastcall UserServantStorageMaster__continueDeviceUserServant(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x20
  int64_t v24; // x1
  int64_t list; // x0
  __int64 v26; // x1
  int32_t Count; // w21
  int64_t v28; // x22
  int32_t v29; // w23
  int64_t v30; // x24
  __int64 methodPtr_low; // x10
  __int128 v32; // q0
  __int128 v33; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  __int64 v37; // x1
  System_Int64_array *v38; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-80h]

  if ( (byte_4B170D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v19, v20);
    sub_1BCA7E0(&UserServantNewManager_TypeInfo, v21, v22);
    byte_4B170D4 = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
  list = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v28 = list;
    v29 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v29,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v30 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v32 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v41.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
          v40 = v41;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v40, 0LL);
          if ( list == v28 && (*(_BYTE *)(v30 + 300) & 4) == 0 )
          {
            v33 = *(_OWORD *)(v30 + 32);
            *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(v30 + 16);
            *(_OWORD *)&v41.fields.fakeValue = v33;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
            v39 = v41;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v39, 0LL);
            if ( !v23 )
              break;
            items = v23->fields._items;
            v35 = Method_System_Collections_Generic_List_long__Add__;
            ++v23->fields._version;
            if ( !items )
              break;
            size = v23->fields._size;
            v24 = list;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v23,
                list,
                *(const MethodInfo_3589C90 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = size + 1;
              items->m_Items[size] = list;
            }
          }
        }
      }
      if ( Count == ++v29 )
        goto LABEL_24;
    }
LABEL_28:
    sub_1BCAA3C(list, v24);
  }
LABEL_24:
  if ( !v23 )
    goto LABEL_28;
  v38 = System_Collections_Generic_List_long___ToArray(
          v23,
          (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v37);
  UserServantNewManager__SetOld_41308244(v38, 0LL);
}


int32_t __fastcall UserServantStorageMaster__getCount(
        UserServantStorageMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t Instance; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x23
  int64_t v29; // x24
  int32_t Count; // w0
  int32_t v31; // w25
  int32_t v32; // w26
  int32_t v33; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v35; // x28
  __int64 methodPtr_low; // x10
  Il2CppObject v37; // q0
  void *monitor; // x28
  Il2CppClass *klass; // x29
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w29
  ServantEntity_o *v42; // x28
  int32_t *v43; // x9
  int32_t *v45; // [xsp+8h] [xbp-B8h]
  bool v46; // [xsp+14h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4B170CE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      servantSum,
      servantEquipSum);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v23, v24);
    byte_4B170CE = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_32:
    sub_1BCAA3C(Instance, v26);
  v29 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v45 = servantEquipSum;
    v46 = friendShipSvtEqExclude;
    v31 = Count;
    v32 = 0;
    v33 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v33,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v35 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v37 = Item[4];
          *(Il2CppObject *)&v48.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v48.fields.fakeValue = v37;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
          v47 = v48;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v47, 0LL) == v29
            && (BYTE4(v35[18].monitor) & 4) == 0 )
          {
            klass = v35[5].klass;
            monitor = v35[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
            *(_QWORD *)&v49.fields.currentCryptoKey = klass;
            *(_QWORD *)&v49.fields.fakeValue = monitor;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v49, 0LL);
            if ( !MasterData_object )
              goto LABEL_32;
            ++v32;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       Instance,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              v42 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(klass_high, 0LL) )
              {
                v43 = servantSum;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(klass_high, 0LL)
                  || v46 && ServantEntity__get_IsFriendShipSvtEquip(v42, 0LL) )
                {
                  goto LABEL_28;
                }
                v43 = v45;
              }
              ++*v43;
            }
          }
        }
      }
LABEL_28:
      if ( v31 == ++v33 )
        return v32;
    }
  }
  return 0;
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getKeepServantEquipList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v32; // x20
  int32_t Count; // w23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v38; // x26
  int32_t v39; // w24
  int64_t v40; // x25
  __int64 methodPtr_low; // x10
  __int128 v42; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v44; // x20
  __int64 v45; // x26
  __int64 v46; // x27
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int64_t v58; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B170D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v26, v27);
    byte_4B170D2 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v38 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v39 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v39,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v40 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v42 = *(_OWORD *)(Instance + 64);
          v43 = *v38;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)(v40 + 48);
          *(_OWORD *)&v60.fields.fakeValue = v42;
          if ( !v43->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v43, v29);
          v59 = v60;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v59, 0LL);
          if ( Instance == v32 && (*(_BYTE *)(v40 + 300) & 4) == 0 )
          {
            v58 = v32;
            v44 = v38;
            v46 = *(_QWORD *)(v40 + 80);
            v45 = *(_QWORD *)(v40 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
            *(_QWORD *)&v61.fields.currentCryptoKey = v46;
            *(_QWORD *)&v61.fields.fakeValue = v45;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v61, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v38 = v44;
            Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
            v32 = v58;
            if ( (Instance & 1) != 0 )
            {
              if ( !v37 )
                break;
              items = v37->fields._items;
              v54 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v37->fields._version;
              if ( !items )
                break;
              size = v37->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v37,
                  (Il2CppObject *)v40,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
              }
              else
              {
                v56 = &items->obj.klass + size;
                v37->fields._size = size + 1;
                v56[4] = (Il2CppClass *)v40;
                sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v40, v47, v48, v49, v50, v51, v52);
              }
            }
          }
        }
      }
      if ( Count == ++v39 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v29);
  }
LABEL_28:
  if ( !v37 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v37,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getKeepServantList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v32; // x20
  int32_t Count; // w23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v38; // x26
  int32_t v39; // w24
  int64_t v40; // x25
  __int64 methodPtr_low; // x10
  __int128 v42; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v44; // x20
  __int64 v45; // x26
  __int64 v46; // x27
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int64_t v58; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B170D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v26, v27);
    byte_4B170D1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v38 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v39 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v39,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v40 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v42 = *(_OWORD *)(Instance + 64);
          v43 = *v38;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)(v40 + 48);
          *(_OWORD *)&v60.fields.fakeValue = v42;
          if ( !v43->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v43, v29);
          v59 = v60;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v59, 0LL);
          if ( Instance == v32 && (*(_BYTE *)(v40 + 300) & 4) == 0 )
          {
            v58 = v32;
            v44 = v38;
            v46 = *(_QWORD *)(v40 + 80);
            v45 = *(_QWORD *)(v40 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
            *(_QWORD *)&v61.fields.currentCryptoKey = v46;
            *(_QWORD *)&v61.fields.fakeValue = v45;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v61, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v38 = v44;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            v32 = v58;
            if ( (Instance & 1) != 0 )
            {
              if ( !v37 )
                break;
              items = v37->fields._items;
              v54 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v37->fields._version;
              if ( !items )
                break;
              size = v37->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v37,
                  (Il2CppObject *)v40,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
              }
              else
              {
                v56 = &items->obj.klass + size;
                v37->fields._size = size + 1;
                v56[4] = (Il2CppClass *)v40;
                sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v40, v47, v48, v49, v50, v51, v52);
              }
            }
          }
        }
      }
      if ( Count == ++v39 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v29);
  }
LABEL_28:
  if ( !v37 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v37,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t UserId; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4B170CF & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B170CF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantStorageMaster__getList_41003344(this, UserId, v5);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getList_41003344(
        UserServantStorageMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t list; // x0
  int32_t Count; // w22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_object__o *v24; // x21
  int32_t v25; // w23
  int64_t v26; // x24
  __int64 methodPtr_low; // x10
  __int128 v28; // q0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-80h]

  if ( (byte_4B170D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v17, v18);
    byte_4B170D0 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v25,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v26 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v28 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v41.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userId);
          v40 = v41;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v40, 0LL);
          if ( list == userId && (*(_BYTE *)(v26 + 300) & 4) == 0 )
          {
            if ( !v24 )
              break;
            items = v24->fields._items;
            v36 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v24->fields._version;
            if ( !items )
              break;
            size = v24->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v24,
                (Il2CppObject *)v26,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              v24->fields._size = size + 1;
              v38[4] = (Il2CppClass *)v26;
              sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), v26, v29, v30, v31, v32, v33, v34);
            }
          }
        }
      }
      if ( Count == ++v25 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(list, userId);
  }
LABEL_20:
  if ( !v24 )
    goto LABEL_22;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v24,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getOrganizationList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v32; // x20
  int32_t Count; // w23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v38; // x26
  int32_t v39; // w24
  int64_t v40; // x25
  __int64 methodPtr_low; // x10
  __int128 v42; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v44; // x20
  __int64 v45; // x26
  __int64 v46; // x27
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int64_t v58; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B170D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v26, v27);
    byte_4B170D6 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v38 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v39 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v39,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v40 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v42 = *(_OWORD *)(Instance + 64);
          v43 = *v38;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)(v40 + 48);
          *(_OWORD *)&v60.fields.fakeValue = v42;
          if ( !v43->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v43, v29);
          v59 = v60;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v59, 0LL);
          if ( Instance == v32 && (*(_BYTE *)(v40 + 300) & 4) == 0 )
          {
            v58 = v32;
            v44 = v38;
            v46 = *(_QWORD *)(v40 + 80);
            v45 = *(_QWORD *)(v40 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
            *(_QWORD *)&v61.fields.currentCryptoKey = v46;
            *(_QWORD *)&v61.fields.fakeValue = v45;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v61, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v38 = v44;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            v32 = v58;
            if ( (Instance & 1) != 0 )
            {
              if ( !v37 )
                break;
              items = v37->fields._items;
              v54 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v37->fields._version;
              if ( !items )
                break;
              size = v37->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v37,
                  (Il2CppObject *)v40,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
              }
              else
              {
                v56 = &items->obj.klass + size;
                v37->fields._size = size + 1;
                v56[4] = (Il2CppClass *)v40;
                sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v40, v47, v48, v49, v50, v51, v52);
              }
            }
          }
        }
      }
      if ( Count == ++v39 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v29);
  }
LABEL_28:
  if ( !v37 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v37,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantStorageMaster__getServantEquipList(
        UserServantStorageMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v32; // x20
  int32_t Count; // w23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v38; // x26
  int32_t v39; // w24
  int64_t v40; // x25
  __int64 methodPtr_low; // x10
  __int128 v42; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v44; // x20
  __int64 v45; // x26
  __int64 v46; // x27
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int64_t v58; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B170D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v26, v27);
    byte_4B170D3 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v38 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v39 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v39,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v40 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v42 = *(_OWORD *)(Instance + 64);
          v43 = *v38;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)(v40 + 48);
          *(_OWORD *)&v60.fields.fakeValue = v42;
          if ( !v43->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v43, v29);
          v59 = v60;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v59, 0LL);
          if ( Instance == v32 && (*(_BYTE *)(v40 + 300) & 4) == 0 )
          {
            v58 = v32;
            v44 = v38;
            v46 = *(_QWORD *)(v40 + 80);
            v45 = *(_QWORD *)(v40 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
            *(_QWORD *)&v61.fields.currentCryptoKey = v46;
            *(_QWORD *)&v61.fields.fakeValue = v45;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v61, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v38 = v44;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v32 = v58;
            if ( (Instance & 1) != 0 )
            {
              if ( !v37 )
                break;
              items = v37->fields._items;
              v54 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v37->fields._version;
              if ( !items )
                break;
              size = v37->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v37,
                  (Il2CppObject *)v40,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
              }
              else
              {
                v56 = &items->obj.klass + size;
                v37->fields._size = size + 1;
                v56[4] = (Il2CppClass *)v40;
                sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v40, v47, v48, v49, v50, v51, v52);
              }
            }
          }
        }
      }
      if ( Count == ++v39 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v29);
  }
LABEL_28:
  if ( !v37 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v37,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  if ( (byte_4B170D7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userServantId, method);
    byte_4B170D7 = 1;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v5 = System_Int64__ToString((int64_t)&v13, 0LL);
  if ( !lookup )
    sub_1BCAA3C(v5, v6);
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
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
           lookup,
           v8,
           *(_QWORD *)(p_method + 8)) & 1;
}