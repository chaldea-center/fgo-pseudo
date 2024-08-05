void __fastcall UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF2D6 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__,
      method);
    byte_49FF2D6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    254,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *__fastcall UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF2D4 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__,
      userId);
    byte_49FF2D4 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_30D64D8 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__GetEquipedCommandCodeList(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *v8; // x20
  UserServantCommandCodeEntity_c *v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w21
  int32_t v13; // w22
  __int64 methodPtr_low; // x9
  _QWORD *monitor; // x26
  __int64 v16; // x27
  __int64 v17; // x28
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  UserServantCommandCodeMaster_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_49FF2D7 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_long___ctor__, v5);
    sub_1B64870(&System_Collections_Generic_List_long__TypeInfo, v6);
    sub_1B64870(&UserServantCommandCodeEntity_TypeInfo, v7);
    byte_49FF2D7 = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_1B64ACC(list, v9);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v8;
  v12 = Count;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_24;
    v9 = UserServantCommandCodeEntity_TypeInfo;
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
      v16 = 0LL;
      v17 = (unsigned int)monitor[3] - 1LL;
      while ( 1 )
      {
        v9 = (UserServantCommandCodeEntity_c *)monitor[v16 + 4];
        if ( (__int64)v9 >= 1 )
        {
          if ( !v8 )
            goto LABEL_24;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v8,
              (int64_t)v9,
              *(const MethodInfo_3497350 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v8->fields._size = size + 1;
            items->m_Items[size] = (int64_t)v9;
          }
        }
        if ( v17 == v16 )
          break;
        if ( ++v16 >= (unsigned __int64)*((unsigned int *)monitor + 6) )
          sub_1B64AD4(list, v9);
      }
    }
    if ( ++v13 == v12 )
      return v8;
  }
  sub_1B64D8C(list);
  return (System_Collections_Generic_List_long__o *)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v22, v23);
}


System_Collections_Generic_Dictionary_long__long__o *__fastcall UserServantCommandCodeMaster__GetEquippedCommandCodeDic(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_long__long__o *v9; // x20
  int64_t v10; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  __int64 methodPtr_low; // x9
  __int128 v16; // q0
  __int64 v17; // x28
  int64_t v18; // x23
  __int64 v19; // x29
  __int64 v20; // x24
  System_Collections_Generic_Dictionary_long__long__o *result; // x0
  UserServantCommandCodeMaster_o *v22; // x0
  System_Int64_array **v23; // x1
  int64_t v24; // x2
  const MethodInfo *v25; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]

  if ( (byte_49FF2D8 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_long__long__Add__, v4);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_long__long___ctor__, v5);
    sub_1B64870(&System_Collections_Generic_Dictionary_long__long__TypeInfo, v6);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B64870(&UserServantCommandCodeEntity_TypeInfo, v8);
    byte_49FF2D8 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_long__long__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_long__long__TypeInfo);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v9,
    (const MethodInfo_3160208 *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
LABEL_23:
    sub_1B64ACC(list, v10);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v9;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v14,
                      (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_23;
    methodPtr_low = LOBYTE(UserServantCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != UserServantCommandCodeEntity_TypeInfo )
    {
      break;
    }
    v16 = *(_OWORD *)(list + 64);
    v17 = *(_QWORD *)(list + 80);
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(list + 48);
    *(_OWORD *)&v27.fields.fakeValue = v16;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v26 = v27;
    list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v26, 0LL);
    if ( !v17 )
      goto LABEL_23;
    if ( (int)*(_QWORD *)(v17 + 24) >= 1 )
    {
      v18 = list;
      v19 = 0LL;
      v20 = (unsigned int)*(_QWORD *)(v17 + 24) - 1LL;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v17 + 32 + 8 * v19);
        if ( v10 >= 1 )
        {
          if ( !v9 )
            goto LABEL_23;
          System_Collections_Generic_Dictionary_long__long___Add(
            v9,
            v10,
            v18,
            (const MethodInfo_3160BD8 *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
        }
        if ( v20 == v19 )
          break;
        if ( ++v19 >= (unsigned __int64)*(unsigned int *)(v17 + 24) )
          sub_1B64AD4(list, v10);
      }
    }
    if ( ++v14 == v13 )
      return v9;
  }
  sub_1B64D8C(list);
  UserServantCommandCodeMaster__getAttachList(v22, v23, v24, v25);
  return result;
}


