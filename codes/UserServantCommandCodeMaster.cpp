void __fastcall UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8914 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__,
      method);
    byte_4BC8914 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    258,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *__fastcall UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC8912 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__,
      userId);
    byte_4BC8912 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_324D130 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
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
  _QWORD *monitor; // x25
  __int64 v14; // x26
  __int64 v15; // x27
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10

  if ( (byte_4BC8915 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v6);
    byte_4BC8915 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
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
                                                                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( !list )
        break;
      monitor = list[3].monitor;
      if ( !monitor )
        break;
      if ( (int)monitor[3] >= 1 )
      {
        v14 = 0LL;
        v15 = (unsigned int)monitor[3] - 1LL;
        while ( 1 )
        {
          v8 = monitor[v14 + 4];
          if ( v8 >= 1 )
          {
            if ( !v7 )
              goto LABEL_22;
            items = v7->fields._items;
            v17 = Method_System_Collections_Generic_List_long__Add__;
            ++v7->fields._version;
            if ( !items )
              goto LABEL_22;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v7,
                v8,
                *(const MethodInfo_36248C4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v7->fields._size = size + 1;
              items->m_Items[size] = v8;
            }
          }
          if ( v15 == v14 )
            break;
          if ( ++v14 >= (unsigned __int64)*((unsigned int *)monitor + 6) )
            sub_1C1AE38(list, v8);
        }
      }
      if ( ++v12 == v11 )
        return v7;
    }
LABEL_22:
    sub_1C1AE30(list, v8);
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
  int64_t v16; // x23
  __int64 v17; // x28
  __int64 v18; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-80h]

  if ( (byte_4BC8916 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_long__long__Add__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_long__long___ctor__, v5);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_long__long__TypeInfo, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_4BC8916 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_long__long__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_long__long__TypeInfo);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v8,
    (const MethodInfo_32DE174 *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
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
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( !list )
        break;
      v14 = *(_OWORD *)(list + 64);
      v15 = *(_QWORD *)(list + 80);
      *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)(list + 48);
      *(_OWORD *)&v21.fields.fakeValue = v14;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v20 = v21;
      list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v20, 0LL);
      if ( !v15 )
        break;
      if ( (int)*(_QWORD *)(v15 + 24) >= 1 )
      {
        v16 = list;
        v17 = 0LL;
        v18 = (unsigned int)*(_QWORD *)(v15 + 24) - 1LL;
        while ( 1 )
        {
          v9 = *(_QWORD *)(v15 + 32 + 8 * v17);
          if ( v9 >= 1 )
          {
            if ( !v8 )
              goto LABEL_21;
            System_Collections_Generic_Dictionary_long__long___Add(
              v8,
              v9,
              v16,
              (const MethodInfo_32DEB44 *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
          }
          if ( v18 == v17 )
            break;
          if ( ++v17 >= (unsigned __int64)*(unsigned int *)(v15 + 24) )
            sub_1C1AE38(list, v9);
        }
      }
      if ( ++v13 == v12 )
        return v8;
    }
LABEL_21:
    sub_1C1AE30(list, v9);
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

  if ( (byte_4BC891A & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__,
      userCommandCodeId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_4BC891A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1C1AE30(list, userCommandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  v10 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
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
               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
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

  if ( (byte_4BC8913 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__,
      entity);
    byte_4BC8913 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-70h]

  if ( (byte_4BC8917 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__,
      userCommandCodeIdList);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_4BC8917 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  v14 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
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
                        (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( list )
      {
        v16 = *(_OWORD *)(list + 32);
        v17 = (UserServantCommandCodeEntity_o *)list;
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(list + 16);
        *(_OWORD *)&v27.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v26 = v27;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v26, 0LL);
        if ( list == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v17, v14, v18);
      }
      if ( Count == ++v15 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C1AE30(list, userCommandCodeIdList);
  }
LABEL_13:
  if ( !v14 )
    goto LABEL_15;
  v19 = System_Collections_Generic_List_long___ToArray(
          v14,
          (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v19;
  sub_1C1AB78((PartyOrganizationUtility_o *)userCommandCodeIdList, (int64_t)v19, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_4BC8918 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, userId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1C1ABD4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v8);
    sub_1C1ABD4(&int___TypeInfo, v9);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BC8918 = 1;
  }
  v27 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
  Instance = (Il2CppObject *)sub_1C1AC7C(int___TypeInfo, (unsigned int)v18->static_fields->SvtCommandCardMax);
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
                                     (const MethodInfo_324AC20 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
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
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v29, 0LL);
          if ( !v19 )
            break;
          if ( v20 >= v19->max_length )
LABEL_34:
            sub_1C1AE38(Instance, v13);
          v19->m_Items[v20 + 1] = (int)Instance;
        }
      }
      if ( v21 == ++v20 )
        return v19;
    }
LABEL_33:
    sub_1C1AE30(Instance, v13);
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

  if ( (byte_4BC8919 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, userId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BC8919 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
  v17 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
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
        sub_1C1AE38(Instance, v13);
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
            *(const MethodInfo_36248C4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
    sub_1C1AE30(Instance, v13);
  }
  return v17;
}