void ServantCostumeReleaseMaster___ctor(ServantCostumeReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6BA0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
    byte_4CB6BA0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    211,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
}


System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  System_Object_array *EntityList; // x21
  __int64 v8; // x20
  System_Collections_Generic_List_object__o *v9; // x19
  ServantCostumeReleaseMaster___c_c *v10; // x0
  System_Comparison_T__o *_9__5_0; // x22
  Il2CppObject *v12; // x23
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *v21; // x9
  int v22; // w25
  int monitor_high; // w23
  int v24; // w26
  Il2CppObject *v25; // x22
  System_Collections_Generic_List_object__o *v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int v33; // w8
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x0
  System_Collections_Generic_List_object__o *v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0

  if ( (byte_4CB6BA3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Sort_ServantCostumeReleaseEntity___);
    sub_1C6BA08(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___78527448);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
    sub_1C6BA08(&Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__);
    sub_1C6BA08(&ServantCostumeReleaseMaster___c_TypeInfo);
    byte_4CB6BA3 = 1;
  }
  EntityList = (System_Object_array *)ServantCostumeReleaseMaster__GetEntityList(this, svtId, costumeId, method);
  v8 = sub_1C6BC54(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntityList, 0) )
  {
    v10 = ServantCostumeReleaseMaster___c_TypeInfo;
    if ( !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
      v10 = ServantCostumeReleaseMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v10->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = ServantCostumeReleaseMaster___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__5_0,
        v12,
        Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__,
        0);
      static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__5_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v14, v15);
    }
    System_Array__Sort_object__51410360(
      EntityList,
      _9__5_0,
      (const MethodInfo_31075B8 *)Method_System_Array_Sort_ServantCostumeReleaseEntity___);
    if ( !EntityList )
      goto LABEL_41;
    max_length = EntityList->max_length;
    if ( !(_DWORD)max_length )
LABEL_34:
      sub_1C6BC68(v16);
    v21 = EntityList->m_Items[0];
    if ( !v21 )
LABEL_41:
      sub_1C6BC60(v16, v17);
    v22 = max_length - 1;
    if ( (int)max_length >= 1 )
    {
      monitor_high = HIDWORD(v21[2].monitor);
      v24 = 0;
      while ( 1 )
      {
        v25 = EntityList->m_Items[v24];
        if ( !v25 )
          goto LABEL_41;
        if ( LODWORD(v25[1].monitor) == 1 )
        {
          if ( monitor_high == HIDWORD(v25[2].monitor) )
          {
            if ( !v8 )
              goto LABEL_41;
          }
          else
          {
            v26 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor_58720872(
              v26,
              (System_Collections_Generic_IEnumerable_T__o *)v8,
              (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___78527448);
            if ( !v9 )
              goto LABEL_41;
            items = v9->fields._items;
            v30 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
            ++v9->fields._version;
            if ( !items )
              goto LABEL_41;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v26,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v32[4] = (Il2CppClass *)v26;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v26, v27, v28);
            }
            if ( !v8 )
              goto LABEL_41;
            v18 = *(_DWORD *)(v8 + 24);
            monitor_high = HIDWORD(v25[2].monitor);
            v33 = *(_DWORD *)(v8 + 28) + 1;
            *(_DWORD *)(v8 + 24) = 0;
            *(_DWORD *)(v8 + 28) = v33;
            if ( v18 >= 1 )
              System_Array__Clear(*(System_Array_o **)(v8 + 16), 0, v18, 0);
          }
          v34 = *(_QWORD *)(v8 + 16);
          v35 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
          ++*(_DWORD *)(v8 + 28);
          if ( !v34 )
            goto LABEL_41;
          v36 = *(int *)(v8 + 24);
          if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v8,
              v25,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = v34 + 8 * v36;
            *(_DWORD *)(v8 + 24) = v36 + 1;
            *(_QWORD *)(v37 + 32) = v25;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 32), (int32_t)v25, v18, v19);
          }
        }
        if ( v22 == v24 )
          break;
        if ( (unsigned int)++v24 >= LODWORD(EntityList->max_length) )
          goto LABEL_34;
      }
    }
    v38 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_58720872(
      v38,
      (System_Collections_Generic_IEnumerable_T__o *)v8,
      (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___78527448);
    if ( !v9 )
      goto LABEL_41;
    v41 = v9->fields._items;
    v42 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
    ++v9->fields._version;
    if ( !v41 )
      goto LABEL_41;
    v43 = v9->fields._size;
    if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        (Il2CppObject *)v38,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &v41->obj.klass + v43;
      v9->fields._size = v43 + 1;
      v44[4] = (Il2CppClass *)v38;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v38, v39, v40);
    }
  }
  return (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)v9;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeReleaseEntity_o *ServantCostumeReleaseMaster__GetEntity(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t releaseType,
        int32_t costumeId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB6B9E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
    byte_4CB6B9E = 1;
  }
  PK = (Il2CppObject *)ServantCostumeReleaseEntity__CreatePK(
                         svtId,
                         releaseType,
                         costumeId,
                         condType,
                         condTargetId,
                         *(const MethodInfo **)&condTargetId);
  return (ServantCostumeReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_33FDB94 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
}


