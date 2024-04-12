void __fastcall ShopMaster___ctor(ShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1A6F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
    byte_42B1A6F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    42,
    (const MethodInfo_23E223C *)Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__CheckBuyAfterCloseShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_List_int__o *v6; // x0

  if ( (byte_42B1A78 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1A78 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        v6 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v6,
          (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                             (DataManager_o *)list,
                                                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)list,
                                                                                             eventId,
                                                                                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(list, *(_QWORD *)&eventId);
  }
  return EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)list, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__CheckExistsPayType(
        ShopMaster_o *this,
        int32_t eventId,
        int32_t payType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10

  if ( (byte_42B1A83 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&ShopEntity_TypeInfo);
    byte_42B1A83 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_15;
    v11 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (ShopEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] != ShopEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( LODWORD(list->fields._syncRoot) == eventId && HIDWORD(list[2].klass) == payType )
      return 1;
    if ( ++v10 >= v9 )
      return 0;
  }
}


bool __fastcall ShopMaster__CloseLimitEventShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int32_t EventShopBaseShopId; // w0
  const MethodInfo *v5; // x2

  EventShopBaseShopId = ShopMaster__GetEventShopBaseShopId(this, eventId, method);
  if ( EventShopBaseShopId )
    LOBYTE(EventShopBaseShopId) = ShopMaster__IsPurchaseCloseEventShopItem(this, EventShopBaseShopId, v5);
  return EventShopBaseShopId;
}


ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t shopType,
        const MethodInfo *method)
{
  __int64 Time; // x0
  __int64 v8; // x1
  int64_t v9; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x3
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  ShopEntity_o *v23; // x0
  ShopEntity_o *v24; // x24
  __int64 v25; // x9
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v34; // x21
  struct ShopMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42B1A70 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Comparison_ShopEntity___ctor__);
    sub_B52984(&System_Comparison_ShopEntity__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    sub_B52984(&Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__);
    sub_B52984(&ShopMaster___c_TypeInfo);
    byte_42B1A70 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v9 = Time;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
    (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (__int64)this->fields.list;
  if ( !Time )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_20:
      v22 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v18);
    }
    v23 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                            Enumerator,
                            *(_QWORD *)(v22 + 8));
    v24 = v23;
    if ( v23 )
    {
      v25 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v25
        || (ShopEntity_c *)v23->klass->_2.typeHierarchy[v25 - 1] != ShopEntity_TypeInfo )
      {
        Time = sub_B52D50(v23);
        goto LABEL_50;
      }
      if ( !v23->fields.eventId
        && (purchaseType < 1 || v23->fields.purchaseType == purchaseType)
        && v23->fields.shopType == shopType
        && ShopEntity__IsEnable(v23, v9, 0LL) )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v24, 0LL);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v10 )
            sub_B52A5C(IsHiddenInCaseOfBuying, v27);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
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
        goto LABEL_37;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_37:
    v31 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v18);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  Time = (__int64)ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    Time = (__int64)ShopMaster___c_TypeInfo;
  }
  static_fields = *(struct ShopMaster___c_StaticFields **)(Time + 184);
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (*(_BYTE *)(Time + 307) & 4) != 0 && !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v34,
      Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ShopEntity___ctor__);
    v35 = ShopMaster___c_TypeInfo->static_fields;
    v35->__9__1_0 = (struct System_Comparison_ShopEntity__o *)_9__1_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v35->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !v10 )
