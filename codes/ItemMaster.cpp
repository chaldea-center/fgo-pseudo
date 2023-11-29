void __fastcall ItemMaster___ctor(ItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC1EC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__, method);
    byte_40FC1EC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    35,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
}


System_Int32_array *__fastcall ItemMaster__GetBoostItemList(
        ItemMaster_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v19; // x2
  ItemEntity_array *EntityList; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x19
  System_Int32_array *result; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int max_length; // w8
  unsigned int v32; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x23
  SkillLvEntity_o *v34; // x24
  int32_t v35; // w5
  ItemMaster___c_c *v36; // x0
  struct ItemMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__15_0; // x20
  Il2CppObject *v39; // x21
  struct ItemMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int size; // w20
  __int64 v48; // x2
  __int64 v49; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x8

  if ( (byte_40FC1F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_ItemEntity___ctor__, setupInfo);
    sub_B16FFC(&System_Comparison_ItemEntity__TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v6);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ItemEntity__TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_ItemMaster___c__GetBoostItemList_b__15_0__, v15);
    sub_B16FFC(&ItemMaster___c_TypeInfo, v16);
    byte_40FC1F4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  EntityList = ItemMaster__GetEntityList(this, 19, v19);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !EntityList )
    goto LABEL_36;
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
      {
LABEL_37:
        sub_B17100(result, v27, v28);
        sub_B170A0();
      }
      v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)EntityList->m_Items[v32];
      if ( !v33 || !MasterData_WarQuestSelectionMaster )
        break;
      result = (System_Int32_array *)SkillLvMaster__GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       v33[1].fields.targetId,
                                       1,
                                       0LL);
      if ( result )
      {
        v34 = (SkillLvEntity_o *)result;
        v35 = setupInfo ? EventUpValSetupInfo__get_EventId(setupInfo, 0LL) : 0;
        result = (System_Int32_array *)SkillLvEntity__getEventUpVal(v34, -1, 0, 0, setupInfo, v35, 0, 1, 0LL);
        if ( ((unsigned __int8)result & 1) != 0 )
        {
          if ( !v25 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v25,
            v33,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
        }
      }
      max_length = EntityList->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_18;
    }
LABEL_36:
    sub_B170D4();
  }
