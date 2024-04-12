void __fastcall ItemMaster___ctor(ItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AF177 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
    byte_42AF177 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    36,
    (const MethodInfo_23E223C *)Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
}


System_Int32_array *__fastcall ItemMaster__GetBoostItemList(
        ItemMaster_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v6; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v8; // x2
  ItemEntity_array *EntityList; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  int max_length; // w8
  unsigned int v12; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x23
  SkillLvEntity_o *v14; // x24
  int32_t v15; // w5
  struct ItemMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__15_0; // x20
  Il2CppObject *v18; // x21
  struct ItemMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int size; // w20
  __int64 v27; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x8
  __int64 v29; // x0

  if ( (byte_42AF17F & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_ItemEntity___ctor__);
    sub_B52984(&System_Comparison_ItemEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_ItemMaster___c__GetBoostItemList_b__15_0__);
    sub_B52984(&ItemMaster___c_TypeInfo);
    byte_42AF17F = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)result,
                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  EntityList = ItemMaster__GetEntityList(this, 19, v8);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !EntityList )
    goto LABEL_36;
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
LABEL_37:
        v29 = sub_B52A88(result);
        sub_B52A28(v29, 0LL);
      }
      v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)EntityList->m_Items[v12];
      if ( !v13 || !MasterData_WarQuestSelectionMaster )
        break;
      result = (System_Int32_array *)SkillLvMaster__GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       v13[1].fields.targetId,
                                       1,
                                       0LL);
      if ( result )
      {
        v14 = (SkillLvEntity_o *)result;
        v15 = setupInfo ? EventUpValSetupInfo__get_EventId(setupInfo, 0LL) : 0;
        result = (System_Int32_array *)SkillLvEntity__getEventUpVal(v14, -1, 0, 0, setupInfo, v15, 0, 1, 0LL);
        if ( ((unsigned __int8)result & 1) != 0 )
        {
          if ( !v10 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            v13,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
        }
      }
      max_length = EntityList->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_18;
    }
LABEL_36:
    sub_B52A5C(result, v6);
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
    v18 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__15_0,
      v18,
      Method_ItemMaster___c__GetBoostItemList_b__15_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ItemEntity___ctor__);
    v19 = ItemMaster___c_TypeInfo->static_fields;
    v19->__9__15_0 = (struct System_Comparison_ItemEntity__o *)_9__15_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v19->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v10 )
    goto LABEL_36;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v10,
    (System_Comparison_T__o *)_9__15_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  size = v10->fields._size;
  result = (System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)size);
  if ( size >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v10->fields._size <= (unsigned int)v27 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v28 = v10->fields._items->m_Items[v27];
      if ( !v28 || !result )
        goto LABEL_36;
      if ( (unsigned int)v27 >= result->max_length )
        goto LABEL_37;
      result->m_Items[++v27] = v28->fields.missionTargetId;
      if ( (int)v27 >= size )
        return result;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEntityByType(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  ItemEntity_o *result; // x0
  __int64 v10; // x10

  if ( (byte_42AF17A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&ItemEntity_TypeInfo);
    byte_42AF17A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (ItemEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                 list,
                                 v8,
                                 (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v10 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (ItemEntity_c *)result->klass->_2.typeHierarchy[v10 - 1] == ItemEntity_TypeInfo
          && result->fields.type == itemType )
        {
          return result;
        }
      }
      if ( ++v8 >= v7 )
        return 0LL;
    }
LABEL_14:
    sub_B52A5C(list, *(_QWORD *)&itemType);
  }
  return 0LL;
}


ItemEntity_array *__fastcall ItemMaster__GetEntityList(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  __int64 v6; // x1
  int64_t list; // x0
  int32_t Count; // w22
  int64_t v9; // x23
  int32_t v10; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x25
  __int64 v12; // x10

  if ( (byte_42AF179 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&ItemEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AF179 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v9 = list;
    v10 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v10,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v12 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v12
          && *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v12 - 8) == ItemEntity_TypeInfo
          && *(_DWORD *)(list + 48) == itemType )
        {
          list = ItemEntity__IsEnable_28304764((ItemEntity_o *)list, v9, 0LL);
          if ( (list & 1) != 0 )
          {
            if ( !v5 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              v11,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
          }
        }
      }
      if ( ++v10 >= Count )
        goto LABEL_18;
    }
LABEL_20:
    sub_B52A5C(list, v6);
  }
LABEL_18:
  if ( !v5 )
    goto LABEL_20;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


