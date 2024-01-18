void __fastcall ServantCostumeMaster___ctor(ServantCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AAD4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__, method);
    byte_418AAD4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    204,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
}


System_String_array *__fastcall ServantCostumeMaster__GetCostumeNames(
        ServantCostumeMaster_o *this,
        CostumeReleaseAnnounce_array *releases,
        const MethodInfo *method)
{
  ServantCostumeMaster_o *v4; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  signed int max_length; // w8
  ServantCostumeMaster_o *v8; // x21
  __int64 v9; // x24
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x22
  CostumeReleaseAnnounce_o *v11; // x8
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_String_o *name; // x23
  BattleServantConfConponent_o *v19; // x0
  System_Int32_array **v20; // x1
  __int64 v22; // x0
  __int64 v23; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_418AAD8 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, releases);
    this = (ServantCostumeMaster_o *)sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418AAD8 = 1;
  }
  entity = 0LL;
  if ( !releases )
LABEL_24:
    sub_B2C434(this, releases);
  this = (ServantCostumeMaster_o *)sub_B2C374(string___TypeInfo, releases->max_length);
  max_length = releases->max_length;
  v8 = this;
  if ( max_length >= 1 )
  {
    v9 = 0LL;
    p_list = &this->fields.list;
    while ( (unsigned int)v9 < max_length )
    {
      v11 = releases->m_Items[v9];
      if ( !v11 )
        goto LABEL_24;
      this = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                         v4,
                                         &entity,
                                         v11->fields.svtId,
                                         v11->fields.costumeId,
                                         v6);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v8 )
          goto LABEL_24;
        name = entity->fields.name;
        if ( name )
        {
          this = (ServantCostumeMaster_o *)sub_B2C41C(entity->fields.name, v8->klass->_1.element_class);
          if ( !this )
          {
LABEL_26:
            v23 = sub_B2C454(this);
            sub_B2C400(v23, 0LL);
          }
        }
        if ( (unsigned int)v9 >= LODWORD(v8->fields._MasterName_k__BackingField) )
          break;
        *p_list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)name;
        v19 = (BattleServantConfConponent_o *)p_list;
        v20 = (System_Int32_array **)name;
      }
      else
      {
        if ( !v8 )
          goto LABEL_24;
        this = (ServantCostumeMaster_o *)StringLiteral_1/*""*/;
        if ( StringLiteral_1/*""*/ )
        {
          this = (ServantCostumeMaster_o *)sub_B2C41C(StringLiteral_1/*""*/, v8->klass->_1.element_class);
          if ( !this )
            goto LABEL_26;
          v20 = (System_Int32_array **)StringLiteral_1/*""*/;
        }
        else
        {
          v20 = 0LL;
        }
        if ( (unsigned int)v9 >= LODWORD(v8->fields._MasterName_k__BackingField) )
          break;
        v19 = (BattleServantConfConponent_o *)p_list;
        *p_list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v20;
      }
      sub_B2C2F8(v19, v20, v12, v13, v14, v15, v16, v17);
      max_length = releases->max_length;
      ++v9;
      ++p_list;
      if ( (int)v9 >= max_length )
        return (System_String_array *)v8;
    }
    v22 = sub_B2C460(this);
    sub_B2C400(v22, 0LL);
  }
  return (System_String_array *)v8;
}


System_Collections_Generic_List_int__o *__fastcall ServantCostumeMaster__GetCostumeSvtIdList(
        ServantCostumeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  _DWORD *v15; // x23
  __int64 v16; // x10

  if ( (byte_418AAD6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B2C35C(&ServantCostumeEntity_TypeInfo, v8);
    byte_418AAD6 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v14,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v15 = list;
      v16 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v16
        || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v16 - 8) != ServantCostumeEntity_TypeInfo
        || !v9 )
      {
        break;
      }
      if ( !System_Collections_Generic_List_int___Contains(
              v9,
              *((_DWORD *)list + 4),
              (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v9,
          v15[4],
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      if ( ++v14 >= v13 )
        return v9;
    }
LABEL_15:
    sub_B2C434(list, v10);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_o *__fastcall ServantCostumeMaster__GetEntity(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418AAD2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_418AAD2 = 1;
  }
  PK = ServantCostumeEntity__CreatePK(svtId, id, 0LL);
  return (ServantCostumeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeMaster__GetIsServantCostumeExist(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  __int64 v11; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x8

  if ( (byte_418AAD5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&ServantCostumeEntity_TypeInfo, v6);
    byte_418AAD5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B2C434(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_17;
    v11 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (ServantCostumeEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] != ServantCostumeEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    v12 = (ServantCostumeEntity_c *)list->klass->_2.typeHierarchy[*(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1)
                                                                - 1] == ServantCostumeEntity_TypeInfo
        ? list
        : 0LL;
    if ( LODWORD(v12->fields.items) == svtId )
      return 1;
    if ( ++v10 >= v9 )
      return 0;
  }
}


bool __fastcall ServantCostumeMaster__TryGetEntity(
        ServantCostumeMaster_o *this,
        ServantCostumeEntity_o **entity,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418AAD3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__, entity);
    byte_418AAD3 = 1;
  }
  PK = ServantCostumeEntity__CreatePK(svtId, id, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_array *__fastcall ServantCostumeMaster__releasedCostumeEntityList(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        bool isChkHave,
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
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  __int64 v22; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v25; // w23
  int32_t v26; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x25
  __int64 v28; // x10
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v33; // x21
  struct ServantCostumeMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_418AAD7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_ServantCostumeEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_ServantCostumeEntity__TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&ServantCostumeEntity_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, v19);
    sub_B2C35C(&ServantCostumeMaster___c_TypeInfo, v20);
    byte_418AAD7 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v26,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v28 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v28
        || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v28 - 8) != ServantCostumeEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == svtId )
      {
        list = ServantCostumeEntity__checkFlag((ServantCostumeEntity_o *)list, 16, 0LL);
        if ( (list & 1) == 0 && !isChkHave )
          goto LABEL_20;
        list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !list )
          break;
        MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)list,
                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
          list = UserServantCollectionEntity__IsCostumeGet(EntityDefinitely, v27->fields.missionConditionDetailId, 0LL);
          if ( (list & 1) != 0 )
          {
LABEL_20:
            if ( !v21 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v21,
              v27,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
          }
        }
      }
      if ( ++v26 >= v25 )
        goto LABEL_23;
    }
LABEL_33:
    sub_B2C434(list, v22);
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
    v33 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v33,
      Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantCostumeEntity___ctor__);
    v34 = ServantCostumeMaster___c_TypeInfo->static_fields;
    v34->__9__5_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__5_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v34->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v21 )
    goto LABEL_33;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v21,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  return (ServantCostumeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
}


void __fastcall ServantCostumeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41853DE & 1) == 0 )
  {
    sub_B2C35C(&ServantCostumeMaster___c_TypeInfo, v1);
    byte_41853DE = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantCostumeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCostumeMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}