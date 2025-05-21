void __fastcall ServantCostumeReleaseMaster___ctor(ServantCostumeReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B452EC & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__,
      method);
    byte_4B452EC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    211,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *__fastcall ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
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
  ServantCostumeReleaseEntity_array *EntityList; // x21
  __int64 v19; // x20
  System_Collections_Generic_List_object__o *v20; // x19
  ServantCostumeReleaseMaster___c_c *v21; // x0
  System_Comparison_T__o *_9__5_0; // x22
  Il2CppObject *v23; // x23
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  ServantCostumeReleaseEntity_o *v32; // x9
  int v33; // w27
  int32_t condGroup; // w23
  int v35; // w28
  ServantCostumeReleaseEntity_o *v36; // x22
  System_Collections_Generic_List_object__o *v37; // x23
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int v44; // w8
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x0
  System_Collections_Generic_List_object__o *v49; // x21
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0

  if ( (byte_4B452EF & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Sort_ServantCostumeReleaseEntity___, *(_QWORD *)&svtId);
    sub_1BDB878(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___77033448, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__, v13);
    sub_1BDB878(&System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo, v14);
    sub_1BDB878(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v15);
    sub_1BDB878(&Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__, v16);
    sub_1BDB878(&ServantCostumeReleaseMaster___c_TypeInfo, v17);
    byte_4B452EF = 1;
  }
  EntityList = ServantCostumeReleaseMaster__GetEntityList(this, svtId, costumeId, method);
  v19 = sub_1BDBAC4(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v19,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
  v21 = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    v21 = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Comparison_T__o *)v21->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = ServantCostumeReleaseMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__5_0,
      v23,
      Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__,
      0LL);
    static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__5_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v25, v26);
  }
  System_Array__Sort_object__50334236(
    (System_Object_array *)EntityList,
    _9__5_0,
    (const MethodInfo_3000A1C *)Method_System_Array_Sort_ServantCostumeReleaseEntity___);
  if ( !EntityList )
    goto LABEL_40;
  v31 = *(_QWORD *)&EntityList->max_length;
  if ( !(_DWORD)v31 )
LABEL_33:
    sub_1BDBADC(v27, v28, v29);
  v32 = EntityList->m_Items[0];
  if ( !v32 )