LABEL_50:
    sub_B52A5C(Time, v8);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v10,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_28151424(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t shopType,
        int32_t flag,
        const MethodInfo *method)
{
  __int64 Time; // x0
  __int64 v10; // x1
  int64_t v11; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  ShopEntity_o *v25; // x0
  ShopEntity_o *v26; // x26
  __int64 v27; // x9
  const MethodInfo *v28; // x2
  _BOOL8 IsOpenPurchaseCloseShop; // x0
  __int64 v30; // x1
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v37; // x21
  struct ShopMaster___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  ShopMaster_o *v46; // [xsp+0h] [xbp-60h]

  if ( (byte_42B1A71 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Comparison_ShopEntity___ctor__);
    sub_B52984(&System_Comparison_ShopEntity__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    sub_B52984(&Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__);
    sub_B52984(&ShopMaster___c_TypeInfo);
    byte_42B1A71 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_51;
  v11 = Time;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
    (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (__int64)this->fields.list;
  if ( !Time )
    goto LABEL_51;
  v46 = this;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v13);
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
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
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
          goto LABEL_20;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_20:
      v24 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v25 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            Enumerator,
                            *(_QWORD *)(v24 + 8));
    v26 = v25;
    if ( v25 )
    {
      v27 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v27
        || (ShopEntity_c *)v25->klass->_2.typeHierarchy[v27 - 1] != ShopEntity_TypeInfo )
      {
        Time = sub_B52D50(v25);
        goto LABEL_51;
      }
      if ( ShopEntity__checkFlag(v25, flag, 0LL)
        && (purchaseType < 1 || v26->fields.purchaseType == purchaseType)
        && v26->fields.shopType == shopType
        && ShopEntity__IsEnable(v26, v11, 0LL)
        && !ShopEntity__IsHiddenInCaseOfBuying(v26, 0LL) )
      {
        IsOpenPurchaseCloseShop = ShopMaster__IsOpenPurchaseCloseShop(v46, v26, v28);
        if ( !IsOpenPurchaseCloseShop )
        {
          if ( !v12 )
            sub_B52A5C(IsOpenPurchaseCloseShop, v30);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_38:
    v34 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  Time = (__int64)ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    Time = (__int64)ShopMaster___c_TypeInfo;
  }
  static_fields = *(struct ShopMaster___c_StaticFields **)(Time + 184);
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (*(_BYTE *)(Time + 307) & 4) != 0 && !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v37,
      Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ShopEntity___ctor__);
    v38 = ShopMaster___c_TypeInfo->static_fields;
    v38->__9__2_0 = (struct System_Comparison_ShopEntity__o *)_9__2_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v38->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  if ( !v12 )
LABEL_51:
    sub_B52A5C(Time, v10);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v12,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_28152976(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t payType,
        const MethodInfo *method)
{
  __int64 Time; // x0
  __int64 v8; // x1
  int64_t v9; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x3
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  ShopEntity_o *v23; // x0
  ShopEntity_o *v24; // x24
  __int64 v25; // x9
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v34; // x21
  struct ShopMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42B1A72 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Comparison_ShopEntity___ctor__);
    sub_B52984(&System_Comparison_ShopEntity__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    sub_B52984(&Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__);
    sub_B52984(&ShopMaster___c_TypeInfo);
    byte_42B1A72 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v9 = Time;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
    (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (__int64)this->fields.list;
  if ( !Time )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_20:
      v22 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v18);
    }
    v23 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                            Enumerator,
                            *(_QWORD *)(v22 + 8));
    v24 = v23;
    if ( v23 )
    {
      v25 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v25
        || (ShopEntity_c *)v23->klass->_2.typeHierarchy[v25 - 1] != ShopEntity_TypeInfo )
      {
        Time = sub_B52D50(v23);
        goto LABEL_50;
      }
      if ( !v23->fields.eventId
        && (purchaseType < 1 || v23->fields.purchaseType == purchaseType)
        && v23->fields.payType == payType
        && ShopEntity__IsEnable(v23, v9, 0LL) )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v24, 0LL);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v10 )
            sub_B52A5C(IsHiddenInCaseOfBuying, v27);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
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
        goto LABEL_37;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_37:
    v31 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v18);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  Time = (__int64)ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    Time = (__int64)ShopMaster___c_TypeInfo;
  }
  static_fields = *(struct ShopMaster___c_StaticFields **)(Time + 184);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*(_BYTE *)(Time + 307) & 4) != 0 && !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v34,
      Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ShopEntity___ctor__);
    v35 = ShopMaster___c_TypeInfo->static_fields;
    v35->__9__3_0 = (struct System_Comparison_ShopEntity__o *)_9__3_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v35->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !v10 )
LABEL_50:
    sub_B52A5C(Time, v8);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v10,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


ShopEntity_array *__fastcall ShopMaster__GetEnableEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  __int64 v7; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  ShopEntity_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x25
  __int64 v14; // x10
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x19
  Il2CppObject *v17; // x20
  struct ShopMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42B1A75 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ShopEntity___ctor__);
    sub_B52984(&System_Comparison_ShopEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    sub_B52984(&Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__);
    sub_B52984(&ShopMaster___c_TypeInfo);
    byte_42B1A75 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                               v11,
                               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v14 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == ShopEntity_TypeInfo
          && Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsEnable(Item, Time, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v6 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v6,
              v13,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
          }
        }
      }
      if ( ++v11 >= v10 )
        goto LABEL_18;
    }
LABEL_28:
    sub_B52A5C(list, v7);
  }
LABEL_18:
  list = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  static_fields = (struct ShopMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v17,
      Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ShopEntity___ctor__);
    v18 = ShopMaster___c_TypeInfo->static_fields;
    v18->__9__6_0 = (struct System_Comparison_ShopEntity__o *)_9__6_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v18->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v6 )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v6,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


