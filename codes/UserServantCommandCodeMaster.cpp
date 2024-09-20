void __fastcall UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BF57 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
    byte_4A5BF57 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    254,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *__fastcall UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BF55 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
    byte_4A5BF55 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_311DC8C *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__GetEquipedCommandCodeList(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  UserServantCommandCodeEntity_c *v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 methodPtr_low; // x9
  _QWORD *monitor; // x26
  __int64 v11; // x27
  __int64 v12; // x28
  struct System_Int64_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  UserServantCommandCodeMaster_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4A5BF58 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&UserServantCommandCodeEntity_TypeInfo);
    byte_4A5BF58 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_1B8880C(list, v4);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v3;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_24;
    v4 = UserServantCommandCodeEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserServantCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UserServantCommandCodeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    monitor = list[3].monitor;
    if ( !monitor )
      goto LABEL_24;
    if ( (int)monitor[3] >= 1 )
    {
      v11 = 0LL;
      v12 = (unsigned int)monitor[3] - 1LL;
      while ( 1 )
      {
        v4 = (UserServantCommandCodeEntity_c *)monitor[v11 + 4];
        if ( (__int64)v4 >= 1 )
        {
          if ( !v3 )
            goto LABEL_24;
          items = v3->fields._items;
          v14 = Method_System_Collections_Generic_List_long__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v3->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v3,
              (int64_t)v4,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = (int64_t)v4;
          }
        }
        if ( v12 == v11 )
          break;
        if ( ++v11 >= (unsigned __int64)*((unsigned int *)monitor + 6) )
          sub_1B88814(list, v4);
      }
    }
    if ( ++v8 == v7 )
      return v3;
  }
  sub_1B88ACC(list);
  return (System_Collections_Generic_List_long__o *)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v17, v18);
}


System_Collections_Generic_Dictionary_long__long__o *__fastcall UserServantCommandCodeMaster__GetEquippedCommandCodeDic(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__long__o *v3; // x20
  int64_t v4; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 methodPtr_low; // x9
  __int128 v10; // q0
  __int64 v11; // x28
  int64_t v12; // x23
  __int64 v13; // x29
  __int64 v14; // x24
  System_Collections_Generic_Dictionary_long__long__o *result; // x0
  UserServantCommandCodeMaster_o *v16; // x0
  System_Int64_array **v17; // x1
  int64_t v18; // x2
  const MethodInfo *v19; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-80h]

  if ( (byte_4A5BF59 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__long___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_long__long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantCommandCodeEntity_TypeInfo);
    byte_4A5BF59 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__long__o *)sub_1B887FC(System_Collections_Generic_Dictionary_long__long__TypeInfo);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v3,
    (const MethodInfo_31A892C *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
LABEL_23:
    sub_1B8880C(list, v4);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v3;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v8,
                      (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_23;
    methodPtr_low = LOBYTE(UserServantCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    v10 = *(_OWORD *)(list + 64);
    v11 = *(_QWORD *)(list + 80);
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)(list + 48);
    *(_OWORD *)&v21.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v20 = v21;
    list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v20, 0LL);
    if ( !v11 )
      goto LABEL_23;
    if ( (int)*(_QWORD *)(v11 + 24) >= 1 )
    {
      v12 = list;
      v13 = 0LL;
      v14 = (unsigned int)*(_QWORD *)(v11 + 24) - 1LL;
      while ( 1 )
      {
        v4 = *(_QWORD *)(v11 + 32 + 8 * v13);
        if ( v4 >= 1 )
        {
          if ( !v3 )
            goto LABEL_23;
          System_Collections_Generic_Dictionary_long__long___Add(
            v3,
            v4,
            v12,
            (const MethodInfo_31A92FC *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
        }
        if ( v14 == v13 )
          break;
        if ( ++v13 >= (unsigned __int64)*(unsigned int *)(v11 + 24) )
          sub_1B88814(list, v4);
      }
    }
    if ( ++v8 == v7 )
      return v3;
  }
  sub_1B88ACC(list);
  UserServantCommandCodeMaster__getAttachList(v16, v17, v18, v19);
  return result;
}


bool __fastcall UserServantCommandCodeMaster__IsAttach(
        UserServantCommandCodeMaster_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_long__o *v7; // x0
  int32_t v8; // w22
  bool v9; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x9
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v14; // w10

  v3 = userCommandCodeId;
  if ( (byte_4A5BF5D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&UserServantCommandCodeEntity_TypeInfo);
    byte_4A5BF5D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_1B8880C(list, userCommandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count < 1 )
  {
    return 0;
  }
  else
  {
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_20;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v8,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        userCommandCodeId = (int64_t)UserServantCommandCodeEntity_TypeInfo;
        methodPtr_low = LOBYTE(UserServantCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (UserServantCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantCommandCodeEntity_TypeInfo )
        {
          sub_1B88ACC(Item);
          goto LABEL_20;
        }
        klass = Item[5].klass;
        if ( klass )
        {
          namespaze = (int)klass->_1.namespaze;
          if ( namespaze >= 1 )
            break;
        }
      }
LABEL_15:
      v9 = ++v8 < Count;
      if ( v8 == Count )
        return v9;
    }
    v14 = 0;
    while ( *((_QWORD *)&klass->_1.byval_arg.data + v14) != v3 )
    {
      if ( namespaze == ++v14 )
        goto LABEL_15;
    }
  }
  return v9;
}


bool __fastcall UserServantCommandCodeMaster__TryGetEntity(
        UserServantCommandCodeMaster_o *this,
        UserServantCommandCodeEntity_o **entity,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BF56 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
    byte_4A5BF56 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
}


void __fastcall UserServantCommandCodeMaster__getAttachList(
        UserServantCommandCodeMaster_o *this,
        System_Int64_array **userCommandCodeIdList,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_long__o *v9; // x22
  int32_t i; // w24
  UserServantCommandCodeEntity_o *v11; // x25
  __int64 methodPtr_low; // x9
  __int128 v13; // q0
  const MethodInfo *v14; // x2
  System_Int64_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-80h]

  if ( (byte_4A5BF5A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantCommandCodeEntity_TypeInfo);
    byte_4A5BF5A = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
LABEL_18:
    sub_1B8880C(list, userCommandCodeIdList);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    for ( i = 0; Count != i; ++i )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_18;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        i,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v11 = (UserServantCommandCodeEntity_o *)list;
        methodPtr_low = LOBYTE(UserServantCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
          || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != UserServantCommandCodeEntity_TypeInfo )
        {
          sub_1B88ACC(list);
          goto LABEL_18;
        }
        v13 = *(_OWORD *)(list + 32);
        *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(list + 16);
        *(_OWORD *)&v19.fields.fakeValue = v13;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v18 = v19;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v18, 0LL);
        if ( list == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v11, v9, v14);
      }
    }
  }
  if ( !v9 )
    goto LABEL_18;
  v15 = System_Collections_Generic_List_long___ToArray(
          v9,
          (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)userCommandCodeIdList, (int32_t)v15, v16, v17);
}


