void __fastcall ShopReleaseMaster___ctor(ShopReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA6A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA6A1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    119,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string___ctor__);
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
    sub_B5D69C(EntitiyList, v6);
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
  __int64 v3; // x3
  int32_t v4; // w19
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  int32_t v27; // w23
  __int64 v28; // x10

  v4 = shopId;
  if ( (byte_42EA6A2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      shopId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ShopReleaseEntity_TypeInfo, v21, v22, v23);
    byte_42EA6A2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&shopId = list;
        v28 = *(&ShopReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (ShopReleaseEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == ShopReleaseEntity_TypeInfo
          && LODWORD(list->fields.items) == v4 )
        {
          if ( !v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, *(_QWORD *)&shopId);
  }
LABEL_14:
  if ( !v26 )
    goto LABEL_16;
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopReleaseEntity_array *__fastcall ShopReleaseMaster__GetEntitiyList_28644496(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        bool isClosedDisp,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  int32_t v5; // w21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x19
  int32_t v43; // w24
  __int64 v44; // x10
  struct ShopReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v47; // x21
  struct ShopReleaseMaster___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  v4 = isClosedDisp;
  v5 = shopId;
  if ( (byte_42EA6A3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      shopId,
      isClosedDisp,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_ShopReleaseEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_ShopReleaseEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&ShopReleaseEntity_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__, v34, v35, v36);
    sub_B5D5C4(&ShopReleaseMaster___c_TypeInfo, v37, v38, v39);
    byte_42EA6A3 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v43,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&shopId = list;
        v44 = *(&ShopReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v44
          && *(ShopReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v44 - 8) == ShopReleaseEntity_TypeInfo
          && *((_DWORD *)list + 4) == v5
          && (((*((_BYTE *)list + 44) != 0) ^ v4) & 1) == 0 )
        {
          if ( !v42 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v42,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
        }
      }
      if ( ++v43 >= Count )
        goto LABEL_15;
    }
LABEL_25:
    sub_B5D69C(list, *(_QWORD *)&shopId);
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
    v47 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ShopReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v47,
      Method_ShopReleaseMaster___c__GetEntitiyList_b__4_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ShopReleaseEntity___ctor__);
    v48 = ShopReleaseMaster___c_TypeInfo->static_fields;
    v48->__9__4_0 = (struct System_Comparison_ShopReleaseEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v48->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !v42 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ShopReleaseEntity__Sort__);
  return (ShopReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v42,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopReleaseEntity__ToArray__);
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

  if ( (byte_42EA69F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__,
      shopId,
      condType,
      *(_QWORD *)&priority);
    byte_42EA69F = 1;
  }
  PK = ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&priority);
  return (ShopReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_23FB260 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__GetEntity__);
}


System_Collections_Generic_List_ShopReleaseEntity__o *__fastcall ShopReleaseMaster__GetNotClearShopReleaseEntity(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ShopReleaseEntity_array *EntitiyList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  _BOOL8 IsCondEnable; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x22
  il2cpp_array_size_t v17; // w23
  Il2CppClass **v18; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  __int64 v20; // x0

  if ( (byte_42EA6A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopReleaseEntity__Add__, shopId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_ShopReleaseEntity__TypeInfo, v9, v10, v11);
    byte_42EA6A4 = 1;
  }
  EntitiyList = ShopReleaseMaster__GetEntitiyList(this, shopId, method);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopReleaseEntity___ctor__);
  if ( !EntitiyList )
    goto LABEL_14;
  v16 = *(_QWORD *)&EntitiyList->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = &EntitiyList->obj.klass + (int)v17;
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)v18[4];
      if ( !v19 )
        break;
      IsCondEnable = ShopReleaseEntity__IsCondEnable((ShopReleaseEntity_o *)v18[4], v15);
      if ( !IsCondEnable )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          v19,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopReleaseEntity__Add__);
      }
      if ( (int)++v17 >= (int)v16 )
        return (System_Collections_Generic_List_ShopReleaseEntity__o *)v13;
      if ( v17 >= EntitiyList->max_length )
      {
        v20 = sub_B5D6C8(IsCondEnable);
        sub_B5D668(v20, 0LL);
      }
    }
LABEL_14:
    sub_B5D69C(IsCondEnable, v15);
  }
  return (System_Collections_Generic_List_ShopReleaseEntity__o *)v13;
}


int32_t __fastcall ShopReleaseMaster__GetPurchaseShop(
        ShopReleaseMaster_o *this,
        int32_t shopId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_28644496; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  __int64 v7; // x9
  ShopReleaseEntity_o **m_Items; // x10

  EntitiyList_28644496 = ShopReleaseMaster__GetEntitiyList_28644496(this, shopId, 0, v3);
  if ( !EntitiyList_28644496 )
LABEL_9:
    sub_B5D69C(EntitiyList_28644496, v5);
  max_length = EntitiyList_28644496->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0LL;
  m_Items = EntitiyList_28644496->m_Items;
  while ( 1 )
  {
    EntitiyList_28644496 = (ShopReleaseEntity_array *)m_Items[v7];
    if ( !EntitiyList_28644496 )
      goto LABEL_9;
    if ( (HIDWORD(EntitiyList_28644496->bounds) & 0xFFFFFFFE) == 14 )
      return ShopReleaseEntity__get_condValue((ShopReleaseEntity_o *)EntitiyList_28644496, v5);
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
    sub_B5D69C(EntitiyList, v4);
  if ( !condValues->max_length )
  {
    v10 = sub_B5D6C8(EntitiyList);
    sub_B5D668(v10, 0LL);
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
    sub_B5D69C(EntitiyList, v4);
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
      v9 = sub_B5D6C8(IsCondEnable);
      sub_B5D668(v9, 0LL);
    }
  }
}