ShopEntity_array *__fastcall ShopMaster__GetEnableEventEntityList(
        ShopMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  int64_t Time; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x22
  __int64 v9; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v12; // w24
  int32_t v13; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  ShopEntity_o *v15; // x26
  __int64 v16; // x10
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v19; // x20
  struct ShopMaster___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42B1A76 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ShopEntity___ctor__);
    sub_B52984(&System_Comparison_ShopEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    sub_B52984(&Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__);
    sub_B52984(&ShopMaster___c_TypeInfo);
    byte_42B1A76 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v13,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v15 = (ShopEntity_o *)Item;
        v16 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId
          && LODWORD(Item[2].monitor) == slot
          && ShopEntity__IsEnable((ShopEntity_o *)Item, Time, 0LL) )
        {
          list = (void *)ShopEntity__IsHiddenInCaseOfBuyingShopId(v15, 0LL);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v8 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v8,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
          }
        }
      }
      if ( ++v13 >= v12 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B52A5C(list, v9);
  }
LABEL_20:
  list = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  static_fields = (struct ShopMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v19,
      Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ShopEntity___ctor__);
    v20 = ShopMaster___c_TypeInfo->static_fields;
    v20->__9__7_0 = (struct System_Comparison_ShopEntity__o *)_9__7_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v20->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v8 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v8,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


bool __fastcall ShopMaster__GetEnableEventPeriod(
        ShopMaster_o *this,
        int64_t *openedAt,
        int64_t *closedAt,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Time; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x23
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v16; // x10
  int64_t klass; // x8
  int64_t monitor; // x8

  if ( (byte_42B1A79 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    byte_42B1A79 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
  *openedAt = -1LL;
  *closedAt = -1LL;
  if ( !this->fields.list )
    goto LABEL_26;
  v11 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               Time,
               v14,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId )
        {
          klass = (int64_t)Item[8].klass;
          if ( klass <= (__int64)v11 )
          {
            if ( (*openedAt & 0x8000000000000000LL) != 0 || *openedAt > klass )
              *openedAt = klass;
            if ( *closedAt )
            {
              monitor = (int64_t)Item[8].monitor;
              if ( !monitor || *closedAt < monitor )
                *closedAt = monitor;
            }
          }
        }
      }
      if ( ++v14 >= v13 )
        return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
    }
LABEL_26:
    sub_B52A5C(Time, v10);
  }
  return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
}


