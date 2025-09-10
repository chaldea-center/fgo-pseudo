void UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28263 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
    byte_4C28263 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    260,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C28261 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
    byte_4C28261 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_338C850 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
}


System_Collections_Generic_List_long__o *UserServantCommandCodeMaster__GetEquipedCommandCodeList(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 v9; // x2
  _QWORD *monitor; // x25
  __int64 v11; // x26
  __int64 v12; // x27
  struct System_Int64_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4C28264 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C28264 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( !list )
        break;
      monitor = list[3].monitor;
      if ( !monitor )
        break;
      if ( (int)monitor[3] >= 1 )
      {
        v11 = 0;
        v12 = (unsigned int)monitor[3] - 1LL;
        while ( 1 )
        {
          v4 = monitor[v11 + 4];
          if ( v4 >= 1 )
          {
            if ( !v3 )
              goto LABEL_22;
            items = v3->fields._items;
            v14 = Method_System_Collections_Generic_List_long__Add__;
            ++v3->fields._version;
            if ( !items )
              goto LABEL_22;
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v3,
                v4,
                *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v3->fields._size = size + 1;
              items->m_Items[size] = v4;
            }
          }
          if ( v12 == v11 )
            break;
          if ( ++v11 >= (unsigned __int64)*((unsigned int *)monitor + 6) )
            sub_1C2D6F4(list, v4, v9);
        }
      }
      if ( ++v8 == v7 )
        return v3;
    }
LABEL_22:
    sub_1C2D6EC(list, v4);
  }
  return v3;
}


System_Collections_Generic_Dictionary_long__long__o *UserServantCommandCodeMaster__GetEquippedCommandCodeDic(
        UserServantCommandCodeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__long__o *v3; // x20
  int64_t v4; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int128 v9; // q0
  __int64 v10; // x27
  __int64 v11; // x2
  int64_t v12; // x23
  __int64 v13; // x28
  __int64 v14; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-80h]

  if ( (byte_4C28265 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__long___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_long__long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C28265 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__long__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_long__long__TypeInfo);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v3,
    (const MethodInfo_342287C *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v8,
                        (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( !list )
        break;
      v9 = *(_OWORD *)(list + 64);
      v10 = *(_QWORD *)(list + 80);
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)(list + 48);
      *(_OWORD *)&v17.fields.fakeValue = v9;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v16 = v17;
      list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v16, 0);
      if ( !v10 )
        break;
      if ( (int)*(_QWORD *)(v10 + 24) >= 1 )
      {
        v12 = list;
        v13 = 0;
        v14 = (unsigned int)*(_QWORD *)(v10 + 24) - 1LL;
        while ( 1 )
        {
          v4 = *(_QWORD *)(v10 + 32 + 8 * v13);
          if ( v4 >= 1 )
          {
            if ( !v3 )
              goto LABEL_21;
            System_Collections_Generic_Dictionary_long__long___Add(
              v3,
              v4,
              v12,
              (const MethodInfo_342324C *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
          }
          if ( v14 == v13 )
            break;
          if ( ++v13 >= (unsigned __int64)*(unsigned int *)(v10 + 24) )
            sub_1C2D6F4(list, v4, v11);
        }
      }
      if ( ++v8 == v7 )
        return v3;
    }
LABEL_21:
    sub_1C2D6EC(list, v4);
  }
  return v3;
}


