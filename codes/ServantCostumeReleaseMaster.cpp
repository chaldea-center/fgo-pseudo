void __fastcall ServantCostumeReleaseMaster___ctor(ServantCostumeReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCABA & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__,
      method);
    byte_49FCABA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    207,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  ServantCostumeReleaseMaster___c_c *v27; // x0
  System_Comparison_T__o *_9__5_0; // x22
  Il2CppObject *v29; // x23
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  int32_t v36; // w3
  __int64 v37; // x8
  ServantCostumeReleaseEntity_o *v38; // x9
  int v39; // w27
  int32_t condGroup; // w23
  int v41; // w28
  ServantCostumeReleaseEntity_o *v42; // x22
  System_Collections_Generic_List_object__o *v43; // x23
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  int v50; // w8
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x0
  System_Collections_Generic_List_object__o *v55; // x21
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0

  if ( (byte_49FCABD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_ServantCostumeReleaseEntity___, *(_QWORD *)&svtId);
    sub_1B640C8(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___75665376, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v15);
    sub_1B640C8(&Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__, v16);
    sub_1B640C8(&ServantCostumeReleaseMaster___c_TypeInfo, v17);
    byte_49FCABD = 1;
  }
  EntityList = ServantCostumeReleaseMaster__GetEntityList(this, svtId, costumeId, method);
  v21 = sub_1B64314(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v19, v20);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
  v27 = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    v27 = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Comparison_T__o *)v27->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = ServantCostumeReleaseMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v25, v26);
    System_Comparison_object____ctor(
      _9__5_0,
      v29,
      Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__,
      0LL);
    static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__5_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v31, v32);
  }
  System_Array__Sort_object__48264584(
    (System_Object_array *)EntityList,
    _9__5_0,
    (const MethodInfo_2E07588 *)Method_System_Array_Sort_ServantCostumeReleaseEntity___);
  if ( !EntityList )
    goto LABEL_40;
  v37 = *(_QWORD *)&EntityList->max_length;
  if ( !(_DWORD)v37 )
LABEL_33:
    sub_1B6432C(v33, v34);
  v38 = EntityList->m_Items[0];
  if ( !v38 )
LABEL_40:
    sub_1B64324(v33);
  v39 = v37 - 1;
  if ( (int)v37 >= 1 )
  {
    condGroup = v38->fields.condGroup;
    v41 = 0;
    while ( 1 )
    {
      v42 = EntityList->m_Items[v41];
      if ( !v42 )
        goto LABEL_40;
      if ( v42->fields.releaseType == 1 )
      {
        if ( condGroup == v42->fields.condGroup )
        {
          if ( !v21 )
            goto LABEL_40;
        }
        else
        {
          v43 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                               v34,
                                                               v35);
          System_Collections_Generic_List_object____ctor_55234504(
            v43,
            (System_Collections_Generic_IEnumerable_T__o *)v21,
            (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___75665376);
          if ( !v24 )
            goto LABEL_40;
          items = v24->fields._items;
          v47 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
          ++v24->fields._version;
          if ( !items )
            goto LABEL_40;
          size = v24->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)v43,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v49[4] = (Il2CppClass *)v43;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v43, v44, v45);
          }
          if ( !v21 )
            goto LABEL_40;
          LODWORD(v35) = *(_DWORD *)(v21 + 24);
          condGroup = v42->fields.condGroup;
          v50 = *(_DWORD *)(v21 + 28) + 1;
          *(_DWORD *)(v21 + 24) = 0;
          *(_DWORD *)(v21 + 28) = v50;
          if ( (int)v35 >= 1 )
            System_Array__Clear(*(System_Array_o **)(v21 + 16), 0, v35, 0LL);
        }
        v51 = *(_QWORD *)(v21 + 16);
        v52 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
        ++*(_DWORD *)(v21 + 28);
        if ( !v51 )
          goto LABEL_40;
        v53 = *(int *)(v21 + 24);
        if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v21,
            (Il2CppObject *)v42,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = v51 + 8 * v53;
          *(_DWORD *)(v21 + 24) = v53 + 1;
          *(_QWORD *)(v54 + 32) = v42;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 32), (int32_t)v42, v35, v36);
        }
      }
      if ( v39 == v41 )
        break;
      if ( ++v41 >= EntityList->max_length )
        goto LABEL_33;
    }
  }
  v55 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor_55234504(
    v55,
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___75665376);
  if ( !v24 )
    goto LABEL_40;
  v58 = v24->fields._items;
  v59 = Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__;
  ++v24->fields._version;
  if ( !v58 )
    goto LABEL_40;
  v60 = v24->fields._size;
  if ( (unsigned int)v60 >= v58->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      (Il2CppObject *)v55,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = &v58->obj.klass + v60;
    v24->fields._size = v60 + 1;
    v61[4] = (Il2CppClass *)v55;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)v55, v56, v57);
  }
  return (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)v24;
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

  if ( (byte_49FCAB8 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FCAB8 = 1;
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
                                            (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
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
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x19
  void *list; // x0
  int32_t Count; // w0
  Il2CppClass *v20; // x1
  __int64 v21; // x2
  int32_t v22; // w23
  int32_t v23; // w24
  int32_t v24; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x20
  Il2CppObject *v31; // x21
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_49FCABC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v13);
    sub_1B640C8(&ServantCostumeReleaseEntity_TypeInfo, v14);
    sub_1B640C8(&Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, v15);
    sub_1B640C8(&ServantCostumeReleaseMaster___c_TypeInfo, v16);
    byte_49FCABC = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&costumeId);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v23,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v20 = (Il2CppClass *)list;
      methodPtr_low = LOBYTE(ServantCostumeReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCostumeReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantCostumeReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == svtId && *((_DWORD *)list + 5) == costumeId )
      {
        if ( !v17 )
          break;
        items = v17->fields._items;
        v27 = Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)list,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v29[4] = v20;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v20, v21, v24);
        }
      }
      if ( v22 == ++v23 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1B64324(list);
  }