bool __fastcall ShopReleaseMaster__IsOpen(ShopReleaseMaster_o *this, int32_t shopId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopReleaseEntity_array *EntitiyList_28644496; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x20
  ShopReleaseEntity_array *v7; // x19
  il2cpp_array_size_t v8; // w21
  __int64 v9; // x0

  EntitiyList_28644496 = ShopReleaseMaster__GetEntitiyList_28644496(this, shopId, 0, v3);
  if ( !EntitiyList_28644496 )
LABEL_12:
    sub_B5D69C(EntitiyList_28644496, v5);
  v6 = *(_QWORD *)&EntitiyList_28644496->max_length;
  v7 = EntitiyList_28644496;
  if ( (int)v6 < 1 )
    return 1;
  v8 = 0;
  while ( 1 )
  {
    EntitiyList_28644496 = (ShopReleaseEntity_array *)v7->m_Items[v8];
    if ( !EntitiyList_28644496 )
      goto LABEL_12;
    if ( !BYTE4(EntitiyList_28644496->m_Items[1]) )
    {
      EntitiyList_28644496 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(
                                                          (ShopReleaseEntity_o *)EntitiyList_28644496,
                                                          v5);
      if ( ((unsigned __int8)EntitiyList_28644496 & 1) == 0 )
        return 0;
    }
    if ( (int)++v8 >= (int)v6 )
      return 1;
    if ( v8 >= v7->max_length )
    {
      v9 = sub_B5D6C8(EntitiyList_28644496);
      sub_B5D668(v9, 0LL);
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
  ShopReleaseEntity_array *EntitiyList_28644496; // x0
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

  EntitiyList_28644496 = ShopReleaseMaster__GetEntitiyList_28644496(this, shopId, 1, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_28644496 )
LABEL_14:
    sub_B5D69C(EntitiyList_28644496, v8);
  v15 = *(_QWORD *)&EntitiyList_28644496->max_length;
  v16 = EntitiyList_28644496;
  if ( (int)v15 < 1 )
  {
LABEL_12:
    *message = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)message, 0LL, v9, v10, v11, v12, v13, v14);
    *itemName = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)itemName, 0LL, v20, v21, v22, v23, v24, v25);
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
    EntitiyList_28644496 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v16->m_Items[v17], v8);
    if ( (((v18->fields.condType == 82) ^ (unsigned int)EntitiyList_28644496) & 1) == 0 )
      goto LABEL_13;
LABEL_9:
    if ( (int)v17 + 1 >= (int)v15 )
      goto LABEL_12;
    if ( (unsigned int)++v17 >= v16->max_length )
    {
      v19 = sub_B5D6C8(EntitiyList_28644496);
      sub_B5D668(v19, 0LL);
    }
  }
  if ( v18->fields.condType != 82 )
    goto LABEL_9;
LABEL_13:
  PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v18, v8);
  *message = PreparationConditionText;
  sub_B5D560(
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
  sub_B5D560(
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
  ShopReleaseEntity_array *EntitiyList_28644496; // x0
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

  EntitiyList_28644496 = ShopReleaseMaster__GetEntitiyList_28644496(this, shopId, 0, *(const MethodInfo **)&shopId);
  if ( !EntitiyList_28644496 )
LABEL_12:
    sub_B5D69C(EntitiyList_28644496, v8);
  v15 = *(_QWORD *)&EntitiyList_28644496->max_length;
  v16 = EntitiyList_28644496;
  if ( (int)v15 < 1 )
  {
LABEL_10:
    *message = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)message, 0LL, v9, v10, v11, v12, v13, v14);
    *itemName = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)itemName, 0LL, v20, v21, v22, v23, v24, v25);
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
      EntitiyList_28644496 = (ShopReleaseEntity_array *)ShopReleaseEntity__IsCondEnable(v18, v8);
      if ( ((unsigned __int8)EntitiyList_28644496 & 1) != 0 )
        break;
      if ( (int)++v17 >= (int)v15 )
        goto LABEL_10;
      if ( v17 >= v16->max_length )
      {
        v19 = sub_B5D6C8(EntitiyList_28644496);
        sub_B5D668(v19, 0LL);
      }
    }
    PreparationConditionText = ShopReleaseEntity__GetPreparationConditionText(v18, v8);
    *message = PreparationConditionText;
    sub_B5D560(
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
    sub_B5D560(
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

  if ( (byte_42EA6A0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      shopId,
      *(_QWORD *)&condType);
    byte_42EA6A0 = 1;
  }
  PK = ShopReleaseEntity__CreatePK(shopId, condType, priority, *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ShopReleaseMaster__ShopReleaseEntity__string__TryGetEntity__);
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
    sub_B5D69C(EntitiyList, v6);
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
    sub_B5D69C(EntitiyList, v6);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ShopReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DCB & 1) == 0 )
  {
    sub_B5D5C4(&ShopReleaseMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5DCB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ShopReleaseMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ShopReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopReleaseMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}