ServantCostumeReleaseEntity_array *ServantCostumeReleaseMaster__GetEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Comparison_T__o *v19; // x20
  Il2CppObject *v20; // x21
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4CB6BA2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
    sub_1C6BA08(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
    sub_1C6BA08(&Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__);
    sub_1C6BA08(&ServantCostumeReleaseMaster___c_TypeInfo);
    byte_4CB6BA2 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
      if ( !list )
        break;
      v8 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == svtId && *((_DWORD *)list + 5) == costumeId )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v16 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v18[4] = v8;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v8, v13, v14);
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1C6BC60(list, v8);
  }
LABEL_16:
  list = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    list = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantCostumeReleaseMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)list + 23);
    v19 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, 0);
    static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)v19;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v19, v22, v23);
  }
  if ( !v7 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_58729528(
    v7,
    v19,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
  return (ServantCostumeReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v7,
                                                (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
}


bool ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  bool IsCostumeReleaseCondClear; // w8
  bool result; // w0
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  int max_length; // w22
  unsigned int v14; // w23
  Il2CppObject *MasterData_object; // x20
  int32_t num; // w8
  UserItemEntity_o *v17; // [xsp+0h] [xbp-70h] BYREF
  int32_t qp; // [xsp+Ch] [xbp-64h] BYREF
  System_Int32_array *itemNums; // [xsp+10h] [xbp-60h] BYREF
  System_Int32_array *itemIds; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CB6BA5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6BA5 = 1;
  }
  itemNums = 0;
  itemIds = 0;
  qp = 0;
  v17 = 0;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                this,
                                targetEntity,
                                svtId,
                                userSvtId,
                                method);
  result = 0;
  if ( !IsCostumeReleaseCondClear )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_CombineCostumeMaster___),
        !targetEntity)
    || !Instance )
  {
LABEL_33:
    sub_1C6BC60(Instance, v12);
  }
  CombineCostumeMaster__CheckNeedCombineInfo(
    (CombineCostumeMaster_o *)Instance,
    svtId,
    targetEntity->fields.id,
    &itemIds,
    &itemNums,
    &qp,
    0);
  if ( !itemIds )
    return 1;
  max_length = itemIds->max_length;
  if ( max_length < 1 )
  {
LABEL_28:
    Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
    if ( Instance )
      return (__int64)Instance->fields.lockCountObj >= qp;
    goto LABEL_33;
  }
  v14 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !itemIds )
      goto LABEL_33;
    if ( v14 >= LODWORD(itemIds->max_length) )
      goto LABEL_34;
    if ( !MasterData_object )
      goto LABEL_33;
    Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                  (UserItemMaster_o *)MasterData_object,
                                  &v17,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  itemIds->m_Items[v14],
                                  0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_33;
      num = v17->fields.num;
    }
    else
    {
      num = 0;
    }
    if ( !itemNums )
      goto LABEL_33;
    if ( v14 >= LODWORD(itemNums->max_length) )
LABEL_34:
      sub_1C6BC68(Instance);
    if ( itemNums->m_Items[v14] > num )
      return 0;
    if ( max_length == ++v14 )
      goto LABEL_28;
  }
}


bool ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  EventCombineCostumeEntity_o *v12; // x24
  bool IsShortEventItem; // w23
  EventEntity_o *v14; // x24
  int64_t startedAt; // x25
  const MethodInfo *v16; // x4

  if ( (byte_4CB6BA7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6BA7 = 1;
  }
  if ( !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(this, targetEntity, svtId, userSvtId, method) )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  if ( !targetEntity || !Instance )
    goto LABEL_21;
  ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                              (EventCombineCostumeMaster_o *)Instance,
                              svtId,
                              targetEntity->fields.id,
                              0);
  if ( !ListBySvtIdAndCostumeId )
    return (char)ListBySvtIdAndCostumeId;
  v12 = ListBySvtIdAndCostumeId;
  IsShortEventItem = EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v12->fields.eventId,
                     (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0 )
  {
LABEL_21:
    sub_1C6BC60(Instance, v10);
  }
  v14 = (EventEntity_o *)Instance;
  if ( IsShortEventItem | !EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0) )
  {
    startedAt = v14->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( startedAt > NetworkManager__getTime(0)
      || EventEntity__IsOpen(v14, 0, 0)
      || IsShortEventItem
      && !ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(this, targetEntity, svtId, userSvtId, v16) )
    {
LABEL_19:
      LOBYTE(ListBySvtIdAndCostumeId) = 0;
      return (char)ListBySvtIdAndCostumeId;
    }
  }
  LOBYTE(ListBySvtIdAndCostumeId) = 1;
  return (char)ListBySvtIdAndCostumeId;
}