int32_t __fastcall ShopMaster__GetEnableMainEventId(ShopMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x22
  void *Instance; // x0
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_int__o *v7; // x21
  System_Collections_Generic_List_int__o *v8; // x20
  int32_t Count; // w0
  const MethodInfo *v10; // x2
  int32_t v11; // w24
  int32_t i; // w25
  __int64 v13; // x8
  int32_t baseShopId; // w1
  System_Collections_Generic_List_int__o *v15; // x0
  ShopEntity_o *Item; // x0
  ShopEntity_o *v17; // x26
  __int64 v18; // x10
  int size; // w8
  unsigned __int64 v20; // x23
  signed __int64 v21; // x24
  int32_t v22; // w22
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B1A77 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1A77 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
  v7 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_48;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    for ( i = 0; i < v11; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_48;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                               i,
                               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = Item;
        v18 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == ShopEntity_TypeInfo )
        {
          if ( Item->fields.eventId )
          {
            Instance = (void *)ShopEntity__IsEnable(Item, Time, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_48;
              Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           v17->fields.eventId,
                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_48;
              v13 = *((_QWORD *)Instance + 13);
              if ( v13 >= 1 && v13 >= Time && *((_QWORD *)Instance + 11) <= Time )
              {
                if ( !v7 )
                  goto LABEL_48;
                if ( !System_Collections_Generic_List_int___Contains(
                        v7,
                        v17->fields.baseShopId,
                        (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
                {
                  Instance = (void *)ShopMaster__CheckBuyAfterCloseShop(this, v17->fields.eventId, v10);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    baseShopId = v17->fields.baseShopId;
                    v15 = v7;
                  }
                  else
                  {
                    if ( !v8 )
                      goto LABEL_48;
                    if ( System_Collections_Generic_List_int___Contains(
                           v8,
                           v17->fields.eventId,
                           (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
                    {
                      continue;
                    }
                    baseShopId = v17->fields.eventId;
                    v15 = v8;
                  }
                  System_Collections_Generic_List_int___Add(
                    v15,
                    baseShopId,
                    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v7 )
  {
    size = v7->fields._size;
    if ( size >= 1 )
    {
      v20 = 0LL;
      v21 = size;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v22 = v7->fields._items->m_Items[v20 + 1];
        if ( !ShopMaster__IsPurchaseCloseEventShopItem(this, v22, v10) )
        {
          Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                               &entity,
                               v22,
                               (const MethodInfo_23E2334 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            break;
        }
        if ( (__int64)++v20 >= v21 )
          goto LABEL_39;
        size = v7->fields._size;
      }
      if ( entity )
        return (int32_t)entity->fields.age;
LABEL_48:
      sub_B52A5C(Instance, v5);
    }
  }
LABEL_39:
  if ( !v8 || v8->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_int___Sort(
    v8,
    (const MethodInfo_3058ED0 *)Method_System_Collections_Generic_List_int__Sort__);
  if ( !v8->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  return v8->fields._items->m_Items[1];
}


ShopEntity_o *__fastcall ShopMaster__GetEntityOfFragmentsShop(ShopMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  ShopEntity_o *v15; // x0
  __int64 v16; // x1
  ShopEntity_o *v17; // x20
  __int64 v18; // x9
  int v19; // w8
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  int v25; // [xsp+0h] [xbp-40h]

  if ( (byte_42B1A82 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    byte_42B1A82 = 1;
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
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
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
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_16:
      v14 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v5);
    }
    v15 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                            Enumerator,
                            *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( !v15 )
      goto LABEL_35;
    v18 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (ShopEntity_c *)v15->klass->_2.typeHierarchy[v18 - 1] != ShopEntity_TypeInfo )
    {
      v15 = (ShopEntity_o *)sub_B52D50(v15);
LABEL_35:
      sub_B52A5C(v15, v16);
    }
    if ( v15->fields.shopType == 6 && v15->fields.payType == 8 )
    {
      v19 = 70;
      goto LABEL_25;
    }
  }
  v17 = 0LL;
  v19 = 68;
LABEL_25:
  v25 = v19;
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
        goto LABEL_29;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_29:
    v23 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v5);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  if ( v25 == 68 )
    return 0LL;
  return v17;
}


ShopEntity_array *__fastcall ShopMaster__GetEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  void *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v14; // x21
  struct ShopMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42B1A73 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ShopEntity___ctor__);
    sub_B52984(&System_Comparison_ShopEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    sub_B52984(&Method_ShopMaster___c__GetEventEntitiyList_b__4_0__);
    sub_B52984(&ShopMaster___c_TypeInfo);
    byte_42B1A73 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v11 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == ShopEntity_TypeInfo
          && *((_DWORD *)list + 6) == eventId )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B52A5C(list, v6);
  }
LABEL_14:
  list = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  static_fields = (struct ShopMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v14,
      Method_ShopMaster___c__GetEventEntitiyList_b__4_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ShopEntity___ctor__);
    v15 = ShopMaster___c_TypeInfo->static_fields;
    v15->__9__4_0 = (struct System_Comparison_ShopEntity__o *)_9__4_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v15->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ShopMaster__GetEventItemList(
        ShopMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  void *list; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  __int64 IsHideItem; // x0
  __int64 v21; // x1
  __int64 v22; // x23
  ShopEntity_c *v23; // x1
  __int64 v24; // x9
  __int64 v25; // x8
  __int64 v26; // x9
  unsigned __int64 v27; // x25
  signed __int64 v28; // x26
  int32_t v29; // w2
  int size; // w8
  unsigned int v31; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x8
  __int64 v33; // x9
  __int64 v34; // x8
  WarEntity_o *Entity; // x0
  System_Int32_array *v36; // x20
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v43; // x21
  struct ShopMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int v51; // w21
  __int64 v52; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v53; // x8
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x0

  if ( (byte_42B1A7A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Comparison_ItemEntity___ctor__);
    sub_B52984(&System_Comparison_ItemEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_ShopMaster___c__GetEventItemList_b__11_0__);
    sub_B52984(&ShopMaster___c_TypeInfo);
    byte_42B1A7A = 1;
  }
  if ( eventId < 1 )
    return 0LL;
  list = this->fields.list;
  if ( !list )
    goto LABEL_83;
  if ( !System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
          (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    return 0LL;
  list = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_83;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)list,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_20:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    IsHideItem = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                   Enumerator,
                   *(_QWORD *)(v19 + 8));
    v22 = IsHideItem;
    if ( !IsHideItem )
      sub_B52A5C(0LL, v21);
    v23 = ShopEntity_TypeInfo;
    v24 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)IsHideItem + 300LL) < (unsigned int)v24
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)IsHideItem + 200LL) + 8 * v24 - 8) != ShopEntity_TypeInfo )
    {
      IsHideItem = sub_B52D50(IsHideItem);
LABEL_80:
      sub_B52A5C(IsHideItem, v23);
    }
    if ( *(_DWORD *)(IsHideItem + 24) == eventId )
    {
      v25 = *(_QWORD *)(IsHideItem + 32);
      if ( !v25 )
        sub_B52A5C(IsHideItem, ShopEntity_TypeInfo);
      v26 = *(_QWORD *)(v25 + 24);
      if ( (int)v26 >= 1 )
      {
        v27 = 0LL;
        v28 = (int)v26;
        while ( 1 )
        {
          if ( v27 >= *(unsigned int *)(v25 + 24) )
          {
            v56 = sub_B52A88(IsHideItem);
            sub_B52A28(v56, 0LL);
          }
          v29 = *(_DWORD *)(v25 + 4 * v27 + 32);
          if ( v29 >= 1 )
          {
            IsHideItem = ShopMaster__IsHideItem((ShopMaster_o *)IsHideItem, eventId, v29, v9);
            if ( (IsHideItem & 1) == 0 )
            {
              if ( !v7 )
                sub_B52A5C(IsHideItem, v23);
              size = v7->fields._size;
              if ( size < 1 )
              {
LABEL_42:
                v34 = *(_QWORD *)(v22 + 32);
                if ( !v34 )
                  goto LABEL_80;
                if ( v27 >= *(unsigned int *)(v34 + 24) )
                {
                  v57 = sub_B52A88(IsHideItem);
                  sub_B52A28(v57, 0LL);
                }
                if ( !MasterData_WarQuestSelectionMaster )
                  sub_B52A5C(IsHideItem, v23);
                Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           *(_DWORD *)(v34 + 4 * v27 + 32),
                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v7,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
              }
              else
              {
                v31 = 0;
                while ( 1 )
                {
                  if ( size <= v31 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                  v32 = v7->fields._items->m_Items[v31];
                  if ( !v32 )
                    sub_B52A5C(IsHideItem, v23);
                  v33 = *(_QWORD *)(v22 + 32);
                  if ( !v33 )
                    sub_B52A5C(IsHideItem, v23);
                  if ( v27 >= *(unsigned int *)(v33 + 24) )
                  {
                    v55 = sub_B52A88(IsHideItem);
                    sub_B52A28(v55, 0LL);
                  }
                  if ( v32->fields.missionTargetId == *(_DWORD *)(v33 + 4 * v27 + 32) )
                    break;
                  size = v7->fields._size;
                  if ( (int)++v31 >= size )
                    goto LABEL_42;
                }
              }
            }
          }
          if ( (__int64)++v27 >= v28 )
            break;
          v25 = *(_QWORD *)(v22 + 32);
          if ( !v25 )
            sub_B52A5C(IsHideItem, v23);
        }
      }
    }
  }
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_54;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_54:
    v40 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  list = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  static_fields = (struct ShopMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v43,
      Method_ShopMaster___c__GetEventItemList_b__11_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ItemEntity___ctor__);
    v44 = ShopMaster___c_TypeInfo->static_fields;
    v44->__9__11_0 = (struct System_Comparison_ItemEntity__o *)_9__11_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v44->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  if ( !v7 )
LABEL_83:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v51 = v7->fields._size;
  list = (void *)sub_B5299C(int___TypeInfo, (unsigned int)v51);
  v36 = (System_Int32_array *)list;
  if ( v51 >= 1 )
  {
    v52 = 0LL;
    while ( 1 )
    {
      if ( v7->fields._size <= (unsigned int)v52 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v53 = v7->fields._items->m_Items[v52];
      if ( !v53 || !list )
        break;
      if ( (unsigned int)v52 >= *((_DWORD *)list + 6) )
      {
        v58 = sub_B52A88(list);
        sub_B52A28(v58, 0LL);
      }
      *((_DWORD *)list + v52++ + 8) = v53->fields.missionTargetId;
      if ( (int)v52 >= v51 )
        return v36;
    }
    goto LABEL_83;
  }
  return v36;
}


int32_t __fastcall ShopMaster__GetEventShopBaseShopId(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  __int64 v10; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B1A7F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1A7F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_15;
    if ( !EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)entity, 0LL) )
      goto LABEL_13;
  }
  Instance = (DataManager_o *)ShopMaster__GetEnableEventEntitiyList(this, eventId, v7);
  if ( !Instance )
    return (int)Instance;
  datalist = Instance->fields.datalist;
  if ( !datalist )
  {
LABEL_13:
    LODWORD(Instance) = 0;
    return (int)Instance;
  }
  if ( !(_DWORD)datalist )
  {
    v10 = sub_B52A88(Instance);
    sub_B52A28(v10, 0LL);
  }
  lookup = Instance->fields.lookup;
  if ( !lookup )