LABEL_40:
    sub_1BDBAD4(v27, v28);
  v33 = v31 - 1;
  if ( (int)v31 >= 1 )
  {
    condGroup = v32->fields.condGroup;
    v35 = 0;
    while ( 1 )
    {
      v36 = EntityList->m_Items[v35];
      if ( !v36 )
        goto LABEL_40;
      if ( v36->fields.releaseType == 1 )
      {
        if ( condGroup == v36->fields.condGroup )
        {
          if ( !v19 )
            goto LABEL_40;
        }
        else
        {
          v37 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor_57497272(
            v37,
            (System_Collections_Generic_IEnumerable_T__o *)v19,
            (const MethodInfo_36D56B8 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___77033448);
          if ( !v20 )
            goto LABEL_40;
          items = v20->fields._items;
          v41 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
          ++v20->fields._version;
          if ( !items )
            goto LABEL_40;
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v20,
              (Il2CppObject *)v37,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v37;
            sub_1BDB81C((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v37, v38, v39);
          }
          if ( !v19 )
            goto LABEL_40;
          LODWORD(v29) = *(_DWORD *)(v19 + 24);
          condGroup = v36->fields.condGroup;
          v44 = *(_DWORD *)(v19 + 28) + 1;
          *(_DWORD *)(v19 + 24) = 0;
          *(_DWORD *)(v19 + 28) = v44;
          if ( (int)v29 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v19 + 16), 0, v29, 0LL);
        }
        v45 = *(_QWORD *)(v19 + 16);
        v46 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
        ++*(_DWORD *)(v19 + 28);
        if ( !v45 )
          goto LABEL_40;
        v47 = *(int *)(v19 + 24);
        if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v19,
            (Il2CppObject *)v36,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = v45 + 8 * v47;
          *(_DWORD *)(v19 + 24) = v47 + 1;
          *(_QWORD *)(v48 + 32) = v36;
          sub_1BDB81C((CGThumbnailListItem_o *)(v48 + 32), (int32_t)v36, v29, v30);
        }
      }
      if ( v33 == v35 )
        break;
      if ( ++v35 >= EntityList->max_length )
        goto LABEL_33;
    }
  }
  v49 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_57497272(
    v49,
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (const MethodInfo_36D56B8 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___77033448);
  if ( !v20 )
    goto LABEL_40;
  v52 = v20->fields._items;
  v53 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
  ++v20->fields._version;
  if ( !v52 )
    goto LABEL_40;
  v54 = v20->fields._size;
  if ( (unsigned int)v54 >= v52->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v49,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &v52->obj.klass + v54;
    v20->fields._size = v54 + 1;
    v55[4] = (Il2CppClass *)v49;
    sub_1BDB81C((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v49, v50, v51);
  }
  return (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)v20;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeReleaseEntity_o *__fastcall ServantCostumeReleaseMaster__GetEntity(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t releaseType,
        int32_t costumeId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B452EA & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B452EA = 1;
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
                                            (const MethodInfo_32E68F4 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeReleaseEntity_array *__fastcall ServantCostumeReleaseMaster__GetEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
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
  System_Collections_Generic_List_object__o *v16; // x19
  Il2CppClass *v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4B452EE & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__,
      *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__, v7);
    sub_1BDB878(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v13);
    sub_1BDB878(&Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, v14);
    sub_1BDB878(&ServantCostumeReleaseMaster___c_TypeInfo, v15);
    byte_4B452EE = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v21,
               (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
      if ( !list )
        break;
      v17 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == svtId && *((_DWORD *)list + 5) == costumeId )
      {
        if ( !v16 )
          break;
        items = v16->fields._items;
        v25 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)list,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v27[4] = v17;
          sub_1BDB81C((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v17, v22, v23);
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1BDBAD4(list, v17);
  }
LABEL_16:
  list = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    list = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantCostumeReleaseMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, 0LL);
    static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)v28;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)v28, v31, v32);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_57505928(
    v16,
    v28,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
  return (ServantCostumeReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v16,
                                                (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
}


bool __fastcall ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  bool IsCostumeReleaseCondClear; // w8
  bool result; // w0
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  signed int max_length; // w22
  il2cpp_array_size_t v17; // w23
  __int64 v18; // x2
  Il2CppObject *MasterData_object; // x20
  int32_t num; // w8
  UserItemEntity_o *v21; // [xsp+0h] [xbp-70h] BYREF
  int32_t qp; // [xsp+Ch] [xbp-64h] BYREF
  System_Int32_array *itemNums; // [xsp+10h] [xbp-60h] BYREF
  System_Int32_array *itemIds; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B452F1 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CombineCostumeMaster___, targetEntity);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B452F1 = 1;
  }
  itemNums = 0LL;
  itemIds = 0LL;
  qp = 0;
  v21 = 0LL;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                this,
                                targetEntity,
                                svtId,
                                userSvtId,
                                method);
  result = 0;
  if ( !IsCostumeReleaseCondClear )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CombineCostumeMaster___),
        !targetEntity)
    || !Instance )
  {
LABEL_33:
    sub_1BDBAD4(Instance, v15);
  }
  CombineCostumeMaster__CheckNeedCombineInfo(
    (CombineCostumeMaster_o *)Instance,
    svtId,
    targetEntity->fields.id,
    &itemIds,
    &itemNums,
    &qp,
    0LL);
  if ( !itemIds )
    return 1;
  max_length = itemIds->max_length;
  if ( max_length < 1 )
  {
LABEL_28:
    Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( Instance )
      return (__int64)Instance->fields.lockCountObj >= qp;
    goto LABEL_33;
  }
  v17 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, v15);
      byte_4B3ED56 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !itemIds )
      goto LABEL_33;
    if ( v17 >= itemIds->max_length )
      goto LABEL_34;
    if ( !MasterData_object )
      goto LABEL_33;
    Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                  (UserItemMaster_o *)MasterData_object,
                                  &v21,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  itemIds->m_Items[v17 + 1],
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_33;
      num = v21->fields.num;
    }
    else
    {
      num = 0;
    }
    if ( !itemNums )
      goto LABEL_33;
    if ( v17 >= itemNums->max_length )
LABEL_34:
      sub_1BDBADC(Instance, v15, v18);
    if ( itemNums->m_Items[v17 + 1] > num )
      return 0;
    if ( max_length == ++v17 )
      goto LABEL_28;
  }
}