bool UserServantCommandCodeMaster__IsAttach(
        UserServantCommandCodeMaster_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_long__o *v7; // x0
  int32_t v8; // w22
  bool v9; // w24
  Il2CppObject *Item; // x0
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v13; // w10

  if ( (byte_4C28269 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C28269 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1C2D6EC(list, userCommandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  v7 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
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
        goto LABEL_17;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v8,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
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
      v9 = ++v8 < Count;
      if ( v8 == Count )
        return v9;
    }
    v13 = 0;
    while ( *((_QWORD *)&klass->_1.byval_arg.data + v13) != userCommandCodeId )
    {
      if ( namespaze == ++v13 )
        goto LABEL_13;
    }
  }
  return v9;
}


bool UserServantCommandCodeMaster__TryGetEntity(
        UserServantCommandCodeMaster_o *this,
        UserServantCommandCodeEntity_o **entity,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C28262 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
    byte_4C28262 = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
}


void UserServantCommandCodeMaster__getAttachList(
        UserServantCommandCodeMaster_o *this,
        System_Int64_array **userCommandCodeIdList,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_long__o *v9; // x22
  int32_t v10; // w24
  __int128 v11; // q0
  UserServantCommandCodeEntity_o *v12; // x25
  const MethodInfo *v13; // x2
  System_Int64_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-70h]

  if ( (byte_4C28266 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C28266 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  v9 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v10,
                        (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( list )
      {
        v11 = *(_OWORD *)(list + 32);
        v12 = (UserServantCommandCodeEntity_o *)list;
        *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)(list + 16);
        *(_OWORD *)&v18.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v17 = v18;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v17, 0);
        if ( list == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v12, v9, v13);
      }
      if ( Count == ++v10 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C2D6EC(list, userCommandCodeIdList);
  }
LABEL_13:
  if ( !v9 )
    goto LABEL_15;
  v14 = System_Collections_Generic_List_long___ToArray(
          v9,
          (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v14;
  sub_1C2D434((CGThumbnailListItem_o *)userCommandCodeIdList, (int32_t)v14, v15, v16);
}


System_Int32_array *UserServantCommandCodeMaster__getCommandCodeIdList(
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
  int64_t v13; // x2
  Il2CppObject *v14; // x20
  unsigned __int64 v15; // x23
  __int64 v16; // x24
  struct System_Int64_array *v17; // x8
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v21; // [xsp+0h] [xbp-60h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C28267 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28267 = 1;
  }
  v21 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = (Il2CppObject *)UserServantCommandCodeMaster__TryGetEntity(
                               (UserServantCommandCodeMaster_o *)Instance,
                               &entity,
                               userId,
                               svtId,
                               v9);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_33;
  userCommandCodeIds = entity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    goto LABEL_33;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  Instance = (Il2CppObject *)sub_1C2D538(int___TypeInfo, (unsigned int)v12->static_fields->SvtCommandCardMax);
  v14 = Instance;
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
    v15 = 0;
    v16 = (unsigned int)max_length;
    while ( entity )
    {
      v17 = entity->fields.userCommandCodeIds;
      if ( !v17 )
        break;
      if ( v15 >= LODWORD(v17->max_length) )
        goto LABEL_34;
      v13 = v17->m_Items[v15];
      if ( v13 >= 1 )
      {
        if ( !MasterData_object )
          break;
        Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                     &v21,
                                     v13,
                                     (const MethodInfo_338A340 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
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
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v23, 0);
          if ( !v14 )
            break;
          if ( v15 >= LODWORD(v14[1].monitor) )
LABEL_34:
            sub_1C2D6F4(Instance, v7, v13);
          *((_DWORD *)&v14[2].klass + v15) = (_DWORD)Instance;
        }
      }
      if ( v16 == ++v15 )
        return (System_Int32_array *)v14;
    }
LABEL_33:
    sub_1C2D6EC(Instance, v7);
  }
  return (System_Int32_array *)v14;
}


System_Collections_Generic_List_long__o *UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
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
  __int64 v12; // x2
  unsigned __int64 v13; // x20
  struct System_Int64_array *v14; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C28268 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28268 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                (UserServantCommandCodeMaster_o *)Instance,
                                &entity,
                                userId,
                                svtId,
                                v8);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_30;
  userCommandCodeIds = entity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    goto LABEL_30;
  max_length = userCommandCodeIds->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
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
    v13 = 0;
    while ( entity )
    {
      v14 = entity->fields.userCommandCodeIds;
      if ( !v14 )
        break;
      if ( v13 >= LODWORD(v14->max_length) )
        sub_1C2D6F4(Instance, v7, v12);
      v7 = v14->m_Items[v13];
      if ( v7 >= 1 )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v16 = Method_System_Collections_Generic_List_long__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v11,
            v7,
            *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size] = v7;
        }
      }
      if ( max_length == ++v13 )
        return v11;
    }
LABEL_30:
    sub_1C2D6EC(Instance, v7);
  }
  return v11;
}