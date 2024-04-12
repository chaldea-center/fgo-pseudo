void __fastcall ServantCostumeMaster___ctor(ServantCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2E54 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
    byte_42B2E54 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    205,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
}


System_String_array *__fastcall ServantCostumeMaster__GetCostumeNames(
        ServantCostumeMaster_o *this,
        CostumeReleaseAnnounce_array *releases,
        const MethodInfo *method)
{
  ServantCostumeMaster_o *v4; // x20
  const MethodInfo *v5; // x4
  signed int max_length; // w8
  ServantCostumeMaster_o *v7; // x21
  __int64 v8; // x24
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x22
  CostumeReleaseAnnounce_o *v10; // x8
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_String_o *name; // x23
  BattleServantConfConponent_o *v18; // x0
  System_Int32_array **v19; // x1
  __int64 v21; // x0
  __int64 v22; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_42B2E58 & 1) == 0 )
  {
    sub_B52984(&string___TypeInfo);
    this = (ServantCostumeMaster_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2E58 = 1;
  }
  entity = 0LL;
  if ( !releases )
LABEL_24:
    sub_B52A5C(this, releases);
  this = (ServantCostumeMaster_o *)sub_B5299C(string___TypeInfo, releases->max_length);
  max_length = releases->max_length;
  v7 = this;
  if ( max_length >= 1 )
  {
    v8 = 0LL;
    p_list = &this->fields.list;
    while ( (unsigned int)v8 < max_length )
    {
      v10 = releases->m_Items[v8];
      if ( !v10 )
        goto LABEL_24;
      this = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                         v4,
                                         &entity,
                                         v10->fields.svtId,
                                         v10->fields.costumeId,
                                         v5);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v7 )
          goto LABEL_24;
        name = entity->fields.name;
        if ( name )
        {
          this = (ServantCostumeMaster_o *)sub_B52A44(entity->fields.name, v7->klass->_1.element_class);
          if ( !this )
          {
LABEL_26:
            v22 = sub_B52A7C(this);
            sub_B52A28(v22, 0LL);
          }
        }
        if ( (unsigned int)v8 >= LODWORD(v7->fields._MasterName_k__BackingField) )
          break;
        *p_list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)name;
        v18 = (BattleServantConfConponent_o *)p_list;
        v19 = (System_Int32_array **)name;
      }
      else
      {
        if ( !v7 )
          goto LABEL_24;
        this = (ServantCostumeMaster_o *)StringLiteral_1/*""*/;
        if ( StringLiteral_1/*""*/ )
        {
          this = (ServantCostumeMaster_o *)sub_B52A44(StringLiteral_1/*""*/, v7->klass->_1.element_class);
          if ( !this )
            goto LABEL_26;
          v19 = (System_Int32_array **)StringLiteral_1/*""*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( (unsigned int)v8 >= LODWORD(v7->fields._MasterName_k__BackingField) )
          break;
        v18 = (BattleServantConfConponent_o *)p_list;
        *p_list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v19;
      }
      sub_B52920(v18, v19, v11, v12, v13, v14, v15, v16);
      max_length = releases->max_length;
      ++v8;
      ++p_list;
      if ( (int)v8 >= max_length )
        return (System_String_array *)v7;
    }
    v21 = sub_B52A88(this);
    sub_B52A28(v21, 0LL);
  }
  return (System_String_array *)v7;
}


System_Collections_Generic_List_int__o *__fastcall ServantCostumeMaster__GetCostumeSvtIdList(
        ServantCostumeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  _DWORD *v9; // x23
  __int64 v10; // x10

  if ( (byte_42B2E56 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&ServantCostumeEntity_TypeInfo);
    byte_42B2E56 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v8,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v9 = list;
      v10 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v10
        || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v10 - 8) != ServantCostumeEntity_TypeInfo
        || !v3 )
      {
        break;
      }
      if ( !System_Collections_Generic_List_int___Contains(
              v3,
              *((_DWORD *)list + 4),
              (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v3,
          v9[4],
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( ++v8 >= v7 )
        return v3;
    }
LABEL_15:
    sub_B52A5C(list, v4);
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_o *__fastcall ServantCostumeMaster__GetEntity(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B2E52 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
    byte_42B2E52 = 1;
  }
  PK = ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&id);
  return (ServantCostumeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeMaster__GetIsServantCostumeExist(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 v9; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x8

  if ( (byte_42B2E55 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&ServantCostumeEntity_TypeInfo);
    byte_42B2E55 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B52A5C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_17;
    v9 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (ServantCostumeEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != ServantCostumeEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    v10 = (ServantCostumeEntity_c *)list->klass->_2.typeHierarchy[*(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1)
                                                                - 1] == ServantCostumeEntity_TypeInfo
        ? list
        : 0LL;
    if ( LODWORD(v10->fields.items) == svtId )
      return 1;
    if ( ++v8 >= v7 )
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

  if ( (byte_42B2E53 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
    byte_42B2E53 = 1;
  }
  PK = ServantCostumeEntity__CreatePK(svtId, id, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
}


ServantCostumeEntity_array *__fastcall ServantCostumeMaster__releasedCostumeEntityList(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        bool isChkHave,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x25
  __int64 v14; // x10
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v19; // x21
  struct ServantCostumeMaster___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42B2E57 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ServantCostumeEntity___ctor__);
    sub_B52984(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ServantCostumeEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__);
    sub_B52984(&ServantCostumeMaster___c_TypeInfo);
    byte_42B2E57 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v12,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v14 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v14
        || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v14 - 8) != ServantCostumeEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == svtId )
      {
        if ( (*(_DWORD *)(list + 84) & 0x10) == 0 && !isChkHave )
          goto LABEL_20;
        list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !list )
          break;
        MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)list,
                                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
          list = UserServantCollectionEntity__IsCostumeGet(EntityDefinitely, v13->fields.missionConditionDetailId, 0LL);
          if ( (list & 1) != 0 )
          {
LABEL_20:
            if ( !v7 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v7,
              v13,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
          }
        }
      }
      if ( ++v12 >= v11 )
        goto LABEL_23;
    }
LABEL_33:
    sub_B52A5C(list, v8);
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
    v19 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v19,
      Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantCostumeEntity___ctor__);
    v20 = ServantCostumeMaster___c_TypeInfo->static_fields;
    v20->__9__5_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__5_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v20->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v7 )
    goto LABEL_33;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  return (ServantCostumeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
}


void __fastcall ServantCostumeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD336 & 1) == 0 )
  {
    sub_B52984(&ServantCostumeMaster___c_TypeInfo);
    byte_42AD336 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantCostumeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCostumeMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}