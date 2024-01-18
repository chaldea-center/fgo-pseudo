void __fastcall ShopReleaseMaster___ctor(ShopReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41891BB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__, method);
    byte_41891BB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    118,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__);
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

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, *(const MethodInfo **)&kind);
  if ( !EntitiyList )
LABEL_9:
    sub_B2C434(EntitiyList, v6);
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 1;
  v8 = 0LL;
  m_Items = EntitiyList->m_Items;
  while ( 1 )
  {
    EntitiyList = (ShopReleaseEntity_array *)m_Items[v8];
    if ( !EntitiyList )
      goto LABEL_9;
    if ( HIDWORD(EntitiyList->bounds) == kind )
      return ShopReleaseEntity__IsCondEnable((ShopReleaseEntity_o *)EntitiyList, v6);
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
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  int32_t v14; // w23
  __int64 v15; // x10

  v3 = shopId;
  if ( (byte_41891BC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&shopId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v9);
    sub_B2C35C(&ShopReleaseEntity_TypeInfo, v10);
    byte_41891BC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&shopId = list;
        v15 = *(&ShopReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (ShopReleaseEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == ShopReleaseEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
        }
      }
      if ( ++v14 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, *(_QWORD *)&shopId);
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopReleaseEntity_array *__fastcall ShopReleaseMaster__GetEntitiyList_27682864(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        bool isClosedDisp,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  int32_t v5; // w21
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
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  int32_t v21; // w24
  __int64 v22; // x10
  struct ShopReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v25; // x21
  struct ShopReleaseMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  v4 = isClosedDisp;
  v5 = shopId;
  if ( (byte_41891BD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&shopId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_ShopReleaseEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_ShopReleaseEntity__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v14);
    sub_B2C35C(&ShopReleaseEntity_TypeInfo, v15);
    sub_B2C35C(&Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__, v16);
    sub_B2C35C(&ShopReleaseMaster___c_TypeInfo, v17);
    byte_41891BD = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v21,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&shopId = list;
        v22 = *(&ShopReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v22
          && *(ShopReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) == ShopReleaseEntity_TypeInfo
          && *((_DWORD *)list + 4) == v5
          && (((*((_BYTE *)list + 44) != 0) ^ v4) & 1) == 0 )
        {
          if ( !v20 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v20,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_15;
    }
LABEL_25:
    sub_B2C434(list, *(_QWORD *)&shopId);
  }
LABEL_15:
  list = ShopReleaseMaster___c_TypeInfo;
  if ( (BYTE3(ShopReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopReleaseMaster___c_TypeInfo);
    list = ShopReleaseMaster___c_TypeInfo;
  }
  static_fields = (struct ShopReleaseMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ShopReleaseMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ShopReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v25,
      Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ShopReleaseEntity___ctor__);
    v26 = ShopReleaseMaster___c_TypeInfo->static_fields;
    v26->__9__4_0 = (struct System_Comparison_ShopReleaseEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v20 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__);
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
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

  if ( (byte_41891B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_41891B9 = 1;
  }
  PK = ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&priority);
  return (ShopReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_24E4520 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  _BOOL8 IsCondEnable; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x22
  il2cpp_array_size_t v12; // w23
  Il2CppClass **v13; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x21
  __int64 v15; // x0

  if ( (byte_41891BE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, *(_QWORD *)&shopId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v6);
    byte_41891BE = 1;
  }
  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( !EntitiyList )
    goto LABEL_14;
  v11 = *(_QWORD *)&EntitiyList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = &EntitiyList->obj.klass + (int)v12;
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v13[4];
      if ( !v14 )
        break;
      IsCondEnable = ShopReleaseEntity__IsCondEnable((ShopReleaseEntity_o *)v13[4], v10);
      if ( !IsCondEnable )
      {
        if ( !v8 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          v14,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
      }
      if ( (int)++v12 >= (int)v11 )
        return (System_Collections_Generic_List_ShopReleaseEntity__o *)v8;
      if ( v12 >= EntitiyList->max_length )
      {
        v15 = sub_B2C460(IsCondEnable);
        sub_B2C400(v15, 0LL);
      }
    }
LABEL_14:
    sub_B2C434(IsCondEnable, v10);
  }
  return (System_Collections_Generic_List_ShopReleaseEntity__o *)v8;
}


int32_t __fastcall ShopReleaseMaster__GetPurchaseShop(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_27682864; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  __int64 v7; // x9
  ShopReleaseEntity_o **m_Items; // x10

  EntitiyList_27682864 = ShopReleaseMaster__GetEntitiyList_27682864(this, shopId, 0, v3);
  if ( !EntitiyList_27682864 )
LABEL_9:
    sub_B2C434(EntitiyList_27682864, v5);
  max_length = EntitiyList_27682864->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0LL;
  m_Items = EntitiyList_27682864->m_Items;
  while ( 1 )
  {
    EntitiyList_27682864 = (ShopReleaseEntity_array *)m_Items[v7];
    if ( !EntitiyList_27682864 )
      goto LABEL_9;
    if ( (HIDWORD(EntitiyList_27682864->bounds) & 0xFFFFFFFE) == 14 )
      return ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)EntitiyList_27682864, v5);
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
  int max_length; // w8
  __int64 v6; // x9
  ShopReleaseEntity_o *v7; // x11
  struct System_Int32_array *condValues; // x8
  __int64 v10; // x0

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  if ( !EntitiyList )
    goto LABEL_12;
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = EntitiyList->m_Items[v6];
    if ( !v7 )
      goto LABEL_12;
    if ( v7->fields.condType == 82 )
      break;
    if ( (int)++v6 >= max_length )
      return 0;
  }
  condValues = v7->fields.condValues;
  if ( !condValues )
LABEL_12:
    sub_B2C434(EntitiyList, v4);
  if ( !condValues->max_length )
  {
    v10 = sub_B2C460(EntitiyList);
    sub_B2C400(v10, 0LL);
  }
  return condValues->m_Items[1];
}


bool __fastcall ShopReleaseMaster__IsAllCondClear(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  ShopReleaseEntity_o *EntitiyList; // x0
  const MethodInfo *v4; // x1
  struct System_Int32_array *condValues; // x20
  ShopReleaseEntity_o *v6; // x19
  unsigned int v7; // w21
  _BOOL8 IsCondEnable; // x0
  __int64 v9; // x0

  EntitiyList = (ShopReleaseEntity_o *)ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  if ( !EntitiyList )
LABEL_11:
    sub_B2C434(EntitiyList, v4);
  condValues = EntitiyList->fields.condValues;
  v6 = EntitiyList;
  if ( (int)condValues < 1 )
    return 1;
  v7 = 0;
  while ( 1 )
  {
    EntitiyList = (ShopReleaseEntity_o *)*(&v6->fields.condNum + (int)v7);
    if ( !EntitiyList )
      goto LABEL_11;
    IsCondEnable = ShopReleaseEntity__IsCondEnable(EntitiyList, v4);
    if ( !IsCondEnable )
      return 0;
    if ( (int)++v7 >= (int)condValues )
      return 1;
    if ( v7 >= LODWORD(v6->fields.condValues) )
    {
      v9 = sub_B2C460(IsCondEnable);
      sub_B2C400(v9, 0LL);
    }
  }
}


bool __fastcall ShopReleaseMaster__IsOpen(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_27682864; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x20
  ShopReleaseEntity_array *v7; // x19
  il2cpp_array_size_t v8; // w21
  __int64 v9; // x0

  EntitiyList_27682864 = ShopReleaseMaster__GetEntitiyList_27682864(this, shopId, 0, v3);
  if ( !EntitiyList_27682864 )
LABEL_12:
    sub_B2C434(EntitiyList_27682864, v5);
  v6 = *(_QWORD *)&EntitiyList_27682864->max_length;
  v7 = EntitiyList_27682864;
  if ( (int)v6 < 1 )
    return 1;
  v8 = 0;
  while ( 1 )
  {
    EntitiyList_27682864 = (ShopReleaseEntity_array *)v7->m_Items[v8];
    if ( !EntitiyList_27682864 )
      goto LABEL_12;
    if ( !BYTE4(EntitiyList_27682864->m_Items[1]) )
    {
      EntitiyList_27682864 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(
                                                          (ShopReleaseEntity_o *)EntitiyList_27682864,
                                                          v5);
      if ( ((unsigned __int8)EntitiyList_27682864 & 1) == 0 )
        return 0;
    }
    if ( (int)++v8 >= (int)v6 )
      return 1;
    if ( v8 >= v7->max_length )
    {
      v9 = sub_B2C460(EntitiyList_27682864);
      sub_B2C400(v9, 0LL);
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
  ShopReleaseEntity_array *EntitiyList_27682864; // x0
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
  __int64 v19; // x0
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

  EntitiyList_27682864 = ShopReleaseMaster__GetEntitiyList_27682864(this, shopId, 1, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_27682864 )
LABEL_14:
    sub_B2C434(EntitiyList_27682864, v8);
  v15 = *(_QWORD *)&EntitiyList_27682864->max_length;
  v16 = EntitiyList_27682864;
  if ( (int)v15 < 1 )
  {
LABEL_12:
    *message = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)message, 0LL, v9, v10, v11, v12, v13, v14);
    *itemName = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)itemName, 0LL, v20, v21, v22, v23, v24, v25);
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
    EntitiyList_27682864 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v16->m_Items[v17], v8);
    if ( (((v18->fields.condType == 82) ^ (unsigned int)EntitiyList_27682864) & 1) == 0 )
      goto LABEL_13;
LABEL_9:
    if ( (int)v17 + 1 >= (int)v15 )
      goto LABEL_12;
    if ( (unsigned int)++v17 >= v16->max_length )
    {
      v19 = sub_B2C460(EntitiyList_27682864);
      sub_B2C400(v19, 0LL);
    }
  }
  if ( v18->fields.condType != 82 )
    goto LABEL_9;
