void __fastcall ShopMaster___ctor(ShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189182 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__, method);
    byte_4189182 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    41,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__CheckBuyAfterCloseShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_List_int__o *v11; // x0

  if ( (byte_418918B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418918B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v11,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                             (DataManager_o *)list,
                                                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)list,
                                                                                             eventId,
                                                                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(list, *(_QWORD *)&eventId);
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
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  __int64 v13; // x10

  if ( (byte_4189196 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&ShopEntity_TypeInfo, v8);
    byte_4189196 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v12,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_15;
    v13 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (ShopEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] != ShopEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( LODWORD(list->fields._syncRoot) == eventId && HIDWORD(list[2].klass) == payType )
      return 1;
    if ( ++v12 >= v11 )
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


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t shopType,
        const MethodInfo *method)
{
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 Time; // x0
  __int64 v23; // x1
  int64_t v24; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  ShopEntity_o *v38; // x0
  ShopEntity_o *v39; // x24
  __int64 v40; // x9
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v42; // x1
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v49; // x21
  struct ShopMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_4189183 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B2C35C(&Method_System_Comparison_ShopEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_ShopEntity__TypeInfo, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&ShopEntity_TypeInfo, v19);
    sub_B2C35C(&Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, v20);
    sub_B2C35C(&ShopMaster___c_TypeInfo, v21);
    byte_4189183 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v24 = Time;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
    (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (__int64)this->fields.list;
  if ( !Time )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v26);
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
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_20:
      v37 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v33);
    }
    v38 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                            Enumerator,
                            *(_QWORD *)(v37 + 8));
    v39 = v38;
    if ( v38 )
    {
      v40 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v40
        || (ShopEntity_c *)v38->klass->_2.typeHierarchy[v40 - 1] != ShopEntity_TypeInfo )
      {
        Time = sub_B2C728(v38);
        goto LABEL_50;
      }
      if ( !v38->fields.eventId
        && (purchaseType < 1 || v38->fields.purchaseType == purchaseType)
        && v38->fields.shopType == shopType
        && ShopEntity__IsEnable(v38, v24, 0LL) )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v39, 0LL);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v25 )
            sub_B2C434(IsHiddenInCaseOfBuying, v42);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v25,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
    }
  }
  v43 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_37:
    v46 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v33);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
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
    v49 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v49,
      Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ShopEntity___ctor__);
    v50 = ShopMaster___c_TypeInfo->static_fields;
    v50->__9__1_0 = (struct System_Comparison_ShopEntity__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v50->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !v25 )
LABEL_50:
    sub_B2C434(Time, v23);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_27659408(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t shopType,
        int32_t flag,
        const MethodInfo *method)
{
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 Time; // x0
  __int64 v25; // x1
  int64_t v26; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  ShopEntity_o *v40; // x0
  ShopEntity_o *v41; // x26
  __int64 v42; // x9
  const MethodInfo *v43; // x2
  _BOOL8 IsOpenPurchaseCloseShop; // x0
  __int64 v45; // x1
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v52; // x21
  struct ShopMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  ShopMaster_o *v61; // [xsp+0h] [xbp-60h]

  if ( (byte_4189184 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B2C35C(&Method_System_Comparison_ShopEntity___ctor__, v10);
    sub_B2C35C(&System_Comparison_ShopEntity__TypeInfo, v11);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v19);
    sub_B2C35C(&NetworkManager_TypeInfo, v20);
    sub_B2C35C(&ShopEntity_TypeInfo, v21);
    sub_B2C35C(&Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, v22);
    sub_B2C35C(&ShopMaster___c_TypeInfo, v23);
    byte_4189184 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_51;
  v26 = Time;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
    (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (__int64)this->fields.list;
  if ( !Time )
    goto LABEL_51;
  v61 = this;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v28);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        p_offset += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v29);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v36 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v38 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v39 = (__int64)&v36->vtable[*v38].method;
    }
    else
    {
LABEL_20:
      v39 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v35);
    }
    v40 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                            Enumerator,
                            *(_QWORD *)(v39 + 8));
    v41 = v40;
    if ( v40 )
    {
      v42 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v40->klass->_2.bitflags2 + 1) < (unsigned int)v42
        || (ShopEntity_c *)v40->klass->_2.typeHierarchy[v42 - 1] != ShopEntity_TypeInfo )
      {
        Time = sub_B2C728(v40);
        goto LABEL_51;
      }
      if ( ShopEntity__checkFlag(v40, flag, 0LL)
        && (purchaseType < 1 || v41->fields.purchaseType == purchaseType)
        && v41->fields.shopType == shopType
        && ShopEntity__IsEnable(v41, v26, 0LL)
        && !ShopEntity__IsHiddenInCaseOfBuying(v41, 0LL) )
      {
        IsOpenPurchaseCloseShop = ShopMaster__IsOpenPurchaseCloseShop(v61, v41, v43);
        if ( !IsOpenPurchaseCloseShop )
        {
          if ( !v27 )
            sub_B2C434(IsOpenPurchaseCloseShop, v45);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v27,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_38:
    v49 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
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
    v52 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v52,
      Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ShopEntity___ctor__);
    v53 = ShopMaster___c_TypeInfo->static_fields;
    v53->__9__2_0 = (struct System_Comparison_ShopEntity__o *)_9__2_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v53->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !v27 )
