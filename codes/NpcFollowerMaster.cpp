void __fastcall NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__, method, v2);
    byte_4B165D2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    95,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
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

  if ( (byte_4B165D0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__,
      id,
      *(_QWORD *)&questId);
    byte_4B165D0 = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31B3198 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_array *__fastcall NpcFollowerMaster__GetEntityArray(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  int64_t Instance; // x0
  const MethodInfo *v34; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x22
  __int64 v40; // x1
  int64_t v41; // x24
  int32_t Count; // w0
  int64_t v43; // x2
  __int64 v44; // x3
  int32_t v45; // w25
  int32_t v46; // w26
  const MethodInfo *v47; // x5
  Il2CppObject *v48; // x27
  __int64 methodPtr_low; // x10
  __int64 v50; // x8
  __int64 v51; // x8
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  NpcFollowerMaster___c_c *v60; // x0
  System_Func_object__int__o *_9__3_0; // x19
  Il2CppObject *v62; // x20
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B165D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_StableSort_NpcFollowerEntity___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___, v11, v12);
    sub_1BCA7E0(&System_Func_NpcFollowerEntity__int__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&NpcFollowerEntity_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, v29, v30);
    sub_1BCA7E0(&NpcFollowerMaster___c_TypeInfo, v31, v32);
    byte_4B165D3 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_NpcFollowerEntity__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v41 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v45 = Count;
    v46 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v46,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = (Il2CppObject *)Instance;
        methodPtr_low = LOBYTE(NpcFollowerEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(NpcFollowerEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == NpcFollowerEntity_TypeInfo )
        {
          v50 = *(_QWORD *)(Instance + 72);
          if ( v50 < 1 || v41 >= v50 )
          {
            v51 = *(_QWORD *)(Instance + 80);
            if ( (v51 < 1 || v51 >= v41)
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
                           v47);
              if ( (Instance & 1) == 0 )
                goto LABEL_40;
              Instance = (int64_t)entity;
              if ( !entity )
                break;
              Instance = NpcFollowerReleaseEntity__IsEnable(entity, v34);
              if ( (Instance & 1) != 0 )
              {
LABEL_40:
                if ( !v39 )
                  break;
                items = v39->fields._items;
                v57 = Method_System_Collections_Generic_List_NpcFollowerEntity__Add__;
                ++v39->fields._version;
                if ( !items )
                  break;
                size = v39->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v39,
                    v48,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
                }
                else
                {
                  v59 = &items->obj.klass + size;
                  v39->fields._size = size + 1;
                  v59[4] = (Il2CppClass *)v48;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 4), (int64_t)v48, v43, v44, v52, v53, v54, v55);
                }
              }
            }
          }
        }
      }
      if ( v45 == ++v46 )
        goto LABEL_29;
    }
LABEL_37:
    sub_1BCAA3C(Instance, v34);
  }