LABEL_15:
    sub_B52A5C(Instance, v6);
  LODWORD(Instance) = HIDWORD(lookup->fields.buckets);
  return (int)Instance;
}


int32_t __fastcall ShopMaster__GetFragmentCountToExchangeForStone(ShopMaster_o *this, const MethodInfo *method)
{
  ShopEntity_o *EntityOfFragmentsShop; // x0
  __int64 v3; // x1
  struct System_Int32_array *prices; // x8
  __int64 v5; // x9
  __int64 v6; // x0

  EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop(this, method);
  if ( EntityOfFragmentsShop )
  {
    prices = EntityOfFragmentsShop->fields.prices;
    if ( !prices )
      sub_B52A5C(EntityOfFragmentsShop, v3);
    v5 = *(_QWORD *)&prices->max_length;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
      {
        v6 = sub_B52A88(EntityOfFragmentsShop);
        sub_B52A28(v6, 0LL);
      }
      LODWORD(EntityOfFragmentsShop) = prices->m_Items[1];
    }
    else
    {
      LODWORD(EntityOfFragmentsShop) = 0;
    }
  }
  return (int)EntityOfFragmentsShop;
}


ShopEntity_array *__fastcall ShopMaster__GetOpenedEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  __int64 v7; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  ShopEntity_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x25
  __int64 v14; // x10
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x19
  Il2CppObject *v17; // x20
  struct ShopMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42B1A74 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ShopEntity___ctor__);
    sub_B52984(&System_Comparison_ShopEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    sub_B52984(&Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__);
    sub_B52984(&ShopMaster___c_TypeInfo);
    byte_42B1A74 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                               v11,
                               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v14 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == ShopEntity_TypeInfo
          && Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsOpened(Item, Time, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v6 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v6,
              v13,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
          }
        }
      }
      if ( ++v11 >= v10 )
        goto LABEL_18;
    }
