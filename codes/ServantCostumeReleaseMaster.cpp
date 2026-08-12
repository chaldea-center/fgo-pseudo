void ServantCostumeReleaseMaster___ctor(ServantCostumeReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597117B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
    byte_597117B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    213,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
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
  __int64 v10; // x1
  ServantCostumeReleaseMaster___c_c *v11; // x0
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__5_0; // x22
  Il2CppObject *v14; // x23
  struct ServantCostumeReleaseMaster___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  il2cpp_array_size_t max_length; // x25
  Il2CppObject *v31; // x8
  int monitor_high; // w23
  __int64 v33; // x26
  Il2CppObject *v34; // x22
  System_Collections_Generic_List_object__o *v35; // x23
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  int v46; // w8
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x0
  System_Collections_Generic_List_object__o *v51; // x21
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0

  if ( (byte_597117E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_ServantCostumeReleaseEntity___);
    sub_2213A60(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___91662376);
    sub_2213A60(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
    sub_2213A60(&System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
    sub_2213A60(&Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__);
    sub_2213A60(&ServantCostumeReleaseMaster___c_TypeInfo);
    byte_597117E = 1;
  }
  EntityList = (System_Object_array *)ServantCostumeReleaseMaster__GetEntityList(this, svtId, costumeId, method);
  v8 = sub_2213CCC(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntityList, 0) )
  {
    v11 = ServantCostumeReleaseMaster___c_TypeInfo;
    if ( !*(&ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo, v10);
      v11 = ServantCostumeReleaseMaster___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__5_0 = (System_Comparison_T__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !*(&v11->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v11, v10);
        static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__5_0,
        v14,
        Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__,
        0);
      v15 = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
      v15->__9__5_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__5_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__5_0, (int32_t)_9__5_0, v16, v17, v18, v19, v20, v21);
    }
    System_Array__Sort_object__58432120(
      EntityList,
      _9__5_0,
      (const MethodInfo_37B9A78 *)Method_System_Array_Sort_ServantCostumeReleaseEntity___);
    if ( !EntityList )
      goto LABEL_40;
    max_length = EntityList->max_length;
    if ( !(_DWORD)max_length )
      goto LABEL_41;
    v31 = EntityList->m_Items[0];
    if ( !v31 )
      goto LABEL_40;
    if ( (int)max_length >= 1 )
    {
      monitor_high = HIDWORD(v31[2].monitor);
      v33 = 0;
      while ( (unsigned int)v33 < LODWORD(EntityList->max_length) )
      {
        v34 = EntityList->m_Items[v33];
        if ( !v34 )
          goto LABEL_40;
        if ( LODWORD(v34[1].monitor) == 1 )
        {
          if ( monitor_high == HIDWORD(v34[2].monitor) )
          {
            if ( !v8 )
              goto LABEL_40;
          }
          else
          {
            v35 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor_71841080(
              v35,
              (System_Collections_Generic_IEnumerable_T__o *)v8,
              (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___91662376);
            if ( !v9 )
              goto LABEL_40;
            items = v9->fields._items;
            v43 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
            ++v9->fields._version;
            if ( !items )
              goto LABEL_40;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v35,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v45 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v45[4] = (Il2CppClass *)v35;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 4), (int32_t)v35, v36, v37, v38, v39, v40, v41);
            }
            if ( !v8 )
              goto LABEL_40;
            v24 = (System_String_o *)*(unsigned int *)(v8 + 24);
            monitor_high = HIDWORD(v34[2].monitor);
            v46 = *(_DWORD *)(v8 + 28) + 1;
            *(_DWORD *)(v8 + 24) = 0;
            *(_DWORD *)(v8 + 28) = v46;
            if ( (int)v24 >= 1 )
              System_Array__Clear(*(System_Array_o **)(v8 + 16), 0, (int32_t)v24, 0);
          }
          v47 = *(_QWORD *)(v8 + 16);
          v48 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
          ++*(_DWORD *)(v8 + 28);
          if ( !v47 )
            goto LABEL_40;
          v49 = *(int *)(v8 + 24);
          if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v8,
              v34,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = v47 + 8 * v49;
            *(_DWORD *)(v8 + 24) = v49 + 1;
            *(_QWORD *)(v50 + 32) = v34;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 32), (int32_t)v34, v24, v25, v26, v27, v28, v29);
          }
        }
        if ( (_DWORD)max_length == (_DWORD)++v33 )
          goto LABEL_34;
      }
LABEL_41:
      sub_2213CE4(v22);
    }
