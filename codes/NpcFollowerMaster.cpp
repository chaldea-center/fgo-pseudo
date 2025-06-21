void __fastcall NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CA50 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__, method);
    byte_4B1CA50 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    99,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
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

  if ( (byte_4B1CA4E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__, id);
    byte_4B1CA4E = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_32CC8B8 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_array *__fastcall NpcFollowerMaster__GetEntityArray(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int64_t Instance; // x0
  const MethodInfo *v20; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v22; // x22
  int64_t v23; // x24
  int32_t Count; // w0
  int32_t v25; // w25
  int32_t v26; // w26
  const MethodInfo *v27; // x5
  __int64 v28; // x8
  Il2CppObject *v29; // x27
  __int64 v30; // x8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  NpcFollowerMaster___c_c *v37; // x0
  System_Func_object__int__o *_9__3_0; // x19
  Il2CppObject *v39; // x20
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1CA51 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_StableSort_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_NpcFollowerEntity__get_Count__, v7);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_NpcFollowerEntity__get_Item__, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___, v9);
    sub_1BCAFF8(&System_Func_NpcFollowerEntity__int__TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo, v14);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BCAFF8(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, v17);
    sub_1BCAFF8(&NpcFollowerMaster___c_TypeInfo, v18);
    byte_4B1CA51 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_35;
  v23 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_NpcFollowerEntity__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v26,
                            (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_NpcFollowerEntity__get_Item__);
      if ( Instance )
      {
        v28 = *(_QWORD *)(Instance + 72);
        v29 = (Il2CppObject *)Instance;
        if ( v28 < 1 || v23 >= v28 )
        {
          v30 = *(_QWORD *)(Instance + 80);
          if ( (v30 < 1 || v30 >= v23)
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
                         v27);
            if ( (Instance & 1) == 0 )
              goto LABEL_38;
            Instance = (int64_t)entity;
            if ( !entity )
              break;
            Instance = NpcFollowerReleaseEntity__IsEnable(entity, v20);
            if ( (Instance & 1) != 0 )
            {
LABEL_38:
              if ( !v22 )
                break;
              items = v22->fields._items;
              v34 = Method_System_Collections_Generic_List_NpcFollowerEntity__Add__;
              ++v22->fields._version;
              if ( !items )
                break;
              size = v22->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v22,
                  v29,
                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                v36 = &items->obj.klass + size;
                v22->fields._size = size + 1;
                v36[4] = (Il2CppClass *)v29;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v29, v31, v32);
              }
            }
          }
        }
      }
      if ( v25 == ++v26 )
        goto LABEL_27;
    }
LABEL_35:
    sub_1BCB254(Instance, v20);
  }
