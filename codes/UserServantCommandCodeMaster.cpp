void __fastcall UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02F60 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__,
      method);
    byte_4B02F60 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    260,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *__fastcall UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B02F5E & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__,
      userId);
    byte_4B02F5E = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_32B3B28 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
}


System_Collections_Generic_List_long__o *__fastcall UserServantCommandCodeMaster__GetEquipedCommandCodeList(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_long__o *v7; // x20
  int64_t v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  __int64 v13; // x2
  _QWORD *monitor; // x25
  __int64 v15; // x26
  __int64 v16; // x27
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  if ( (byte_4B02F61 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v5);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v6);
    byte_4B02F61 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( !list )
        break;
      monitor = list[3].monitor;
      if ( !monitor )
        break;
      if ( (int)monitor[3] >= 1 )
      {
        v15 = 0LL;
        v16 = (unsigned int)monitor[3] - 1LL;
        while ( 1 )
        {
          v8 = monitor[v15 + 4];
          if ( v8 >= 1 )
          {
            if ( !v7 )
              goto LABEL_22;
            items = v7->fields._items;
            v18 = Method_System_Collections_Generic_List_long__Add__;
            ++v7->fields._version;
            if ( !items )
              goto LABEL_22;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v7,
                v8,
                *(const MethodInfo_3688E74 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v7->fields._size = size + 1;
              items->m_Items[size] = v8;
            }
          }
          if ( v16 == v15 )
            break;
          if ( ++v15 >= (unsigned __int64)*((unsigned int *)monitor + 6) )
            sub_1BC326C(list, v8, v13);
        }
      }
      if ( ++v12 == v11 )
        return v7;
    }
LABEL_22:
    sub_1BC3264(list, v8);
  }
  return v7;
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
  System_Collections_Generic_Dictionary_long__long__o *v8; // x20
  int64_t v9; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v12; // w21
  int32_t v13; // w22
  __int128 v14; // q0
  __int64 v15; // x27
  __int64 v16; // x2
  int64_t v17; // x23
  __int64 v18; // x28
  __int64 v19; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h]

  if ( (byte_4B02F62 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__long__Add__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__long___ctor__, v5);
    sub_1BC3008(&System_Collections_Generic_Dictionary_long__long__TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_4B02F62 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_long__long__o *)sub_1BC3254(System_Collections_Generic_Dictionary_long__long__TypeInfo);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v8,
    (const MethodInfo_33484CC *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v13,
                        (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( !list )
        break;
      v14 = *(_OWORD *)(list + 64);
      v15 = *(_QWORD *)(list + 80);
      *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)(list + 48);
      *(_OWORD *)&v22.fields.fakeValue = v14;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v21 = v22;
      list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v21, 0LL);
      if ( !v15 )
        break;
      if ( (int)*(_QWORD *)(v15 + 24) >= 1 )
      {
        v17 = list;
        v18 = 0LL;
        v19 = (unsigned int)*(_QWORD *)(v15 + 24) - 1LL;
        while ( 1 )
        {
          v9 = *(_QWORD *)(v15 + 32 + 8 * v18);
          if ( v9 >= 1 )
          {
            if ( !v8 )
              goto LABEL_21;
            System_Collections_Generic_Dictionary_long__long___Add(
              v8,
              v9,
              v17,
              (const MethodInfo_3348E9C *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
          }
          if ( v19 == v18 )
            break;
          if ( ++v18 >= (unsigned __int64)*(unsigned int *)(v15 + 24) )
            sub_1BC326C(list, v9, v16);
        }
      }
      if ( ++v13 == v12 )
        return v8;
    }
LABEL_21:
    sub_1BC3264(list, v9);
  }
  return v8;
}


