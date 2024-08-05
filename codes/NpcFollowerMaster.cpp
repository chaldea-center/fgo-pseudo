void __fastcall NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE8C9 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__, method);
    byte_49FE8C9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    95,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
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

  if ( (byte_49FE8C7 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__, id);
    byte_49FE8C7 = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_30D64D8 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
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
  __int64 v19; // x1
  int64_t Instance; // x0
  const MethodInfo *v21; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v23; // x22
  int64_t v24; // x24
  int32_t Count; // w0
  int32_t v26; // w25
  int32_t v27; // w26
  const MethodInfo *v28; // x5
  Il2CppObject *v29; // x27
  __int64 methodPtr_low; // x10
  __int64 v31; // x8
  __int64 v32; // x8
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  NpcFollowerMaster___c_c *v39; // x0
  System_Func_object__int__o *_9__3_0; // x19
  Il2CppObject *v41; // x20
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FE8CA & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_StableSort_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B64870(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___, v9);
    sub_1B64870(&System_Func_NpcFollowerEntity__int__TypeInfo, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__, v13);
    sub_1B64870(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo, v14);
    sub_1B64870(&NetworkManager_TypeInfo, v15);
    sub_1B64870(&NpcFollowerEntity_TypeInfo, v16);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B64870(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, v18);
    sub_1B64870(&NpcFollowerMaster___c_TypeInfo, v19);
    byte_49FE8CA = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v24 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v27,
                            (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v29 = (Il2CppObject *)Instance;
        methodPtr_low = LOBYTE(NpcFollowerEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(NpcFollowerEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == NpcFollowerEntity_TypeInfo )
        {
          v31 = *(_QWORD *)(Instance + 72);
          if ( v31 < 1 || v24 >= v31 )
          {
            v32 = *(_QWORD *)(Instance + 80);
            if ( (v32 < 1 || v32 >= v24)
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
                           v28);
              if ( (Instance & 1) == 0 )
                goto LABEL_40;
              Instance = (int64_t)entity;
              if ( !entity )
                break;
              Instance = NpcFollowerReleaseEntity__IsEnable(entity, v21);
              if ( (Instance & 1) != 0 )
              {
LABEL_40:
                if ( !v23 )
                  break;
                items = v23->fields._items;
                v36 = Method_System_Collections_Generic_List_NpcFollowerEntity__Add__;
                ++v23->fields._version;
                if ( !items )
                  break;
                size = v23->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v23,
                    v29,
                    *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                }
                else
                {
                  v38 = &items->obj.klass + size;
                  v23->fields._size = size + 1;
                  v38[4] = (Il2CppClass *)v29;
                  sub_1B64814((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v29, v33, v34);
                }
              }
            }
          }
        }
      }
      if ( v26 == ++v27 )
        goto LABEL_29;
    }
LABEL_37:
    sub_1B64ACC(Instance, v21);
  }