LABEL_28:
    sub_B52A5C(list, v7);
  }
LABEL_18:
  list = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    list = ShopMaster___c_TypeInfo;
  }
  static_fields = (struct ShopMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v17,
      Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ShopEntity___ctor__);
    v18 = ShopMaster___c_TypeInfo->static_fields;
    v18->__9__5_0 = (struct System_Comparison_ShopEntity__o *)_9__5_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v18->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v6 )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v6,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsEnableEventShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 v9; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x8

  if ( (byte_42B1A81 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&ShopEntity_TypeInfo);
    byte_42B1A81 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B52A5C(list, *(_QWORD *)&eventId);
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
    v9 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (ShopEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != ShopEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    v10 = (ShopEntity_c *)list->klass->_2.typeHierarchy[*(&ShopEntity_TypeInfo->_2.bitflags2 + 1) - 1] == ShopEntity_TypeInfo
        ? list
        : 0LL;
    if ( LODWORD(v10->fields._syncRoot) == eventId )
      return 1;
    if ( ++v8 >= v7 )
      return 0;
  }
}


bool __fastcall ShopMaster__IsEnableEventShop_28138988(ShopMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  ShopReleaseMaster_o *Master_WarQuestSelectionMaster; // x21
  WarQuestSelectionMaster_o *v5; // x0
  __int64 v6; // x1
  UserShopMaster_o *v7; // x22
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int i; // w24
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  ShopEntity_o *v16; // x0
  ShopEntity_o *v17; // x23
  __int64 v18; // x9
  __int64 UserId; // x0
  __int64 v20; // x1
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v28; // w8
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  int v34; // [xsp+0h] [xbp-60h]

  if ( (byte_42B1A84 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMaster_ShopReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    byte_42B1A84 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  v5 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !this->fields.list )
    sub_B52A5C(v5, v6);
  v7 = (UserShopMaster_o *)v5;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  for ( i = 0; ; i |= ShopReleaseMaster__CondClearCheck(Master_WarQuestSelectionMaster, v17->fields.id, 1, v23) )
  {
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v25 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v25;
          p_offset += 4;
          if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_35;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_35:
        p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        v28 = 160;
        goto LABEL_39;
      }
      v12 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v13 = 0LL;
        v14 = &v12->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v13;
          v14 += 4;
          if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v15 = (__int64)&v12->vtable[*v14].method;
      }
      else
      {
LABEL_16:
        v15 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
      }
      v16 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                              Enumerator,
                              *(_QWORD *)(v15 + 8));
      v17 = v16;
      if ( v16 )
      {
        v18 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v18
          || (ShopEntity_c *)v16->klass->_2.typeHierarchy[v18 - 1] != ShopEntity_TypeInfo )
        {
          UserId = sub_B52D50(v16);
LABEL_50:
          sub_B52A5C(UserId, v20);
        }
        if ( v16->fields.shopType == 12 && ShopEntity__IsEnable(v16, Time, 0LL) )
          break;
      }
    }
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v20 = UserId;
    if ( !v7 )
      goto LABEL_50;
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(v7, UserId, v17->fields.id, 0LL);
    if ( EntityDefinitely )
    {
      if ( EntityDefinitely->fields.num >= v17->fields.limitNum )
        break;
    }
    if ( !Master_WarQuestSelectionMaster )
      sub_B52A5C(EntityDefinitely, v22);
  }
  v28 = 162;