System_Collections_Generic_List_ItemEntity__o *__fastcall ItemMaster__GetEntityListByType(
        ItemMaster_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x22
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  ItemEntity_o *v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x23
  __int64 v23; // x9
  __int64 IsEnable_28304764; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0

  if ( (byte_42AF17B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ItemEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AF17B = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_B52A5C(Time, v7);
  v8 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_19:
      v20 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v16);
    }
    v21 = (ItemEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            Enumerator,
                            *(_QWORD *)(v20 + 8));
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)v21;
    if ( v21 )
    {
      v23 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (ItemEntity_c *)v21->klass->_2.typeHierarchy[v23 - 1] != ItemEntity_TypeInfo )
      {
        IsEnable_28304764 = sub_B52D50(v21);
LABEL_36:
        sub_B52A5C(IsEnable_28304764, v25);
      }
      if ( v21->fields.type == itemType )
      {
        IsEnable_28304764 = ItemEntity__IsEnable_28304764(v21, v8, 0LL);
        if ( (IsEnable_28304764 & 1) != 0 )
        {
          if ( !v5 )
            goto LABEL_36;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            v22,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
        }
      }
    }
  }
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_32:
    v29 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v16);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return (System_Collections_Generic_List_ItemEntity__o *)v5;
}


ItemEntity_o *__fastcall ItemMaster__GetEventPoint(ItemMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  ItemEntity_o *result; // x0
  __int64 v6; // x1
  struct System_String_o *name; // x8
  ItemEntity_o *v8; // x20
  unsigned __int64 v9; // x21
  __int64 v10; // x0

  if ( (byte_42AF17E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF17E = 1;
  }
  result = (ItemEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result
    || (result = (ItemEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (result = (ItemEntity_o *)ShopMaster__GetEventItemList((ShopMaster_o *)result, eventId, 0LL)) == 0LL )
  {
    sub_B52A5C(result, v6);
  }
  name = result->fields.name;
  v8 = result;
  if ( (int)name < 1 )
    return 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)name )
    {
      v10 = sub_B52A88(result);
      sub_B52A28(v10, 0LL);
    }
    result = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                               *((_DWORD *)&v8->fields.detail + v9),
                               (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( result )
    {
      if ( result->fields.type == 14 )
        break;
    }
    LODWORD(name) = v8->fields.name;
    if ( (__int64)++v9 >= (int)name )
      return 0LL;
  }
  return result;
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList(
        ItemMaster_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  __int64 v6; // x1
  int64_t list; // x0
  int32_t Count; // w22
  int64_t v9; // x23
  int32_t v10; // w24
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x8
  int namespaze; // w9
  unsigned int v13; // w10
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x25
  __int64 v15; // x10
  __int64 v17; // x0

  if ( (byte_42AF180 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&ItemEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AF180 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v9 = list;
    v10 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v10,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v15 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v15
          && *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v15 - 8) == ItemEntity_TypeInfo )
        {
          if ( *(_QWORD *)(list + 80) )
          {
            list = ItemEntity__IsEnable_28304764((ItemEntity_o *)list, v9, 0LL);
            if ( (list & 1) != 0 )
            {
              klass = v14[2].klass;
              if ( !klass )
                break;
              namespaze = (int)klass->_1.namespaze;
              if ( namespaze >= 1 )
              {
                v13 = 0;
                while ( 1 )
                {
                  if ( v13 >= namespaze )
                  {
                    v17 = sub_B52A88(list);
                    sub_B52A28(v17, 0LL);
                  }
                  if ( *((_DWORD *)&klass->_1.byval_arg.data + (int)v13) == individuality )
                    break;
                  if ( (int)++v13 >= namespaze )
                    goto LABEL_24;
                }
                if ( !v5 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v5,
                  v14,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
              }
            }
          }
        }
      }
LABEL_24:
      if ( ++v10 >= Count )
        goto LABEL_25;
    }
LABEL_27:
    sub_B52A5C(list, v6);
  }
LABEL_25:
  if ( !v5 )
    goto LABEL_27;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList_23465000(
        ItemMaster_o *this,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v7; // x1
  int32_t v8; // w22
  int32_t v9; // w23
  struct System_Collections_Generic_IList_T__o *items; // x8
  unsigned __int64 monitor; // x10
  unsigned __int64 v12; // x9
  signed int max_length; // w12
  __int64 v14; // x14
  __int64 v15; // x10
  __int64 v17; // x0

  if ( (byte_42AF181 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&ItemEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    byte_42AF181 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( individualityList )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v8 = (int)list;
      v9 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             v9,
                                                                                             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v7 = list;
          v15 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
            && (ItemEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == ItemEntity_TypeInfo )
          {
            items = list[2].fields.items;
            if ( items )
            {
              if ( (int)items[1].monitor >= 1 )
              {
                monitor = (unsigned int)items[1].monitor;
                v12 = 0LL;
                while ( 1 )
                {
                  if ( v12 >= monitor )
                  {
LABEL_27:
                    v17 = sub_B52A88(list);
                    sub_B52A28(v17, 0LL);
                  }
                  max_length = individualityList->max_length;
                  if ( max_length >= 1 )
                    break;
LABEL_16:
                  if ( (__int64)++v12 >= (int)monitor )
                    goto LABEL_24;
                }
                v14 = 0LL;
                while ( 1 )
                {
                  if ( (unsigned int)v14 >= max_length )
                    goto LABEL_27;
                  if ( *((_DWORD *)&items[2].klass + v12) == individualityList->m_Items[v14 + 1] )
                    break;
                  if ( (int)++v14 >= max_length )
                    goto LABEL_16;
                }
                if ( !v5 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v5,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)list,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
              }
            }
          }
        }
LABEL_24:
        if ( ++v9 >= v8 )
          goto LABEL_25;
      }
LABEL_28:
      sub_B52A5C(list, v7);
    }
  }