LABEL_29:
  v39 = NpcFollowerMaster___c_TypeInfo;
  if ( !NpcFollowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo);
    v39 = NpcFollowerMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v39->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = NpcFollowerMaster___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v39->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_NpcFollowerEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v41, Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, 0LL);
    static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v43, v44);
  }
  Instance = (int64_t)BasicHelper__StableSort_object_(
                        (System_Collections_Generic_List_T__o *)v23,
                        (System_Func_T__int__o *)_9__3_0,
                        1,
                        (const MethodInfo_2E2B59C *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !Instance )
    goto LABEL_37;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity_39113844(
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

  if ( (byte_49FE8CD & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_1B64870(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__, v10);
    sub_1B64870(&System_Predicate_NpcFollowerEntity__TypeInfo, v11);
    sub_1B64870(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__, v12);
    sub_1B64870(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo, v13);
    byte_49FE8CD = 1;
  }
  v14 = sub_1B64ABC(NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = questId,
        *(_DWORD *)(v14 + 20) = questPhase,
        *(_QWORD *)(v14 + 24) = leaderSvtId,
        v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.list,
                                                                     (const MethodInfo_2E4B4AC *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___),
        v18 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                             v17,
                                                             (const MethodInfo_2E772F8 *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___),
        v19 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_NpcFollowerEntity__TypeInfo),
        System_Predicate_object____ctor(
          v19,
          (Il2CppObject *)v14,
          Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
          0LL),
        !v18) )
  {
    sub_1B64ACC(v15, v16);
  }
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_object___Find(
                                  v18,
                                  (System_Predicate_T__o *)v19,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
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
  bool v15; // w0
  Il2CppObject *v16; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  int64_t id; // x22
  int32_t flag; // w25
  int32_t v21; // w23
  int32_t ImageSvtId; // w0
  struct System_Int64_array *svtEquipIds; // x8
  struct System_Int64_array *v24; // x8
  Il2CppObject *v25; // x0
  int32_t klass; // w20
  int32_t monitor_high; // w23
  int32_t monitor; // w22
  EquipTargetInfo_o *v29; // x19
  const MethodInfo *v31; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FE8CC & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_1B64870(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v10);
    sub_1B64870(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v11);
    sub_1B64870(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v12);
    sub_1B64870(&EquipTargetInfo_TypeInfo, v13);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FE8CC = 1;
  }
  entity = 0LL;
  v15 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v16 = 0LL;
  if ( v15 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !Instance )
      goto LABEL_22;
    v16 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            entity->fields.leaderSvtId,
            (const MethodInfo_30D632C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    if ( v16 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_22;
      id = entity->fields.id;
      Instance = (DataManager_o *)NpcFollowerEntity__GetDispLimitCnt(entity, v18);
      if ( !entity )
        goto LABEL_22;
      flag = entity->fields.flag;
      v21 = (int)Instance;
      ImageSvtId = NpcFollowerEntity__GetImageSvtId(entity, v18);
      Instance = (DataManager_o *)NpcServantFollowerEntity__getFollowerInfo(
                                    (NpcServantFollowerEntity_o *)v16,
                                    id,
                                    questId,
                                    questPhase,
                                    v21,
                                    (flag & 2) != 0,
                                    0,
                                    ImageSvtId,
                                    v31);
      if ( !entity )
        goto LABEL_22;
      svtEquipIds = entity->fields.svtEquipIds;
      if ( !svtEquipIds )
        goto LABEL_22;
      v16 = (Il2CppObject *)Instance;
      if ( *(_QWORD *)&svtEquipIds->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_22;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_22;
        v24 = entity->fields.svtEquipIds;
        if ( !v24 )
          goto LABEL_22;
        if ( !v24->max_length )
          sub_1B64AD4(Instance, v18);
        if ( !Instance )
          goto LABEL_22;
        v25 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v24->m_Items[0],
                (const MethodInfo_30D632C *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v25 )
        {
          monitor_high = HIDWORD(v25[1].monitor);
          klass = (int32_t)v25[2].klass;
          monitor = (int32_t)v25[1].monitor;
          v29 = (EquipTargetInfo_o *)sub_1B64ABC(EquipTargetInfo_TypeInfo);
          EquipTargetInfo___ctor_38569972(v29, monitor, klass, monitor_high, 1, 0LL);
          if ( v16 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v16, v29, 0LL);
            return (FollowerInfo_o *)v16;
          }
LABEL_22:
          sub_1B64ACC(Instance, v18);
        }
      }
    }
  }
  return (FollowerInfo_o *)v16;
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
  NpcFollowerEntity_array *Instance; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v17; // x23
  System_Collections_Generic_List_object__o *v18; // x22
  const MethodInfo *v19; // x3
  int max_length; // w8
  NpcFollowerEntity_array *v21; // x24
  unsigned int v22; // w20
  NpcFollowerEntity_o *v23; // x26
  int64_t id; // x27
  NpcServantFollowerEntity_o *v25; // x25
  int32_t DispLimitCnt; // w0
  unsigned int flag; // w8
  int32_t v28; // w28
  int v29; // w29
  int v30; // w19
  const MethodInfo *v31; // x1
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  const MethodInfo *v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v38; // x9
  int32_t v39; // w19
  int32_t v40; // w27
  int32_t v41; // w26
  EquipTargetInfo_o *v42; // x28
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  const MethodInfo *v48; // [xsp+0h] [xbp-70h]

  if ( (byte_49FE8CB & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_1B64870(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v5);
    sub_1B64870(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v6);
    sub_1B64870(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v7);
    sub_1B64870(&EquipTargetInfo_TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FE8CB = 1;
  }
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v17 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  Instance = NpcFollowerMaster__GetEntityArray(this, questId, questPhase, v19);
  if ( !Instance )
    goto LABEL_27;
  max_length = Instance->max_length;
  v21 = Instance;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
LABEL_28:
        sub_1B64AD4(Instance, v15);
      v23 = v21->m_Items[v22];
      if ( !v23 || !MasterData_object )
        break;
      Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              v23->fields.leaderSvtId,
                                              (const MethodInfo_30D632C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( Instance )
      {
        id = v23->fields.id;
        v25 = (NpcServantFollowerEntity_o *)Instance;
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v23, v15);
        flag = v23->fields.flag;
        v28 = DispLimitCnt;
        v29 = (flag >> 1) & 1;
        v30 = (flag >> 2) & 1;
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v23, v31);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v25,
                         id,
                         questId,
                         questPhase,
                         v28,
                         v29,
                         v30,
                         ImageSvtId,
                         v48);
        Instance = (NpcFollowerEntity_array *)NpcFollowerEntity__GetEventDeckIndex(v23, v34);
        if ( !FollowerInfo )
          break;
        FollowerInfo->fields.npcInitIdx = (int)Instance;
        svtEquipIds = v23->fields.svtEquipIds;
        if ( !svtEquipIds )
          break;
        v38 = *(_QWORD *)&svtEquipIds->max_length;
        if ( v38 )
        {
          if ( !(_DWORD)v38 )
            goto LABEL_28;
          if ( !v17 )
            break;
          Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                                  svtEquipIds->m_Items[0],
                                                  (const MethodInfo_30D632C *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Instance )
          {
            v40 = *(&Instance->max_length + 1);
            v39 = (int32_t)Instance->m_Items[0];
            v41 = Instance->max_length;
            v42 = (EquipTargetInfo_o *)sub_1B64ABC(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_38569972(v42, v41, v39, v40, 1, 0LL);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v42, 0LL);
          }
        }
        if ( !v18 )
          break;
        items = v18->fields._items;
        v44 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v18->fields._version;
        if ( !items )
          break;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)FollowerInfo,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v46[4] = (Il2CppClass *)FollowerInfo;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)FollowerInfo, v35, v36);
        }
      }
      max_length = v21->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_25;
    }
LABEL_27:
    sub_1B64ACC(Instance, v15);
  }
LABEL_25:
  if ( !v18 )
    goto LABEL_27;
  return (FollowerInfo_array *)System_Collections_Generic_List_object___ToArray(
                                 v18,
                                 (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
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

  if ( (byte_49FE8C8 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__, entity);
    byte_49FE8C8 = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void __fastcall NpcFollowerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FE8CE & 1) == 0 )
  {
    sub_1B64870(&NpcFollowerMaster___c_TypeInfo, v1);
    byte_49FE8CE = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(NpcFollowerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  NpcFollowerMaster___c_TypeInfo->static_fields->__9 = (struct NpcFollowerMaster___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)NpcFollowerMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B64ACC(this, 0LL);
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
    sub_1B64ACC(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}