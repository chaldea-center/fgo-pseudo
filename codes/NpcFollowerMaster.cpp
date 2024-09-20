void __fastcall NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B52E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
    byte_4A5B52E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    95,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity(
        NpcFollowerMaster_o *this,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B52C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
    byte_4A5B52C = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_311DC8C *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
}


NpcFollowerEntity_array *__fastcall NpcFollowerMaster__GetEntityArray(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v10; // x22
  int64_t v11; // x24
  int32_t Count; // w0
  int32_t v13; // w25
  int32_t v14; // w26
  const MethodInfo *v15; // x5
  Il2CppObject *v16; // x27
  __int64 methodPtr_low; // x10
  __int64 v18; // x8
  __int64 v19; // x8
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  NpcFollowerMaster___c_c *v26; // x0
  System_Func_object__int__o *_9__3_0; // x19
  Il2CppObject *v28; // x20
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B52F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_StableSort_NpcFollowerEntity___);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
    sub_1B885B0(&System_Func_NpcFollowerEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NpcFollowerEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__);
    sub_1B885B0(&NpcFollowerMaster___c_TypeInfo);
    byte_4A5B52F = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v11 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v14,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v16 = (Il2CppObject *)Instance;
        methodPtr_low = LOBYTE(NpcFollowerEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(NpcFollowerEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == NpcFollowerEntity_TypeInfo )
        {
          v18 = *(_QWORD *)(Instance + 72);
          if ( v18 < 1 || v11 >= v18 )
          {
            v19 = *(_QWORD *)(Instance + 80);
            if ( (v19 < 1 || v19 >= v11)
              && *(_DWORD *)(Instance + 24) == questId
              && *(_DWORD *)(Instance + 28) == questPhase )
            {
              if ( !MasterData_object )
                break;
              Instance = NpcFollowerReleaseMaster__TryGetEntity(
                           (NpcFollowerReleaseMaster_o *)MasterData_object,
                           &entity,
                           *(_QWORD *)(Instance + 16),
                           questId,
                           questPhase,
                           v15);
              if ( (Instance & 1) == 0 )
                goto LABEL_40;
              Instance = (int64_t)entity;
              if ( !entity )
                break;
              Instance = NpcFollowerReleaseEntity__IsEnable(entity, v8);
              if ( (Instance & 1) != 0 )
              {
LABEL_40:
                if ( !v10 )
                  break;
                items = v10->fields._items;
                v23 = Method_System_Collections_Generic_List_NpcFollowerEntity__Add__;
                ++v10->fields._version;
                if ( !items )
                  break;
                size = v10->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v10,
                    v16,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &items->obj.klass + size;
                  v10->fields._size = size + 1;
                  v25[4] = (Il2CppClass *)v16;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v16, v20, v21);
                }
              }
            }
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_29;
    }
LABEL_37:
    sub_1B8880C(Instance, v8);
  }
