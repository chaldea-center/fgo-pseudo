void __fastcall ServantCostumeReleaseMaster___ctor(ServantCostumeReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCC62 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
    byte_4BDCC62 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    211,
    (const MethodInfo_325E55C *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
}


System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *__fastcall ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  ServantCostumeReleaseEntity_array *EntityList; // x21
  __int64 v8; // x20
  System_Collections_Generic_List_object__o *v9; // x19
  ServantCostumeReleaseMaster___c_c *v10; // x0
  System_Comparison_T__o *_9__5_0; // x22
  Il2CppObject *v12; // x23
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x8
  ServantCostumeReleaseEntity_o *v29; // x9
  int v30; // w27
  int32_t condGroup; // w23
  int v32; // w28
  int64_t v33; // x22
  System_Collections_Generic_List_object__o *v34; // x23
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  int v45; // w8
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x0
  System_Collections_Generic_List_object__o *v50; // x21
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0

  if ( (byte_4BDCC65 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Sort_ServantCostumeReleaseEntity___);
    sub_1C21E38(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___77584992);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
    sub_1C21E38(&Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__);
    sub_1C21E38(&ServantCostumeReleaseMaster___c_TypeInfo);
    byte_4BDCC65 = 1;
  }
  EntityList = ServantCostumeReleaseMaster__GetEntityList(this, svtId, costumeId, method);
  v8 = sub_1C22084(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
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
    _9__5_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__5_0,
      v12,
      Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__,
      0LL);
    static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__5_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v14, v15, v16, v17, v18, v19);
  }
  System_Array__Sort_object__49797188(
    (System_Object_array *)EntityList,
    _9__5_0,
    (const MethodInfo_2F7D844 *)Method_System_Array_Sort_ServantCostumeReleaseEntity___);
  if ( !EntityList )
    goto LABEL_40;
  v28 = *(_QWORD *)&EntityList->max_length;
  if ( !(_DWORD)v28 )
LABEL_33:
    sub_1C2209C(v20, v21);
  v29 = EntityList->m_Items[0];
  if ( !v29 )
LABEL_40:
    sub_1C22094(v20, v21);
  v30 = v28 - 1;
  if ( (int)v28 >= 1 )
  {
    condGroup = v29->fields.condGroup;
    v32 = 0;
    while ( 1 )
    {
      v33 = (int64_t)EntityList->m_Items[v32];
      if ( !v33 )
        goto LABEL_40;
      if ( *(_DWORD *)(v33 + 24) == 1 )
      {
        if ( condGroup == *(_DWORD *)(v33 + 44) )
        {
          if ( !v8 )
            goto LABEL_40;
        }
        else
        {
          v34 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor_56945064(
            v34,
            (System_Collections_Generic_IEnumerable_T__o *)v8,
            (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___77584992);
          if ( !v9 )
            goto LABEL_40;
          items = v9->fields._items;
          v42 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_40;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)v34,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v34;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v34, v35, v36, v37, v38, v39, v40);
          }
          if ( !v8 )
            goto LABEL_40;
          v22 = *(unsigned int *)(v8 + 24);
          condGroup = *(_DWORD *)(v33 + 44);
          v45 = *(_DWORD *)(v8 + 28) + 1;
          *(_DWORD *)(v8 + 24) = 0;
          *(_DWORD *)(v8 + 28) = v45;
          if ( (int)v22 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v8 + 16), 0, v22, 0LL);
        }
        v46 = *(_QWORD *)(v8 + 16);
        v47 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
        ++*(_DWORD *)(v8 + 28);
        if ( !v46 )
          goto LABEL_40;
        v48 = *(int *)(v8 + 24);
        if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v8,
            (Il2CppObject *)v33,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = v46 + 8 * v48;
          *(_DWORD *)(v8 + 24) = v48 + 1;
          *(_QWORD *)(v49 + 32) = v33;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v49 + 32), v33, v22, v23, v24, v25, v26, v27);
        }
      }
      if ( v30 == v32 )
        break;
      if ( ++v32 >= EntityList->max_length )
        goto LABEL_33;
    }
  }
  v50 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v50,
    (System_Collections_Generic_IEnumerable_T__o *)v8,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___77584992);
  if ( !v9 )
    goto LABEL_40;
  v57 = v9->fields._items;
  v58 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
  ++v9->fields._version;
  if ( !v57 )
    goto LABEL_40;
  v59 = v9->fields._size;
  if ( (unsigned int)v59 >= v57->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v50,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = &v57->obj.klass + v59;
    v9->fields._size = v59 + 1;
    v60[4] = (Il2CppClass *)v50;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)v50, v51, v52, v53, v54, v55, v56);
  }
  return (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)v9;
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

  if ( (byte_4BDCC60 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
    byte_4BDCC60 = 1;
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
                                            (const MethodInfo_3260880 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
}


ServantCostumeReleaseEntity_array *__fastcall ServantCostumeReleaseMaster__GetEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  int64_t v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Comparison_T__o *v23; // x20
  Il2CppObject *v24; // x21
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4BDCC64 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
    sub_1C21E38(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
    sub_1C21E38(&Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__);
    sub_1C21E38(&ServantCostumeReleaseMaster___c_TypeInfo);
    byte_4BDCC64 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
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
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
      if ( !list )
        break;
      v8 = (int64_t)list;
      if ( *((_DWORD *)list + 4) == svtId && *((_DWORD *)list + 5) == costumeId )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v8;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), v8, v13, v14, v15, v16, v17, v18);
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1C22094(list, v8);
  }
