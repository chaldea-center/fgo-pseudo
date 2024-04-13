void __fastcall ItemMaster___ctor(ItemMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7CFE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E7CFE = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    36,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_ItemMaster__ItemEntity__int___ctor__);
}


System_Int32_array *__fastcall ItemMaster__GetBoostItemList(
        ItemMaster_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Int32_array *result; // x0
  __int64 v43; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v45; // x2
  ItemEntity_array *EntityList; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x19
  int max_length; // w8
  unsigned int v49; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x23
  SkillLvEntity_o *v51; // x24
  int32_t v52; // w5
  struct ItemMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__15_0; // x20
  Il2CppObject *v55; // x21
  struct ItemMaster___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int size; // w20
  __int64 v64; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v65; // x8
  __int64 v66; // x0

  if ( (byte_42E7D06 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_ItemEntity___ctor__, (_DWORD)setupInfo, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_ItemEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v9, v10, v11);
    sub_B5D5C4(&int___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_ItemMaster___c__GetBoostItemList_b__15_0__, v36, v37, v38);
    sub_B5D5C4(&ItemMaster___c_TypeInfo, v39, v40, v41);
    byte_42E7D06 = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)result,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  EntityList = ItemMaster__GetEntityList(this, 19, v45);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !EntityList )
    goto LABEL_36;
  max_length = EntityList->max_length;
  if ( max_length >= 1 )
  {
    v49 = 0;
    while ( 1 )
    {
      if ( v49 >= max_length )
      {
LABEL_37:
        v66 = sub_B5D6C8(result);
        sub_B5D668(v66, 0LL);
      }
      v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)EntityList->m_Items[v49];
      if ( !v50 || !MasterData_WarQuestSelectionMaster )
        break;
      result = (System_Int32_array *)SkillLvMaster__GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       v50[1].fields.targetId,
                                       1,
                                       0LL);
      if ( result )
      {
        v51 = (SkillLvEntity_o *)result;
        v52 = setupInfo ? EventUpValSetupInfo__get_EventId(setupInfo, 0LL) : 0;
        result = (System_Int32_array *)SkillLvEntity__getEventUpVal(v51, -1, 0, 0, setupInfo, v52, 0, 1, 0LL);
        if ( ((unsigned __int8)result & 1) != 0 )
        {
          if ( !v47 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v47,
            v50,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
        }
      }
      max_length = EntityList->max_length;
      if ( (int)++v49 >= max_length )
        goto LABEL_18;
    }
LABEL_36:
    sub_B5D69C(result, v43);
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
    v55 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__15_0,
      v55,
      Method_ItemMaster___c__GetBoostItemList_b__15_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ItemEntity___ctor__);
    v56 = ItemMaster___c_TypeInfo->static_fields;
    v56->__9__15_0 = (struct System_Comparison_ItemEntity__o *)_9__15_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v56->__9__15_0,
      (System_Int32_array **)_9__15_0,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  if ( !v47 )
    goto LABEL_36;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v47,
    (System_Comparison_T__o *)_9__15_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  size = v47->fields._size;
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)size);
  if ( size >= 1 )
  {
    v64 = 0LL;
    while ( 1 )
    {
      if ( v47->fields._size <= (unsigned int)v64 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v65 = v47->fields._items->m_Items[v64];
      if ( !v65 || !result )
        goto LABEL_36;
      if ( (unsigned int)v64 >= result->max_length )
        goto LABEL_37;
      result->m_Items[++v64] = v65->fields.missionTargetId;
      if ( (int)v64 >= size )
        return result;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ItemEntity_o *__fastcall ItemMaster__GetEntityByType(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
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
  ItemEntity_o *result; // x0
  __int64 v17; // x10

  if ( (byte_42E7D01 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      itemType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&ItemEntity_TypeInfo, v9, v10, v11);
    byte_42E7D01 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (ItemEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                 list,
                                 v15,
                                 (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v17 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (ItemEntity_c *)result->klass->_2.typeHierarchy[v17 - 1] == ItemEntity_TypeInfo
          && result->fields.type == itemType )
        {
          return result;
        }
      }
      if ( ++v15 >= v14 )
        return 0LL;
    }
LABEL_14:
    sub_B5D69C(list, *(_QWORD *)&itemType);
  }
  return 0LL;
}


ItemEntity_array *__fastcall ItemMaster__GetEntityList(ItemMaster_o *this, int32_t itemType, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  __int64 v28; // x1
  int64_t list; // x0
  int32_t Count; // w22
  int64_t v31; // x23
  int32_t v32; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x25
  __int64 v34; // x10

  if ( (byte_42E7D00 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      itemType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&ItemEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&NetworkManager_TypeInfo, v24, v25, v26);
    byte_42E7D00 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v31 = list;
    v32 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v32,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v34 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v34
          && *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v34 - 8) == ItemEntity_TypeInfo
          && *(_DWORD *)(list + 48) == itemType )
        {
          list = ItemEntity__IsEnable_28493400((ItemEntity_o *)list, v31, 0LL);
          if ( (list & 1) != 0 )
          {
            if ( !v27 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v27,
              v33,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
          }
        }
      }
      if ( ++v32 >= Count )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(list, v28);
  }
LABEL_18:
  if ( !v27 )
    goto LABEL_20;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


System_Collections_Generic_List_ItemEntity__o *__fastcall ItemMaster__GetEntityListByType(
        ItemMaster_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  int64_t Time; // x0
  __int64 v32; // x1
  int64_t v33; // x22
  __int64 v34; // x1
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v41; // x3
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  ItemEntity_o *v46; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x23
  __int64 v48; // x9
  __int64 IsEnable_28493400; // x0
  __int64 v50; // x1
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0

  if ( (byte_42E7D02 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      itemType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ItemEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&NetworkManager_TypeInfo, v27, v28, v29);
    byte_42E7D02 = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_B5D69C(Time, v32);
  v33 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v34);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v35);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_19:
      v45 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v41);
    }
    v46 = (ItemEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                            Enumerator,
                            *(_QWORD *)(v45 + 8));
    v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)v46;
    if ( v46 )
    {
      v48 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v46->klass->_2.bitflags2 + 1) < (unsigned int)v48
        || (ItemEntity_c *)v46->klass->_2.typeHierarchy[v48 - 1] != ItemEntity_TypeInfo )
      {
        IsEnable_28493400 = sub_B5D990(v46);
LABEL_36:
        sub_B5D69C(IsEnable_28493400, v50);
      }
      if ( v46->fields.type == itemType )
      {
        IsEnable_28493400 = ItemEntity__IsEnable_28493400(v46, v33, 0LL);
        if ( (IsEnable_28493400 & 1) != 0 )
        {
          if ( !v30 )
            goto LABEL_36;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v30,
            v47,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
        }
      }
    }
  }
  v51 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_32:
    v54 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v41);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  return (System_Collections_Generic_List_ItemEntity__o *)v30;
}