LABEL_18:
  v36 = ItemMaster___c_TypeInfo;
  if ( (BYTE3(ItemMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemMaster___c_TypeInfo);
    v36 = ItemMaster___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = ItemMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_ItemEntity__TypeInfo,
                                                                           v27,
                                                                           v28,
                                                                           v29,
                                                                           v30);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__15_0,
      v39,
      Method_ItemMaster___c__GetBoostItemList_b__15_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ItemEntity___ctor__);
    v40 = ItemMaster___c_TypeInfo->static_fields;
    v40->__9__15_0 = (struct System_Comparison_ItemEntity__o *)_9__15_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !v25 )
    goto LABEL_36;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
    (System_Comparison_T__o *)_9__15_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  size = v25->fields._size;
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)size, v48);
  if ( size >= 1 )
  {
    v49 = 0LL;
    while ( 1 )
    {
      if ( v25->fields._size <= (unsigned int)v49 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v50 = v25->fields._items->m_Items[v49];
      if ( !v50 || !result )
        goto LABEL_36;
      if ( (unsigned int)v49 >= result->max_length )
        goto LABEL_37;
      result->m_Items[++v49] = v50->fields.missionTargetId;
      if ( (int)v49 >= size )
        return result;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEntityByType(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  ItemEntity_o *result; // x0
  __int64 v13; // x10

  if ( (byte_40FC1EF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&itemType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&ItemEntity_TypeInfo, v6);
    byte_40FC1EF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v11 )
        break;
      result = (ItemEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                 v11,
                                 v10,
                                 (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v13 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (ItemEntity_c *)result->klass->_2.typeHierarchy[v13 - 1] == ItemEntity_TypeInfo
          && result->fields.type == itemType )
        {
          return result;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_14:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_array *__fastcall ItemMaster__GetEntityList(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v18; // x23
  int32_t v19; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v22; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8

  if ( (byte_40FC1EE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&itemType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&ItemEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ItemEntity__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    byte_40FC1EE = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  *(_QWORD *)&itemType,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v18 = Time;
    v19 = 0;
    while ( 1 )
    {
      v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v20 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v20,
               v19,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (ItemEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == ItemEntity_TypeInfo
          && LODWORD(Item[3].klass) == itemType
          && (__int64)Item[5].monitor <= v18 )
        {
          klass = Item[6].klass;
          if ( !klass || (__int64)klass >= v18 )
          {
            if ( !v14 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v14,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
          }
        }
      }
      if ( ++v19 >= Count )
        goto LABEL_20;
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_20:
  if ( !v14 )
    goto LABEL_22;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ItemEntity__o *__fastcall ItemMaster__GetEntityListByType(
        ItemMaster_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  int64_t Time; // x0
  int64_t v17; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x0
  __int64 v28; // x10
  int64_t v29; // x9
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0

  if ( (byte_40FC1F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&itemType);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&ItemEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ItemEntity__TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    byte_40FC1F0 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  *(_QWORD *)&itemType,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_B170D4();
  v17 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_19:
      v26 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v26 + 8));
    if ( v27 )
    {
      v28 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (ItemEntity_c *)v27->klass->_2.typeHierarchy[v28 - 1] != ItemEntity_TypeInfo )
      {
        sub_B173C8(v27);
LABEL_38:
        sub_B170D4();
      }
      if ( LODWORD(v27[1].monitor) == itemType && (__int64)v27[2].monitor <= v17 )
      {
        v29 = *(_QWORD *)&v27[2].fields.missionTargetId;
        if ( !v29 || v29 >= v17 )
        {
          if ( !v15 )
            goto LABEL_38;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            v27,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
        }
      }
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_34:
    v33 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return (System_Collections_Generic_List_ItemEntity__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEventPoint(ItemMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ItemEntity_o *result; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_String_o *name; // x8
  ItemEntity_o *v13; // x20
  unsigned __int64 v14; // x21

  if ( (byte_40FC1F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FC1F3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (result = (ItemEntity_o *)ShopMaster__GetEventItemList(MasterData_WarQuestSelectionMaster, eventId, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  name = result->fields.name;
  v13 = result;
  if ( (int)name < 1 )
    return 0LL;
  v14 = 0LL;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)name )
    {
      sub_B17100(result, v10, v11);
      sub_B170A0();
    }
    result = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                               *((_DWORD *)&v13->fields.detail + v14),
                               (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( result )
    {
      if ( result->fields.type == 14 )
        break;
    }
    LODWORD(name) = v13->fields.name;
    if ( (__int64)++v14 >= (int)name )
      return 0LL;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_array *__fastcall ItemMaster__GetIndividualityList(
        ItemMaster_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v18; // x23
  int32_t v19; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v21; // x8
  int namespaze; // w8
  __int64 v23; // x9
  Il2CppType *p_byval_arg; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v27; // x2
  __int64 v28; // x10

  if ( (byte_40FC1F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&individuality);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&ItemEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ItemEntity__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    byte_40FC1F5 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  *(_QWORD *)&individuality,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v18 = Time;
    v19 = 0;
    while ( 1 )
    {
      v25 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v25 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v25,
               v19,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (ItemEntity_c *)Item->klass->_2.typeHierarchy[v28 - 1] == ItemEntity_TypeInfo )
        {
          klass = Item[5].klass;
          if ( klass )
          {
            if ( (__int64)Item[5].monitor <= v18 )
            {
              v21 = Item[6].klass;
              if ( !v21 || (__int64)v21 >= v18 )
              {
                namespaze = (int)klass->_1.namespaze;
                if ( namespaze >= 1 )
                {
                  v23 = 0LL;
                  p_byval_arg = &klass->_1.byval_arg;
                  while ( 1 )
                  {
                    if ( (unsigned int)v23 >= namespaze )
                    {
                      sub_B17100(Item, Item, v27);
                      sub_B170A0();
                    }
                    if ( *((_DWORD *)&p_byval_arg->data + v23) == individuality )
                      break;
                    if ( (int)++v23 >= namespaze )
                      goto LABEL_25;
                  }
                  if ( !v14 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v14,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
                }
              }
            }
          }
        }
      }
LABEL_25:
      if ( ++v19 >= Count )
        goto LABEL_26;
    }
LABEL_28:
    sub_B170D4();
  }
LABEL_26:
  if ( !v14 )
    goto LABEL_28;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList_28946848(
        ItemMaster_o *this,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x8
  unsigned __int64 namespaze; // x10
  unsigned __int64 v20; // x9
  signed int max_length; // w12
  __int64 v22; // x14
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v25; // x2
  __int64 v26; // x10

  if ( (byte_40FC1F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, individualityList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&ItemEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ItemEntity__TypeInfo, v12);
    byte_40FC1F6 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  individualityList,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( individualityList )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_28;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              list,
              (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v16 = Count;
      v17 = 0;
      while ( 1 )
      {
        v23 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !v23 )
          break;
        Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                        v23,
                                                                        v17,
                                                                        (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v26 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
            && (ItemEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == ItemEntity_TypeInfo )
          {
            klass = Item[2].klass;
            if ( klass )
            {
              if ( (int)klass->_1.namespaze >= 1 )
              {
                namespaze = (unsigned int)klass->_1.namespaze;
                v20 = 0LL;
                while ( 1 )
                {
                  if ( v20 >= namespaze )
                  {
LABEL_27:
                    sub_B17100(Item, Item, v25);
                    sub_B170A0();
                  }
                  max_length = individualityList->max_length;
                  if ( max_length >= 1 )
                    break;
LABEL_16:
                  if ( (__int64)++v20 >= (int)namespaze )
                    goto LABEL_24;
                }
                v22 = 0LL;
                while ( 1 )
                {
                  if ( (unsigned int)v22 >= max_length )
                    goto LABEL_27;
                  if ( *((_DWORD *)&klass->_1.byval_arg.data + v20) == individualityList->m_Items[v22 + 1] )
                    break;
                  if ( (int)++v22 >= max_length )
                    goto LABEL_16;
                }
                if ( !v13 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v13,
                  Item,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
              }
            }
          }
        }
LABEL_24:
        if ( ++v17 >= v16 )
          goto LABEL_25;
      }
LABEL_28:
      sub_B170D4();
    }
  }
LABEL_25:
  if ( !v13 )
    goto LABEL_28;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetItemData(ItemMaster_o *this, int32_t itemId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool v6; // w8
  ItemEntity_o *result; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC1F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, *(_QWORD *)&itemId);
    byte_40FC1F1 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         itemId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_B170D4();
    if ( ItemEntity__IsEnable((ItemEntity_o *)entity, v5) )
      return (ItemEntity_o *)entity;
    else
      return 0LL;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetTimeLimitAfterItemData(
        ItemMaster_o *this,
        int32_t itemId,
        bool reboot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  WarEntity_o *Entity; // x0
  ItemEntity_o *v9; // x20

  if ( (byte_40FC1F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, *(_QWORD *)&itemId);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    byte_40FC1F2 = 1;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             itemId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    return 0LL;
  v9 = (ItemEntity_o *)Entity;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( v9->fields.endedAt > NetworkManager__getTime(0LL) || !reboot )
    return 0LL;
  return v9;
}


int32_t __fastcall ItemMaster__get_Anonymous(ItemMaster_o *this, const MethodInfo *method)
{
  return this->fields.stoneFragmentsId;
}


int32_t __fastcall ItemMaster__get_StoneFragments(ItemMaster_o *this, const MethodInfo *method)
{
  return this->fields.stoneId;
}


bool __fastcall ItemMaster__isAnonymous(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.stoneFragmentsId == id;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ItemMaster__isEventPoint(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  WarEntity_o *Entity; // x0

  if ( (byte_40FC1F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, *(_QWORD *)&id);
    byte_40FC1F7 = 1;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             id,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    sub_B170D4();
  return Entity->fields.bannerId == 14;
}


bool __fastcall ItemMaster__isFriendPoint(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.rarePriId == id;
}


bool __fastcall ItemMaster__isMana(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.qpId == id;
}


bool __fastcall ItemMaster__isQP(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return *(&this->fields.revision + 1) == id;
}


bool __fastcall ItemMaster__isRarePri(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.manaId == id;
}


bool __fastcall ItemMaster__isStone(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.friendPointId == id;
}


bool __fastcall ItemMaster__isStoneFragments(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.stoneId == id;
}


bool __fastcall ItemMaster__preProcess(ItemMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v9; // x8
  unsigned __int64 v10; // x10
  int32_t *v11; // x11
  __int64 v12; // x0
  int32_t *v13; // x0
  __int64 v14; // x9
  int v15; // w8
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0

  if ( (byte_40FC1ED & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B16FFC(&ItemEntity_TypeInfo, v6);
    byte_40FC1ED = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_31:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v11 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v10;
        v11 += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v12 = (__int64)&v9->vtable[*v11].method;
    }
    else
    {
LABEL_10:
      v12 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v13 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
                       Enumerator,
                       *(_QWORD *)(v12 + 8));
    if ( !v13 )
      goto LABEL_42;
    v14 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v13 + 300LL) < (unsigned int)v14
      || *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)v13 + 200LL) + 8 * v14 - 8) != ItemEntity_TypeInfo )
    {
      sub_B173C8(v13);
LABEL_42:
      sub_B170D4();
    }
    v15 = v13[12];
    if ( v15 <= 12 )
    {
      switch ( v15 )
      {
        case 1:
          *(&this->fields.revision + 1) = v13[4];
          break;
        case 2:
          this->fields.friendPointId = v13[4];
          break;
        case 5:
          this->fields.qpId = v13[4];
          break;
      }
    }
    else
    {
      switch ( v15 )
      {
        case 13:
          this->fields.rarePriId = v13[4];
          break;
        case 20:
          this->fields.stoneId = v13[4];
          break;
        case 21:
          this->fields.stoneFragmentsId = v13[4];
          break;
        case 22:
          this->fields.manaId = v13[4];
          break;
        default:
          continue;
      }
    }
  }
  v20 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_38:
    v23 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return 1;
}


void __fastcall ItemMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F68E8 & 1) == 0 )
  {
    sub_B16FFC(&ItemMaster___c_TypeInfo, v1);
    byte_40F68E8 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ItemMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ItemMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ItemMaster___c___ctor(ItemMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ItemMaster___c___GetBoostItemList_b__15_0(
        ItemMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}