void __fastcall NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B3757E & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__, method);
    byte_4B3757E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    95,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
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

  if ( (byte_4B3757C & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__, id);
    byte_4B3757C = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31D2248 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  NpcFollowerMaster___c_c *v43; // x0
  System_Func_object__int__o *_9__3_0; // x19
  Il2CppObject *v45; // x20
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B3757F & 1) == 0 )
  {
    sub_1BD3458(&Method_BasicHelper_StableSort_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1BD3458(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___, v9);
    sub_1BD3458(&System_Func_NpcFollowerEntity__int__TypeInfo, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__, v13);
    sub_1BD3458(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo, v14);
    sub_1BD3458(&NetworkManager_TypeInfo, v15);
    sub_1BD3458(&NpcFollowerEntity_TypeInfo, v16);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BD3458(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, v18);
    sub_1BD3458(&NpcFollowerMaster___c_TypeInfo, v19);
    byte_4B3757F = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_NpcFollowerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v24 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                            (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                v40 = Method_System_Collections_Generic_List_NpcFollowerEntity__Add__;
                ++v23->fields._version;
                if ( !items )
                  break;
                size = v23->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v23,
                    v29,
                    *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                }
                else
                {
                  v42 = &items->obj.klass + size;
                  v23->fields._size = size + 1;
                  v42[4] = (Il2CppClass *)v29;
                  sub_1BD33FC((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v29, v33, v34, v35, v36, v37, v38);
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
    sub_1BD36B4(Instance, v21);
  }
LABEL_29:
  v43 = NpcFollowerMaster___c_TypeInfo;
  if ( !NpcFollowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo);
    v43 = NpcFollowerMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v43->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = NpcFollowerMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v43->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_NpcFollowerEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v45, Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, 0LL);
    static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v47, v48, v49, v50, v51, v52);
  }
  Instance = (int64_t)BasicHelper__StableSort_object_(
                        (System_Collections_Generic_List_T__o *)v23,
                        (System_Func_T__int__o *)_9__3_0,
                        1,
                        (const MethodInfo_2F212D4 *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !Instance )
    goto LABEL_37;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity_40237736(
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

  if ( (byte_4B37582 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__, v10);
    sub_1BD3458(&System_Predicate_NpcFollowerEntity__TypeInfo, v11);
    sub_1BD3458(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__, v12);
    sub_1BD3458(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo, v13);
    byte_4B37582 = 1;
  }
  v14 = sub_1BD36A4(NpcFollowerMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = questId,
        *(_DWORD *)(v14 + 20) = questPhase,
        *(_QWORD *)(v14 + 24) = leaderSvtId,
        v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.list,
                                                                     (const MethodInfo_2F3F974 *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___),
        v18 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                             v17,
                                                             (const MethodInfo_2F6EB10 *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___),
        v19 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_NpcFollowerEntity__TypeInfo),
        System_Predicate_object____ctor(
          v19,
          (Il2CppObject *)v14,
          Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
          0LL),
        !v18) )
  {
    sub_1BD36B4(v15, v16);
  }
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_object___Find(
                                  v18,
                                  (System_Predicate_T__o *)v19,
                                  (const MethodInfo_35C13F8 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
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
  struct System_Int64_array *v29; // x8
  Il2CppObject *v30; // x0
  int32_t klass; // w20
  int32_t monitor_high; // w23
  int32_t monitor; // w22
  EquipTargetInfo_o *v34; // x19
  const MethodInfo *v36; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B37581 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_1BD3458(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v10);
    sub_1BD3458(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v11);
    sub_1BD3458(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v12);
    sub_1BD3458(&EquipTargetInfo_TypeInfo, v13);
    sub_1BD3458(&ImageLimitCount_TypeInfo, v14);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B37581 = 1;
  }
  entity = 0LL;
  v16 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v17 = 0LL;
  if ( v16 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !Instance )
      goto LABEL_24;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 entity->fields.leaderSvtId,
                 (const MethodInfo_31D209C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
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
      Instance = NpcServantFollowerEntity__getFollowerInfo(v17, id, questId, questPhase, v25, v26, 0, ImageSvtId, v36);
      if ( !entity )
        goto LABEL_24;
      svtEquipIds = entity->fields.svtEquipIds;
      if ( !svtEquipIds )
        goto LABEL_24;
      v17 = (NpcServantFollowerEntity_o *)Instance;
      if ( *(_QWORD *)&svtEquipIds->max_length )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_24;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_24;
        v29 = entity->fields.svtEquipIds;
        if ( !v29 )
          goto LABEL_24;
        if ( !v29->max_length )
          sub_1BD36BC(Instance, v19);
        if ( !Instance )
          goto LABEL_24;
        v30 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v29->m_Items[0],
                (const MethodInfo_31D209C *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v30 )
        {
          monitor_high = HIDWORD(v30[1].monitor);
          klass = (int32_t)v30[2].klass;
          monitor = (int32_t)v30[1].monitor;
          v34 = (EquipTargetInfo_o *)sub_1BD36A4(EquipTargetInfo_TypeInfo);
          EquipTargetInfo___ctor_39674340(v34, monitor, klass, monitor_high, 1, 0LL);
          if ( v17 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v17, v34, 0LL);
            return (FollowerInfo_o *)v17;
          }
LABEL_24:
          sub_1BD36B4(Instance, v19);
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
  int max_length; // w8
  NpcFollowerEntity_array *v22; // x24
  unsigned int v23; // w20
  NpcFollowerEntity_o *v24; // x26
  NpcServantFollowerEntity_o *v25; // x25
  int64_t id; // x27
  int32_t v27; // w28
  int32_t DispLimitCount; // w0
  const MethodInfo *v29; // x2
  int32_t DispLimitCnt; // w0
  unsigned int flag; // w8
  int32_t v32; // w28
  int v33; // w29
  int v34; // w19
  const MethodInfo *v35; // x1
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  const MethodInfo *v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v46; // x9
  int32_t v47; // w19
  int32_t v48; // w27
  int32_t v49; // w26
  EquipTargetInfo_o *v50; // x28
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  const MethodInfo *v56; // [xsp+0h] [xbp-70h]

  if ( (byte_4B37580 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_1BD3458(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v5);
    sub_1BD3458(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v6);
    sub_1BD3458(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v7);
    sub_1BD3458(&EquipTargetInfo_TypeInfo, v8);
    sub_1BD3458(&ImageLimitCount_TypeInfo, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v12);
    sub_1BD3458(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v13);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B37580 = 1;
  }
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v18 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_FollowerInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  Instance = NpcFollowerMaster__GetEntityArray(this, questId, questPhase, v20);
  if ( !Instance )
    goto LABEL_29;
  max_length = Instance->max_length;
  v22 = Instance;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= max_length )
LABEL_30:
        sub_1BD36BC(Instance, v16);
      v24 = v22->m_Items[v23];
      if ( !v24 || !MasterData_object )
        break;
      Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              v24->fields.leaderSvtId,
                                              (const MethodInfo_31D209C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( Instance )
      {
        v25 = (NpcServantFollowerEntity_o *)Instance;
        id = v24->fields.id;
        v27 = HIDWORD(Instance->m_Items[1]);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        DispLimitCount = ImageLimitCount__GetDispLimitCount(v27, 0LL);
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v24, DispLimitCount, v29);
        flag = v24->fields.flag;
        v32 = DispLimitCnt;
        v33 = (flag >> 1) & 1;
        v34 = (flag >> 2) & 1;
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v24, v35);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v25,
                         id,
                         questId,
                         questPhase,
                         v32,
                         v33,
                         v34,
                         ImageSvtId,
                         v56);
        Instance = (NpcFollowerEntity_array *)NpcFollowerEntity__GetEventDeckIndex(v24, v38);
        if ( !FollowerInfo )
          break;
        FollowerInfo->fields.npcInitIdx = (int)Instance;
        svtEquipIds = v24->fields.svtEquipIds;
        if ( !svtEquipIds )
          break;
        v46 = *(_QWORD *)&svtEquipIds->max_length;
        if ( v46 )
        {
          if ( !(_DWORD)v46 )
            goto LABEL_30;
          if ( !v18 )
            break;
          Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                                                  svtEquipIds->m_Items[0],
                                                  (const MethodInfo_31D209C *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Instance )
          {
            v48 = *(&Instance->max_length + 1);
            v47 = (int32_t)Instance->m_Items[0];
            v49 = Instance->max_length;
            v50 = (EquipTargetInfo_o *)sub_1BD36A4(EquipTargetInfo_TypeInfo);
            EquipTargetInfo___ctor_39674340(v50, v49, v47, v48, 1, 0LL);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v50, 0LL);
          }
        }
        if ( !v19 )
          break;
        items = v19->fields._items;
        v52 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v19->fields._version;
        if ( !items )
          break;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            (Il2CppObject *)FollowerInfo,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v54[4] = (Il2CppClass *)FollowerInfo;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)FollowerInfo, v39, v40, v41, v42, v43, v44);
        }
      }
      max_length = v22->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1BD36B4(Instance, v16);
  }
LABEL_27:
  if ( !v19 )
    goto LABEL_29;
  return (FollowerInfo_array *)System_Collections_Generic_List_object___ToArray(
                                 v19,
                                 (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
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

  if ( (byte_4B3757D & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__, entity);
    byte_4B3757D = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void __fastcall NpcFollowerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B37583 & 1) == 0 )
  {
    sub_1BD3458(&NpcFollowerMaster___c_TypeInfo, v1);
    byte_4B37583 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(NpcFollowerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  NpcFollowerMaster___c_TypeInfo->static_fields->__9 = (struct NpcFollowerMaster___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)NpcFollowerMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
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
    sub_1BD36B4(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}