ItemEntity_o *__fastcall ItemMaster__GetEventPoint(ItemMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ItemEntity_o *result; // x0
  __int64 v13; // x1
  struct System_String_o *name; // x8
  ItemEntity_o *v15; // x20
  unsigned __int64 v16; // x21
  __int64 v17; // x0

  if ( (byte_42E7D05 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E7D05 = 1;
  }
  result = (ItemEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result
    || (result = (ItemEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)result,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (result = (ItemEntity_o *)ShopMaster__GetEventItemList((ShopMaster_o *)result, eventId, 0LL)) == 0LL )
  {
    sub_B5D69C(result, v13);
  }
  name = result->fields.name;
  v15 = result;
  if ( (int)name < 1 )
    return 0LL;
  v16 = 0LL;
  while ( 1 )
  {
    if ( v16 >= (unsigned int)name )
    {
      v17 = sub_B5D6C8(result);
      sub_B5D668(v17, 0LL);
    }
    result = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                               *((_DWORD *)&v15->fields.detail + v16),
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( result )
    {
      if ( result->fields.type == 14 )
        break;
    }
    LODWORD(name) = v15->fields.name;
    if ( (__int64)++v16 >= (int)name )
      return 0LL;
  }
  return result;
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList(
        ItemMaster_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  __int64 v28; // x1
  int64_t list; // x0
  int32_t Count; // w22
  int64_t v31; // x23
  int32_t v32; // w24
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x8
  int namespaze; // w9
  unsigned int v35; // w10
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x25
  __int64 v37; // x10
  __int64 v39; // x0

  if ( (byte_42E7D07 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      individuality,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&ItemEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&NetworkManager_TypeInfo, v24, v25, v26);
    byte_42E7D07 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v31 = list;
    v32 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v32,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v37 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v37
          && *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v37 - 8) == ItemEntity_TypeInfo )
        {
          if ( *(_QWORD *)(list + 80) )
          {
            list = ItemEntity__IsEnable_28493400((ItemEntity_o *)list, v31, 0LL);
            if ( (list & 1) != 0 )
            {
              klass = v36[2].klass;
              if ( !klass )
                break;
              namespaze = (int)klass->_1.namespaze;
              if ( namespaze >= 1 )
              {
                v35 = 0;
                while ( 1 )
                {
                  if ( v35 >= namespaze )
                  {
                    v39 = sub_B5D6C8(list);
                    sub_B5D668(v39, 0LL);
                  }
                  if ( *((_DWORD *)&klass->_1.byval_arg.data + (int)v35) == individuality )
                    break;
                  if ( (int)++v35 >= namespaze )
                    goto LABEL_24;
                }
                if ( !v27 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v27,
                  v36,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
              }
            }
          }
        }
      }
LABEL_24:
      if ( ++v32 >= Count )
        goto LABEL_25;
    }
LABEL_27:
    sub_B5D69C(list, v28);
  }
LABEL_25:
  if ( !v27 )
    goto LABEL_27;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_array *__fastcall ItemMaster__GetIndividualityList_23834128(
        ItemMaster_o *this,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v26; // x1
  int32_t v27; // w22
  int32_t v28; // w23
  struct System_Collections_Generic_IList_T__o *items; // x8
  unsigned __int64 monitor; // x10
  unsigned __int64 v31; // x9
  signed int max_length; // w12
  __int64 v33; // x14
  __int64 v34; // x10
  __int64 v36; // x0

  if ( (byte_42E7D08 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)individualityList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&ItemEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v21, v22, v23);
    byte_42E7D08 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( individualityList )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v27 = (int)list;
      v28 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             v28,
                                                                                             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v26 = list;
          v34 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v34
            && (ItemEntity_c *)list->klass->_2.typeHierarchy[v34 - 1] == ItemEntity_TypeInfo )
          {
            items = list[2].fields.items;
            if ( items )
            {
              if ( (int)items[1].monitor >= 1 )
              {
                monitor = (unsigned int)items[1].monitor;
                v31 = 0LL;
                while ( 1 )
                {
                  if ( v31 >= monitor )
                  {
LABEL_27:
                    v36 = sub_B5D6C8(list);
                    sub_B5D668(v36, 0LL);
                  }
                  max_length = individualityList->max_length;
                  if ( max_length >= 1 )
                    break;
LABEL_16:
                  if ( (__int64)++v31 >= (int)monitor )
                    goto LABEL_24;
                }
                v33 = 0LL;
                while ( 1 )
                {
                  if ( (unsigned int)v33 >= max_length )
                    goto LABEL_27;
                  if ( *((_DWORD *)&items[2].klass + v31) == individualityList->m_Items[v33 + 1] )
                    break;
                  if ( (int)++v33 >= max_length )
                    goto LABEL_16;
                }
                if ( !v24 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v24,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)list,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
              }
            }
          }
        }