LABEL_51:
    sub_B2C434(Time, v25);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v27,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_27660960(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t payType,
        const MethodInfo *method)
{
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 Time; // x0
  __int64 v23; // x1
  int64_t v24; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  ShopEntity_o *v38; // x0
  ShopEntity_o *v39; // x24
  __int64 v40; // x9
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v42; // x1
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v49; // x21
  struct ShopMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_4189185 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B2C35C(&Method_System_Comparison_ShopEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_ShopEntity__TypeInfo, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&ShopEntity_TypeInfo, v19);
    sub_B2C35C(&Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, v20);
    sub_B2C35C(&ShopMaster___c_TypeInfo, v21);
    byte_4189185 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v24 = Time;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
    (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (__int64)this->fields.list;
  if ( !Time )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v26);
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
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_20:
      v37 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v33);
    }
    v38 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                            Enumerator,
                            *(_QWORD *)(v37 + 8));
    v39 = v38;
    if ( v38 )
    {
      v40 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v40
        || (ShopEntity_c *)v38->klass->_2.typeHierarchy[v40 - 1] != ShopEntity_TypeInfo )
      {
        Time = sub_B2C728(v38);
        goto LABEL_50;
      }
      if ( !v38->fields.eventId
        && (purchaseType < 1 || v38->fields.purchaseType == purchaseType)
        && v38->fields.payType == payType
        && ShopEntity__IsEnable(v38, v24, 0LL) )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v39, 0LL);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v25 )
            sub_B2C434(IsHiddenInCaseOfBuying, v42);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v25,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
    }
  }
  v43 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_37:
    v46 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v33);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
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
    v49 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v49,
      Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ShopEntity___ctor__);
    v50 = ShopMaster___c_TypeInfo->static_fields;
    v50->__9__3_0 = (struct System_Comparison_ShopEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v50->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !v25 )
LABEL_50:
    sub_B2C434(Time, v23);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
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
  int64_t Time; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  __int64 v19; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v22; // w23
  int32_t v23; // w24
  ShopEntity_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x25
  __int64 v26; // x10
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x19
  Il2CppObject *v29; // x20
  struct ShopMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_4189188 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_ShopEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_ShopEntity__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&ShopEntity_TypeInfo, v14);
    sub_B2C35C(&Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__, v15);
    sub_B2C35C(&ShopMaster___c_TypeInfo, v16);
    byte_4189188 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                               v23,
                               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v26 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == ShopEntity_TypeInfo
          && Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsEnable(Item, Time, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v18 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              v25,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
          }
        }
      }
      if ( ++v23 >= v22 )
        goto LABEL_18;
    }
LABEL_28:
    sub_B2C434(list, v19);
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
    v29 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v29,
      Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ShopEntity___ctor__);
    v30 = ShopMaster___c_TypeInfo->static_fields;
    v30->__9__6_0 = (struct System_Comparison_ShopEntity__o *)_9__6_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v30->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v18 )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEventEntityList(
        ShopMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
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
  __int64 v18; // x1
  int64_t Time; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  __int64 v21; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v24; // w24
  int32_t v25; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  ShopEntity_o *v27; // x26
  __int64 v28; // x10
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v31; // x20
  struct ShopMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_4189189 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_ShopEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_ShopEntity__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&ShopEntity_TypeInfo, v16);
    sub_B2C35C(&Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__, v17);
    sub_B2C35C(&ShopMaster___c_TypeInfo, v18);
    byte_4189189 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v25,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v27 = (ShopEntity_o *)Item;
        v28 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v28 - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId
          && LODWORD(Item[2].monitor) == slot
          && ShopEntity__IsEnable((ShopEntity_o *)Item, Time, 0LL) )
        {
          list = (void *)ShopEntity__IsHiddenInCaseOfBuyingShopId(v27, 0LL);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v20 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
          }
        }
      }
      if ( ++v25 >= v24 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B2C434(list, v21);
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
    v31 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v31,
      Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ShopEntity___ctor__);
    v32 = ShopMaster___c_TypeInfo->static_fields;
    v32->__9__7_0 = (struct System_Comparison_ShopEntity__o *)_9__7_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v32->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !v20 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


