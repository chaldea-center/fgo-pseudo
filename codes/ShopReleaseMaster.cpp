void __fastcall ShopReleaseMaster___ctor(ShopReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB77F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__, method);
    byte_40FB77F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    118,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__CondClearCheck(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        int32_t kind,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x0
  const MethodInfo *v6; // x1
  int max_length; // w8
  __int64 v8; // x9
  ShopReleaseEntity_o **m_Items; // x10
  ShopReleaseEntity_o *v10; // x0

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, *(const MethodInfo **)&kind);
  if ( !EntitiyList )
LABEL_9:
    sub_B170D4();
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 1;
  v8 = 0LL;
  m_Items = EntitiyList->m_Items;
  while ( 1 )
  {
    v10 = m_Items[v8];
    if ( !v10 )
      goto LABEL_9;
    if ( v10->fields.condType == kind )
      return ShopReleaseEntity__IsCondEnable(v10, v6);
    if ( (int)++v8 >= max_length )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
ShopReleaseEntity_array *__fastcall ShopReleaseMaster__GetEntitiyList(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  int32_t v18; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v21; // x10

  if ( (byte_40FB780 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&shopId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v9);
    sub_B16FFC(&ShopReleaseEntity_TypeInfo, v10);
    byte_40FB780 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopReleaseEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v19 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v19,
                                                                      v18,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = *(&ShopReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (ShopReleaseEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == ShopReleaseEntity_TypeInfo
          && Item->fields.missionTargetId == shopId )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
        }
      }
      if ( ++v18 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v17 )
    goto LABEL_16;
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopReleaseEntity_array *__fastcall ShopReleaseMaster__GetEntitiyList_27879512(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        bool isClosedDisp,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v30; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v32; // x10
  ShopReleaseMaster___c_c *v33; // x0
  struct ShopReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v36; // x21
  struct ShopReleaseMaster___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  v4 = isClosedDisp;
  if ( (byte_40FB781 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&shopId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_ShopReleaseEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_ShopReleaseEntity__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v14);
    sub_B16FFC(&ShopReleaseEntity_TypeInfo, v15);
    sub_B16FFC(&Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__, v16);
    sub_B16FFC(&ShopReleaseMaster___c_TypeInfo, v17);
    byte_40FB781 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopReleaseEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      v30 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v30 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v30,
               v29,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v25 = Item;
        v32 = *(&ShopReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v32
          && (ShopReleaseEntity_c *)Item->klass->_2.typeHierarchy[v32 - 1] == ShopReleaseEntity_TypeInfo
          && LODWORD(Item[1].klass) == shopId
          && (((BYTE4(Item[2].monitor) != 0) ^ v4) & 1) == 0 )
        {
          if ( !v24 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
        }
      }
      if ( ++v29 >= Count )
        goto LABEL_15;
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_15:
  v33 = ShopReleaseMaster___c_TypeInfo;
  if ( (BYTE3(ShopReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopReleaseMaster___c_TypeInfo);
    v33 = ShopReleaseMaster___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = ShopReleaseMaster___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ShopReleaseEntity__TypeInfo,
                                                                          v25,
                                                                          v26,
                                                                          v27,
                                                                          v28);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v36,
      Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ShopReleaseEntity___ctor__);
    v37 = ShopReleaseMaster___c_TypeInfo->static_fields;
    v37->__9__4_0 = (struct System_Comparison_ShopReleaseEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v37->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !v24 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v24,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__);
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopReleaseEntity_o *__fastcall ShopReleaseMaster__GetEntity(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        int32_t condType,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FB77D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_40FB77D = 1;
  }
  PK = ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&priority);
  return (ShopReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_266F7D8 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ShopReleaseEntity__o *__fastcall ShopReleaseMaster__GetNotClearShopReleaseEntity(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ShopReleaseEntity_array *EntitiyList; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  const MethodInfo *v13; // x1
  __int64 v14; // x22
  il2cpp_array_size_t v15; // w23
  Il2CppClass **v16; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x21
  _BOOL8 IsCondEnable; // x0
  __int64 v19; // x2

  if ( (byte_40FB782 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, *(_QWORD *)&shopId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v6);
    byte_40FB782 = 1;
  }
  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopReleaseEntity__TypeInfo,
                                                                                                  v8,
                                                                                                  v9,
                                                                                                  v10,
                                                                                                  v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( !EntitiyList )
    goto LABEL_14;
  v14 = *(_QWORD *)&EntitiyList->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = &EntitiyList->obj.klass + (int)v15;
      v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)v16[4];
      if ( !v17 )
        break;
      IsCondEnable = ShopReleaseEntity__IsCondEnable((ShopReleaseEntity_o *)v16[4], v13);
      if ( !IsCondEnable )
      {
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v17,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
      }
      if ( (int)++v15 >= (int)v14 )
        return (System_Collections_Generic_List_ShopReleaseEntity__o *)v12;
      if ( v15 >= EntitiyList->max_length )
      {
        sub_B17100(IsCondEnable, v13, v19);
        sub_B170A0();
      }
    }
LABEL_14:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_ShopReleaseEntity__o *)v12;
}


int32_t __fastcall ShopReleaseMaster__GetPurchaseShop(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_27879512; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  __int64 v7; // x9
  ShopReleaseEntity_o **m_Items; // x10
  ShopReleaseEntity_o *v9; // x0

  EntitiyList_27879512 = ShopReleaseMaster__GetEntitiyList_27879512(this, shopId, 0, v3);
  if ( !EntitiyList_27879512 )
LABEL_9:
    sub_B170D4();
  max_length = EntitiyList_27879512->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0LL;
  m_Items = EntitiyList_27879512->m_Items;
  while ( 1 )
  {
    v9 = m_Items[v7];
    if ( !v9 )
      goto LABEL_9;
    if ( (v9->fields.condType & 0xFFFFFFFE) == 14 )
      return ShopReleaseEntity__get_condValue(v9, v5);
    if ( (int)++v7 >= max_length )
      return 0;
  }
}


int32_t __fastcall ShopReleaseMaster__GetTargetShopGroupId(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  __int64 v7; // x9
  ShopReleaseEntity_o *v8; // x11
  struct System_Int32_array *condValues; // x8

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  if ( !EntitiyList )
    goto LABEL_12;
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = EntitiyList->m_Items[v7];
    if ( !v8 )
      goto LABEL_12;
    if ( v8->fields.condType == 82 )
      break;
    if ( (int)++v7 >= max_length )
      return 0;
  }
  condValues = v8->fields.condValues;
  if ( !condValues )
LABEL_12:
    sub_B170D4();
  if ( !condValues->max_length )
  {
    sub_B17100(EntitiyList, v4, v5);
    sub_B170A0();
  }
  return condValues->m_Items[1];
}


