void __fastcall ItemMaster___ctor(ItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188FE0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__, method);
    byte_4188FE0 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    35,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
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
  __int64 v18; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v20; // x2
  ItemEntity_array *EntityList; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  int max_length; // w8
  unsigned int v24; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x23
  SkillLvEntity_o *v26; // x24
  int32_t v27; // w5
  struct ItemMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__15_0; // x20
  Il2CppObject *v30; // x21
  struct ItemMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int size; // w20
  __int64 v39; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x8
  __int64 v41; // x0

  if ( (byte_4188FE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_ItemEntity___ctor__, setupInfo);
    sub_B2C35C(&System_Comparison_ItemEntity__TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v6);
    sub_B2C35C(&int___TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_List_ItemEntity__TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_ItemMaster___c__GetBoostItemList_b__15_0__, v15);
    sub_B2C35C(&ItemMaster___c_TypeInfo, v16);
    byte_4188FE8 = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)result,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  EntityList = ItemMaster__GetEntityList(this, 19, v20);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !EntityList )
    goto LABEL_36;
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
      {
LABEL_37:
        v41 = sub_B2C460(result);
        sub_B2C400(v41, 0LL);
      }
      v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)EntityList->m_Items[v24];
      if ( !v25 || !MasterData_WarQuestSelectionMaster )
        break;
      result = (System_Int32_array *)SkillLvMaster__GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       v25[1].fields.targetId,
                                       1,
                                       0LL);
      if ( result )
      {
        v26 = (SkillLvEntity_o *)result;
        v27 = setupInfo ? EventUpValSetupInfo__get_EventId(setupInfo, 0LL) : 0;
        result = (System_Int32_array *)SkillLvEntity__getEventUpVal(v26, -1, 0, 0, setupInfo, v27, 0, 1, 0LL);
        if ( ((unsigned __int8)result & 1) != 0 )
        {
          if ( !v22 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            v25,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
        }
      }
      max_length = EntityList->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_18;
    }
LABEL_36:
    sub_B2C434(result, v18);
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
    v30 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__15_0,
      v30,
      Method_ItemMaster___c__GetBoostItemList_b__15_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ItemEntity___ctor__);
    v31 = ItemMaster___c_TypeInfo->static_fields;
    v31->__9__15_0 = (struct System_Comparison_ItemEntity__o *)_9__15_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v31->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !v22 )
    goto LABEL_36;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__15_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  size = v22->fields._size;
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)size);
  if ( size >= 1 )
  {
    v39 = 0LL;
    while ( 1 )
    {
      if ( v22->fields._size <= (unsigned int)v39 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v40 = v22->fields._items->m_Items[v39];
      if ( !v40 || !result )
        goto LABEL_36;
      if ( (unsigned int)v39 >= result->max_length )
        goto LABEL_37;
      result->m_Items[++v39] = v40->fields.missionTargetId;
      if ( (int)v39 >= size )
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

  if ( (byte_4188FE3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&itemType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&ItemEntity_TypeInfo, v6);
    byte_4188FE3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                 (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_B2C434(list, *(_QWORD *)&itemType);
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
  int64_t v13; // x1
  int64_t list; // x0
  int32_t Count; // w22
  int64_t v16; // x23
  int32_t v17; // w24
  __int64 v18; // x10
  int64_t v19; // x8

  if ( (byte_4188FE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&itemType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&ItemEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_ItemEntity__TypeInfo, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    byte_4188FE2 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v16 = list;
    v17 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v17,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = list;
        v18 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v18
          && *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v18 - 8) == ItemEntity_TypeInfo
          && *(_DWORD *)(list + 48) == itemType
          && *(_QWORD *)(list + 88) <= v16 )
        {
          v19 = *(_QWORD *)(list + 96);
          if ( !v19 || v19 >= v16 )
          {
            if ( !v12 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
          }
        }
      }
      if ( ++v17 >= Count )
        goto LABEL_20;
    }
LABEL_22:
    sub_B2C434(list, v13);
  }
LABEL_20:
  if ( !v12 )
    goto LABEL_22;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
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
  __int64 v15; // x1
  int64_t v16; // x22
  __int64 v17; // x1
  __int64 v18; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x0
  ItemEntity_c *v30; // x1
  __int64 v31; // x10
  int64_t v32; // x9
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0

  if ( (byte_4188FE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&itemType);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&ItemEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_ItemEntity__TypeInfo, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    byte_4188FE4 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_B2C434(Time, v15);
  v16 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v18);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_19:
      v28 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v24);
    }
    v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v28 + 8));
    if ( v29 )
    {
      v30 = ItemEntity_TypeInfo;
      v31 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (ItemEntity_c *)v29->klass->_2.typeHierarchy[v31 - 1] != ItemEntity_TypeInfo )
      {
        v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v29);