LABEL_29:
  v60 = NpcFollowerMaster___c_TypeInfo;
  if ( !NpcFollowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo, v34);
    v60 = NpcFollowerMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v60->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60, v34);
      v60 = NpcFollowerMaster___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v60->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_NpcFollowerEntity__int__TypeInfo, v34, v43, v44);
    System_Func_object__int____ctor(_9__3_0, v62, Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, 0LL);
    static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v64, v65, v66, v67, v68, v69);
  }
  Instance = (int64_t)BasicHelper__StableSort_object_(
                        (System_Collections_Generic_List_T__o *)v39,
                        (System_Func_T__int__o *)_9__3_0,
                        1,
                        (const MethodInfo_2F028E0 *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !Instance )
    goto LABEL_37;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity_40158156(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t leaderSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x23
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Predicate_object__o *v27; // x20

  if ( (byte_4B165D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__, v11, v12);
    sub_1BCA7E0(&System_Predicate_NpcFollowerEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__, v15, v16);
    sub_1BCA7E0(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo, v17, v18);
    byte_4B165D6 = 1;
  }
  v19 = sub_1BCAA2C(
          NpcFollowerMaster___c__DisplayClass6_0_TypeInfo,
          *(_QWORD *)&questId,
          *(_QWORD *)&questPhase,
          leaderSvtId);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19
    || (*(_DWORD *)(v19 + 16) = questId,
        *(_DWORD *)(v19 + 20) = questPhase,
        *(_QWORD *)(v19 + 24) = leaderSvtId,
        v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.list,
                                                                     (const MethodInfo_2F20F80 *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___),
        v23 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                             v22,
                                                             (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___),
        v27 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_NpcFollowerEntity__TypeInfo, v24, v25, v26),
        System_Predicate_object____ctor(
          v27,
          (Il2CppObject *)v19,
          Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
          0LL),
        !v23) )
  {
    sub_1BCAA3C(v20, v21);
  }
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_object___Find(
                                  v23,
                                  (System_Predicate_T__o *)v27,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  bool v22; // w0
  NpcServantFollowerEntity_o *v23; // x21
  void *Instance; // x0
  const MethodInfo *v25; // x1
  NpcFollowerEntity_o *v26; // x23
  int64_t id; // x22
  int32_t v28; // w24
  int32_t DispLimitCount; // w0
  const MethodInfo *v30; // x2
  int32_t v31; // w23
  _BOOL4 v32; // w24
  int32_t ImageSvtId; // w0
  struct System_Int64_array *svtEquipIds; // x8
  struct System_Int64_array *v35; // x8
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int32_t klass; // w20
  int32_t monitor_high; // w23
  int32_t monitor; // w22
  EquipTargetInfo_o *v43; // x19
  const MethodInfo *v45; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B165D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v14, v15);
    sub_1BCA7E0(&EquipTargetInfo_TypeInfo, v16, v17);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    byte_4B165D5 = 1;
  }
  entity = 0LL;
  v22 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v23 = 0LL;
  if ( v22 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !Instance )
      goto LABEL_24;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 entity->fields.leaderSvtId,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
    v23 = (NpcServantFollowerEntity_o *)Instance;
    if ( Instance )
    {
      v26 = entity;
      if ( !entity )
        goto LABEL_24;
      id = entity->fields.id;
      v28 = *((_DWORD *)Instance + 11);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v25);
      DispLimitCount = ImageLimitCount__GetDispLimitCount(v28, 0LL);
      Instance = (void *)NpcFollowerEntity__GetDispLimitCnt(v26, DispLimitCount, v30);
      if ( !entity )
        goto LABEL_24;
      v31 = (int)Instance;
      v32 = ((unsigned int)entity->fields.flag >> 1) & 1;
      ImageSvtId = NpcFollowerEntity__GetImageSvtId(entity, v25);
      Instance = NpcServantFollowerEntity__getFollowerInfo(v23, id, questId, questPhase, v31, v32, 0, ImageSvtId, v45);
      if ( !entity )
        goto LABEL_24;
      svtEquipIds = entity->fields.svtEquipIds;
      if ( !svtEquipIds )
        goto LABEL_24;
      v23 = (NpcServantFollowerEntity_o *)Instance;
      if ( *(_QWORD *)&svtEquipIds->max_length )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_24;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_24;
        v35 = entity->fields.svtEquipIds;
        if ( !v35 )
          goto LABEL_24;
        if ( !v35->max_length )
          sub_1BCAA44(Instance, v25);
        if ( !Instance )
          goto LABEL_24;
        v36 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v35->m_Items[0],
                (const MethodInfo_31B2FEC *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v36 )
        {
          monitor_high = HIDWORD(v36[1].monitor);
          klass = (int32_t)v36[2].klass;
          monitor = (int32_t)v36[1].monitor;
          v43 = (EquipTargetInfo_o *)sub_1BCAA2C(EquipTargetInfo_TypeInfo, v37, v38, v39);
          EquipTargetInfo___ctor_39602340(v43, monitor, klass, monitor_high, 1, 0LL);
          if ( v23 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v23, v43, 0LL);
            return (FollowerInfo_o *)v23;
          }
LABEL_24:
          sub_1BCAA3C(Instance, v25);
        }
      }
    }
  }
  return (FollowerInfo_o *)v23;
}