bool __fastcall ShopReleaseMaster__IsAllCondClear(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x20
  ShopReleaseEntity_array *v6; // x19
  il2cpp_array_size_t v7; // w21
  ShopReleaseEntity_o *v8; // x0
  _BOOL8 IsCondEnable; // x0
  __int64 v10; // x2

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  if ( !EntitiyList )
LABEL_11:
    sub_B170D4();
  v5 = *(_QWORD *)&EntitiyList->max_length;
  v6 = EntitiyList;
  if ( (int)v5 < 1 )
    return 1;
  v7 = 0;
  while ( 1 )
  {
    v8 = v6->m_Items[v7];
    if ( !v8 )
      goto LABEL_11;
    IsCondEnable = ShopReleaseEntity__IsCondEnable(v8, v4);
    if ( !IsCondEnable )
      return 0;
    if ( (int)++v7 >= (int)v5 )
      return 1;
    if ( v7 >= v6->max_length )
    {
      sub_B17100(IsCondEnable, v4, v10);
      sub_B170A0();
    }
  }
}


bool __fastcall ShopReleaseMaster__IsOpen(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_27879512; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  __int64 v7; // x20
  ShopReleaseEntity_array *v8; // x19
  il2cpp_array_size_t v9; // w21
  ShopReleaseEntity_o *IsCondEnable; // x0

  EntitiyList_27879512 = ShopReleaseMaster__GetEntitiyList_27879512(this, shopId, 0, v3);
  if ( !EntitiyList_27879512 )
LABEL_12:
    sub_B170D4();
  v7 = *(_QWORD *)&EntitiyList_27879512->max_length;
  v8 = EntitiyList_27879512;
  if ( (int)v7 < 1 )
    return 1;
  v9 = 0;
  while ( 1 )
  {
    IsCondEnable = v8->m_Items[v9];
    if ( !IsCondEnable )
      goto LABEL_12;
    if ( !IsCondEnable->fields.isClosedDisp )
    {
      IsCondEnable = (ShopReleaseEntity_o *)ShopReleaseEntity__IsCondEnable(IsCondEnable, v5);
      if ( ((unsigned __int8)IsCondEnable & 1) == 0 )
        return 0;
    }
    if ( (int)++v9 >= (int)v7 )
      return 1;
    if ( v9 >= v8->max_length )
    {
      sub_B17100(IsCondEnable, v5, v6);
      sub_B170A0();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__IsPreparation(
        ShopReleaseMaster_o *this,
        System_String_o **message,
        System_String_o **itemName,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList_27879512; // x0
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x23
  ShopReleaseEntity_array *v16; // x21
  __int64 v17; // x24
  ShopReleaseEntity_o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_o *PreparationConditionText; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_o *closedItemName; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  EntitiyList_27879512 = ShopReleaseMaster__GetEntitiyList_27879512(this, shopId, 1, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_27879512 )
LABEL_14:
    sub_B170D4();
  v15 = *(_QWORD *)&EntitiyList_27879512->max_length;
  v16 = EntitiyList_27879512;
  if ( (int)v15 < 1 )
  {
LABEL_12:
    *message = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)message, 0LL, v9, v10, v11, v12, v13, v14);
    *itemName = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)itemName, 0LL, v19, v20, v21, v22, v23, v24);
    return 0;
  }
  v17 = 0LL;
  while ( 1 )
  {
    v18 = v16->m_Items[v17];
    if ( !v18 )
      goto LABEL_14;
    if ( !v18->fields.isClosedDisp )
      break;
    EntitiyList_27879512 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v16->m_Items[v17], v8);
    if ( (((v18->fields.condType == 82) ^ (unsigned int)EntitiyList_27879512) & 1) == 0 )
      goto LABEL_13;
