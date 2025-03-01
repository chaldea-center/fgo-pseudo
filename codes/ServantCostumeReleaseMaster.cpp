void __fastcall ServantCostumeReleaseMaster___ctor(ServantCostumeReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFDE90 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__,
      method);
    byte_4BFDE90 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    211,
    (const MethodInfo_327D914 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x8
  ServantCostumeReleaseEntity_o *v40; // x9
  int v41; // w27
  int32_t condGroup; // w23
  int v43; // w28
  int64_t v44; // x22
  System_Collections_Generic_List_object__o *v45; // x23
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  int v56; // w8
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x0
  System_Collections_Generic_List_object__o *v61; // x21
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0

  if ( (byte_4BFDE93 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Sort_ServantCostumeReleaseEntity___, *(_QWORD *)&svtId);
    sub_1C2E12C(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___77715928, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__, v13);
    sub_1C2E12C(&System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo, v14);
    sub_1C2E12C(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v15);
    sub_1C2E12C(&Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__, v16);
    sub_1C2E12C(&ServantCostumeReleaseMaster___c_TypeInfo, v17);
    byte_4BFDE93 = 1;
  }
  EntityList = ServantCostumeReleaseMaster__GetEntityList(this, svtId, costumeId, method);
  v19 = sub_1C2E378(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v19,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
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
    _9__5_0 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__5_0,
      v23,
      Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__,
      0LL);
    static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__5_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v25, v26, v27, v28, v29, v30);
  }
  System_Array__Sort_object__49934080(
    (System_Object_array *)EntityList,
    _9__5_0,
    (const MethodInfo_2F9EF00 *)Method_System_Array_Sort_ServantCostumeReleaseEntity___);
  if ( !EntityList )
    goto LABEL_40;
  v39 = *(_QWORD *)&EntityList->max_length;
  if ( !(_DWORD)v39 )
LABEL_33:
    sub_1C2E390(v31, v32);
  v40 = EntityList->m_Items[0];
  if ( !v40 )
LABEL_40:
    sub_1C2E388(v31, v32);
  v41 = v39 - 1;
  if ( (int)v39 >= 1 )
  {
    condGroup = v40->fields.condGroup;
    v43 = 0;
    while ( 1 )
    {
      v44 = (int64_t)EntityList->m_Items[v43];
      if ( !v44 )
        goto LABEL_40;
      if ( *(_DWORD *)(v44 + 24) == 1 )
      {
        if ( condGroup == *(_DWORD *)(v44 + 44) )
        {
          if ( !v19 )
            goto LABEL_40;
        }
        else
        {
          v45 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor_57061792(
            v45,
            (System_Collections_Generic_IEnumerable_T__o *)v19,
            (const MethodInfo_366B1A0 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___77715928);
          if ( !v20 )
            goto LABEL_40;
          items = v20->fields._items;
          v53 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
          ++v20->fields._version;
          if ( !items )
            goto LABEL_40;
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v20,
              (Il2CppObject *)v45,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v55[4] = (Il2CppClass *)v45;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v45, v46, v47, v48, v49, v50, v51);
          }
          if ( !v19 )
            goto LABEL_40;
          v33 = *(unsigned int *)(v19 + 24);
          condGroup = *(_DWORD *)(v44 + 44);
          v56 = *(_DWORD *)(v19 + 28) + 1;
          *(_DWORD *)(v19 + 24) = 0;
          *(_DWORD *)(v19 + 28) = v56;
          if ( (int)v33 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v19 + 16), 0, v33, 0LL);
        }
        v57 = *(_QWORD *)(v19 + 16);
        v58 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
        ++*(_DWORD *)(v19 + 28);
        if ( !v57 )
          goto LABEL_40;
        v59 = *(int *)(v19 + 24);
        if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v19,
            (Il2CppObject *)v44,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = v57 + 8 * v59;
          *(_DWORD *)(v19 + 24) = v59 + 1;
          *(_QWORD *)(v60 + 32) = v44;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v60 + 32), v44, v33, v34, v35, v36, v37, v38);
        }
      }
      if ( v41 == v43 )
        break;
      if ( ++v43 >= EntityList->max_length )
        goto LABEL_33;
    }
  }
  v61 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_57061792(
    v61,
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (const MethodInfo_366B1A0 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___77715928);
  if ( !v20 )
    goto LABEL_40;
  v68 = v20->fields._items;
  v69 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
  ++v20->fields._version;
  if ( !v68 )
    goto LABEL_40;
  v70 = v20->fields._size;
  if ( (unsigned int)v70 >= v68->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v61,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = &v68->obj.klass + v70;
    v20->fields._size = v70 + 1;
    v71[4] = (Il2CppClass *)v61;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v71 + 4), (int64_t)v61, v62, v63, v64, v65, v66, v67);
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

  if ( (byte_4BFDE8E & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BFDE8E = 1;
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
                                            (const MethodInfo_327FC38 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
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
  int64_t v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Comparison_T__o *v32; // x20
  Il2CppObject *v33; // x21
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4BFDE92 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__,
      *(_QWORD *)&svtId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__, v7);
    sub_1C2E12C(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v12);
    sub_1C2E12C(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v13);
    sub_1C2E12C(&Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, v14);
    sub_1C2E12C(&ServantCostumeReleaseMaster___c_TypeInfo, v15);
    byte_4BFDE92 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
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
               (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
      if ( !list )
        break;
      v17 = (int64_t)list;
      if ( *((_DWORD *)list + 4) == svtId && *((_DWORD *)list + 5) == costumeId )
      {
        if ( !v16 )
          break;
        items = v16->fields._items;
        v29 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)list,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v17;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v31 + 4), v17, v22, v23, v24, v25, v26, v27);
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_16;
    }