bool __fastcall ShopMaster__GetEnableEventPeriod(
        ShopMaster_o *this,
        int64_t *openedAt,
        int64_t *closedAt,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Time; // x0
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x23
  int32_t Count; // w0
  int32_t v16; // w24
  int32_t v17; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v19; // x10
  int64_t klass; // x8
  int64_t monitor; // x8

  if ( (byte_418918C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, openedAt);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&ShopEntity_TypeInfo, v11);
    byte_418918C = 1;
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
  v14 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               Time,
               v17,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v19 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId )
        {
          klass = (int64_t)Item[8].klass;
          if ( klass <= (__int64)v14 )
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
      if ( ++v17 >= v16 )
        return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
    }
LABEL_26:
    sub_B2C434(Time, v13);
  }
  return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
}


int32_t __fastcall ShopMaster__GetEnableMainEventId(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  int64_t Time; // x22
  void *Instance; // x0
  __int64 v19; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_int__o *v21; // x21
  System_Collections_Generic_List_int__o *v22; // x20
  int32_t Count; // w0
  const MethodInfo *v24; // x2
  int32_t v25; // w24
  int32_t i; // w25
  __int64 v27; // x8
  int32_t baseShopId; // w1
  System_Collections_Generic_List_int__o *v29; // x0
  ShopEntity_o *Item; // x0
  ShopEntity_o *v31; // x26
  __int64 v32; // x10
  int size; // w8
  unsigned __int64 v34; // x23
  signed __int64 v35; // x24
  int32_t v36; // w22
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418918A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Sort__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&ShopEntity_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418918A = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  v21 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v22 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_48;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    for ( i = 0; i < v25; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_48;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                               i,
                               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v31 = Item;
        v32 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v32
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v32 - 1] == ShopEntity_TypeInfo )
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
                           v31->fields.eventId,
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_48;
              v27 = *((_QWORD *)Instance + 13);
              if ( v27 >= 1 && v27 >= Time && *((_QWORD *)Instance + 11) <= Time )
              {
                if ( !v21 )
                  goto LABEL_48;
                if ( !System_Collections_Generic_List_int___Contains(
                        v21,
                        v31->fields.baseShopId,
                        (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
                {
                  Instance = (void *)ShopMaster__CheckBuyAfterCloseShop(this, v31->fields.eventId, v24);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    baseShopId = v31->fields.baseShopId;
                    v29 = v21;
                  }
                  else
                  {
                    if ( !v22 )
                      goto LABEL_48;
                    if ( System_Collections_Generic_List_int___Contains(
                           v22,
                           v31->fields.eventId,
                           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
                    {
                      continue;
                    }
                    baseShopId = v31->fields.eventId;
                    v29 = v22;
                  }
                  System_Collections_Generic_List_int___Add(
                    v29,
                    baseShopId,
                    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v21 )
  {
    size = v21->fields._size;
    if ( size >= 1 )
    {
      v34 = 0LL;
      v35 = size;
      while ( 1 )
      {
        if ( v34 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v36 = v21->fields._items->m_Items[v34 + 1];
        if ( !ShopMaster__IsPurchaseCloseEventShopItem(this, v36, v24) )
        {
          Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                               &entity,
                               v36,
                               (const MethodInfo_24E412C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            break;
        }
        if ( (__int64)++v34 >= v35 )
          goto LABEL_39;
        size = v21->fields._size;
      }
      if ( entity )
        return (int32_t)entity->fields.age;
LABEL_48:
      sub_B2C434(Instance, v19);
    }
  }
LABEL_39:
  if ( !v22 || v22->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_int___Sort(
    v22,
    (const MethodInfo_2F68F18 *)Method_System_Collections_Generic_List_int__Sort__);
  if ( !v22->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return v22->fields._items->m_Items[1];
}


ShopEntity_o *__fastcall ShopMaster__GetEntityOfFragmentsShop(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  ShopEntity_o *v19; // x0
  __int64 v20; // x1
  ShopEntity_o *v21; // x20
  __int64 v22; // x9
  int v23; // w8
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  int v29; // [xsp+0h] [xbp-40h]

  if ( (byte_4189195 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B2C35C(&ShopEntity_TypeInfo, v6);
    byte_4189195 = 1;
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
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v9);
    }
    v19 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                            Enumerator,
                            *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      goto LABEL_35;
    v22 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (ShopEntity_c *)v19->klass->_2.typeHierarchy[v22 - 1] != ShopEntity_TypeInfo )
    {
      v19 = (ShopEntity_o *)sub_B2C728(v19);
LABEL_35:
      sub_B2C434(v19, v20);
    }
    if ( v19->fields.shopType == 6 && v19->fields.payType == 8 )
    {
      v23 = 70;
      goto LABEL_25;
    }
  }
  v21 = 0LL;
  v23 = 68;
LABEL_25:
  v29 = v23;
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
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v9);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  if ( v29 == 68 )
    return 0LL;
  return v21;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  void *v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w22
  int32_t v21; // w23
  __int64 v22; // x10
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v25; // x21
  struct ShopMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4189186 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_ShopEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_ShopEntity__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v12);
    sub_B2C35C(&ShopEntity_TypeInfo, v13);
    sub_B2C35C(&Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, v14);
    sub_B2C35C(&ShopMaster___c_TypeInfo, v15);
    byte_4189186 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
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
        v17 = list;
        v22 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v22
          && *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) == ShopEntity_TypeInfo
          && *((_DWORD *)list + 6) == eventId )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
      if ( ++v21 >= v20 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B2C434(list, v17);
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
    v25 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v25,
      Method_ShopMaster___c__GetEventEntitiyList_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ShopEntity___ctor__);
    v26 = ShopMaster___c_TypeInfo->static_fields;
    v26->__9__4_0 = (struct System_Comparison_ShopEntity__o *)_9__4_0;
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
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ShopMaster__GetEventItemList(
        ShopMaster_o *this,
        int32_t eventId,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  void *list; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  __int64 v27; // x1
  const MethodInfo *v28; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  __int64 IsHideItem; // x0
  __int64 v40; // x1
  __int64 v41; // x23
  ShopEntity_c *v42; // x1
  __int64 v43; // x9
  __int64 v44; // x8
  __int64 v45; // x9
  unsigned __int64 v46; // x25
  signed __int64 v47; // x26
  int32_t v48; // w2
  int size; // w8
  unsigned int v50; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x8
  __int64 v52; // x9
  __int64 v53; // x8
  WarEntity_o *Entity; // x0
  System_Int32_array *v55; // x20
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v62; // x21
  struct ShopMaster___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  int v70; // w21
  __int64 v71; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v72; // x8
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x0

  if ( (byte_418918D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Comparison_ItemEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_ItemEntity__TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(&int___TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v18);
    sub_B2C35C(&System_Collections_Generic_List_ItemEntity__TypeInfo, v19);
    sub_B2C35C(&ShopEntity_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&Method_ShopMaster___c__GetEventItemList_b__11_0__, v22);
    sub_B2C35C(&ShopMaster___c_TypeInfo, v23);
    byte_418918D = 1;
  }
  if ( eventId < 1 )
    return 0LL;
  list = this->fields.list;
  if ( !list )
    goto LABEL_83;
  if ( !System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
          (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    return 0LL;
  list = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_83;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)list,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v27);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v28);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_20:
      v38 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    IsHideItem = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                   Enumerator,
                   *(_QWORD *)(v38 + 8));
    v41 = IsHideItem;
    if ( !IsHideItem )
      sub_B2C434(0LL, v40);
    v42 = ShopEntity_TypeInfo;
    v43 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)IsHideItem + 300LL) < (unsigned int)v43
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)IsHideItem + 200LL) + 8 * v43 - 8) != ShopEntity_TypeInfo )
    {
      IsHideItem = sub_B2C728(IsHideItem);
LABEL_80:
      sub_B2C434(IsHideItem, v42);
    }
    if ( *(_DWORD *)(IsHideItem + 24) == eventId )
    {
      v44 = *(_QWORD *)(IsHideItem + 32);
      if ( !v44 )
        sub_B2C434(IsHideItem, ShopEntity_TypeInfo);
      v45 = *(_QWORD *)(v44 + 24);
      if ( (int)v45 >= 1 )
      {
        v46 = 0LL;
        v47 = (int)v45;
        while ( 1 )
        {
          if ( v46 >= *(unsigned int *)(v44 + 24) )
          {
            v75 = sub_B2C460(IsHideItem);
            sub_B2C400(v75, 0LL);
          }
          v48 = *(_DWORD *)(v44 + 4 * v46 + 32);
          if ( v48 >= 1 )
          {
            IsHideItem = ShopMaster__IsHideItem((ShopMaster_o *)IsHideItem, eventId, v48, v28);
            if ( (IsHideItem & 1) == 0 )
            {
              if ( !v26 )
                sub_B2C434(IsHideItem, v42);
              size = v26->fields._size;
              if ( size < 1 )
              {
LABEL_42:
                v53 = *(_QWORD *)(v41 + 32);
                if ( !v53 )
                  goto LABEL_80;
                if ( v46 >= *(unsigned int *)(v53 + 24) )
                {
                  v76 = sub_B2C460(IsHideItem);
                  sub_B2C400(v76, 0LL);
                }
                if ( !MasterData_WarQuestSelectionMaster )
                  sub_B2C434(IsHideItem, v42);
                Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           *(_DWORD *)(v53 + 4 * v46 + 32),
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v26,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
              }
              else
              {
                v50 = 0;
                while ( 1 )
                {
                  if ( size <= v50 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                  v51 = v26->fields._items->m_Items[v50];
                  if ( !v51 )
                    sub_B2C434(IsHideItem, v42);
                  v52 = *(_QWORD *)(v41 + 32);
                  if ( !v52 )
                    sub_B2C434(IsHideItem, v42);
                  if ( v46 >= *(unsigned int *)(v52 + 24) )
                  {
                    v74 = sub_B2C460(IsHideItem);
                    sub_B2C400(v74, 0LL);
                  }
                  if ( v51->fields.missionTargetId == *(_DWORD *)(v52 + 4 * v46 + 32) )
                    break;
                  size = v26->fields._size;
                  if ( (int)++v50 >= size )
                    goto LABEL_42;
                }
              }
            }
          }
          if ( (__int64)++v46 >= v47 )
            break;
          v44 = *(_QWORD *)(v41 + 32);
          if ( !v44 )
            sub_B2C434(IsHideItem, v42);
        }
      }
    }
  }
  v56 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_54;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_54:
    v59 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(Enumerator, *(_QWORD *)(v59 + 8));
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
    v62 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v62,
      Method_ShopMaster___c__GetEventItemList_b__11_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ItemEntity___ctor__);
    v63 = ShopMaster___c_TypeInfo->static_fields;
    v63->__9__11_0 = (struct System_Comparison_ItemEntity__o *)_9__11_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v63->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  if ( !v26 )
