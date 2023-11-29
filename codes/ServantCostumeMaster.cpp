void __fastcall ServantCostumeMaster___ctor(ServantCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FD012 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__, method);
    byte_40FD012 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    204,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string___ctor__);
}


System_String_array *__fastcall ServantCostumeMaster__GetCostumeNames(
        ServantCostumeMaster_o *this,
        CostumeReleaseAnnounce_array *releases,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  System_Int32_array **v7; // x1
  System_String_array **v8; // x2
  const MethodInfo *v9; // x4
  signed int max_length; // w8
  System_String_array *v11; // x21
  __int64 v12; // x24
  BattleServantConfConponent_o *v13; // x22
  CostumeReleaseAnnounce_o *v14; // x8
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_String_o *name; // x23
  BattleServantConfConponent_o *v21; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FD016 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, releases);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FD016 = 1;
  }
  entity = 0LL;
  if ( !releases )
LABEL_24:
    sub_B170D4();
  v6 = sub_B17014(string___TypeInfo, releases->max_length, method);
  max_length = releases->max_length;
  v11 = (System_String_array *)v6;
  if ( max_length >= 1 )
  {
    v12 = 0LL;
    v13 = (BattleServantConfConponent_o *)(v6 + 32);
    while ( (unsigned int)v12 < max_length )
    {
      v14 = releases->m_Items[v12];
      if ( !v14 )
        goto LABEL_24;
      v6 = ServantCostumeMaster__TryGetEntity(this, &entity, v14->fields.svtId, v14->fields.costumeId, v9);
      if ( (v6 & 1) != 0 )
      {
        if ( !entity || !v11 )
          goto LABEL_24;
        name = entity->fields.name;
        if ( name )
        {
          v6 = sub_B170BC(entity->fields.name, v11->obj.klass->_1.element_class);
          if ( !v6 )
          {
LABEL_26:
            sub_B170F4(v6);
            sub_B170A0();
          }
        }
        if ( (unsigned int)v12 >= v11->max_length )
          break;
        v13->klass = (BattleServantConfConponent_c *)name;
        v21 = v13;
        v7 = (System_Int32_array **)name;
      }
      else
      {
        if ( !v11 )
          goto LABEL_24;
        v6 = (__int64)StringLiteral_1;
        if ( StringLiteral_1 )
        {
          v6 = sub_B170BC(StringLiteral_1, v11->obj.klass->_1.element_class);
          if ( !v6 )
            goto LABEL_26;
          v7 = (System_Int32_array **)StringLiteral_1;
        }
        else
        {
          v7 = 0LL;
        }
        if ( (unsigned int)v12 >= v11->max_length )
          break;
        v21 = v13;
        v13->klass = (BattleServantConfConponent_c *)v7;
      }
      sub_B16F98(v21, v7, v8, v15, v16, v17, v18, v19);
      max_length = releases->max_length;
      ++v12;
      v13 = (BattleServantConfConponent_o *)((char *)v13 + 8);
      if ( (int)v12 >= max_length )
        return v11;
    }
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  return v11;
}


System_Collections_Generic_List_int__o *__fastcall ServantCostumeMaster__GetCostumeSvtIdList(
        ServantCostumeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w21
  int32_t v16; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  int32_t *Item; // x0
  int32_t *v19; // x23
  __int64 v20; // x10

  if ( (byte_40FD014 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&ServantCostumeEntity_TypeInfo, v11);
    byte_40FD014 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v17 )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          v17,
                          v16,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v19 = Item;
      v20 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) < (unsigned int)v20
        || *(ServantCostumeEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v20 - 8) != ServantCostumeEntity_TypeInfo
        || !v12 )
      {
        break;
      }
      if ( !System_Collections_Generic_List_int___Contains(
              v12,
              Item[4],
              (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v12,
          v19[4],
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( ++v16 >= v15 )
        return v12;
    }
LABEL_15:
    sub_B170D4();
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_o *__fastcall ServantCostumeMaster__GetEntity(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FD010 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40FD010 = 1;
  }
  PK = ServantCostumeEntity__CreatePK(svtId, id, 0LL);
  return (ServantCostumeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v14; // x8

  if ( (byte_40FD013 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&ServantCostumeEntity_TypeInfo, v6);
    byte_40FD013 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v11 )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v11,
             v10,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_17;
    v13 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (ServantCostumeEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] != ServantCostumeEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    v14 = (ServantCostumeEntity_c *)Item->klass->_2.typeHierarchy[*(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1)
                                                                - 1] == ServantCostumeEntity_TypeInfo
        ? Item
        : 0LL;
    if ( LODWORD(v14[1].klass) == svtId )
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

  if ( (byte_40FD011 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__, entity);
    byte_40FD011 = 1;
  }
  PK = ServantCostumeEntity__CreatePK(svtId, id, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantCostumeMaster__ServantCostumeEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeEntity_array *__fastcall ServantCostumeMaster__releasedCostumeEntityList(
        ServantCostumeMaster_o *this,
        int32_t svtId,
        bool isChkHave,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v21; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w23
  int32_t v30; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v31; // x0
  ServantCostumeEntity_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x25
  __int64 v34; // x10
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  ServantCostumeMaster___c_c *v39; // x0
  struct ServantCostumeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v42; // x21
  struct ServantCostumeMaster___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_40FD015 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Comparison_ServantCostumeEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_ServantCostumeEntity__TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v16);
    sub_B16FFC(&NetworkManager_TypeInfo, v17);
    sub_B16FFC(&ServantCostumeEntity_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__, v20);
    sub_B16FFC(&ServantCostumeMaster___c_TypeInfo, v21);
    byte_40FD015 = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCostumeEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  isChkHave,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
    v30 = 0;
    while ( 1 )
    {
      v31 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v31 )
        break;
      Item = (ServantCostumeEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         v31,
                                         v30,
                                         (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
      v34 = *(&ServantCostumeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v34
        || (ServantCostumeEntity_c *)Item->klass->_2.typeHierarchy[v34 - 1] != ServantCostumeEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.svtId == svtId )
      {
        if ( !ServantCostumeEntity__checkFlag(Item, 16, 0LL) && !isChkHave )
          goto LABEL_20;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                             MasterData_WarQuestSelectionMaster,
                             UserId,
                             svtId,
                             0LL);
        if ( EntityDefinitely )
        {
          if ( UserServantCollectionEntity__IsCostumeGet(EntityDefinitely, v33->fields.missionConditionDetailId, 0LL) )
          {
LABEL_20:
            if ( !v22 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v22,
              v33,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
          }
        }
      }
      if ( ++v30 >= v29 )
        goto LABEL_23;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_23:
  v39 = ServantCostumeMaster___c_TypeInfo;
  if ( (BYTE3(ServantCostumeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeMaster___c_TypeInfo);
    v39 = ServantCostumeMaster___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = ServantCostumeMaster___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ServantCostumeEntity__TypeInfo,
                                                                          v25,
                                                                          v26,
                                                                          v27,
                                                                          v28);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v42,
      Method_ServantCostumeMaster___c__releasedCostumeEntityList_b__5_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantCostumeEntity___ctor__);
    v43 = ServantCostumeMaster___c_TypeInfo->static_fields;
    v43->__9__5_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v43->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  if ( !v22 )
    goto LABEL_33;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  return (ServantCostumeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantCostumeEntity__ToArray__);
}


void __fastcall ServantCostumeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7622 & 1) == 0 )
  {
    sub_B16FFC(&ServantCostumeMaster___c_TypeInfo, v1);
    byte_40F7622 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantCostumeMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantCostumeMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}