LABEL_29:
  v26 = NpcFollowerMaster___c_TypeInfo;
  if ( !NpcFollowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo);
    v26 = NpcFollowerMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v26->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = NpcFollowerMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_NpcFollowerEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v28, Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, 0LL);
    static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v30, v31);
  }
  Instance = (int64_t)BasicHelper__StableSort_object_(
                        (System_Collections_Generic_List_T__o *)v10,
                        (System_Func_T__int__o *)_9__3_0,
                        1,
                        (const MethodInfo_2E6F7DC *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !Instance )
    goto LABEL_37;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity_39433140(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t leaderSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Collections_Generic_List_object__o *v13; // x19
  System_Predicate_object__o *v14; // x20

  if ( (byte_4A5B532 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
    sub_1B885B0(&System_Predicate_NpcFollowerEntity__TypeInfo);
    sub_1B885B0(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__);
    sub_1B885B0(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
    byte_4A5B532 = 1;
  }
  v9 = sub_1B887FC(NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = questId,
        *(_DWORD *)(v9 + 20) = questPhase,
        *(_QWORD *)(v9 + 24) = leaderSvtId,
        v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.list,
                                                                     (const MethodInfo_2E8FA18 *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___),
        v13 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                             v12,
                                                             (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___),
        v14 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_NpcFollowerEntity__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
          0LL),
        !v13) )
  {
    sub_1B8880C(v10, v11);
  }
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_object___Find(
                                  v13,
                                  (System_Predicate_T__o *)v14,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
}


FollowerInfo_o *__fastcall NpcFollowerMaster__GetFollower(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t followerId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool v10; // w0
  Il2CppObject *v11; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  int64_t id; // x22
  int32_t flag; // w25
  int32_t v16; // w23
  int32_t ImageSvtId; // w0
  struct System_Int64_array *svtEquipIds; // x8
  struct System_Int64_array *v19; // x8
  Il2CppObject *v20; // x0
  int32_t klass; // w20
  int32_t monitor_high; // w23
  int32_t monitor; // w22
  EquipTargetInfo_o *v24; // x19
  const MethodInfo *v26; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5B531 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1B885B0(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_1B885B0(&EquipTargetInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B531 = 1;
  }
  entity = 0LL;
  v10 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v11 = 0LL;
  if ( v10 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !Instance )
      goto LABEL_22;
    v11 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            entity->fields.leaderSvtId,
            (const MethodInfo_311DAE0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    if ( v11 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_22;
      id = entity->fields.id;
      Instance = (DataManager_o *)NpcFollowerEntity__GetDispLimitCnt(entity, v13);
      if ( !entity )
        goto LABEL_22;
      flag = entity->fields.flag;
      v16 = (int)Instance;
      ImageSvtId = NpcFollowerEntity__GetImageSvtId(entity, v13);
      Instance = (DataManager_o *)NpcServantFollowerEntity__getFollowerInfo(
                                    (NpcServantFollowerEntity_o *)v11,
                                    id,
                                    questId,
                                    questPhase,
                                    v16,
                                    (flag & 2) != 0,
                                    0,
                                    ImageSvtId,
                                    v26);
      if ( !entity )
        goto LABEL_22;
      svtEquipIds = entity->fields.svtEquipIds;
      if ( !svtEquipIds )
        goto LABEL_22;
      v11 = (Il2CppObject *)Instance;
      if ( *(_QWORD *)&svtEquipIds->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_22;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_22;
        v19 = entity->fields.svtEquipIds;
        if ( !v19 )
          goto LABEL_22;
        if ( !v19->max_length )
          sub_1B88814(Instance, v13);
        if ( !Instance )
          goto LABEL_22;
        v20 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v19->m_Items[0],
                (const MethodInfo_311DAE0 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v20 )
        {
          monitor_high = HIDWORD(v20[1].monitor);
          klass = (int32_t)v20[2].klass;
          monitor = (int32_t)v20[1].monitor;
          v24 = (EquipTargetInfo_o *)sub_1B887FC(EquipTargetInfo_TypeInfo);
          EquipTargetInfo___ctor_38882840(v24, monitor, klass, monitor_high, 1, 0LL);
          if ( v11 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v11, v24, 0LL);
            return (FollowerInfo_o *)v11;
          }
LABEL_22:
          sub_1B8880C(Instance, v13);
        }
      }
    }
  }
  return (FollowerInfo_o *)v11;
}


FollowerInfo_array *__fastcall NpcFollowerMaster__GetQuestFollowerList(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  NpcFollowerEntity_array *Instance; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v8; // x23
  System_Collections_Generic_List_object__o *v9; // x22
  const MethodInfo *v10; // x3
  int max_length; // w8
  NpcFollowerEntity_array *v12; // x24
  unsigned int v13; // w20
  NpcFollowerEntity_o *v14; // x26
  int64_t id; // x27
  NpcServantFollowerEntity_o *v16; // x25
  int32_t DispLimitCnt; // w0
  unsigned int flag; // w8
  int32_t v19; // w28
  int v20; // w29
  int v21; // w19
  const MethodInfo *v22; // x1
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  const MethodInfo *v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v29; // x9
  int32_t v30; // w19
  int32_t v31; // w27
  int32_t v32; // w26
  EquipTargetInfo_o *v33; // x28
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  const MethodInfo *v39; // [xsp+0h] [xbp-70h]

  if ( (byte_4A5B530 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1B885B0(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_1B885B0(&EquipTargetInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B530 = 1;
  }
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  Instance = NpcFollowerMaster__GetEntityArray(this, questId, questPhase, v10);
  if ( !Instance )
    goto LABEL_27;
  max_length = Instance->max_length;
  v12 = Instance;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
LABEL_28:
        sub_1B88814(Instance, v6);
      v14 = v12->m_Items[v13];
      if ( !v14 || !MasterData_object )
        break;
      Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              v14->fields.leaderSvtId,
                                              (const MethodInfo_311DAE0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( Instance )
      {
        id = v14->fields.id;
        v16 = (NpcServantFollowerEntity_o *)Instance;
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v14, v6);
        flag = v14->fields.flag;
        v19 = DispLimitCnt;
        v20 = (flag >> 1) & 1;
        v21 = (flag >> 2) & 1;
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v14, v22);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v16,
                         id,
                         questId,
                         questPhase,
                         v19,
                         v20,
                         v21,
                         ImageSvtId,
                         v39);
        Instance = (NpcFollowerEntity_array *)NpcFollowerEntity__GetEventDeckIndex(v14, v25);
        if ( !FollowerInfo )
          break;
        FollowerInfo->fields.npcInitIdx = (int)Instance;
        svtEquipIds = v14->fields.svtEquipIds;
        if ( !svtEquipIds )
          break;
        v29 = *(_QWORD *)&svtEquipIds->max_length;
        if ( v29 )
        {
          if ( !(_DWORD)v29 )
            goto LABEL_28;
          if ( !v8 )
            break;
          Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
                                                  svtEquipIds->m_Items[0],
                                                  (const MethodInfo_311DAE0 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Instance )
          {
            v31 = *(&Instance->max_length + 1);
            v30 = (int32_t)Instance->m_Items[0];
            v32 = Instance->max_length;
            v33 = (EquipTargetInfo_o *)sub_1B887FC(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_38882840(v33, v32, v30, v31, 1, 0LL);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v33, 0LL);
          }
        }
        if ( !v9 )
          break;
        items = v9->fields._items;
        v35 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)FollowerInfo,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v37[4] = (Il2CppClass *)FollowerInfo;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)FollowerInfo, v26, v27);
        }
      }
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_25;
    }
