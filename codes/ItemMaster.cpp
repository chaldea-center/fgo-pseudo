void __fastcall ItemMaster___ctor(ItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215D43 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__, method);
    byte_4215D43 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    35,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
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
  System_Int32_array *result; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v19; // x2
  ItemEntity_array *EntityList; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  int max_length; // w8
  unsigned int v27; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x23
  SkillLvEntity_o *v29; // x24
  int32_t v30; // w5
  struct ItemMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__15_0; // x20
  Il2CppObject *v33; // x21
  struct ItemMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int size; // w20
  __int64 v42; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x8
  __int64 v44; // x0

  if ( (byte_4215D4B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_ItemEntity___ctor__, setupInfo);
    sub_B0D8A4(&System_Comparison_ItemEntity__TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v6);
    sub_B0D8A4(&int___TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_ItemMaster___c__GetBoostItemList_b__15_0__, v15);
    sub_B0D8A4(&ItemMaster___c_TypeInfo, v16);
    byte_4215D4B = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)result,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  EntityList = ItemMaster__GetEntityList(this, 19, v19);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !EntityList )
    goto LABEL_36;
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
      {
LABEL_37:
        v44 = sub_B0D9A8(result);
        sub_B0D948(v44, 0LL);
      }
      v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)EntityList->m_Items[v27];
      if ( !v28 || !MasterData_WarQuestSelectionMaster )
        break;
      result = (System_Int32_array *)SkillLvMaster__GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       v28[1].fields.targetId,
                                       1,
                                       0LL);
      if ( result )
      {
        v29 = (SkillLvEntity_o *)result;
        v30 = setupInfo ? EventUpValSetupInfo__get_EventId(setupInfo, 0LL) : 0;
        result = (System_Int32_array *)SkillLvEntity__getEventUpVal(v29, -1, 0, 0, setupInfo, v30, 0, 1, 0LL);
        if ( ((unsigned __int8)result & 1) != 0 )
        {
          if ( !v23 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            v28,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
        }
      }
      max_length = EntityList->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_18;
    }
LABEL_36:
    sub_B0D97C(result);
  }
