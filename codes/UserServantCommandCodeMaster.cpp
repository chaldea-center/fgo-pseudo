void UserServantCommandCodeMaster___ctor(UserServantCommandCodeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597186F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
    byte_597186F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    262,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string___ctor__);
}


UserServantCommandCodeEntity_o *UserServantCommandCodeMaster__GetEntity(
        UserServantCommandCodeMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_597186D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
    byte_597186D = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCodeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_3F157EC *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__GetEntity__);
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
  _QWORD *monitor; // x25
  unsigned __int64 v10; // x26
  __int64 v11; // x27
  struct System_Int64_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_5971870 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    byte_5971870 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( !list )
        break;
      monitor = list[3].monitor;
      if ( !monitor )
        break;
      if ( (int)monitor[3] >= 1 )
      {
        v10 = 0;
        v11 = (unsigned int)monitor[3];
        do
        {
          if ( v10 >= *((unsigned int *)monitor + 6) )
            sub_2213CE4(list);
          v4 = monitor[v10 + 4];
          if ( v4 >= 1 )
          {
            if ( !v3 )
              goto LABEL_21;
            items = v3->fields._items;
            v13 = Method_System_Collections_Generic_List_long__Add__;
            ++v3->fields._version;
            if ( !items )
              goto LABEL_21;
            size = v3->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v3,
                v4,
                *(const MethodInfo_446C29C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v3->fields._size = size + 1;
              items->m_Items[size] = v4;
            }
          }
          ++v10;
        }
        while ( v11 != v10 );
      }
      if ( ++v8 == v7 )
        return v3;
    }
LABEL_21:
    sub_2213CDC(list, v4);
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
  __int128 v9; // q1
  __int64 v10; // x27
  int v11; // w9
  int64_t v12; // x23
  unsigned __int64 v13; // x28
  __int64 v14; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-80h]

  if ( (byte_5971871 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__long___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_long__long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5971871 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__long__o *)sub_2213CCC(System_Collections_Generic_Dictionary_long__long__TypeInfo);
  System_Collections_Generic_Dictionary_long__long____ctor(
    v3,
    (const MethodInfo_3FCBD50 *)Method_System_Collections_Generic_Dictionary_long__long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
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
                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( !list )
        break;
      v9 = *(_OWORD *)(list + 64);
      v10 = *(_QWORD *)(list + 80);
      v11 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)(list + 48);
      *(_OWORD *)&v17.fields.fakeValue = v9;
      if ( !v11 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
      v16 = v17;
      list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v16, 0);
      if ( !v10 )
        break;
      if ( (int)*(_QWORD *)(v10 + 24) >= 1 )
      {
        v12 = list;
        v13 = 0;
        v14 = (unsigned int)*(_QWORD *)(v10 + 24);
        do
        {
          if ( v13 >= *(unsigned int *)(v10 + 24) )
            sub_2213CE4(list);
          v4 = *(_QWORD *)(v10 + 32 + 8 * v13);
          if ( v4 >= 1 )
          {
            if ( !v3 )
              goto LABEL_21;
            System_Collections_Generic_Dictionary_long__long___Add(
              v3,
              v4,
              v12,
              (const MethodInfo_3FCC700 *)Method_System_Collections_Generic_Dictionary_long__long__Add__);
          }
          ++v13;
        }
        while ( v14 != v13 );
      }
      if ( ++v8 == v7 )
        return v3;
    }