LABEL_13:
  PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v18, v8);
  *message = PreparationConditionText;
  sub_B2C2F8(
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
  sub_B2C2F8(
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__TryGetClosedMessage(
        ShopReleaseMaster_o *this,
        System_String_o **message,
        System_String_o **itemName,
        int32_t shopId,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList_27682864; // x0
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
  __int64 v19; // x0
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

  EntitiyList_27682864 = ShopReleaseMaster__GetEntitiyList_27682864(this, shopId, 0, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_27682864 )
LABEL_12:
    sub_B2C434(EntitiyList_27682864, v8);
  v15 = *(_QWORD *)&EntitiyList_27682864->max_length;
  v16 = EntitiyList_27682864;
  if ( (int)v15 < 1 )
  {
LABEL_10:
    *message = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)message, 0LL, v9, v10, v11, v12, v13, v14);
    *itemName = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)itemName, 0LL, v20, v21, v22, v23, v24, v25);
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
      EntitiyList_27682864 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v18, v8);
      if ( ((unsigned __int8)EntitiyList_27682864 & 1) != 0 )
        break;
      if ( (int)++v17 >= (int)v15 )
        goto LABEL_10;
      if ( v17 >= v16->max_length )
      {
        v19 = sub_B2C460(EntitiyList_27682864);
        sub_B2C400(v19, 0LL);
      }
    }
    PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v18, v8);
    *message = PreparationConditionText;
    sub_B2C2F8(
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
    sub_B2C2F8(
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

  if ( (byte_41891BA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__, entity);
    byte_41891BA = 1;
  }
  PK = ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopReleaseMaster__isExistCondType(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        int32_t type,
        const MethodInfo *method)
{
  ShopReleaseEntity_array *EntitiyList; // x0
  __int64 v6; // x1
  int max_length; // w8
  __int64 v8; // x9
  ShopReleaseEntity_o *v9; // x11

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, *(const MethodInfo **)&type);
  if ( !EntitiyList )
LABEL_9:
    sub_B2C434(EntitiyList, v6);
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = EntitiyList->m_Items[v8];
    if ( !v9 )
      goto LABEL_9;
    if ( v9->fields.condType == type )
      return 1;
    if ( (int)++v8 >= max_length )
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

  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, (const MethodInfo *)questId);
  *questId = 0;
  if ( !EntitiyList )
LABEL_9:
    sub_B2C434(EntitiyList, v6);
  max_length = EntitiyList->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0LL;
  m_Items = EntitiyList->m_Items;
  while ( 1 )
  {
    EntitiyList = (ShopReleaseEntity_array *)m_Items[v8];
    if ( !EntitiyList )
      goto LABEL_9;
    if ( HIDWORD(EntitiyList->bounds) == 36 )
      break;
    if ( (int)++v8 >= max_length )
      return 0;
  }
  *questId = ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)EntitiyList, v6);
  return 1;
}


void __fastcall ShopReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ShopReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_418544F & 1) == 0 )
  {
    sub_B2C35C(&ShopReleaseMaster___c_TypeInfo, v1);
    byte_418544F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ShopReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ShopReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopReleaseMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}