LABEL_34:
    v51 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_71841080(
      v51,
      (System_Collections_Generic_IEnumerable_T__o *)v8,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___91662376);
    if ( !v9
      || (v58 = v9->fields._items,
          v59 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__,
          ++v9->fields._version,
          !v58) )
    {
LABEL_40:
      sub_2213CDC(v22, v23);
    }
    v60 = v9->fields._size;
    if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        (Il2CppObject *)v51,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v58->obj.klass + v60;
      v9->fields._size = v60 + 1;
      v61[4] = (Il2CppClass *)v51;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v61 + 4), (int32_t)v51, v52, v53, v54, v55, v56, v57);
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

  if ( (byte_5971179 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
    byte_5971179 = 1;
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
                                            (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
}


ServantCostumeReleaseEntity_array *ServantCostumeReleaseMaster__GetEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *v19; // x25
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v26; // x21
  struct ServantCostumeReleaseMaster___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t baseSvtId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_597117D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
    sub_2213A60(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
    sub_2213A60(&Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__);
    sub_2213A60(&ServantCostumeReleaseMaster___c_TypeInfo);
    byte_597117D = 1;
  }
  baseSvtId = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
      if ( !list )
        break;
      v19 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 5) == costumeId )
      {
        if ( *((_DWORD *)list + 4) == svtId
          || (list = (void *)ServantCostumeReleaseEntity__TryGetBaseSvtId(
                               (ServantCostumeReleaseEntity_o *)list,
                               &baseSvtId,
                               (const MethodInfo *)v13),
              ((unsigned __int8)list & 1) != 0)
          && baseSvtId == svtId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v21 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v19,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v19;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v19, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_18;
    }
LABEL_26:
    sub_2213CDC(list, v8);
  }
LABEL_18:
  list = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( !*(&ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo, v8);
    list = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  static_fields = (struct ServantCostumeReleaseMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v8);
      static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v26, Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, 0);
    v27 = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    v27->__9__4_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__4_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->__9__4_0, (int32_t)_9__4_0, v28, v29, v30, v31, v32, v33);
  }
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_71849708(
    v7,
    _9__4_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
  return (ServantCostumeReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v7,
                                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
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
  il2cpp_array_size_t max_length; // x22
  __int64 v14; // x23
  Il2CppObject *MasterData_object; // x20
  int32_t num; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t qp; // [xsp+14h] [xbp-5Ch] BYREF
  System_Int32_array *itemNums; // [xsp+18h] [xbp-58h] BYREF
  System_Int32_array *itemIds; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_5971180 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971180 = 1;
  }
  itemIds = 0;
  itemNums = 0;
  qp = 0;
  entity = 0;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                this,
                                targetEntity,
                                svtId,
                                userSvtId,
                                method);
  result = 0;
  if ( !IsCostumeReleaseCondClear )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CombineCostumeMaster___),
        !targetEntity)
    || !Instance )
  {
LABEL_33:
    sub_2213CDC(Instance, v12);
  }
  CombineCostumeMaster__CheckNeedCombineInfo(
    (CombineCostumeMaster_o *)Instance,
    targetEntity->fields.svtId,
    targetEntity->fields.id,
    &itemIds,
    &itemNums,
    &qp,
    0);
  if ( !itemIds )
    return 1;
  max_length = itemIds->max_length;
  if ( (int)max_length < 1 )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !itemIds )
      goto LABEL_33;
    if ( (unsigned int)v14 >= LODWORD(itemIds->max_length) )
      goto LABEL_34;
    if ( !MasterData_object )
      goto LABEL_33;
    Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                  (UserItemMaster_o *)MasterData_object,
                                  &entity,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  itemIds->m_Items[v14],
                                  0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_33;
      num = entity->fields.num;
    }
    else
    {
      num = 0;
    }
    if ( !itemNums )
      goto LABEL_33;
    if ( (unsigned int)v14 >= LODWORD(itemNums->max_length) )
LABEL_34:
      sub_2213CE4(Instance);
    if ( itemNums->m_Items[v14] > num )
      return 0;
    if ( (_DWORD)max_length == (_DWORD)++v14 )
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
  __int64 v15; // x1
  int64_t startedAt; // x25
  const MethodInfo *v17; // x4

  if ( (byte_5971182 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971182 = 1;
  }
  if ( ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(this, targetEntity, svtId, userSvtId, method) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___)) == 0
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       v12->fields.eventId,
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0 )
    {
LABEL_21:
      sub_2213CDC(Instance, v10);
    }
    v14 = (EventEntity_o *)Instance;
    if ( !(IsShortEventItem | !EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0)) )
      goto LABEL_19;
    startedAt = v14->fields.startedAt;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
    if ( startedAt <= NetworkManager__getTime(0)
      && !EventEntity__IsOpen(v14, 0, 0)
      && (!IsShortEventItem
       || ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(this, targetEntity, svtId, userSvtId, v17)) )
    {
LABEL_19:
      LOBYTE(ListBySvtIdAndCostumeId) = 1;
      return (char)ListBySvtIdAndCostumeId;
    }
  }
  LOBYTE(ListBySvtIdAndCostumeId) = 0;
  return (char)ListBySvtIdAndCostumeId;
}