LABEL_24:
    sub_1C2E388(list, v17);
  }
LABEL_16:
  list = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    list = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  v32 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v32 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantCostumeReleaseMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)**((_QWORD **)list + 23);
    v32 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(v32, v33, Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, 0LL);
    static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)v32;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)v32, v35, v36, v37, v38, v39, v40);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_57070448(
    v16,
    v32,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
  return (ServantCostumeReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v16,
                                                (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x20
  int32_t num; // w8
  UserItemEntity_o *v20; // [xsp+0h] [xbp-70h] BYREF
  int32_t qp; // [xsp+Ch] [xbp-64h] BYREF
  System_Int32_array *itemNums; // [xsp+10h] [xbp-60h] BYREF
  System_Int32_array *itemIds; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4BFDE95 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_CombineCostumeMaster___, targetEntity);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_1C2E12C(&NetworkManager_TypeInfo, v10);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BFDE95 = 1;
  }
  itemNums = 0LL;
  itemIds = 0LL;
  qp = 0;
  v20 = 0LL;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                this,
                                targetEntity,
                                svtId,
                                userSvtId,
                                method);
  result = 0;
  if ( !IsCostumeReleaseCondClear )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_CombineCostumeMaster___),
        !targetEntity)
    || !Instance )
  {
LABEL_33:
    sub_1C2E388(Instance, v15);
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
  v17 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BF81D5 )
    {
      sub_1C2E12C(&NetworkManager_TypeInfo, v15);
      byte_4BF81D5 = 1;
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
                                  &v20,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  itemIds->m_Items[v17 + 1],
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_33;
      num = v20->fields.num;
    }
    else
    {
      num = 0;
    }
    if ( !itemNums )
      goto LABEL_33;
    if ( v17 >= itemNums->max_length )
LABEL_34:
      sub_1C2E390(Instance, v15);
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

  if ( (byte_4BFDE97 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, targetEntity);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1C2E12C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1C2E12C(&NetworkManager_TypeInfo, v11);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BFDE97 = 1;
  }
  if ( !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(this, targetEntity, svtId, userSvtId, method) )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v16->fields.eventId,
                     (const MethodInfo_327B180 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_21:
    sub_1C2E388(Instance, v14);
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

  if ( (byte_4BFDE96 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__,
      targetEntity);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__, v9);
    sub_1C2E12C(&CondType_TypeInfo, v10);
    byte_4BFDE96 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_24:
    sub_1C2E388(list, targetEntity);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
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
             (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
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

  if ( (byte_4BFDE8F & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4BFDE8F = 1;
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
           (const MethodInfo_327FC84 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
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

  if ( (byte_4BFDE94 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Count__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__, v9);
    byte_4BFDE94 = 1;
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
                                                          (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
    if ( !Item )
LABEL_19:
      sub_1C2E388(Item, v15);
    v16 = Item->fields._size;
    if ( v16 < 1 )
      break;
    v17 = 0;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v12,
                                                            i,
                                                            (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
      if ( !Item )
        goto LABEL_19;
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            v17,
                                                            (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__);
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

  if ( (byte_4BFDE91 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__,
      *(_QWORD *)&svtId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__, v11);
    byte_4BFDE91 = 1;
  }
  if ( id < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Count__);
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
                                                                 (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_ServantCostumeReleaseEntity__get_Item__);
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
    sub_1C2E388(list, *(_QWORD *)&svtId);
  }
  return 1;
}


void __fastcall ServantCostumeReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFDE98 & 1) == 0 )
  {
    sub_1C2E12C(&ServantCostumeReleaseMaster___c_TypeInfo, v1);
    byte_4BFDE98 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(ServantCostumeReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantCostumeReleaseMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeReleaseMaster___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ServantCostumeReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, a);
  return a->fields.condGroup - b->fields.condGroup;
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetEntityList_b__4_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C2E388(this, a);
  return a->fields.priority - b->fields.priority;
}