LABEL_27:
    sub_1B8880C(Instance, v6);
  }
LABEL_25:
  if ( !v9 )
    goto LABEL_27;
  return (FollowerInfo_array *)System_Collections_Generic_List_object___ToArray(
                                 v9,
                                 (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall NpcFollowerMaster__TryGetEntity(
        NpcFollowerMaster_o *this,
        NpcFollowerEntity_o **entity,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B52D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
    byte_4A5B52D = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void __fastcall NpcFollowerMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B533 & 1) == 0 )
  {
    sub_1B885B0(&NpcFollowerMaster___c_TypeInfo);
    byte_4A5B533 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(NpcFollowerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  NpcFollowerMaster___c_TypeInfo->static_fields->__9 = (struct NpcFollowerMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)NpcFollowerMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall NpcFollowerMaster___c___ctor(NpcFollowerMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall NpcFollowerMaster___c___GetEntityArray_b__3_0(
        NpcFollowerMaster___c_o *this,
        NpcFollowerEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B8880C(this, 0LL);
  return e->fields.priority;
}


void __fastcall NpcFollowerMaster___c__DisplayClass6_0___ctor(
        NpcFollowerMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall NpcFollowerMaster___c__DisplayClass6_0___GetEntity_b__0(
        NpcFollowerMaster___c__DisplayClass6_0_o *this,
        NpcFollowerEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}