LABEL_18:
  list = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    list = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantCostumeReleaseMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)list + 23);
    v30 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v20, v21);
    System_Comparison_object____ctor(v30, v31, Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, 0LL);
    static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)v30, v33, v34);
  }
  if ( !v17 )
    goto LABEL_26;
  System_Collections_Generic_List_object___Sort_55243320(
    v17,
    v30,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
  return (ServantCostumeReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v17,
                                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
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
  int64_t Instance; // x0
  signed int max_length; // w20
  il2cpp_array_size_t v16; // w22
  Il2CppObject *MasterData_object; // x19
  __int64 v18; // x1
  int32_t num; // w8
  UserItemEntity_o *v20; // [xsp+0h] [xbp-60h] BYREF
  int32_t qp; // [xsp+Ch] [xbp-54h] BYREF
  System_Int32_array *itemNums; // [xsp+10h] [xbp-50h] BYREF
  System_Int32_array *itemIds; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49FCABF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineCostumeMaster___, targetEntity);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FCABF = 1;
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineCostumeMaster___),
        !targetEntity)
    || !Instance )
  {
LABEL_29:
    sub_1B64324(Instance);
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
LABEL_24:
    Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( Instance )
      return qp <= *(_DWORD *)(Instance + 96);
    goto LABEL_29;
  }
  v16 = 0;
  while ( 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !itemIds )
      goto LABEL_29;
    if ( v16 >= itemIds->max_length )
      goto LABEL_30;
    if ( !MasterData_object )
      goto LABEL_29;
    Instance = UserItemMaster__TryGetEntity(
                 (UserItemMaster_o *)MasterData_object,
                 &v20,
                 Instance,
                 itemIds->m_Items[v16 + 1],
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_29;
      num = v20->fields.num;
    }
    else
    {
      num = 0;
    }
    if ( !itemNums )
      goto LABEL_29;
    if ( v16 >= itemNums->max_length )