bool __fastcall UserServantCommandCodeMaster__IsAttach(
        UserServantCommandCodeMaster_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_long__o *v11; // x0
  int32_t v12; // w22
  bool v13; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x9
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v18; // w10

  v3 = userCommandCodeId;
  if ( (byte_49FF2DC & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userCommandCodeId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1B64870(&UserServantCommandCodeEntity_TypeInfo, v8);
    byte_49FF2DC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_1B64ACC(list, userCommandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v11 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count < 1 )
  {
    return 0;
  }
  else
  {
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_20;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        userCommandCodeId = (int64_t)UserServantCommandCodeEntity_TypeInfo;
        methodPtr_low = LOBYTE(UserServantCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (UserServantCommandCodeEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantCommandCodeEntity_TypeInfo )
        {
          sub_1B64D8C(Item);
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
      v13 = ++v12 < Count;
      if ( v12 == Count )
        return v13;
    }
    v18 = 0;
    while ( *((_QWORD *)&klass->_1.byval_arg.data + v18) != v3 )
    {
      if ( namespaze == ++v18 )
        goto LABEL_15;
    }
  }
  return v13;
}


bool __fastcall UserServantCommandCodeMaster__TryGetEntity(
        UserServantCommandCodeMaster_o *this,
        UserServantCommandCodeEntity_o **entity,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF2D5 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__,
      entity);
    byte_49FF2D5 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
}


void __fastcall UserServantCommandCodeMaster__getAttachList(
        UserServantCommandCodeMaster_o *this,
        System_Int64_array **userCommandCodeIdList,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_long__o *v15; // x22
  int32_t i; // w24
  UserServantCommandCodeEntity_o *v17; // x25
  __int64 methodPtr_low; // x9
  __int128 v19; // q0
  const MethodInfo *v20; // x2
  System_Int64_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-80h]

  if ( (byte_49FF2D9 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userCommandCodeIdList);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B64870(&UserServantCommandCodeEntity_TypeInfo, v12);
    byte_49FF2D9 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
LABEL_18:
    sub_1B64ACC(list, userCommandCodeIdList);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
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
                        (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = (UserServantCommandCodeEntity_o *)list;
        methodPtr_low = LOBYTE(UserServantCommandCodeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
          || *(UserServantCommandCodeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != UserServantCommandCodeEntity_TypeInfo )
        {
          sub_1B64D8C(list);
          goto LABEL_18;
        }
        v19 = *(_OWORD *)(list + 32);
        *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)(list + 16);
        *(_OWORD *)&v25.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v25;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v24, 0LL);
        if ( list == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v17, v15, v20);
      }
    }
  }
  if ( !v15 )
    goto LABEL_18;
  v21 = System_Collections_Generic_List_long___ToArray(
          v15,
          (const MethodInfo_3498EA8 *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v21;
  sub_1B64814((ServantStatusBattleListViewItem_o *)userCommandCodeIdList, (int32_t)v21, v22, v23);
}


System_Int32_array *__fastcall UserServantCommandCodeMaster__getCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v15; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int max_length; // w21
  BalanceConfig_c *v18; // x0
  System_Int32_array *v19; // x20
  unsigned __int64 v20; // x23
  __int64 v21; // x24
  struct System_Int64_array *v22; // x8
  int64_t v23; // x2
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v27; // [xsp+0h] [xbp-60h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_49FF2DA & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, userId);
    sub_1B64870(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1B64870(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v8);
    sub_1B64870(&int___TypeInfo, v9);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FF2DA = 1;
  }
  v27 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = (Il2CppObject *)UserServantCommandCodeMaster__TryGetEntity(
                               (UserServantCommandCodeMaster_o *)Instance,
                               &entity,
                               userId,
                               svtId,
                               v15);
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
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  Instance = (Il2CppObject *)sub_1B64918(int___TypeInfo, (unsigned int)v18->static_fields->SvtCommandCardMax);
  v19 = (System_Int32_array *)Instance;
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
    v20 = 0LL;
    v21 = (unsigned int)max_length;
    while ( entity )
    {
      v22 = entity->fields.userCommandCodeIds;
      if ( !v22 )
        break;
      if ( v20 >= v22->max_length )
        goto LABEL_34;
      v23 = v22->m_Items[v20];
      if ( v23 >= 1 )
      {
        if ( !MasterData_object )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                     &v27,
                                     v23,
                                     (const MethodInfo_30D6380 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v27 )
            break;
          klass = v27[5].klass;
          monitor = v27[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v29.fields.currentCryptoKey = klass;
          *(_QWORD *)&v29.fields.fakeValue = monitor;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v29, 0LL);
          if ( !v19 )
            break;
          if ( v20 >= v19->max_length )
LABEL_34:
            sub_1B64AD4(Instance, v13);
          v19->m_Items[v20 + 1] = (int)Instance;
        }
      }
      if ( v21 == ++v20 )
        return v19;
    }
LABEL_33:
    sub_1B64ACC(Instance, v13);
  }
  return v19;
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  int64_t v13; // x1
  const MethodInfo *v14; // x4
  struct System_Int64_array *userCommandCodeIds; // x8
  int32_t max_length; // w21
  System_Collections_Generic_List_long__o *v17; // x19
  unsigned __int64 v18; // x20
  struct System_Int64_array *v19; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FF2DB & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, userId);
    sub_1B64870(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FF2DB = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v14);
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
  v17 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
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
    v18 = 0LL;
    while ( entity )
    {
      v19 = entity->fields.userCommandCodeIds;
      if ( !v19 )
        break;
      if ( v18 >= v19->max_length )
        sub_1B64AD4(Instance, v13);
      v13 = v19->m_Items[v18];
      if ( v13 >= 1 )
      {
        if ( !v17 )
          break;
        items = v17->fields._items;
        v21 = Method_System_Collections_Generic_List_long__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v17,
            v13,
            *(const MethodInfo_3497350 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size] = v13;
        }
      }
      if ( max_length == ++v18 )
        return v17;
    }
LABEL_30:
    sub_1B64ACC(Instance, v13);
  }
  return v17;
}