LABEL_27:
  v37 = NpcFollowerMaster___c_TypeInfo;
  if ( !NpcFollowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo);
    v37 = NpcFollowerMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v37->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = NpcFollowerMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v37->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_NpcFollowerEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v39, Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, 0LL);
    static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v41, v42);
  }
  Instance = (int64_t)BasicHelper__StableSort_object_(
                        (System_Collections_Generic_List_T__o *)v22,
                        (System_Func_T__int__o *)_9__3_0,
                        1,
                        (const MethodInfo_300A1A4 *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !Instance )
    goto LABEL_35;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity_41573412(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t leaderSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x23
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x19
  System_Predicate_object__o *v19; // x20

  if ( (byte_4B1CA54 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__, v10);
    sub_1BCAFF8(&System_Predicate_NpcFollowerEntity__TypeInfo, v11);
    sub_1BCAFF8(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__, v12);
    sub_1BCAFF8(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo, v13);
    byte_4B1CA54 = 1;
  }
  v14 = sub_1BCB244(NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = questId,
        *(_DWORD *)(v14 + 20) = questPhase,
        *(_QWORD *)(v14 + 24) = leaderSvtId,
        v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.list,
                                                                     (const MethodInfo_302917C *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___),
        v18 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                             v17,
                                                             (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___),
        v19 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_NpcFollowerEntity__TypeInfo),
        System_Predicate_object____ctor(
          v19,
          (Il2CppObject *)v14,
          Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
          0LL),
        !v18) )
  {
    sub_1BCB254(v15, v16);
  }
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_object___Find(
                                  v18,
                                  (System_Predicate_T__o *)v19,
                                  (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
FollowerInfo_o *__fastcall NpcFollowerMaster__GetFollower(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t followerId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  bool v16; // w0
  NpcServantFollowerEntity_o *v17; // x21
  void *Instance; // x0
  const MethodInfo *v19; // x1
  NpcFollowerEntity_o *v20; // x23
  int64_t id; // x22
  int32_t v22; // w24
  int32_t DispLimitCount; // w0
  const MethodInfo *v24; // x2
  int32_t v25; // w23
  _BOOL4 v26; // w24
  int32_t ImageSvtId; // w0
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v29; // x2
  struct System_Int64_array *v30; // x8
  Il2CppObject *v31; // x0
  int32_t klass; // w20
  int32_t monitor_high; // w23
  int32_t monitor; // w22
  EquipTargetInfo_o *v35; // x19
  const MethodInfo *v37; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1CA53 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v10);
    sub_1BCAFF8(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v11);
    sub_1BCAFF8(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v12);
    sub_1BCAFF8(&EquipTargetInfo_TypeInfo, v13);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B1CA53 = 1;
  }
  entity = 0LL;
  v16 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v17 = 0LL;
  if ( v16 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !Instance )
      goto LABEL_24;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 entity->fields.leaderSvtId,
                 (const MethodInfo_32CA35C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    v17 = (NpcServantFollowerEntity_o *)Instance;
    if ( Instance )
    {
      v20 = entity;
      if ( !entity )
        goto LABEL_24;
      id = entity->fields.id;
      v22 = *((_DWORD *)Instance + 11);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      DispLimitCount = ImageLimitCount__GetDispLimitCount(v22, 0LL);
      Instance = (void *)NpcFollowerEntity__GetDispLimitCnt(v20, DispLimitCount, v24);
      if ( !entity )
        goto LABEL_24;
      v25 = (int)Instance;
      v26 = ((unsigned int)entity->fields.flag >> 1) & 1;
      ImageSvtId = NpcFollowerEntity__GetImageSvtId(entity, v19);
      Instance = NpcServantFollowerEntity__getFollowerInfo(v17, id, questId, questPhase, v25, v26, 0, ImageSvtId, v37);
      if ( !entity )
        goto LABEL_24;
      svtEquipIds = entity->fields.svtEquipIds;
      if ( !svtEquipIds )
        goto LABEL_24;
      v17 = (NpcServantFollowerEntity_o *)Instance;
      if ( *(_QWORD *)&svtEquipIds->max_length )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_24;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_24;
        v30 = entity->fields.svtEquipIds;
        if ( !v30 )
          goto LABEL_24;
        if ( !v30->max_length )
          sub_1BCB25C(Instance, v19, v29);
        if ( !Instance )
          goto LABEL_24;
        v31 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v30->m_Items[0],
                (const MethodInfo_32CA35C *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v31 )
        {
          monitor_high = HIDWORD(v31[1].monitor);
          klass = (int32_t)v31[2].klass;
          monitor = (int32_t)v31[1].monitor;
          v35 = (EquipTargetInfo_o *)sub_1BCB244(EquipTargetInfo_TypeInfo);
          EquipTargetInfo___ctor_40884188(v35, monitor, klass, monitor_high, 1, 0LL);
          if ( v17 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v17, v35, 0LL);
            return (FollowerInfo_o *)v17;
          }
LABEL_24:
          sub_1BCB254(Instance, v19);
        }
      }
    }
  }
  return (FollowerInfo_o *)v17;
}