LABEL_38:
        sub_B2C434(v29, v30);
      }
      if ( LODWORD(v29[1].monitor) == itemType && (__int64)v29[2].monitor <= v16 )
      {
        v32 = *(_QWORD *)&v29[2].fields.missionTargetId;
        if ( !v32 || v32 >= v16 )
        {
          if ( !v13 )
            goto LABEL_38;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            v29,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
        }
      }
    }
  }
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_34:
    v36 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v24);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_ItemEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEventPoint(ItemMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ItemEntity_o *result; // x0
  __int64 v8; // x1
  struct System_String_o *name; // x8
  ItemEntity_o *v10; // x20
  unsigned __int64 v11; // x21
  __int64 v12; // x0

  if ( (byte_4188FE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4188FE7 = 1;
  }
  result = (ItemEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result
    || (result = (ItemEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (result = (ItemEntity_o *)ShopMaster__GetEventItemList((ShopMaster_o *)result, eventId, 0LL)) == 0LL )
  {
    sub_B2C434(result, v8);
  }
  name = result->fields.name;
  v10 = result;
  if ( (int)name < 1 )
    return 0LL;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)name )
    {
      v12 = sub_B2C460(result);
      sub_B2C400(v12, 0LL);
    }
    result = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                               *((_DWORD *)&v10->fields.detail + v11),
                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( result )
    {
      if ( result->fields.type == 14 )
        break;
    }
    LODWORD(name) = v10->fields.name;
    if ( (__int64)++v11 >= (int)name )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x23
  int32_t v17; // w24
  struct System_Collections_Generic_IList_T__o *items; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x8
  int monitor; // w8
  __int64 v21; // x9
  struct System_Collections_Generic_IList_T__o *v22; // x10
  __int64 v23; // x10
  __int64 v25; // x0

  if ( (byte_4188FE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&individuality);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&ItemEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_ItemEntity__TypeInfo, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    byte_4188FE9 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v16 = list;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = list;
        v23 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (ItemEntity_c *)list->klass->_2.typeHierarchy[v23 - 1] == ItemEntity_TypeInfo )
        {
          items = list[2].fields.items;
          if ( items )
          {
            if ( (__int64)list[2].fields._syncRoot <= (__int64)v16 )
            {
              klass = list[3].klass;
              if ( !klass || (__int64)klass >= (__int64)v16 )
              {
                monitor = (int)items[1].monitor;
                if ( monitor >= 1 )
                {
                  v21 = 0LL;
                  v22 = items + 2;
                  while ( 1 )
                  {
                    if ( (unsigned int)v21 >= monitor )
                    {
                      v25 = sub_B2C460(list);
                      sub_B2C400(v25, 0LL);
                    }
                    if ( *((_DWORD *)&v22->klass + v21) == individuality )
                      break;
                    if ( (int)++v21 >= monitor )
                      goto LABEL_25;
                  }
                  if ( !v12 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v12,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)list,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
                }
              }
            }
          }
        }
      }
LABEL_25:
      if ( ++v17 >= Count )
        goto LABEL_26;
    }
LABEL_28:
    sub_B2C434(list, v13);
  }