bool ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  bool v12; // w27
  int32_t v13; // w24
  const MethodInfo *v14; // x2
  ServantCostumeReleaseEntity_o *v15; // x25
  int32_t condType; // w26
  int32_t condNum; // w25
  int32_t baseSvtId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5971181 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
    sub_2213A60(&CondType_TypeInfo);
    byte_5971181 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  baseSvtId = 0;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
      if ( !list )
        break;
      v15 = (ServantCostumeReleaseEntity_o *)list;
      if ( LODWORD(list->fields.items) == svtId
        || (list = (System_Collections_ObjectModel_Collection_T__o *)ServantCostumeReleaseEntity__TryGetBaseSvtId(
                                                                       (ServantCostumeReleaseEntity_o *)list,
                                                                       &baseSvtId,
                                                                       v14),
            ((unsigned __int8)list & 1) != 0)
        && baseSvtId == svtId )
      {
        if ( !targetEntity )
          break;
        if ( v15->fields.costumeId == targetEntity->fields.id && v15->fields.releaseType == 2 )
        {
          condType = v15->fields.condType;
          if ( (condType & 0xFFFFFFFE) == 6 )
          {
            condNum = v15->fields.condNum;
            if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, targetEntity);
            if ( !CondType__IsOpenForUsrSvt(condType, condNum, userSvtId, 0) )
              return v12;
          }
          else if ( condType == 12 )
          {
            if ( !ServantCostumeEntity__CheckEnableReleaseTime(targetEntity, (const MethodInfo *)targetEntity) )
              return v12;
          }
          else if ( !ServantCostumeReleaseEntity__IsAvailable(v15, (const MethodInfo *)targetEntity) )
          {
            return v12;
          }
        }
      }
      v12 = ++v13 >= v11;
      if ( v11 == v13 )
        return v12;
    }
LABEL_27:
    sub_2213CDC(list, targetEntity);
  }
  return 1;
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

  if ( (byte_597117A & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
    byte_597117A = 1;
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
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
}


bool ServantCostumeReleaseMaster__checkItemHaving(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *CostumeCondGroupEntityList; // x0
  int size; // w23
  System_Collections_Generic_List_object__o *v9; // x19
  int32_t v10; // w21
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v12; // x1
  int v13; // w26
  bool v14; // w20
  int32_t v15; // w22

  if ( (byte_597117F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
    byte_597117F = 1;
  }
  CostumeCondGroupEntityList = ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
                                 this,
                                 svtId,
                                 costumeId,
                                 method);
  if ( CostumeCondGroupEntityList )
  {
    size = CostumeCondGroupEntityList->fields._size;
    v9 = (System_Collections_Generic_List_object__o *)CostumeCondGroupEntityList;
    if ( size )
    {
      if ( size < 1 )
        return 0;
      v10 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              v9,
                                                              v10,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
        if ( !Item )
LABEL_20:
          sub_2213CDC(Item, v12);
        v13 = Item->fields._size;
        v14 = v13 < 1;
        if ( v13 < 1 )
          break;
        v15 = 0;
        while ( 1 )
        {
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v9,
                                                                v10,
                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
          if ( !Item )
            goto LABEL_20;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                v15,
                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__);
          if ( !Item )
            goto LABEL_20;
          if ( !ServantCostumeReleaseEntity__IsAvailable((ServantCostumeReleaseEntity_o *)Item, v12) )
            break;
          if ( v13 == ++v15 )
            return 1;
        }
        if ( ++v10 == size )
          return v14;
      }
    }
  }
  return 1;
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

  if ( (byte_597117C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
    byte_597117C = 1;
  }
  if ( id < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
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
    sub_2213CDC(list, *(_QWORD *)&svtId);
  }
  return 1;
}


void ServantCostumeReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971183 & 1) == 0 )
  {
    sub_2213A60(&ServantCostumeReleaseMaster___c_TypeInfo);
    byte_5971183 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantCostumeReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCostumeReleaseMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeReleaseMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantCostumeReleaseMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, a);
  return a->fields.condGroup - b->fields.condGroup;
}


int32_t ServantCostumeReleaseMaster___c___GetEntityList_b__4_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.priority - b->fields.priority;
}