LABEL_24:
        if ( ++v28 >= v27 )
          goto LABEL_25;
      }
LABEL_28:
      sub_B5D69C(list, v26);
    }
  }
LABEL_25:
  if ( !v24 )
    goto LABEL_28;
  return (ItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ItemEntity__ToArray__);
}


ItemEntity_o *__fastcall ItemMaster__GetItemData(ItemMaster_o *this, int32_t itemId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  bool v7; // w8
  ItemEntity_o *result; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7D03 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, itemId, (_DWORD)method, v3);
    byte_42E7D03 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         itemId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  result = 0LL;
  if ( v7 )
  {
    if ( !entity )
      sub_B5D69C(0LL, v6);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  WarEntity_o *Entity; // x0
  ItemEntity_o *v11; // x20

  if ( (byte_42E7D04 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, itemId, reboot, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    byte_42E7D04 = 1;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             itemId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    return 0LL;
  v11 = (ItemEntity_o *)Entity;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( v11->fields.endedAt > NetworkManager__getTime(0LL) || !reboot )
    return 0LL;
  return v11;
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
  __int64 v3; // x3
  WarEntity_o *Entity; // x0
  __int64 v7; // x1

  if ( (byte_42E7D09 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, id, (_DWORD)method, v3);
    byte_42E7D09 = 1;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             id,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !Entity )
    sub_B5D69C(0LL, v7);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  int32_t *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x9
  int v28; // w8
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_42E7CFF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ItemEntity_TypeInfo, v14, v15, v16);
    byte_42E7CFF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_31:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
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
          goto LABEL_10;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_10:
      v24 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v33);
    }
    v25 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                       Enumerator,
                       *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_42;
    v27 = *(&ItemEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) < (unsigned int)v27
      || *(ItemEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v27 - 8) != ItemEntity_TypeInfo )
    {
      v25 = (int32_t *)sub_B5D990(v25);
LABEL_42:
      sub_B5D69C(v25, v26);
    }
    v28 = v25[12];
    if ( v28 <= 12 )
    {
      switch ( v28 )
      {
        case 1:
          *(&this->fields.revision + 1) = v25[4];
          break;
        case 2:
          this->fields.friendPointId = v25[4];
          break;
        case 5:
          this->fields.qpId = v25[4];
          break;
      }
    }
    else
    {
      switch ( v28 )
      {
        case 13:
          this->fields.rarePriId = v25[4];
          break;
        case 20:
          this->fields.stoneId = v25[4];
          break;
        case 21:
          this->fields.stoneFragmentsId = v25[4];
          break;
        case 22:
          this->fields.manaId = v25[4];
          break;
        default:
          continue;
      }
    }
  }
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_38:
    v37 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v33);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return 1;
}


void __fastcall ItemMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ItemMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5703 & 1) == 0 )
  {
    sub_B5D5C4(&ItemMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5703 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ItemMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ItemMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ItemMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}