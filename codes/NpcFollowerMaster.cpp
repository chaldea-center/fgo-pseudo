void NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970E0B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
    byte_5970E0B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    99,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
}


NpcFollowerEntity_o *NpcFollowerMaster__GetEntity(
        NpcFollowerMaster_o *this,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970E09 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
    byte_5970E09 = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, 0);
  return (NpcFollowerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_3F157EC *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
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
  __int64 v11; // x1
  __int64 v12; // x24
  int32_t Count; // w0
  int32_t v14; // w25
  int32_t v15; // w26
  const MethodInfo *v16; // x5
  Il2CppObject *v17; // x27
  __int64 v18; // x8
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  NpcFollowerMaster___c_c *v29; // x0
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__3_0; // x19
  Il2CppObject *v32; // x20
  struct NpcFollowerMaster___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5970E0C & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_StableSort_NpcFollowerEntity___);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_NpcFollowerEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_NpcFollowerEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
    sub_2213A60(&System_Func_NpcFollowerEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__);
    sub_2213A60(&NpcFollowerMaster___c_TypeInfo);
    byte_5970E0C = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_34;
  v12 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_NpcFollowerEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v15,
                            (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_NpcFollowerEntity__get_Item__);
      if ( Instance )
      {
        v17 = (Il2CppObject *)Instance;
        if ( *(_QWORD *)(Instance + 72) <= (v12 & ~(v12 >> 63)) )
        {
          v18 = *(_QWORD *)(Instance + 80);
          if ( (v18 < 1 || v18 >= v12)
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
                         v16);
            if ( (Instance & 1) == 0 )
              goto LABEL_37;
            Instance = (int64_t)entity;
            if ( !entity )
              break;
            Instance = NpcFollowerReleaseEntity__IsEnable(entity, v8);
            if ( (Instance & 1) != 0 )
            {
LABEL_37:
              if ( !v10 )
                break;
              items = v10->fields._items;
              v26 = Method_System_Collections_Generic_List_NpcFollowerEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                break;
              size = v10->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v17,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                v28 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v28[4] = (Il2CppClass *)v17;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v17, v19, v20, v21, v22, v23, v24);
              }
            }
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_26;
    }
LABEL_34:
    sub_2213CDC(Instance, v8);
  }