bool __fastcall ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  EventCombineCostumeEntity_o *v16; // x24
  bool IsShortEventItem; // w23
  EventEntity_o *v18; // x24
  int64_t startedAt; // x25
  const MethodInfo *v20; // x4

  if ( (byte_4B452F3 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, targetEntity);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1BDB878(&NetworkManager_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B452F3 = 1;
  }
  if ( !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(this, targetEntity, svtId, userSvtId, method) )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  if ( !targetEntity || !Instance )
    goto LABEL_21;
  ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                              (EventCombineCostumeMaster_o *)Instance,
                              svtId,
                              targetEntity->fields.id,
                              0LL);
  if ( !ListBySvtIdAndCostumeId )
    return (char)ListBySvtIdAndCostumeId;
  v16 = ListBySvtIdAndCostumeId;
  IsShortEventItem = EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v16->fields.eventId,
                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_21:
    sub_1BDBAD4(Instance, v14);
  }
  v18 = (EventEntity_o *)Instance;
  if ( IsShortEventItem | !EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    startedAt = v18->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( startedAt > NetworkManager__getTime(0LL)
      || EventEntity__IsOpen(v18, 0, 0LL)
      || IsShortEventItem
      && !ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(this, targetEntity, svtId, userSvtId, v20) )
    {
LABEL_19:
      LOBYTE(ListBySvtIdAndCostumeId) = 0;
      return (char)ListBySvtIdAndCostumeId;
    }
  }
  LOBYTE(ListBySvtIdAndCostumeId) = 1;
  return (char)ListBySvtIdAndCostumeId;
}


bool __fastcall ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24
  int32_t v15; // w25
  int32_t v16; // w26

  if ( (byte_4B452F2 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__,
      targetEntity);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__, v9);
    sub_1BDB878(&CondType_TypeInfo, v10);
    byte_4B452F2 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_24:
    sub_1BDBAD4(list, targetEntity);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 1;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_24;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v14,
             (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
    if ( !list )
      goto LABEL_24;
    if ( *((_DWORD *)list + 4) == svtId )
    {
      if ( !targetEntity )
        goto LABEL_24;
      if ( *((_DWORD *)list + 5) == targetEntity->fields.id && *((_DWORD *)list + 6) == 2 )
      {
        v15 = *((_DWORD *)list + 7);
        if ( (v15 & 0xFFFFFFFE) != 6 )
        {
          if ( v15 == 12 )
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
        v16 = *((_DWORD *)list + 9);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpenForUsrSvt(v15, v16, userSvtId, 0LL) )
          return 0;
      }
    }
LABEL_21:
    if ( v13 == ++v14 )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__TryGetEntity(
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

  if ( (byte_4B452EB & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4B452EB = 1;
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
           (const MethodInfo_32E6940 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__checkItemHaving(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *CostumeCondGroupEntityList; // x0
  int size; // w22
  System_Collections_Generic_List_object__o *v12; // x19
  int32_t i; // w20
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v15; // x1
  int v16; // w25
  int32_t v17; // w21

  if ( (byte_4B452F0 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__, v9);
    byte_4B452F0 = 1;
  }
  CostumeCondGroupEntityList = ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
                                 this,
                                 svtId,
                                 costumeId,
                                 method);
  if ( !CostumeCondGroupEntityList )
    return 1;
  size = CostumeCondGroupEntityList->fields._size;
  v12 = (System_Collections_Generic_List_object__o *)CostumeCondGroupEntityList;
  if ( !size )
    return 1;
  if ( size < 1 )
    return 0;
  for ( i = 0; i != size; ++i )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          v12,
                                                          i,
                                                          (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
    if ( !Item )
LABEL_19:
      sub_1BDBAD4(Item, v15);
    v16 = Item->fields._size;
    if ( v16 < 1 )
      break;
    v17 = 0;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v12,
                                                            i,
                                                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
      if ( !Item )
        goto LABEL_19;
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            v17,
                                                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__);
      if ( !Item )
        goto LABEL_19;
      if ( !ServantCostumeReleaseEntity__IsAvailable((ServantCostumeReleaseEntity_o *)Item, v15) )
        break;
      if ( v16 == ++v17 )
        return 1;
    }
  }
  return v16 < 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__isEnableMountCostume(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w24
  int32_t v15; // w25
  int klass_high; // w8

  if ( (byte_4B452ED & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__,
      *(_QWORD *)&svtId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__, v11);
    byte_4B452ED = 1;
  }
  if ( id < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
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
      if ( v14 == ++v15 )
        return 1;
    }
LABEL_19:
    sub_1BDBAD4(list, *(_QWORD *)&svtId);
  }
  return 1;
}


void __fastcall ServantCostumeReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B452F4 & 1) == 0 )
  {
    sub_1BDB878(&ServantCostumeReleaseMaster___c_TypeInfo, v1);
    byte_4B452F4 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(ServantCostumeReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantCostumeReleaseMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeReleaseMaster___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)ServantCostumeReleaseMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantCostumeReleaseMaster___c___ctor(
        ServantCostumeReleaseMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetCostumeCondGroupEntityList_b__5_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BDBAD4(this, a);
  return a->fields.condGroup - b->fields.condGroup;
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetEntityList_b__4_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BDBAD4(this, a);
  return a->fields.priority - b->fields.priority;
}