LABEL_16:
  list = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    list = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantCostumeReleaseMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)list + 23);
    v23 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(v23, v24, Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, 0LL);
    static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)v23;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v23, v26, v27, v28, v29, v30, v31);
  }
  if ( !v7 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_56953720(
    v7,
    v23,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
  return (ServantCostumeReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v7,
                                                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
}


bool __fastcall ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
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
  signed int max_length; // w22
  il2cpp_array_size_t v14; // w23
  Il2CppObject *MasterData_object; // x20
  int32_t num; // w8
  UserItemEntity_o *v17; // [xsp+0h] [xbp-70h] BYREF
  int32_t qp; // [xsp+Ch] [xbp-64h] BYREF
  System_Int32_array *itemNums; // [xsp+10h] [xbp-60h] BYREF
  System_Int32_array *itemIds; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4BDCC67 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC67 = 1;
  }
  itemNums = 0LL;
  itemIds = 0LL;
  qp = 0;
  v17 = 0LL;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                this,
                                targetEntity,
                                svtId,
                                userSvtId,
                                method);
  result = 0;
  if ( !IsCostumeReleaseCondClear )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CombineCostumeMaster___),
        !targetEntity)
    || !Instance )
  {
LABEL_33:
    sub_1C22094(Instance, v12);
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
      return qp <= SLODWORD(Instance->fields.lockCountObj);
    goto LABEL_33;
  }
  v14 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !itemIds )
      goto LABEL_33;
    if ( v14 >= itemIds->max_length )
      goto LABEL_34;
    if ( !MasterData_object )
      goto LABEL_33;
    Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                  (UserItemMaster_o *)MasterData_object,
                                  &v17,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  itemIds->m_Items[v14 + 1],
                                  0LL);
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
    if ( v14 >= itemNums->max_length )
LABEL_34:
      sub_1C2209C(Instance, v12);
    if ( itemNums->m_Items[v14 + 1] > num )
      return 0;
    if ( max_length == ++v14 )
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  EventCombineCostumeEntity_o *v12; // x24
  bool IsShortEventItem; // w23
  EventEntity_o *v14; // x24
  int64_t startedAt; // x25
  const MethodInfo *v16; // x4

  if ( (byte_4BDCC69 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC69 = 1;
  }
  if ( !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(this, targetEntity, svtId, userSvtId, method) )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  if ( !targetEntity || !Instance )
    goto LABEL_21;
  ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                              (EventCombineCostumeMaster_o *)Instance,
                              svtId,
                              targetEntity->fields.id,
                              0LL);
  if ( !ListBySvtIdAndCostumeId )
    return (char)ListBySvtIdAndCostumeId;
  v12 = ListBySvtIdAndCostumeId;
  IsShortEventItem = EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v12->fields.eventId,
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_21:
    sub_1C22094(Instance, v10);
  }
  v14 = (EventEntity_o *)Instance;
  if ( IsShortEventItem | !EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    startedAt = v14->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( startedAt > NetworkManager__getTime(0LL)
      || EventEntity__IsOpen(v14, 0, 0LL)
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


bool __fastcall ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
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

  if ( (byte_4BDCC68 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
    sub_1C21E38(&CondType_TypeInfo);
    byte_4BDCC68 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_24:
    sub_1C22094(list, targetEntity);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
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
             (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
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
        if ( !CondType__IsOpenForUsrSvt(v13, v14, userSvtId, 0LL) )
          return 0;
      }
    }
LABEL_21:
    if ( v11 == ++v12 )
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

  if ( (byte_4BDCC61 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
    byte_4BDCC61 = 1;
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
           (const MethodInfo_32608CC *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
}


bool __fastcall ServantCostumeReleaseMaster__checkItemHaving(
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

  if ( (byte_4BDCC66 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
    byte_4BDCC66 = 1;
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
                                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
    if ( !Item )
LABEL_19:
      sub_1C22094(Item, v12);
    v13 = Item->fields._size;
    if ( v13 < 1 )
      break;
    v14 = 0;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v9,
                                                            i,
                                                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
      if ( !Item )
        goto LABEL_19;
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            v14,
                                                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__);
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
bool __fastcall ServantCostumeReleaseMaster__isEnableMountCostume(
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

  if ( (byte_4BDCC63 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
    byte_4BDCC63 = 1;
  }
  if ( id < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
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
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
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
    sub_1C22094(list, *(_QWORD *)&svtId);
  }
  return 1;
}


void __fastcall ServantCostumeReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDCC6A & 1) == 0 )
  {
    sub_1C21E38(&ServantCostumeReleaseMaster___c_TypeInfo);
    byte_4BDCC6A = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ServantCostumeReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantCostumeReleaseMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeReleaseMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ServantCostumeReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, a);
  return a->fields.condGroup - b->fields.condGroup;
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetEntityList_b__4_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.priority - b->fields.priority;
}