LABEL_39:
  v34 = v28;
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_43:
    v32 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( v34 != 160 )
    LOBYTE(i) = 0;
  return i & 1;
}


bool __fastcall ShopMaster__IsEventCloseWithItemPurchase(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *v7; // x21
  int32_t v8; // w22
  int64_t v9; // x23
  __int64 v10; // x10
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x24
  int v12; // w24
  bool v13; // w0
  int32_t v14; // w1
  int32_t v15; // w8
  const MethodInfo_2EFFA9C *v16; // x3
  int32_t v17; // w2
  unsigned int Count; // w0
  System_Int32_array *v19; // x19
  int max_length; // w8
  unsigned int v21; // w9
  __int64 v23; // x0
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42B1A80 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__);
    byte_42B1A80 = 1;
  }
  value = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_26;
  v8 = 0;
  while ( 1 )
  {
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)Instance )
      break;
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_26;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                          v8,
                          (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_26;
    v9 = Instance;
    v10 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v10
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v10 - 8) != ShopEntity_TypeInfo )
    {
      goto LABEL_26;
    }
    if ( *(_DWORD *)(Instance + 24) == eventId )
    {
      value = 0;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_26;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                            MasterData_WarQuestSelectionMaster,
                            Instance,
                            *(_DWORD *)(v9 + 16),
                            0LL);
      if ( !Instance || !v7 )
        goto LABEL_26;
      v12 = *(_DWORD *)(Instance + 28);
      v13 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
              v7,
              *(_DWORD *)(v9 + 20),
              &value,
              (const MethodInfo_2F016AC *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
      v14 = *(_DWORD *)(v9 + 20);
      if ( v13 )
      {
        System_Collections_Generic_Dictionary_int__int___Remove(
          v7,
          v14,
          (const MethodInfo_2F01394 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
        v15 = value;
        if ( (value & 0x80000000) != 0 )
        {
          v15 = -value;
          value = -value;
        }
        v14 = *(_DWORD *)(v9 + 20);
        v16 = (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v17 = v15 + v12;
      }
      else
      {
        v16 = (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v17 = -v12;
      }
      System_Collections_Generic_Dictionary_int__int___Add(v7, v14, v17, v16);
    }
    Instance = (int64_t)this->fields.list;
    ++v8;
    if ( !Instance )
      goto LABEL_26;
  }
  if ( !v7 )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_int__int___get_Count(
          v7,
          (const MethodInfo_2EFF69C *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) )
    return 1;
  Count = System_Collections_Generic_Dictionary_int__int___get_Count(
            v7,
            (const MethodInfo_2EFF69C *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  v19 = (System_Int32_array *)sub_B5299C(int___TypeInfo, Count);
  Instance = (int64_t)System_Collections_Generic_Dictionary_int__int___get_Values(
                        v7,
                        (const MethodInfo_2EFF844 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
  if ( !Instance
    || (System_Collections_Generic_Dictionary_ValueCollection_int__int___CopyTo(
          (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
          v19,
          0,
          (const MethodInfo_240FF50 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__),
        !v19) )
  {
LABEL_26:
    sub_B52A5C(Instance, v6);
  }
  max_length = v19->max_length;
  if ( max_length < 1 )
    return 1;
  v21 = 0;
  while ( 1 )
  {
    if ( v21 >= max_length )
    {
      v23 = sub_B52A88(Instance);
      sub_B52A28(v23, 0LL);
    }
    if ( v19->m_Items[v21 + 1] <= 0 )
      break;
    if ( (int)++v21 >= max_length )
      return 1;
  }
  return 0;
}


bool __fastcall ShopMaster__IsHideItem(ShopMaster_o *this, int32_t eventId, int32_t id, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v7; // x1
  int v8; // w8
  __int64 v9; // x9
  __int64 v10; // x11
  __int64 v12; // x0

  if ( (byte_42B1A7B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventItemDisplayMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1A7B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___)) == 0LL )
  {
LABEL_15:
    sub_B52A5C(Instance, v7);
  }
  Instance = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
               (EventItemDisplayMaster_o *)Instance,
               eventId,
               8,
               0,
               0LL);
  if ( !Instance )
    return 1;
  v8 = *((_DWORD *)Instance + 6);
  if ( v8 < 1 )
    return 1;
  v9 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= v8 )
    {
      v12 = sub_B52A88(Instance);
      sub_B52A28(v12, 0LL);
    }
    v10 = *((_QWORD *)Instance + v9 + 4);
    if ( !v10 )
      goto LABEL_15;
    if ( *(_DWORD *)(v10 + 32) == id && *(_DWORD *)(v10 + 28) == 1 )
      return 0;
    if ( (int)++v9 >= v8 )
      return 1;
  }
}


bool __fastcall ShopMaster__IsOpenPurchaseCloseShop(
        ShopMaster_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopMaster_o *v4; // x20
  int32_t eventId; // w21
  EventDetailEntity_o *Entity; // x0

  v4 = this;
  if ( (byte_42B1A7C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B52984(&DataManager_TypeInfo);
    this = (ShopMaster_o *)sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    byte_42B1A7C = 1;
  }
  if ( !shopEntity )
    goto LABEL_14;
  eventId = shopEntity->fields.eventId;
  if ( eventId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( this )
    {
      Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        eventId,
                                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( Entity && EventDetailEntity__IsClosePurchaseShop(Entity, 0LL) )
        return ShopMaster__IsPurchaseCloseEventShopItem(v4, shopEntity->fields.baseShopId, method);
      return 0;
    }
LABEL_14:
    sub_B52A5C(this, shopEntity);
  }
  if ( shopEntity->fields.shopType != 16 )
    return ShopMaster__IsPurchaseCloseEventShopItem(v4, shopEntity->fields.baseShopId, method);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsPurchaseCloseEventShopItem(
        ShopMaster_o *this,
        int32_t baseShopId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w23
  int64_t v9; // x20
  __int64 v10; // x9
  const MethodInfo *v12; // x2
  ShopReleaseMaster_o *v13; // x21
  int32_t TargetShopGroupId; // w22
  const MethodInfo *v15; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  const MethodInfo *v17; // x3
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  ShopMaster_o *v20; // x0
  int64_t *v21; // x1
  int64_t *v22; // x2
  int32_t v23; // w3
  const MethodInfo *v24; // x4

  v3 = baseShopId;
  if ( (byte_42B1A7E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ShopReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ShopEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1A7E = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                      v8,
                      (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    *(_QWORD *)&baseShopId = ShopEntity_TypeInfo;
    v9 = list;
    v10 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v10
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v10 - 8) != ShopEntity_TypeInfo )
    {
      break;
    }
    if ( *(_DWORD *)(list + 20) == v3 )
    {
      list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        list = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)list,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
        if ( list )
        {
          v13 = (ShopReleaseMaster_o *)list;
          TargetShopGroupId = ShopReleaseMaster__GetTargetShopGroupId((ShopReleaseMaster_o *)list, v3, v12);
          list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( list )
          {
            list = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)list,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
            if ( list )
            {
              TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)list, TargetShopGroupId, v15);
              if ( TargetEntityList && *(_QWORD *)&TargetEntityList->max_length )
                return ShopReleaseMaster__CondClearCheck(v13, v3, 82, v17);
              list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( list )
              {
                MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)list,
                                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserShopMaster___);
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                list = NetworkManager__get_UserId(0LL);
                if ( MasterData_WarQuestSelectionMaster )
                {
                  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                                       MasterData_WarQuestSelectionMaster,
                                       list,
                                       v3,
                                       0LL);
                  return EntityDefinitely && EntityDefinitely->fields.num >= *(_DWORD *)(v9 + 88);
                }
              }
            }
          }
        }
      }
LABEL_28:
      sub_B52A5C(list, *(_QWORD *)&baseShopId);
    }
    if ( ++v8 >= v7 )
      return 1;
  }
  v20 = (ShopMaster_o *)sub_B52D50(list);
  return ShopMaster__GetEnableEventPeriod(v20, v21, v22, v23, v24);
}


bool __fastcall ShopMaster__PurchaseCloseEventShop(
        ShopMaster_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t eventId; // w20
  EventDetailEntity_o *Entity; // x0

  if ( (byte_42B1A7D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B52984(&DataManager_TypeInfo);
    this = (ShopMaster_o *)sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    byte_42B1A7D = 1;
  }
  if ( !shopEntity )
    goto LABEL_12;
  eventId = shopEntity->fields.eventId;
  if ( !eventId )
    return shopEntity->fields.shopType == 12;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !this )
LABEL_12:
    sub_B52A5C(this, shopEntity);
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                    eventId,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
    return EventDetailEntity__IsClosePurchaseShop(Entity, 0LL);
  return shopEntity->fields.shopType == 12;
}


void __fastcall ShopMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ShopMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD3AD & 1) == 0 )
  {
    sub_B52984(&ShopMaster___c_TypeInfo);
    byte_42AD3AD = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ShopMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ShopMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopMaster___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall ShopMaster___c___ctor(ShopMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__1_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__2_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__3_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntitiyList_b__6_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntityList_b__7_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventEntitiyList_b__4_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventItemList_b__11_0(
        ShopMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetOpenedEventEntitiyList_b__5_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}