LABEL_18:
  result = (System_Int32_array *)ItemMaster___c_TypeInfo;
  if ( (BYTE3(ItemMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemMaster___c_TypeInfo);
    result = (System_Int32_array *)ItemMaster___c_TypeInfo;
  }
  static_fields = *(struct ItemMaster___c_StaticFields **)&result->m_Items[39];
  _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( (result->m_Items[69] & 0x4000000) != 0 && !result->m_Items[49] )
    {
      j_il2cpp_runtime_class_init_0(result);
      static_fields = ItemMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_ItemEntity__TypeInfo,
                                                                           v24,
                                                                           v25);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__15_0,
      v33,
      Method_ItemMaster___c__GetBoostItemList_b__15_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ItemEntity___ctor__);
    v34 = ItemMaster___c_TypeInfo->static_fields;
    v34->__9__15_0 = (struct System_Comparison_ItemEntity__o *)_9__15_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v34->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v23 )
    goto LABEL_36;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
    (System_Comparison_T__o *)_9__15_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  size = v23->fields._size;
  result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)size);
  if ( size >= 1 )
  {
    v42 = 0LL;
    while ( 1 )
    {
      if ( v23->fields._size <= (unsigned int)v42 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v43 = v23->fields._items->m_Items[v42];
      if ( !v43 || !result )
        goto LABEL_36;
      if ( (unsigned int)v42 >= result->max_length )
        goto LABEL_37;
      result->m_Items[++v42] = v43->fields.missionTargetId;
      if ( (int)v42 >= size )
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
  ItemEntity_o *result; // x0
  __int64 v12; // x10

  if ( (byte_4215D46 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&itemType);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&ItemEntity_TypeInfo, v6);
    byte_4215D46 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (ItemEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                 list,
                                 v10,
                                 (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v12 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (ItemEntity_c *)result->klass->_2.typeHierarchy[v12 - 1] == ItemEntity_TypeInfo
          && result->fields.type == itemType )
        {
          return result;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_14:
    sub_B0D97C(list);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_array *__fastcall ItemMaster__GetEntityList(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  int64_t list; // x0
  int32_t Count; // w22
  int64_t v15; // x23
  int32_t v16; // w24
  __int64 v17; // x10
  int64_t v18; // x8

  if ( (byte_4215D45 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&itemType);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&ItemEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    byte_4215D45 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  *(_QWORD *)&itemType,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v15 = list;
    v16 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v16,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v17
          && *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v17 - 8) == ItemEntity_TypeInfo
          && *(_DWORD *)(list + 48) == itemType
          && *(_QWORD *)(list + 88) <= v15 )
        {
          v18 = *(_QWORD *)(list + 96);
          if ( !v18 || v18 >= v15 )
          {
            if ( !v12 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
          }
        }
      }
      if ( ++v16 >= Count )
        goto LABEL_20;
    }
LABEL_22:
    sub_B0D97C(list);
  }
LABEL_20:
  if ( !v12 )
    goto LABEL_22;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ItemEntity__o *__fastcall ItemMaster__GetEntityListByType(
        ItemMaster_o *this,
        int32_t itemType,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  int64_t Time; // x0
  int64_t v15; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x0
  __int64 v26; // x10
  int64_t v27; // x9
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_4215D47 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&itemType);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B0D8A4(&ItemEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    byte_4215D47 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  *(_QWORD *)&itemType,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_B0D97C(Time);
  v15 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_19:
      v24 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      v26 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26
        || (ItemEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] != ItemEntity_TypeInfo )
      {
        v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B0DC70(v25);
LABEL_38:
        sub_B0D97C(v25);
      }
      if ( LODWORD(v25[1].monitor) == itemType && (__int64)v25[2].monitor <= v15 )
      {
        v27 = *(_QWORD *)&v25[2].fields.missionTargetId;
        if ( !v27 || v27 >= v15 )
        {
          if ( !v13 )
            goto LABEL_38;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            v25,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
        }
      }
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_34:
    v31 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return (System_Collections_Generic_List_ItemEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEventPoint(ItemMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ItemEntity_o *result; // x0
  struct System_String_o *name; // x8
  ItemEntity_o *v9; // x20
  unsigned __int64 v10; // x21
  __int64 v11; // x0

  if ( (byte_4215D4A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4215D4A = 1;
  }
  result = (ItemEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result
    || (result = (ItemEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (result = (ItemEntity_o *)ShopMaster__GetEventItemList((ShopMaster_o *)result, eventId, 0LL)) == 0LL )
  {
    sub_B0D97C(result);
  }
  name = result->fields.name;
  v9 = result;
  if ( (int)name < 1 )
    return 0LL;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)name )
    {
      v11 = sub_B0D9A8(result);
      sub_B0D948(v11, 0LL);
    }
    result = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                               *((_DWORD *)&v9->fields.detail + v10),
                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( result )
    {
      if ( result->fields.type == 14 )
        break;
    }
    LODWORD(name) = v9->fields.name;
    if ( (__int64)++v10 >= (int)name )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x23
  int32_t v16; // w24
  struct System_Collections_Generic_IList_T__o *items; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x8
  int monitor; // w8
  __int64 v20; // x9
  struct System_Collections_Generic_IList_T__o *v21; // x10
  __int64 v22; // x10
  __int64 v24; // x0

  if ( (byte_4215D4C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&individuality);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&ItemEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    byte_4215D4C = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  *(_QWORD *)&individuality,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v15 = list;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v22 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (ItemEntity_c *)list->klass->_2.typeHierarchy[v22 - 1] == ItemEntity_TypeInfo )
        {
          items = list[2].fields.items;
          if ( items )
          {
            if ( (__int64)list[2].fields._syncRoot <= (__int64)v15 )
            {
              klass = list[3].klass;
              if ( !klass || (__int64)klass >= (__int64)v15 )
              {
                monitor = (int)items[1].monitor;
                if ( monitor >= 1 )
                {
                  v20 = 0LL;
                  v21 = items + 2;
                  while ( 1 )
                  {
                    if ( (unsigned int)v20 >= monitor )
                    {
                      v24 = sub_B0D9A8(list);
                      sub_B0D948(v24, 0LL);
                    }
                    if ( *((_DWORD *)&v21->klass + v20) == individuality )
                      break;
                    if ( (int)++v20 >= monitor )
                      goto LABEL_25;
                  }
                  if ( !v12 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v12,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)list,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
                }
              }
            }
          }
        }
      }
LABEL_25:
      if ( ++v16 >= Count )
        goto LABEL_26;
    }
LABEL_28:
    sub_B0D97C(list);
  }
LABEL_26:
  if ( !v12 )
    goto LABEL_28;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList_26872928(
        ItemMaster_o *this,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w23
  struct System_Collections_Generic_IList_T__o *items; // x8
  unsigned __int64 monitor; // x10
  unsigned __int64 v17; // x9
  signed int max_length; // w12
  __int64 v19; // x14
  __int64 v20; // x10
  __int64 v22; // x0

  if ( (byte_4215D4D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, individualityList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&ItemEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v10);
    byte_4215D4D = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  individualityList,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( individualityList )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v13 = (int)list;
      v14 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             v14,
                                                                                             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v20 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v20
            && (ItemEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] == ItemEntity_TypeInfo )
          {
            items = list[2].fields.items;
            if ( items )
            {
              if ( (int)items[1].monitor >= 1 )
              {
                monitor = (unsigned int)items[1].monitor;
                v17 = 0LL;
                while ( 1 )
                {
                  if ( v17 >= monitor )
                  {
LABEL_27:
                    v22 = sub_B0D9A8(list);
                    sub_B0D948(v22, 0LL);
                  }
                  max_length = individualityList->max_length;
                  if ( max_length >= 1 )
                    break;
LABEL_16:
                  if ( (__int64)++v17 >= (int)monitor )
                    goto LABEL_24;
                }
                v19 = 0LL;
                while ( 1 )
                {
                  if ( (unsigned int)v19 >= max_length )
                    goto LABEL_27;
                  if ( *((_DWORD *)&items[2].klass + v17) == individualityList->m_Items[v19 + 1] )
                    break;
                  if ( (int)++v19 >= max_length )
                    goto LABEL_16;
                }
                if ( !v11 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v11,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)list,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
              }
            }
          }
        }
LABEL_24:
        if ( ++v14 >= v13 )
          goto LABEL_25;
      }
LABEL_28:
      sub_B0D97C(list);
    }
  }
LABEL_25:
  if ( !v11 )
    goto LABEL_28;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetItemData(ItemMaster_o *this, int32_t itemId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool v6; // w8
  ItemEntity_o *result; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4215D48 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, *(_QWORD *)&itemId);
    byte_4215D48 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         itemId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_B0D97C(0LL);
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

  if ( (byte_4215D49 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, *(_QWORD *)&itemId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    byte_4215D49 = 1;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             itemId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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

  if ( (byte_4215D4E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, *(_QWORD *)&id);
    byte_4215D4E = 1;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             id,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    sub_B0D97C(0LL);
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

  if ( (byte_4215D44 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v3);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B0D8A4(&ItemEntity_TypeInfo, v6);
    byte_4215D44 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
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
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v12 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
      v13 = (int32_t *)sub_B0DC70(v13);
LABEL_42:
      sub_B0D97C(v13);
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
    v23 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return 1;
}


void __fastcall ItemMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ItemMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4210F7F & 1) == 0 )
  {
    sub_B0D8A4(&ItemMaster___c_TypeInfo, v1);
    byte_4210F7F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ItemMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ItemMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ItemMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return a->fields.priority - b->fields.priority;
}