LABEL_26:
  if ( !v12 )
    goto LABEL_28;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList_27411680(
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x1
  int32_t v14; // w22
  int32_t v15; // w23
  struct System_Collections_Generic_IList_T__o *items; // x8
  unsigned __int64 monitor; // x10
  unsigned __int64 v18; // x9
  signed int max_length; // w12
  __int64 v20; // x14
  __int64 v21; // x10
  __int64 v23; // x0

  if ( (byte_4188FEA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, individualityList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&ItemEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_ItemEntity__TypeInfo, v10);
    byte_4188FEA = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( individualityList )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v14 = (int)list;
      v15 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             v15,
                                                                                             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v13 = list;
          v21 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v21
            && (ItemEntity_c *)list->klass->_2.typeHierarchy[v21 - 1] == ItemEntity_TypeInfo )
          {
            items = list[2].fields.items;
            if ( items )
            {
              if ( (int)items[1].monitor >= 1 )
              {
                monitor = (unsigned int)items[1].monitor;
                v18 = 0LL;
                while ( 1 )
                {
                  if ( v18 >= monitor )
                  {
LABEL_27:
                    v23 = sub_B2C460(list);
                    sub_B2C400(v23, 0LL);
                  }
                  max_length = individualityList->max_length;
                  if ( max_length >= 1 )
                    break;
LABEL_16:
                  if ( (__int64)++v18 >= (int)monitor )
                    goto LABEL_24;
                }
                v20 = 0LL;
                while ( 1 )
                {
                  if ( (unsigned int)v20 >= max_length )
                    goto LABEL_27;
                  if ( *((_DWORD *)&items[2].klass + v18) == individualityList->m_Items[v20 + 1] )
                    break;
                  if ( (int)++v20 >= max_length )
                    goto LABEL_16;
                }
                if ( !v11 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v11,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)list,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
              }
            }
          }
        }
LABEL_24:
        if ( ++v15 >= v14 )
          goto LABEL_25;
      }
LABEL_28:
      sub_B2C434(list, v13);
    }
  }
LABEL_25:
  if ( !v11 )
    goto LABEL_28;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetItemData(ItemMaster_o *this, int32_t itemId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool v6; // w8
  ItemEntity_o *result; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188FE5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, *(_QWORD *)&itemId);
    byte_4188FE5 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         itemId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_B2C434(0LL, v5);
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

  if ( (byte_4188FE6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, *(_QWORD *)&itemId);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    byte_4188FE6 = 1;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             itemId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  __int64 v6; // x1

  if ( (byte_4188FEB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, *(_QWORD *)&id);
    byte_4188FEB = 1;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             id,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    sub_B2C434(0LL, v6);
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
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  int32_t *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x9
  int v18; // w8
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_4188FE1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B2C35C(&ItemEntity_TypeInfo, v6);
    byte_4188FE1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v8);
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
          goto LABEL_31;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_31:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_10:
      v14 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v15 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                       Enumerator,
                       *(_QWORD *)(v14 + 8));
    if ( !v15 )
      goto LABEL_42;
    v17 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 300LL) < (unsigned int)v17
      || *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * v17 - 8) != ItemEntity_TypeInfo )
    {
      v15 = (int32_t *)sub_B2C728(v15);
LABEL_42:
      sub_B2C434(v15, v16);
    }
    v18 = v15[12];
    if ( v18 <= 12 )
    {
      switch ( v18 )
      {
        case 1:
          *(&this->fields.revision + 1) = v15[4];
          break;
        case 2:
          this->fields.friendPointId = v15[4];
          break;
        case 5:
          this->fields.qpId = v15[4];
          break;
      }
    }
    else
    {
      switch ( v18 )
      {
        case 13:
          this->fields.rarePriId = v15[4];
          break;
        case 20:
          this->fields.stoneId = v15[4];
          break;
        case 21:
          this->fields.stoneFragmentsId = v15[4];
          break;
        case 22:
          this->fields.manaId = v15[4];
          break;
        default:
          continue;
      }
    }
  }
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_38:
    v27 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return 1;
}


void __fastcall ItemMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ItemMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41841FE & 1) == 0 )
  {
    sub_B2C35C(&ItemMaster___c_TypeInfo, v1);
    byte_41841FE = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ItemMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ItemMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ItemMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}