LABEL_83:
    sub_B2C434(list, *(_QWORD *)&eventId);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v26,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v70 = v26->fields._size;
  list = (void *)sub_B2C374(int___TypeInfo, (unsigned int)v70);
  v55 = (System_Int32_array *)list;
  if ( v70 >= 1 )
  {
    v71 = 0LL;
    while ( 1 )
    {
      if ( v26->fields._size <= (unsigned int)v71 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v72 = v26->fields._items->m_Items[v71];
      if ( !v72 || !list )
        break;
      if ( (unsigned int)v71 >= *((_DWORD *)list + 6) )
      {
        v77 = sub_B2C460(list);
        sub_B2C400(v77, 0LL);
      }
      *((_DWORD *)list + v71++ + 8) = v72->fields.missionTargetId;
      if ( (int)v71 >= v70 )
        return v55;
    }
    goto LABEL_83;
  }
  return v55;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopMaster__GetEventShopBaseShopId(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  __int64 v12; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4189192 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4189192 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_15;
    if ( !EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)entity, 0LL) )
      goto LABEL_13;
  }
  Instance = (DataManager_o *)ShopMaster__GetEnableEventEntitiyList(this, eventId, v9);
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
    v12 = sub_B2C460(Instance);
    sub_B2C400(v12, 0LL);
  }
  lookup = Instance->fields.lookup;
  if ( !lookup )
