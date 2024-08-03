void __fastcall NpcFollowerMaster___ctor(NpcFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC7D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__, method);
    byte_49FC7D0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    95,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string___ctor__);
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

  if ( (byte_49FC7CE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__, id);
    byte_49FC7CE = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (NpcFollowerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_30D41FC *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__GetEntity__);
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
  Il2CppObject *MasterData_object; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x22
  int64_t v25; // x24
  int32_t Count; // w0
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t v29; // w25
  int32_t v30; // w26
  const MethodInfo *v31; // x5
  Il2CppObject *v32; // x27
  __int64 methodPtr_low; // x10
  __int64 v34; // x8
  __int64 v35; // x8
  const MethodInfo *v36; // x1
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  NpcFollowerMaster___c_c *v42; // x0
  System_Func_object__int__o *_9__3_0; // x19
  Il2CppObject *v44; // x20
  struct NpcFollowerMaster___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  NpcFollowerReleaseEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FC7D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_StableSort_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___, v9);
    sub_1B640C8(&System_Func_NpcFollowerEntity__int__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_NpcFollowerEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_NpcFollowerEntity__TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&NpcFollowerEntity_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, v18);
    sub_1B640C8(&NpcFollowerMaster___c_TypeInfo, v19);
    byte_49FC7D1 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcFollowerReleaseMaster___);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_NpcFollowerEntity__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_NpcFollowerEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v25 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
    v30 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v30,
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v32 = (Il2CppObject *)Instance;
        methodPtr_low = LOBYTE(NpcFollowerEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(NpcFollowerEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == NpcFollowerEntity_TypeInfo )
        {
          v34 = *(_QWORD *)(Instance + 72);
          if ( v34 < 1 || v25 >= v34 )
          {
            v35 = *(_QWORD *)(Instance + 80);
            if ( (v35 < 1 || v35 >= v25)
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
                           v31);
              if ( (Instance & 1) == 0 )
                goto LABEL_40;
              Instance = (int64_t)entity;
              if ( !entity )
                break;
              Instance = NpcFollowerReleaseEntity__IsEnable(entity, v36);
              if ( (Instance & 1) != 0 )
              {
LABEL_40:
                if ( !v24 )
                  break;
                items = v24->fields._items;
                v39 = Method_System_Collections_Generic_List_NpcFollowerEntity__Add__;
                ++v24->fields._version;
                if ( !items )
                  break;
                size = v24->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v24,
                    v32,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                }
                else
                {
                  v41 = &items->obj.klass + size;
                  v24->fields._size = size + 1;
                  v41[4] = (Il2CppClass *)v32;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v32, v28, v37);
                }
              }
            }
          }
        }
      }
      if ( v29 == ++v30 )
        goto LABEL_29;
    }
LABEL_37:
    sub_1B64324(Instance);
  }