LABEL_30:
      sub_1B6432C(Instance, v18);
    if ( itemNums->m_Items[v16 + 1] > num )
      return 0;
    if ( max_length == ++v16 )
      goto LABEL_24;
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
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  EventCombineCostumeEntity_o *v15; // x24
  bool IsShortEventItem; // w23
  EventEntity_o *v17; // x24
  int64_t startedAt; // x25
  const MethodInfo *v19; // x4

  if ( (byte_49FCAC1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, targetEntity);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FCAC1 = 1;
  }
  if ( !ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(this, targetEntity, svtId, userSvtId, method) )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  if ( !targetEntity || !Instance )
    goto LABEL_21;
  ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                              (EventCombineCostumeMaster_o *)Instance,
                              svtId,
                              targetEntity->fields.id,
                              0LL);
  if ( !ListBySvtIdAndCostumeId )
    return (char)ListBySvtIdAndCostumeId;
  v15 = ListBySvtIdAndCostumeId;
  IsShortEventItem = EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v15->fields.eventId,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_21:
    sub_1B64324(Instance);
  }
  v17 = (EventEntity_o *)Instance;
  if ( IsShortEventItem | !EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    startedAt = v17->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( startedAt > NetworkManager__getTime(0LL)
      || EventEntity__IsOpen(v17, 0, 0LL)
      || IsShortEventItem
      && !ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(this, targetEntity, svtId, userSvtId, v19) )
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
  __int64 v11; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v14; // w23
  int32_t v15; // w24
  const MethodInfo *v16; // x1
  __int64 methodPtr_low; // x10
  int32_t v18; // w25
  int32_t v19; // w26

  if ( (byte_49FCAC0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, targetEntity);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&CondType_TypeInfo, v10);
    sub_1B640C8(&ServantCostumeReleaseEntity_TypeInfo, v11);
    byte_49FCAC0 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_26:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v15,
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_26;
    methodPtr_low = LOBYTE(ServantCostumeReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(ServantCostumeReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantCostumeReleaseEntity_TypeInfo )
    {
      goto LABEL_26;
    }
    if ( *((_DWORD *)list + 4) == svtId )
    {
      if ( !targetEntity )
        goto LABEL_26;
      if ( *((_DWORD *)list + 5) == targetEntity->fields.id && *((_DWORD *)list + 6) == 2 )
      {
        v18 = *((_DWORD *)list + 7);
        if ( (v18 & 0xFFFFFFFE) != 6 )
        {
          if ( v18 == 12 )
          {
            if ( !ServantCostumeEntity__CheckEnableReleaseTime(targetEntity, v16) )
              return 0;
          }
          else if ( !ServantCostumeReleaseEntity__IsAvailable((ServantCostumeReleaseEntity_o *)list, v16) )
          {
            return 0;
          }
          goto LABEL_23;
        }
        v19 = *((_DWORD *)list + 9);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpenForUsrSvt(v18, v19, userSvtId, 0LL) )
          return 0;
      }
    }
LABEL_23:
    if ( v14 == ++v15 )
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

  if ( (byte_49FCAB9 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__,
      entity);
    byte_49FCAB9 = 1;
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
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
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
  int v15; // w25
  int32_t v16; // w21
  const MethodInfo *v17; // x1

  if ( (byte_49FCABE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__, v9);
    byte_49FCABE = 1;
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
                                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
    if ( !Item )
LABEL_19:
      sub_1B64324(Item);
    v15 = Item->fields._size;
    if ( v15 < 1 )
      break;
    v16 = 0;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v12,
                                                            i,
                                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
      if ( !Item )
        goto LABEL_19;
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            v16,
                                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__);
      if ( !Item )
        goto LABEL_19;
      if ( !ServantCostumeReleaseEntity__IsAvailable((ServantCostumeReleaseEntity_o *)Item, v17) )
        break;
      if ( v15 == ++v16 )
        return 1;
    }
  }
  return v15 < 1;
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
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w24
  int32_t v16; // w25
  __int64 methodPtr_low; // x10
  int klass_high; // w8

  if ( (byte_49FCABB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1B640C8(&ServantCostumeReleaseEntity_TypeInfo, v12);
    byte_49FCABB = 1;
  }
  if ( id < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(ServantCostumeReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantCostumeReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCostumeReleaseEntity_TypeInfo )
      {
        break;
      }
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
      if ( v15 == ++v16 )
        return 1;
    }
LABEL_21:
    sub_1B64324(list);
  }
  return 1;
}


void __fastcall ServantCostumeReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCAC2 & 1) == 0 )
  {
    sub_1B640C8(&ServantCostumeReleaseMaster___c_TypeInfo, v1);
    byte_49FCAC2 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantCostumeReleaseMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantCostumeReleaseMaster___c_TypeInfo->static_fields->__9 = (struct ServantCostumeReleaseMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantCostumeReleaseMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return a->fields.condGroup - b->fields.condGroup;
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetEntityList_b__4_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}