LABEL_15:
    sub_B2C434(Instance, v8);
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
      sub_B2C434(EntityOfFragmentsShop, v3);
    v5 = *(_QWORD *)&prices->max_length;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
      {
        v6 = sub_B2C460(EntityOfFragmentsShop);
        sub_B2C400(v6, 0LL);
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


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetOpenedEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
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
  int64_t Time; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  __int64 v19; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v22; // w23
  int32_t v23; // w24
  ShopEntity_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x25
  __int64 v26; // x10
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x19
  Il2CppObject *v29; // x20
  struct ShopMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_4189187 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_ShopEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_ShopEntity__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&ShopEntity_TypeInfo, v14);
    sub_B2C35C(&Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__, v15);
    sub_B2C35C(&ShopMaster___c_TypeInfo, v16);
    byte_4189187 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                               v23,
                               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v26 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == ShopEntity_TypeInfo
          && Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsOpened(Item, Time, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v18 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              v25,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
          }
        }
      }
      if ( ++v23 >= v22 )
        goto LABEL_18;
    }
LABEL_28:
    sub_B2C434(list, v19);
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
    v29 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v29,
      Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ShopEntity___ctor__);
    v30 = ShopMaster___c_TypeInfo->static_fields;
    v30->__9__5_0 = (struct System_Comparison_ShopEntity__o *)_9__5_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v30->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v18 )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsEnableEventShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  __int64 v11; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x8

  if ( (byte_4189194 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&ShopEntity_TypeInfo, v6);
    byte_4189194 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B2C434(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_17;
    v11 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (ShopEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] != ShopEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    v12 = (ShopEntity_c *)list->klass->_2.typeHierarchy[*(&ShopEntity_TypeInfo->_2.bitflags2 + 1) - 1] == ShopEntity_TypeInfo
        ? list
        : 0LL;
    if ( LODWORD(v12->fields._syncRoot) == eventId )
      return 1;
    if ( ++v10 >= v9 )
      return 0;
  }
}