LABEL_29:
  v42 = NpcFollowerMaster___c_TypeInfo;
  if ( !NpcFollowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NpcFollowerMaster___c_TypeInfo);
    v42 = NpcFollowerMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v42->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = NpcFollowerMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_NpcFollowerEntity__int__TypeInfo, v27, v28);
    System_Func_object__int____ctor(_9__3_0, v44, Method_NpcFollowerMaster___c__GetEntityArray_b__3_0__, 0LL);
    static_fields = NpcFollowerMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_NpcFollowerEntity__int__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v46, v47);
  }
  Instance = (int64_t)BasicHelper__StableSort_object_(
                        (System_Collections_Generic_List_T__o *)v24,
                        (System_Func_T__int__o *)_9__3_0,
                        1,
                        (const MethodInfo_2E292C0 *)Method_BasicHelper_StableSort_NpcFollowerEntity___);
  if ( !Instance )
    goto LABEL_37;
  return (NpcFollowerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_NpcFollowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
NpcFollowerEntity_o *__fastcall NpcFollowerMaster__GetEntity_39109336(
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
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Predicate_object__o *v20; // x20

  if ( (byte_49FC7D4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_NpcFollowerEntity__Find__, v10);
    sub_1B640C8(&System_Predicate_NpcFollowerEntity__TypeInfo, v11);
    sub_1B640C8(&Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__, v12);
    sub_1B640C8(&NpcFollowerMaster___c__DisplayClass6_0_TypeInfo, v13);
    byte_49FC7D4 = 1;
  }
  v14 = sub_1B64314(NpcFollowerMaster___c__DisplayClass6_0_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = questId,
        *(_DWORD *)(v14 + 20) = questPhase,
        *(_QWORD *)(v14 + 24) = leaderSvtId,
        v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                                     (System_Collections_IEnumerable_o *)this->fields.list,
                                                                     (const MethodInfo_2E491D0 *)Method_System_Linq_Enumerable_Cast_NpcFollowerEntity___),
        v17 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                             v16,
                                                             (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_NpcFollowerEntity___),
        v20 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_NpcFollowerEntity__TypeInfo, v18, v19),
        System_Predicate_object____ctor(
          v20,
          (Il2CppObject *)v14,
          Method_NpcFollowerMaster___c__DisplayClass6_0__GetEntity_b__0__,
          0LL),
        !v17) )
  {
    sub_1B64324(v15);
  }
  return (NpcFollowerEntity_o *)System_Collections_Generic_List_object___Find(
                                  v17,
                                  (System_Predicate_T__o *)v20,
                                  (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_NpcFollowerEntity__Find__);
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
  const MethodInfo *v20; // x1
  int32_t flag; // w25
  int32_t v22; // w23
  int32_t ImageSvtId; // w0
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v25; // x1
  struct System_Int64_array *v26; // x8
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int32_t klass; // w20
  int32_t monitor_high; // w23
  int32_t monitor; // w22
  EquipTargetInfo_o *v33; // x19
  const MethodInfo *v35; // [xsp+0h] [xbp-50h]
  NpcFollowerEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FC7D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v10);
    sub_1B640C8(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v11);
    sub_1B640C8(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v12);
    sub_1B640C8(&EquipTargetInfo_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FC7D3 = 1;
  }
  entity = 0LL;
  v15 = NpcFollowerMaster__TryGetEntity(this, &entity, followerId, questId, questPhase, v5);
  v16 = 0LL;
  if ( v15 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    if ( !entity || !Instance )
      goto LABEL_22;
    v16 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            entity->fields.leaderSvtId,
            (const MethodInfo_30D4050 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
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
      v22 = (int)Instance;
      ImageSvtId = NpcFollowerEntity__GetImageSvtId(entity, v20);
      Instance = (DataManager_o *)NpcServantFollowerEntity__getFollowerInfo(
                                    (NpcServantFollowerEntity_o *)v16,
                                    id,
                                    questId,
                                    questPhase,
                                    v22,
                                    (flag & 2) != 0,
                                    0,
                                    ImageSvtId,
                                    v35);
      if ( !entity )
        goto LABEL_22;
      svtEquipIds = entity->fields.svtEquipIds;
      if ( !svtEquipIds )
        goto LABEL_22;
      v16 = (Il2CppObject *)Instance;
      if ( *(_QWORD *)&svtEquipIds->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_22;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
        if ( !entity )
          goto LABEL_22;
        v26 = entity->fields.svtEquipIds;
        if ( !v26 )
          goto LABEL_22;
        if ( !v26->max_length )
          sub_1B6432C(Instance, v25);
        if ( !Instance )
          goto LABEL_22;
        v27 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v26->m_Items[0],
                (const MethodInfo_30D4050 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
        if ( v27 )
        {
          monitor_high = HIDWORD(v27[1].monitor);
          klass = (int32_t)v27[2].klass;
          monitor = (int32_t)v27[1].monitor;
          v33 = (EquipTargetInfo_o *)sub_1B64314(EquipTargetInfo_TypeInfo, v28, v29);
          EquipTargetInfo___ctor_38565608(v33, monitor, klass, monitor_high, 1, 0LL);
          if ( v16 )
          {
            FollowerInfo__SetEquipInfoForNpc((FollowerInfo_o *)v16, v33, 0LL);
            return (FollowerInfo_o *)v16;
          }
LABEL_22:
          sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v16; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x22
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  int max_length; // w8
  NpcFollowerEntity_array *v23; // x24
  unsigned int v24; // w20
  NpcFollowerEntity_o *v25; // x26
  int64_t id; // x27
  NpcServantFollowerEntity_o *v27; // x25
  int32_t DispLimitCnt; // w0
  unsigned int flag; // w8
  int32_t v30; // w28
  int v31; // w29
  int v32; // w19
  const MethodInfo *v33; // x1
  int32_t ImageSvtId; // w0
  FollowerInfo_o *FollowerInfo; // x25
  const MethodInfo *v36; // x1
  __int64 v37; // x2
  int32_t v38; // w3
  struct System_Int64_array *svtEquipIds; // x8
  __int64 v40; // x9
  __int64 v41; // x1
  int32_t v42; // w19
  int32_t v43; // w27
  int32_t v44; // w26
  EquipTargetInfo_o *v45; // x28
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  const MethodInfo *v51; // [xsp+0h] [xbp-70h]

  if ( (byte_49FC7D2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcServantEquipMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__, v6);
    sub_1B640C8(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__, v7);
    sub_1B640C8(&EquipTargetInfo_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerInfo__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FC7D2 = 1;
  }
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = (NpcFollowerEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v16 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcServantEquipMaster___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_FollowerInfo__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__);
  Instance = NpcFollowerMaster__GetEntityArray(this, questId, questPhase, v20);
  if ( !Instance )
    goto LABEL_27;
  max_length = Instance->max_length;
  v23 = Instance;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
LABEL_28:
        sub_1B6432C(Instance, v21);
      v25 = v23->m_Items[v24];
      if ( !v25 || !MasterData_object )
        break;
      Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              v25->fields.leaderSvtId,
                                              (const MethodInfo_30D4050 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__GetEntity__);
      if ( Instance )
      {
        id = v25->fields.id;
        v27 = (NpcServantFollowerEntity_o *)Instance;
        DispLimitCnt = NpcFollowerEntity__GetDispLimitCnt(v25, v21);
        flag = v25->fields.flag;
        v30 = DispLimitCnt;
        v31 = (flag >> 1) & 1;
        v32 = (flag >> 2) & 1;
        ImageSvtId = NpcFollowerEntity__GetImageSvtId(v25, v33);
        FollowerInfo = NpcServantFollowerEntity__getFollowerInfo(
                         v27,
                         id,
                         questId,
                         questPhase,
                         v30,
                         v31,
                         v32,
                         ImageSvtId,
                         v51);
        Instance = (NpcFollowerEntity_array *)NpcFollowerEntity__GetEventDeckIndex(v25, v36);
        if ( !FollowerInfo )
          break;
        FollowerInfo->fields.npcInitIdx = (int)Instance;
        svtEquipIds = v25->fields.svtEquipIds;
        if ( !svtEquipIds )
          break;
        v40 = *(_QWORD *)&svtEquipIds->max_length;
        if ( v40 )
        {
          if ( !(_DWORD)v40 )
            goto LABEL_28;
          if ( !v16 )
            break;
          Instance = (NpcFollowerEntity_array *)DataMasterBase_object__object__long___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
                                                  svtEquipIds->m_Items[0],
                                                  (const MethodInfo_30D4050 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long__GetEntity__);
          if ( Instance )
          {
            v43 = *(&Instance->max_length + 1);
            v42 = (int32_t)Instance->m_Items[0];
            v44 = Instance->max_length;
            v45 = (EquipTargetInfo_o *)sub_1B64314(EquipTargetInfo_TypeInfo, v41, v37);
            EquipTargetInfo___ctor_38565608(v45, v44, v42, v43, 1, 0LL);
            FollowerInfo__SetEquipInfoForNpc(FollowerInfo, v45, 0LL);
          }
        }
        if ( !v19 )
          break;
        items = v19->fields._items;
        v47 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v19->fields._version;
        if ( !items )
          break;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            (Il2CppObject *)FollowerInfo,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v49[4] = (Il2CppClass *)FollowerInfo;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)FollowerInfo, v37, v38);
        }
      }
      max_length = v23->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_25;
    }
LABEL_27:
    sub_1B64324(Instance);
  }
LABEL_25:
  if ( !v19 )
    goto LABEL_27;
  return (FollowerInfo_array *)System_Collections_Generic_List_object___ToArray(
                                 v19,
                                 (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_FollowerInfo__ToArray__);
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

  if ( (byte_49FC7CF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__, entity);
    byte_49FC7CF = 1;
  }
  PK = (Il2CppObject *)NpcFollowerEntity__CreatePK(id, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_NpcFollowerMaster__NpcFollowerEntity__string__TryGetEntity__);
}


void __fastcall NpcFollowerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC7D5 & 1) == 0 )
  {
    sub_1B640C8(&NpcFollowerMaster___c_TypeInfo, v1);
    byte_49FC7D5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(NpcFollowerMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  NpcFollowerMaster___c_TypeInfo->static_fields->__9 = (struct NpcFollowerMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)NpcFollowerMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.questId == this->fields.questId
      && x->fields.questPhase == this->fields.questPhase
      && x->fields.leaderSvtId == this->fields.leaderSvtId;
}