bool ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w25
  int32_t v14; // w26

  if ( (byte_4CB6BA6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
    sub_1C6BA08(&CondType_TypeInfo);
    byte_4CB6BA6 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_24:
    sub_1C6BC60(list, targetEntity);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 1;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v12,
             (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
    if ( !list )
      goto LABEL_24;
    if ( *((_DWORD *)list + 4) == svtId )
    {
      if ( !targetEntity )
        goto LABEL_24;
      if ( *((_DWORD *)list + 5) == targetEntity->fields.id && *((_DWORD *)list + 6) == 2 )
      {
        v13 = *((_DWORD *)list + 7);
        if ( (v13 & 0xFFFFFFFE) != 6 )
        {
          if ( v13 == 12 )
          {
            if ( !ServantCostumeEntity__CheckEnableReleaseTime(targetEntity, (const MethodInfo *)targetEntity) )
              return 0;
          }
          else if ( !ServantCostumeReleaseEntity__IsAvailable(
                       (ServantCostumeReleaseEntity_o *)list,
                       (const MethodInfo *)targetEntity) )
          {
            return 0;
          }
          goto LABEL_21;
        }
        v14 = *((_DWORD *)list + 9);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpenForUsrSvt(v13, v14, userSvtId, 0) )
          return 0;
      }
    }
LABEL_21:
    if ( v11 == ++v12 )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool ServantCostumeReleaseMaster__TryGetEntity(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeReleaseEntity_o **entity,
        int32_t svtId,
        int32_t releaseType,
        int32_t costumeId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB6B9F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
    byte_4CB6B9F = 1;
  }
  PK = (Il2CppObject *)ServantCostumeReleaseEntity__CreatePK(
                         svtId,
                         releaseType,
                         costumeId,
                         condType,
                         condTargetId,
                         *(const MethodInfo **)&condType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
}


bool ServantCostumeReleaseMaster__checkItemHaving(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *CostumeCondGroupEntityList; // x0
  int size; // w22
  System_Collections_Generic_List_object__o *v9; // x19
  int32_t i; // w20
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v12; // x1
  int v13; // w25
  int32_t v14; // w21

  if ( (byte_4CB6BA4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
    byte_4CB6BA4 = 1;
  }
  CostumeCondGroupEntityList = ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
                                 this,
                                 svtId,
                                 costumeId,
                                 method);
  if ( !CostumeCondGroupEntityList )
    return 1;
  size = CostumeCondGroupEntityList->fields._size;
  v9 = (System_Collections_Generic_List_object__o *)CostumeCondGroupEntityList;
  if ( !size )
    return 1;
  if ( size < 1 )
    return 0;
  for ( i = 0; i != size; ++i )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          v9,
                                                          i,
                                                          (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
    if ( !Item )
LABEL_19:
      sub_1C6BC60(Item, v12);
    v13 = Item->fields._size;
    if ( v13 < 1 )
      break;
    v14 = 0;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v9,
                                                            i,
                                                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
      if ( !Item )
        goto LABEL_19;
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            v14,
                                                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__);
      if ( !Item )
        goto LABEL_19;
      if ( !ServantCostumeReleaseEntity__IsAvailable((ServantCostumeReleaseEntity_o *)Item, v12) )
        break;
      if ( v13 == ++v14 )
        return 1;
    }
  }
  return v13 < 1;
}


// local variable allocation has failed, the output may be wrong!
bool ServantCostumeReleaseMaster__isEnableMountCostume(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  int klass_high; // w8

  if ( (byte_4CB6BA1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
    byte_4CB6BA1 = 1;
  }
  if ( id < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list->fields.items) == svtId && HIDWORD(list->fields.items) == id )
      {
        klass_high = HIDWORD(list[1].klass);
        if ( klass_high == 7 )
        {
          if ( SHIDWORD(list[1].monitor) > limitCount )
            return 0;
        }
        else if ( klass_high == 6 && SHIDWORD(list[1].monitor) > lv )
        {
          return 0;
        }
      }
      if ( v13 == ++v14 )
        return 1;
    }
LABEL_19:
    sub_1C6BC60(list, *(_QWORD *)&svtId);
  }
  return 1;
}


void ServantCostumeReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6BA8 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCostumeReleaseMaster___c_TypeInfo);
    byte_4CB6BA8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ServantCostumeReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCostumeReleaseMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeReleaseMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ServantCostumeReleaseMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantCostumeReleaseMaster___c___ctor(ServantCostumeReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantCostumeReleaseMaster___c___GetCostumeCondGroupEntityList_b__5_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.condGroup - b->fields.condGroup;
}


int32_t ServantCostumeReleaseMaster___c___GetEntityList_b__4_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C6BC60(this, a);
  return a->fields.priority - b->fields.priority;
}