bool __fastcall ShopMaster__IsEnableEventShop_27646972(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t Time; // x20
  ShopReleaseMaster_o *Master_WarQuestSelectionMaster; // x21
  WarQuestSelectionMaster_o *v13; // x0
  __int64 v14; // x1
  UserShopMaster_o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int i; // w24
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  ShopEntity_o *v24; // x0
  ShopEntity_o *v25; // x23
  __int64 v26; // x9
  __int64 UserId; // x0
  __int64 v28; // x1
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v36; // w8
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  int v42; // [xsp+0h] [xbp-60h]

  if ( (byte_4189197 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_DataManager_GetMaster_ShopReleaseMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_UserShopMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&ShopEntity_TypeInfo, v10);
    byte_4189197 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  v13 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !this->fields.list )
    sub_B2C434(v13, v14);
  v15 = (UserShopMaster_o *)v13;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  for ( i = 0; ; i |= ShopReleaseMaster__CondClearCheck(Master_WarQuestSelectionMaster, v25->fields.id, 1, v31) )
  {
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v33 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v33;
          p_offset += 4;
          if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_35;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_35:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        v36 = 160;
        goto LABEL_39;
      }
      v20 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v21 = 0LL;
        v22 = &v20->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v21;
          v22 += 4;
          if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v23 = (__int64)&v20->vtable[*v22].method;
      }
      else
      {
LABEL_16:
        v23 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v31);
      }
      v24 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                              Enumerator,
                              *(_QWORD *)(v23 + 8));
      v25 = v24;
      if ( v24 )
      {
        v26 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v26
          || (ShopEntity_c *)v24->klass->_2.typeHierarchy[v26 - 1] != ShopEntity_TypeInfo )
        {
          UserId = sub_B2C728(v24);
LABEL_50:
          sub_B2C434(UserId, v28);
        }
        if ( v24->fields.shopType == 12 && ShopEntity__IsEnable(v24, Time, 0LL) )
          break;
      }
    }
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v28 = UserId;
    if ( !v15 )
      goto LABEL_50;
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(v15, UserId, v25->fields.id, 0LL);
    if ( EntityDefinitely )
    {
      if ( EntityDefinitely->fields.num >= v25->fields.limitNum )
        break;
    }
    if ( !Master_WarQuestSelectionMaster )
      sub_B2C434(EntityDefinitely, v30);
  }
  v36 = 162;