LABEL_9:
    if ( (int)v17 + 1 >= (int)v15 )
      goto LABEL_12;
    if ( (unsigned int)++v17 >= v16->max_length )
    {
      sub_B17100(EntitiyList_27879512, v8, v9);
      sub_B170A0();
    }
  }
  if ( v18->fields.condType != 82 )
    goto LABEL_9;
LABEL_13:
  PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v18, v8);
  *message = PreparationConditionText;
  sub_B16F98(
    (BattleServantConfConponent_o *)message,
    (System_Int32_array **)PreparationConditionText,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  closedItemName = v18->fields.closedItemName;
  *itemName = closedItemName;
  sub_B16F98(
    (BattleServantConfConponent_o *)itemName,
    (System_Int32_array **)closedItemName,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__TryGetClosedMessage(
        ShopReleaseMaster_o *this,
        System_String_o **message,
        System_String_o **itemName,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList_27879512; // x0
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x23
  ShopReleaseEntity_array *v16; // x21
  il2cpp_array_size_t v17; // w24
  ShopReleaseEntity_o *v18; // x22
  _BOOL8 IsCondEnable; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_o *PreparationConditionText; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_o *closedItemName; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  EntitiyList_27879512 = ShopReleaseMaster__GetEntitiyList_27879512(this, shopId, 0, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_27879512 )
LABEL_12:
    sub_B170D4();
  v15 = *(_QWORD *)&EntitiyList_27879512->max_length;
  v16 = EntitiyList_27879512;
  if ( (int)v15 < 1 )
  {
LABEL_10:
    *message = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)message, 0LL, v9, v10, v11, v12, v13, v14);
    *itemName = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)itemName, 0LL, v20, v21, v22, v23, v24, v25);
    return 0;
  }
  else
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = v16->m_Items[v17];
      if ( !v18 )
        goto LABEL_12;
      if ( v18->fields.isClosedDisp )
        break;
      IsCondEnable = ShopReleaseEntity__IsCondEnable(v18, v8);
      if ( IsCondEnable )
        break;
      if ( (int)++v17 >= (int)v15 )
        goto LABEL_10;
      if ( v17 >= v16->max_length )
      {
        sub_B17100(IsCondEnable, v8, v9);
        sub_B170A0();
      }
    }
    PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v18, v8);
    *message = PreparationConditionText;
    sub_B16F98(
      (BattleServantConfConponent_o *)message,
      (System_Int32_array **)PreparationConditionText,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    closedItemName = v18->fields.closedItemName;
    *itemName = closedItemName;
    sub_B16F98(
      (BattleServantConfConponent_o *)itemName,
      (System_Int32_array **)closedItemName,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__TryGetEntity(
        ShopReleaseMaster_o *this,
        ShopReleaseEntity_o **entity,
        int32_t shopId,
        int32_t condType,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FB77E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__, entity);
    byte_40FB77E = 1;
  }
  PK = ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__isExistCondType(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        int32_t type,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x0
  int max_length; // w8
  __int64 v7; // x9
  ShopReleaseEntity_o *v8; // x11

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, *(const MethodInfo **)&type);
  if ( !EntitiyList )
LABEL_9:
    sub_B170D4();
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = EntitiyList->m_Items[v7];
    if ( !v8 )
      goto LABEL_9;
    if ( v8->fields.condType == type )
      return 1;
    if ( (int)++v7 >= max_length )
      return 0;
  }
}


bool __fastcall ShopReleaseMaster__isQuestNotClearSet(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        int32_t *questId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x0
  const MethodInfo *v6; // x1
  int max_length; // w8
  __int64 v8; // x9
  ShopReleaseEntity_o **m_Items; // x10
  ShopReleaseEntity_o *v10; // x0

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, (const MethodInfo *)questId);
  *questId = 0;
  if ( !EntitiyList )
LABEL_9:
    sub_B170D4();
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0LL;
  m_Items = EntitiyList->m_Items;
  while ( 1 )
  {
    v10 = m_Items[v8];
    if ( !v10 )
      goto LABEL_9;
    if ( v10->fields.condType == 36 )
      break;
    if ( (int)++v8 >= max_length )
      return 0;
  }
  *questId = ShopReleaseEntity__get_condValue(v10, v6);
  return 1;
}


void __fastcall ShopReleaseMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F79EE & 1) == 0 )
  {
    sub_B16FFC(&ShopReleaseMaster___c_TypeInfo, v1);
    byte_40F79EE = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ShopReleaseMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ShopReleaseMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ShopReleaseMaster___c___ctor(ShopReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ShopReleaseMaster___c___GetEntitiyList_b__4_0(
        ShopReleaseMaster___c_o *this,
        ShopReleaseEntity_o *a,
        ShopReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}