// local variable allocation has failed, the output may be wrong!
FollowerInfo_array *__fastcall NpcFollowerMaster__GetQuestFollowerList(
        NpcFollowerMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  NpcFollowerEntity_array *Instance; // x0
  __int64 v26; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v28; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_object__o *v32; // x22
  const MethodInfo *v33; // x3
  int max_length; // w8
  NpcFollowerEntity_array *v35; // x24
  unsigned int v36; // w20
  NpcFollowerEntity_o *v37; // x26
  NpcServantFollowerEntity_o *v38; // x25
  int64_t id; // x27
  int32_t v40; // w28
  int32_t DispLimitCount; // w0
  const MethodInfo *v42; // x2
  int32_t DispLimitCnt; // w0
  unsigned int flag; // w8
  int32_t v45; // w28
  int v46; // w29
  int v47; // w19
  const MethodInfo *v48; // x1
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  const MethodInfo *v51; // x1
  int64_t v52; // x2
  __int64 v53; // x3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v59; // x9
  int32_t v60; // w19
  int32_t v61; // w27
  int32_t v62; // w26
  EquipTargetInfo_o *v63; // x28
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  const MethodInfo *v69; // [xsp+0h] [xbp-70h]

  if ( (byte_4B165D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&EquipTargetInfo_TypeInfo, v11, v12);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B165D4 = 1;
  }
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v28 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_FollowerInfo__TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  Instance = NpcFollowerMaster__GetEntityArray(this, questId, questPhase, v33);
  if ( !Instance )
    goto LABEL_29;
  max_length = Instance->max_length;
  v35 = Instance;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= max_length )
LABEL_30:
        sub_1BCAA44(Instance, v26);
      v37 = v35->m_Items[v36];
      if ( !v37 || !MasterData_object )
        break;
      Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              v37->fields.leaderSvtId,
                                              (const MethodInfo_31B2FEC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( Instance )
      {
        v38 = (NpcServantFollowerEntity_o *)Instance;
        id = v37->fields.id;
        v40 = HIDWORD(Instance->m_Items[1]);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v26);
        DispLimitCount = ImageLimitCount__GetDispLimitCount(v40, 0LL);
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v37, DispLimitCount, v42);
        flag = v37->fields.flag;
        v45 = DispLimitCnt;
        v46 = (flag >> 1) & 1;
        v47 = (flag >> 2) & 1;
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v37, v48);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v38,
                         id,
                         questId,
                         questPhase,
                         v45,
                         v46,
                         v47,
                         ImageSvtId,
                         v69);
        Instance = (NpcFollowerEntity_array *)NpcFollowerEntity__GetEventDeckIndex(v37, v51);
        if ( !FollowerInfo )
          break;
        FollowerInfo->fields.npcInitIdx = (int)Instance;
        svtEquipIds = v37->fields.svtEquipIds;
        if ( !svtEquipIds )
          break;
        v59 = *(_QWORD *)&svtEquipIds->max_length;
        if ( v59 )
        {
          if ( !(_DWORD)v59 )
            goto LABEL_30;
          if ( !v28 )
            break;
          Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v28,
                                                  svtEquipIds->m_Items[0],
                                                  (const MethodInfo_31B2FEC *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Instance )
          {
            v61 = *(&Instance->max_length + 1);
            v60 = (int32_t)Instance->m_Items[0];
            v62 = Instance->max_length;
            v63 = (EquipTargetInfo_o *)sub_1BCAA2C(EquipTargetInfo_TypeInfo, v26, v52, v53);
            EquipTargetInfo___ctor_39602340(v63, v62, v60, v61, 1, 0LL);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v63, 0LL);
          }
        }
        if ( !v32 )
          break;
        items = v32->fields._items;
        v65 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v32->fields._version;
        if ( !items )
          break;
        size = v32->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            (Il2CppObject *)FollowerInfo,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          v67 = &items->obj.klass + size;
          v32->fields._size = size + 1;
          v67[4] = (Il2CppClass *)FollowerInfo;
          sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 4), (int64_t)FollowerInfo, v52, v53, v54, v55, v56, v57);
        }
      }
      max_length = v35->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1BCAA3C(Instance, v26);
  }
LABEL_27:
  if ( !v32 )
    goto LABEL_29;
  return (FollowerInfo_array *)System_Collections_Generic_List_object___ToArray(
                                 v32,
                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
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

  if ( (byte_4B165D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__, entity, id);
    byte_4B165D1 = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void __fastcall NpcFollowerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B165D7 & 1) == 0 )
  {
    sub_1BCA7E0(&NpcFollowerMaster___c_TypeInfo, v1, v2);
    byte_4B165D7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(NpcFollowerMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  NpcFollowerMaster___c_TypeInfo->static_fields->__9 = (struct NpcFollowerMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)NpcFollowerMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}