LABEL_39:
  v42 = v36;
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
        goto LABEL_43;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_43:
    v40 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  if ( v42 != 160 )
    LOBYTE(i) = 0;
  return i & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsEventCloseWithItemPurchase(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
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
  __int64 v17; // x1
  __int64 v18; // x1
  int64_t Instance; // x0
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_int__int__o *v21; // x21
  int32_t v22; // w22
  int64_t v23; // x23
  __int64 v24; // x10
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x24
  int v26; // w24
  bool v27; // w0
  int32_t v28; // w1
  int32_t v29; // w8
  const MethodInfo_2E24540 *v30; // x3
  int32_t v31; // w2
  unsigned int Count; // w0
  System_Int32_array *v33; // x19
  int max_length; // w8
  unsigned int v35; // w9
  __int64 v37; // x0
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4189193 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v12);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B2C35C(&int___TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&ShopEntity_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__, v18);
    byte_4189193 = 1;
  }
  value = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  v21 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v21,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_26;
  v22 = 0;
  while ( 1 )
  {
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v22 >= (int)Instance )
      break;
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_26;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                          v22,
                          (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_26;
    v23 = Instance;
    v24 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v24
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v24 - 8) != ShopEntity_TypeInfo )
    {
      goto LABEL_26;
    }
    if ( *(_DWORD *)(Instance + 24) == eventId )
    {
      value = 0;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
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
                            *(_DWORD *)(v23 + 16),
                            0LL);
      if ( !Instance || !v21 )
        goto LABEL_26;
      v26 = *(_DWORD *)(Instance + 28);
      v27 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
              v21,
              *(_DWORD *)(v23 + 20),
              &value,
              (const MethodInfo_2E26150 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
      v28 = *(_DWORD *)(v23 + 20);
      if ( v27 )
      {
        System_Collections_Generic_Dictionary_int__int___Remove(
          v21,
          v28,
          (const MethodInfo_2E25E38 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
        v29 = value;
        if ( (value & 0x80000000) != 0 )
        {
          v29 = -value;
          value = -value;
        }
        v28 = *(_DWORD *)(v23 + 20);
        v30 = (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v31 = v29 + v26;
      }
      else
      {
        v30 = (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v31 = -v26;
      }
      System_Collections_Generic_Dictionary_int__int___Add(v21, v28, v31, v30);
    }
    Instance = (int64_t)this->fields.list;
    ++v22;
    if ( !Instance )
      goto LABEL_26;
  }
  if ( !v21 )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_int__int___get_Count(
          v21,
          (const MethodInfo_2E24140 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) )
    return 1;
  Count = System_Collections_Generic_Dictionary_int__int___get_Count(
            v21,
            (const MethodInfo_2E24140 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  v33 = (System_Int32_array *)sub_B2C374(int___TypeInfo, Count);
  Instance = (int64_t)System_Collections_Generic_Dictionary_int__int___get_Values(
                        v21,
                        (const MethodInfo_2E242E8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
  if ( !Instance
    || (System_Collections_Generic_Dictionary_ValueCollection_int__int___CopyTo(
          (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
          v33,
          0,
          (const MethodInfo_24012AC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__),
        !v33) )
  {
LABEL_26:
    sub_B2C434(Instance, v20);
  }
  max_length = v33->max_length;
  if ( max_length < 1 )
    return 1;
  v35 = 0;
  while ( 1 )
  {
    if ( v35 >= max_length )
    {
      v37 = sub_B2C460(Instance);
      sub_B2C400(v37, 0LL);
    }
    if ( v33->m_Items[v35 + 1] <= 0 )
      break;
    if ( (int)++v35 >= max_length )
      return 1;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsHideItem(ShopMaster_o *this, int32_t eventId, int32_t id, const MethodInfo *method)
{
  __int64 v6; // x1
  void *Instance; // x0
  __int64 v8; // x1
  int v9; // w8
  __int64 v10; // x9
  __int64 v11; // x11
  __int64 v13; // x0

  if ( (byte_418918E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418918E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventItemDisplayMaster___)) == 0LL )
  {
LABEL_15:
    sub_B2C434(Instance, v8);
  }
  Instance = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
               (EventItemDisplayMaster_o *)Instance,
               eventId,
               8,
               0,
               0LL);
  if ( !Instance )
    return 1;
  v9 = *((_DWORD *)Instance + 6);
  if ( v9 < 1 )
    return 1;
  v10 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= v9 )
    {
      v13 = sub_B2C460(Instance);
      sub_B2C400(v13, 0LL);
    }
    v11 = *((_QWORD *)Instance + v10 + 4);
    if ( !v11 )
      goto LABEL_15;
    if ( *(_DWORD *)(v11 + 32) == id && *(_DWORD *)(v11 + 28) == 1 )
      return 0;
    if ( (int)++v10 >= v9 )
      return 1;
  }
}


bool __fastcall ShopMaster__IsOpenPurchaseCloseShop(
        ShopMaster_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t eventId; // w21
  EventDetailEntity_o *Entity; // x0

  v4 = this;
  if ( (byte_418918F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventDetailMaster___, shopEntity);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    this = (ShopMaster_o *)sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    byte_418918F = 1;
  }
  if ( !shopEntity )
    goto LABEL_14;
  eventId = shopEntity->fields.eventId;
  if ( eventId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( this )
    {
      Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        eventId,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( Entity && EventDetailEntity__IsClosePurchaseShop(Entity, 0LL) )
        return ShopMaster__IsPurchaseCloseEventShopItem(v4, shopEntity->fields.baseShopId, method);
      return 0;
    }
LABEL_14:
    sub_B2C434(this, shopEntity);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  int64_t v16; // x20
  __int64 v17; // x9
  const MethodInfo *v19; // x2
  ShopReleaseMaster_o *v20; // x21
  int32_t TargetShopGroupId; // w22
  const MethodInfo *v22; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  const MethodInfo *v24; // x3
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  ShopMaster_o *v27; // x0
  int64_t *v28; // x1
  int64_t *v29; // x2
  int32_t v30; // w3
  const MethodInfo *v31; // x4

  v3 = baseShopId;
  if ( (byte_4189191 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&baseShopId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopGroupMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&ShopEntity_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4189191 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                      v15,
                      (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    *(_QWORD *)&baseShopId = ShopEntity_TypeInfo;
    v16 = list;
    v17 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v17
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v17 - 8) != ShopEntity_TypeInfo )
    {
      break;
    }
    if ( *(_DWORD *)(list + 20) == v3 )
    {
      list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        list = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)list,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
        if ( list )
        {
          v20 = (ShopReleaseMaster_o *)list;
          TargetShopGroupId = ShopReleaseMaster__GetTargetShopGroupId((ShopReleaseMaster_o *)list, v3, v19);
          list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( list )
          {
            list = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)list,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopGroupMaster___);
            if ( list )
            {
              TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)list, TargetShopGroupId, v22);
              if ( TargetEntityList && *(_QWORD *)&TargetEntityList->max_length )
                return ShopReleaseMaster__CondClearCheck(v20, v3, 82, v24);
              list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( list )
              {
                MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)list,
                                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
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
                  return EntityDefinitely && EntityDefinitely->fields.num >= *(_DWORD *)(v16 + 88);
                }
              }
            }
          }
        }
      }
LABEL_28:
      sub_B2C434(list, *(_QWORD *)&baseShopId);
    }
    if ( ++v15 >= v14 )
      return 1;
  }
  v27 = (ShopMaster_o *)sub_B2C728(list);
  return ShopMaster__GetEnableEventPeriod(v27, v28, v29, v30, v31);
}


bool __fastcall ShopMaster__PurchaseCloseEventShop(
        ShopMaster_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t eventId; // w20
  EventDetailEntity_o *Entity; // x0

  if ( (byte_4189190 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventDetailMaster___, shopEntity);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    this = (ShopMaster_o *)sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    byte_4189190 = 1;
  }
  if ( !shopEntity )
    goto LABEL_12;
  eventId = shopEntity->fields.eventId;
  if ( !eventId )
    return shopEntity->fields.shopType == 12;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !this )
LABEL_12:
    sub_B2C434(this, shopEntity);
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                    eventId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
    return EventDetailEntity__IsClosePurchaseShop(Entity, 0LL);
  return shopEntity->fields.shopType == 12;
}


void __fastcall ShopMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ShopMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185449 & 1) == 0 )
  {
    sub_B2C35C(&ShopMaster___c_TypeInfo, v1);
    byte_4185449 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ShopMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ShopMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__2_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__3_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntitiyList_b__6_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntityList_b__7_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventEntitiyList_b__4_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventItemList_b__11_0(
        ShopMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetOpenedEventEntitiyList_b__5_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}