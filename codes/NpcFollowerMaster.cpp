void NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C572CF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
    byte_4C572CF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    99,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_o *NpcFollowerMaster__GetEntity(
        NpcFollowerMaster_o *this,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C572CD & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
    byte_4C572CD = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_33B7A10 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
}


NpcFollowerEntity_array *NpcFollowerMaster__GetEntityArray(
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
  __int64 v16; // x8
  Il2CppObject *v17; // x27
  __int64 v18; // x8
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  NpcFollowerMaster___c_c *v25; // x0
  System_Func_object__int__o *_9__3_0; // x19
  Il2CppObject *v27; // x20
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C572D0 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_StableSort_NpcFollowerEntity___);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_NpcFollowerEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_NpcFollowerEntity__get_Item__);
    sub_1C3E564(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
    sub_1C3E564(&System_Func_NpcFollowerEntity__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__);
    sub_1C3E564(&NpcFollowerMaster___c_TypeInfo);
    byte_4C572D0 = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_35;
  v11 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_NpcFollowerEntity__get_Count__);
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
                            (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_NpcFollowerEntity__get_Item__);
      if ( Instance )
      {
        v16 = *(_QWORD *)(Instance + 72);
        v17 = (Il2CppObject *)Instance;
        if ( v16 < 1 || v11 >= v16 )
        {
          v18 = *(_QWORD *)(Instance + 80);
          if ( (v18 < 1 || v18 >= v11)
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
              goto LABEL_38;
            Instance = (int64_t)entity;
            if ( !entity )
              break;
            Instance = NpcFollowerReleaseEntity__IsEnable(entity, v8);
            if ( (Instance & 1) != 0 )
            {
LABEL_38:
              if ( !v10 )
                break;
              items = v10->fields._items;
              v22 = Method_System_Collections_Generic_List_NpcFollowerEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                break;
              size = v10->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v17,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v17;
                sub_1C3E508((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v17, v19, v20);
              }
            }
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_27;
    }
LABEL_35:
    sub_1C3E7C0(Instance, v8);
  }
LABEL_27:
  v25 = NpcFollowerMaster___c_TypeInfo;
  if ( !NpcFollowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo);
    v25 = NpcFollowerMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v25->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = NpcFollowerMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_NpcFollowerEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v27, Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, 0);
    static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v29, v30);
  }
  Instance = (int64_t)BasicHelper__StableSort_object_(
                        (System_Collections_Generic_List_T__o *)v10,
                        (System_Func_T__int__o *)_9__3_0,
                        1,
                        (const MethodInfo_30E9098 *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !Instance )
    goto LABEL_35;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


NpcFollowerEntity_o *NpcFollowerMaster__GetEntity_42472724(
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

  if ( (byte_4C572D3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___);
    sub_1C3E564(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
    sub_1C3E564(&System_Predicate_NpcFollowerEntity__TypeInfo);
    sub_1C3E564(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__);
    sub_1C3E564(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
    byte_4C572D3 = 1;
  }
  v9 = sub_1C3E7B0(NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = questId,
        *(_DWORD *)(v9 + 20) = questPhase,
        *(_QWORD *)(v9 + 24) = leaderSvtId,
        v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.list,
                                                                     (const MethodInfo_3108224 *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___),
        v13 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                             v12,
                                                             (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___),
        v14 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_NpcFollowerEntity__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
          0),
        !v13) )
  {
    sub_1C3E7C0(v10, v11);
  }
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_object___Find(
                                  v13,
                                  (System_Predicate_T__o *)v14,
                                  (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
}


FollowerInfo_o *NpcFollowerMaster__GetFollower(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t followerId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool v10; // w0
  NpcServantFollowerEntity_o *v11; // x21
  void *Instance; // x0
  const MethodInfo *v13; // x1
  NpcFollowerEntity_o *v14; // x23
  int64_t v15; // x22
  int32_t v16; // w24
  int32_t DispLimitCount; // w0
  const MethodInfo *v18; // x2
  int32_t v19; // w23
  _BOOL4 v20; // w24
  int32_t ImageSvtId; // w0
  __int64 v22; // x8
  __int64 v23; // x8
  Il2CppObject *v24; // x0
  int32_t klass; // w20
  int32_t monitor_high; // w23
  int32_t monitor; // w22
  EquipTargetInfo_o *v28; // x19
  const MethodInfo *v30; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C572D2 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1C3E564(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_1C3E564(&EquipTargetInfo_TypeInfo);
    sub_1C3E564(&ImageLimitCount_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C572D2 = 1;
  }
  entity = 0;
  v10 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v11 = 0;
  if ( v10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !Instance )
      goto LABEL_24;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 *(__int64 *)((char *)&qword_28 + (_QWORD)entity),
                 (const MethodInfo_33B54B4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    v11 = (NpcServantFollowerEntity_o *)Instance;
    if ( Instance )
    {
      v14 = entity;
      if ( !entity )
        goto LABEL_24;
      v15 = *(_QWORD *)((char *)&word_10 + (_QWORD)entity);
      v16 = *((_DWORD *)Instance + 11);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      DispLimitCount = ImageLimitCount__GetDispLimitCount(v16, 0);
      Instance = (void *)NpcFollowerEntity__GetDispLimitCnt(v14, DispLimitCount, v18);
      if ( !entity )
        goto LABEL_24;
      v19 = (int)Instance;
      v20 = (*(_DWORD *)((char *)&word_38 + (_QWORD)entity) >> 1) & 1;
      ImageSvtId = NpcFollowerEntity__GetImageSvtId(entity, v13);
      Instance = NpcServantFollowerEntity__getFollowerInfo(v11, v15, questId, questPhase, v19, v20, 0, ImageSvtId, v30);
      if ( !entity )
        goto LABEL_24;
      v22 = *(_QWORD *)((char *)&dword_30 + (_QWORD)entity);
      if ( !v22 )
        goto LABEL_24;
      v11 = (NpcServantFollowerEntity_o *)Instance;
      if ( *(_QWORD *)(v22 + 24) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_24;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_24;
        v23 = *(_QWORD *)((char *)&dword_30 + (_QWORD)entity);
        if ( !v23 )
          goto LABEL_24;
        if ( !*(_DWORD *)(v23 + 24) )
          sub_1C3E7C8(Instance, v13);
        if ( !Instance )
          goto LABEL_24;
        v24 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                *(_QWORD *)(v23 + 32),
                (const MethodInfo_33B54B4 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v24 )
        {
          monitor_high = HIDWORD(v24[1].monitor);
          klass = (int32_t)v24[2].klass;
          monitor = (int32_t)v24[1].monitor;
          v28 = (EquipTargetInfo_o *)sub_1C3E7B0(EquipTargetInfo_TypeInfo);
          EquipTargetInfo___ctor_41759588(v28, monitor, klass, monitor_high, 1, 0);
          if ( v11 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v11, v28, 0);
            return (FollowerInfo_o *)v11;
          }
LABEL_24:
          sub_1C3E7C0(Instance, v13);
        }
      }
    }
  }
  return (FollowerInfo_o *)v11;
}


FollowerInfo_array *NpcFollowerMaster__GetQuestFollowerList(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  NpcFollowerEntity_array *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v8; // x23
  System_Collections_Generic_List_object__o *v9; // x22
  const MethodInfo *v10; // x3
  int max_length; // w8
  NpcFollowerEntity_array *v12; // x24
  unsigned int v13; // w20
  NpcFollowerEntity_o *v14; // x26
  NpcServantFollowerEntity_o *v15; // x25
  int64_t id; // x27
  int32_t v17; // w28
  int32_t DispLimitCount; // w0
  const MethodInfo *v19; // x2
  int32_t DispLimitCnt; // w0
  unsigned int flag; // w8
  int32_t v22; // w28
  _BOOL4 v23; // w29
  _BOOL4 v24; // w19
  const MethodInfo *v25; // x1
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  const MethodInfo *v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Int64_array *svtEquipIds; // x8
  il2cpp_array_size_t v32; // x9
  int32_t v33; // w19
  int32_t max_length_high; // w27
  int32_t v35; // w26
  EquipTargetInfo_o *v36; // x28
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  const MethodInfo *v42; // [xsp+0h] [xbp-70h]

  if ( (byte_4C572D1 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1C3E564(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_1C3E564(&EquipTargetInfo_TypeInfo);
    sub_1C3E564(&ImageLimitCount_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C572D1 = 1;
  }
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  Instance = NpcFollowerMaster__GetEntityArray(this, questId, questPhase, v10);
  if ( !Instance )
    goto LABEL_29;
  max_length = Instance->max_length;
  v12 = Instance;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
LABEL_30:
        sub_1C3E7C8(Instance, v6);
      v14 = v12->m_Items[v13];
      if ( !v14 || !MasterData_object )
        break;
      Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              v14->fields.leaderSvtId,
                                              (const MethodInfo_33B54B4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( Instance )
      {
        v15 = (NpcServantFollowerEntity_o *)Instance;
        id = v14->fields.id;
        v17 = HIDWORD(Instance->m_Items[1]);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        DispLimitCount = ImageLimitCount__GetDispLimitCount(v17, 0);
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v14, DispLimitCount, v19);
        flag = v14->fields.flag;
        v22 = DispLimitCnt;
        v23 = (flag >> 1) & 1;
        v24 = (flag >> 2) & 1;
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v14, v25);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v15,
                         id,
                         questId,
                         questPhase,
                         v22,
                         v23,
                         v24,
                         ImageSvtId,
                         v42);
        Instance = (NpcFollowerEntity_array *)NpcFollowerEntity__GetEventDeckIndex(v14, v28);
        if ( !FollowerInfo )
          break;
        FollowerInfo->fields.npcInitIdx = (int)Instance;
        svtEquipIds = v14->fields.svtEquipIds;
        if ( !svtEquipIds )
          break;
        v32 = svtEquipIds->max_length;
        if ( v32 )
        {
          if ( !(_DWORD)v32 )
            goto LABEL_30;
          if ( !v8 )
            break;
          Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
                                                  svtEquipIds->m_Items[0],
                                                  (const MethodInfo_33B54B4 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Instance )
          {
            max_length_high = HIDWORD(Instance->max_length);
            v33 = (int32_t)Instance->m_Items[0];
            v35 = Instance->max_length;
            v36 = (EquipTargetInfo_o *)sub_1C3E7B0(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_41759588(v36, v35, v33, max_length_high, 1, 0);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v36, 0);
          }
        }
        if ( !v9 )
          break;
        items = v9->fields._items;
        v38 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)FollowerInfo,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v40[4] = (Il2CppClass *)FollowerInfo;
          sub_1C3E508((CGThumbnailListItem_o *)(v40 + 4), (int32_t)FollowerInfo, v29, v30);
        }
      }
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C3E7C0(Instance, v6);
  }
LABEL_27:
  if ( !v9 )
    goto LABEL_29;
  return (FollowerInfo_array *)System_Collections_Generic_List_object___ToArray(
                                 v9,
                                 (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool NpcFollowerMaster__TryGetEntity(
        NpcFollowerMaster_o *this,
        NpcFollowerEntity_o **entity,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C572CE & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
    byte_4C572CE = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void NpcFollowerMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C572D4 & 1) == 0 )
  {
    sub_1C3E564(&NpcFollowerMaster___c_TypeInfo);
    byte_4C572D4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(NpcFollowerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  NpcFollowerMaster___c_TypeInfo->static_fields->__9 = (struct NpcFollowerMaster___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)NpcFollowerMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void NpcFollowerMaster___c___ctor(NpcFollowerMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t NpcFollowerMaster___c___GetEntityArray_b__3_0(
        NpcFollowerMaster___c_o *this,
        NpcFollowerEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C3E7C0(this, 0);
  return e->fields.priority;
}


void NpcFollowerMaster___c__DisplayClass6_0___ctor(
        NpcFollowerMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool NpcFollowerMaster___c__DisplayClass6_0___GetEntity_b__0(
        NpcFollowerMaster___c__DisplayClass6_0_o *this,
        NpcFollowerEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}