System_Int32_array *__fastcall UserServantCommandCodeMaster__getCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v9; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w21
  BalanceConfig_c *v12; // x0
  System_Int32_array *v13; // x20
  unsigned __int64 v14; // x23
  __int64 v15; // x24
  struct System_Int64_array *v16; // x8
  int64_t v17; // x2
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v21; // [xsp+0h] [xbp-60h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A5BF5B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF5B = 1;
  }
  v21 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = (Il2CppObject *)UserServantCommandCodeMaster__TryGetEntity(
                               (UserServantCommandCodeMaster_o *)Instance,
                               &entity,
                               userId,
                               svtId,
                               v9);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
    goto LABEL_33;
  userCommandCodeIds = entity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    goto LABEL_33;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0LL;
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  Instance = (Il2CppObject *)sub_1B88658(int___TypeInfo, (unsigned int)v12->static_fields->SvtCommandCardMax);
  v13 = (System_Int32_array *)Instance;
  if ( BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax >= max_length )
    goto LABEL_16;
  max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  }
  if ( max_length >= 1 )
  {
LABEL_16:
    v14 = 0LL;
    v15 = (unsigned int)max_length;
    while ( entity )
    {
      v16 = entity->fields.userCommandCodeIds;
      if ( !v16 )
        break;
      if ( v14 >= v16->max_length )
        goto LABEL_34;
      v17 = v16->m_Items[v14];
      if ( v17 >= 1 )
      {
        if ( !MasterData_object )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                     &v21,
                                     v17,
                                     (const MethodInfo_311DB34 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v21 )
            break;
          klass = v21[5].klass;
          monitor = v21[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v23.fields.currentCryptoKey = klass;
          *(_QWORD *)&v23.fields.fakeValue = monitor;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
          if ( !v13 )
            break;
          if ( v14 >= v13->max_length )
LABEL_34:
            sub_1B88814(Instance, v7);
          v13->m_Items[v14 + 1] = (int)Instance;
        }
      }
      if ( v15 == ++v14 )
        return v13;
    }
LABEL_33:
    sub_1B8880C(Instance, v7);
  }
  return v13;
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  int64_t v7; // x1
  const MethodInfo *v8; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int32_t max_length; // w21
  System_Collections_Generic_List_long__o *v11; // x19
  unsigned __int64 v12; // x20
  struct System_Int64_array *v13; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BF5C & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BF5C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v8);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
    goto LABEL_30;
  userCommandCodeIds = entity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    goto LABEL_30;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0LL;
  v11 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  }
  if ( *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 48LL) >= max_length )
    goto LABEL_16;
  max_length = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 48LL);
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  }
  if ( max_length >= 1 )
  {
LABEL_16:
    v12 = 0LL;
    while ( entity )
    {
      v13 = entity->fields.userCommandCodeIds;
      if ( !v13 )
        break;
      if ( v12 >= v13->max_length )
        sub_1B88814(Instance, v7);
      v7 = v13->m_Items[v12];
      if ( v7 >= 1 )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v15 = Method_System_Collections_Generic_List_long__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v11,
            v7,
            *(const MethodInfo_34E5868 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size] = v7;
        }
      }
      if ( max_length == ++v12 )
        return v11;
    }
LABEL_30:
    sub_1B8880C(Instance, v7);
  }
  return v11;
}