bool __fastcall UserServantCommandCodeMaster__IsAttach(
        UserServantCommandCodeMaster_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_long__o *v10; // x0
  int32_t v11; // w22
  bool v12; // w24
  Il2CppObject *Item; // x0
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v16; // w10

  if ( (byte_4B02F66 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__,
      userCommandCodeId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_4B02F66 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1BC3264(list, userCommandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  v10 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count < 1 )
  {
    return 0;
  }
  else
  {
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_17;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v11,
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( Item )
      {
        klass = Item[5].klass;
        if ( klass )
        {
          namespaze = (int)klass->_1.namespaze;
          if ( namespaze >= 1 )
            break;
        }
      }
LABEL_13:
      v12 = ++v11 < Count;
      if ( v11 == Count )
        return v12;
    }
    v16 = 0;
    while ( *((_QWORD *)&klass->_1.byval_arg.data + v16) != userCommandCodeId )
    {
      if ( namespaze == ++v16 )
        goto LABEL_13;
    }
  }
  return v12;
}


bool __fastcall UserServantCommandCodeMaster__TryGetEntity(
        UserServantCommandCodeMaster_o *this,
        UserServantCommandCodeEntity_o **entity,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B02F5F & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__,
      entity);
    byte_4B02F5F = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
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
  int64_t list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_long__o *v14; // x22
  int32_t v15; // w24
  __int128 v16; // q0
  UserServantCommandCodeEntity_o *v17; // x25
  const MethodInfo *v18; // x2
  System_Int64_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-70h]

  if ( (byte_4B02F63 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__,
      userCommandCodeIdList);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_4B02F63 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  v14 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
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
                        (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( list )
      {
        v16 = *(_OWORD *)(list + 32);
        v17 = (UserServantCommandCodeEntity_o *)list;
        *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(list + 16);
        *(_OWORD *)&v23.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v22 = v23;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v22, 0LL);
        if ( list == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v17, v14, v18);
      }
      if ( Count == ++v15 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1BC3264(list, userCommandCodeIdList);
  }
LABEL_13:
  if ( !v14 )
    goto LABEL_15;
  v19 = System_Collections_Generic_List_long___ToArray(
          v14,
          (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)userCommandCodeIdList, (int32_t)v19, v20, v21);
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
  int64_t v19; // x2
  System_Int32_array *v20; // x20
  unsigned __int64 v21; // x23
  __int64 v22; // x24
  struct System_Int64_array *v23; // x8
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v27; // [xsp+0h] [xbp-60h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4B02F64 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, userId);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1BC3008(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v8);
    sub_1BC3008(&int___TypeInfo, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B02F64 = 1;
  }
  v27 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
  Instance = (Il2CppObject *)sub_1BC30B0(int___TypeInfo, (unsigned int)v18->static_fields->SvtCommandCardMax);
  v20 = (System_Int32_array *)Instance;
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
    v21 = 0LL;
    v22 = (unsigned int)max_length;
    while ( entity )
    {
      v23 = entity->fields.userCommandCodeIds;
      if ( !v23 )
        break;
      if ( v21 >= v23->max_length )
        goto LABEL_34;
      v19 = v23->m_Items[v21];
      if ( v19 >= 1 )
      {
        if ( !MasterData_object )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                     &v27,
                                     v19,
                                     (const MethodInfo_32B1618 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
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
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v29, 0LL);
          if ( !v20 )
            break;
          if ( v21 >= v20->max_length )
LABEL_34:
            sub_1BC326C(Instance, v13, v19);
          v20->m_Items[v21 + 1] = (int)Instance;
        }
      }
      if ( v22 == ++v21 )
        return v20;
    }
LABEL_33:
    sub_1BC3264(Instance, v13);
  }
  return v20;
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
  __int64 v18; // x2
  unsigned __int64 v19; // x20
  struct System_Int64_array *v20; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B02F65 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, userId);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B02F65 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
  v17 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  }
  if ( *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 60LL) >= max_length )
    goto LABEL_16;
  max_length = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 60LL);
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  }
  if ( max_length >= 1 )
  {
LABEL_16:
    v19 = 0LL;
    while ( entity )
    {
      v20 = entity->fields.userCommandCodeIds;
      if ( !v20 )
        break;
      if ( v19 >= v20->max_length )
        sub_1BC326C(Instance, v13, v18);
      v13 = v20->m_Items[v19];
      if ( v13 >= 1 )
      {
        if ( !v17 )
          break;
        items = v17->fields._items;
        v22 = Method_System_Collections_Generic_List_long__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v17,
            v13,
            *(const MethodInfo_3688E74 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size] = v13;
        }
      }
      if ( max_length == ++v19 )
        return v17;
    }
LABEL_30:
    sub_1BC3264(Instance, v13);
  }
  return v17;
}