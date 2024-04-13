void __fastcall ServantCostumeMaster___ctor(ServantCostumeMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB91B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB91B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    205,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
}


System_String_array *__fastcall ServantCostumeMaster__GetCostumeNames(
        ServantCostumeMaster_o *this,
        CostumeReleaseAnnounce_array *releases,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantCostumeMaster_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x4
  signed int max_length; // w8
  ServantCostumeMaster_o *v11; // x21
  __int64 v12; // x24
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x22
  CostumeReleaseAnnounce_o *v14; // x8
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_String_o *name; // x23
  BattleServantConfConponent_o *v22; // x0
  System_Int32_array **v23; // x1
  __int64 v25; // x0
  __int64 v26; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v5 = this;
  if ( (byte_42EB91F & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)releases, (_DWORD)method, v3);
    this = (ServantCostumeMaster_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42EB91F = 1;
  }
  entity = 0LL;
  if ( !releases )
LABEL_24:
    sub_B5D69C(this, releases);
  this = (ServantCostumeMaster_o *)sub_B5D5DC(string___TypeInfo, releases->max_length);
  max_length = releases->max_length;
  v11 = this;
  if ( max_length >= 1 )
  {
    v12 = 0LL;
    p_list = &this->fields.list;
    while ( (unsigned int)v12 < max_length )
    {
      v14 = releases->m_Items[v12];
      if ( !v14 )
        goto LABEL_24;
      this = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                         v5,
                                         &entity,
                                         v14->fields.svtId,
                                         v14->fields.costumeId,
                                         v9);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v11 )
          goto LABEL_24;
        name = entity->fields.name;
        if ( name )
        {
          this = (ServantCostumeMaster_o *)sub_B5D684(entity->fields.name, v11->klass->_1.element_class);
          if ( !this )
          {
LABEL_26:
            v26 = sub_B5D6BC(this);
            sub_B5D668(v26, 0LL);
          }
        }
        if ( (unsigned int)v12 >= LODWORD(v11->fields._MasterName_k__BackingField) )
          break;
        *p_list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)name;
        v22 = (BattleServantConfConponent_o *)p_list;
        v23 = (System_Int32_array **)name;
      }
      else
      {
        if ( !v11 )
          goto LABEL_24;
        this = (ServantCostumeMaster_o *)StringLiteral_1/*""*/;
        if ( StringLiteral_1/*""*/ )
        {
          this = (ServantCostumeMaster_o *)sub_B5D684(StringLiteral_1/*""*/, v11->klass->_1.element_class);
          if ( !this )
            goto LABEL_26;
          v23 = (System_Int32_array **)StringLiteral_1/*""*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( (unsigned int)v12 >= LODWORD(v11->fields._MasterName_k__BackingField) )
          break;
        v22 = (BattleServantConfConponent_o *)p_list;
        *p_list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v23;
      }
      sub_B5D560(v22, v23, v15, v16, v17, v18, v19, v20);
      max_length = releases->max_length;
      ++v12;
      ++p_list;
      if ( (int)v12 >= max_length )
        return (System_String_array *)v11;
    }
    v25 = sub_B5D6C8(this);
    sub_B5D668(v25, 0LL);
  }
  return (System_String_array *)v11;
}


System_Collections_Generic_List_int__o *__fastcall ServantCostumeMaster__GetCostumeSvtIdList(
        ServantCostumeMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_int__o *v23; // x20
  __int64 v24; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v27; // w21
  int32_t v28; // w22
  _DWORD *v29; // x23
  __int64 v30; // x10

  if ( (byte_42EB91D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&ServantCostumeEntity_TypeInfo, v20, v21, v22);
    byte_42EB91D = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v28,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v29 = list;
      v30 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v30
        || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v30 - 8) != ServantCostumeEntity_TypeInfo
        || !v23 )
      {
        break;
      }
      if ( !System_Collections_Generic_List_int___Contains(
              v23,
              *((_DWORD *)list + 4),
              (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v23,
          v29[4],
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      if ( ++v28 >= v27 )
        return v23;
    }
LABEL_15:
    sub_B5D69C(list, v24);
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_o *__fastcall ServantCostumeMaster__GetEntity(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EB919 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__,
      svtId,
      id,
      method);
    byte_42EB919 = 1;
  }
  PK = ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&id);
  return (ServantCostumeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeMaster__GetIsServantCostumeExist(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  __int64 v16; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x8

  if ( (byte_42EB91C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&ServantCostumeEntity_TypeInfo, v9, v10, v11);
    byte_42EB91C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v15,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_17;
    v16 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (ServantCostumeEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != ServantCostumeEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    v17 = (ServantCostumeEntity_c *)list->klass->_2.typeHierarchy[*(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1)
                                                                - 1] == ServantCostumeEntity_TypeInfo
        ? list
        : 0LL;
    if ( LODWORD(v17->fields.items) == svtId )
      return 1;
    if ( ++v15 >= v14 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeMaster__TryGetEntity(
        ServantCostumeMaster_o *this,
        ServantCostumeEntity_o **entity,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EB91A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&id);
    byte_42EB91A = 1;
  }
  PK = ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
}


ServantCostumeEntity_array *__fastcall ServantCostumeMaster__releasedCostumeEntityList(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        bool isChkHave,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x19
  __int64 v50; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v53; // w23
  int32_t v54; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x25
  __int64 v56; // x10
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v61; // x21
  struct ServantCostumeMaster___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7

  if ( (byte_42EB91E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, isChkHave, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_ServantCostumeEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_ServantCostumeEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&NetworkManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&ServantCostumeEntity_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41, v42);
    sub_B5D5C4(&Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, v43, v44, v45);
    sub_B5D5C4(&ServantCostumeMaster___c_TypeInfo, v46, v47, v48);
    byte_42EB91E = 1;
  }
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v53 = Count;
    v54 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v54,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v55 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v56 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v56
        || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v56 - 8) != ServantCostumeEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == svtId )
      {
        if ( (*(_DWORD *)(list + 84) & 0x10) == 0 && !isChkHave )
          goto LABEL_20;
        list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !list )
          break;
        MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)list,
                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        list = NetworkManager__get_UserId(0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                             MasterData_WarQuestSelectionMaster,
                             list,
                             svtId,
                             0LL);
        if ( EntityDefinitely )
        {
          list = UserServantCollectionEntity__IsCostumeGet(EntityDefinitely, v55->fields.missionConditionDetailId, 0LL);
          if ( (list & 1) != 0 )
          {
LABEL_20:
            if ( !v49 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v49,
              v55,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
          }
        }
      }
      if ( ++v54 >= v53 )
        goto LABEL_23;
    }
LABEL_33:
    sub_B5D69C(list, v50);
  }
LABEL_23:
  list = (int64_t)ServantCostumeMaster___c_TypeInfo;
  if ( (BYTE3(ServantCostumeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeMaster___c_TypeInfo);
    list = (int64_t)ServantCostumeMaster___c_TypeInfo;
  }
  static_fields = *(struct ServantCostumeMaster___c_StaticFields **)(list + 184);
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (*(_BYTE *)(list + 307) & 4) != 0 && !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
    }
    v61 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v61,
      Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantCostumeEntity___ctor__);
    v62 = ServantCostumeMaster___c_TypeInfo->static_fields;
    v62->__9__5_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v62->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
  }
  if ( !v49 )
    goto LABEL_33;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v49,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  return (ServantCostumeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v49,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
}


void __fastcall ServantCostumeMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D4E & 1) == 0 )
  {
    sub_B5D5C4(&ServantCostumeMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D4E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantCostumeMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCostumeMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ServantCostumeMaster___c___ctor(ServantCostumeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantCostumeMaster___c___releasedCostumeEntityList_b__5_0(
        ServantCostumeMaster___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}