LABEL_25:
  if ( !v5 )
    goto LABEL_28;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_o *__fastcall ItemMaster__GetItemData(ItemMaster_o *this, int32_t itemId, const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  ItemEntity_o *result; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AF17C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_42AF17C = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         itemId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_B52A5C(0LL, v5);
    if ( ItemEntity__IsEnable((ItemEntity_o *)entity, 0LL) )
      return (ItemEntity_o *)entity;
    else
      return 0LL;
  }
  return result;
}


ItemEntity_o *__fastcall ItemMaster__GetTimeLimitAfterItemData(
        ItemMaster_o *this,
        int32_t itemId,
        bool reboot,
        const MethodInfo *method)
{
  WarEntity_o *Entity; // x0
  ItemEntity_o *v8; // x20

  if ( (byte_42AF17D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AF17D = 1;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             itemId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    return 0LL;
  v8 = (ItemEntity_o *)Entity;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( v8->fields.endedAt > NetworkManager__getTime(0LL) || !reboot )
    return 0LL;
  return v8;
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


bool __fastcall ItemMaster__isEventPoint(ItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  WarEntity_o *Entity; // x0
  __int64 v6; // x1

  if ( (byte_42AF182 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_42AF182 = 1;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             id,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    sub_B52A5C(0LL, v6);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v7; // x8
  unsigned __int64 v8; // x10
  int32_t *v9; // x11
  __int64 v10; // x0
  int32_t *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x9
  int v14; // w8
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0

  if ( (byte_42AF178 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ItemEntity_TypeInfo);
    byte_42AF178 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_31:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v7 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      v9 = &v7->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v9 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v8;
        v9 += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v10 = (__int64)&v7->vtable[*v9].method;
    }
    else
    {
LABEL_10:
      v10 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v19);
    }
    v11 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
                       Enumerator,
                       *(_QWORD *)(v10 + 8));
    if ( !v11 )
      goto LABEL_42;
    v13 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v11 + 300LL) < (unsigned int)v13
      || *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)v11 + 200LL) + 8 * v13 - 8) != ItemEntity_TypeInfo )
    {
      v11 = (int32_t *)sub_B52D50(v11);
LABEL_42:
      sub_B52A5C(v11, v12);
    }
    v14 = v11[12];
    if ( v14 <= 12 )
    {
      switch ( v14 )
      {
        case 1:
          *(&this->fields.revision + 1) = v11[4];
          break;
        case 2:
          this->fields.friendPointId = v11[4];
          break;
        case 5:
          this->fields.qpId = v11[4];
          break;
      }
    }
    else
    {
      switch ( v14 )
      {
        case 13:
          this->fields.rarePriId = v11[4];
          break;
        case 20:
          this->fields.stoneId = v11[4];
          break;
        case 21:
          this->fields.stoneFragmentsId = v11[4];
          break;
        case 22:
          this->fields.manaId = v11[4];
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
    v23 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return 1;
}


void __fastcall ItemMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ItemMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ACE4B & 1) == 0 )
  {
    sub_B52984(&ItemMaster___c_TypeInfo);
    byte_42ACE4B = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ItemMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ItemMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ItemMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}