LABEL_21:
    sub_2213CDC(list, v4);
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
  Il2CppClass *klass; // x9
  __int64 namespaze; // x8
  Il2CppType *p_byval_arg; // x9
  void *data; // t1

  if ( (byte_5971875 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    byte_5971875 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_2213CDC(list, userCommandCodeId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( Item )
      {
        klass = Item[5].klass;
        if ( klass )
        {
          if ( (int)klass->_1.namespaze >= 1 )
            break;
        }
      }
LABEL_13:
      v9 = ++v8 < Count;
      if ( v8 == Count )
        return v9;
    }
    namespaze = (unsigned int)klass->_1.namespaze;
    p_byval_arg = &klass->_1.byval_arg;
    while ( 1 )
    {
      data = p_byval_arg->data;
      p_byval_arg = (Il2CppType *)((char *)p_byval_arg + 8);
      if ( data == (void *)userCommandCodeId )
        break;
      if ( !--namespaze )
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

  if ( (byte_597186E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
    byte_597186E = 1;
  }
  PK = (Il2CppObject *)UserServantCommandCodeEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_UserServantCommandCodeMaster__UserServantCommandCodeEntity__string__TryGetEntity__);
}


void UserServantCommandCodeMaster__getAttachList(
        UserServantCommandCodeMaster_o *this,
        System_Int64_array **userCommandCodeIdList,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_long__o *v9; // x23
  int32_t v10; // w24
  UserServantCommandCodeEntity_o *v11; // x25
  __int128 v12; // q1
  int v13; // w8
  const MethodInfo *v14; // x2
  System_Int64_array *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-70h]

  if ( (byte_5971872 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5971872 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Count__);
  v9 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
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
                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserServantCommandCodeEntity__get_Item__);
      if ( list )
      {
        v11 = (UserServantCommandCodeEntity_o *)list;
        v12 = *(_OWORD *)(list + 32);
        v13 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(list + 16);
        *(_OWORD *)&v23.fields.fakeValue = v12;
        if ( !v13 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userCommandCodeIdList);
        v22 = v23;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v22, 0);
        if ( list == userId )
          UserServantCommandCodeEntity__CollectUserCommandCodeId(v11, v9, v14);
      }
      if ( Count == ++v10 )
        goto LABEL_13;
    }
LABEL_15:
    sub_2213CDC(list, userCommandCodeIdList);
  }
LABEL_13:
  if ( !v9 )
    goto LABEL_15;
  v15 = System_Collections_Generic_List_long___ToArray(
          v9,
          (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  *userCommandCodeIdList = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)userCommandCodeIdList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
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
  Il2CppObject *v13; // x20
  unsigned __int64 v14; // x23
  __int64 v15; // x26
  struct System_Int64_array *v16; // x8
  int64_t v17; // x2
  Il2CppClass *klass; // x21
  void *monitor; // x22
  Il2CppObject *v21; // [xsp+8h] [xbp-58h] BYREF
  UserServantCommandCodeEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_5971873 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971873 = 1;
  }
  entity = 0;
  v21 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
    v12 = BalanceConfig_TypeInfo;
  }
  Instance = (Il2CppObject *)sub_2213B20(int___TypeInfo, (unsigned int)v12->static_fields->SvtCommandCardMax);
  v13 = Instance;
  if ( BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax >= max_length )
    goto LABEL_16;
  max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
    max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  }
  if ( max_length >= 1 )
  {
LABEL_16:
    v14 = 0;
    v15 = (unsigned int)max_length;
    while ( entity )
    {
      v16 = entity->fields.userCommandCodeIds;
      if ( !v16 )
        break;
      if ( v14 >= LODWORD(v16->max_length) )
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
                                     (const MethodInfo_3F131DC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v21 )
            break;
          klass = v21[5].klass;
          monitor = v21[5].monitor;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
          *(_QWORD *)&v23.fields.currentCryptoKey = klass;
          *(_QWORD *)&v23.fields.fakeValue = monitor;
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v23, 0);
          if ( !v13 )
            break;
          if ( v14 >= LODWORD(v13[1].monitor) )
LABEL_34:
            sub_2213CE4(Instance);
          *((_DWORD *)&v13[2].klass + v14) = (_DWORD)Instance;
        }
      }
      if ( v15 == ++v14 )
        return (System_Int32_array *)v13;
    }
LABEL_33:
    sub_2213CDC(Instance, v7);
  }
  return (System_Int32_array *)v13;
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
  int32_t max_length; // w22
  System_Collections_Generic_List_long__o *v11; // x19
  unsigned __int64 v12; // x20
  struct System_Int64_array *v13; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971874 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971874 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
  v11 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  }
  if ( *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 60LL) >= max_length )
    goto LABEL_16;
  max_length = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 60LL);
  if ( !HIDWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v7);
    max_length = BalanceConfig_TypeInfo->static_fields->SvtCommandCardMax;
  }
  if ( max_length >= 1 )
  {
LABEL_16:
    v12 = 0;
    while ( entity )
    {
      v13 = entity->fields.userCommandCodeIds;
      if ( !v13 )
        break;
      if ( v12 >= LODWORD(v13->max_length) )
        sub_2213CE4(Instance);
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
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v11,
            v7,
            *(const MethodInfo_446C29C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    sub_2213CDC(Instance, v7);
  }
  return v11;
}