// local variable allocation has failed, the output may be wrong!
FollowerInfo_array *__fastcall NpcFollowerMaster__GetQuestFollowerList(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  NpcFollowerEntity_array *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v18; // x23
  System_Collections_Generic_List_object__o *v19; // x22
  const MethodInfo *v20; // x3
  __int64 v21; // x2
  int max_length; // w8
  NpcFollowerEntity_array *v23; // x24
  unsigned int v24; // w20
  NpcFollowerEntity_o *v25; // x26
  NpcServantFollowerEntity_o *v26; // x25
  int64_t id; // x27
  int32_t v28; // w28
  int32_t DispLimitCount; // w0
  const MethodInfo *v30; // x2
  int32_t DispLimitCnt; // w0
  unsigned int flag; // w8
  int32_t v33; // w28
  int v34; // w29
  int v35; // w19
  const MethodInfo *v36; // x1
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x3
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v42; // x9
  int32_t v43; // w19
  int32_t v44; // w27
  int32_t v45; // w26
  EquipTargetInfo_o *v46; // x28
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  const MethodInfo *v52; // [xsp+0h] [xbp-70h]

  if ( (byte_4B1CA52 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v6);
    sub_1BCAFF8(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v7);
    sub_1BCAFF8(&EquipTargetInfo_TypeInfo, v8);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B1CA52 = 1;
  }
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v18 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  Instance = NpcFollowerMaster__GetEntityArray(this, questId, questPhase, v20);
  if ( !Instance )
    goto LABEL_29;
  max_length = Instance->max_length;
  v23 = Instance;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
LABEL_30:
        sub_1BCB25C(Instance, v16, v21);
      v25 = v23->m_Items[v24];
      if ( !v25 || !MasterData_object )
        break;
      Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              v25->fields.leaderSvtId,
                                              (const MethodInfo_32CA35C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( Instance )
      {
        v26 = (NpcServantFollowerEntity_o *)Instance;
        id = v25->fields.id;
        v28 = HIDWORD(Instance->m_Items[1]);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        DispLimitCount = ImageLimitCount__GetDispLimitCount(v28, 0LL);
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v25, DispLimitCount, v30);
        flag = v25->fields.flag;
        v33 = DispLimitCnt;
        v34 = (flag >> 1) & 1;
        v35 = (flag >> 2) & 1;
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v25, v36);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v26,
                         id,
                         questId,
                         questPhase,
                         v33,
                         v34,
                         v35,
                         ImageSvtId,
                         v52);
        Instance = (NpcFollowerEntity_array *)NpcFollowerEntity__GetEventDeckIndex(v25, v39);
        if ( !FollowerInfo )
          break;
        FollowerInfo->fields.npcInitIdx = (int)Instance;
        svtEquipIds = v25->fields.svtEquipIds;
        if ( !svtEquipIds )
          break;
        v42 = *(_QWORD *)&svtEquipIds->max_length;
        if ( v42 )
        {
          if ( !(_DWORD)v42 )
            goto LABEL_30;
          if ( !v18 )
            break;
          Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                                                  svtEquipIds->m_Items[0],
                                                  (const MethodInfo_32CA35C *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Instance )
          {
            v44 = *(&Instance->max_length + 1);
            v43 = (int32_t)Instance->m_Items[0];
            v45 = Instance->max_length;
            v46 = (EquipTargetInfo_o *)sub_1BCB244(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_40884188(v46, v45, v43, v44, 1, 0LL);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v46, 0LL);
          }
        }
        if ( !v19 )
          break;
        items = v19->fields._items;
        v48 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v19->fields._version;
        if ( !items )
          break;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            (Il2CppObject *)FollowerInfo,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v50[4] = (Il2CppClass *)FollowerInfo;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v50 + 4), (int32_t)FollowerInfo, v21, v40);
        }
      }
      max_length = v23->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1BCB254(Instance, v16);
  }
LABEL_27:
  if ( !v19 )
    goto LABEL_29;
  return (FollowerInfo_array *)System_Collections_Generic_List_object___ToArray(
                                 v19,
                                 (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
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

  if ( (byte_4B1CA4F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__, entity);
    byte_4B1CA4F = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void __fastcall NpcFollowerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1CA55 & 1) == 0 )
  {
    sub_1BCAFF8(&NpcFollowerMaster___c_TypeInfo, v1);
    byte_4B1CA55 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(NpcFollowerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  NpcFollowerMaster___c_TypeInfo->static_fields->__9 = (struct NpcFollowerMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)NpcFollowerMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}