LABEL_26:
  v29 = NpcFollowerMaster___c_TypeInfo;
  if ( !*(&NpcFollowerMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo, v8);
    v29 = NpcFollowerMaster___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__3_0 = (System_Func_object__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v29->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v29, v8);
      static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_NpcFollowerEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v32, Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, 0);
    v33 = NpcFollowerMaster___c_TypeInfo->static_fields;
    v33->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->__9__3_0, (int32_t)_9__3_0, v34, v35, v36, v37, v38, v39);
  }
  Instance = (int64_t)BasicHelper__StableSort_object_(
                        (System_Collections_Generic_List_T__o *)v10,
                        (System_Func_T__int__o *)_9__3_0,
                        1,
                        (const MethodInfo_3815EE8 *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !Instance )
    goto LABEL_34;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


NpcFollowerEntity_o *NpcFollowerMaster__GetEntity_49447928(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t leaderSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_IEnumerable_o *list; // x0
  const MethodInfo_3868AB0 *v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  System_Predicate_object__o *v16; // x20

  if ( (byte_5970E0F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
    sub_2213A60(&System_Predicate_NpcFollowerEntity__TypeInfo);
    sub_2213A60(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__);
    sub_2213A60(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
    byte_5970E0F = 1;
  }
  v9 = sub_2213CCC(NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_6;
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v13 = (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___;
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = questPhase;
  *(_QWORD *)(v9 + 24) = leaderSvtId;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(list, v13);
  v15 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v14,
                                                       (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___);
  v16 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_NpcFollowerEntity__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
    0);
  if ( !v15 )
LABEL_6:
    sub_2213CDC(v10, v11);
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_object___Find(
                                  v15,
                                  (System_Predicate_T__o *)v16,
                                  (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
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
  __int64 v13; // x1
  NpcFollowerEntity_o *v14; // x23
  int64_t v15; // x22
  int32_t v16; // w24
  int32_t DispLimitCount; // w0
  int32_t v18; // w23
  char v19; // w24
  int32_t ImageSvtId; // w0
  __int64 v21; // x8
  __int64 v22; // x8
  Il2CppObject *v23; // x0
  int32_t monitor; // w22
  int32_t klass; // w20
  int32_t monitor_high; // w23
  EquipTargetInfo_o *v27; // x19
  const MethodInfo *v29; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5970E0E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_2213A60(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_2213A60(&EquipTargetInfo_TypeInfo);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970E0E = 1;
  }
  entity = 0;
  v10 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v11 = 0;
  if ( v10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !Instance )
      goto LABEL_25;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 *(__int64 *)((char *)&qword_28 + (_QWORD)entity),
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    v11 = (NpcServantFollowerEntity_o *)Instance;
    if ( Instance )
    {
      v14 = entity;
      if ( !entity )
        goto LABEL_25;
      v15 = *(_QWORD *)((char *)&word_10 + (_QWORD)entity);
      v16 = *((_DWORD *)Instance + 11);
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v13);
      DispLimitCount = ImageLimitCount__GetDispLimitCount(v16, 0);
      Instance = (void *)NpcFollowerEntity__GetDispLimitCnt(v14, DispLimitCount, 0);
      if ( !entity )
        goto LABEL_25;
      v18 = (int)Instance;
      Instance = (void *)NpcFollowerEntity__IsMyServantOrNpc(entity, 0);
      if ( !entity )
        goto LABEL_25;
      v19 = (char)Instance;
      ImageSvtId = NpcFollowerEntity__GetImageSvtId(entity, 0);
      Instance = NpcServantFollowerEntity__getFollowerInfo(
                   v11,
                   v15,
                   questId,
                   questPhase,
                   v18,
                   v19 & 1,
                   0,
                   ImageSvtId,
                   v29);
      if ( !entity )
        goto LABEL_25;
      v21 = *(_QWORD *)((char *)&dword_30 + (_QWORD)entity);
      if ( !v21 )
        goto LABEL_25;
      v11 = (NpcServantFollowerEntity_o *)Instance;
      if ( *(_QWORD *)(v21 + 24) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_25;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_25;
        v22 = *(_QWORD *)((char *)&dword_30 + (_QWORD)entity);
        if ( !v22 )
          goto LABEL_25;
        if ( !*(_DWORD *)(v22 + 24) )
          sub_2213CE4(Instance);
        if ( !Instance )
          goto LABEL_25;
        v23 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                *(_QWORD *)(v22 + 32),
                (const MethodInfo_3F13190 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v23 )
        {
          monitor = (int32_t)v23[1].monitor;
          monitor_high = HIDWORD(v23[1].monitor);
          klass = (int32_t)v23[2].klass;
          v27 = (EquipTargetInfo_o *)sub_2213CCC(EquipTargetInfo_TypeInfo);
          EquipTargetInfo___ctor_48715996(v27, monitor, klass, monitor_high, 1, 0);
          if ( v11 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v11, v27, 0);
            return (FollowerInfo_o *)v11;
          }
LABEL_25:
          sub_2213CDC(Instance, v13);
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
  Il2CppObject *v8; // x22
  System_Collections_Generic_List_object__o *v9; // x23
  const MethodInfo *v10; // x3
  int max_length; // w8
  NpcFollowerEntity_array *v12; // x24
  unsigned int v13; // w20
  NpcFollowerEntity_o *v14; // x26
  NpcServantFollowerEntity_o *v15; // x25
  int64_t id; // x27
  int32_t v17; // w28
  int32_t DispLimitCount; // w0
  int32_t DispLimitCnt; // w28
  bool IsMyServantOrNpc; // w29
  bool IsFixedNpc; // w19
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Int64_array *svtEquipIds; // x8
  il2cpp_array_size_t v31; // x9
  int32_t v32; // w26
  int32_t v33; // w19
  int32_t max_length_high; // w27
  EquipTargetInfo_o *v35; // x28
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  const MethodInfo *v41; // [xsp+0h] [xbp-70h]

  if ( (byte_5970E0D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_NpcServantEquipMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_2213A60(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    sub_2213A60(&EquipTargetInfo_TypeInfo);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970E0D = 1;
  }
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
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
        sub_2213CE4(Instance);
      v14 = v12->m_Items[v13];
      if ( !v14 || !MasterData_object )
        break;
      Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              v14->fields.leaderSvtId,
                                              (const MethodInfo_3F13190 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( Instance )
      {
        v15 = (NpcServantFollowerEntity_o *)Instance;
        id = v14->fields.id;
        v17 = HIDWORD(Instance->m_Items[1]);
        if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v6);
        DispLimitCount = ImageLimitCount__GetDispLimitCount(v17, 0);
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v14, DispLimitCount, 0);
        IsMyServantOrNpc = NpcFollowerEntity__IsMyServantOrNpc(v14, 0);
        IsFixedNpc = NpcFollowerEntity__IsFixedNpc(v14, 0);
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v14, 0);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v15,
                         id,
                         questId,
                         questPhase,
                         DispLimitCnt,
                         IsMyServantOrNpc,
                         IsFixedNpc,
                         ImageSvtId,
                         v41);
        Instance = (NpcFollowerEntity_array *)NpcFollowerEntity__GetEventDeckIndex(v14, 0);
        if ( !FollowerInfo )
          break;
        svtEquipIds = v14->fields.svtEquipIds;
        FollowerInfo->fields.npcInitIdx = (int)Instance;
        if ( !svtEquipIds )
          break;
        v31 = svtEquipIds->max_length;
        if ( v31 )
        {
          if ( !(_DWORD)v31 )
            goto LABEL_30;
          if ( !v8 )
            break;
          Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
                                                  svtEquipIds->m_Items[0],
                                                  (const MethodInfo_3F13190 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Instance )
          {
            v32 = Instance->max_length;
            max_length_high = HIDWORD(Instance->max_length);
            v33 = (int32_t)Instance->m_Items[0];
            v35 = (EquipTargetInfo_o *)sub_2213CCC(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_48715996(v35, v32, v33, max_length_high, 1, 0);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v35, 0);
          }
        }
        if ( !v9 )
          break;
        items = v9->fields._items;
        v37 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)FollowerInfo,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v39[4] = (Il2CppClass *)FollowerInfo;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v39 + 4),
            (int32_t)FollowerInfo,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
        }
      }
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_2213CDC(Instance, v6);
  }
LABEL_27:
  if ( !v9 )
    goto LABEL_29;
  return (FollowerInfo_array *)System_Collections_Generic_List_object___ToArray(
                                 v9,
                                 (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
}


bool NpcFollowerMaster__TryGetEntity(
        NpcFollowerMaster_o *this,
        NpcFollowerEntity_o **entity,
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970E0A & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
    byte_5970E0A = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void NpcFollowerMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970E10 & 1) == 0 )
  {
    sub_2213A60(&NpcFollowerMaster___c_TypeInfo);
    byte_5970E10 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(NpcFollowerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  NpcFollowerMaster___c_TypeInfo->static_fields->__9 = (struct NpcFollowerMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)NpcFollowerMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}